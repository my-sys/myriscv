#include <stdio.h>
#include <stdlib.h>
//#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsoc_riscv_zhoutao_top.h"
#include <nvboard.h>
#define MAX_RISCV_SIM_TIME 2000
#define IS_WAVE_OR_NVBOARD 1


# if IS_WAVE_OR_NVBOARD 

static vluint64_t riscv_sim_time = 0;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vsoc_riscv_zhoutao_top* top;

void step_and_dump_wave(){
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init(){
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vsoc_riscv_zhoutao_top;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("waveform.vcd");
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
    delete top;
    delete contextp;
}
int main(int argc, char** argv,char** cnv){
    sim_init();
    top->clk=0b0;step_and_dump_wave();
    top->clk=0b1;  top->reset=0b1; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b1; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b1; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;

    top->reset=0b0; top->in=0b0; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b0; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b0; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;


    top->reset=0b0; top->in=0b0; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b0; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b0; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b0; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    top->reset=0b0; top->in=0b1; step_and_dump_wave();
    top->clk=0b0;step_and_dump_wave();top->clk=0b1;
    sim_exit();

   /* VerilatedContext* contextp = new VerilatedContext;
    Verilated::commandArgs(argc, argv);
    Vsoc_riscv_zhoutao_top* top = new Vsoc_riscv_zhoutao_top(contextp);

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while(1){
       
        m_trace->dump(riscv_sim_time++);
        riscv_sim_time++;
        
    }


    m_trace->close();
    delete top;
    delete contextp;
    exit(EXIT_SUCCESS);*/
}
#else 
static TOP_NAME dut;

void nvboard_bind_all_pins(Vsoc_riscv_zhoutao_top* top);

static void single_cycle() {
    dut.clk = 0; dut.eval();
    dut.clk = 1; dut.eval();
}

static void reset(int n){
    dut.rst = 1;
    while(n--)single_cycle();
    dut.rst = 0;
}



int main(int argc, char** argv,char** cnv){
    nvboard_bind_all_pins(&dut);
    nvboard_init();
    reset(10);
    
    while(1){
        nvboard_update();
        single_cycle();
        
    }
}
#endif 
