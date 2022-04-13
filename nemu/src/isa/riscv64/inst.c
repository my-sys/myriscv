#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define CSR_R(i) csr(i) 
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_R,
  TYPE_B, TYPE_J, TYPE_CSR,  TYPE_EXCEPTION,
  TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)
#define csrR(n)  do { *csr_value =  CSR_R(n);} while(0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return SEXT(BITS(i,31,31) << 19 | BITS(i,30,21) | BITS(i,20,20)<<10 | BITS(i,19,12)<<11,20)<<1;}
static word_t immB(uint32_t i) { int64_t k =  SEXT(BITS(i,31,31)<<11 | BITS(i,30,25)<<4 | BITS(i,11,8) | BITS(i,10,10)<<10,12); 
printf(" immB value = 0x%lx \n",k);
k = k <<1;
printf("hah 0x%llx \n",BITS(i,31,31)<<11 | BITS(i,30,25)<<4 | BITS(i,11,8) | BITS(i,10,10)<<10);
printf("xxx 0x%llx \n",BITS(i,31,31)<<11 | BITS(i,30,25)<<4 | BITS(i,11,8));
printf("i <<11 value =0x%llx \n", BITS(i,31,31));
printf(" i value = 0x%x \n",i);
printf(" immB value = 0x%lx \n",k);
return k;
}

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, word_t *csr_addr, word_t *csr_value, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  int csr = BITS(i, 31,20);
  destR(rd);
  *csr_addr = csr;
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(i));break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_J: src1I(immJ(i)); break;
    case TYPE_R: src1R(rs1); src2R(rs2);break;
    case TYPE_B: src1R(rs1); src2R(rs2);destI(immB(i));break;
    case TYPE_CSR: src1R(rs1); csrR(csr); *src2 = USEXT(BITS(i,19, 15),5);break; // it may be have some problem SEXT BITS USEXT signed unsigned ?
    case TYPE_EXCEPTION: break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0, csr_value = 0, csr_addr = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &csr_addr, &csr_value, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1 );
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1,31,0) + BITS(src2,31,0),32));
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1,31,0)+ BITS(src2,31,0),32));
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, (src1 == src2) ?(s->dnpc = s->pc + dest):(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, ((int64_t)src1 >= (int64_t)src2) ?(s->dnpc = s->pc + dest):(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, (src1 >= src2) ?(s->dnpc = s->pc + dest):(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, ((int64_t)src1 < (int64_t)src2)?(s->dnpc = s->pc + dest) :(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, (src1 < src2)?(s->dnpc = s->pc + dest):(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, (src1 != src2)?(s->dnpc = s->pc + dest):(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , CSR, R(dest) = csr_value; CSR_R(csr_addr) = csr_value & (~src1));
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrci , CSR, R(dest) = csr_value; CSR_R(csr_addr) = csr_value | (~src2));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , CSR, R(dest) = csr_value; CSR_R(csr_addr) = csr_value | (src1));
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrsi , CSR, R(dest) = csr_value; CSR_R(csr_addr) = csr_value | (src2));
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , CSR, R(dest) = csr_value; CSR_R(csr_addr) = src1);
  INSTPAT("??????? ????? ????? 101 ????? 11100 11", csrrwi , CSR, R(dest) = csr_value; CSR_R(csr_addr) = src2; CSR_R(csr_addr) = (csr_value<<5));
  
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, s->dnpc = s->pc + src1; R(dest) = s->pc + 4);
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, s->dnpc = (src1 + src2) & 0xfffffffffffffffe; R(dest) = s->pc + 4);
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? 00000 000 00000 00011 11", fence  , N, );
  INSTPAT("0000000 00000 00000 001 00000 00011 11", fence_i, N, );


  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
