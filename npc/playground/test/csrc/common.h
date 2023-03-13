#ifndef __COMMON_H__
#define __COMMON_H__
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
typedef uint64_t paddr_t;
typedef uint64_t vaddr_t;
typedef uint64_t word_t;

#define FMT_WORD "0x%016lx"
#define FMT_PADDR "0x%016lx"
// calculate the length of an array
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define EN_TRACE 0
//#define CONFIG_ITRACE_ALL
// #define CONFIG_ITRACE
 #define CONFIG_DIFFTEST
#endif 