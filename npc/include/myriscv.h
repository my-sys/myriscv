#ifndef MYRISCV_H
#define MYRISCV_H
#include<semaphore.h>
struct excitation_signal
{
    int ps2_clk;
    int ps_data;
};

struct signal{
    excitation_signal* m_exciation_signal;
    int* reset;
    int* clk;
};

sem_t sem_clk;
sem_t sem_step;
sem_t sem_excitation;
void generate_excitation_signal(void* signal);
void step_and_dump_wave();
#endif 
