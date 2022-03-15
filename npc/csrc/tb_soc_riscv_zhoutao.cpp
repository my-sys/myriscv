#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
//#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsoc_riscv_zhoutao_top.h"
#include <nvboard.h>
#define MAX_RISCV_SIM_TIME 20000
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
    Vtest_tb * tb = new Vtest_tb;
    top->clk = 0;
    tb->clk = top->clk;
    top->eval_step();
    tb->eval_step();
    top->eval_end_step();
    tb->eval_end_step();
    contextp->timeInc(1);
    tfp->dump(contextp->time());

    for(int i =0 ; i<10; i++){
        top->clk ~= top->clk;
        top->reset = 1;
        tb->clk = top->clk;
        
    top->eval_step();
    tb->eval_step();
    top->eval_end_step();
    tb->eval_end_step();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
    }
    top->reset = 0;
    tb->reset = top->reset;
    top->eval_step();
    tb->eval_step();
    top->eval_end_step();
    tb->eval_end_step();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
    while(i <= 10000){
        top->clk = ~top->clk;
        top->ps2_clk = tb->ps2_clk;
        top->ps2_data = tb->ps2_data;
        tb->clk = top->clk;
    top->eval_step();
    tb->eval_step();
    top->eval_end_step();
    tb->eval_end_step();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
    }

    sim_exit();
    
    /*top->clk=0b0;step_and_dump_wave();
    int i =0;
    while(i<= 1000){
        top->clk=~top->clk;
        i++;
        if(top->clk == 1){

        }
        step_and_dump_wave();
    }    
    sim_exit();*/

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
    dut.reset = 1;
    while(n--)single_cycle();
    dut.reset = 0;
}



int main(int argc, char** argv,char** cnv){
    nvboard_bind_all_pins(&dut);
    nvboard_init();
    reset(10);
    
    while(1){
        nvboard_update();
        single_cycle();
        
    }
    reset(5);
    printf("error\n");
    return 0;
}
#endif 
