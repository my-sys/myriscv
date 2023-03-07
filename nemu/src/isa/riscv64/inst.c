#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
typedef signed __int128 int128_t;
typedef unsigned __int128 uint128_t;

#define R(i) gpr(i)
#define CSR_R(i) csr(i) 
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_R,
  TYPE_B, TYPE_J, TYPE_CSR,  TYPE_EXCEPTION, TYPE_IR,
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
static word_t immJ(uint32_t i) { return SEXT((BITS(i,31,31) << 19 | BITS(i,30,21) | BITS(i,20,20)<<10 | BITS(i,19,12)<<11),20)<<1;}
static word_t immB(uint32_t i) { return SEXT((BITS(i,31,31)<<11 | BITS(i,30,25)<<4 | BITS(i,11,8) | BITS(i,7,7)<<10),12)<<1;}

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
    case TYPE_IR: src1R(rs1); *src2 = BITS(i,25,20);break;
  }
}

void ftrace(word_t next_pc, word_t pc,bool flag){
#ifdef CONFIG_FTRACE
    xingk_ftrace(next_pc, pc,flag);
#endif 
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
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, ((int64_t)src1 >= (int64_t)src2) ?( s->dnpc = s->pc + dest):( s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, (src1 >= src2) ?(s->dnpc = s->pc + dest):(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, ((int64_t)src1 < (int64_t)src2)?(s->dnpc = s->pc + dest) :(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, (src1 < src2)?(s->dnpc = s->pc + dest):(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, (src1 != src2)?(s->dnpc = s->pc + dest):(s->dnpc = s->snpc));
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , CSR, R(dest) = csr_value; CSR_R(csr_addr) = csr_value & (~src1));
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrci , CSR, R(dest) = csr_value; CSR_R(csr_addr) = csr_value & (~src2));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , CSR, R(dest) = csr_value; CSR_R(csr_addr) = csr_value | (src1));
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrsi , CSR, R(dest) = csr_value; CSR_R(csr_addr) = csr_value | (src2));
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , CSR, R(dest) = csr_value; CSR_R(csr_addr) = src1);
  INSTPAT("??????? ????? ????? 101 ????? 11100 11", csrrwi , CSR, R(dest) = csr_value; CSR_R(csr_addr) = src2; CSR_R(csr_addr) = (csr_value<<5));
  
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT(Mr(src1 + src2, 1),8));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1) & 0xff);
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + src2,2),16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + src2, 2)&0xffff);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + src2,4),32));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest) = Mr(src1 + src2,4)&0xffffffff);
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2));
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(dest) = src1 <<(src2 & 0x3f ));
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , IR, R(dest) = src1 << src2);
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw  , IR, R(dest) = SEXT((src1 << (src2 & 0x1f)),32));
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT((src1 << (src2 & 0x1f)),32));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = ((int64_t) src1 < (int64_t)src2)?(1):(0));
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(dest) = ((int64_t) src1 < (int64_t)src2)?(1):(0));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = ((uint64_t) src1 < (uint64_t)(src2 & 0xfff))?(1):(0));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < src2)?(1):(0));
  //c语言算数右移有符号时，逻辑右移无符号时
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(dest) = (int64_t)src1 >> (src2 & 0x3f));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , IR, R(dest) = (int64_t)src1 >> src2);
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw  , IR, uint32_t temp = (uint32_t)src1; R(dest) = SEXT(((int32_t)temp >>(src2 & 0x1f)),32));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, uint32_t temp = (uint32_t)src1; R(dest) = SEXT(((int32_t)temp >>(src2 & 0x1f)),32));
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(dest) = src1 >> (src2 & 0x3f));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , IR, R(dest) = src1 >> (src2 & 0x3f));
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw  , IR, uint32_t temp = (uint32_t)src1; R(dest) = SEXT((temp >> (src2 & 0x1f)),32));
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, uint32_t temp = (uint32_t) src1; R(dest) = SEXT((temp >> (src2 & 0x1f)),32));

  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 + (~src2 + 1));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, uint32_t temp1 = (uint32_t) src1; uint32_t temp2 = (uint32_t) src2; R(dest) = SEXT((temp1 + (~temp2 + 1)),32));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest,4, src2 & 0xffffffff));

  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = src1 ^ src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ src2);

  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(dest) = (int64_t)src1 / (int64_t)src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(dest) = src1 / src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw  , R, uint32_t temp1 = src1; uint32_t temp2 = src2; R(dest) = SEXT((temp1/temp2),32));
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, int32_t temp1 = src1;int32_t temp2 = src2; R(dest) = SEXT((temp1/temp2),32));
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, int64_t temp1 = src1; int64_t temp2 = src2; R(dest) = temp1 * temp2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, int128_t temp1 = src1; int128_t temp2 = src2; R(dest) = (temp1 * temp2)>>64);
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, int128_t temp1 = src1; int128_t temp2 = src2 & 0x00000000ffffffff;R(dest) = (temp1 * temp2)>>64);
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, uint128_t temp1 = src1; uint128_t temp2 = src2; R(dest) = (temp1* temp2)>>64);
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, int32_t temp1 = src1; int32_t temp2 = src2; R(dest) = SEXT((temp1 * temp2),32));
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, int64_t temp1 = src1; int64_t temp2 = src2; R(dest) = temp1 % temp2);
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, uint64_t temp1 = src1; uint64_t temp2 = src2; R(dest) = temp1 % temp2);
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  , R, uint32_t temp1 = src1; uint32_t temp2 = src2; R(dest) = SEXT((temp1 % temp2),32));
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, int32_t temp1 = src1; int32_t temp2 = src2; R(dest) = SEXT((temp1 % temp2),32));
  INSTPAT("0001000 00101 00000 000 00000 11100 11", wfi    , N, );

  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, s->dnpc = s->pc + src1; R(dest) = s->pc + 4;ftrace(s->dnpc, s->pc,true));
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, s->dnpc = (src1 + src2) & 0xfffffffffffffffe; R(dest) = s->pc + 4;ftrace(s->dnpc, s->pc,(s->isa.inst.val != 0x00008067)));
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? 00000 000 00000 00011 11", fence  , N, );
  INSTPAT("0000000 00000 00000 001 00000 00011 11", fence_i, N, );
