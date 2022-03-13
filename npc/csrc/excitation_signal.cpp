#incldue "../include/myriscv.h"

static unsigned int kbd_clk_period = 6;
static unsigned int send_buffer = 0;
extern sem_t sem_clk;
extern sem_t sem_excitation;
void set_code(unsigned int  code){
    send_buffer = 2 + (~(^code));
    send_buffer = (send_buffer << 8) + code;
    send_buffer = send_buffer << 1;
}

void generate_excitation_signal(void *temp_signal)
{
    while(1){
         sem_wait(&sem_clk);
         signal* temp_signal_x = (signal*)temp_signal;
         for(int i = 0; i<= kbd_clk_period; i++){
             temp_signal_x->excitation_signal->ps2_clk = 0;
         }
         for(int i = 0; i <= kbd_clk_period; i++){
                
         }
         sem_post(&sem_excitation);
    }
}
