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
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time1!", arg, j);
    j ++;
    yield();
  }
}

void context_kload(PCB *temp_pcb, void (*entry)(void *), void *arg){
  
  Area kstack;
  kstack.end = malloc(1<<15);
  kstack.start = kstack.end + (1<<15);
  temp_pcb->cp =kcontext(kstack,entry,arg);
}

void context_uload(PCB *temp_pcb, char *filename){
  //naive_uload(temp_pcb,filename);

//   uintptr_t entry = loader(temp_pcb,filename);
//   temp_pcb->cp = ucontext(NULL,,entry);
}
void init_proc() {
  //switch_boot_pcb();

  //Log("Initializing processes...");

  // load program here
  //naive_uload(NULL, "/bin/bmp-test");
  naive_uload(NULL,"/bin/nterm");
  //naive_uload(NULL, "/bin/nslider");
  //naive_uload(NULL, "/bin/bird");
  //naive_uload(NULL, "/bin/pal");
  //naive_uload(NULL,"/bin/fceux");
  //naive_uload(NULL,"/bin/menu");
  //naive_uload(NULL,"/bin/typing-game");
  //naive_uload(NULL,"/bin/dhrystone");
  //naive_uload(NULL,"/bin/coremark");

//-----------------------------PA 4-------------
//   context_kload(&pcb[0], hello_fun, "he");
//   context_kload(&pcb[1], hello_fun, "plx");
//   switch_boot_pcb();
}

Context* schedule(Context *prev) {
  // save the context pointer
  current->cp = prev;

  // always select pcb[0] as the new process
  //current = &pcb[0];
  current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);
  // then return the new context

  return current->cp;
}