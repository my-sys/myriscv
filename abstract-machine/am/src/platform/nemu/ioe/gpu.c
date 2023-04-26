#include <am.h>
#include <nemu.h>
#include <stdio.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  int i;
  int w = 400;  // TODO: get the correct width
  int h = 300;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i< w * h; i++)fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 120000
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *temp = (uint32_t *)ctl->pixels;
  int x = ctl->x;
  int y = ctl->y;
  int w = ctl->w;
  int h = ctl->h;
  int i,j;
  int temp_j_400 = y*400;
  int temp_j_w = 0;
  for(j=0;j<h;j++){
    for(i=0;i<w;i++){
      fb[temp_j_400+x+i]=temp[temp_j_w+i];
    }
	temp_j_400 = temp_j_400 + 400;
	temp_j_w	= temp_j_w + w;
  }

//   uint64_t *fb = (uint64_t *)(uintptr_t)FB_ADDR;
//   uint64_t *temp = (uint64_t *)ctl->pixels;
//   int x = 0;///((ctl->x)>>1);
//   int y = 0;//ctl->y;
//   int w = 200;//(ctl->w+1)>>1;
//   int h = 300;//ctl->h;
//   int i,j;
//   for(j=0;j<h;j++){
//     for(i=0;i<w;i++){
//       fb[(y+j)*200+x+i]=temp[j*w+i];
//     }
//   }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
