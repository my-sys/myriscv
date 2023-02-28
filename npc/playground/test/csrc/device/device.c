#include "../common.h"
// #include <utils.h>
#include "device.h"

#include <SDL2/SDL.h>
#include <time.h>

static uint64_t boot_time = 0;
static uint64_t get_time_internal() {
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  return us;
}
uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

#define TIMER_HZ 60
void device_update(){
	static uint64_t last = 0;
	uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;
  vga_update_screen();
  SDL_Event event;
  while(SDL_PollEvent(&event)){
	switch(event.type){
		case SDL_QUIT:
			npc_state.state = NPC_QUIT;
			break;
		case SDL_KEYDOWN:
		case SDL_KEYUP: {
			uint8_t k = event.key.keysym.scancode;
			bool is_keydown = (event.key.type == SDL_KEYDOWN);
			send_key(k, is_keydown);
			break;
		}
		default: break;
	}
  }
}

void sdl_clear_event_queue(){
	SDL_Event event;
	while(SDL_PollEvent(&event));
}
extern ioe_init();
void init_device(){
	ioe_init();
	init_serial();
	init_vga();
	init_i8042();
}