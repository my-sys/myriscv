#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>
static struct csr_map{
    const char *csr_name;
    int csr_addr;
    int csr_map_idx;
}csr_maps [] = {
    {"mvendorid", 0xf11, 0},
    {"marchid",   0xf12, 1},
    {"mimpid",    0xf13, 2},
    {"mhartid",   0xf14, 3},
    {"mconfigptr",0xf15, 4},

    {"mstatus",   0x300, 5},
    {"misa",      0x301, 6},
    {"medeleg",   0x302, 7},
    {"mideleg",   0x303, 8},
    {"mie",       0x304, 9},
    {"mtvec",     0x305, 10},
    {"mcounteren",0x306, 11},
    
    {"mscratch",  0x340, 12},
    {"mepc",      0x341, 13},
    {"mcause",    0x342, 14},
    {"mtval",     0x343, 15},
    {"mip",       0x345, 16},
    {"mtinst",    0x34A, 17},

    {"menvcfg",   0x30A, 18},
    {"mseccfg",   0x747, 19},

    {"pmpcfg0",   0x3A0, 20},
    {"pmpcfg2",   0x3A2, 21},

    {"pmpaddr0",  0x3B0, 22},
    {"pmpaddr1",  0x3B1, 23},
    {"pmpaddr2",  0x3B2, 24},
    {"pmpaddr3",  0x3B3, 25}
};

#define CSR_NUMBER (int)(sizeof(csr_maps) / sizeof(csr_maps[0]))

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

static inline int check_csr_idx(int idx) {
    int ret = -1;
    for( int i =0;i< CSR_NUMBER; i++ ){
        if(csr_maps[i].csr_addr == idx){ret = csr_maps[i].csr_map_idx;break;}
    }
    assert(ret != -1);
    return ret;
}
#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
#define csr(idx) (cpu.csr[check_csr_idx(idx)])
static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
