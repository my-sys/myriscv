#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD : 
    asm volatile("csrrw t1,mstatus,t2 \n\t"
      "addi t1,t1,4\n\t"
      "csrrw t1,mstatus,t1\n"
    );
    printf(" yield \n");break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
