#ifndef __DISASM_H__
#define __DISASM_H__
#include "common.h"
#define CONFIG_ITRACE
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif