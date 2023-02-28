#ifndef __DEVICE_H
#define __DEVICE_H 
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "../debug.h"
void send_key(uint8_t scancode, bool is_keydown);
uint64_t keyboard_read(uint64_t offset);
void init_i8042();

void vga_buffer_write(uint64_t offset,uint64_t wdata);
uint64_t vga_read(uint64_t offset);
void vga_write(uint64_t offset, uint64_t wdata);
void init_vga();

void serial_write(uint64_t offset,uint64_t wdata);
void init_serial();

void vga_update_screen();
void device_update();
void sdl_clear_event_queue();

uint64_t rtc_read(uint64_t offset);
void init_rtc();

uint64_t get_time();

void init_device();
extern NPCState npc_state;
#endif