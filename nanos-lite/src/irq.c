#include <common.h>
#include <proc.h>
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD :
    //c = schedule(c);
    c->mepc = c->mepc + 4;
    printf(" yield1 \n");
    break;
    case EVENT_SYSCALL:
    c->mepc = c->mepc + 4;
    //printf(" yield2 \n");
    do_syscall(c);
    break;
    case EVENT_IRQ_TIMER:

    break;
	case EVENT_EBREAK:
	printf("a ebreak for debug in npc\n");
	break;
    default: panic("Unhandled event ID = %d", e.event);
  }
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
