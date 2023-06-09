#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  //word_t csr[32];
  vaddr_t pc;
  vaddr_t pre_pc;
  word_t csr[32]; //difftest中结构体指针强制转换，不应当改变成员变量的顺序。
} riscv64_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
