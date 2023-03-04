#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
    printf("$0($0) = %lx, $1(ra) = %lx, $2(sp) = %lx, $3(gp) = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$4(tp) = %lx, $5(t0) = %lx, $6(t1) = %lx, $7(t2) = %lx \n",gpr(4),gpr(5),gpr(6),gpr(7));
    printf("$8(s0) = %lx, $9(s1) = %lx, $10(a0) = %lx, $11(a1) = %lx \n",gpr(8),gpr(9),gpr(10),gpr(11));
    printf("$12(a2) = %lx, $13(a3) = %lx, $14(a4) = %lx, $15(a5) = %lx \n",gpr(12),gpr(13),gpr(14),gpr(15));
    printf("$16(a6) = %lx, $17(a7) = %lx, $18(s2) = %lx, $19(s3) = %lx \n",gpr(16),gpr(17),gpr(18),gpr(19));
    printf("$20(s4) = %lx, $21(s5) = %lx, $22(s6) = %lx, $23(s7) = %lx \n",gpr(20),gpr(21),gpr(22),gpr(23));
    printf("$24(s8) = %lx, $25(s9) = %lx, $26(s10) = %lx, $27(s11) = %lx \n",gpr(24),gpr(25),gpr(26),gpr(27));
    printf("$28(t3) = %lx, $29(t4) = %lx, $30(t5) = %lx, $31(t6) = %lx \n",gpr(28),gpr(29),gpr(30),gpr(31));
	printf("pc = %lx\n",cpu.pc);
}

void isa_csr_reg_display() {
    printf("--- Display CSR REG ---\n");
    printf("mstatus: 0x%lx, misa: 0x%lx \n", csr(0x300),csr(0x301));
    printf("mie: 0x%lx, mtvec: 0x%lx \n", csr(0x304),csr(0x305));
    printf("mepc: 0x%lx, mcause: 0x%lx \n",csr(0x341),csr(0x342));
    printf("mtval: 0x%lx, mip: 0x%lx \n",csr(0x343),csr(0x345));
}

word_t isa_reg_str2val(const char *s, bool *success) {
    s = s + 1;
    for(int i = 0; i<32; i++){
        if(strcmp(s,regs[i])==0){
            *success = true;
            return gpr(i);        
        };
    }
    int temp = atoi(s);
    if(temp>0 && temp<=31){
        *success = true;
        return gpr(temp);
    }
    printf("%s \n",s);
    *success = false;
    return 0;
}

word_t isa_csr_reg_str2val(const char *s, bool *success){
    s = s+5;
    int i = atoi(s);
    if(s != NULL){
        *success = true;
    }
    if(i<0 || i>31)return 0;

    return cpu.csr[i];
}
