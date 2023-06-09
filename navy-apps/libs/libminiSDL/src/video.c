#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

// 将一张画布中的指定矩形区域复制到另一张画布的指定位置
void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  if(src->format->palette==NULL){
      uint32_t *temp_src = src->pixels;
      uint32_t *temp_dst = dst->pixels;
      int w1= src->w;
      int w2 = dst->w;
      //printf("w1 %d,w2 %d\n",w1,w2);
      int src_rect_h = (srcrect != NULL)?srcrect->h:src->h;
      int src_rect_w = (srcrect != NULL)?srcrect->w:src->w;
      int src_rect_x = (srcrect != NULL)?srcrect->x:0;
      int src_rect_y = (srcrect != NULL)?srcrect->y:0;

      int dst_rect_x = (dstrect != NULL)?dstrect->x:0;
      int dst_rect_y = (dstrect != NULL)?dstrect->y:0;
      for(int i = 0; i<src_rect_h;i++){
        for(int j = 0; j<src_rect_w;j++){
          //*(temp_src+srcrect->x +(srcrect->y + i)*w1+j) = *(temp_dst + dstrect->x + (dstrect->y+i)*w2+j);
          *(temp_dst + dst_rect_x + (dst_rect_y+i)*w2+j) = *(temp_src+src_rect_x+(src_rect_y + i)*w1+j);
        }
      }
  }else{
      //printf("SDL_BlitSurface 8_\n");
      uint8_t *temp_src = src->pixels;
      uint8_t *temp_dst = dst->pixels;
      int w1= src->w;
      int w2 = dst->w;
      //printf("w1 %d,w2 %d\n",w1,w2);
      int src_rect_h = (srcrect != NULL)?srcrect->h:src->h;
      int src_rect_w = (srcrect != NULL)?srcrect->w:src->w;
      int src_rect_x = (srcrect != NULL)?srcrect->x:0;
      int src_rect_y = (srcrect != NULL)?srcrect->y:0;

      int dst_rect_x = (dstrect != NULL)?dstrect->x:0;
      int dst_rect_y = (dstrect != NULL)?dstrect->y:0;
	  int temp_w2 = dst_rect_y*w2;
	  int temp_w1 = src_rect_y*w1;
      for(int i = 0; i<src_rect_h;i++){
        for(int j = 0; j<src_rect_w;j++){
          //*(temp_src+srcrect->x +(srcrect->y + i)*w1+j) = *(temp_dst + dstrect->x + (dstrect->y+i)*w2+j);
          *(temp_dst + dst_rect_x + temp_w2+j) = *(temp_src+src_rect_x+temp_w1+j);
        }
		temp_w2 = temp_w2 + w2;
		temp_w1 = temp_w1 + w1;
      }

  }
}

// 往画布的指定矩形区域中填充指定的颜色
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  if(dst->format->palette==NULL){  
    uint32_t *temp = dst->pixels;
    int w = dst->w;
    int h = dst->h;
    int x = (dstrect!=NULL)?dstrect->x:0;
    int y = (dstrect!=NULL)?dstrect->y:0;
    int h1= (dstrect!=NULL)?dstrect->h:h;
    int w1 = (dstrect!=NULL)?dstrect->w:w;
    //printf("w = %d, h = %d\n",w,h);
    for(int i = 0;i<h1;i++){
      for(int j = 0; j<w1;j++){
        *(temp+x+(y+i)*w + j)=color;
      }
    }
  }else{
    //assert(0);
    //printf("SDL_FillRect 8_\n");
    uint8_t *temp = dst->pixels;
    int w = dst->w;
    int h = dst->h;
    int x = (dstrect!=NULL)?dstrect->x:0;
    int y = (dstrect!=NULL)?dstrect->y:0;
    int h1= (dstrect!=NULL)?dstrect->h:h;
    int w1 = (dstrect!=NULL)?dstrect->w:w;
    //printf("w = %d, h = %d\n",w,h);
    int k;
	// 这是为配合SDL_Color 另类的ABGR 情况，我觉得其实改nemu部分SDL应该也行，初始化的时候为ABGR类型就可以了。但还是不瞎弄了。
	color = ((color & 0xff0000)>>16) + ((color & 0xff )<<16)+ color & 0xff00ff00;
    for(k = 0; k < dst->format->palette->ncolors; k++){
      //if(dst->format->palette->colors[k] == color)break;
      //color = (color & 0xff0000)>>16 + (color & 0xff )<<16+ color & 0xff00ff00;
      if(dst->format->palette->colors[k].val == color)break;
    }
    assert(k < dst->format->palette->ncolors);
	int y_i_w = y*w;
    for(int i = 0;i<h1;i++){
      for(int j = 0; j<w1;j++){
          *(temp+x+y_i_w + j)=k;
      }
	  y_i_w = y_i_w + w;
    }
  }

}

