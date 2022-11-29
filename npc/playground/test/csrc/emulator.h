#ifndef  __EMULATOR_H__
#define  __EMULATOR_H__
#include "common.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include "Vriscv_soc.h"
#define EN_TRACE 0

class Emulator{
private:
    Vriscv_soc *top;
    uint64_t    cycles;
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
    void execute(uint64_t n);
    void close();
    void reset(int n);
	void read_regs(uint64_t* reg);
	void read_pc_and_inst(uint64_t* reg);
};

#endif