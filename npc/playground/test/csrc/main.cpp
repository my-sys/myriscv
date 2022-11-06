#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include "zhoutao.h"
#include "Vriscv_soc.h"
#define EN_TRACE 1
Vriscv_soc *top;

#if EN_TRACE
VerilatedVcdC *m_trace;
#endif 
uint64_t main_time = 0;         // Current simulation time 

double sc_time_stamp() {        // Called by $time in Verilog
    return main_time;           // converts to double, to match
}                               // what SystemC does 

void single_cycle(){
    top->clock = 0;
    top->eval();

    top->clock = 1;
    top->eval();
}

void execute_cycles(int n){
    //....
    for(int i = 0; i < n; i++){
        single_cycle();
    }
    //....
}

void reset(int n){
    top->reset = 1;
    for(int i = 0; i<n; i++){
        single_cycle();
    }
    top->reset = 0;
}

int main(int argc, char** argv){
    top = new Vriscv_soc;
#if EN_TRACE
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    top->trace(m_trace,99);
    m_trace->open("waveform.vcd");
#endif
    reset(3);
    top->io_value1 = 16;
    top->io_value2 = 10;
    top->io_loadingValues = 1;
    single_cycle();
    top->io_loadingValues = 0;
    execute_cycles(5);
#if EN_TRACE
    m_trace->close();
#endif 
    delete top;
}
