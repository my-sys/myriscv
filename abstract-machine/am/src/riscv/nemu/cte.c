#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {

      // 似乎有一些问题 xingk
      case 0xb: if(c->gpr[17] == -1)ev.event = EVENT_YIELD;else ev.event = EVENT_SYSCALL; break;
      default: ev.event = EVENT_ERROR; break;
    }

    //printf("mcause 0x%x, mstatus 0x%x\n",c->mcause,c->mstatus);
    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
  // initialize mstatus 
  asm volatile("csrw mstatus, %0" : :"r"(0xa00001800));
  // 
  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *temp = (Context *)((uintptr_t)kstack.start-sizeof(Context));
  //temp->gpr[2] = kstack.start;
  temp->mepc = (uintptr_t)entry;
  temp->mstatus = 0xa00001800; 
  temp->gpr[10] = (uintptr_t)arg;
  temp->gpr[11] = (uintptr_t)arg;    
//   uintptr_t*  entry_addr =kstack.end;
//   *entry_addr = entry;
//   return NULL;
  return temp;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