#ifndef CONFIG_TARGET_SHARE
  //for spkie difftest this is wrong
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = CSR_R(0x341);word_t temp = CSR_R(0x300);if((temp & 0x80) == 0){CSR_R(0x300) = (temp &0xfffffffffffffff7);}else{CSR_R(0x300) = temp | 0x8;});
#else
  // for npc difftest this is real 
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = CSR_R(0x341);word_t temp = CSR_R(0x300);if((temp & 0x80) == 0){CSR_R(0x300) = (temp &0xfffffffffffffff7)|0x80;}else{CSR_R(0x300) = temp | 0x88;});
#endif
  INSTPAT("0001000 00010 00000 000 00000 11100 11", sret   , N, s->dnpc = CSR_R(0x141);word_t temp = CSR_R(0x100); if((temp & 0x20) == 0){CSR_R(0x100) = (temp & 0xfffffffffffffffd)|0x20;}else{CSR_R(0x100) = temp | 0x22;});
  INSTPAT("0001001 ????? ????? 000 00000 11100 11", sfence_vma, N, );
  // INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, CSR_R(0x341) = s->pc; CSR_R(0x342) = 0xb; word_t temp_addr = CSR_R(0x305);s->dnpc = isa_raise_intr(11,temp_addr));
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(11,s->pc));

  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}
 
int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
#ifdef CONFIG_ITRACE
  xingk_iringbuf(s, s->pc);
#endif 
  return decode_exec(s);
}
