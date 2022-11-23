#ifndef  __EMULATOR__
#define  __EMULATOR__
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
    void execute(int n);
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

void Emulator::execute(int n){
    //....
    for(int i = 0; i < n; i++){
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
#endif