// #include <stdio.h>
// #include <stdlib.h>
// #include <stdint.h>
// #include <stdbool.h>
#include "device.h"
void serial_write(uint64_t offset,uint64_t wdata){
	assert(offset == 0);
	uint8_t ch = wdata;
	putc(ch, stderr);
}
void init_serial(){

}