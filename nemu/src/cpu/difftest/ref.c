#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

//extern CPU_state cpu;
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction == true){
	for(size_t i = 0; i < n; i++){
		paddr_write(addr + i,1,*((uint8_t*)buf + i));
	}
	
  }else{
	assert(0);
  }
}

void difftest_regcpy(void *dut, bool direction) {
  CPU_state* temp = (CPU_state*)dut;
  if(direction == false){ // to dut 
	memcpy(temp->gpr,cpu.gpr,sizeof(cpu.gpr));
	temp->pc = cpu.pc;
	memcpy(temp->csr,cpu.csr,sizeof(cpu.csr));
  }else{	// to ref 
	memcpy(cpu.gpr,temp->gpr,sizeof(cpu.gpr));
	cpu.pc   = temp->pc;
	memcpy(cpu.csr,temp->csr,sizeof(cpu.csr));
  }
  //assert(0);
}

void difftest_exec(uint64_t n) {
	cpu_exec(n);
    //assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
