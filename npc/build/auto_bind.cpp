#include <nvboard.h>
#include "Vsoc_riscv_zhoutao_top.h"

void nvboard_bind_all_pins(Vsoc_riscv_zhoutao_top* top){
	nvboard_bind_pin(&top->led, false, true, 16, LD15, LD14, LD13, LD12, LD11, LD10, LD9, LD8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin(&top->rst, false, false, 1, SW15);
	nvboard_bind_pin(&top->clk, true, false, 1, PS2_CLK);
}