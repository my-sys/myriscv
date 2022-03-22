#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);
void init_regex();
void create_watchpoint(char *str);
void delete_watchpoint(int No);
void display_watchpoint();
#endif
