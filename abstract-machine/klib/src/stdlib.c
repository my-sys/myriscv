#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
struct block *xingk_hbrk = NULL;
 char *temp_hbrk = NULL;
typedef struct block Block;
static unsigned long int next = 1;

static char *hbrk;

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
  hbrk = (void *)ROUNDUP(heap.start, 8);
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
// #if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))  --xingk
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
  size  = (size_t)ROUNDUP(size, 8);
  if(hbrk == NULL){
    init_heap();
  }
  char *old = hbrk;
  hbrk += size;
  printf("0x%x,0x%x,0x%x,size = %d\n",heap.start,hbrk,heap.end,size);
  assert((uintptr_t)heap.start <= (uintptr_t)hbrk && (uintptr_t)hbrk < (uintptr_t)heap.end);
  for (uint64_t *p = (uint64_t *)old; p != (uint64_t *)hbrk; p ++) {
    *p = 0;
  }
  return old;
#endif
  return NULL;
}

void free(void *ptr) {
  // Block* temp = (Block*)(ptr - BLOCK_SIZE);
  // if(temp->is_free != 0){
  //     return;
  // }
  // temp->is_free = 1;
  // if(temp->pre != NULL && temp->pre->is_free == 1){
  //     //merge
  //     temp->pre->next = temp->next;
  //     if(temp->next != NULL){
  //         temp->next->pre = temp->pre;
  //     }
  //     temp->pre->size += temp->size;
  //     temp = temp->pre;
  // }

  // if(temp->next != NULL && temp->next->is_free == 1){
  //     //merge
  //     temp->size += temp->next->size;
  //     temp->next = temp->next->next;
  // }

}

#endif
