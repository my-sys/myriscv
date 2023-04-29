// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_soc__Syms.h"


void Vriscv_soc___024root__traceInitSub0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscv_soc___024root__traceInitTop(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscv_soc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vriscv_soc___024root__traceInitSub0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+3195,"clock", false,-1);
        tracep->declBit(c+3196,"reset", false,-1);
        tracep->declQuad(c+3197,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+3199,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+3201,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+3203,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+3205,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+3207,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+3209,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+3211,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+3213,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+3215,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+3217,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+3219,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+3221,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+3223,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+3225,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+3227,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+3229,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+3231,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+3233,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+3235,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+3237,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+3239,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+3241,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+3243,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+3245,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+3247,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+3249,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+3251,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+3253,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+3255,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+3257,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+3259,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+3261,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+3263,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+3264,"io_difftest_commit", false,-1);
        tracep->declQuad(c+3265,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3267,"io_difftest_irq", false,-1);
        tracep->declQuad(c+3268,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3270,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+3272,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+3274,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+3276,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+3195,"riscv_soc clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc reset", false,-1);
        tracep->declQuad(c+3197,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+3199,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+3201,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+3203,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+3205,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+3207,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+3209,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+3211,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+3213,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+3215,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+3217,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+3219,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+3221,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+3223,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+3225,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+3227,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+3229,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+3231,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+3233,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+3235,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+3237,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+3239,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+3241,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+3243,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+3245,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+3247,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+3249,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+3251,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+3253,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+3255,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+3257,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+3259,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+3261,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+3263,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+3264,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+3265,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3267,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+3268,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3270,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+3272,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+3274,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+3276,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+3195,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core_reset", false,-1);
        tracep->declBit(c+1,"riscv_soc core_io_axi_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core_io_axi_bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core_io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core_io_axi_bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core_io_axi_bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core_io_axi_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core_io_axi_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core_io_axi_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+11,"riscv_soc core_io_axi_bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core_io_axi_bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core_io_axi_bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core_io_axi_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core_io_axi_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core_io_axi_bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core_io_axi_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core_io_axi_bus_r_bits_rlast", false,-1);
        tracep->declBus(c+21,"riscv_soc core_io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core_io_sram0_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core_io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc core_io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc core_io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core_io_sram1_wen", false,-1);
        tracep->declArray(c+32,"riscv_soc core_io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc core_io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc core_io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc core_io_sram2_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core_io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc core_io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc core_io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc core_io_sram3_wen", false,-1);
        tracep->declArray(c+32,"riscv_soc core_io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc core_io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc core_io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core_io_sram4_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core_io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core_io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc core_io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc core_io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core_io_sram5_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core_io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core_io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+74,"riscv_soc core_io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc core_io_sram6_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core_io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core_io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc core_io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+80,"riscv_soc core_io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc core_io_sram7_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core_io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc core_io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+85,"riscv_soc core_difftest_irq", false,-1);
        tracep->declBit(c+86,"riscv_soc core_difftest_peripheral", false,-1);
        tracep->declBit(c+87,"riscv_soc core_difftest_commit", false,-1);
        tracep->declQuad(c+88,"riscv_soc core_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+90,"riscv_soc core_difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+91,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+103,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+105,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+107,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+109,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+111,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+119,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+121,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+123,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+131,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+135,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+137,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+139,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+143,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+147,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+151,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declQuad(c+155,"riscv_soc core_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc axi_ram_reset", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram_io_ram_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc axi_ram_io_ram_bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc axi_ram_io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc axi_ram_io_ram_bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc axi_ram_io_ram_bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc axi_ram_io_ram_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc axi_ram_io_ram_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc axi_ram_io_ram_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram_io_ram_bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc axi_ram_io_ram_bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc axi_ram_io_ram_bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc axi_ram_io_ram_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc axi_ram_io_ram_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc axi_ram_io_ram_bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc axi_ram_io_ram_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc axi_ram_io_ram_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram0_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram0_reset", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0_io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram0_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0_io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc sram1_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram1_reset", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1_io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc sram2_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram2_reset", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2_io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc sram3_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram3_reset", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3_io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc sram4_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram4_reset", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4_io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc sram5_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram5_reset", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5_io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram5_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5_io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc sram6_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram6_reset", false,-1);
        tracep->declBus(c+74,"riscv_soc sram6_io_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc sram6_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6_io_wdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc sram6_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc sram7_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram7_reset", false,-1);
        tracep->declBus(c+80,"riscv_soc sram7_io_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc sram7_io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram7_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7_io_wdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc sram7_io_rdata", false,-1, 127,0);
        tracep->declBus(c+90,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+157,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core reset", false,-1);
        tracep->declBit(c+1,"riscv_soc core io_axi_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core io_axi_bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core io_axi_bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core io_axi_bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core io_axi_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core io_axi_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core io_axi_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+11,"riscv_soc core io_axi_bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core io_axi_bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core io_axi_bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core io_axi_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core io_axi_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core io_axi_bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core io_axi_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core io_axi_bus_r_bits_rlast", false,-1);
        tracep->declBus(c+21,"riscv_soc core io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core io_sram0_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc core io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc core io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core io_sram1_wen", false,-1);
        tracep->declArray(c+32,"riscv_soc core io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc core io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc core io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc core io_sram2_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc core io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc core io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc core io_sram3_wen", false,-1);
        tracep->declArray(c+32,"riscv_soc core io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc core io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc core io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core io_sram4_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc core io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc core io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core io_sram5_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+74,"riscv_soc core io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc core io_sram6_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc core io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+80,"riscv_soc core io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc core io_sram7_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc core io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+85,"riscv_soc core difftest_irq", false,-1);
        tracep->declBit(c+86,"riscv_soc core difftest_peripheral", false,-1);
        tracep->declBit(c+87,"riscv_soc core difftest_commit", false,-1);
        tracep->declQuad(c+88,"riscv_soc core difftest_pc", false,-1, 63,0);
        tracep->declBus(c+90,"riscv_soc core difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+155,"riscv_soc core inst_counter", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache_io_flush", false,-1);
        tracep->declBit(c+160,"riscv_soc core i_cache_io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+161,"riscv_soc core i_cache_io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core i_cache_io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core i_cache_io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+168,"riscv_soc core i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+170,"riscv_soc core i_cache_io_is_fence_i", false,-1);
        tracep->declBus(c+21,"riscv_soc core i_cache_io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core i_cache_io_sram0_data_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache_io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc core i_cache_io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc core i_cache_io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core i_cache_io_sram0_tag_wen", false,-1);
        tracep->declArray(c+32,"riscv_soc core i_cache_io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc core i_cache_io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc core i_cache_io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc core i_cache_io_sram2_data_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache_io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc core i_cache_io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc core i_cache_io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc core i_cache_io_sram2_tag_wen", false,-1);
        tracep->declArray(c+32,"riscv_soc core i_cache_io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc core i_cache_io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+171,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+172,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+175,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+176,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+185,"riscv_soc core d_cache_io_cpu_ready", false,-1);
        tracep->declBus(c+51,"riscv_soc core d_cache_io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core d_cache_io_sram0_data_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core d_cache_io_sram0_data_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core d_cache_io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc core d_cache_io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc core d_cache_io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core d_cache_io_sram0_tag_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache_io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core d_cache_io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+74,"riscv_soc core d_cache_io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc core d_cache_io_sram2_data_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core d_cache_io_sram2_data_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core d_cache_io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc core d_cache_io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+80,"riscv_soc core d_cache_io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc core d_cache_io_sram2_tag_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache_io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc core d_cache_io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+186,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+187,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+190,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+193,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+195,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+196,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+199,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+171,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+172,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+175,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+186,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+187,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+190,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+195,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+196,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+201,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+3281,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+204,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+205,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core cross_bar_1_io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+206,"riscv_soc core cross_bar_1_io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+207,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+211,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+212,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+214,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+160,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+168,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+185,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+201,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+215,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+218,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch_reset", false,-1);
        tracep->declBit(c+219,"riscv_soc core fetch_io_br_info_valid", false,-1);
        tracep->declBit(c+220,"riscv_soc core fetch_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+221,"riscv_soc core fetch_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+223,"riscv_soc core fetch_io_br_info_taken", false,-1);
        tracep->declQuad(c+224,"riscv_soc core fetch_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core fetch_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+227,"riscv_soc core fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+229,"riscv_soc core fetch_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core fetch_io_flush", false,-1);
        tracep->declBit(c+204,"riscv_soc core fetch_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+205,"riscv_soc core fetch_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core fetch_io_cpu_data_ready", false,-1);
        tracep->declBit(c+206,"riscv_soc core fetch_io_cpu_data_valid", false,-1);
        tracep->declQuad(c+207,"riscv_soc core fetch_io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core fetch_io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+232,"riscv_soc core fetch_io_put_pc_ready", false,-1);
        tracep->declBit(c+233,"riscv_soc core fetch_io_put_pc_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core fetch_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+235,"riscv_soc core fetch_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+237,"riscv_soc core fetch_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+159,"riscv_soc core fetch_io_out_flush", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute_reset", false,-1);
        tracep->declBit(c+232,"riscv_soc core execute_io_op_datas_ready", false,-1);
        tracep->declBit(c+238,"riscv_soc core execute_io_op_datas_valid", false,-1);
        tracep->declBus(c+239,"riscv_soc core execute_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+240,"riscv_soc core execute_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+241,"riscv_soc core execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"riscv_soc core execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core execute_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+248,"riscv_soc core execute_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+250,"riscv_soc core execute_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+251,"riscv_soc core execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+252,"riscv_soc core execute_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+253,"riscv_soc core execute_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+254,"riscv_soc core execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+255,"riscv_soc core execute_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+257,"riscv_soc core execute_io_irq_time_irq", false,-1);
        tracep->declBit(c+258,"riscv_soc core execute_io_irq_soft_irq", false,-1);
        tracep->declQuad(c+259,"riscv_soc core execute_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core execute_io_mie", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core execute_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+265,"riscv_soc core execute_io_mtvec", false,-1, 63,0);
        tracep->declBit(c+267,"riscv_soc core execute_io_wb_valid", false,-1);
        tracep->declBus(c+268,"riscv_soc core execute_io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+269,"riscv_soc core execute_io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+271,"riscv_soc core execute_io_csr_valid", false,-1);
        tracep->declBus(c+272,"riscv_soc core execute_io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+273,"riscv_soc core execute_io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+275,"riscv_soc core execute_io_csr_except_is_except", false,-1);
        tracep->declBit(c+276,"riscv_soc core execute_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+277,"riscv_soc core execute_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+278,"riscv_soc core execute_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+279,"riscv_soc core execute_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+281,"riscv_soc core execute_io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+283,"riscv_soc core execute_io_commit", false,-1);
        tracep->declBus(c+284,"riscv_soc core execute_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+285,"riscv_soc core execute_io_difftest_peripheral", false,-1);
        tracep->declQuad(c+229,"riscv_soc core execute_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core execute_io_flush", false,-1);
        tracep->declBit(c+170,"riscv_soc core execute_io_fence_i", false,-1);
        tracep->declBit(c+219,"riscv_soc core execute_io_br_info_valid", false,-1);
        tracep->declBit(c+220,"riscv_soc core execute_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+221,"riscv_soc core execute_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+223,"riscv_soc core execute_io_br_info_taken", false,-1);
        tracep->declQuad(c+224,"riscv_soc core execute_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core execute_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+227,"riscv_soc core execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+211,"riscv_soc core execute_io_bus_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core execute_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+212,"riscv_soc core execute_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core execute_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core execute_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+214,"riscv_soc core execute_io_bus_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core decode_reset", false,-1);
        tracep->declBit(c+232,"riscv_soc core decode_io_get_inst_ready", false,-1);
        tracep->declBit(c+233,"riscv_soc core decode_io_get_inst_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core decode_io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+235,"riscv_soc core decode_io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+237,"riscv_soc core decode_io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+286,"riscv_soc core decode_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+287,"riscv_soc core decode_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+289,"riscv_soc core decode_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+290,"riscv_soc core decode_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+292,"riscv_soc core decode_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+293,"riscv_soc core decode_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+232,"riscv_soc core decode_io_op_datas_ready", false,-1);
        tracep->declBit(c+238,"riscv_soc core decode_io_op_datas_valid", false,-1);
        tracep->declBus(c+239,"riscv_soc core decode_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+240,"riscv_soc core decode_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+241,"riscv_soc core decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"riscv_soc core decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core decode_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+248,"riscv_soc core decode_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+250,"riscv_soc core decode_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+251,"riscv_soc core decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+252,"riscv_soc core decode_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+253,"riscv_soc core decode_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+254,"riscv_soc core decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+255,"riscv_soc core decode_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core decode_io_flush", false,-1);
        tracep->declBit(c+3195,"riscv_soc core commit_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core commit_reset", false,-1);
        tracep->declBus(c+286,"riscv_soc core commit_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+287,"riscv_soc core commit_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+289,"riscv_soc core commit_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+290,"riscv_soc core commit_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+267,"riscv_soc core commit_io_normal_wb_valid", false,-1);
        tracep->declBus(c+268,"riscv_soc core commit_io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+269,"riscv_soc core commit_io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+292,"riscv_soc core commit_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+293,"riscv_soc core commit_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+271,"riscv_soc core commit_io_csr_wb_valid", false,-1);
        tracep->declBus(c+272,"riscv_soc core commit_io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+273,"riscv_soc core commit_io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+275,"riscv_soc core commit_io_csr_except_is_except", false,-1);
        tracep->declBit(c+276,"riscv_soc core commit_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+277,"riscv_soc core commit_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+278,"riscv_soc core commit_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+279,"riscv_soc core commit_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+281,"riscv_soc core commit_io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+265,"riscv_soc core commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit_io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core commit_io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+283,"riscv_soc core commit_io_commit", false,-1);
        tracep->declBus(c+284,"riscv_soc core commit_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+285,"riscv_soc core commit_io_difftest_peripheral", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit_difftest_irq_0", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit_difftest_peripheral_0", false,-1);
        tracep->declBit(c+87,"riscv_soc core commit_difftest_commit_0", false,-1);
        tracep->declQuad(c+88,"riscv_soc core commit_difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+90,"riscv_soc core commit_difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+91,"riscv_soc core commit__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core commit__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core commit__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core commit__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core commit__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core commit__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+103,"riscv_soc core commit__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+105,"riscv_soc core commit__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+107,"riscv_soc core commit__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+109,"riscv_soc core commit__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+111,"riscv_soc core commit__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core commit__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core commit__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core commit__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+119,"riscv_soc core commit__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+121,"riscv_soc core commit__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+123,"riscv_soc core commit__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core commit__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core commit__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core commit__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+131,"riscv_soc core commit__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core commit__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+135,"riscv_soc core commit__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+137,"riscv_soc core commit__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+139,"riscv_soc core commit__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core commit__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+143,"riscv_soc core commit__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core commit__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+147,"riscv_soc core commit__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core commit__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+151,"riscv_soc core commit__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core commit__WIRE_0_31", false,-1, 63,0);
        tracep->declQuad(c+155,"riscv_soc core commit_inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+215,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+218,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+258,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+257,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache io_flush", false,-1);
        tracep->declBit(c+160,"riscv_soc core i_cache io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+161,"riscv_soc core i_cache io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core i_cache io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core i_cache io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core i_cache io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+168,"riscv_soc core i_cache io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+170,"riscv_soc core i_cache io_is_fence_i", false,-1);
        tracep->declBus(c+21,"riscv_soc core i_cache io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core i_cache io_sram0_data_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc core i_cache io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc core i_cache io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core i_cache io_sram0_tag_wen", false,-1);
        tracep->declArray(c+32,"riscv_soc core i_cache io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc core i_cache io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc core i_cache io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc core i_cache io_sram2_data_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc core i_cache io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc core i_cache io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc core i_cache io_sram2_tag_wen", false,-1);
        tracep->declArray(c+32,"riscv_soc core i_cache io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc core i_cache io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+171,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+172,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+175,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage0_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage0_reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage0_io_flush", false,-1);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage0_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+161,"riscv_soc core i_cache cache_stage0_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core i_cache cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage0_io_addr_ready", false,-1);
        tracep->declBit(c+295,"riscv_soc core i_cache cache_stage0_io_addr_valid", false,-1);
        tracep->declQuad(c+296,"riscv_soc core i_cache cache_stage0_io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage1_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage1_reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage1_io_flush", false,-1);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage1_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+295,"riscv_soc core i_cache cache_stage1_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+296,"riscv_soc core i_cache cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+298,"riscv_soc core i_cache cache_stage1_io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+300,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+301,"riscv_soc core i_cache cache_stage1_io_sram_valid", false,-1);
        tracep->declArray(c+302,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+306,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+310,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+314,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+318,"riscv_soc core i_cache cache_stage1_io_sram_ready", false,-1);
        tracep->declBit(c+319,"riscv_soc core i_cache cache_stage1_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+320,"riscv_soc core i_cache cache_stage1_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+323,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+324,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+326,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+300,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+327,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage2_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage2_reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage2_io_flush", false,-1);
        tracep->declBit(c+319,"riscv_soc core i_cache cache_stage2_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+320,"riscv_soc core i_cache cache_stage2_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+323,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+324,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+326,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+300,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+327,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+172,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+175,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+329,"riscv_soc core i_cache cache_stage2_io_sram_w_valid", false,-1);
        tracep->declBus(c+330,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+331,"riscv_soc core i_cache cache_stage2_io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+164,"riscv_soc core i_cache cache_stage2_io_rdata_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core i_cache cache_stage2_io_rdata_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2_io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+168,"riscv_soc core i_cache cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+332,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+334,"riscv_soc core i_cache reg_sram1_valid", false,-1, 63,0);
        tracep->declBit(c+336,"riscv_soc core i_cache is_w_sram", false,-1);
        tracep->declBit(c+337,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declBit(c+338,"riscv_soc core i_cache is_sram1_write", false,-1);
        tracep->declQuad(c+339,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declBit(c+341,"riscv_soc core i_cache reg_temp_sram0_valid", false,-1);
        tracep->declBit(c+342,"riscv_soc core i_cache reg_temp_sram1_valid", false,-1);
        tracep->declBus(c+343,"riscv_soc core i_cache reg_temp_r_index", false,-1, 5,0);
        tracep->declBit(c+344,"riscv_soc core i_cache w_r_pass0_val", false,-1);
        tracep->declBit(c+345,"riscv_soc core i_cache w_r_pass1_val", false,-1);
        tracep->declBit(c+318,"riscv_soc core i_cache reg_sram_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage0 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage0 reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage0 io_flush", false,-1);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage0 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+161,"riscv_soc core i_cache cache_stage0 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core i_cache cache_stage0 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage0 io_addr_ready", false,-1);
        tracep->declBit(c+295,"riscv_soc core i_cache cache_stage0 io_addr_valid", false,-1);
        tracep->declQuad(c+296,"riscv_soc core i_cache cache_stage0 io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+295,"riscv_soc core i_cache cache_stage0 reg_valid", false,-1);
        tracep->declQuad(c+296,"riscv_soc core i_cache cache_stage0 reg_addr", false,-1, 63,0);
        tracep->declBit(c+346,"riscv_soc core i_cache cache_stage0 valid", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage1 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage1 reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage1 io_flush", false,-1);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage1 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+295,"riscv_soc core i_cache cache_stage1 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+296,"riscv_soc core i_cache cache_stage1 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+298,"riscv_soc core i_cache cache_stage1 io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+300,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+301,"riscv_soc core i_cache cache_stage1 io_sram_valid", false,-1);
        tracep->declArray(c+302,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+306,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+310,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+314,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+318,"riscv_soc core i_cache cache_stage1 io_sram_ready", false,-1);
        tracep->declBit(c+319,"riscv_soc core i_cache cache_stage1 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+320,"riscv_soc core i_cache cache_stage1 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+323,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+324,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+326,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+300,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+327,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+301,"riscv_soc core i_cache cache_stage1 valid", false,-1);
        tracep->declBit(c+347,"riscv_soc core i_cache cache_stage1 ready", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage1 reg_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+348,"riscv_soc core i_cache cache_stage1 reg_valid", false,-1);
        tracep->declQuad(c+349,"riscv_soc core i_cache cache_stage1 reg_tag", false,-1, 53,0);
        tracep->declBus(c+351,"riscv_soc core i_cache cache_stage1 reg_index", false,-1, 5,0);
        tracep->declBus(c+352,"riscv_soc core i_cache cache_stage1 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+353,"riscv_soc core i_cache cache_stage1 tag_0", false,-1, 53,0);
        tracep->declQuad(c+355,"riscv_soc core i_cache cache_stage1 tag_1", false,-1, 53,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage2 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage2 reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage2 io_flush", false,-1);
        tracep->declBit(c+319,"riscv_soc core i_cache cache_stage2 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+320,"riscv_soc core i_cache cache_stage2 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+323,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+324,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+326,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+300,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+327,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+172,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+175,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+329,"riscv_soc core i_cache cache_stage2 io_sram_w_valid", false,-1);
        tracep->declBus(c+330,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+331,"riscv_soc core i_cache cache_stage2 io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+164,"riscv_soc core i_cache cache_stage2 io_rdata_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core i_cache cache_stage2 io_rdata_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2 io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+168,"riscv_soc core i_cache cache_stage2 io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBus(c+351,"riscv_soc core i_cache cache_stage2 index", false,-1, 5,0);
        tracep->declBit(c+357,"riscv_soc core i_cache cache_stage2 valid", false,-1);
        tracep->declBit(c+331,"riscv_soc core i_cache cache_stage2 reg_chosen_tag", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2 reg_rdata", false,-1, 63,0);
        tracep->declBit(c+165,"riscv_soc core i_cache cache_stage2 reg_valid", false,-1);
        tracep->declBit(c+358,"riscv_soc core i_cache cache_stage2 reg_ready", false,-1);
        tracep->declQuad(c+359,"riscv_soc core i_cache cache_stage2 temp_addr", false,-1, 63,0);
        tracep->declQuad(c+172,"riscv_soc core i_cache cache_stage2 reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core i_cache cache_stage2 reg_r_valid", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2 reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+329,"riscv_soc core i_cache cache_stage2 reg_cache_write", false,-1);
        tracep->declQuad(c+168,"riscv_soc core i_cache cache_stage2 reg_cpu_addr", false,-1, 63,0);
        tracep->declQuad(c+361,"riscv_soc core i_cache cache_stage2 reg_tag", false,-1, 53,0);
        tracep->declBus(c+363,"riscv_soc core i_cache cache_stage2 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+364,"riscv_soc core i_cache cache_stage2 reg_lru_1", false,-1, 63,0);
        tracep->declBit(c+366,"riscv_soc core i_cache cache_stage2 LRU_1", false,-1);
        tracep->declQuad(c+367,"riscv_soc core i_cache cache_stage2 chose_bit", false,-1, 63,0);
        tracep->declQuad(c+369,"riscv_soc core i_cache cache_stage2 neg_chose_bit", false,-1, 63,0);
        tracep->declBus(c+371,"riscv_soc core i_cache cache_stage2 reg_bus_state", false,-1, 1,0);
        tracep->declBit(c+3195,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+176,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+185,"riscv_soc core d_cache io_cpu_ready", false,-1);
        tracep->declBus(c+51,"riscv_soc core d_cache io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core d_cache io_sram0_data_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core d_cache io_sram0_data_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core d_cache io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc core d_cache io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc core d_cache io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core d_cache io_sram0_tag_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core d_cache io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+74,"riscv_soc core d_cache io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc core d_cache io_sram2_data_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core d_cache io_sram2_data_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core d_cache io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc core d_cache io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+80,"riscv_soc core d_cache io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc core d_cache io_sram2_tag_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc core d_cache io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+186,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+187,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+190,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+193,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+195,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+196,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+199,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+372,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+374,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+375,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+376,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+377,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+379,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+380,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+381,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+383,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+384,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+185,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+179,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+385,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+386,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+57,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+387,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+388,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+390,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+394,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+398,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+399,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+401,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+403,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+405,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+407,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+408,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+410,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+196,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+190,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+187,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+193,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+412,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+414,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+416,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+417,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+418,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+419,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+420,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+421,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+422,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+424,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+426,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+428,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+429,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+430,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+431,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+432,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+3195,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+171,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+172,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+175,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+186,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+187,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+190,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+195,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+196,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+201,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+3281,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+433,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+434,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+435,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+436,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+437,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+438,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+439,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+440,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+441,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+204,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+205,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core cross_bar_1 io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+206,"riscv_soc core cross_bar_1 io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+207,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+211,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+212,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+214,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+160,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+168,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+185,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+201,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+215,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+218,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+442,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+443,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+444,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+219,"riscv_soc core fetch io_br_info_valid", false,-1);
        tracep->declBit(c+220,"riscv_soc core fetch io_br_info_mispredict", false,-1);
        tracep->declQuad(c+221,"riscv_soc core fetch io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+223,"riscv_soc core fetch io_br_info_taken", false,-1);
        tracep->declQuad(c+224,"riscv_soc core fetch io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core fetch io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+227,"riscv_soc core fetch io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+229,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+204,"riscv_soc core fetch io_cpu_addr_ready", false,-1);
        tracep->declBit(c+205,"riscv_soc core fetch io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core fetch io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core fetch io_cpu_data_ready", false,-1);
        tracep->declBit(c+206,"riscv_soc core fetch io_cpu_data_valid", false,-1);
        tracep->declQuad(c+207,"riscv_soc core fetch io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core fetch io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+232,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declBit(c+233,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+235,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+237,"riscv_soc core fetch io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+159,"riscv_soc core fetch io_out_flush", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch ibuf_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch ibuf_reset", false,-1);
        tracep->declBit(c+231,"riscv_soc core fetch ibuf_io_flush", false,-1);
        tracep->declBit(c+164,"riscv_soc core fetch ibuf_io_cache_buf_ready", false,-1);
        tracep->declBit(c+445,"riscv_soc core fetch ibuf_io_cache_buf_valid", false,-1);
        tracep->declQuad(c+209,"riscv_soc core fetch ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+446,"riscv_soc core fetch ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+447,"riscv_soc core fetch ibuf_io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+232,"riscv_soc core fetch ibuf_io_put_pc_ready", false,-1);
        tracep->declBit(c+233,"riscv_soc core fetch ibuf_io_put_pc_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core fetch ibuf_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+235,"riscv_soc core fetch ibuf_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+237,"riscv_soc core fetch ibuf_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch br_predictor_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch br_predictor_reset", false,-1);
        tracep->declBit(c+219,"riscv_soc core fetch br_predictor_io_br_info_valid", false,-1);
        tracep->declBit(c+220,"riscv_soc core fetch br_predictor_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+221,"riscv_soc core fetch br_predictor_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+223,"riscv_soc core fetch br_predictor_io_br_info_taken", false,-1);
        tracep->declQuad(c+224,"riscv_soc core fetch br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv_soc core fetch br_predictor_io_pc", false,-1, 63,0);
        tracep->declQuad(c+448,"riscv_soc core fetch br_predictor_io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+450,"riscv_soc core fetch br_predictor_io_pre_valid", false,-1);
        tracep->declQuad(c+162,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declBit(c+451,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+452,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+205,"riscv_soc core fetch reg_bus_valid", false,-1);
        tracep->declBus(c+454,"riscv_soc core fetch pre_info_head", false,-1, 1,0);
        tracep->declBus(c+455,"riscv_soc core fetch pre_info_tail", false,-1, 1,0);
        tracep->declQuad(c+456,"riscv_soc core fetch pre_info_fifo_0", false,-1, 63,0);
        tracep->declQuad(c+458,"riscv_soc core fetch pre_info_fifo_1", false,-1, 63,0);
        tracep->declQuad(c+460,"riscv_soc core fetch pre_info_fifo_2", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core fetch pre_info_fifo_3", false,-1, 63,0);
        tracep->declBit(c+464,"riscv_soc core fetch pre_enq", false,-1);
        tracep->declBus(c+465,"riscv_soc core fetch is_pre_head", false,-1, 1,0);
        tracep->declBus(c+466,"riscv_soc core fetch is_pre_tail", false,-1, 1,0);
        tracep->declBit(c+467,"riscv_soc core fetch is_pre_fifo_0", false,-1);
        tracep->declBit(c+468,"riscv_soc core fetch is_pre_fifo_1", false,-1);
        tracep->declBit(c+469,"riscv_soc core fetch is_pre_fifo_2", false,-1);
        tracep->declBit(c+470,"riscv_soc core fetch is_pre_fifo_3", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+231,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+164,"riscv_soc core fetch ibuf io_cache_buf_ready", false,-1);
        tracep->declBit(c+445,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+209,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+446,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+447,"riscv_soc core fetch ibuf io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+232,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+233,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+235,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+237,"riscv_soc core fetch ibuf io_put_pc_bits_is_pre", false,-1);
        tracep->declQuad(c+471,"riscv_soc core fetch ibuf ibuf_pc_0", false,-1, 63,0);
        tracep->declQuad(c+473,"riscv_soc core fetch ibuf ibuf_pc_1", false,-1, 63,0);
        tracep->declQuad(c+475,"riscv_soc core fetch ibuf ibuf_pc_2", false,-1, 63,0);
        tracep->declQuad(c+477,"riscv_soc core fetch ibuf ibuf_pc_3", false,-1, 63,0);
        tracep->declBus(c+479,"riscv_soc core fetch ibuf ibuf_inst_0", false,-1, 31,0);
        tracep->declBus(c+480,"riscv_soc core fetch ibuf ibuf_inst_1", false,-1, 31,0);
        tracep->declBus(c+481,"riscv_soc core fetch ibuf ibuf_inst_2", false,-1, 31,0);
        tracep->declBus(c+482,"riscv_soc core fetch ibuf ibuf_inst_3", false,-1, 31,0);
        tracep->declBit(c+483,"riscv_soc core fetch ibuf ibuf_is_pre_0", false,-1);
        tracep->declBit(c+484,"riscv_soc core fetch ibuf ibuf_is_pre_1", false,-1);
        tracep->declBit(c+485,"riscv_soc core fetch ibuf ibuf_is_pre_2", false,-1);
        tracep->declBit(c+486,"riscv_soc core fetch ibuf ibuf_is_pre_3", false,-1);
        tracep->declBit(c+487,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+488,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+489,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+490,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+491,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+492,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBus(c+493,"riscv_soc core fetch ibuf reg_ibuf_size", false,-1, 2,0);
        tracep->declBit(c+494,"riscv_soc core fetch ibuf enq_size", false,-1);
        tracep->declBit(c+495,"riscv_soc core fetch ibuf can_deq", false,-1);
        tracep->declBus(c+496,"riscv_soc core fetch ibuf result_size", false,-1, 2,0);
        tracep->declBit(c+3195,"riscv_soc core fetch br_predictor clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch br_predictor reset", false,-1);
        tracep->declBit(c+219,"riscv_soc core fetch br_predictor io_br_info_valid", false,-1);
        tracep->declBit(c+220,"riscv_soc core fetch br_predictor io_br_info_mispredict", false,-1);
        tracep->declQuad(c+221,"riscv_soc core fetch br_predictor io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+223,"riscv_soc core fetch br_predictor io_br_info_taken", false,-1);
        tracep->declQuad(c+224,"riscv_soc core fetch br_predictor io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv_soc core fetch br_predictor io_pc", false,-1, 63,0);
        tracep->declQuad(c+448,"riscv_soc core fetch br_predictor io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+450,"riscv_soc core fetch br_predictor io_pre_valid", false,-1);
        tracep->declArray(c+497,"riscv_soc core fetch br_predictor BTB_0", false,-1, 127,0);
        tracep->declArray(c+501,"riscv_soc core fetch br_predictor BTB_1", false,-1, 127,0);
        tracep->declArray(c+505,"riscv_soc core fetch br_predictor BTB_2", false,-1, 127,0);
        tracep->declArray(c+509,"riscv_soc core fetch br_predictor BTB_3", false,-1, 127,0);
        tracep->declArray(c+513,"riscv_soc core fetch br_predictor BTB_4", false,-1, 127,0);
        tracep->declArray(c+517,"riscv_soc core fetch br_predictor BTB_5", false,-1, 127,0);
        tracep->declArray(c+521,"riscv_soc core fetch br_predictor BTB_6", false,-1, 127,0);
        tracep->declArray(c+525,"riscv_soc core fetch br_predictor BTB_7", false,-1, 127,0);
        tracep->declArray(c+529,"riscv_soc core fetch br_predictor BTB_8", false,-1, 127,0);
        tracep->declArray(c+533,"riscv_soc core fetch br_predictor BTB_9", false,-1, 127,0);
        tracep->declArray(c+537,"riscv_soc core fetch br_predictor BTB_10", false,-1, 127,0);
        tracep->declArray(c+541,"riscv_soc core fetch br_predictor BTB_11", false,-1, 127,0);
        tracep->declArray(c+545,"riscv_soc core fetch br_predictor BTB_12", false,-1, 127,0);
        tracep->declArray(c+549,"riscv_soc core fetch br_predictor BTB_13", false,-1, 127,0);
        tracep->declArray(c+553,"riscv_soc core fetch br_predictor BTB_14", false,-1, 127,0);
        tracep->declArray(c+557,"riscv_soc core fetch br_predictor BTB_15", false,-1, 127,0);
        tracep->declArray(c+561,"riscv_soc core fetch br_predictor BTB_16", false,-1, 127,0);
        tracep->declArray(c+565,"riscv_soc core fetch br_predictor BTB_17", false,-1, 127,0);
        tracep->declArray(c+569,"riscv_soc core fetch br_predictor BTB_18", false,-1, 127,0);
        tracep->declArray(c+573,"riscv_soc core fetch br_predictor BTB_19", false,-1, 127,0);
        tracep->declArray(c+577,"riscv_soc core fetch br_predictor BTB_20", false,-1, 127,0);
        tracep->declArray(c+581,"riscv_soc core fetch br_predictor BTB_21", false,-1, 127,0);
        tracep->declArray(c+585,"riscv_soc core fetch br_predictor BTB_22", false,-1, 127,0);
        tracep->declArray(c+589,"riscv_soc core fetch br_predictor BTB_23", false,-1, 127,0);
        tracep->declArray(c+593,"riscv_soc core fetch br_predictor BTB_24", false,-1, 127,0);
        tracep->declArray(c+597,"riscv_soc core fetch br_predictor BTB_25", false,-1, 127,0);
        tracep->declArray(c+601,"riscv_soc core fetch br_predictor BTB_26", false,-1, 127,0);
        tracep->declArray(c+605,"riscv_soc core fetch br_predictor BTB_27", false,-1, 127,0);
        tracep->declArray(c+609,"riscv_soc core fetch br_predictor BTB_28", false,-1, 127,0);
        tracep->declArray(c+613,"riscv_soc core fetch br_predictor BTB_29", false,-1, 127,0);
        tracep->declArray(c+617,"riscv_soc core fetch br_predictor BTB_30", false,-1, 127,0);
        tracep->declArray(c+621,"riscv_soc core fetch br_predictor BTB_31", false,-1, 127,0);
        tracep->declArray(c+625,"riscv_soc core fetch br_predictor BTB_32", false,-1, 127,0);
        tracep->declArray(c+629,"riscv_soc core fetch br_predictor BTB_33", false,-1, 127,0);
        tracep->declArray(c+633,"riscv_soc core fetch br_predictor BTB_34", false,-1, 127,0);
        tracep->declArray(c+637,"riscv_soc core fetch br_predictor BTB_35", false,-1, 127,0);
        tracep->declArray(c+641,"riscv_soc core fetch br_predictor BTB_36", false,-1, 127,0);
        tracep->declArray(c+645,"riscv_soc core fetch br_predictor BTB_37", false,-1, 127,0);
        tracep->declArray(c+649,"riscv_soc core fetch br_predictor BTB_38", false,-1, 127,0);
        tracep->declArray(c+653,"riscv_soc core fetch br_predictor BTB_39", false,-1, 127,0);
        tracep->declArray(c+657,"riscv_soc core fetch br_predictor BTB_40", false,-1, 127,0);
        tracep->declArray(c+661,"riscv_soc core fetch br_predictor BTB_41", false,-1, 127,0);
        tracep->declArray(c+665,"riscv_soc core fetch br_predictor BTB_42", false,-1, 127,0);
        tracep->declArray(c+669,"riscv_soc core fetch br_predictor BTB_43", false,-1, 127,0);
        tracep->declArray(c+673,"riscv_soc core fetch br_predictor BTB_44", false,-1, 127,0);
        tracep->declArray(c+677,"riscv_soc core fetch br_predictor BTB_45", false,-1, 127,0);
        tracep->declArray(c+681,"riscv_soc core fetch br_predictor BTB_46", false,-1, 127,0);
        tracep->declArray(c+685,"riscv_soc core fetch br_predictor BTB_47", false,-1, 127,0);
        tracep->declArray(c+689,"riscv_soc core fetch br_predictor BTB_48", false,-1, 127,0);
        tracep->declArray(c+693,"riscv_soc core fetch br_predictor BTB_49", false,-1, 127,0);
        tracep->declArray(c+697,"riscv_soc core fetch br_predictor BTB_50", false,-1, 127,0);
        tracep->declArray(c+701,"riscv_soc core fetch br_predictor BTB_51", false,-1, 127,0);
        tracep->declArray(c+705,"riscv_soc core fetch br_predictor BTB_52", false,-1, 127,0);
        tracep->declArray(c+709,"riscv_soc core fetch br_predictor BTB_53", false,-1, 127,0);
        tracep->declArray(c+713,"riscv_soc core fetch br_predictor BTB_54", false,-1, 127,0);
        tracep->declArray(c+717,"riscv_soc core fetch br_predictor BTB_55", false,-1, 127,0);
        tracep->declArray(c+721,"riscv_soc core fetch br_predictor BTB_56", false,-1, 127,0);
        tracep->declArray(c+725,"riscv_soc core fetch br_predictor BTB_57", false,-1, 127,0);
        tracep->declArray(c+729,"riscv_soc core fetch br_predictor BTB_58", false,-1, 127,0);
        tracep->declArray(c+733,"riscv_soc core fetch br_predictor BTB_59", false,-1, 127,0);
        tracep->declArray(c+737,"riscv_soc core fetch br_predictor BTB_60", false,-1, 127,0);
        tracep->declArray(c+741,"riscv_soc core fetch br_predictor BTB_61", false,-1, 127,0);
        tracep->declArray(c+745,"riscv_soc core fetch br_predictor BTB_62", false,-1, 127,0);
        tracep->declArray(c+749,"riscv_soc core fetch br_predictor BTB_63", false,-1, 127,0);
        tracep->declQuad(c+753,"riscv_soc core fetch br_predictor RAS_0", false,-1, 63,0);
        tracep->declQuad(c+755,"riscv_soc core fetch br_predictor RAS_1", false,-1, 63,0);
        tracep->declQuad(c+757,"riscv_soc core fetch br_predictor RAS_2", false,-1, 63,0);
        tracep->declQuad(c+759,"riscv_soc core fetch br_predictor RAS_3", false,-1, 63,0);
        tracep->declQuad(c+761,"riscv_soc core fetch br_predictor RAS_4", false,-1, 63,0);
        tracep->declQuad(c+763,"riscv_soc core fetch br_predictor RAS_5", false,-1, 63,0);
        tracep->declBus(c+765,"riscv_soc core fetch br_predictor PHT_0", false,-1, 1,0);
        tracep->declBus(c+766,"riscv_soc core fetch br_predictor PHT_1", false,-1, 1,0);
        tracep->declBus(c+767,"riscv_soc core fetch br_predictor PHT_2", false,-1, 1,0);
        tracep->declBus(c+768,"riscv_soc core fetch br_predictor PHT_3", false,-1, 1,0);
        tracep->declBus(c+769,"riscv_soc core fetch br_predictor PHT_4", false,-1, 1,0);
        tracep->declBus(c+770,"riscv_soc core fetch br_predictor PHT_5", false,-1, 1,0);
        tracep->declBus(c+771,"riscv_soc core fetch br_predictor PHT_6", false,-1, 1,0);
        tracep->declBus(c+772,"riscv_soc core fetch br_predictor PHT_7", false,-1, 1,0);
        tracep->declBus(c+773,"riscv_soc core fetch br_predictor PHT_8", false,-1, 1,0);
        tracep->declBus(c+774,"riscv_soc core fetch br_predictor PHT_9", false,-1, 1,0);
        tracep->declBus(c+775,"riscv_soc core fetch br_predictor PHT_10", false,-1, 1,0);
        tracep->declBus(c+776,"riscv_soc core fetch br_predictor PHT_11", false,-1, 1,0);
        tracep->declBus(c+777,"riscv_soc core fetch br_predictor PHT_12", false,-1, 1,0);
        tracep->declBus(c+778,"riscv_soc core fetch br_predictor PHT_13", false,-1, 1,0);
        tracep->declBus(c+779,"riscv_soc core fetch br_predictor PHT_14", false,-1, 1,0);
        tracep->declBus(c+780,"riscv_soc core fetch br_predictor PHT_15", false,-1, 1,0);
        tracep->declBus(c+781,"riscv_soc core fetch br_predictor PHT_16", false,-1, 1,0);
        tracep->declBus(c+782,"riscv_soc core fetch br_predictor PHT_17", false,-1, 1,0);
        tracep->declBus(c+783,"riscv_soc core fetch br_predictor PHT_18", false,-1, 1,0);
        tracep->declBus(c+784,"riscv_soc core fetch br_predictor PHT_19", false,-1, 1,0);
        tracep->declBus(c+785,"riscv_soc core fetch br_predictor PHT_20", false,-1, 1,0);
        tracep->declBus(c+786,"riscv_soc core fetch br_predictor PHT_21", false,-1, 1,0);
        tracep->declBus(c+787,"riscv_soc core fetch br_predictor PHT_22", false,-1, 1,0);
        tracep->declBus(c+788,"riscv_soc core fetch br_predictor PHT_23", false,-1, 1,0);
        tracep->declBus(c+789,"riscv_soc core fetch br_predictor PHT_24", false,-1, 1,0);
        tracep->declBus(c+790,"riscv_soc core fetch br_predictor PHT_25", false,-1, 1,0);
        tracep->declBus(c+791,"riscv_soc core fetch br_predictor PHT_26", false,-1, 1,0);
        tracep->declBus(c+792,"riscv_soc core fetch br_predictor PHT_27", false,-1, 1,0);
        tracep->declBus(c+793,"riscv_soc core fetch br_predictor PHT_28", false,-1, 1,0);
        tracep->declBus(c+794,"riscv_soc core fetch br_predictor PHT_29", false,-1, 1,0);
        tracep->declBus(c+795,"riscv_soc core fetch br_predictor PHT_30", false,-1, 1,0);
        tracep->declBus(c+796,"riscv_soc core fetch br_predictor PHT_31", false,-1, 1,0);
        tracep->declBus(c+797,"riscv_soc core fetch br_predictor PHT_32", false,-1, 1,0);
        tracep->declBus(c+798,"riscv_soc core fetch br_predictor PHT_33", false,-1, 1,0);
        tracep->declBus(c+799,"riscv_soc core fetch br_predictor PHT_34", false,-1, 1,0);
        tracep->declBus(c+800,"riscv_soc core fetch br_predictor PHT_35", false,-1, 1,0);
        tracep->declBus(c+801,"riscv_soc core fetch br_predictor PHT_36", false,-1, 1,0);
        tracep->declBus(c+802,"riscv_soc core fetch br_predictor PHT_37", false,-1, 1,0);
        tracep->declBus(c+803,"riscv_soc core fetch br_predictor PHT_38", false,-1, 1,0);
        tracep->declBus(c+804,"riscv_soc core fetch br_predictor PHT_39", false,-1, 1,0);
        tracep->declBus(c+805,"riscv_soc core fetch br_predictor PHT_40", false,-1, 1,0);
        tracep->declBus(c+806,"riscv_soc core fetch br_predictor PHT_41", false,-1, 1,0);
        tracep->declBus(c+807,"riscv_soc core fetch br_predictor PHT_42", false,-1, 1,0);
        tracep->declBus(c+808,"riscv_soc core fetch br_predictor PHT_43", false,-1, 1,0);
        tracep->declBus(c+809,"riscv_soc core fetch br_predictor PHT_44", false,-1, 1,0);
        tracep->declBus(c+810,"riscv_soc core fetch br_predictor PHT_45", false,-1, 1,0);
        tracep->declBus(c+811,"riscv_soc core fetch br_predictor PHT_46", false,-1, 1,0);
        tracep->declBus(c+812,"riscv_soc core fetch br_predictor PHT_47", false,-1, 1,0);
        tracep->declBus(c+813,"riscv_soc core fetch br_predictor PHT_48", false,-1, 1,0);
        tracep->declBus(c+814,"riscv_soc core fetch br_predictor PHT_49", false,-1, 1,0);
        tracep->declBus(c+815,"riscv_soc core fetch br_predictor PHT_50", false,-1, 1,0);
        tracep->declBus(c+816,"riscv_soc core fetch br_predictor PHT_51", false,-1, 1,0);
        tracep->declBus(c+817,"riscv_soc core fetch br_predictor PHT_52", false,-1, 1,0);
        tracep->declBus(c+818,"riscv_soc core fetch br_predictor PHT_53", false,-1, 1,0);
        tracep->declBus(c+819,"riscv_soc core fetch br_predictor PHT_54", false,-1, 1,0);
        tracep->declBus(c+820,"riscv_soc core fetch br_predictor PHT_55", false,-1, 1,0);
        tracep->declBus(c+821,"riscv_soc core fetch br_predictor PHT_56", false,-1, 1,0);
        tracep->declBus(c+822,"riscv_soc core fetch br_predictor PHT_57", false,-1, 1,0);
        tracep->declBus(c+823,"riscv_soc core fetch br_predictor PHT_58", false,-1, 1,0);
        tracep->declBus(c+824,"riscv_soc core fetch br_predictor PHT_59", false,-1, 1,0);
        tracep->declBus(c+825,"riscv_soc core fetch br_predictor PHT_60", false,-1, 1,0);
        tracep->declBus(c+826,"riscv_soc core fetch br_predictor PHT_61", false,-1, 1,0);
        tracep->declBus(c+827,"riscv_soc core fetch br_predictor PHT_62", false,-1, 1,0);
        tracep->declBus(c+828,"riscv_soc core fetch br_predictor PHT_63", false,-1, 1,0);
        tracep->declBus(c+829,"riscv_soc core fetch br_predictor reg_head", false,-1, 2,0);
        tracep->declBus(c+830,"riscv_soc core fetch br_predictor update_index", false,-1, 5,0);
        tracep->declArray(c+831,"riscv_soc core fetch br_predictor update_btb_data", false,-1, 122,0);
        tracep->declBus(c+835,"riscv_soc core fetch br_predictor index", false,-1, 5,0);
        tracep->declQuad(c+836,"riscv_soc core fetch br_predictor tag", false,-1, 55,0);
        tracep->declBit(c+838,"riscv_soc core fetch br_predictor pht_taken", false,-1);
        tracep->declBit(c+839,"riscv_soc core fetch br_predictor btb_valid", false,-1);
        tracep->declQuad(c+840,"riscv_soc core fetch br_predictor btb_tag", false,-1, 55,0);
        tracep->declQuad(c+842,"riscv_soc core fetch br_predictor btb_target_next_pc", false,-1, 63,0);
        tracep->declBus(c+844,"riscv_soc core fetch br_predictor btb_br_type", false,-1, 1,0);
        tracep->declBit(c+845,"riscv_soc core fetch br_predictor pre_valid", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+232,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+238,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+239,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+240,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+241,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+248,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+250,"riscv_soc core execute io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+251,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+252,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+253,"riscv_soc core execute io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+254,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+255,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+257,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+258,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+259,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+265,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declBit(c+267,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+268,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+269,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+271,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+272,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+273,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+275,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+276,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+277,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+278,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+279,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+281,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+283,"riscv_soc core execute io_commit", false,-1);
        tracep->declBus(c+284,"riscv_soc core execute io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+285,"riscv_soc core execute io_difftest_peripheral", false,-1);
        tracep->declQuad(c+229,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+170,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+219,"riscv_soc core execute io_br_info_valid", false,-1);
        tracep->declBit(c+220,"riscv_soc core execute io_br_info_mispredict", false,-1);
        tracep->declQuad(c+221,"riscv_soc core execute io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+223,"riscv_soc core execute io_br_info_taken", false,-1);
        tracep->declQuad(c+224,"riscv_soc core execute io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core execute io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+227,"riscv_soc core execute io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+211,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+212,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBit(c+214,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+846,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBit(c+253,"riscv_soc core execute alu_exu_io_is_pre", false,-1);
        tracep->declBit(c+847,"riscv_soc core execute alu_exu_io_br_info_valid", false,-1);
        tracep->declBit(c+848,"riscv_soc core execute alu_exu_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+849,"riscv_soc core execute alu_exu_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+851,"riscv_soc core execute alu_exu_io_br_info_taken", false,-1);
        tracep->declQuad(c+852,"riscv_soc core execute alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core execute alu_exu_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+227,"riscv_soc core execute alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+239,"riscv_soc core execute alu_exu_io_opType", false,-1, 2,0);
        tracep->declBus(c+240,"riscv_soc core execute alu_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+854,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+856,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+248,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+858,"riscv_soc core execute alu_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+860,"riscv_soc core execute alu_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+861,"riscv_soc core execute alu_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core execute mem_exu_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mem_exu_reset", false,-1);
        tracep->declBit(c+863,"riscv_soc core execute mem_exu_io_valid", false,-1);
        tracep->declBus(c+240,"riscv_soc core execute mem_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+864,"riscv_soc core execute mem_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+866,"riscv_soc core execute mem_exu_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core execute mem_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+868,"riscv_soc core execute mem_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+870,"riscv_soc core execute mem_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+871,"riscv_soc core execute mem_exu_io_ready", false,-1);
        tracep->declBit(c+211,"riscv_soc core execute mem_exu_io_bus_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core execute mem_exu_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+212,"riscv_soc core execute mem_exu_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core execute mem_exu_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core execute mem_exu_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+214,"riscv_soc core execute mem_exu_io_bus_ready", false,-1);
        tracep->declBit(c+285,"riscv_soc core execute mem_exu_io_difftest_peripheral", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+872,"riscv_soc core execute mu_exu_io_valid", false,-1);
        tracep->declBus(c+240,"riscv_soc core execute mu_exu_io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+854,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+873,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+875,"riscv_soc core execute mu_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+877,"riscv_soc core execute mu_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+878,"riscv_soc core execute mu_exu_io_ready", false,-1);
        tracep->declBit(c+879,"riscv_soc core execute system_exu_io_valid", false,-1);
        tracep->declBus(c+240,"riscv_soc core execute system_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+880,"riscv_soc core execute system_exu_io_csr_data", false,-1, 63,0);
        tracep->declBus(c+254,"riscv_soc core execute system_exu_io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+247,"riscv_soc core execute system_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+864,"riscv_soc core execute system_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core execute system_exu_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core execute system_exu_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+880,"riscv_soc core execute system_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+882,"riscv_soc core execute system_exu_io_csr_is_w", false,-1);
        tracep->declQuad(c+883,"riscv_soc core execute system_exu_io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+885,"riscv_soc core execute system_exu_io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+886,"riscv_soc core execute system_exu_io_is_except", false,-1);
        tracep->declBus(c+887,"riscv_soc core execute system_exu_io_exception", false,-1, 5,0);
        tracep->declBit(c+888,"riscv_soc core execute system_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+263,"riscv_soc core execute system_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+889,"riscv_soc core execute in_data_valid", false,-1);
        tracep->declBit(c+232,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+890,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBit(c+891,"riscv_soc core execute reg_alu_valid", false,-1);
        tracep->declBit(c+892,"riscv_soc core execute reg_mem_valid", false,-1);
        tracep->declBit(c+893,"riscv_soc core execute reg_mu_valid", false,-1);
        tracep->declBit(c+894,"riscv_soc core execute reg_system_valid", false,-1);
        tracep->declBus(c+895,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+896,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+897,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBus(c+268,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+219,"riscv_soc core execute reg_br_valid", false,-1);
        tracep->declBit(c+220,"riscv_soc core execute reg_br_mispredict", false,-1);
        tracep->declQuad(c+221,"riscv_soc core execute reg_br_pc", false,-1, 63,0);
        tracep->declBit(c+223,"riscv_soc core execute reg_taken", false,-1);
        tracep->declQuad(c+224,"riscv_soc core execute reg_br_next_pc", false,-1, 63,0);
        tracep->declQuad(c+273,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+272,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBit(c+899,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+900,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+278,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+901,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+902,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+279,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+281,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core execute time_irq", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute soft_irq", false,-1);
        tracep->declBit(c+905,"riscv_soc core execute irq", false,-1);
        tracep->declQuad(c+229,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+906,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+907,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+908,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBus(c+284,"riscv_soc core execute reg_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+846,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBit(c+253,"riscv_soc core execute alu_exu io_is_pre", false,-1);
        tracep->declBit(c+847,"riscv_soc core execute alu_exu io_br_info_valid", false,-1);
        tracep->declBit(c+848,"riscv_soc core execute alu_exu io_br_info_mispredict", false,-1);
        tracep->declQuad(c+849,"riscv_soc core execute alu_exu io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+851,"riscv_soc core execute alu_exu io_br_info_taken", false,-1);
        tracep->declQuad(c+852,"riscv_soc core execute alu_exu io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core execute alu_exu io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+227,"riscv_soc core execute alu_exu io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+239,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+240,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+854,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+856,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+248,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+858,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+860,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+861,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declBit(c+909,"riscv_soc core execute alu_exu is_32", false,-1);
        tracep->declQuad(c+910,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+912,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+914,"riscv_soc core execute alu_exu op_imm", false,-1, 63,0);
        tracep->declBit(c+916,"riscv_soc core execute alu_exu rs2_is_imm", false,-1);
        tracep->declQuad(c+917,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+919,"riscv_soc core execute alu_exu rs1_is_pc", false,-1);
        tracep->declBit(c+920,"riscv_soc core execute alu_exu is_sra", false,-1);
        tracep->declQuad(c+921,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+923,"riscv_soc core execute alu_exu temp_rs2_data", false,-1, 63,0);
        tracep->declArray(c+925,"riscv_soc core execute alu_exu add_sub_result", false,-1, 64,0);
        tracep->declBit(c+928,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+929,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+930,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+931,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declQuad(c+935,"riscv_soc core execute alu_exu srl_temp", false,-1, 63,0);
        tracep->declQuad(c+937,"riscv_soc core execute alu_exu sra_temp", false,-1, 63,0);
        tracep->declQuad(c+939,"riscv_soc core execute alu_exu sr_temp", false,-1, 63,0);
        tracep->declBus(c+941,"riscv_soc core execute alu_exu func", false,-1, 2,0);
        tracep->declQuad(c+942,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core execute alu_exu is_pre", false,-1);
        tracep->declBit(c+944,"riscv_soc core execute alu_exu is_br", false,-1);
        tracep->declBit(c+945,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declQuad(c+946,"riscv_soc core execute alu_exu temp_1", false,-1, 63,0);
        tracep->declArray(c+948,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declQuad(c+951,"riscv_soc core execute alu_exu op_pc_4", false,-1, 63,0);
        tracep->declArray(c+953,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declQuad(c+956,"riscv_soc core execute alu_exu dst_data", false,-1, 63,0);
        tracep->declQuad(c+958,"riscv_soc core execute alu_exu next_pc", false,-1, 63,0);
        tracep->declBit(c+960,"riscv_soc core execute alu_exu valid_next_pc", false,-1);
        tracep->declBit(c+961,"riscv_soc core execute alu_exu br_valid", false,-1);
        tracep->declBit(c+962,"riscv_soc core execute alu_exu flush", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+863,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+240,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+864,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+866,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+868,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+870,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+871,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+211,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+212,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+184,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+214,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declBit(c+285,"riscv_soc core execute mem_exu io_difftest_peripheral", false,-1);
        tracep->declQuad(c+963,"riscv_soc core execute mem_exu imm", false,-1, 63,0);
        tracep->declBit(c+871,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+965,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+967,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+969,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+970,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+971,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+868,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+870,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBus(c+972,"riscv_soc core execute mem_exu reg_exuType", false,-1, 6,0);
        tracep->declBit(c+285,"riscv_soc core execute mem_exu reg_difftest_peripheral", false,-1);
        tracep->declQuad(c+973,"riscv_soc core execute mem_exu mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+975,"riscv_soc core execute mem_exu mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+977,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+979,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declQuad(c+980,"riscv_soc core execute mem_exu mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+982,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+983,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+987,"riscv_soc core execute mem_exu chose_chancel", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+872,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+240,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+854,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+873,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+875,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+877,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+878,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+988,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declQuad(c+854,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+873,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+240,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+989,"riscv_soc core execute mu_exu div_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+991,"riscv_soc core execute mu_exu div_io_dest_is_w", false,-1);
        tracep->declBit(c+992,"riscv_soc core execute mu_exu div_io_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+993,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declQuad(c+854,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+873,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+240,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+994,"riscv_soc core execute mu_exu mul_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+996,"riscv_soc core execute mu_exu mul_io_dest_is_w", false,-1);
        tracep->declBit(c+997,"riscv_soc core execute mu_exu mul_io_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+988,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+854,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+873,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+240,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+989,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+991,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+992,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declBit(c+909,"riscv_soc core execute mu_exu div is_32", false,-1);
        tracep->declBit(c+998,"riscv_soc core execute mu_exu div is_signed", false,-1);
        tracep->declArray(c+999,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+1002,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+1005,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+1008,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+1011,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+1014,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+1017,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+1020,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+1023,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+1024,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+1025,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declArray(c+1026,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+1031,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+1032,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+1033,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+1034,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declBit(c+991,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+992,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declBit(c+1035,"riscv_soc core execute mu_exu div reg_is_32", false,-1);
        tracep->declBit(c+1036,"riscv_soc core execute mu_exu div reg_is_rem", false,-1);
        tracep->declQuad(c+1037,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+1039,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+993,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+854,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+873,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+240,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+994,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+996,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+997,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+1041,"riscv_soc core execute mu_exu mul is_32", false,-1);
        tracep->declBit(c+1042,"riscv_soc core execute mu_exu mul is_rs1_signed", false,-1);
        tracep->declBit(c+909,"riscv_soc core execute mu_exu mul is_rs2_signed", false,-1);
        tracep->declArray(c+1043,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+1048,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+1051,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+997,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+1054,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+1055,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+1058,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+1063,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+1068,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+996,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declArray(c+1069,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBus(c+1074,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declBit(c+1075,"riscv_soc core execute mu_exu mul reg_not_h", false,-1);
        tracep->declBit(c+1076,"riscv_soc core execute mu_exu mul reg_is_32", false,-1);
        tracep->declBit(c+879,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+240,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+880,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+254,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+247,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+864,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+880,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+882,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+883,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+885,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+886,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+887,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+888,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+263,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+1077,"riscv_soc core execute system_exu imm", false,-1, 63,0);
        tracep->declBit(c+1079,"riscv_soc core execute system_exu is_imm", false,-1);
        tracep->declQuad(c+1080,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+1082,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+1084,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declQuad(c+1086,"riscv_soc core execute system_exu temp_csr_result_data", false,-1, 63,0);
        tracep->declBit(c+1088,"riscv_soc core execute system_exu is_mret", false,-1);
        tracep->declBit(c+1089,"riscv_soc core execute system_exu is_sret", false,-1);
        tracep->declBit(c+1090,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+1091,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+1092,"riscv_soc core execute system_exu is_except", false,-1);
        tracep->declBus(c+1093,"riscv_soc core execute system_exu exception", false,-1, 3,0);
        tracep->declBit(c+1094,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declQuad(c+1095,"riscv_soc core execute system_exu result_status", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+232,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBit(c+233,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+235,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+237,"riscv_soc core decode io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+286,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+287,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+289,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+290,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+292,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+293,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+232,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+238,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+239,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+240,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+241,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+248,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+250,"riscv_soc core decode io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+251,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+252,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+253,"riscv_soc core decode io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+254,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+255,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+238,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+239,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+240,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+241,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+242,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+247,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+248,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+250,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+251,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+252,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+254,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+255,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+253,"riscv_soc core decode reg_is_pre", false,-1);
        tracep->declBus(c+289,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+286,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+292,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBus(c+1097,"riscv_soc core decode dest_addr", false,-1, 4,0);
        tracep->declBus(c+1098,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBus(c+1099,"riscv_soc core decode dest_is_reg", false,-1, 1,0);
        tracep->declBus(c+1100,"riscv_soc core decode rs1_is_reg", false,-1, 1,0);
        tracep->declBus(c+1101,"riscv_soc core decode rs2_is_reg", false,-1, 1,0);
        tracep->declBit(c+1102,"riscv_soc core decode temp_rs1_is_reg", false,-1);
        tracep->declBit(c+1103,"riscv_soc core decode temp_rs2_is_reg", false,-1);
        tracep->declBit(c+3195,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+286,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+287,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+289,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+290,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+267,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+268,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+269,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+292,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+293,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+271,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+272,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+273,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+275,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+276,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+277,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+278,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+279,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+281,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+265,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+283,"riscv_soc core commit io_commit", false,-1);
        tracep->declBus(c+284,"riscv_soc core commit io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+285,"riscv_soc core commit io_difftest_peripheral", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit difftest_irq_0", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit difftest_peripheral_0", false,-1);
        tracep->declBit(c+87,"riscv_soc core commit difftest_commit_0", false,-1);
        tracep->declQuad(c+88,"riscv_soc core commit difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+90,"riscv_soc core commit difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+155,"riscv_soc core commit inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core commit csr_reg_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core commit csr_reg_reset", false,-1);
        tracep->declBus(c+272,"riscv_soc core commit csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+273,"riscv_soc core commit csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+271,"riscv_soc core commit csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+281,"riscv_soc core commit csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+279,"riscv_soc core commit csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+276,"riscv_soc core commit csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+277,"riscv_soc core commit csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+1104,"riscv_soc core commit csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+275,"riscv_soc core commit csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+283,"riscv_soc core commit csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+292,"riscv_soc core commit csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+293,"riscv_soc core commit csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+265,"riscv_soc core commit csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core commit csr_reg_io_r_csr_mie", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core commit reg_file_0", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core commit reg_file_1", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core commit reg_file_2", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core commit reg_file_3", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core commit reg_file_4", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core commit reg_file_5", false,-1, 63,0);
        tracep->declQuad(c+103,"riscv_soc core commit reg_file_6", false,-1, 63,0);
        tracep->declQuad(c+105,"riscv_soc core commit reg_file_7", false,-1, 63,0);
        tracep->declQuad(c+107,"riscv_soc core commit reg_file_8", false,-1, 63,0);
        tracep->declQuad(c+109,"riscv_soc core commit reg_file_9", false,-1, 63,0);
        tracep->declQuad(c+111,"riscv_soc core commit reg_file_10", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core commit reg_file_11", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core commit reg_file_12", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core commit reg_file_13", false,-1, 63,0);
        tracep->declQuad(c+119,"riscv_soc core commit reg_file_14", false,-1, 63,0);
        tracep->declQuad(c+121,"riscv_soc core commit reg_file_15", false,-1, 63,0);
        tracep->declQuad(c+123,"riscv_soc core commit reg_file_16", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core commit reg_file_17", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core commit reg_file_18", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core commit reg_file_19", false,-1, 63,0);
        tracep->declQuad(c+131,"riscv_soc core commit reg_file_20", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core commit reg_file_21", false,-1, 63,0);
        tracep->declQuad(c+135,"riscv_soc core commit reg_file_22", false,-1, 63,0);
        tracep->declQuad(c+137,"riscv_soc core commit reg_file_23", false,-1, 63,0);
        tracep->declQuad(c+139,"riscv_soc core commit reg_file_24", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core commit reg_file_25", false,-1, 63,0);
        tracep->declQuad(c+143,"riscv_soc core commit reg_file_26", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core commit reg_file_27", false,-1, 63,0);
        tracep->declQuad(c+147,"riscv_soc core commit reg_file_28", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core commit reg_file_29", false,-1, 63,0);
        tracep->declQuad(c+151,"riscv_soc core commit reg_file_30", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core commit reg_file_31", false,-1, 63,0);
        tracep->declBit(c+87,"riscv_soc core commit difftest_commit", false,-1);
        tracep->declBus(c+90,"riscv_soc core commit difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+88,"riscv_soc core commit difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+155,"riscv_soc core commit inst_counter", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core commit difftest_irq", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit difftest_peripheral", false,-1);
        tracep->declBit(c+3195,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+272,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+273,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+271,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+281,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+279,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+276,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+277,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+1104,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+275,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+283,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+292,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+293,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+265,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+1105,"riscv_soc core commit csr_reg irq", false,-1);
        tracep->declQuad(c+1106,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+1108,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+1110,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+1112,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+1114,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+1116,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+1118,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+1120,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+1122,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+1124,"riscv_soc core commit csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+215,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+177,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+218,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+258,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+257,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+258,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+1126,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+1128,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+216,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+1130,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+1131,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+1132,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+3195,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc axi_ram reset", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram io_ram_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc axi_ram io_ram_bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc axi_ram io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc axi_ram io_ram_bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc axi_ram io_ram_bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc axi_ram io_ram_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc axi_ram io_ram_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc axi_ram io_ram_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram io_ram_bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc axi_ram io_ram_bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc axi_ram io_ram_bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc axi_ram io_ram_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc axi_ram io_ram_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc axi_ram io_ram_bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc axi_ram io_ram_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc axi_ram io_ram_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+3195,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+1133,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+1135,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+1137,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+1139,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+1140,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+1142,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+1143,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+1135,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+1144,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+1145,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+1146,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+3195,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+1133,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+1135,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+1137,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+1139,"riscv_soc axi_ram mem wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram0 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram0 reset", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0 io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram0 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0 io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0 io_rdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0 Q", false,-1, 127,0);
        tracep->declArray(c+1147,"riscv_soc sram0 sram_0", false,-1, 127,0);
        tracep->declArray(c+1151,"riscv_soc sram0 sram_1", false,-1, 127,0);
        tracep->declArray(c+1155,"riscv_soc sram0 sram_2", false,-1, 127,0);
        tracep->declArray(c+1159,"riscv_soc sram0 sram_3", false,-1, 127,0);
        tracep->declArray(c+1163,"riscv_soc sram0 sram_4", false,-1, 127,0);
        tracep->declArray(c+1167,"riscv_soc sram0 sram_5", false,-1, 127,0);
        tracep->declArray(c+1171,"riscv_soc sram0 sram_6", false,-1, 127,0);
        tracep->declArray(c+1175,"riscv_soc sram0 sram_7", false,-1, 127,0);
        tracep->declArray(c+1179,"riscv_soc sram0 sram_8", false,-1, 127,0);
        tracep->declArray(c+1183,"riscv_soc sram0 sram_9", false,-1, 127,0);
        tracep->declArray(c+1187,"riscv_soc sram0 sram_10", false,-1, 127,0);
        tracep->declArray(c+1191,"riscv_soc sram0 sram_11", false,-1, 127,0);
        tracep->declArray(c+1195,"riscv_soc sram0 sram_12", false,-1, 127,0);
        tracep->declArray(c+1199,"riscv_soc sram0 sram_13", false,-1, 127,0);
        tracep->declArray(c+1203,"riscv_soc sram0 sram_14", false,-1, 127,0);
        tracep->declArray(c+1207,"riscv_soc sram0 sram_15", false,-1, 127,0);
        tracep->declArray(c+1211,"riscv_soc sram0 sram_16", false,-1, 127,0);
        tracep->declArray(c+1215,"riscv_soc sram0 sram_17", false,-1, 127,0);
        tracep->declArray(c+1219,"riscv_soc sram0 sram_18", false,-1, 127,0);
        tracep->declArray(c+1223,"riscv_soc sram0 sram_19", false,-1, 127,0);
        tracep->declArray(c+1227,"riscv_soc sram0 sram_20", false,-1, 127,0);
        tracep->declArray(c+1231,"riscv_soc sram0 sram_21", false,-1, 127,0);
        tracep->declArray(c+1235,"riscv_soc sram0 sram_22", false,-1, 127,0);
        tracep->declArray(c+1239,"riscv_soc sram0 sram_23", false,-1, 127,0);
        tracep->declArray(c+1243,"riscv_soc sram0 sram_24", false,-1, 127,0);
        tracep->declArray(c+1247,"riscv_soc sram0 sram_25", false,-1, 127,0);
        tracep->declArray(c+1251,"riscv_soc sram0 sram_26", false,-1, 127,0);
        tracep->declArray(c+1255,"riscv_soc sram0 sram_27", false,-1, 127,0);
        tracep->declArray(c+1259,"riscv_soc sram0 sram_28", false,-1, 127,0);
        tracep->declArray(c+1263,"riscv_soc sram0 sram_29", false,-1, 127,0);
        tracep->declArray(c+1267,"riscv_soc sram0 sram_30", false,-1, 127,0);
        tracep->declArray(c+1271,"riscv_soc sram0 sram_31", false,-1, 127,0);
        tracep->declArray(c+1275,"riscv_soc sram0 sram_32", false,-1, 127,0);
        tracep->declArray(c+1279,"riscv_soc sram0 sram_33", false,-1, 127,0);
        tracep->declArray(c+1283,"riscv_soc sram0 sram_34", false,-1, 127,0);
        tracep->declArray(c+1287,"riscv_soc sram0 sram_35", false,-1, 127,0);
        tracep->declArray(c+1291,"riscv_soc sram0 sram_36", false,-1, 127,0);
        tracep->declArray(c+1295,"riscv_soc sram0 sram_37", false,-1, 127,0);
        tracep->declArray(c+1299,"riscv_soc sram0 sram_38", false,-1, 127,0);
        tracep->declArray(c+1303,"riscv_soc sram0 sram_39", false,-1, 127,0);
        tracep->declArray(c+1307,"riscv_soc sram0 sram_40", false,-1, 127,0);
        tracep->declArray(c+1311,"riscv_soc sram0 sram_41", false,-1, 127,0);
        tracep->declArray(c+1315,"riscv_soc sram0 sram_42", false,-1, 127,0);
        tracep->declArray(c+1319,"riscv_soc sram0 sram_43", false,-1, 127,0);
        tracep->declArray(c+1323,"riscv_soc sram0 sram_44", false,-1, 127,0);
        tracep->declArray(c+1327,"riscv_soc sram0 sram_45", false,-1, 127,0);
        tracep->declArray(c+1331,"riscv_soc sram0 sram_46", false,-1, 127,0);
        tracep->declArray(c+1335,"riscv_soc sram0 sram_47", false,-1, 127,0);
        tracep->declArray(c+1339,"riscv_soc sram0 sram_48", false,-1, 127,0);
        tracep->declArray(c+1343,"riscv_soc sram0 sram_49", false,-1, 127,0);
        tracep->declArray(c+1347,"riscv_soc sram0 sram_50", false,-1, 127,0);
        tracep->declArray(c+1351,"riscv_soc sram0 sram_51", false,-1, 127,0);
        tracep->declArray(c+1355,"riscv_soc sram0 sram_52", false,-1, 127,0);
        tracep->declArray(c+1359,"riscv_soc sram0 sram_53", false,-1, 127,0);
        tracep->declArray(c+1363,"riscv_soc sram0 sram_54", false,-1, 127,0);
        tracep->declArray(c+1367,"riscv_soc sram0 sram_55", false,-1, 127,0);
        tracep->declArray(c+1371,"riscv_soc sram0 sram_56", false,-1, 127,0);
        tracep->declArray(c+1375,"riscv_soc sram0 sram_57", false,-1, 127,0);
        tracep->declArray(c+1379,"riscv_soc sram0 sram_58", false,-1, 127,0);
        tracep->declArray(c+1383,"riscv_soc sram0 sram_59", false,-1, 127,0);
        tracep->declArray(c+1387,"riscv_soc sram0 sram_60", false,-1, 127,0);
        tracep->declArray(c+1391,"riscv_soc sram0 sram_61", false,-1, 127,0);
        tracep->declArray(c+1395,"riscv_soc sram0 sram_62", false,-1, 127,0);
        tracep->declArray(c+1399,"riscv_soc sram0 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc sram0 bwen", false,-1, 127,0);
        tracep->declBit(c+337,"riscv_soc sram0 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram1 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram1 reset", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1 io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1 io_rdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1 Q", false,-1, 127,0);
        tracep->declArray(c+1403,"riscv_soc sram1 sram_0", false,-1, 127,0);
        tracep->declArray(c+1407,"riscv_soc sram1 sram_1", false,-1, 127,0);
        tracep->declArray(c+1411,"riscv_soc sram1 sram_2", false,-1, 127,0);
        tracep->declArray(c+1415,"riscv_soc sram1 sram_3", false,-1, 127,0);
        tracep->declArray(c+1419,"riscv_soc sram1 sram_4", false,-1, 127,0);
        tracep->declArray(c+1423,"riscv_soc sram1 sram_5", false,-1, 127,0);
        tracep->declArray(c+1427,"riscv_soc sram1 sram_6", false,-1, 127,0);
        tracep->declArray(c+1431,"riscv_soc sram1 sram_7", false,-1, 127,0);
        tracep->declArray(c+1435,"riscv_soc sram1 sram_8", false,-1, 127,0);
        tracep->declArray(c+1439,"riscv_soc sram1 sram_9", false,-1, 127,0);
        tracep->declArray(c+1443,"riscv_soc sram1 sram_10", false,-1, 127,0);
        tracep->declArray(c+1447,"riscv_soc sram1 sram_11", false,-1, 127,0);
        tracep->declArray(c+1451,"riscv_soc sram1 sram_12", false,-1, 127,0);
        tracep->declArray(c+1455,"riscv_soc sram1 sram_13", false,-1, 127,0);
        tracep->declArray(c+1459,"riscv_soc sram1 sram_14", false,-1, 127,0);
        tracep->declArray(c+1463,"riscv_soc sram1 sram_15", false,-1, 127,0);
        tracep->declArray(c+1467,"riscv_soc sram1 sram_16", false,-1, 127,0);
        tracep->declArray(c+1471,"riscv_soc sram1 sram_17", false,-1, 127,0);
        tracep->declArray(c+1475,"riscv_soc sram1 sram_18", false,-1, 127,0);
        tracep->declArray(c+1479,"riscv_soc sram1 sram_19", false,-1, 127,0);
        tracep->declArray(c+1483,"riscv_soc sram1 sram_20", false,-1, 127,0);
        tracep->declArray(c+1487,"riscv_soc sram1 sram_21", false,-1, 127,0);
        tracep->declArray(c+1491,"riscv_soc sram1 sram_22", false,-1, 127,0);
        tracep->declArray(c+1495,"riscv_soc sram1 sram_23", false,-1, 127,0);
        tracep->declArray(c+1499,"riscv_soc sram1 sram_24", false,-1, 127,0);
        tracep->declArray(c+1503,"riscv_soc sram1 sram_25", false,-1, 127,0);
        tracep->declArray(c+1507,"riscv_soc sram1 sram_26", false,-1, 127,0);
        tracep->declArray(c+1511,"riscv_soc sram1 sram_27", false,-1, 127,0);
        tracep->declArray(c+1515,"riscv_soc sram1 sram_28", false,-1, 127,0);
        tracep->declArray(c+1519,"riscv_soc sram1 sram_29", false,-1, 127,0);
        tracep->declArray(c+1523,"riscv_soc sram1 sram_30", false,-1, 127,0);
        tracep->declArray(c+1527,"riscv_soc sram1 sram_31", false,-1, 127,0);
        tracep->declArray(c+1531,"riscv_soc sram1 sram_32", false,-1, 127,0);
        tracep->declArray(c+1535,"riscv_soc sram1 sram_33", false,-1, 127,0);
        tracep->declArray(c+1539,"riscv_soc sram1 sram_34", false,-1, 127,0);
        tracep->declArray(c+1543,"riscv_soc sram1 sram_35", false,-1, 127,0);
        tracep->declArray(c+1547,"riscv_soc sram1 sram_36", false,-1, 127,0);
        tracep->declArray(c+1551,"riscv_soc sram1 sram_37", false,-1, 127,0);
        tracep->declArray(c+1555,"riscv_soc sram1 sram_38", false,-1, 127,0);
        tracep->declArray(c+1559,"riscv_soc sram1 sram_39", false,-1, 127,0);
        tracep->declArray(c+1563,"riscv_soc sram1 sram_40", false,-1, 127,0);
        tracep->declArray(c+1567,"riscv_soc sram1 sram_41", false,-1, 127,0);
        tracep->declArray(c+1571,"riscv_soc sram1 sram_42", false,-1, 127,0);
        tracep->declArray(c+1575,"riscv_soc sram1 sram_43", false,-1, 127,0);
        tracep->declArray(c+1579,"riscv_soc sram1 sram_44", false,-1, 127,0);
        tracep->declArray(c+1583,"riscv_soc sram1 sram_45", false,-1, 127,0);
        tracep->declArray(c+1587,"riscv_soc sram1 sram_46", false,-1, 127,0);
        tracep->declArray(c+1591,"riscv_soc sram1 sram_47", false,-1, 127,0);
        tracep->declArray(c+1595,"riscv_soc sram1 sram_48", false,-1, 127,0);
        tracep->declArray(c+1599,"riscv_soc sram1 sram_49", false,-1, 127,0);
        tracep->declArray(c+1603,"riscv_soc sram1 sram_50", false,-1, 127,0);
        tracep->declArray(c+1607,"riscv_soc sram1 sram_51", false,-1, 127,0);
        tracep->declArray(c+1611,"riscv_soc sram1 sram_52", false,-1, 127,0);
        tracep->declArray(c+1615,"riscv_soc sram1 sram_53", false,-1, 127,0);
        tracep->declArray(c+1619,"riscv_soc sram1 sram_54", false,-1, 127,0);
        tracep->declArray(c+1623,"riscv_soc sram1 sram_55", false,-1, 127,0);
        tracep->declArray(c+1627,"riscv_soc sram1 sram_56", false,-1, 127,0);
        tracep->declArray(c+1631,"riscv_soc sram1 sram_57", false,-1, 127,0);
        tracep->declArray(c+1635,"riscv_soc sram1 sram_58", false,-1, 127,0);
        tracep->declArray(c+1639,"riscv_soc sram1 sram_59", false,-1, 127,0);
        tracep->declArray(c+1643,"riscv_soc sram1 sram_60", false,-1, 127,0);
        tracep->declArray(c+1647,"riscv_soc sram1 sram_61", false,-1, 127,0);
        tracep->declArray(c+1651,"riscv_soc sram1 sram_62", false,-1, 127,0);
        tracep->declArray(c+1655,"riscv_soc sram1 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc sram1 bwen", false,-1, 127,0);
        tracep->declBit(c+337,"riscv_soc sram1 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram2 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram2 reset", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2 io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2 io_rdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2 Q", false,-1, 127,0);
        tracep->declArray(c+1659,"riscv_soc sram2 sram_0", false,-1, 127,0);
        tracep->declArray(c+1663,"riscv_soc sram2 sram_1", false,-1, 127,0);
        tracep->declArray(c+1667,"riscv_soc sram2 sram_2", false,-1, 127,0);
        tracep->declArray(c+1671,"riscv_soc sram2 sram_3", false,-1, 127,0);
        tracep->declArray(c+1675,"riscv_soc sram2 sram_4", false,-1, 127,0);
        tracep->declArray(c+1679,"riscv_soc sram2 sram_5", false,-1, 127,0);
        tracep->declArray(c+1683,"riscv_soc sram2 sram_6", false,-1, 127,0);
        tracep->declArray(c+1687,"riscv_soc sram2 sram_7", false,-1, 127,0);
        tracep->declArray(c+1691,"riscv_soc sram2 sram_8", false,-1, 127,0);
        tracep->declArray(c+1695,"riscv_soc sram2 sram_9", false,-1, 127,0);
        tracep->declArray(c+1699,"riscv_soc sram2 sram_10", false,-1, 127,0);
        tracep->declArray(c+1703,"riscv_soc sram2 sram_11", false,-1, 127,0);
        tracep->declArray(c+1707,"riscv_soc sram2 sram_12", false,-1, 127,0);
        tracep->declArray(c+1711,"riscv_soc sram2 sram_13", false,-1, 127,0);
        tracep->declArray(c+1715,"riscv_soc sram2 sram_14", false,-1, 127,0);
        tracep->declArray(c+1719,"riscv_soc sram2 sram_15", false,-1, 127,0);
        tracep->declArray(c+1723,"riscv_soc sram2 sram_16", false,-1, 127,0);
        tracep->declArray(c+1727,"riscv_soc sram2 sram_17", false,-1, 127,0);
        tracep->declArray(c+1731,"riscv_soc sram2 sram_18", false,-1, 127,0);
        tracep->declArray(c+1735,"riscv_soc sram2 sram_19", false,-1, 127,0);
        tracep->declArray(c+1739,"riscv_soc sram2 sram_20", false,-1, 127,0);
        tracep->declArray(c+1743,"riscv_soc sram2 sram_21", false,-1, 127,0);
        tracep->declArray(c+1747,"riscv_soc sram2 sram_22", false,-1, 127,0);
        tracep->declArray(c+1751,"riscv_soc sram2 sram_23", false,-1, 127,0);
        tracep->declArray(c+1755,"riscv_soc sram2 sram_24", false,-1, 127,0);
        tracep->declArray(c+1759,"riscv_soc sram2 sram_25", false,-1, 127,0);
        tracep->declArray(c+1763,"riscv_soc sram2 sram_26", false,-1, 127,0);
        tracep->declArray(c+1767,"riscv_soc sram2 sram_27", false,-1, 127,0);
        tracep->declArray(c+1771,"riscv_soc sram2 sram_28", false,-1, 127,0);
        tracep->declArray(c+1775,"riscv_soc sram2 sram_29", false,-1, 127,0);
        tracep->declArray(c+1779,"riscv_soc sram2 sram_30", false,-1, 127,0);
        tracep->declArray(c+1783,"riscv_soc sram2 sram_31", false,-1, 127,0);
        tracep->declArray(c+1787,"riscv_soc sram2 sram_32", false,-1, 127,0);
        tracep->declArray(c+1791,"riscv_soc sram2 sram_33", false,-1, 127,0);
        tracep->declArray(c+1795,"riscv_soc sram2 sram_34", false,-1, 127,0);
        tracep->declArray(c+1799,"riscv_soc sram2 sram_35", false,-1, 127,0);
        tracep->declArray(c+1803,"riscv_soc sram2 sram_36", false,-1, 127,0);
        tracep->declArray(c+1807,"riscv_soc sram2 sram_37", false,-1, 127,0);
        tracep->declArray(c+1811,"riscv_soc sram2 sram_38", false,-1, 127,0);
        tracep->declArray(c+1815,"riscv_soc sram2 sram_39", false,-1, 127,0);
        tracep->declArray(c+1819,"riscv_soc sram2 sram_40", false,-1, 127,0);
        tracep->declArray(c+1823,"riscv_soc sram2 sram_41", false,-1, 127,0);
        tracep->declArray(c+1827,"riscv_soc sram2 sram_42", false,-1, 127,0);
        tracep->declArray(c+1831,"riscv_soc sram2 sram_43", false,-1, 127,0);
        tracep->declArray(c+1835,"riscv_soc sram2 sram_44", false,-1, 127,0);
        tracep->declArray(c+1839,"riscv_soc sram2 sram_45", false,-1, 127,0);
        tracep->declArray(c+1843,"riscv_soc sram2 sram_46", false,-1, 127,0);
        tracep->declArray(c+1847,"riscv_soc sram2 sram_47", false,-1, 127,0);
        tracep->declArray(c+1851,"riscv_soc sram2 sram_48", false,-1, 127,0);
        tracep->declArray(c+1855,"riscv_soc sram2 sram_49", false,-1, 127,0);
        tracep->declArray(c+1859,"riscv_soc sram2 sram_50", false,-1, 127,0);
        tracep->declArray(c+1863,"riscv_soc sram2 sram_51", false,-1, 127,0);
        tracep->declArray(c+1867,"riscv_soc sram2 sram_52", false,-1, 127,0);
        tracep->declArray(c+1871,"riscv_soc sram2 sram_53", false,-1, 127,0);
        tracep->declArray(c+1875,"riscv_soc sram2 sram_54", false,-1, 127,0);
        tracep->declArray(c+1879,"riscv_soc sram2 sram_55", false,-1, 127,0);
        tracep->declArray(c+1883,"riscv_soc sram2 sram_56", false,-1, 127,0);
        tracep->declArray(c+1887,"riscv_soc sram2 sram_57", false,-1, 127,0);
        tracep->declArray(c+1891,"riscv_soc sram2 sram_58", false,-1, 127,0);
        tracep->declArray(c+1895,"riscv_soc sram2 sram_59", false,-1, 127,0);
        tracep->declArray(c+1899,"riscv_soc sram2 sram_60", false,-1, 127,0);
        tracep->declArray(c+1903,"riscv_soc sram2 sram_61", false,-1, 127,0);
        tracep->declArray(c+1907,"riscv_soc sram2 sram_62", false,-1, 127,0);
        tracep->declArray(c+1911,"riscv_soc sram2 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc sram2 bwen", false,-1, 127,0);
        tracep->declBit(c+338,"riscv_soc sram2 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram3 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram3 reset", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3 io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3 io_rdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3 Q", false,-1, 127,0);
        tracep->declArray(c+1915,"riscv_soc sram3 sram_0", false,-1, 127,0);
        tracep->declArray(c+1919,"riscv_soc sram3 sram_1", false,-1, 127,0);
        tracep->declArray(c+1923,"riscv_soc sram3 sram_2", false,-1, 127,0);
        tracep->declArray(c+1927,"riscv_soc sram3 sram_3", false,-1, 127,0);
        tracep->declArray(c+1931,"riscv_soc sram3 sram_4", false,-1, 127,0);
        tracep->declArray(c+1935,"riscv_soc sram3 sram_5", false,-1, 127,0);
        tracep->declArray(c+1939,"riscv_soc sram3 sram_6", false,-1, 127,0);
        tracep->declArray(c+1943,"riscv_soc sram3 sram_7", false,-1, 127,0);
        tracep->declArray(c+1947,"riscv_soc sram3 sram_8", false,-1, 127,0);
        tracep->declArray(c+1951,"riscv_soc sram3 sram_9", false,-1, 127,0);
        tracep->declArray(c+1955,"riscv_soc sram3 sram_10", false,-1, 127,0);
        tracep->declArray(c+1959,"riscv_soc sram3 sram_11", false,-1, 127,0);
        tracep->declArray(c+1963,"riscv_soc sram3 sram_12", false,-1, 127,0);
        tracep->declArray(c+1967,"riscv_soc sram3 sram_13", false,-1, 127,0);
        tracep->declArray(c+1971,"riscv_soc sram3 sram_14", false,-1, 127,0);
        tracep->declArray(c+1975,"riscv_soc sram3 sram_15", false,-1, 127,0);
        tracep->declArray(c+1979,"riscv_soc sram3 sram_16", false,-1, 127,0);
        tracep->declArray(c+1983,"riscv_soc sram3 sram_17", false,-1, 127,0);
        tracep->declArray(c+1987,"riscv_soc sram3 sram_18", false,-1, 127,0);
        tracep->declArray(c+1991,"riscv_soc sram3 sram_19", false,-1, 127,0);
        tracep->declArray(c+1995,"riscv_soc sram3 sram_20", false,-1, 127,0);
        tracep->declArray(c+1999,"riscv_soc sram3 sram_21", false,-1, 127,0);
        tracep->declArray(c+2003,"riscv_soc sram3 sram_22", false,-1, 127,0);
        tracep->declArray(c+2007,"riscv_soc sram3 sram_23", false,-1, 127,0);
        tracep->declArray(c+2011,"riscv_soc sram3 sram_24", false,-1, 127,0);
        tracep->declArray(c+2015,"riscv_soc sram3 sram_25", false,-1, 127,0);
        tracep->declArray(c+2019,"riscv_soc sram3 sram_26", false,-1, 127,0);
        tracep->declArray(c+2023,"riscv_soc sram3 sram_27", false,-1, 127,0);
        tracep->declArray(c+2027,"riscv_soc sram3 sram_28", false,-1, 127,0);
        tracep->declArray(c+2031,"riscv_soc sram3 sram_29", false,-1, 127,0);
        tracep->declArray(c+2035,"riscv_soc sram3 sram_30", false,-1, 127,0);
        tracep->declArray(c+2039,"riscv_soc sram3 sram_31", false,-1, 127,0);
        tracep->declArray(c+2043,"riscv_soc sram3 sram_32", false,-1, 127,0);
        tracep->declArray(c+2047,"riscv_soc sram3 sram_33", false,-1, 127,0);
        tracep->declArray(c+2051,"riscv_soc sram3 sram_34", false,-1, 127,0);
        tracep->declArray(c+2055,"riscv_soc sram3 sram_35", false,-1, 127,0);
        tracep->declArray(c+2059,"riscv_soc sram3 sram_36", false,-1, 127,0);
        tracep->declArray(c+2063,"riscv_soc sram3 sram_37", false,-1, 127,0);
        tracep->declArray(c+2067,"riscv_soc sram3 sram_38", false,-1, 127,0);
        tracep->declArray(c+2071,"riscv_soc sram3 sram_39", false,-1, 127,0);
        tracep->declArray(c+2075,"riscv_soc sram3 sram_40", false,-1, 127,0);
        tracep->declArray(c+2079,"riscv_soc sram3 sram_41", false,-1, 127,0);
        tracep->declArray(c+2083,"riscv_soc sram3 sram_42", false,-1, 127,0);
        tracep->declArray(c+2087,"riscv_soc sram3 sram_43", false,-1, 127,0);
        tracep->declArray(c+2091,"riscv_soc sram3 sram_44", false,-1, 127,0);
        tracep->declArray(c+2095,"riscv_soc sram3 sram_45", false,-1, 127,0);
        tracep->declArray(c+2099,"riscv_soc sram3 sram_46", false,-1, 127,0);
        tracep->declArray(c+2103,"riscv_soc sram3 sram_47", false,-1, 127,0);
        tracep->declArray(c+2107,"riscv_soc sram3 sram_48", false,-1, 127,0);
        tracep->declArray(c+2111,"riscv_soc sram3 sram_49", false,-1, 127,0);
        tracep->declArray(c+2115,"riscv_soc sram3 sram_50", false,-1, 127,0);
        tracep->declArray(c+2119,"riscv_soc sram3 sram_51", false,-1, 127,0);
        tracep->declArray(c+2123,"riscv_soc sram3 sram_52", false,-1, 127,0);
        tracep->declArray(c+2127,"riscv_soc sram3 sram_53", false,-1, 127,0);
        tracep->declArray(c+2131,"riscv_soc sram3 sram_54", false,-1, 127,0);
        tracep->declArray(c+2135,"riscv_soc sram3 sram_55", false,-1, 127,0);
        tracep->declArray(c+2139,"riscv_soc sram3 sram_56", false,-1, 127,0);
        tracep->declArray(c+2143,"riscv_soc sram3 sram_57", false,-1, 127,0);
        tracep->declArray(c+2147,"riscv_soc sram3 sram_58", false,-1, 127,0);
        tracep->declArray(c+2151,"riscv_soc sram3 sram_59", false,-1, 127,0);
        tracep->declArray(c+2155,"riscv_soc sram3 sram_60", false,-1, 127,0);
        tracep->declArray(c+2159,"riscv_soc sram3 sram_61", false,-1, 127,0);
        tracep->declArray(c+2163,"riscv_soc sram3 sram_62", false,-1, 127,0);
        tracep->declArray(c+2167,"riscv_soc sram3 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc sram3 bwen", false,-1, 127,0);
        tracep->declBit(c+338,"riscv_soc sram3 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram4 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram4 reset", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4 io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4 io_rdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4 Q", false,-1, 127,0);
        tracep->declArray(c+2171,"riscv_soc sram4 sram_0", false,-1, 127,0);
        tracep->declArray(c+2175,"riscv_soc sram4 sram_1", false,-1, 127,0);
        tracep->declArray(c+2179,"riscv_soc sram4 sram_2", false,-1, 127,0);
        tracep->declArray(c+2183,"riscv_soc sram4 sram_3", false,-1, 127,0);
        tracep->declArray(c+2187,"riscv_soc sram4 sram_4", false,-1, 127,0);
        tracep->declArray(c+2191,"riscv_soc sram4 sram_5", false,-1, 127,0);
        tracep->declArray(c+2195,"riscv_soc sram4 sram_6", false,-1, 127,0);
        tracep->declArray(c+2199,"riscv_soc sram4 sram_7", false,-1, 127,0);
        tracep->declArray(c+2203,"riscv_soc sram4 sram_8", false,-1, 127,0);
        tracep->declArray(c+2207,"riscv_soc sram4 sram_9", false,-1, 127,0);
        tracep->declArray(c+2211,"riscv_soc sram4 sram_10", false,-1, 127,0);
        tracep->declArray(c+2215,"riscv_soc sram4 sram_11", false,-1, 127,0);
        tracep->declArray(c+2219,"riscv_soc sram4 sram_12", false,-1, 127,0);
        tracep->declArray(c+2223,"riscv_soc sram4 sram_13", false,-1, 127,0);
        tracep->declArray(c+2227,"riscv_soc sram4 sram_14", false,-1, 127,0);
        tracep->declArray(c+2231,"riscv_soc sram4 sram_15", false,-1, 127,0);
        tracep->declArray(c+2235,"riscv_soc sram4 sram_16", false,-1, 127,0);
        tracep->declArray(c+2239,"riscv_soc sram4 sram_17", false,-1, 127,0);
        tracep->declArray(c+2243,"riscv_soc sram4 sram_18", false,-1, 127,0);
        tracep->declArray(c+2247,"riscv_soc sram4 sram_19", false,-1, 127,0);
        tracep->declArray(c+2251,"riscv_soc sram4 sram_20", false,-1, 127,0);
        tracep->declArray(c+2255,"riscv_soc sram4 sram_21", false,-1, 127,0);
        tracep->declArray(c+2259,"riscv_soc sram4 sram_22", false,-1, 127,0);
        tracep->declArray(c+2263,"riscv_soc sram4 sram_23", false,-1, 127,0);
        tracep->declArray(c+2267,"riscv_soc sram4 sram_24", false,-1, 127,0);
        tracep->declArray(c+2271,"riscv_soc sram4 sram_25", false,-1, 127,0);
        tracep->declArray(c+2275,"riscv_soc sram4 sram_26", false,-1, 127,0);
        tracep->declArray(c+2279,"riscv_soc sram4 sram_27", false,-1, 127,0);
        tracep->declArray(c+2283,"riscv_soc sram4 sram_28", false,-1, 127,0);
        tracep->declArray(c+2287,"riscv_soc sram4 sram_29", false,-1, 127,0);
        tracep->declArray(c+2291,"riscv_soc sram4 sram_30", false,-1, 127,0);
        tracep->declArray(c+2295,"riscv_soc sram4 sram_31", false,-1, 127,0);
        tracep->declArray(c+2299,"riscv_soc sram4 sram_32", false,-1, 127,0);
        tracep->declArray(c+2303,"riscv_soc sram4 sram_33", false,-1, 127,0);
        tracep->declArray(c+2307,"riscv_soc sram4 sram_34", false,-1, 127,0);
        tracep->declArray(c+2311,"riscv_soc sram4 sram_35", false,-1, 127,0);
        tracep->declArray(c+2315,"riscv_soc sram4 sram_36", false,-1, 127,0);
        tracep->declArray(c+2319,"riscv_soc sram4 sram_37", false,-1, 127,0);
        tracep->declArray(c+2323,"riscv_soc sram4 sram_38", false,-1, 127,0);
        tracep->declArray(c+2327,"riscv_soc sram4 sram_39", false,-1, 127,0);
        tracep->declArray(c+2331,"riscv_soc sram4 sram_40", false,-1, 127,0);
        tracep->declArray(c+2335,"riscv_soc sram4 sram_41", false,-1, 127,0);
        tracep->declArray(c+2339,"riscv_soc sram4 sram_42", false,-1, 127,0);
        tracep->declArray(c+2343,"riscv_soc sram4 sram_43", false,-1, 127,0);
        tracep->declArray(c+2347,"riscv_soc sram4 sram_44", false,-1, 127,0);
        tracep->declArray(c+2351,"riscv_soc sram4 sram_45", false,-1, 127,0);
        tracep->declArray(c+2355,"riscv_soc sram4 sram_46", false,-1, 127,0);
        tracep->declArray(c+2359,"riscv_soc sram4 sram_47", false,-1, 127,0);
        tracep->declArray(c+2363,"riscv_soc sram4 sram_48", false,-1, 127,0);
        tracep->declArray(c+2367,"riscv_soc sram4 sram_49", false,-1, 127,0);
        tracep->declArray(c+2371,"riscv_soc sram4 sram_50", false,-1, 127,0);
        tracep->declArray(c+2375,"riscv_soc sram4 sram_51", false,-1, 127,0);
        tracep->declArray(c+2379,"riscv_soc sram4 sram_52", false,-1, 127,0);
        tracep->declArray(c+2383,"riscv_soc sram4 sram_53", false,-1, 127,0);
        tracep->declArray(c+2387,"riscv_soc sram4 sram_54", false,-1, 127,0);
        tracep->declArray(c+2391,"riscv_soc sram4 sram_55", false,-1, 127,0);
        tracep->declArray(c+2395,"riscv_soc sram4 sram_56", false,-1, 127,0);
        tracep->declArray(c+2399,"riscv_soc sram4 sram_57", false,-1, 127,0);
        tracep->declArray(c+2403,"riscv_soc sram4 sram_58", false,-1, 127,0);
        tracep->declArray(c+2407,"riscv_soc sram4 sram_59", false,-1, 127,0);
        tracep->declArray(c+2411,"riscv_soc sram4 sram_60", false,-1, 127,0);
        tracep->declArray(c+2415,"riscv_soc sram4 sram_61", false,-1, 127,0);
        tracep->declArray(c+2419,"riscv_soc sram4 sram_62", false,-1, 127,0);
        tracep->declArray(c+2423,"riscv_soc sram4 sram_63", false,-1, 127,0);
        tracep->declArray(c+390,"riscv_soc sram4 bwen", false,-1, 127,0);
        tracep->declBit(c+398,"riscv_soc sram4 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram5 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram5 reset", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5 io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram5 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5 io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5 io_rdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5 Q", false,-1, 127,0);
        tracep->declArray(c+2427,"riscv_soc sram5 sram_0", false,-1, 127,0);
        tracep->declArray(c+2431,"riscv_soc sram5 sram_1", false,-1, 127,0);
        tracep->declArray(c+2435,"riscv_soc sram5 sram_2", false,-1, 127,0);
        tracep->declArray(c+2439,"riscv_soc sram5 sram_3", false,-1, 127,0);
        tracep->declArray(c+2443,"riscv_soc sram5 sram_4", false,-1, 127,0);
        tracep->declArray(c+2447,"riscv_soc sram5 sram_5", false,-1, 127,0);
        tracep->declArray(c+2451,"riscv_soc sram5 sram_6", false,-1, 127,0);
        tracep->declArray(c+2455,"riscv_soc sram5 sram_7", false,-1, 127,0);
        tracep->declArray(c+2459,"riscv_soc sram5 sram_8", false,-1, 127,0);
        tracep->declArray(c+2463,"riscv_soc sram5 sram_9", false,-1, 127,0);
        tracep->declArray(c+2467,"riscv_soc sram5 sram_10", false,-1, 127,0);
        tracep->declArray(c+2471,"riscv_soc sram5 sram_11", false,-1, 127,0);
        tracep->declArray(c+2475,"riscv_soc sram5 sram_12", false,-1, 127,0);
        tracep->declArray(c+2479,"riscv_soc sram5 sram_13", false,-1, 127,0);
        tracep->declArray(c+2483,"riscv_soc sram5 sram_14", false,-1, 127,0);
        tracep->declArray(c+2487,"riscv_soc sram5 sram_15", false,-1, 127,0);
        tracep->declArray(c+2491,"riscv_soc sram5 sram_16", false,-1, 127,0);
        tracep->declArray(c+2495,"riscv_soc sram5 sram_17", false,-1, 127,0);
        tracep->declArray(c+2499,"riscv_soc sram5 sram_18", false,-1, 127,0);
        tracep->declArray(c+2503,"riscv_soc sram5 sram_19", false,-1, 127,0);
        tracep->declArray(c+2507,"riscv_soc sram5 sram_20", false,-1, 127,0);
        tracep->declArray(c+2511,"riscv_soc sram5 sram_21", false,-1, 127,0);
        tracep->declArray(c+2515,"riscv_soc sram5 sram_22", false,-1, 127,0);
        tracep->declArray(c+2519,"riscv_soc sram5 sram_23", false,-1, 127,0);
        tracep->declArray(c+2523,"riscv_soc sram5 sram_24", false,-1, 127,0);
        tracep->declArray(c+2527,"riscv_soc sram5 sram_25", false,-1, 127,0);
        tracep->declArray(c+2531,"riscv_soc sram5 sram_26", false,-1, 127,0);
        tracep->declArray(c+2535,"riscv_soc sram5 sram_27", false,-1, 127,0);
        tracep->declArray(c+2539,"riscv_soc sram5 sram_28", false,-1, 127,0);
        tracep->declArray(c+2543,"riscv_soc sram5 sram_29", false,-1, 127,0);
        tracep->declArray(c+2547,"riscv_soc sram5 sram_30", false,-1, 127,0);
        tracep->declArray(c+2551,"riscv_soc sram5 sram_31", false,-1, 127,0);
        tracep->declArray(c+2555,"riscv_soc sram5 sram_32", false,-1, 127,0);
        tracep->declArray(c+2559,"riscv_soc sram5 sram_33", false,-1, 127,0);
        tracep->declArray(c+2563,"riscv_soc sram5 sram_34", false,-1, 127,0);
        tracep->declArray(c+2567,"riscv_soc sram5 sram_35", false,-1, 127,0);
        tracep->declArray(c+2571,"riscv_soc sram5 sram_36", false,-1, 127,0);
        tracep->declArray(c+2575,"riscv_soc sram5 sram_37", false,-1, 127,0);
        tracep->declArray(c+2579,"riscv_soc sram5 sram_38", false,-1, 127,0);
        tracep->declArray(c+2583,"riscv_soc sram5 sram_39", false,-1, 127,0);
        tracep->declArray(c+2587,"riscv_soc sram5 sram_40", false,-1, 127,0);
        tracep->declArray(c+2591,"riscv_soc sram5 sram_41", false,-1, 127,0);
        tracep->declArray(c+2595,"riscv_soc sram5 sram_42", false,-1, 127,0);
        tracep->declArray(c+2599,"riscv_soc sram5 sram_43", false,-1, 127,0);
        tracep->declArray(c+2603,"riscv_soc sram5 sram_44", false,-1, 127,0);
        tracep->declArray(c+2607,"riscv_soc sram5 sram_45", false,-1, 127,0);
        tracep->declArray(c+2611,"riscv_soc sram5 sram_46", false,-1, 127,0);
        tracep->declArray(c+2615,"riscv_soc sram5 sram_47", false,-1, 127,0);
        tracep->declArray(c+2619,"riscv_soc sram5 sram_48", false,-1, 127,0);
        tracep->declArray(c+2623,"riscv_soc sram5 sram_49", false,-1, 127,0);
        tracep->declArray(c+2627,"riscv_soc sram5 sram_50", false,-1, 127,0);
        tracep->declArray(c+2631,"riscv_soc sram5 sram_51", false,-1, 127,0);
        tracep->declArray(c+2635,"riscv_soc sram5 sram_52", false,-1, 127,0);
        tracep->declArray(c+2639,"riscv_soc sram5 sram_53", false,-1, 127,0);
        tracep->declArray(c+2643,"riscv_soc sram5 sram_54", false,-1, 127,0);
        tracep->declArray(c+2647,"riscv_soc sram5 sram_55", false,-1, 127,0);
        tracep->declArray(c+2651,"riscv_soc sram5 sram_56", false,-1, 127,0);
        tracep->declArray(c+2655,"riscv_soc sram5 sram_57", false,-1, 127,0);
        tracep->declArray(c+2659,"riscv_soc sram5 sram_58", false,-1, 127,0);
        tracep->declArray(c+2663,"riscv_soc sram5 sram_59", false,-1, 127,0);
        tracep->declArray(c+2667,"riscv_soc sram5 sram_60", false,-1, 127,0);
        tracep->declArray(c+2671,"riscv_soc sram5 sram_61", false,-1, 127,0);
        tracep->declArray(c+2675,"riscv_soc sram5 sram_62", false,-1, 127,0);
        tracep->declArray(c+2679,"riscv_soc sram5 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc sram5 bwen", false,-1, 127,0);
        tracep->declBit(c+398,"riscv_soc sram5 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram6 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram6 reset", false,-1);
        tracep->declBus(c+74,"riscv_soc sram6 io_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc sram6 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6 io_wdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc sram6 io_rdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc sram6 Q", false,-1, 127,0);
        tracep->declArray(c+2683,"riscv_soc sram6 sram_0", false,-1, 127,0);
        tracep->declArray(c+2687,"riscv_soc sram6 sram_1", false,-1, 127,0);
        tracep->declArray(c+2691,"riscv_soc sram6 sram_2", false,-1, 127,0);
        tracep->declArray(c+2695,"riscv_soc sram6 sram_3", false,-1, 127,0);
        tracep->declArray(c+2699,"riscv_soc sram6 sram_4", false,-1, 127,0);
        tracep->declArray(c+2703,"riscv_soc sram6 sram_5", false,-1, 127,0);
        tracep->declArray(c+2707,"riscv_soc sram6 sram_6", false,-1, 127,0);
        tracep->declArray(c+2711,"riscv_soc sram6 sram_7", false,-1, 127,0);
        tracep->declArray(c+2715,"riscv_soc sram6 sram_8", false,-1, 127,0);
        tracep->declArray(c+2719,"riscv_soc sram6 sram_9", false,-1, 127,0);
        tracep->declArray(c+2723,"riscv_soc sram6 sram_10", false,-1, 127,0);
        tracep->declArray(c+2727,"riscv_soc sram6 sram_11", false,-1, 127,0);
        tracep->declArray(c+2731,"riscv_soc sram6 sram_12", false,-1, 127,0);
        tracep->declArray(c+2735,"riscv_soc sram6 sram_13", false,-1, 127,0);
        tracep->declArray(c+2739,"riscv_soc sram6 sram_14", false,-1, 127,0);
        tracep->declArray(c+2743,"riscv_soc sram6 sram_15", false,-1, 127,0);
        tracep->declArray(c+2747,"riscv_soc sram6 sram_16", false,-1, 127,0);
        tracep->declArray(c+2751,"riscv_soc sram6 sram_17", false,-1, 127,0);
        tracep->declArray(c+2755,"riscv_soc sram6 sram_18", false,-1, 127,0);
        tracep->declArray(c+2759,"riscv_soc sram6 sram_19", false,-1, 127,0);
        tracep->declArray(c+2763,"riscv_soc sram6 sram_20", false,-1, 127,0);
        tracep->declArray(c+2767,"riscv_soc sram6 sram_21", false,-1, 127,0);
        tracep->declArray(c+2771,"riscv_soc sram6 sram_22", false,-1, 127,0);
        tracep->declArray(c+2775,"riscv_soc sram6 sram_23", false,-1, 127,0);
        tracep->declArray(c+2779,"riscv_soc sram6 sram_24", false,-1, 127,0);
        tracep->declArray(c+2783,"riscv_soc sram6 sram_25", false,-1, 127,0);
        tracep->declArray(c+2787,"riscv_soc sram6 sram_26", false,-1, 127,0);
        tracep->declArray(c+2791,"riscv_soc sram6 sram_27", false,-1, 127,0);
        tracep->declArray(c+2795,"riscv_soc sram6 sram_28", false,-1, 127,0);
        tracep->declArray(c+2799,"riscv_soc sram6 sram_29", false,-1, 127,0);
        tracep->declArray(c+2803,"riscv_soc sram6 sram_30", false,-1, 127,0);
        tracep->declArray(c+2807,"riscv_soc sram6 sram_31", false,-1, 127,0);
        tracep->declArray(c+2811,"riscv_soc sram6 sram_32", false,-1, 127,0);
        tracep->declArray(c+2815,"riscv_soc sram6 sram_33", false,-1, 127,0);
        tracep->declArray(c+2819,"riscv_soc sram6 sram_34", false,-1, 127,0);
        tracep->declArray(c+2823,"riscv_soc sram6 sram_35", false,-1, 127,0);
        tracep->declArray(c+2827,"riscv_soc sram6 sram_36", false,-1, 127,0);
        tracep->declArray(c+2831,"riscv_soc sram6 sram_37", false,-1, 127,0);
        tracep->declArray(c+2835,"riscv_soc sram6 sram_38", false,-1, 127,0);
        tracep->declArray(c+2839,"riscv_soc sram6 sram_39", false,-1, 127,0);
        tracep->declArray(c+2843,"riscv_soc sram6 sram_40", false,-1, 127,0);
        tracep->declArray(c+2847,"riscv_soc sram6 sram_41", false,-1, 127,0);
        tracep->declArray(c+2851,"riscv_soc sram6 sram_42", false,-1, 127,0);
        tracep->declArray(c+2855,"riscv_soc sram6 sram_43", false,-1, 127,0);
        tracep->declArray(c+2859,"riscv_soc sram6 sram_44", false,-1, 127,0);
        tracep->declArray(c+2863,"riscv_soc sram6 sram_45", false,-1, 127,0);
        tracep->declArray(c+2867,"riscv_soc sram6 sram_46", false,-1, 127,0);
        tracep->declArray(c+2871,"riscv_soc sram6 sram_47", false,-1, 127,0);
        tracep->declArray(c+2875,"riscv_soc sram6 sram_48", false,-1, 127,0);
        tracep->declArray(c+2879,"riscv_soc sram6 sram_49", false,-1, 127,0);
        tracep->declArray(c+2883,"riscv_soc sram6 sram_50", false,-1, 127,0);
        tracep->declArray(c+2887,"riscv_soc sram6 sram_51", false,-1, 127,0);
        tracep->declArray(c+2891,"riscv_soc sram6 sram_52", false,-1, 127,0);
        tracep->declArray(c+2895,"riscv_soc sram6 sram_53", false,-1, 127,0);
        tracep->declArray(c+2899,"riscv_soc sram6 sram_54", false,-1, 127,0);
        tracep->declArray(c+2903,"riscv_soc sram6 sram_55", false,-1, 127,0);
        tracep->declArray(c+2907,"riscv_soc sram6 sram_56", false,-1, 127,0);
        tracep->declArray(c+2911,"riscv_soc sram6 sram_57", false,-1, 127,0);
        tracep->declArray(c+2915,"riscv_soc sram6 sram_58", false,-1, 127,0);
        tracep->declArray(c+2919,"riscv_soc sram6 sram_59", false,-1, 127,0);
        tracep->declArray(c+2923,"riscv_soc sram6 sram_60", false,-1, 127,0);
        tracep->declArray(c+2927,"riscv_soc sram6 sram_61", false,-1, 127,0);
        tracep->declArray(c+2931,"riscv_soc sram6 sram_62", false,-1, 127,0);
        tracep->declArray(c+2935,"riscv_soc sram6 sram_63", false,-1, 127,0);
        tracep->declArray(c+390,"riscv_soc sram6 bwen", false,-1, 127,0);
        tracep->declBit(c+407,"riscv_soc sram6 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc sram7 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc sram7 reset", false,-1);
        tracep->declBus(c+80,"riscv_soc sram7 io_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc sram7 io_wen", false,-1);
        tracep->declArray(c+3277,"riscv_soc sram7 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7 io_wdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc sram7 io_rdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc sram7 Q", false,-1, 127,0);
        tracep->declArray(c+2939,"riscv_soc sram7 sram_0", false,-1, 127,0);
        tracep->declArray(c+2943,"riscv_soc sram7 sram_1", false,-1, 127,0);
        tracep->declArray(c+2947,"riscv_soc sram7 sram_2", false,-1, 127,0);
        tracep->declArray(c+2951,"riscv_soc sram7 sram_3", false,-1, 127,0);
        tracep->declArray(c+2955,"riscv_soc sram7 sram_4", false,-1, 127,0);
        tracep->declArray(c+2959,"riscv_soc sram7 sram_5", false,-1, 127,0);
        tracep->declArray(c+2963,"riscv_soc sram7 sram_6", false,-1, 127,0);
        tracep->declArray(c+2967,"riscv_soc sram7 sram_7", false,-1, 127,0);
        tracep->declArray(c+2971,"riscv_soc sram7 sram_8", false,-1, 127,0);
        tracep->declArray(c+2975,"riscv_soc sram7 sram_9", false,-1, 127,0);
        tracep->declArray(c+2979,"riscv_soc sram7 sram_10", false,-1, 127,0);
        tracep->declArray(c+2983,"riscv_soc sram7 sram_11", false,-1, 127,0);
        tracep->declArray(c+2987,"riscv_soc sram7 sram_12", false,-1, 127,0);
        tracep->declArray(c+2991,"riscv_soc sram7 sram_13", false,-1, 127,0);
        tracep->declArray(c+2995,"riscv_soc sram7 sram_14", false,-1, 127,0);
        tracep->declArray(c+2999,"riscv_soc sram7 sram_15", false,-1, 127,0);
        tracep->declArray(c+3003,"riscv_soc sram7 sram_16", false,-1, 127,0);
        tracep->declArray(c+3007,"riscv_soc sram7 sram_17", false,-1, 127,0);
        tracep->declArray(c+3011,"riscv_soc sram7 sram_18", false,-1, 127,0);
        tracep->declArray(c+3015,"riscv_soc sram7 sram_19", false,-1, 127,0);
        tracep->declArray(c+3019,"riscv_soc sram7 sram_20", false,-1, 127,0);
        tracep->declArray(c+3023,"riscv_soc sram7 sram_21", false,-1, 127,0);
        tracep->declArray(c+3027,"riscv_soc sram7 sram_22", false,-1, 127,0);
        tracep->declArray(c+3031,"riscv_soc sram7 sram_23", false,-1, 127,0);
        tracep->declArray(c+3035,"riscv_soc sram7 sram_24", false,-1, 127,0);
        tracep->declArray(c+3039,"riscv_soc sram7 sram_25", false,-1, 127,0);
        tracep->declArray(c+3043,"riscv_soc sram7 sram_26", false,-1, 127,0);
        tracep->declArray(c+3047,"riscv_soc sram7 sram_27", false,-1, 127,0);
        tracep->declArray(c+3051,"riscv_soc sram7 sram_28", false,-1, 127,0);
        tracep->declArray(c+3055,"riscv_soc sram7 sram_29", false,-1, 127,0);
        tracep->declArray(c+3059,"riscv_soc sram7 sram_30", false,-1, 127,0);
        tracep->declArray(c+3063,"riscv_soc sram7 sram_31", false,-1, 127,0);
        tracep->declArray(c+3067,"riscv_soc sram7 sram_32", false,-1, 127,0);
        tracep->declArray(c+3071,"riscv_soc sram7 sram_33", false,-1, 127,0);
        tracep->declArray(c+3075,"riscv_soc sram7 sram_34", false,-1, 127,0);
        tracep->declArray(c+3079,"riscv_soc sram7 sram_35", false,-1, 127,0);
        tracep->declArray(c+3083,"riscv_soc sram7 sram_36", false,-1, 127,0);
        tracep->declArray(c+3087,"riscv_soc sram7 sram_37", false,-1, 127,0);
        tracep->declArray(c+3091,"riscv_soc sram7 sram_38", false,-1, 127,0);
        tracep->declArray(c+3095,"riscv_soc sram7 sram_39", false,-1, 127,0);
        tracep->declArray(c+3099,"riscv_soc sram7 sram_40", false,-1, 127,0);
        tracep->declArray(c+3103,"riscv_soc sram7 sram_41", false,-1, 127,0);
        tracep->declArray(c+3107,"riscv_soc sram7 sram_42", false,-1, 127,0);
        tracep->declArray(c+3111,"riscv_soc sram7 sram_43", false,-1, 127,0);
        tracep->declArray(c+3115,"riscv_soc sram7 sram_44", false,-1, 127,0);
        tracep->declArray(c+3119,"riscv_soc sram7 sram_45", false,-1, 127,0);
        tracep->declArray(c+3123,"riscv_soc sram7 sram_46", false,-1, 127,0);
        tracep->declArray(c+3127,"riscv_soc sram7 sram_47", false,-1, 127,0);
        tracep->declArray(c+3131,"riscv_soc sram7 sram_48", false,-1, 127,0);
        tracep->declArray(c+3135,"riscv_soc sram7 sram_49", false,-1, 127,0);
        tracep->declArray(c+3139,"riscv_soc sram7 sram_50", false,-1, 127,0);
        tracep->declArray(c+3143,"riscv_soc sram7 sram_51", false,-1, 127,0);
        tracep->declArray(c+3147,"riscv_soc sram7 sram_52", false,-1, 127,0);
        tracep->declArray(c+3151,"riscv_soc sram7 sram_53", false,-1, 127,0);
        tracep->declArray(c+3155,"riscv_soc sram7 sram_54", false,-1, 127,0);
        tracep->declArray(c+3159,"riscv_soc sram7 sram_55", false,-1, 127,0);
        tracep->declArray(c+3163,"riscv_soc sram7 sram_56", false,-1, 127,0);
        tracep->declArray(c+3167,"riscv_soc sram7 sram_57", false,-1, 127,0);
        tracep->declArray(c+3171,"riscv_soc sram7 sram_58", false,-1, 127,0);
        tracep->declArray(c+3175,"riscv_soc sram7 sram_59", false,-1, 127,0);
        tracep->declArray(c+3179,"riscv_soc sram7 sram_60", false,-1, 127,0);
        tracep->declArray(c+3183,"riscv_soc sram7 sram_61", false,-1, 127,0);
        tracep->declArray(c+3187,"riscv_soc sram7 sram_62", false,-1, 127,0);
        tracep->declArray(c+3191,"riscv_soc sram7 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc sram7 bwen", false,-1, 127,0);
        tracep->declBit(c+407,"riscv_soc sram7 wen", false,-1);
    }
}

void Vriscv_soc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vriscv_soc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vriscv_soc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vriscv_soc___024root__traceRegister(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vriscv_soc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vriscv_soc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vriscv_soc___024root__traceCleanup, vlSelf);
    }
}

void Vriscv_soc___024root__traceFullSub0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscv_soc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscv_soc___024root* const __restrict vlSelf = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscv_soc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscv_soc___024root__traceFullSub0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp3286;
    VlWide<4>/*127:0*/ __Vtemp3287;
    VlWide<4>/*127:0*/ __Vtemp3288;
    VlWide<4>/*127:0*/ __Vtemp3289;
    VlWide<4>/*127:0*/ __Vtemp3290;
    VlWide<4>/*127:0*/ __Vtemp3291;
    VlWide<4>/*127:0*/ __Vtemp3292;
    VlWide<4>/*127:0*/ __Vtemp3293;
    VlWide<4>/*127:0*/ __Vtemp3294;
    VlWide<4>/*127:0*/ __Vtemp3295;
    VlWide<4>/*127:0*/ __Vtemp3296;
    VlWide<4>/*127:0*/ __Vtemp3298;
    VlWide<4>/*127:0*/ __Vtemp3299;
    VlWide<4>/*127:0*/ __Vtemp3302;
    VlWide<4>/*127:0*/ __Vtemp3303;
    VlWide<4>/*127:0*/ __Vtemp3304;
    VlWide<3>/*95:0*/ __Vtemp3305;
    VlWide<3>/*95:0*/ __Vtemp3307;
    VlWide<3>/*95:0*/ __Vtemp3308;
    VlWide<3>/*95:0*/ __Vtemp3309;
    VlWide<3>/*95:0*/ __Vtemp3310;
    VlWide<3>/*95:0*/ __Vtemp3313;
    VlWide<3>/*95:0*/ __Vtemp3314;
    VlWide<3>/*95:0*/ __Vtemp3315;
    VlWide<5>/*159:0*/ __Vtemp3327;
    VlWide<5>/*159:0*/ __Vtemp3331;
    VlWide<3>/*95:0*/ __Vtemp3333;
    VlWide<5>/*159:0*/ __Vtemp3335;
    VlWide<5>/*159:0*/ __Vtemp3336;
    VlWide<5>/*159:0*/ __Vtemp3337;
    VlWide<5>/*159:0*/ __Vtemp3338;
    VlWide<5>/*159:0*/ __Vtemp3339;
    VlWide<5>/*159:0*/ __Vtemp3341;
    VlWide<5>/*159:0*/ __Vtemp3342;
    VlWide<5>/*159:0*/ __Vtemp3343;
    VlWide<5>/*159:0*/ __Vtemp3344;
    VlWide<5>/*159:0*/ __Vtemp3345;
    VlWide<5>/*159:0*/ __Vtemp3347;
    VlWide<5>/*159:0*/ __Vtemp3348;
    VlWide<5>/*159:0*/ __Vtemp3349;
    VlWide<5>/*159:0*/ __Vtemp3357;
    VlWide<5>/*159:0*/ __Vtemp3358;
    VlWide<5>/*159:0*/ __Vtemp3366;
    VlWide<4>/*127:0*/ __Vtemp3367;
    VlWide<4>/*127:0*/ __Vtemp3368;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
        tracep->fullBit(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
        tracep->fullQData(oldp+3,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                        : 0ULL))),64);
        tracep->fullBit(oldp+5,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
        tracep->fullBit(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
        tracep->fullQData(oldp+7,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                        ? (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                        : 0ULL))),64);
        tracep->fullCData(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb),8);
        tracep->fullBit(oldp+10,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
        tracep->fullBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
        tracep->fullBit(oldp+12,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
        tracep->fullBit(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
        tracep->fullQData(oldp+14,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
        tracep->fullCData(oldp+16,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                    | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
        tracep->fullBit(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
        tracep->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
        tracep->fullBit(oldp+20,(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
        tracep->fullCData(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr),6);
        tracep->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        tracep->fullWData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+27,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
        tracep->fullCData(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp3286, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        tracep->fullWData(oldp+32,(__Vtemp3286),128);
        tracep->fullWData(oldp+36,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
        tracep->fullCData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
        tracep->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        tracep->fullWData(oldp+42,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
        tracep->fullCData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+47,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
        tracep->fullCData(oldp+51,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr),6);
        tracep->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp3287[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp3287[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp3287[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp3287[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+53,(__Vtemp3287),128);
        tracep->fullWData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+61,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
        tracep->fullCData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp3288, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+66,(__Vtemp3288),128);
        tracep->fullWData(oldp+70,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
        tracep->fullCData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr),6);
        tracep->fullBit(oldp+75,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+76,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
        tracep->fullCData(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+81,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
        tracep->fullBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        tracep->fullBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        tracep->fullBit(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        tracep->fullQData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        tracep->fullIData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        tracep->fullQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
        tracep->fullQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
        tracep->fullQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
        tracep->fullQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
        tracep->fullQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
        tracep->fullQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
        tracep->fullQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
        tracep->fullQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
        tracep->fullQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
        tracep->fullQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
        tracep->fullQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
        tracep->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
        tracep->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
        tracep->fullQData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
        tracep->fullQData(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
        tracep->fullQData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
        tracep->fullQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
        tracep->fullQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
        tracep->fullQData(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
        tracep->fullQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
        tracep->fullQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
        tracep->fullQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
        tracep->fullQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
        tracep->fullQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
        tracep->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
        tracep->fullQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
        tracep->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
        tracep->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
        tracep->fullQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
        tracep->fullQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
        tracep->fullQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
        tracep->fullQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
        tracep->fullQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        tracep->fullQData(oldp+157,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
        tracep->fullBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
        tracep->fullBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
        tracep->fullBit(oldp+161,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        tracep->fullQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullBit(oldp+164,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        tracep->fullBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        tracep->fullQData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        tracep->fullQData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
        tracep->fullBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        tracep->fullQData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        tracep->fullQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+181,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        tracep->fullCData(oldp+183,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        tracep->fullBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        tracep->fullBit(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+186,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+194,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+204,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        tracep->fullBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        tracep->fullQData(oldp+207,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
        tracep->fullQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        tracep->fullBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        tracep->fullQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+214,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        tracep->fullBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        tracep->fullQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        tracep->fullBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        tracep->fullQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        tracep->fullBit(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        tracep->fullQData(oldp+227,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                      ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                          : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                              : ((1U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                  : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
        tracep->fullBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        tracep->fullBit(oldp+233,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
        tracep->fullIData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
        tracep->fullQData(oldp+235,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                          : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                              : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
        tracep->fullBit(oldp+237,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
        tracep->fullBit(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullCData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullBit(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        tracep->fullSData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+257,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
        tracep->fullQData(oldp+265,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        tracep->fullCData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        tracep->fullBit(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        tracep->fullSData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        tracep->fullBit(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        tracep->fullCData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        tracep->fullIData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        tracep->fullBit(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        tracep->fullCData(oldp+286,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+287,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0xfU))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : ((0x1fU == 
                                          (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0xfU)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26))))))),64);
        tracep->fullCData(oldp+289,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+290,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : ((0x1fU == 
                                          (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U)))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58))))))),64);
        tracep->fullSData(oldp+292,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+293,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        tracep->fullQData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        tracep->fullCData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        tracep->fullBit(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        tracep->fullBit(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        tracep->fullBit(oldp+301,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullWData(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        tracep->fullWData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
        VL_EXTEND_WQ(128,54, __Vtemp3289, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3290, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp3291[0U] = __Vtemp3289[0U];
            __Vtemp3291[1U] = __Vtemp3289[1U];
            __Vtemp3291[2U] = __Vtemp3289[2U];
            __Vtemp3291[3U] = __Vtemp3289[3U];
        } else {
            __Vtemp3291[0U] = __Vtemp3290[0U];
            __Vtemp3291[1U] = __Vtemp3290[1U];
            __Vtemp3291[2U] = __Vtemp3290[2U];
            __Vtemp3291[3U] = __Vtemp3290[3U];
        }
        tracep->fullWData(oldp+310,(__Vtemp3291),128);
        VL_EXTEND_WQ(128,54, __Vtemp3292, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3293, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
            __Vtemp3294[0U] = __Vtemp3292[0U];
            __Vtemp3294[1U] = __Vtemp3292[1U];
            __Vtemp3294[2U] = __Vtemp3292[2U];
            __Vtemp3294[3U] = __Vtemp3292[3U];
        } else {
            __Vtemp3294[0U] = __Vtemp3293[0U];
            __Vtemp3294[1U] = __Vtemp3293[1U];
            __Vtemp3294[2U] = __Vtemp3293[2U];
            __Vtemp3294[3U] = __Vtemp3293[3U];
        }
        tracep->fullWData(oldp+314,(__Vtemp3294),128);
        tracep->fullBit(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        tracep->fullBit(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
        tracep->fullBit(oldp+320,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        tracep->fullQData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        tracep->fullQData(oldp+324,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 3U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
        tracep->fullBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        tracep->fullQData(oldp+327,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 3U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
        tracep->fullBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        tracep->fullCData(oldp+330,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullBit(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        tracep->fullBit(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        tracep->fullBit(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        tracep->fullQData(oldp+339,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullBit(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        tracep->fullBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        tracep->fullCData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        tracep->fullBit(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        tracep->fullBit(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        tracep->fullBit(oldp+346,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullBit(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        tracep->fullBit(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        tracep->fullQData(oldp+349,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+351,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+352,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        VL_EXTEND_WQ(128,54, __Vtemp3295, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3296, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
        tracep->fullQData(oldp+353,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                           ? 
                                                          __Vtemp3295[1U]
                                                           : 
                                                          __Vtemp3296[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                            ? 
                                                           __Vtemp3295[0U]
                                                            : 
                                                           __Vtemp3296[0U])))))),54);
        VL_EXTEND_WQ(128,54, __Vtemp3298, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3299, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
        tracep->fullQData(oldp+355,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                           ? 
                                                          __Vtemp3298[1U]
                                                           : 
                                                          __Vtemp3299[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                            ? 
                                                           __Vtemp3298[0U]
                                                            : 
                                                           __Vtemp3299[0U])))))),54);
        tracep->fullBit(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        tracep->fullBit(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        tracep->fullQData(oldp+359,((0xfffffffffffffff0ULL 
                                     & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        tracep->fullQData(oldp+361,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+363,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        tracep->fullQData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        tracep->fullBit(oldp+366,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        tracep->fullQData(oldp+367,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullQData(oldp+369,((~ (1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
        tracep->fullCData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        tracep->fullQData(oldp+372,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+374,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+375,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        tracep->fullCData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+388,((((QData)((IData)(
                                                      ((((0x80U 
                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 0x18U) 
                                                       | ((((0x40U 
                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                             ? 0xffU
                                                             : 0U) 
                                                           << 0x10U) 
                                                          | ((((0x20U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((0x10U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                 ? 0xffU
                                                                 : 0U)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((((8U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 0x18U) 
                                                                   | ((((4U 
                                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                         ? 0xffU
                                                                         : 0U) 
                                                                       << 0x10U) 
                                                                      | ((((2U 
                                                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                            ? 0xffU
                                                                            : 0U) 
                                                                          << 8U) 
                                                                         | ((1U 
                                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                             ? 0xffU
                                                                             : 0U)))))))),64);
        tracep->fullWData(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+403,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+405,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+412,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
        tracep->fullQData(oldp+414,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
        tracep->fullBit(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+418,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+419,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+420,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+421,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+422,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))),64);
        tracep->fullQData(oldp+424,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))),64);
        tracep->fullQData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+428,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+437,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+442,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+443,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+445,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
        tracep->fullIData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
        tracep->fullBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
        tracep->fullQData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        tracep->fullBit(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
        tracep->fullBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullCData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        tracep->fullCData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        tracep->fullQData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        tracep->fullQData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        tracep->fullQData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        tracep->fullQData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        tracep->fullBit(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        tracep->fullCData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        tracep->fullCData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        tracep->fullBit(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        tracep->fullBit(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        tracep->fullBit(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        tracep->fullBit(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        tracep->fullQData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        tracep->fullQData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        tracep->fullQData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        tracep->fullQData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        tracep->fullIData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        tracep->fullIData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        tracep->fullIData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        tracep->fullIData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        tracep->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        tracep->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        tracep->fullBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        tracep->fullBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        tracep->fullBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullCData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullCData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        tracep->fullBit(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        tracep->fullBit(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        tracep->fullCData(oldp+496,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                            + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                           - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        tracep->fullWData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
        tracep->fullWData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
        tracep->fullWData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
        tracep->fullWData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
        tracep->fullWData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
        tracep->fullWData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
        tracep->fullWData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
        tracep->fullWData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
        tracep->fullWData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
        tracep->fullWData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
        tracep->fullWData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
        tracep->fullWData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
        tracep->fullWData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
        tracep->fullWData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
        tracep->fullWData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
        tracep->fullWData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
        tracep->fullWData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
        tracep->fullWData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
        tracep->fullWData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
        tracep->fullWData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
        tracep->fullWData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
        tracep->fullWData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
        tracep->fullWData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
        tracep->fullWData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
        tracep->fullWData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
        tracep->fullWData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
        tracep->fullWData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
        tracep->fullWData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
        tracep->fullWData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
        tracep->fullWData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
        tracep->fullWData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
        tracep->fullWData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
        tracep->fullWData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
        tracep->fullWData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
        tracep->fullWData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
        tracep->fullWData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
        tracep->fullWData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
        tracep->fullWData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
        tracep->fullWData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
        tracep->fullWData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
        tracep->fullWData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
        tracep->fullWData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
        tracep->fullWData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
        tracep->fullWData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
        tracep->fullWData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
        tracep->fullWData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
        tracep->fullWData(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
        tracep->fullWData(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
        tracep->fullWData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
        tracep->fullWData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
        tracep->fullWData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
        tracep->fullWData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
        tracep->fullWData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
        tracep->fullWData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
        tracep->fullWData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
        tracep->fullWData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
        tracep->fullWData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
        tracep->fullWData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
        tracep->fullWData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
        tracep->fullWData(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
        tracep->fullWData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
        tracep->fullWData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
        tracep->fullWData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
        tracep->fullWData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
        tracep->fullQData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
        tracep->fullQData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
        tracep->fullQData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
        tracep->fullQData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
        tracep->fullQData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
        tracep->fullQData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
        tracep->fullCData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        tracep->fullCData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        tracep->fullCData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        tracep->fullCData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        tracep->fullCData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        tracep->fullCData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        tracep->fullCData(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        tracep->fullCData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        tracep->fullCData(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        tracep->fullCData(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        tracep->fullCData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        tracep->fullCData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        tracep->fullCData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        tracep->fullCData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        tracep->fullCData(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        tracep->fullCData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        tracep->fullCData(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        tracep->fullCData(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        tracep->fullCData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        tracep->fullCData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        tracep->fullCData(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        tracep->fullCData(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        tracep->fullCData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        tracep->fullCData(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        tracep->fullCData(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        tracep->fullCData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        tracep->fullCData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        tracep->fullCData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        tracep->fullCData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        tracep->fullCData(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        tracep->fullCData(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        tracep->fullCData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        tracep->fullCData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        tracep->fullCData(oldp+798,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        tracep->fullCData(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        tracep->fullCData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        tracep->fullCData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        tracep->fullCData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        tracep->fullCData(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        tracep->fullCData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        tracep->fullCData(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        tracep->fullCData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        tracep->fullCData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        tracep->fullCData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        tracep->fullCData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        tracep->fullCData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        tracep->fullCData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        tracep->fullCData(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        tracep->fullCData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        tracep->fullCData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        tracep->fullCData(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        tracep->fullCData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        tracep->fullCData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        tracep->fullCData(oldp+818,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        tracep->fullCData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        tracep->fullCData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        tracep->fullCData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        tracep->fullCData(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        tracep->fullCData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        tracep->fullCData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        tracep->fullCData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        tracep->fullCData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        tracep->fullCData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        tracep->fullCData(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        tracep->fullCData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        tracep->fullCData(oldp+830,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 3U)))),6);
        tracep->fullWData(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data),123);
        tracep->fullCData(oldp+835,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
        tracep->fullBit(oldp+838,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_447) 
                                         >> 1U))));
        tracep->fullBit(oldp+839,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                         >> 0x1aU))));
        tracep->fullQData(oldp+840,((0xffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                           >> 2U)))),56);
        tracep->fullQData(oldp+842,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                                      >> 2U)))),64);
        tracep->fullCData(oldp+844,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
        tracep->fullBit(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        tracep->fullBit(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullBit(oldp+847,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
        tracep->fullBit(oldp+848,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
        tracep->fullQData(oldp+849,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                      : 0ULL)),64);
        tracep->fullBit(oldp+851,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+852,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+854,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
        tracep->fullQData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
        tracep->fullQData(oldp+858,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                      ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                      : 0ULL)),64);
        tracep->fullBit(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
        tracep->fullQData(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
        tracep->fullBit(oldp+863,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        tracep->fullQData(oldp+864,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
        tracep->fullQData(oldp+866,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
        tracep->fullQData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+871,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullBit(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        tracep->fullQData(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+875,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                                      ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                          ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                                          : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                                      : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                          : ((0U == 
                                              (3U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))),64);
        tracep->fullBit(oldp+877,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
        tracep->fullBit(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        tracep->fullQData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        tracep->fullBit(oldp+882,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                   & ((0U != (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        tracep->fullQData(oldp+883,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? ((0xffffffffffffff77ULL 
                                          & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                         | (QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                        >> 7U)))
                                                             ? 0x88U
                                                             : 0x80U))))
                                      : ((7U == (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                          : ((3U == 
                                              (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 ((0xffffffffffffffe0ULL 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm)))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                     : 0ULL)))))))),64);
        tracep->fullSData(oldp+885,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        tracep->fullCData(oldp+887,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),6);
        tracep->fullBit(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        tracep->fullBit(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        tracep->fullCData(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullBit(oldp+891,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        tracep->fullBit(oldp+892,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+893,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+894,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 3U))));
        tracep->fullCData(oldp+895,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+897,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+899,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        tracep->fullBit(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        tracep->fullBit(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        tracep->fullBit(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+907,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+909,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        tracep->fullQData(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+912,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+914,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
        tracep->fullBit(oldp+916,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U)))));
        tracep->fullQData(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+919,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullBit(oldp+920,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullQData(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullQData(oldp+923,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        tracep->fullWData(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        tracep->fullBit(oldp+928,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        tracep->fullBit(oldp+929,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+930,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp3302, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp3303, __Vtemp3302, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp3304[0U] = __Vtemp3303[0U];
        __Vtemp3304[1U] = __Vtemp3303[1U];
        __Vtemp3304[2U] = __Vtemp3303[2U];
        __Vtemp3304[3U] = (0x7fffffffU & __Vtemp3303[3U]);
        tracep->fullWData(oldp+931,(__Vtemp3304),127);
        tracep->fullQData(oldp+935,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                     >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+937,(VL_SHIFTRS_QQI(64,64,6, 
                                                   ((1U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+939,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? VL_SHIFTRS_QQI(64,64,6, 
                                                       ((1U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                      : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                           ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
        tracep->fullCData(oldp+941,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U))),3);
        tracep->fullQData(oldp+942,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
        tracep->fullBit(oldp+944,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        tracep->fullBit(oldp+945,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        tracep->fullQData(oldp+946,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp3305[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp3305[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 0x20U));
        __Vtemp3305[2U] = 1U;
        tracep->fullWData(oldp+948,(__Vtemp3305),65);
        tracep->fullQData(oldp+951,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        tracep->fullWData(oldp+953,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+956,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        tracep->fullQData(oldp+958,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+960,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullBit(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        tracep->fullBit(oldp+962,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
        tracep->fullQData(oldp+963,((((QData)((IData)(
                                                      ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
        tracep->fullQData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+967,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullCData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        tracep->fullQData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        tracep->fullQData(oldp+975,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                      ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))
                                      : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))
                                          : ((0x14U 
                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                              : ((4U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                  >> 7U)))
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data
                                                     : 0ULL)))))))),64);
        tracep->fullQData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+979,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        tracep->fullQData(oldp+980,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        tracep->fullBit(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        tracep->fullWData(oldp+983,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        tracep->fullBit(oldp+987,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        tracep->fullBit(oldp+988,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        tracep->fullQData(oldp+989,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                      ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                                      : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))),64);
        tracep->fullBit(oldp+991,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullBit(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        tracep->fullQData(oldp+994,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                      ? (((QData)((IData)(
                                                          ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                      : ((0U == (3U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))))),64);
        tracep->fullBit(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullBit(oldp+998,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullWData(oldp+999,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+1002,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+1008,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+1011,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+1014,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+1017,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp3307[0U] = 1U;
        __Vtemp3307[1U] = 0U;
        __Vtemp3307[2U] = 0U;
        __Vtemp3308[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp3308[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp3308[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp3309, __Vtemp3307, __Vtemp3308);
        __Vtemp3310[0U] = __Vtemp3309[0U];
        __Vtemp3310[1U] = __Vtemp3309[1U];
        __Vtemp3310[2U] = (1U & __Vtemp3309[2U]);
        tracep->fullWData(oldp+1020,(__Vtemp3310),65);
        tracep->fullCData(oldp+1023,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+1024,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+1025,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+1026,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+1031,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp3313[0U] = 1U;
        __Vtemp3313[1U] = 0U;
        __Vtemp3313[2U] = 0U;
        __Vtemp3314[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp3314[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp3314[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp3315, __Vtemp3313, __Vtemp3314);
        tracep->fullBit(oldp+1032,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                             ^ __Vtemp3315[0U]) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                               ^ __Vtemp3315[1U])) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              ^ (1U 
                                                 & __Vtemp3315[2U]))))));
        tracep->fullBit(oldp+1033,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+1034,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullBit(oldp+1035,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        tracep->fullBit(oldp+1036,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                          >> 3U))));
        tracep->fullQData(oldp+1037,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                       : (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))),64);
        tracep->fullQData(oldp+1039,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                       : (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]))))),64);
        tracep->fullBit(oldp+1041,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))));
        tracep->fullBit(oldp+1042,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 1U))));
        VL_EXTEND_WQ(130,64, __Vtemp3327, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp3331[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            __Vtemp3331[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 3U : 0U);
        } else {
            __Vtemp3331[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)
                                : __Vtemp3327[0U]);
            __Vtemp3331[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                           >> 0x20U))
                                : __Vtemp3327[1U]);
            __Vtemp3331[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x3fU)))
                                    ? 0xffffffffU : 0U)
                                : __Vtemp3327[2U]);
            __Vtemp3331[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x3fU)))
                                    ? 0xffffffffU : 0U)
                                : __Vtemp3327[3U]);
            __Vtemp3331[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x3fU)))
                                    ? 3U : 0U) : __Vtemp3327[4U]);
        }
        tracep->fullWData(oldp+1043,(__Vtemp3331),130);
        tracep->fullWData(oldp+1048,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp3333[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           << 1U);
        __Vtemp3333[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                            >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                         << 1U));
        __Vtemp3333[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                  << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                << 1U)));
        tracep->fullWData(oldp+1051,(__Vtemp3333),67);
        tracep->fullCData(oldp+1054,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+1055,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+1058,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+1063,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+1068,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        __Vtemp3335[0U] = 1U;
        __Vtemp3335[1U] = 0U;
        __Vtemp3335[2U] = 0U;
        __Vtemp3335[3U] = 0U;
        __Vtemp3335[4U] = 0U;
        __Vtemp3336[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3336[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3336[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3336[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3336[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3337, __Vtemp3335, __Vtemp3336);
        __Vtemp3338[0U] = __Vtemp3337[0U];
        __Vtemp3338[1U] = __Vtemp3337[1U];
        __Vtemp3338[2U] = __Vtemp3337[2U];
        __Vtemp3338[3U] = __Vtemp3337[3U];
        __Vtemp3338[4U] = (3U & __Vtemp3337[4U]);
        VL_EXTEND_WW(131,130, __Vtemp3339, __Vtemp3338);
        __Vtemp3341[0U] = 1U;
        __Vtemp3341[1U] = 0U;
        __Vtemp3341[2U] = 0U;
        __Vtemp3341[3U] = 0U;
        __Vtemp3341[4U] = 0U;
        __Vtemp3342[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3342[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3342[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3342[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3342[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3343, __Vtemp3341, __Vtemp3342);
        __Vtemp3344[0U] = __Vtemp3343[0U];
        __Vtemp3344[1U] = __Vtemp3343[1U];
        __Vtemp3344[2U] = __Vtemp3343[2U];
        __Vtemp3344[3U] = __Vtemp3343[3U];
        __Vtemp3344[4U] = (3U & __Vtemp3343[4U]);
        VL_EXTEND_WW(131,130, __Vtemp3345, __Vtemp3344);
        __Vtemp3347[0U] = 1U;
        __Vtemp3347[1U] = 0U;
        __Vtemp3347[2U] = 0U;
        __Vtemp3347[3U] = 0U;
        __Vtemp3347[4U] = 0U;
        __Vtemp3348[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3348[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3348[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3348[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3348[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3349, __Vtemp3347, __Vtemp3348);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp3357[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp3357[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp3357[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp3357[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp3357[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp3357[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                : 0U);
            __Vtemp3357[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                : 0U);
            __Vtemp3357[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                : 0U);
            __Vtemp3357[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                : 0U);
            __Vtemp3357[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp3358, __Vtemp3357);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp3366[0U] = __Vtemp3339[0U];
            __Vtemp3366[1U] = __Vtemp3339[1U];
            __Vtemp3366[2U] = __Vtemp3339[2U];
            __Vtemp3366[3U] = __Vtemp3339[3U];
            __Vtemp3366[4U] = __Vtemp3339[4U];
        } else {
            __Vtemp3366[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[0U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? (__Vtemp3349[0U] 
                                    << 1U) : ((3U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                  << 1U)
                                               : __Vtemp3358[0U])));
            __Vtemp3366[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[1U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3349[0U] 
                                     >> 0x1fU) | (__Vtemp3349[1U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                           << 1U)) : 
                                    __Vtemp3358[1U])));
            __Vtemp3366[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[2U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3349[1U] 
                                     >> 0x1fU) | (__Vtemp3349[2U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                           << 1U)) : 
                                    __Vtemp3358[2U])));
            __Vtemp3366[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[3U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3349[2U] 
                                     >> 0x1fU) | (__Vtemp3349[3U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                           << 1U)) : 
                                    __Vtemp3358[3U])));
            __Vtemp3366[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[4U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3349[3U] 
                                     >> 0x1fU) | (6U 
                                                  & (__Vtemp3349[4U] 
                                                     << 1U)))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                           << 1U)) : 
                                    __Vtemp3358[4U])));
        }
        tracep->fullWData(oldp+1069,(__Vtemp3366),131);
        tracep->fullCData(oldp+1074,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullBit(oldp+1075,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+1076,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        tracep->fullQData(oldp+1077,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        tracep->fullBit(oldp+1079,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 4U))));
        tracep->fullQData(oldp+1080,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+1082,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+1084,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullQData(oldp+1086,(((7U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                       : ((3U == (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                           : ((5U == 
                                               (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                               ? ((0xffffffffffffffe0ULL 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm)))))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                     : 0ULL))))))),64);
        tracep->fullBit(oldp+1088,((0x10U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+1089,((0x18U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+1090,((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullBit(oldp+1091,((8U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullBit(oldp+1092,(((0U == (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))) 
                                    | (8U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))))));
        tracep->fullCData(oldp+1093,(((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                       ? 0xbU : ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 3U
                                                  : 0U))),4);
        tracep->fullBit(oldp+1094,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+1095,(((0xffffffffffffff77ULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                      | (QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                     >> 7U)))
                                                          ? 0x88U
                                                          : 0x80U))))),64);
        tracep->fullCData(oldp+1097,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 7U))),5);
        tracep->fullCData(oldp+1098,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullCData(oldp+1099,(((0x33U == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                       ? 1U : ((0x13U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                ? 1U
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x7033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 0U
                                                         : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_438)))))))))),2);
        tracep->fullCData(oldp+1100,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
        tracep->fullCData(oldp+1101,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
        tracep->fullBit(oldp+1102,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
        tracep->fullBit(oldp+1103,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
        tracep->fullCData(oldp+1104,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullBit(oldp+1105,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+1106,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+1108,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+1110,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+1112,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+1114,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+1116,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+1118,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+1120,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+1122,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+1124,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                       : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+1126,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+1128,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+1130,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+1131,((0U == (0xffffU 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullBit(oldp+1132,((0x4000U == (0xffffU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullQData(oldp+1133,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                       ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                       : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+1135,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+1137,((((QData)((IData)(
                                                       ((((0x80U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 0x18U) 
                                                        | ((((0x40U 
                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x10U) 
                                                           | ((((0x20U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 8U) 
                                                              | ((0x10U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                  ? 0xffU
                                                                  : 0U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((4U 
                                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((2U 
                                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                              ? 0xffU
                                                                              : 0U)))))))),64);
        tracep->fullBit(oldp+1139,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+1140,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+1142,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+1143,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+1144,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+1145,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                         ? 0xffU : 0U) 
                                       << 0x18U) | 
                                      ((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                          ? 0xffU : 0U) 
                                        << 0x10U) | 
                                       ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                           ? 0xffU : 0U) 
                                         << 8U) | (
                                                   (1U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                    ? 0xffU
                                                    : 0U))))),32);
        tracep->fullIData(oldp+1146,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                         ? 0xffU : 0U) 
                                       << 0x18U) | 
                                      ((((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                          ? 0xffU : 0U) 
                                        << 0x10U) | 
                                       ((((0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                           ? 0xffU : 0U) 
                                         << 8U) | (
                                                   (0x10U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                    ? 0xffU
                                                    : 0U))))),32);
        tracep->fullWData(oldp+1147,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
        tracep->fullWData(oldp+1151,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
        tracep->fullWData(oldp+1155,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
        tracep->fullWData(oldp+1159,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
        tracep->fullWData(oldp+1163,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
        tracep->fullWData(oldp+1167,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
        tracep->fullWData(oldp+1171,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
        tracep->fullWData(oldp+1175,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
        tracep->fullWData(oldp+1179,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
        tracep->fullWData(oldp+1183,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
        tracep->fullWData(oldp+1187,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
        tracep->fullWData(oldp+1191,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
        tracep->fullWData(oldp+1195,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
        tracep->fullWData(oldp+1199,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
        tracep->fullWData(oldp+1203,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
        tracep->fullWData(oldp+1207,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
        tracep->fullWData(oldp+1211,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
        tracep->fullWData(oldp+1215,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
        tracep->fullWData(oldp+1219,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
        tracep->fullWData(oldp+1223,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
        tracep->fullWData(oldp+1227,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
        tracep->fullWData(oldp+1231,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
        tracep->fullWData(oldp+1235,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
        tracep->fullWData(oldp+1239,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
        tracep->fullWData(oldp+1243,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
        tracep->fullWData(oldp+1247,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
        tracep->fullWData(oldp+1251,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
        tracep->fullWData(oldp+1255,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
        tracep->fullWData(oldp+1259,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
        tracep->fullWData(oldp+1263,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
        tracep->fullWData(oldp+1267,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
        tracep->fullWData(oldp+1271,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
        tracep->fullWData(oldp+1275,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
        tracep->fullWData(oldp+1279,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
        tracep->fullWData(oldp+1283,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
        tracep->fullWData(oldp+1287,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
        tracep->fullWData(oldp+1291,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
        tracep->fullWData(oldp+1295,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
        tracep->fullWData(oldp+1299,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
        tracep->fullWData(oldp+1303,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
        tracep->fullWData(oldp+1307,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
        tracep->fullWData(oldp+1311,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
        tracep->fullWData(oldp+1315,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
        tracep->fullWData(oldp+1319,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
        tracep->fullWData(oldp+1323,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
        tracep->fullWData(oldp+1327,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
        tracep->fullWData(oldp+1331,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
        tracep->fullWData(oldp+1335,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
        tracep->fullWData(oldp+1339,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
        tracep->fullWData(oldp+1343,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
        tracep->fullWData(oldp+1347,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
        tracep->fullWData(oldp+1351,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
        tracep->fullWData(oldp+1355,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
        tracep->fullWData(oldp+1359,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
        tracep->fullWData(oldp+1363,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
        tracep->fullWData(oldp+1367,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
        tracep->fullWData(oldp+1371,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
        tracep->fullWData(oldp+1375,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
        tracep->fullWData(oldp+1379,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
        tracep->fullWData(oldp+1383,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
        tracep->fullWData(oldp+1387,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
        tracep->fullWData(oldp+1391,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
        tracep->fullWData(oldp+1395,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
        tracep->fullWData(oldp+1399,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
        tracep->fullWData(oldp+1403,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
        tracep->fullWData(oldp+1407,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
        tracep->fullWData(oldp+1411,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
        tracep->fullWData(oldp+1415,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
        tracep->fullWData(oldp+1419,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
        tracep->fullWData(oldp+1423,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
        tracep->fullWData(oldp+1427,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
        tracep->fullWData(oldp+1431,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
        tracep->fullWData(oldp+1435,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
        tracep->fullWData(oldp+1439,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
        tracep->fullWData(oldp+1443,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
        tracep->fullWData(oldp+1447,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
        tracep->fullWData(oldp+1451,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
        tracep->fullWData(oldp+1455,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
        tracep->fullWData(oldp+1459,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
        tracep->fullWData(oldp+1463,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
        tracep->fullWData(oldp+1467,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
        tracep->fullWData(oldp+1471,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
        tracep->fullWData(oldp+1475,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
        tracep->fullWData(oldp+1479,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
        tracep->fullWData(oldp+1483,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
        tracep->fullWData(oldp+1487,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
        tracep->fullWData(oldp+1491,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
        tracep->fullWData(oldp+1495,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
        tracep->fullWData(oldp+1499,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
        tracep->fullWData(oldp+1503,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
        tracep->fullWData(oldp+1507,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
        tracep->fullWData(oldp+1511,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
        tracep->fullWData(oldp+1515,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
        tracep->fullWData(oldp+1519,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
        tracep->fullWData(oldp+1523,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
        tracep->fullWData(oldp+1527,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
        tracep->fullWData(oldp+1531,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
        tracep->fullWData(oldp+1535,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
        tracep->fullWData(oldp+1539,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
        tracep->fullWData(oldp+1543,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
        tracep->fullWData(oldp+1547,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
        tracep->fullWData(oldp+1551,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
        tracep->fullWData(oldp+1555,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
        tracep->fullWData(oldp+1559,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
        tracep->fullWData(oldp+1563,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
        tracep->fullWData(oldp+1567,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
        tracep->fullWData(oldp+1571,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
        tracep->fullWData(oldp+1575,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
        tracep->fullWData(oldp+1579,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
        tracep->fullWData(oldp+1583,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
        tracep->fullWData(oldp+1587,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
        tracep->fullWData(oldp+1591,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
        tracep->fullWData(oldp+1595,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
        tracep->fullWData(oldp+1599,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
        tracep->fullWData(oldp+1603,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
        tracep->fullWData(oldp+1607,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
        tracep->fullWData(oldp+1611,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
        tracep->fullWData(oldp+1615,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
        tracep->fullWData(oldp+1619,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
        tracep->fullWData(oldp+1623,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
        tracep->fullWData(oldp+1627,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
        tracep->fullWData(oldp+1631,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
        tracep->fullWData(oldp+1635,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
        tracep->fullWData(oldp+1639,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
        tracep->fullWData(oldp+1643,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
        tracep->fullWData(oldp+1647,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
        tracep->fullWData(oldp+1651,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
        tracep->fullWData(oldp+1655,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
        tracep->fullWData(oldp+1659,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
        tracep->fullWData(oldp+1663,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
        tracep->fullWData(oldp+1667,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
        tracep->fullWData(oldp+1671,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
        tracep->fullWData(oldp+1675,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
        tracep->fullWData(oldp+1679,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
        tracep->fullWData(oldp+1683,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
        tracep->fullWData(oldp+1687,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
        tracep->fullWData(oldp+1691,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
        tracep->fullWData(oldp+1695,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
        tracep->fullWData(oldp+1699,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
        tracep->fullWData(oldp+1703,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
        tracep->fullWData(oldp+1707,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
        tracep->fullWData(oldp+1711,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
        tracep->fullWData(oldp+1715,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
        tracep->fullWData(oldp+1719,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
        tracep->fullWData(oldp+1723,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
        tracep->fullWData(oldp+1727,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
        tracep->fullWData(oldp+1731,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
        tracep->fullWData(oldp+1735,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
        tracep->fullWData(oldp+1739,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
        tracep->fullWData(oldp+1743,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
        tracep->fullWData(oldp+1747,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
        tracep->fullWData(oldp+1751,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
        tracep->fullWData(oldp+1755,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
        tracep->fullWData(oldp+1759,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
        tracep->fullWData(oldp+1763,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
        tracep->fullWData(oldp+1767,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
        tracep->fullWData(oldp+1771,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
        tracep->fullWData(oldp+1775,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
        tracep->fullWData(oldp+1779,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
        tracep->fullWData(oldp+1783,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
        tracep->fullWData(oldp+1787,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
        tracep->fullWData(oldp+1791,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
        tracep->fullWData(oldp+1795,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
        tracep->fullWData(oldp+1799,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
        tracep->fullWData(oldp+1803,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
        tracep->fullWData(oldp+1807,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
        tracep->fullWData(oldp+1811,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
        tracep->fullWData(oldp+1815,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
        tracep->fullWData(oldp+1819,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
        tracep->fullWData(oldp+1823,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
        tracep->fullWData(oldp+1827,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
        tracep->fullWData(oldp+1831,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
        tracep->fullWData(oldp+1835,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
        tracep->fullWData(oldp+1839,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
        tracep->fullWData(oldp+1843,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
        tracep->fullWData(oldp+1847,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
        tracep->fullWData(oldp+1851,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
        tracep->fullWData(oldp+1855,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
        tracep->fullWData(oldp+1859,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
        tracep->fullWData(oldp+1863,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
        tracep->fullWData(oldp+1867,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
        tracep->fullWData(oldp+1871,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
        tracep->fullWData(oldp+1875,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
        tracep->fullWData(oldp+1879,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
        tracep->fullWData(oldp+1883,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
        tracep->fullWData(oldp+1887,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
        tracep->fullWData(oldp+1891,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
        tracep->fullWData(oldp+1895,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
        tracep->fullWData(oldp+1899,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
        tracep->fullWData(oldp+1903,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
        tracep->fullWData(oldp+1907,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
        tracep->fullWData(oldp+1911,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
        tracep->fullWData(oldp+1915,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
        tracep->fullWData(oldp+1919,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
        tracep->fullWData(oldp+1923,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
        tracep->fullWData(oldp+1927,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
        tracep->fullWData(oldp+1931,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
        tracep->fullWData(oldp+1935,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
        tracep->fullWData(oldp+1939,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
        tracep->fullWData(oldp+1943,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
        tracep->fullWData(oldp+1947,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
        tracep->fullWData(oldp+1951,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
        tracep->fullWData(oldp+1955,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
        tracep->fullWData(oldp+1959,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
        tracep->fullWData(oldp+1963,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
        tracep->fullWData(oldp+1967,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
        tracep->fullWData(oldp+1971,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
        tracep->fullWData(oldp+1975,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
        tracep->fullWData(oldp+1979,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
        tracep->fullWData(oldp+1983,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
        tracep->fullWData(oldp+1987,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
        tracep->fullWData(oldp+1991,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
        tracep->fullWData(oldp+1995,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
        tracep->fullWData(oldp+1999,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
        tracep->fullWData(oldp+2003,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
        tracep->fullWData(oldp+2007,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
        tracep->fullWData(oldp+2011,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
        tracep->fullWData(oldp+2015,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
        tracep->fullWData(oldp+2019,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
        tracep->fullWData(oldp+2023,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
        tracep->fullWData(oldp+2027,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
        tracep->fullWData(oldp+2031,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
        tracep->fullWData(oldp+2035,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
        tracep->fullWData(oldp+2039,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
        tracep->fullWData(oldp+2043,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
        tracep->fullWData(oldp+2047,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
        tracep->fullWData(oldp+2051,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
        tracep->fullWData(oldp+2055,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
        tracep->fullWData(oldp+2059,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
        tracep->fullWData(oldp+2063,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
        tracep->fullWData(oldp+2067,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
        tracep->fullWData(oldp+2071,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
        tracep->fullWData(oldp+2075,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
        tracep->fullWData(oldp+2079,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
        tracep->fullWData(oldp+2083,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
        tracep->fullWData(oldp+2087,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
        tracep->fullWData(oldp+2091,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
        tracep->fullWData(oldp+2095,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
        tracep->fullWData(oldp+2099,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
        tracep->fullWData(oldp+2103,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
        tracep->fullWData(oldp+2107,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
        tracep->fullWData(oldp+2111,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
        tracep->fullWData(oldp+2115,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
        tracep->fullWData(oldp+2119,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
        tracep->fullWData(oldp+2123,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
        tracep->fullWData(oldp+2127,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
        tracep->fullWData(oldp+2131,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
        tracep->fullWData(oldp+2135,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
        tracep->fullWData(oldp+2139,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
        tracep->fullWData(oldp+2143,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
        tracep->fullWData(oldp+2147,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
        tracep->fullWData(oldp+2151,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
        tracep->fullWData(oldp+2155,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
        tracep->fullWData(oldp+2159,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
        tracep->fullWData(oldp+2163,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
        tracep->fullWData(oldp+2167,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
        tracep->fullWData(oldp+2171,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
        tracep->fullWData(oldp+2175,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
        tracep->fullWData(oldp+2179,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
        tracep->fullWData(oldp+2183,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
        tracep->fullWData(oldp+2187,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
        tracep->fullWData(oldp+2191,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
        tracep->fullWData(oldp+2195,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
        tracep->fullWData(oldp+2199,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
        tracep->fullWData(oldp+2203,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
        tracep->fullWData(oldp+2207,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
        tracep->fullWData(oldp+2211,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
        tracep->fullWData(oldp+2215,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
        tracep->fullWData(oldp+2219,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
        tracep->fullWData(oldp+2223,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
        tracep->fullWData(oldp+2227,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
        tracep->fullWData(oldp+2231,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
        tracep->fullWData(oldp+2235,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
        tracep->fullWData(oldp+2239,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
        tracep->fullWData(oldp+2243,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
        tracep->fullWData(oldp+2247,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
        tracep->fullWData(oldp+2251,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
        tracep->fullWData(oldp+2255,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
        tracep->fullWData(oldp+2259,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
        tracep->fullWData(oldp+2263,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
        tracep->fullWData(oldp+2267,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
        tracep->fullWData(oldp+2271,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
        tracep->fullWData(oldp+2275,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
        tracep->fullWData(oldp+2279,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
        tracep->fullWData(oldp+2283,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
        tracep->fullWData(oldp+2287,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
        tracep->fullWData(oldp+2291,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
        tracep->fullWData(oldp+2295,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
        tracep->fullWData(oldp+2299,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
        tracep->fullWData(oldp+2303,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
        tracep->fullWData(oldp+2307,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
        tracep->fullWData(oldp+2311,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
        tracep->fullWData(oldp+2315,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
        tracep->fullWData(oldp+2319,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
        tracep->fullWData(oldp+2323,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
        tracep->fullWData(oldp+2327,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
        tracep->fullWData(oldp+2331,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
        tracep->fullWData(oldp+2335,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
        tracep->fullWData(oldp+2339,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
        tracep->fullWData(oldp+2343,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
        tracep->fullWData(oldp+2347,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
        tracep->fullWData(oldp+2351,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
        tracep->fullWData(oldp+2355,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
        tracep->fullWData(oldp+2359,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
        tracep->fullWData(oldp+2363,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
        tracep->fullWData(oldp+2367,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
        tracep->fullWData(oldp+2371,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
        tracep->fullWData(oldp+2375,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
        tracep->fullWData(oldp+2379,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
        tracep->fullWData(oldp+2383,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
        tracep->fullWData(oldp+2387,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
        tracep->fullWData(oldp+2391,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
        tracep->fullWData(oldp+2395,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
        tracep->fullWData(oldp+2399,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
        tracep->fullWData(oldp+2403,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
        tracep->fullWData(oldp+2407,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
        tracep->fullWData(oldp+2411,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
        tracep->fullWData(oldp+2415,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
        tracep->fullWData(oldp+2419,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
        tracep->fullWData(oldp+2423,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
        tracep->fullWData(oldp+2427,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
        tracep->fullWData(oldp+2431,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
        tracep->fullWData(oldp+2435,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
        tracep->fullWData(oldp+2439,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
        tracep->fullWData(oldp+2443,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
        tracep->fullWData(oldp+2447,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
        tracep->fullWData(oldp+2451,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
        tracep->fullWData(oldp+2455,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
        tracep->fullWData(oldp+2459,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
        tracep->fullWData(oldp+2463,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
        tracep->fullWData(oldp+2467,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
        tracep->fullWData(oldp+2471,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
        tracep->fullWData(oldp+2475,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
        tracep->fullWData(oldp+2479,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
        tracep->fullWData(oldp+2483,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
        tracep->fullWData(oldp+2487,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
        tracep->fullWData(oldp+2491,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
        tracep->fullWData(oldp+2495,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
        tracep->fullWData(oldp+2499,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
        tracep->fullWData(oldp+2503,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
        tracep->fullWData(oldp+2507,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
        tracep->fullWData(oldp+2511,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
        tracep->fullWData(oldp+2515,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
        tracep->fullWData(oldp+2519,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
        tracep->fullWData(oldp+2523,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
        tracep->fullWData(oldp+2527,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
        tracep->fullWData(oldp+2531,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
        tracep->fullWData(oldp+2535,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
        tracep->fullWData(oldp+2539,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
        tracep->fullWData(oldp+2543,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
        tracep->fullWData(oldp+2547,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
        tracep->fullWData(oldp+2551,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
        tracep->fullWData(oldp+2555,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
        tracep->fullWData(oldp+2559,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
        tracep->fullWData(oldp+2563,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
        tracep->fullWData(oldp+2567,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
        tracep->fullWData(oldp+2571,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
        tracep->fullWData(oldp+2575,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
        tracep->fullWData(oldp+2579,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
        tracep->fullWData(oldp+2583,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
        tracep->fullWData(oldp+2587,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
        tracep->fullWData(oldp+2591,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
        tracep->fullWData(oldp+2595,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
        tracep->fullWData(oldp+2599,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
        tracep->fullWData(oldp+2603,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
        tracep->fullWData(oldp+2607,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
        tracep->fullWData(oldp+2611,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
        tracep->fullWData(oldp+2615,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
        tracep->fullWData(oldp+2619,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
        tracep->fullWData(oldp+2623,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
        tracep->fullWData(oldp+2627,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
        tracep->fullWData(oldp+2631,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
        tracep->fullWData(oldp+2635,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
        tracep->fullWData(oldp+2639,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
        tracep->fullWData(oldp+2643,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
        tracep->fullWData(oldp+2647,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
        tracep->fullWData(oldp+2651,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
        tracep->fullWData(oldp+2655,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
        tracep->fullWData(oldp+2659,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
        tracep->fullWData(oldp+2663,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
        tracep->fullWData(oldp+2667,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
        tracep->fullWData(oldp+2671,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
        tracep->fullWData(oldp+2675,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
        tracep->fullWData(oldp+2679,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
        tracep->fullWData(oldp+2683,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
        tracep->fullWData(oldp+2687,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
        tracep->fullWData(oldp+2691,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
        tracep->fullWData(oldp+2695,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
        tracep->fullWData(oldp+2699,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
        tracep->fullWData(oldp+2703,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
        tracep->fullWData(oldp+2707,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
        tracep->fullWData(oldp+2711,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
        tracep->fullWData(oldp+2715,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
        tracep->fullWData(oldp+2719,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
        tracep->fullWData(oldp+2723,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
        tracep->fullWData(oldp+2727,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
        tracep->fullWData(oldp+2731,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
        tracep->fullWData(oldp+2735,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
        tracep->fullWData(oldp+2739,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
        tracep->fullWData(oldp+2743,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
        tracep->fullWData(oldp+2747,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
        tracep->fullWData(oldp+2751,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
        tracep->fullWData(oldp+2755,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
        tracep->fullWData(oldp+2759,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
        tracep->fullWData(oldp+2763,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
        tracep->fullWData(oldp+2767,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
        tracep->fullWData(oldp+2771,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
        tracep->fullWData(oldp+2775,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
        tracep->fullWData(oldp+2779,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
        tracep->fullWData(oldp+2783,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
        tracep->fullWData(oldp+2787,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
        tracep->fullWData(oldp+2791,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
        tracep->fullWData(oldp+2795,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
        tracep->fullWData(oldp+2799,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
        tracep->fullWData(oldp+2803,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
        tracep->fullWData(oldp+2807,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
        tracep->fullWData(oldp+2811,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
        tracep->fullWData(oldp+2815,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
        tracep->fullWData(oldp+2819,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
        tracep->fullWData(oldp+2823,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
        tracep->fullWData(oldp+2827,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
        tracep->fullWData(oldp+2831,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
        tracep->fullWData(oldp+2835,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
        tracep->fullWData(oldp+2839,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
        tracep->fullWData(oldp+2843,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
        tracep->fullWData(oldp+2847,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
        tracep->fullWData(oldp+2851,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
        tracep->fullWData(oldp+2855,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
        tracep->fullWData(oldp+2859,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
        tracep->fullWData(oldp+2863,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
        tracep->fullWData(oldp+2867,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
        tracep->fullWData(oldp+2871,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
        tracep->fullWData(oldp+2875,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
        tracep->fullWData(oldp+2879,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
        tracep->fullWData(oldp+2883,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
        tracep->fullWData(oldp+2887,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
        tracep->fullWData(oldp+2891,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
        tracep->fullWData(oldp+2895,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
        tracep->fullWData(oldp+2899,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
        tracep->fullWData(oldp+2903,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
        tracep->fullWData(oldp+2907,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
        tracep->fullWData(oldp+2911,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
        tracep->fullWData(oldp+2915,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
        tracep->fullWData(oldp+2919,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
        tracep->fullWData(oldp+2923,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
        tracep->fullWData(oldp+2927,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
        tracep->fullWData(oldp+2931,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
        tracep->fullWData(oldp+2935,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
        tracep->fullWData(oldp+2939,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
        tracep->fullWData(oldp+2943,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
        tracep->fullWData(oldp+2947,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
        tracep->fullWData(oldp+2951,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
        tracep->fullWData(oldp+2955,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
        tracep->fullWData(oldp+2959,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
        tracep->fullWData(oldp+2963,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
        tracep->fullWData(oldp+2967,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
        tracep->fullWData(oldp+2971,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
        tracep->fullWData(oldp+2975,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
        tracep->fullWData(oldp+2979,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
        tracep->fullWData(oldp+2983,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
        tracep->fullWData(oldp+2987,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
        tracep->fullWData(oldp+2991,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
        tracep->fullWData(oldp+2995,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
        tracep->fullWData(oldp+2999,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
        tracep->fullWData(oldp+3003,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
        tracep->fullWData(oldp+3007,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
        tracep->fullWData(oldp+3011,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
        tracep->fullWData(oldp+3015,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
        tracep->fullWData(oldp+3019,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
        tracep->fullWData(oldp+3023,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
        tracep->fullWData(oldp+3027,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
        tracep->fullWData(oldp+3031,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
        tracep->fullWData(oldp+3035,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
        tracep->fullWData(oldp+3039,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
        tracep->fullWData(oldp+3043,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
        tracep->fullWData(oldp+3047,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
        tracep->fullWData(oldp+3051,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
        tracep->fullWData(oldp+3055,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
        tracep->fullWData(oldp+3059,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
        tracep->fullWData(oldp+3063,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
        tracep->fullWData(oldp+3067,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
        tracep->fullWData(oldp+3071,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
        tracep->fullWData(oldp+3075,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
        tracep->fullWData(oldp+3079,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
        tracep->fullWData(oldp+3083,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
        tracep->fullWData(oldp+3087,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
        tracep->fullWData(oldp+3091,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
        tracep->fullWData(oldp+3095,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
        tracep->fullWData(oldp+3099,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
        tracep->fullWData(oldp+3103,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
        tracep->fullWData(oldp+3107,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
        tracep->fullWData(oldp+3111,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
        tracep->fullWData(oldp+3115,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
        tracep->fullWData(oldp+3119,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
        tracep->fullWData(oldp+3123,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
        tracep->fullWData(oldp+3127,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
        tracep->fullWData(oldp+3131,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
        tracep->fullWData(oldp+3135,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
        tracep->fullWData(oldp+3139,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
        tracep->fullWData(oldp+3143,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
        tracep->fullWData(oldp+3147,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
        tracep->fullWData(oldp+3151,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
        tracep->fullWData(oldp+3155,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
        tracep->fullWData(oldp+3159,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
        tracep->fullWData(oldp+3163,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
        tracep->fullWData(oldp+3167,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
        tracep->fullWData(oldp+3171,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
        tracep->fullWData(oldp+3175,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
        tracep->fullWData(oldp+3179,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
        tracep->fullWData(oldp+3183,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
        tracep->fullWData(oldp+3187,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
        tracep->fullWData(oldp+3191,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
        tracep->fullBit(oldp+3195,(vlSelf->clock));
        tracep->fullBit(oldp+3196,(vlSelf->reset));
        tracep->fullQData(oldp+3197,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+3199,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+3201,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+3203,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+3205,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+3207,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+3209,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+3211,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+3213,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+3215,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+3217,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+3219,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+3221,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+3223,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+3225,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+3227,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+3229,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+3231,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+3233,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+3235,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+3237,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+3239,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+3241,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+3243,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+3245,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+3247,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+3249,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+3251,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+3253,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+3255,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+3257,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+3259,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+3261,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+3263,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+3264,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+3265,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+3267,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+3268,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+3270,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+3272,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+3274,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+3276,(vlSelf->io_difftest_peripheral));
        __Vtemp3367[0U] = 0U;
        __Vtemp3367[1U] = 0U;
        __Vtemp3367[2U] = 0U;
        __Vtemp3367[3U] = 0U;
        tracep->fullWData(oldp+3277,(__Vtemp3367),128);
        tracep->fullBit(oldp+3281,(1U));
        __Vtemp3368[0U] = 0xffffffffU;
        __Vtemp3368[1U] = 0xffffffffU;
        __Vtemp3368[2U] = 0xffffffffU;
        __Vtemp3368[3U] = 0xffffffffU;
        tracep->fullWData(oldp+3282,(__Vtemp3368),128);
    }
}
