#include <common.h>
#include <device/map.h>
#include <SDL2/SDL.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};

static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;

static uint32_t index_addr = 0;
static void audio_play(void *userdata, uint8_t *stream, int len) {
  int count = audio_base[5];
  int nread = len;
  printf("count %d,len %d\n",count,len);
  if (count < len) nread = count;

  if(index_addr + nread > CONFIG_SB_SIZE){
    char *src = (char *)sbuf + index_addr;
    uint32_t temp_count = CONFIG_SB_SIZE - index_addr;
    //printf("aa size %d,index %d\n",temp_count,index_addr);
    strncpy((char *)stream,src,temp_count);
    src = (char *)sbuf;
    strncpy((char*)stream+temp_count,src,len - temp_count);
    index_addr = (index_addr + nread)% CONFIG_SB_SIZE;
  }else{
    printf("index %d\n",index_addr);
    char * src = (char *)sbuf + index_addr;
    strncpy((char*)stream,src,nread);
    index_addr = index_addr + nread;
  }
  // int b = 0;
  // while (b < nread) {
  //   int n = audio_base[3]; //????
  //   strncpy(stream,sbuf,nread); //???
  //   //int n = read(rfd, stream, nread);
  //   if (n > 0) b += n;
  // }

  count -= nread;
  //index_addr = index_addr + nread;
  audio_base[5] = audio_base[5] - nread;
  if (len > nread) {
    memset(stream + nread, 0, len - nread);
  }
}

static void audio_io_handler(uint32_t offset, int len, bool is_write) {
  if(is_write && offset == 0x10){
    SDL_AudioSpec s = {};
    s.freq = audio_base[0];
    s.format = AUDIO_S16SYS;
    s.channels = audio_base[1];
    s.samples = audio_base[2];
    s.callback = audio_play;
    s.userdata = NULL;
    printf("%d,%d,%d\n",audio_base[0],audio_base[1],audio_base[2]);
    int ret = SDL_InitSubSystem(SDL_INIT_AUDIO);
    if (ret == 0) {
      SDL_OpenAudio(&s, NULL);
      SDL_PauseAudio(0);
      printf("audio success\n");
    } 
  }
}

void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size, audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size, audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);




}
