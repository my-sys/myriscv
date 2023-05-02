#include "../common.h"
#include <SDL2/SDL.h>
#define SCREEN_W 	400
#define SCREEN_H	300

#define str(x) #x
static uint32_t screen_width(){
	return SCREEN_W;
}

static uint32_t screen_height(){
	return SCREEN_H;
}
static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

static uint32_t *vmem = NULL;
static uint32_t vgactl_port_base[2];

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NPC", "riscv64");
  SDL_Init(SDL_INIT_VIDEO); //SDL_INIT_VIDEO | SDL_INIT_TIMER  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2, //2,1    ???????????????????????????????????????????xingk
      SCREEN_H * 2,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {
  
  if(vgactl_port_base[1] == 1){
    update_screen();
    vgactl_port_base[1] = 0;
  }
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
}

void vga_buffer_write(uint64_t offset,uint64_t wdata){
	//assert((offset % 4)==0);
	printf("offset 0x%lx\n",offset);
	uint32_t data;
	offset = offset >> 2;
	if(offset %2 == 0){
		data = wdata;
	}else{
		data = wdata >>32;
	}
	*(vmem +offset) = data;

}

//0x10002000 ~ 0x10002FFF
//0x10002000 	vgactl_port
//
uint64_t vga_read(uint64_t offset){
	//assert((offset == 0) ||(offset == 4));
	uint64_t temp;
	if(offset == 0){
		temp = vgactl_port_base[0];
	}else{
		temp = ((uint64_t)vgactl_port_base[1])<<32;
	}
	return temp;
	//offset 0, offset	
}

void vga_write(uint64_t offset, uint64_t wdata){
	assert((offset == 4));
	vgactl_port_base[1]=(wdata>>32);
	vga_update_screen();
}
void init_vga(){
	vgactl_port_base[0] = (screen_width() << 16) | screen_height();
	vmem = (uint32_t*)malloc(screen_size());
	init_screen();
	memset(vmem, 0, screen_size());
}