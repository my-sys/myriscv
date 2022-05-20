#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
struct block *xingk_hbrk = NULL;
 char *temp_hbrk = NULL;
typedef struct block Block;
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

int brk(void* addr){

    return 0;
}

void* sbrk(intptr_t increment){

    return xingk_hbrk;
}
// xingk 初始化堆
void init_heap(){
    xingk_hbrk = (void *)ROUNDUP(heap.start, 8);
    char *end = (void *)ROUNDDOWN(heap.end,8);
    xingk_hbrk->size = (uintptr_t)end - (uintptr_t)xingk_hbrk;
    xingk_hbrk->pre = NULL;
    xingk_hbrk->next = NULL;
    xingk_hbrk->is_free = 1;
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
// #if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))  --xingk
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
  //panic("Not implemented");
  Block *temp;
  if(size == 0){
      return NULL;
  }
  size_t temp_size = ROUNDUP(size,8);
  if(xingk_hbrk == NULL){

    init_heap();
    printf("heap 0x%d \n", (uint64_t)(heap.start));

    printf("heap 0x%x \n", (uint64_t)(heap.start));
    printf("heap 0x%x \n", (uint64_t)(100));
  }
  temp = (Block*)xingk_hbrk;
  printf("0x%x\n", (uint64_t)temp);
  printf("BLOCK_SIZE %d \n", BLOCK_SIZE);
  while(temp != NULL){
      if(temp->is_free == 0){
          temp = temp->next;
          printf("malloc abcd \n");
          continue;
      }
      
      if(temp->size > temp_size + BLOCK_SIZE &&
              temp->size <= temp_size + BLOCK_SIZE*2){
          printf("gggg \n");
          temp->is_free = 0;
          return ((void*)temp + BLOCK_SIZE);
      }

      if(temp->size > temp_size + BLOCK_SIZE * 2){
          printf("KKKKK \n");
          // split
          temp->is_free = 0;
          Block* next = (Block*)(temp + temp_size + BLOCK_SIZE);
          next->pre = temp;
          next->next = temp->next;
          next->is_free = 1;
          next->size = temp->size - (temp_size + BLOCK_SIZE);
          printf("malloc zzz  0x%x,  0x%x,0x%x\n",temp, ((void *)temp + BLOCK_SIZE),BLOCK_SIZE);
          return ((void*)temp + BLOCK_SIZE);
      }
     temp = temp->next;
     printf("next\n");
     
     
  }
    /*printf("lllll 0x%x\n",temp_hbrk);
    if(temp_hbrk == NULL){
        temp_hbrk = (void *)ROUNDUP(heap.start, 8);
        printf("malloc xx 0x%x\n",temp_hbrk);
    }
    printf("size %d,\n",size);
    size  = (size_t)ROUNDUP(size, 8);
    //size = size + 10;
    printf("size1 %d\n",size);
    printf("lll 0x%x, lll 0x%x, sss0x%x\n",&temp_hbrk,temp_hbrk,*temp_hbrk);
    char *old = temp_hbrk;
    old = old + 8;
    printf("old 0x%x\n",old);
    temp_hbrk = (void *)(temp_hbrk+10);
    printf("malloc11 0x%x\n",temp_hbrk);
    temp_hbrk = temp_hbrk + 100;//size
    printf("malloc22 0x%x\n",temp_hbrk + 2);
//    assert((uintptr_t)heap.start <= (uintptr_t)temp_hbrk && (uintptr_t)temp_hbrk < (uintptr_t)heap.end);
    for (uint64_t *p = (uint64_t *)old; p != (uint64_t *)temp_hbrk; p ++) {
        *p = 0;
    }
    printf("malloc 0x%x\n",old);
    return old;*/ 
#endif
  return NULL;
}

void free(void *ptr) {
  /*Block* temp = (Block*)(ptr - BLOCK_SIZE);
  if(temp->is_free != 0){
      return;
  }
  temp->is_free = 1;
  if(temp->pre != NULL && temp->pre->is_free == 1){
      //merge
      temp->pre->next = temp->next;
      if(temp->next != NULL){
          temp->next->pre = temp->pre;
      }
      temp->pre->size += temp->size;
      temp = temp->pre;
  }

  if(temp->next != NULL && temp->next->is_free == 1){
      //merge
      temp->size += temp->next->size;
      temp->next = temp->next->next;
  }*/

}

#endif
