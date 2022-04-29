#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>
#include "decode.h"
void cpu_exec(uint64_t n);

void set_nemu_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);
void xingk_iringbuf(Decode *s, vaddr_t pc);
void xingk_ftrace(word_t next_pc, vaddr_t pc, bool flag);
#define NEMUTRAP(thispc, code) set_nemu_state(NEMU_END, thispc, code)
#define INV(thispc) invalid_inst(thispc)

#endif
