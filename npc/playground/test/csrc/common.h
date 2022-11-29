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

// calculate the length of an array
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
//#define CONFIG_ITRACE
#endif 