#include <common.h>
#include "syscall.h"
#include "fs.h"
size_t write(int fd, void* buf, int count){
  char * temp = buf;
  // if(fd == 1){
  //   for(int i = 0; i< count; i++){
  //     putch(*(temp+i ));
  //   }
  // }else if(fd == 2){
  //   for(int i = 0; i< count; i++){
  //     putch(*(temp+i ));
  //   }
  // }
  if(fd <=2){
    for(int i = 0; i< count; i++){
      putch(*(temp+i ));
    }
    return count;    
  }else{
    return fs_write(fd,buf, count);
  }
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; //a7
  a[1] = c->GPR2; //a0
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    case SYS_yield:yield();c->gpr[10] = 0;break;
    case SYS_exit:halt(c->gpr[10]);c->gpr[10] = 0;break;
    case SYS_write:
        c->gpr[10]=write(a[1],(void *)a[2],a[3]);
        //printf("hello xingk %d,%d,%d\n",a[1],a[2],a[3]);
    break;
    case SYS_brk:
      c->gpr[10]= (uintptr_t) sbrk(a[1]);
    break;
    case SYS_read:
      c->gpr[10]=fs_read(a[1],(void *)a[2],a[3]);
    break;
    case SYS_open:
      printf("zzzkk \n");
      c->gpr[10]=fs_open((char *)a[1],a[2],a[3]);
    break;
    case SYS_close:
      c->gpr[10]=fs_close(a[1]);
    break;
    case SYS_lseek:
      c->gpr[10]=fs_lseek(a[1],a[2],a[3]);
    break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
