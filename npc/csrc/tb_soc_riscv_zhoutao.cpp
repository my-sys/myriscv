#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
//#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsoc_riscv_zhoutao_top.h"
#include <nvboard.h>
#define MAX_RISCV_SIM_TIME 20000
#define IS_WAVE_OR_NVBOARD 0


# if IS_WAVE_OR_NVBOARD 
#include <pthread.h>      
static vluint64_t riscv_sim_time = 0;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static uint64_t map_pin[100];

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

void reset(int n){
    top->reset = 0;
    top->clk = 0;
    step_and_dump_wave();
    top->clk = 1;
    step_and_dump_wave();
    while(n--){
        top->clk = 0;
        step_and_dump_wave();
        top->clk = 1;
        step_and_dump_wave();
    }
    top->reset = 0;
    top->clk = 0;
    step_and_dump_wave();
    top->clk = 1;
    step_and_dump_wave();

}

void delay_clk(int n){
    uint64_t temp_count = riscv_sim_time;
    while((riscv_sim_time - temp_count < n)&& (riscv_sim_time <MAX_RISCV_SIM_TIME));
}

void kbd_sencode(uint8_t code){
    bool send_buffer[11];
    send_buffer[0] = 0;
    for(int j = 0 ; j<8; j++){
        send_buffer[j] = (code>>j) & 1;
    }
    send_buffer[9] = ~(^code);
    send_buffer[10] = 1;
    for(int i = 0; i<11;i++){
        map_pin[1] = send_buffer[i];
        delay_clk(3);
        map_pin[0] = 0;
        delay_clk(3);
        map_pin[0] = 1;
    }
}

void* test_bench(){
    // 设置激励信号的值
   // while(riscv_sim_time < MAX_RISCV_SIM_TIME){
        
   // }

   delay_clk(20);
   kbd_sencode(0x1c);
   delay_clk(20);
   kbd_sencode(0xf0);
   delay_clk(20);
   kbd_sencode(0x1c);
   delay_clk(40);
   kbd_sencode(0x1B);
   delay_clk(20);
   kbd_sencode(0x1B);
   delay_clk(20);
   kbd_sencode(0xF0);
   kbd_sencode(0x1B);
   delay_clk(20);

}

void update_pin(){
    // 更新激励信号的值
    top->ps2_clk = map_pin[0];
    top->ps2_data = map_pin[1];
}

int main(int argc, char** argv,char** cnv){
    sim_init();
    reset();
    
    pthread_t tid = 1;
    int ret = pthread_create(&tid, NULL, test_bench, NULL);
    while(riscv_sim_time < MAX_RISCV_SIM_TIME){
        update_pin();
        top->clk = 0;
        step_and_dump_wave();
        top->clk = 1;
        step_and_dump_wave();
        riscv_sim_time ++;
    } 
    pthread_exit(NULL);
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
