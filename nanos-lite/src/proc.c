#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time1!", (uintptr_t)arg, 2);
    j ++;
    yield();
  }
}

void context_kload(PCB *temp_pcb, void (*entry)(void *), void *arg){
  
  Area kstack;
  kstack.end = malloc(1<<15);
  kstack.start = kstack.end + (1<<15);
  temp_pcb->cp =kcontext(kstack,entry,NULL);
}

void init_proc() {
  //switch_boot_pcb();

  //Log("Initializing processes...");

  // load program here
  //naive_uload(NULL, "/bin/bmp-test");
  //naive_uload(NULL,"/bin/nterm");
  //naive_uload(NULL, "/bin/nslider");
  //naive_uload(NULL, "/bin/bird");
  //naive_uload(NULL, "/bin/pal");
  //naive_uload(NULL,"/bin/menu");  coremark
  //naive_uload(NULL,"/bin/typing-game");
  //naive_uload(NULL,"/bin/dhrystone");
  //naive_uload(NULL,"/bin/coremark");
  context_kload(&pcb[0], hello_fun, NULL);
  switch_boot_pcb();
}

Context* schedule(Context *prev) {
  // save the context pointer
  current->cp = prev;

  // always select pcb[0] as the new process
  current = &pcb[0];

  // then return the new context

  return current->cp;
}