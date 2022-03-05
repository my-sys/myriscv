#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
    printf("$0() = %lx, $1() = %lx, $2() = %lx, $3() = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$4() = %lx, $5() = %lx, $6() = %lx, $7() = %lx \n",gpr(4),gpr(5),gpr(6),gpr(7));
    printf("$8() = %lx, $9() = %lx, $10() = %lx, $11() = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$12() = %lx, $13() = %lx, $14() = %lx, $15() = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$16() = %lx, $17() = %lx, $18() = %lx, $19() = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$20() = %lx, $21() = %lx, $22() = %lx, $23() = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$24() = %lx, $25() = %lx, $26() = %lx, $27() = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$28() = %lx, $29() = %lx, $30() = %lx, $31() = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
