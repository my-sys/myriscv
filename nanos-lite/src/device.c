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
    temp[ret] = '\n';
    temp[ret+1] = '\0';
  }else{
    temp[0] = 'k';
    temp[1] = 'u';
    temp[2] = ' ';
    strcpy((temp+3),keyname[ev.keycode]);
    ret = 3 + strlen(keyname[ev.keycode]);
    temp[ret] = '\n';
    temp[ret+1] = '\0';
  }
  //strlen("event read %s,%d\n",buf,strlen("buf"))
  return ret + 2;
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
  //printf("fb write ~~~ %x,%d,%d,%d,%x\n",temp,y,w,h,len);
  io_write(AM_GPU_FBDRAW, x, y, temp, w, h, true);
  return w*h;
}

/*********** 为兼容navy 的AM API 特意设计。不用可删除， libam    xingk **********************/
/****type
 * type, 0 代表 ioe_read, ioe_write 
 * type, 1 代表 ioe_init,
 * type, 2 代表 halt
 * 
 * 
 * 
 * */ 
size_t am_write(const void *buf, size_t type, size_t reg){

  // switch(type){
  //   case 0: io_write(reg,buf);break;
  //   case 1: ioe_init();break;
  //   case 2: halt();break;
  //   default: ;
  // }
  
  ioe_write(reg,(void *)buf);
  return 0;
}

/*********** 为兼容navy 的AM API 特意设计。不用可删除， libam    xingk**********************/
size_t am_read(void *buf, size_t type, size_t reg){
  ioe_read(reg,buf);
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
