#ifndef __RAM_H__
#define __RAM_H__
#include "common.h"
uint64_t get_img_size();
void init_ram(const char* img_file);
uint64_t mem_read(uint64_t addr, int len);
#endif 

