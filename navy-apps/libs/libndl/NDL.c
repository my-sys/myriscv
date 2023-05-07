#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

//获取时间，单位毫秒
uint32_t NDL_GetTicks() {
  struct timeval tv_begin;
  gettimeofday(&tv_begin,NULL);

  return (tv_begin.tv_sec*1000 + tv_begin.tv_usec/1000);
}

int NDL_PollEvent(char *buf, int len) {
  //FILE *fp  = fopen("/dev/events","r");
  //int ret = fread(buf,1,len,fp);
  //获取按键信息,fread 是对read的封装，这层画图函数，调用驱动，没必要进行再次封装，也是加速的考虑
  int fd = open("/dev/events",0);
  int ret = read(fd,buf,len);
  return ret;
}

// 设置画布的大小
// 打开一张(*w) X (*h)的画布
// 如果*w和*h均为0, 则将系统全屏幕作为画布, 并将*w和*h分别设为系统屏幕的大小
void NDL_OpenCanvas(int *w, int *h) {
  if(*w == 0 && *h == 0){
    *w = 400;*h = 300;
  }
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
  screen_w = *w;screen_h = *h;
}


// 向画布`(x, y)`坐标处绘制`w*h`的矩形图像, 并将该绘制区域同步到屏幕上
// 图像像素按行优先方式存储在`pixels`中, 每个像素用32位整数以`00RRGGBB`的方式描述颜色
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  //FILE *fp = fopen("/dev/fb","r+");
#ifdef __ISA_NATIVE__
  //w = 400 ,h = 300;
  int i = 0;
  int fd = open("/dev/fb",0);
  for(i = 0; i<h;i++){
    lseek(fd,((y+i)*400+x)*4,SEEK_SET);
    write(fd,(uint32_t *)(pixels+i*w),w*4);
  }
#else
  int fd = open("/dev/fb",0);
  size_t temp_xy = (x<<16)+y;
  //先设置写指针的位置再进行写入,这里将其当做了坐标，与通常的读写不同
  lseek(fd,temp_xy,SEEK_SET);
  //fseek(fp, temp_xy, SEEK_SET);
  size_t temp_wh = (w<<16) +h;
  //printf("%x,%d,%d,%x \n",(uint32_t)pixels,w,h,temp_wh);
  //fwrite(0x800b9900,4,600,fp);
  //write(5,pixels,800);
  int ret = write(fd,pixels,temp_wh); //与通常不同,暂时不会存在问题，这其实就是与驱动的约定
  //printf("NDL_DrawRect %d\n",ret);
#endif
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
