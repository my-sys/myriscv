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

// npc 中是流水线，进行确定下一条指令，是较为困难的，所以只能用当前指令与当前指令进行对比。
void difftest_regcpy(void *dut, bool direction) {
  CPU_state* temp = (CPU_state*)dut;
  if(direction == false){ // to dut 
	memcpy(temp->gpr,cpu.gpr,sizeof(cpu.gpr));
	temp->pc = cpu.pc; // ref 的 PC是下一个pc, pre_pc 是当前pc
	temp->pre_pc = cpu.pre_pc;
	//temp->csr[5] = cpu.csr[5];
	//memcpy(temp->csr,cpu.csr,sizeof(cpu.csr));
  }else{	// to ref 
	memcpy(cpu.gpr,temp->gpr,sizeof(cpu.gpr));
	// printf("nemu pc %lx \n",temp->pc);
	cpu.pc   = temp->pc;
	//memcpy(cpu.csr,temp->csr,sizeof(cpu.csr));
  }
  //assert(0);
}

void difftest_exec(uint64_t n) {
	cpu_exec(n);
    //assert(0);
}


//{"mstatus",   0x300, 5},
//    {"mepc",      0x341, 13},
//    {"mcause",    0x342, 14},
//    {"mtval",     0x343, 15},
//    {"mtvec",     0x305, 10},
void difftest_raise_intr(void *dut, bool direction) {
	CPU_state* temp = (CPU_state*)dut;
	if(direction == true){
		cpu.csr[5] = temp->csr[5]; //mstatus
		cpu.csr[14] = temp->csr[14];//mcause
		cpu.csr[13] = temp->csr[13];// mpec
		cpu.pc 	= temp->csr[10]; //mtvec
	}
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
