#include <NDL.h>
#include <SDL.h>
#include <string.h>
#define keyname(k) #k,
static Uint8  SDL_KeyState[SDLK_PAGEDOWN + 1];
static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("xingk ~~~~~~~~~~~ SDL_PushEvent ~~~~~~~~~~~~~\n");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  if(NDL_PollEvent(buf, sizeof(buf))){
      //printf("ha llell %s\n",buf);
      char* p;
      p = strtok(buf," ");
      if(strcmp(p,"ku")== 0){
        ev->key.type = SDL_KEYUP;
        p = strtok(NULL,"\n");
        for(int i = 0; i<256;i++){
          if(strcmp(p,keyname[i]) == 0){
            ev->key.keysym.sym = i;
            SDL_KeyState[i] = 0; //xingk 1?   SDL_KEYUP =1, //与PAL中的定义存在了差异，已仙剑为准。见函数PAL_UpdateKeyboardState()
            break;
          }
        }
        printf("up \n"); 
      }else if(strcmp(p,"kd") == 0){
        ev->key.type = SDL_KEYDOWN;
        p = strtok(NULL,"\n");
        for(int i = 0; i<256;i++){
          if(strcmp(p,keyname[i]) == 0){
            ev->key.keysym.sym = i;
            SDL_KeyState[i] = 1 ; //xingk 1?
            break;
          }
        } 
        printf("down \n");       
      }
      
    return 1;
  }
  ev = NULL;
  return 0;
}


int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  while(1){
    if(NDL_PollEvent(buf, sizeof(buf))){
      //printf("ha llell %s\n",buf);
      char* p;
      p = strtok(buf," ");
      //printf("ha 2\n");
      if(strcmp(p,"ku")== 0){
        // printf("ha 3\n");
        event->key.type = SDL_KEYUP;
        p = strtok(NULL,"\n");
        for(int i = 0; i<256;i++){
          if(strcmp(p,keyname[i]) == 0){
            event->key.keysym.sym = i;
            break;
          }
        }
      }else if(strcmp(p,"kd") == 0){
        //printf("ha 5\n");
        event->key.type = SDL_KEYDOWN;
        p = strtok(NULL,"\n");

        // printf("ha 6,%s\n",p);
        // printf("size :%d,size %d",strlen(p),strlen("DOWN\n"));
        for(int i = 0; i<256;i++){
          //printf("%s\n",keyname[i]);
          if(strcmp(p,keyname[i]) == 0){
            // printf("ha 6 ###################,%s\n",p);
            event->key.keysym.sym = i;
            break;
          }
        }        
      }
      printf("aaa \n");
      return 1;
    }
  }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("xingk ~~~~~~~~~~~ SDL_PeepEvents ~~~~~~~~~~~~~\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
	if ( numkeys != (int *)0 )
		*numkeys = SDLK_PAGEDOWN + 1;
	return(SDL_KeyState);
}
