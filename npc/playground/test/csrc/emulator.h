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
    ~Emulator(){
#if EN_TRACE
        m_trace->close();
#endif 
        delete top;
    };
    void execute_once();
    void execute(uint64_t n);
    void reset(int n);
}


Emulator::Emulator(){
    top = new Vriscv_soc;
    cycles = 0;
#if EN_TRACE
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    top->trace(m_trace,99);
    m_trace->open("waveform.vcd");
#endif

}

void Emulator::execute_once(){
    top->clock = 0;
    top->eval();
#if EN_TRACE
    m_trace->dump(2*cycles);
#endif 
    top->clock = 1;
    top->eval();
#if EN_TRACE
    m_trace->dump(2*cycles + 1);
#endif 
    cycles++;
}

void Emulator::execute(uint64_t n){
    //....
    for(; n > 0; n--){
        execute_once();
    }
    //....
}

void Emulator::reset(int n){
    top->reset = 1;
    for(int i = 0; i<n; i++){
        execute_once();
    }
    top->reset = 0;
}

void Emulator::read_regs(uint64_t* reg){
#define REGS(x) reg[x] = top->io_difftest_reg_##x
    REGS(0);REGS(1);REGS(2);REGS(3);REGS(4);REGS(5);REGS(6);REGS(7);
    REGS(8);REGS(9);REGS(10);REGS(11);REGS(12);REGS(13);REGS(14);REGS(15);
    REGS(16);REGS(17);REGS(18);REGS(19);REGS(20);REGS(21);REGS(22);REGS(23);
    REGS(24);REGS(25);REGS(26);REGS(27);REGS(28);REGS(29);REGS(30);REGS(31);
#undef REGS(x)
    reg[32] = top->io_difftest_pc
    reg[33] = top->io_difftest_inst
}
#endif