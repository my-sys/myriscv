#include <nvboard.h>
#include "Vsoc_riscv_zhoutao_top.h"

void nvboard_bind_all_pins(Vsoc_riscv_zhoutao_top* top){
	nvboard_bind_pin(&top->seg0_o, false, true, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin(&top->seg1_o, false, true, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
	nvboard_bind_pin(&top->seg2_o, false, true, 8, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G, DEC2P);
	nvboard_bind_pin(&top->seg3_o, false, true, 8, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G, DEC3P);
	nvboard_bind_pin(&top->seg4_o, false, true, 8, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G, DEC4P);
	nvboard_bind_pin(&top->seg5_o, false, true, 8, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G, DEC5P);
	nvboard_bind_pin(&top->seg6_o, false, true, 8, SEG6A, SEG6B, SEG6C, SEG6D, SEG6E, SEG6F, SEG6G, DEC6P);
	nvboard_bind_pin(&top->seg7_o, false, true, 8, SEG7A, SEG7B, SEG7C, SEG7D, SEG7E, SEG7F, SEG7G, DEC7P);
	nvboard_bind_pin(&top->reset, false, false, 1, SW15);
	nvboard_bind_pin(&top->ps2_clk, true, false, 1, PS2_CLK);
	nvboard_bind_pin(&top->ps2_data, true, false, 1, PS2_DAT);
}