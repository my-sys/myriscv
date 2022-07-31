#include <am.h>
#include <nemu.h>
#include<string.h>
#include <stdio.h>
#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

static uint32_t index_addr;
static uint32_t buf_size;
void __am_audio_init() {
  index_addr = 0;
  buf_size = 0x10000;
  //buf_size = inl(AUDIO_SBUF_SIZE_ADDR);
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = false;
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR,ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);
  outl(AUDIO_INIT_ADDR, 1);
  
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  int len = ctl->buf.end - ctl->buf.start;
  uint32_t count;
  do{
    count = inl(AUDIO_COUNT_ADDR);
  }while((count+len)>buf_size);
  //buf 缓冲区循环
  if(index_addr + len > buf_size){
    uint8_t * dest = (uint8_t *)AUDIO_SBUF_ADDR + index_addr;
    uint32_t temp_count = buf_size - index_addr;
    memcpy(dest,ctl->buf.start,temp_count);
    dest = (uint8_t *)AUDIO_SBUF_ADDR;
    memcpy(dest,ctl->buf.start+temp_count,len - temp_count);
    index_addr = (index_addr + len)% buf_size;
  }else{
    uint8_t * dest = (uint8_t *)AUDIO_SBUF_ADDR + index_addr;
    memcpy(dest,ctl->buf.start,len);
    index_addr = index_addr + len;
  }
  // uint8_t * dest = (uint8_t *)AUDIO_SBUF_ADDR + index_addr;
  // memcpy(dest,ctl->buf.start,len);
  // index_addr = index_addr + len;
  outl(AUDIO_COUNT_ADDR,count+len);
}