//static uint64_t color_buffer[200*300];
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  //printf("SDL_UpdateRect \n");
  if((x+y+w+h) == 0){
    w = s->w; h = s->h;
  }

  uint32_t* color_buf = (uint32_t *)malloc(w*h*(sizeof(uint32_t)));
  if(s->format->palette == NULL){
    //printf("SDL_UpdateRect 2\n");
    uint32_t *temp = s->pixels;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        //printf("i %d w %d j %d\n",i,w,j);
        //printf("lll 0x%x,0x%x \n",&color_buf[i*w+j],(temp + x + (y+i)* (s->w) + j));
        color_buf[i*w+j] = *(temp + x + (y+i)* (s->w) + j);
        
      }
    } 
    //printf("SDL_UpdateRect 5\n");
  }else{
    //printf("SDL_UpdateRect 8_\n");
	//仙剑采用的是调色盘，因此这里存储的是每个像素的代表颜色的序号，序号对应调色盘值才是真正的颜色。
    uint8_t *temp = s->pixels;
	int i_w = 0; int y_i_s_w = y*(s->w);
	//乘法需要60多个周期，尽量避免乘法。尤其在循环体中
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        //printf("%d,w %d,h %d\n",i,w,h);
        //printf(" %d,%d,%d\n",i*w+j,*(temp + x + (y+i)* (s->w) + j),s->format->palette->colors[0]);
        //color_buf[i*w+j] =(s->format->palette->colors[*(temp + x + (y+i)* (s->w) + j)].val);

		//设备的底层采用的是ARGB格式，而SDL_Color 定义为 r,g,b,a。意味着是ABGR。
		color_buf[i_w+j] =((s->format->palette->colors[*(temp + x + y_i_s_w + j)].val&0xff00)
                           +((s->format->palette->colors[*(temp + x + y_i_s_w + j)].val&0xff)<<16)
                           +((s->format->palette->colors[*(temp + x + y_i_s_w + j)].val&0xff0000)>>16));
       
	    // color_buf[i*w+j] =(s->format->palette->colors[*(temp + x + (y+i)* (s->w) + j)].r<<16)
        //                   +(s->format->palette->colors[*(temp + x + (y+i)* (s->w) + j)].g<<8)
        //                   +s->format->palette->colors[*(temp + x + (y+i)* (s->w) + j)].b; 
      }
	  i_w = i_w + w;y_i_s_w = y_i_s_w + (s->w);
    } 
  }
  // if((x+y+w+h) == 0){
  //   NDL_DrawRect(s->pixels,0,0,s->w,s->h);
  //   //NDL_DrawRect(s->pixels,0,0,336,208);
  // }else{
  //   NDL_DrawRect(s->pixels,x,y,w,h);
  // }
  //printf("SDL_UpdateRect zz\n");
  //NDL_DrawRect(color_buf,200,150,w,h); //
  NDL_DrawRect(color_buf,x,y,w,h);
  free(color_buf);
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);
  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}
