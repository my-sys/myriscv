#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  //printf(" IMG_Load xingk1\n");
  FILE *fp = fopen(filename,"r");
  //printf(" IMG_Load xingk2,%s\n",filename);
  if(!fp){
    return NULL;
  }
  //printf(" IMG_Load xingk3\n");
  fseek(fp,0,SEEK_END);
  //printf(" IMG_Load xingk3\n");
  //返回文件的当前位置，这里的用法是用于获取文件的大小
  int size = ftell(fp);
  fseek(fp,0,SEEK_SET);
  //printf(" IMG_Load xingk5\n");
  uint8_t *buf = SDL_malloc(size);
  //printf(" IMG_Load xingk6\n");
  fread(buf,1,size,fp);
  //printf(" IMG_Load xingk7\n");
  SDL_Surface *img = STBIMG_LoadFromMemory(buf,size);
  SDL_free(buf);
  fclose(fp);
  //printf(" IMG_Load xingk8\n");
  return img;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
