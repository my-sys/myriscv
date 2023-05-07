#include <common.h>
#include <proc.h>
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD :
    //c = schedule(c);
	//riscv 进入异常后的值不会自动判断mepc问题，需要软件判断更新
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
	c->mepc = c->mepc + 4;
	break;
    default: panic("Unhandled event ID = %d", e.event);
  }
  return c;
}


////确定异常处理函数地址
void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
