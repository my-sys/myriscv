#include "device.h"
#include "../common.h"
static uint32_t *rtc_port_base = NULL;
uint64_t rtc_read(uint64_t offset){
	assert(offset == 0);
	uint64_t us = get_time();
	rtc_port_base[0] = (uint32_t)us;
	rtc_port_base[1] = us >> 32;
	return us;
}

void init_rtc(){
	rtc_port_base = (uint32_t *)malloc(8);
}