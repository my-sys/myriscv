#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

uint32_t NDL_GetTicks() {
  struct timeval tv_begin;
  gettimeofday(&tv_begin,NULL);

  return (tv_begin.tv_sec*1000 + tv_begin.tv_usec/1000);
}

int NDL_PollEvent(char *buf, int len) {
  FILE *fp  = fopen("/dev/events","r");
  int ret = fread(buf,1,len,fp);
  return ret;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  FILE *fp = fopen("/dev/fb","r+");
  size_t temp_xy = (5<<x)+y;
  fseek(fp, temp_xy, SEEK_SET);
  size_t temp_wh = (w<<16) +h;
  printf("%x,%d,%d,%x \n",(uint32_t)pixels,w,h,temp_wh);
  //fwrite(pixels,4,800,fp);
  write(5,pixels,800);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
