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
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
