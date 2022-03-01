#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsoc_riscv_zhoutao_top.h"

#define MAX_RISCV_SIM_TIME 2000

vluint64_t riscv_sim_time = 0;
vluint64_t riscv_posedge_cnt = 0;
int main(int argc, char** argv,char** cnv){
    VerilatedContext* contextp = new VerilatedContext;
    Verilated::commandArgs(argc, argv);
    Vsoc_riscv_zhoutao_top* top = new Vsoc_riscv_zhoutao_top(contextp);

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while(MAX_RISCV_SIM_TIME>riscv_sim_time){
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == a ^ b);
        m_trace->dump(riscv_sim_time++);
        riscv_sim_time++;
        
    }
    m_trace->close();
    delete top;
    delete contextp;
    exit(EXIT_SUCCESS);
}
