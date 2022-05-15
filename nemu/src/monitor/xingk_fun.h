#ifndef __XINGK_FUN_H__
#define __XINGK_FUN_H__

#include <elf.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
typedef struct{
    uint64_t addr_value;
    uint64_t size;
    char fun_name[50];
}value_fun_name;
extern FILE *ftrace_log_fp ;
extern FILE *mtrace_log_fp;
void init_ftrace(const char *img_elf);
void find_fun_name(uint64_t value, char* str_fun_name);

void init_mtrace();
#endif 
