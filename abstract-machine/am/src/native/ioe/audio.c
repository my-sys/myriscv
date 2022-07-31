#define _GNU_SOURCE
#include <fcntl.h>
#include <unistd.h>
#include <klib.h>
#include <SDL2/SDL.h>

// static int rfd = -1, wfd = -1;
static volatile int count = 0;
static uint32_t index_addr = 0;
static uint32_t index_addr1 = 0;
static uint8_t sbuf[0x10000];
static uint32_t buf_size = 0x10000;
void __am_audio_init() {

}

static void audio_play(void *userdata, uint8_t *stream, int len) {
 int nread = len;
  if (count < len) nread = count;

  // if(index_addr + nread > CONFIG_SB_SIZE){
  //   char *src = (char *)sbuf + index_addr;
  //   uint32_t temp_count = CONFIG_SB_SIZE - index_addr;
  //   strncpy((char *)stream,src,temp_count);
  //   src = (char *)sbuf;
  //   strncpy((char*)stream+temp_count,src,len - temp_count);
  //   index_addr = (index_addr + nread)% CONFIG_SB_SIZE;
  // }else{
  //   char * src = (char *)sbuf + index_addr;
  //   strncpy((char*)stream,src,nread);
  //   index_addr = index_addr + nread;
  // }
  // count -= nread;
  // audio_base[5] = audio_base[5] - nread;
  // if (len > nread) {
  //   memset(stream + nread, 0, len - nread);
  // }
  
  uint8_t * src = (uint8_t *)sbuf + index_addr;
  //strncpy((char*)stream,src,nread);
  memcpy(stream,src,nread);
  if (len > nread) {
    memset(stream + nread, 0, len - nread);
  }
  index_addr = index_addr + nread; 
  count = count - nread;
}

// static void audio_write(uint8_t *buf, int len) {
//   int nwrite = 0;
//   while (nwrite < len) {
//     int n = write(wfd, buf, len);
//     if (n == -1) n = 0;
//     count += n;
//     nwrite += n;
//   }
// }

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  SDL_AudioSpec s = {};
  s.freq = ctrl->freq;
  s.format = AUDIO_S16SYS;
  s.channels = ctrl->channels;
  s.samples = ctrl->samples;
  s.callback = audio_play;
  s.userdata = NULL;

  count = 0;
  int ret = SDL_InitSubSystem(SDL_INIT_AUDIO);
  if (ret == 0) {
    SDL_OpenAudio(&s, NULL);
    SDL_PauseAudio(0);
  }
  printf("abc\n");
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = count;
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  int len = ctl->buf.end - ctl->buf.start;
  do{
  }while((count+len)>buf_size);
  //buf 缓冲区循环
  // if(index_addr + len > buf_size){
  //   char * dest = (char *)AUDIO_SBUF_ADDR + index_addr;
  //   uint32_t temp_count = buf_size - index_addr;
  //   strncpy(dest,ctl->buf.start,temp_count);
  //   dest = (char *)AUDIO_SBUF_ADDR;
  //   strncpy(dest,ctl->buf.start+temp_count,len - temp_count);
  //   index_addr = (index_addr + len)% buf_size;
  // }else{
  //   char * dest = (char *)AUDIO_SBUF_ADDR + index_addr;
  //   strncpy(dest,ctl->buf.start,len);
  //   index_addr = index_addr + len;
  // }
  printf("abcd\n");
  uint8_t * dest = (uint8_t *)sbuf + index_addr1;
  printf("abcdef\n");
  memcpy(dest,ctl->buf.start,len);
  //strncpy(dest,ctl->buf.start,len);
  index_addr1 = index_addr1 + len;
  count = count + len;
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = true;
  cfg->bufsize = buf_size;
}
