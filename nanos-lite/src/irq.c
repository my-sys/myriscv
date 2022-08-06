#include <common.h>
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

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD : 
    // asm volatile("csrrw t1,mepc,t2 \n\t"
    //   "addi t1,t1,4\n\t"

    //   "csrrw t1,mepc,t1\n"
    // );
    c->mepc = c->mepc + 4;
    printf(" yield1 \n");break;
    case EVENT_SYSCALL:
    c->mepc = c->mepc + 4;
    printf(" yield2 \n");
    if(c->gpr[17]== SYS_yield){
      yield();
      c->gpr[10] = 0;

    }
    if(c->gpr[17]== SYS_exit){
      halt(c->gpr[10]);
      c->gpr[10] = 0;
    }
    break;
    default: panic("Unhandled event ID = %d", e.event);
  }
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
