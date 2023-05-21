#include <common.h>
#include "fs.h"
#include "proc.h"
// size_t write(int fd, void* buf, int count){
//   char * temp = buf;
//   // if(fd == 1){
//   //   for(int i = 0; i< count; i++){
//   //     putch(*(temp+i ));
//   //   }
//   // }else if(fd == 2){
//   //   for(int i = 0; i< count; i++){
//   //     putch(*(temp+i ));
//   //   }
//   // }
//   if(fd <=2){
//     for(int i = 0; i< count; i++){
//       putch(*(temp+i ));
//     }
//     return count;    
//   }else{
//     printf("write 0x%x\n",(uint32_t)((uint64_t )buf));
//     return fs_write(fd,buf, count);
//   }
// }

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; //a7
  a[1] = c->GPR2; //a0
  a[2] = c->GPR3; //a1 
  a[3] = c->GPR4; // a2 
  //printf("do_syscall 0x%d,0x%d,0x%d,0x%d \n",(uint32_t)a[0],(uint32_t)a[1],(uint32_t)a[2],(uint32_t)a[3]);
  switch (a[0]) {
    case SYS_yield:yield();c->gpr[10] = 0;break;
    case SYS_exit:Log("app is exit");halt(c->gpr[10]);c->gpr[10] = 0;break;
    case SYS_write:
       // printf("hello xingkw %x,%x,%x\n",(uint32_t)a[1],(uint32_t)a[2],(uint32_t)a[3]);
        c->gpr[10]=fs_write(a[1],(void *)a[2],a[3]);
        
    break;
    case SYS_brk:
      c->gpr[10]= (uintptr_t) sbrk(a[1]);
    break;
    case SYS_read:
      //printf("hello xingkr %x,%x,%x\n",(uint32_t)a[1],(uint32_t)a[2],(uint32_t)a[3]);
      c->gpr[10]=fs_read(a[1],(void *)a[2],a[3]);
    break;
    case SYS_open:
      
      c->gpr[10]=fs_open((char *)a[1],a[2],a[3]);
      //printf("open 22 %d,%s \n",c->gpr[10],a[1]);
    break;
    case SYS_close:
      c->gpr[10]=fs_close(a[1]);
    break;
    case SYS_lseek:
      
      c->gpr[10]=fs_lseek(a[1],a[2],a[3]);
      //printf("seek 0x%x, 0x%x, 0x%x, value = %d\n",a[1],a[2],a[3],c->gpr[10]);
    break;
    case SYS_gettimeofday:
      c->gpr[10]=gettimeofday1((struct timeval1 *)a[1],(struct timezone1 *)a[2]);
    break;
	case SYS_execve:
      c->gpr[10]= 0;naive_uload(NULL,(const char *)a[1]);
	break;
    default: panic("Unhandled syscall ID = %d", (uint32_t)a[0]);
  }
}
