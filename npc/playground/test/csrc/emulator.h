#ifndef  __EMULATOR_H__
#define  __EMULATOR_H__
#include "common.h"
#include <iostream>
#include "debug.h"
class Vriscv_soc;
class VerilatedVcdC;
class Emulator{
private:
    Vriscv_soc *top;
    uint64_t    cycles;
	bool 	    start_wave;
#if EN_TRACE
VerilatedVcdC *m_trace;
#endif 
public:
    static Emulator& get_instance(){
        static Emulator instance;
        return instance;
    }
    Emulator();
    ~Emulator();
    void execute_once();
	void execute_cycle();
    void execute(uint64_t n);
    void close();
    void reset(int n);
	// void read_regs(uint64_t* reg);
	// void read_pc_and_inst(uint64_t* reg);
	void checkregs(CPU_state *ref, vaddr_t pc);
	bool isa_difftest_checkregs(CPU_state *ref, vaddr_t pc);
	void isa_reg_display();
	void isa_csr_display();
	void is_satrt_wave(bool flag);
};

#endif