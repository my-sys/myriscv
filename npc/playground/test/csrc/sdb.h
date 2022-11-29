#ifndef __SDB_H__
#define __SDB_H__
#include "common.h"
word_t expr(char *e, bool *success);
void init_regex();
void create_watchpoint(char *str);
void delete_watchpoint(int No);
void display_watchpoint();
bool calculate_watchpoint();
void init_sdb();
void sdb_mainloop();
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_disasm(const char *triple);
#endif