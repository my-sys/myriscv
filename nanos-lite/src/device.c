#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  const char * temp = buf;
  for(int i = 0; i< len; i++){
      putch(*(temp+i ));
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  int ret=0;
  if (ev.keycode == AM_KEY_NONE){
    return 0;
  }
  char *temp = buf;
  if(ev.keydown == 1){
    temp[0] = 'k';
    temp[1] = 'd';
    temp[2] = ' ';
    strcpy((temp+3),keyname[ev.keycode]);
    ret = 3 + strlen(keyname[ev.keycode]);
    temp[ret] = '\0';
  }else{
    temp[0] = 'k';
    temp[1] = 'u';
    temp[2] = ' ';
    strcpy((temp+3),keyname[ev.keycode]);
    ret = 3 + strlen(keyname[ev.keycode]);
    temp[ret] = '\0';
  }
  return ret + 1;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T temp = io_read(AM_GPU_CONFIG);
  char *temp_buf = buf;
  sprintf(temp_buf,"WIDTH : %d \n",temp.width);
  int len_temp = strlen(temp_buf);
  sprintf((temp_buf+len_temp),"HEIGHT : %d \n",temp.height);
  len_temp = strlen(temp_buf);
  return len_temp;
}


size_t fb_write(const void *buf, size_t offset, size_t len) {
  int x = offset >>16;
  int y = offset &0xffff;
  int w = len >> 16;
  int h = len &0xffff;
  uint32_t * temp = (uint32_t *)buf;
  printf("fb write ~~~ %d,%d,%d,%d,%x\n",x,y,w,len);
  io_write(AM_GPU_FBDRAW, x, y, temp, w, h, true);
  return w*h;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
