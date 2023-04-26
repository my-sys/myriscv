#include <am.h>
#include <stdio.h>
#include <riscv/riscv.h>
//VGA buffer 0x0000_0000 ~ 0x01FF_FFFF
//VGA 0x1000_2000 ~ 0x1000_2FFF 
#define VGA_FB_ADDR 	0x00000000
#define VGA_SYNC_ADDR 	0x10002004

void __am_gpu_init(){
	int i;
	int w = 400;	// TODO: get the correct width
	int h = 300;	// TODO: get the correct height
	uint32_t *fb = (uint32_t *)(uintptr_t)VGA_FB_ADDR;
	for (i = 0; i < w * h; i++)fb[i] = i;
	outl(VGA_SYNC_ADDR,1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg){
	*cfg = (AM_GPU_CONFIG_T){
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 120000
	};
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl){
	// uint32_t *fb = (uint32_t *)(uintptr_t)VGA_FB_ADDR;
	// uint32_t *temp = (uint32_t *)ctl->pixels;
  	// int x = ctl->x;
  	// int y = ctl->y;
  	// int w = ctl->w;
  	// int h = ctl->h;
	// int i,j;
	// for(j=0;j<h;j++){
	// 	for(i=0;i<w;i++){
	// 	fb[(y+j)*400+x+i]=temp[j*w+i];
	// 	}
	// }
	////64位版本与32位版本
	uint32_t *fb = (uint32_t *)(uintptr_t)VGA_FB_ADDR;
	uint32_t *temp = (uint32_t *)ctl->pixels;
  	int x = ctl->x;
  	int y = ctl->y;
  	int w = (ctl->w);
  	int h = ctl->h;
	int i,j;
	for(j=0;j<h;j++){
		for(i=0;i<w;i++){
		fb[(y+j)*400+x+i]=temp[j*w+i];
		}
	}
	if (ctl->sync) {
		outl(VGA_SYNC_ADDR, 1);
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}