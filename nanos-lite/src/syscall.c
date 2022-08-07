#include <common.h>
#include "syscall.h"
enum {
  SYS_exit,
  SYS_yield,
  SYS_open,
  SYS_read,
  SYS_write,
  SYS_kill,
  SYS_getpid,
  SYS_close,
  SYS_lseek,
  SYS_brk,
  SYS_fstat,
  SYS_time,
  SYS_signal,
  SYS_execve,
  SYS_fork,
  SYS_link,
  SYS_unlink,
  SYS_wait,
  SYS_times,
  SYS_gettimeofday
};

void write(int fd, void* buf, int count){
  char * temp = buf;
  if(fd == 1){
    for(int i = 0; i< count; i++){
      putch(*(temp+i ));
    }
  }else if(fd == 2){
    for(int i = 0; i< count; i++){
      putch(*(temp+i ));
    }
  }
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    case SYS_yield:yield();c->gpr[10] = 0;break;
    case SYS_exit:halt(c->gpr[10]);c->gpr[10] = 0;break;
    case SYS_write:write(a[1],(void *)a[2],a[3]);
        c->gpr[10]=a[3];
        printf("hello xingk %d\n",a[3]);
    break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
