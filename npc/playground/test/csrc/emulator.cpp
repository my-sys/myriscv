#include "emulator.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vriscv_soc.h"
#include "difftest.h"
#include "disasm.h"
#include "./device/device.h"
CPU_state cpu = {};
NPCState npc_state = { .state = NPC_STOP };
Emulator::Emulator(){
    top = new Vriscv_soc;
    cycles = 0;
	start_wave= true;
#if EN_TRACE
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    top->trace(m_trace,99);
    m_trace->open("waveform.vcd");
#endif
	reset(10);
};

void Emulator::execute_cycle(){
    top->clock = 0;
    top->eval();
#if EN_TRACE
	if(start_wave){
		m_trace->dump(2*cycles);
	}
#endif 
    top->clock = 1;
    top->eval();
#if EN_TRACE
	if(start_wave){
		m_trace->dump(2*cycles + 1);
		cycles++;
	}
#endif 
}

void Emulator::is_satrt_wave(bool flag){
	start_wave = flag;
}


//{"mstatus",   0x300, 5},
//    {"mepc",      0x341, 13},
//    {"mcause",    0x342, 14},
//    {"mtval",     0x343, 15},
//    {"mtvec",     0x305, 10},
void Emulator::execute_once(){
	int i = 0;
	execute_cycle();
	while(top->io_difftest_commit == 0){
		if(i>100){printf("~~~~~Dead cycle~~~~~\n");break;}
		execute_cycle();
		i++;
	}
	
	cpu.pc = top->io_difftest_pc;
	cpu.inst = top->io_difftest_inst;
#define REGS(x) cpu.gpr[x] = top->io_difftest_reg_##x
    REGS(0);REGS(1);REGS(2);REGS(3);REGS(4);REGS(5);REGS(6);REGS(7);
    REGS(8);REGS(9);REGS(10);REGS(11);REGS(12);REGS(13);REGS(14);REGS(15);
    REGS(16);REGS(17);REGS(18);REGS(19);REGS(20);REGS(21);REGS(22);REGS(23);
    REGS(24);REGS(25);REGS(26);REGS(27);REGS(28);REGS(29);REGS(30);REGS(31);
#undef REGS(x)

	cpu.csr[5]  = top->io_difftest_mstatus;
	cpu.csr[10] = top->io_difftest_mtvec;
	cpu.csr[13] = top->io_difftest_mepc;
	cpu.csr[14] = top->io_difftest_mcause;
#ifdef CONFIG_DIFFTEST 
	difftest_step(top->io_difftest_pc,top->io_difftest_irq);
#endif

#ifdef CONFIG_ITRACE
	uint64_t reg[2];
	read_pc_and_inst(reg);
	char logbuf[128];
	char *p = logbuf;
	p += snprintf(p, sizeof(logbuf), "0x%016lx" ":", reg[0]);

	uint8_t *inst = (uint8_t *)&reg[1];
	for (int i = 0; i < 4; i ++) {
		p += snprintf(p, 4, " %02x", inst[i]);
	}
	//extern void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
	disassemble(p, logbuf + sizeof(logbuf) - p, reg[0],(uint8_t *)&reg[1],4);
	puts(logbuf);

	if(reg[1] == 0x100073){
		Log("npc: %s at pc = " FMT_WORD, ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) );
		npc_state.state 	= NPC_ABORT;
		//exit(1);
	}
#endif 
	device_update();
};

void Emulator::checkregs(CPU_state *ref, vaddr_t pc){
	if(!isa_difftest_checkregs(ref, pc)){
		npc_state.state 	= NPC_ABORT;
		npc_state.halt_pc	= pc;
		isa_reg_display();
	}
}

bool Emulator::isa_difftest_checkregs(CPU_state *ref, vaddr_t pc){

	if(ref->pre_pc != pc){ // ref 的pre_pc 是当前pc
		printf("ref->pc 0x%lx, npc->pc :0x%lx\n",ref->pre_pc,pc);
		return false;
	}
	for(int i=0;i<32;i++){
		if(ref->gpr[i] != cpu.gpr[i]){
			printf("difftest false \n"); 
			npc_state.state 	= NPC_ABORT;
			npc_state.halt_pc	= pc;
			printf("ref gpr[%d] = 0x%lx, gpr[%d] = 0x%lx\n",i,ref->gpr[i],i,cpu.gpr[i]);
			return false;
		}
	}
	return true;
}

void Emulator::isa_reg_display(){
	printf("inst_counter: = %lx\n",top->io_inst_counter);
#define gpr(x) top->io_difftest_reg_##x
    printf("$0($0) = %lx, $1(ra) = %lx, $2(sp) = %lx, $3(gp) = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$4(tp) = %lx, $5(t0) = %lx, $6(t1) = %lx, $7(t2) = %lx \n",gpr(4),gpr(5),gpr(6),gpr(7));
    printf("$8(s0) = %lx, $9(s1) = %lx, $10(a0) = %lx, $11(a1) = %lx \n",gpr(8),gpr(9),gpr(10),gpr(11));
    printf("$12(a2) = %lx, $13(a3) = %lx, $14(a4) = %lx, $15(a5) = %lx \n",gpr(12),gpr(13),gpr(14),gpr(15));
    printf("$16(a6) = %lx, $17(a7) = %lx, $18(s2) = %lx, $19(s3) = %lx \n",gpr(16),gpr(17),gpr(18),gpr(19));
    printf("$20(s4) = %lx, $21(s5) = %lx, $22(s6) = %lx, $23(s7) = %lx \n",gpr(20),gpr(21),gpr(22),gpr(23));
    printf("$24(s8) = %lx, $25(s9) = %lx, $26(s10) = %lx, $27(s11) = %lx \n",gpr(24),gpr(25),gpr(26),gpr(27));
    printf("$28(t3) = %lx, $29(t4) = %lx, $30(t5) = %lx, $31(t6) = %lx \n",gpr(28),gpr(29),gpr(30),gpr(31));  
}

void Emulator::isa_csr_display(){
	printf("mstatus = %lx, mcause = %lx\n",cpu.csr[5],cpu.csr[14]);
	printf("mepc = %lx, mtvec = %lx\n",cpu.csr[13],cpu.csr[10]);
}

void Emulator::execute(uint64_t n){
    //....
    for(; n > 0; n--){
        execute_once();
		if(npc_state.state != NPC_RUNNING){
			break;
		}
    }
    //....
};

void Emulator::reset(int n){
    npc_state.state 	= NPC_RUNNING;
	top->reset = 1;
    for(int i = 0; i<n; i++){
        execute_cycle();
    }
    top->reset = 0;
};

void Emulator::read_regs(uint64_t* reg){
#define REGS(x) reg[x] = top->io_difftest_reg_##x
    REGS(0);REGS(1);REGS(2);REGS(3);REGS(4);REGS(5);REGS(6);REGS(7);
    REGS(8);REGS(9);REGS(10);REGS(11);REGS(12);REGS(13);REGS(14);REGS(15);
    REGS(16);REGS(17);REGS(18);REGS(19);REGS(20);REGS(21);REGS(22);REGS(23);
    REGS(24);REGS(25);REGS(26);REGS(27);REGS(28);REGS(29);REGS(30);REGS(31);

    reg[32] = top->io_difftest_pc;
    reg[33] = top->io_difftest_inst;
};

// void Emulator::read_pc_and_inst(uint64_t* reg){
//     reg[0] = top->io_difftest_pc;
//     reg[1] = top->io_difftest_inst;
// }

void Emulator::close(){
#if EN_TRACE
	m_trace->close();
#endif 
	delete top;
}

Emulator::~Emulator(){
	//close();
}