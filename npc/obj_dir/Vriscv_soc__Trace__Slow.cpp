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
        tracep->declBit(c+3014,"clock", false,-1);
        tracep->declBit(c+3015,"reset", false,-1);
        tracep->declQuad(c+3016,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+3018,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+3020,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+3022,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+3024,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+3026,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+3028,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+3030,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+3032,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+3034,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+3036,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+3038,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+3040,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+3042,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+3044,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+3046,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+3048,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+3050,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+3052,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+3054,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+3056,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+3058,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+3060,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+3062,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+3064,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+3066,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+3068,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+3070,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+3072,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+3074,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+3076,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+3078,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+3080,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+3082,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+3083,"io_difftest_commit", false,-1);
        tracep->declQuad(c+3084,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3086,"io_difftest_irq", false,-1);
        tracep->declQuad(c+3087,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3089,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+3091,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+3093,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+3095,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+3014,"riscv_soc clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc reset", false,-1);
        tracep->declQuad(c+3016,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+3018,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+3020,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+3022,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+3024,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+3026,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+3028,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+3030,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+3032,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+3034,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+3036,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+3038,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+3040,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+3042,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+3044,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+3046,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+3048,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+3050,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+3052,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+3054,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+3056,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+3058,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+3060,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+3062,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+3064,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+3066,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+3068,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+3070,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+3072,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+3074,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+3076,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+3078,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+3080,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+3082,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+3083,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+3084,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3086,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+3087,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3089,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+3091,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+3093,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+3095,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+3014,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core_reset", false,-1);
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
        tracep->declQuad(c+3096,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+103,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+105,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+107,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+109,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+111,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+119,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+121,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+123,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+131,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+135,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+137,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+139,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+143,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+147,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+151,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc axi_ram_reset", false,-1);
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
        tracep->declBit(c+3014,"riscv_soc sram0_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram0_reset", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0_io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram0_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0_io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3014,"riscv_soc sram1_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram1_reset", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1_io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3014,"riscv_soc sram2_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram2_reset", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2_io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3014,"riscv_soc sram3_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram3_reset", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3_io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3014,"riscv_soc sram4_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram4_reset", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4_io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3014,"riscv_soc sram5_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram5_reset", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5_io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram5_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5_io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3014,"riscv_soc sram6_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram6_reset", false,-1);
        tracep->declBus(c+74,"riscv_soc sram6_io_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc sram6_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6_io_wdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc sram6_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3014,"riscv_soc sram7_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram7_reset", false,-1);
        tracep->declBus(c+80,"riscv_soc sram7_io_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc sram7_io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram7_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7_io_wdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc sram7_io_rdata", false,-1, 127,0);
        tracep->declBus(c+90,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+155,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core reset", false,-1);
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
        tracep->declQuad(c+153,"riscv_soc core inst_counter", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache_io_flush", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache_io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache_io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core i_cache_io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+163,"riscv_soc core i_cache_io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache_io_is_fence_i", false,-1);
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
        tracep->declBit(c+169,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+172,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+173,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+174,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+177,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+183,"riscv_soc core d_cache_io_cpu_ready", false,-1);
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
        tracep->declBit(c+184,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+185,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+188,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+191,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+192,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+193,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+194,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+196,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+197,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+169,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+172,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+173,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+184,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+185,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+188,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+193,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+194,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+196,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+198,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+201,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+3102,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core cross_bar_1_io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+204,"riscv_soc core cross_bar_1_io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+205,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+207,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+163,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+183,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+198,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+201,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+213,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+214,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+216,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch_reset", false,-1);
        tracep->declBit(c+217,"riscv_soc core fetch_io_br_info_valid", false,-1);
        tracep->declBit(c+218,"riscv_soc core fetch_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+219,"riscv_soc core fetch_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+221,"riscv_soc core fetch_io_br_info_taken", false,-1);
        tracep->declQuad(c+222,"riscv_soc core fetch_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+224,"riscv_soc core fetch_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+225,"riscv_soc core fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+227,"riscv_soc core fetch_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core fetch_io_flush", false,-1);
        tracep->declBit(c+202,"riscv_soc core fetch_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core fetch_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core fetch_io_cpu_data_ready", false,-1);
        tracep->declBit(c+204,"riscv_soc core fetch_io_cpu_data_valid", false,-1);
        tracep->declQuad(c+205,"riscv_soc core fetch_io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+207,"riscv_soc core fetch_io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+230,"riscv_soc core fetch_io_put_pc_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core fetch_io_put_pc_valid", false,-1);
        tracep->declBus(c+232,"riscv_soc core fetch_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+233,"riscv_soc core fetch_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+235,"riscv_soc core fetch_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+157,"riscv_soc core fetch_io_out_flush", false,-1);
        tracep->declBit(c+3014,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute_reset", false,-1);
        tracep->declBit(c+230,"riscv_soc core execute_io_op_datas_ready", false,-1);
        tracep->declBit(c+236,"riscv_soc core execute_io_op_datas_valid", false,-1);
        tracep->declBus(c+237,"riscv_soc core execute_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+238,"riscv_soc core execute_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+239,"riscv_soc core execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"riscv_soc core execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+242,"riscv_soc core execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"riscv_soc core execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core execute_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+246,"riscv_soc core execute_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_soc core execute_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_soc core execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+250,"riscv_soc core execute_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+251,"riscv_soc core execute_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+252,"riscv_soc core execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+253,"riscv_soc core execute_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+255,"riscv_soc core execute_io_irq_time_irq", false,-1);
        tracep->declBit(c+256,"riscv_soc core execute_io_irq_soft_irq", false,-1);
        tracep->declQuad(c+257,"riscv_soc core execute_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core execute_io_mie", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core execute_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core execute_io_mtvec", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core execute_io_wb_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core execute_io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"riscv_soc core execute_io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core execute_io_csr_valid", false,-1);
        tracep->declBus(c+270,"riscv_soc core execute_io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+271,"riscv_soc core execute_io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core execute_io_csr_except_is_except", false,-1);
        tracep->declBit(c+274,"riscv_soc core execute_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+275,"riscv_soc core execute_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+276,"riscv_soc core execute_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+277,"riscv_soc core execute_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+279,"riscv_soc core execute_io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+281,"riscv_soc core execute_io_commit", false,-1);
        tracep->declBus(c+282,"riscv_soc core execute_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+283,"riscv_soc core execute_io_difftest_peripheral", false,-1);
        tracep->declQuad(c+227,"riscv_soc core execute_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core execute_io_flush", false,-1);
        tracep->declBit(c+168,"riscv_soc core execute_io_fence_i", false,-1);
        tracep->declBit(c+217,"riscv_soc core execute_io_br_info_valid", false,-1);
        tracep->declBit(c+218,"riscv_soc core execute_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+219,"riscv_soc core execute_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+221,"riscv_soc core execute_io_br_info_taken", false,-1);
        tracep->declQuad(c+222,"riscv_soc core execute_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+224,"riscv_soc core execute_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+225,"riscv_soc core execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core execute_io_bus_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core execute_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core execute_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core execute_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core execute_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core execute_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core execute_io_bus_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core decode_reset", false,-1);
        tracep->declBit(c+230,"riscv_soc core decode_io_get_inst_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core decode_io_get_inst_valid", false,-1);
        tracep->declBus(c+232,"riscv_soc core decode_io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+233,"riscv_soc core decode_io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+235,"riscv_soc core decode_io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+284,"riscv_soc core decode_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"riscv_soc core decode_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+287,"riscv_soc core decode_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+288,"riscv_soc core decode_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+290,"riscv_soc core decode_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+291,"riscv_soc core decode_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+230,"riscv_soc core decode_io_op_datas_ready", false,-1);
        tracep->declBit(c+236,"riscv_soc core decode_io_op_datas_valid", false,-1);
        tracep->declBus(c+237,"riscv_soc core decode_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+238,"riscv_soc core decode_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+239,"riscv_soc core decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"riscv_soc core decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+242,"riscv_soc core decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"riscv_soc core decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core decode_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+246,"riscv_soc core decode_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_soc core decode_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_soc core decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+250,"riscv_soc core decode_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+251,"riscv_soc core decode_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+252,"riscv_soc core decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+253,"riscv_soc core decode_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core decode_io_flush", false,-1);
        tracep->declBit(c+3014,"riscv_soc core commit_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core commit_reset", false,-1);
        tracep->declBus(c+284,"riscv_soc core commit_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"riscv_soc core commit_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+287,"riscv_soc core commit_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+288,"riscv_soc core commit_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core commit_io_normal_wb_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core commit_io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"riscv_soc core commit_io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+290,"riscv_soc core commit_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+291,"riscv_soc core commit_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core commit_io_csr_wb_valid", false,-1);
        tracep->declBus(c+270,"riscv_soc core commit_io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+271,"riscv_soc core commit_io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core commit_io_csr_except_is_except", false,-1);
        tracep->declBit(c+274,"riscv_soc core commit_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+275,"riscv_soc core commit_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+276,"riscv_soc core commit_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+277,"riscv_soc core commit_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+279,"riscv_soc core commit_io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core commit_io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit_io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+281,"riscv_soc core commit_io_commit", false,-1);
        tracep->declBus(c+282,"riscv_soc core commit_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+283,"riscv_soc core commit_io_difftest_peripheral", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit_difftest_irq_0", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit_difftest_peripheral_0", false,-1);
        tracep->declBit(c+87,"riscv_soc core commit_difftest_commit_0", false,-1);
        tracep->declQuad(c+88,"riscv_soc core commit_difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+90,"riscv_soc core commit_difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+3096,"riscv_soc core commit__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core commit__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core commit__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core commit__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core commit__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core commit__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core commit__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+103,"riscv_soc core commit__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+105,"riscv_soc core commit__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+107,"riscv_soc core commit__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+109,"riscv_soc core commit__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+111,"riscv_soc core commit__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core commit__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core commit__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core commit__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+119,"riscv_soc core commit__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+121,"riscv_soc core commit__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+123,"riscv_soc core commit__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core commit__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core commit__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core commit__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+131,"riscv_soc core commit__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core commit__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+135,"riscv_soc core commit__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+137,"riscv_soc core commit__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+139,"riscv_soc core commit__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core commit__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+143,"riscv_soc core commit__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core commit__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+147,"riscv_soc core commit__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core commit__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+151,"riscv_soc core commit__WIRE_0_31", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core commit_inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+213,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+214,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+216,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+256,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+255,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+3014,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache io_flush", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core i_cache io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+163,"riscv_soc core i_cache io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core i_cache io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core i_cache io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache io_is_fence_i", false,-1);
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
        tracep->declBit(c+169,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+172,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+173,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core i_cache cache_stage0_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage0_reset", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage0_io_flush", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage0_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage0_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage0_io_addr_ready", false,-1);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage0_io_addr_valid", false,-1);
        tracep->declQuad(c+294,"riscv_soc core i_cache cache_stage0_io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core i_cache cache_stage1_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage1_reset", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage1_io_flush", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage1_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage1_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+294,"riscv_soc core i_cache cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+296,"riscv_soc core i_cache cache_stage1_io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+297,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+298,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage1_io_sram_valid", false,-1);
        tracep->declArray(c+300,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+304,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+308,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+312,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+316,"riscv_soc core i_cache cache_stage1_io_sram_ready", false,-1);
        tracep->declBit(c+317,"riscv_soc core i_cache cache_stage1_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+318,"riscv_soc core i_cache cache_stage1_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+319,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+321,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+297,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+322,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+324,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+298,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+325,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core i_cache cache_stage2_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage2_reset", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage2_io_flush", false,-1);
        tracep->declBit(c+317,"riscv_soc core i_cache cache_stage2_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+318,"riscv_soc core i_cache cache_stage2_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+319,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+321,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+297,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+322,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+324,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+298,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+325,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+172,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+173,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+327,"riscv_soc core i_cache cache_stage2_io_sram_w_valid", false,-1);
        tracep->declBus(c+328,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+329,"riscv_soc core i_cache cache_stage2_io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+162,"riscv_soc core i_cache cache_stage2_io_rdata_ready", false,-1);
        tracep->declBit(c+163,"riscv_soc core i_cache cache_stage2_io_rdata_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core i_cache cache_stage2_io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+330,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+332,"riscv_soc core i_cache reg_sram1_valid", false,-1, 63,0);
        tracep->declBit(c+334,"riscv_soc core i_cache is_w_sram", false,-1);
        tracep->declBit(c+335,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declBit(c+336,"riscv_soc core i_cache is_sram1_write", false,-1);
        tracep->declQuad(c+337,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declBit(c+339,"riscv_soc core i_cache reg_temp_sram0_valid", false,-1);
        tracep->declBit(c+340,"riscv_soc core i_cache reg_temp_sram1_valid", false,-1);
        tracep->declBus(c+341,"riscv_soc core i_cache reg_temp_r_index", false,-1, 5,0);
        tracep->declBit(c+342,"riscv_soc core i_cache w_r_pass0_val", false,-1);
        tracep->declBit(c+343,"riscv_soc core i_cache w_r_pass1_val", false,-1);
        tracep->declBit(c+316,"riscv_soc core i_cache reg_sram_r_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core i_cache cache_stage0 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage0 reset", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage0 io_flush", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage0 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage0 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache cache_stage0 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage0 io_addr_ready", false,-1);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage0 io_addr_valid", false,-1);
        tracep->declQuad(c+294,"riscv_soc core i_cache cache_stage0 io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage0 reg_valid", false,-1);
        tracep->declQuad(c+294,"riscv_soc core i_cache cache_stage0 reg_addr", false,-1, 63,0);
        tracep->declBit(c+344,"riscv_soc core i_cache cache_stage0 valid", false,-1);
        tracep->declBit(c+3014,"riscv_soc core i_cache cache_stage1 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage1 reset", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage1 io_flush", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage1 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage1 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+294,"riscv_soc core i_cache cache_stage1 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+296,"riscv_soc core i_cache cache_stage1 io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+297,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+298,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage1 io_sram_valid", false,-1);
        tracep->declArray(c+300,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+304,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+308,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+312,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+316,"riscv_soc core i_cache cache_stage1 io_sram_ready", false,-1);
        tracep->declBit(c+317,"riscv_soc core i_cache cache_stage1 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+318,"riscv_soc core i_cache cache_stage1 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+319,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+321,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+297,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+322,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+324,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+298,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+325,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+299,"riscv_soc core i_cache cache_stage1 valid", false,-1);
        tracep->declBit(c+345,"riscv_soc core i_cache cache_stage1 ready", false,-1);
        tracep->declQuad(c+319,"riscv_soc core i_cache cache_stage1 reg_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+346,"riscv_soc core i_cache cache_stage1 reg_valid", false,-1);
        tracep->declQuad(c+347,"riscv_soc core i_cache cache_stage1 reg_tag", false,-1, 53,0);
        tracep->declBus(c+349,"riscv_soc core i_cache cache_stage1 reg_index", false,-1, 5,0);
        tracep->declBus(c+350,"riscv_soc core i_cache cache_stage1 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+351,"riscv_soc core i_cache cache_stage1 tag_0", false,-1, 53,0);
        tracep->declQuad(c+353,"riscv_soc core i_cache cache_stage1 tag_1", false,-1, 53,0);
        tracep->declBit(c+3014,"riscv_soc core i_cache cache_stage2 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage2 reset", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage2 io_flush", false,-1);
        tracep->declBit(c+317,"riscv_soc core i_cache cache_stage2 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+318,"riscv_soc core i_cache cache_stage2 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+319,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+321,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+297,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+322,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+324,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+298,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+325,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+172,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+173,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+327,"riscv_soc core i_cache cache_stage2 io_sram_w_valid", false,-1);
        tracep->declBus(c+328,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+329,"riscv_soc core i_cache cache_stage2 io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+162,"riscv_soc core i_cache cache_stage2 io_rdata_ready", false,-1);
        tracep->declBit(c+163,"riscv_soc core i_cache cache_stage2 io_rdata_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core i_cache cache_stage2 io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2 io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBus(c+349,"riscv_soc core i_cache cache_stage2 index", false,-1, 5,0);
        tracep->declBit(c+355,"riscv_soc core i_cache cache_stage2 valid", false,-1);
        tracep->declBit(c+329,"riscv_soc core i_cache cache_stage2 reg_chosen_tag", false,-1);
        tracep->declQuad(c+164,"riscv_soc core i_cache cache_stage2 reg_rdata", false,-1, 63,0);
        tracep->declBit(c+163,"riscv_soc core i_cache cache_stage2 reg_valid", false,-1);
        tracep->declBit(c+356,"riscv_soc core i_cache cache_stage2 reg_ready", false,-1);
        tracep->declQuad(c+357,"riscv_soc core i_cache cache_stage2 temp_addr", false,-1, 63,0);
        tracep->declQuad(c+170,"riscv_soc core i_cache cache_stage2 reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core i_cache cache_stage2 reg_r_valid", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2 reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+327,"riscv_soc core i_cache cache_stage2 reg_cache_write", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2 reg_cpu_addr", false,-1, 63,0);
        tracep->declQuad(c+359,"riscv_soc core i_cache cache_stage2 reg_tag", false,-1, 53,0);
        tracep->declBus(c+361,"riscv_soc core i_cache cache_stage2 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+362,"riscv_soc core i_cache cache_stage2 reg_lru_1", false,-1, 63,0);
        tracep->declBit(c+364,"riscv_soc core i_cache cache_stage2 LRU_1", false,-1);
        tracep->declQuad(c+365,"riscv_soc core i_cache cache_stage2 chose_bit", false,-1, 63,0);
        tracep->declQuad(c+367,"riscv_soc core i_cache cache_stage2 neg_chose_bit", false,-1, 63,0);
        tracep->declBus(c+369,"riscv_soc core i_cache cache_stage2 reg_bus_state", false,-1, 1,0);
        tracep->declBit(c+3014,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+174,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+177,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+183,"riscv_soc core d_cache io_cpu_ready", false,-1);
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
        tracep->declBit(c+184,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+185,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+188,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+191,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+192,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+193,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+194,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+196,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+197,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+370,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+372,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+373,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+374,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+375,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+377,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+378,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+379,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+381,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+382,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+183,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+177,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+383,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+384,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+57,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+385,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+386,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+388,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+392,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+396,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+397,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+399,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+401,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+403,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+405,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+406,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+408,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+194,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+188,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+185,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+191,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+410,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+412,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+414,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+415,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+416,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+417,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+418,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+419,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+420,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+422,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+424,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+426,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+427,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+428,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+429,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+430,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+3014,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+169,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+172,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+173,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+184,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+185,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+188,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+193,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+194,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+196,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+198,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+201,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+3102,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+431,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+432,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+433,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+434,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+435,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+436,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+437,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+438,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+439,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core cross_bar_1 io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+204,"riscv_soc core cross_bar_1 io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+205,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+207,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+163,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+177,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+183,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+198,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+201,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+213,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+214,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+216,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+440,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+441,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+442,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+3014,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+217,"riscv_soc core fetch io_br_info_valid", false,-1);
        tracep->declBit(c+218,"riscv_soc core fetch io_br_info_mispredict", false,-1);
        tracep->declQuad(c+219,"riscv_soc core fetch io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+221,"riscv_soc core fetch io_br_info_taken", false,-1);
        tracep->declQuad(c+222,"riscv_soc core fetch io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+224,"riscv_soc core fetch io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+225,"riscv_soc core fetch io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+227,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+202,"riscv_soc core fetch io_cpu_addr_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core fetch io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core fetch io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core fetch io_cpu_data_ready", false,-1);
        tracep->declBit(c+204,"riscv_soc core fetch io_cpu_data_valid", false,-1);
        tracep->declQuad(c+205,"riscv_soc core fetch io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+207,"riscv_soc core fetch io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+230,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+232,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+233,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+235,"riscv_soc core fetch io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+157,"riscv_soc core fetch io_out_flush", false,-1);
        tracep->declBit(c+3014,"riscv_soc core fetch ibuf_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch ibuf_reset", false,-1);
        tracep->declBit(c+229,"riscv_soc core fetch ibuf_io_flush", false,-1);
        tracep->declBit(c+162,"riscv_soc core fetch ibuf_io_cache_buf_ready", false,-1);
        tracep->declBit(c+443,"riscv_soc core fetch ibuf_io_cache_buf_valid", false,-1);
        tracep->declQuad(c+207,"riscv_soc core fetch ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+444,"riscv_soc core fetch ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+445,"riscv_soc core fetch ibuf_io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+230,"riscv_soc core fetch ibuf_io_put_pc_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core fetch ibuf_io_put_pc_valid", false,-1);
        tracep->declBus(c+232,"riscv_soc core fetch ibuf_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+233,"riscv_soc core fetch ibuf_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+235,"riscv_soc core fetch ibuf_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+3014,"riscv_soc core fetch br_predictor_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch br_predictor_reset", false,-1);
        tracep->declBit(c+217,"riscv_soc core fetch br_predictor_io_br_info_valid", false,-1);
        tracep->declBit(c+218,"riscv_soc core fetch br_predictor_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+219,"riscv_soc core fetch br_predictor_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+221,"riscv_soc core fetch br_predictor_io_br_info_taken", false,-1);
        tracep->declQuad(c+222,"riscv_soc core fetch br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+160,"riscv_soc core fetch br_predictor_io_pc", false,-1, 63,0);
        tracep->declQuad(c+446,"riscv_soc core fetch br_predictor_io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+448,"riscv_soc core fetch br_predictor_io_pre_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declBit(c+449,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+450,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core fetch reg_bus_valid", false,-1);
        tracep->declBus(c+452,"riscv_soc core fetch pre_info_head", false,-1, 1,0);
        tracep->declBus(c+453,"riscv_soc core fetch pre_info_tail", false,-1, 1,0);
        tracep->declQuad(c+454,"riscv_soc core fetch pre_info_fifo_0", false,-1, 63,0);
        tracep->declQuad(c+456,"riscv_soc core fetch pre_info_fifo_1", false,-1, 63,0);
        tracep->declQuad(c+458,"riscv_soc core fetch pre_info_fifo_2", false,-1, 63,0);
        tracep->declQuad(c+460,"riscv_soc core fetch pre_info_fifo_3", false,-1, 63,0);
        tracep->declBit(c+462,"riscv_soc core fetch pre_enq", false,-1);
        tracep->declBus(c+463,"riscv_soc core fetch is_pre_head", false,-1, 1,0);
        tracep->declBus(c+464,"riscv_soc core fetch is_pre_tail", false,-1, 1,0);
        tracep->declBit(c+465,"riscv_soc core fetch is_pre_fifo_0", false,-1);
        tracep->declBit(c+466,"riscv_soc core fetch is_pre_fifo_1", false,-1);
        tracep->declBit(c+467,"riscv_soc core fetch is_pre_fifo_2", false,-1);
        tracep->declBit(c+468,"riscv_soc core fetch is_pre_fifo_3", false,-1);
        tracep->declBit(c+3014,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+229,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+162,"riscv_soc core fetch ibuf io_cache_buf_ready", false,-1);
        tracep->declBit(c+443,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+207,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+444,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+445,"riscv_soc core fetch ibuf io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+230,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+232,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+233,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+235,"riscv_soc core fetch ibuf io_put_pc_bits_is_pre", false,-1);
        tracep->declQuad(c+469,"riscv_soc core fetch ibuf ibuf_pc_0", false,-1, 63,0);
        tracep->declQuad(c+471,"riscv_soc core fetch ibuf ibuf_pc_1", false,-1, 63,0);
        tracep->declQuad(c+473,"riscv_soc core fetch ibuf ibuf_pc_2", false,-1, 63,0);
        tracep->declQuad(c+475,"riscv_soc core fetch ibuf ibuf_pc_3", false,-1, 63,0);
        tracep->declBus(c+477,"riscv_soc core fetch ibuf ibuf_inst_0", false,-1, 31,0);
        tracep->declBus(c+478,"riscv_soc core fetch ibuf ibuf_inst_1", false,-1, 31,0);
        tracep->declBus(c+479,"riscv_soc core fetch ibuf ibuf_inst_2", false,-1, 31,0);
        tracep->declBus(c+480,"riscv_soc core fetch ibuf ibuf_inst_3", false,-1, 31,0);
        tracep->declBit(c+481,"riscv_soc core fetch ibuf ibuf_is_pre_0", false,-1);
        tracep->declBit(c+482,"riscv_soc core fetch ibuf ibuf_is_pre_1", false,-1);
        tracep->declBit(c+483,"riscv_soc core fetch ibuf ibuf_is_pre_2", false,-1);
        tracep->declBit(c+484,"riscv_soc core fetch ibuf ibuf_is_pre_3", false,-1);
        tracep->declBit(c+485,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+486,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+487,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+488,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+489,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+490,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBus(c+491,"riscv_soc core fetch ibuf reg_ibuf_size", false,-1, 2,0);
        tracep->declBit(c+492,"riscv_soc core fetch ibuf enq_size", false,-1);
        tracep->declBit(c+493,"riscv_soc core fetch ibuf can_deq", false,-1);
        tracep->declBus(c+494,"riscv_soc core fetch ibuf result_size", false,-1, 2,0);
        tracep->declBit(c+3014,"riscv_soc core fetch br_predictor clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch br_predictor reset", false,-1);
        tracep->declBit(c+217,"riscv_soc core fetch br_predictor io_br_info_valid", false,-1);
        tracep->declBit(c+218,"riscv_soc core fetch br_predictor io_br_info_mispredict", false,-1);
        tracep->declQuad(c+219,"riscv_soc core fetch br_predictor io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+221,"riscv_soc core fetch br_predictor io_br_info_taken", false,-1);
        tracep->declQuad(c+222,"riscv_soc core fetch br_predictor io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+160,"riscv_soc core fetch br_predictor io_pc", false,-1, 63,0);
        tracep->declQuad(c+446,"riscv_soc core fetch br_predictor io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+448,"riscv_soc core fetch br_predictor io_pre_valid", false,-1);
        tracep->declBit(c+3102,"riscv_soc core fetch br_predictor BTB_btb_data_en", false,-1);
        tracep->declBus(c+495,"riscv_soc core fetch br_predictor BTB_btb_data_addr", false,-1, 5,0);
        tracep->declArray(c+496,"riscv_soc core fetch br_predictor BTB_btb_data_data", false,-1, 127,0);
        tracep->declArray(c+500,"riscv_soc core fetch br_predictor BTB_MPORT_data", false,-1, 127,0);
        tracep->declBus(c+504,"riscv_soc core fetch br_predictor BTB_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+3102,"riscv_soc core fetch br_predictor BTB_MPORT_mask", false,-1);
        tracep->declBit(c+505,"riscv_soc core fetch br_predictor BTB_MPORT_en", false,-1);
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+506+i*2,"riscv_soc core fetch br_predictor RAS", true,(i+0), 63,0);}}
        tracep->declBit(c+518,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_en", false,-1);
        tracep->declBus(c+519,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_addr", false,-1, 2,0);
        tracep->declQuad(c+520,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+160,"riscv_soc core fetch br_predictor RAS_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+519,"riscv_soc core fetch br_predictor RAS_MPORT_1_addr", false,-1, 2,0);
        tracep->declBit(c+3102,"riscv_soc core fetch br_predictor RAS_MPORT_1_mask", false,-1);
        tracep->declBit(c+522,"riscv_soc core fetch br_predictor RAS_MPORT_1_en", false,-1);
        tracep->declBus(c+523,"riscv_soc core fetch br_predictor PHT_0", false,-1, 1,0);
        tracep->declBus(c+524,"riscv_soc core fetch br_predictor PHT_1", false,-1, 1,0);
        tracep->declBus(c+525,"riscv_soc core fetch br_predictor PHT_2", false,-1, 1,0);
        tracep->declBus(c+526,"riscv_soc core fetch br_predictor PHT_3", false,-1, 1,0);
        tracep->declBus(c+527,"riscv_soc core fetch br_predictor PHT_4", false,-1, 1,0);
        tracep->declBus(c+528,"riscv_soc core fetch br_predictor PHT_5", false,-1, 1,0);
        tracep->declBus(c+529,"riscv_soc core fetch br_predictor PHT_6", false,-1, 1,0);
        tracep->declBus(c+530,"riscv_soc core fetch br_predictor PHT_7", false,-1, 1,0);
        tracep->declBus(c+531,"riscv_soc core fetch br_predictor PHT_8", false,-1, 1,0);
        tracep->declBus(c+532,"riscv_soc core fetch br_predictor PHT_9", false,-1, 1,0);
        tracep->declBus(c+533,"riscv_soc core fetch br_predictor PHT_10", false,-1, 1,0);
        tracep->declBus(c+534,"riscv_soc core fetch br_predictor PHT_11", false,-1, 1,0);
        tracep->declBus(c+535,"riscv_soc core fetch br_predictor PHT_12", false,-1, 1,0);
        tracep->declBus(c+536,"riscv_soc core fetch br_predictor PHT_13", false,-1, 1,0);
        tracep->declBus(c+537,"riscv_soc core fetch br_predictor PHT_14", false,-1, 1,0);
        tracep->declBus(c+538,"riscv_soc core fetch br_predictor PHT_15", false,-1, 1,0);
        tracep->declBus(c+539,"riscv_soc core fetch br_predictor PHT_16", false,-1, 1,0);
        tracep->declBus(c+540,"riscv_soc core fetch br_predictor PHT_17", false,-1, 1,0);
        tracep->declBus(c+541,"riscv_soc core fetch br_predictor PHT_18", false,-1, 1,0);
        tracep->declBus(c+542,"riscv_soc core fetch br_predictor PHT_19", false,-1, 1,0);
        tracep->declBus(c+543,"riscv_soc core fetch br_predictor PHT_20", false,-1, 1,0);
        tracep->declBus(c+544,"riscv_soc core fetch br_predictor PHT_21", false,-1, 1,0);
        tracep->declBus(c+545,"riscv_soc core fetch br_predictor PHT_22", false,-1, 1,0);
        tracep->declBus(c+546,"riscv_soc core fetch br_predictor PHT_23", false,-1, 1,0);
        tracep->declBus(c+547,"riscv_soc core fetch br_predictor PHT_24", false,-1, 1,0);
        tracep->declBus(c+548,"riscv_soc core fetch br_predictor PHT_25", false,-1, 1,0);
        tracep->declBus(c+549,"riscv_soc core fetch br_predictor PHT_26", false,-1, 1,0);
        tracep->declBus(c+550,"riscv_soc core fetch br_predictor PHT_27", false,-1, 1,0);
        tracep->declBus(c+551,"riscv_soc core fetch br_predictor PHT_28", false,-1, 1,0);
        tracep->declBus(c+552,"riscv_soc core fetch br_predictor PHT_29", false,-1, 1,0);
        tracep->declBus(c+553,"riscv_soc core fetch br_predictor PHT_30", false,-1, 1,0);
        tracep->declBus(c+554,"riscv_soc core fetch br_predictor PHT_31", false,-1, 1,0);
        tracep->declBus(c+555,"riscv_soc core fetch br_predictor PHT_32", false,-1, 1,0);
        tracep->declBus(c+556,"riscv_soc core fetch br_predictor PHT_33", false,-1, 1,0);
        tracep->declBus(c+557,"riscv_soc core fetch br_predictor PHT_34", false,-1, 1,0);
        tracep->declBus(c+558,"riscv_soc core fetch br_predictor PHT_35", false,-1, 1,0);
        tracep->declBus(c+559,"riscv_soc core fetch br_predictor PHT_36", false,-1, 1,0);
        tracep->declBus(c+560,"riscv_soc core fetch br_predictor PHT_37", false,-1, 1,0);
        tracep->declBus(c+561,"riscv_soc core fetch br_predictor PHT_38", false,-1, 1,0);
        tracep->declBus(c+562,"riscv_soc core fetch br_predictor PHT_39", false,-1, 1,0);
        tracep->declBus(c+563,"riscv_soc core fetch br_predictor PHT_40", false,-1, 1,0);
        tracep->declBus(c+564,"riscv_soc core fetch br_predictor PHT_41", false,-1, 1,0);
        tracep->declBus(c+565,"riscv_soc core fetch br_predictor PHT_42", false,-1, 1,0);
        tracep->declBus(c+566,"riscv_soc core fetch br_predictor PHT_43", false,-1, 1,0);
        tracep->declBus(c+567,"riscv_soc core fetch br_predictor PHT_44", false,-1, 1,0);
        tracep->declBus(c+568,"riscv_soc core fetch br_predictor PHT_45", false,-1, 1,0);
        tracep->declBus(c+569,"riscv_soc core fetch br_predictor PHT_46", false,-1, 1,0);
        tracep->declBus(c+570,"riscv_soc core fetch br_predictor PHT_47", false,-1, 1,0);
        tracep->declBus(c+571,"riscv_soc core fetch br_predictor PHT_48", false,-1, 1,0);
        tracep->declBus(c+572,"riscv_soc core fetch br_predictor PHT_49", false,-1, 1,0);
        tracep->declBus(c+573,"riscv_soc core fetch br_predictor PHT_50", false,-1, 1,0);
        tracep->declBus(c+574,"riscv_soc core fetch br_predictor PHT_51", false,-1, 1,0);
        tracep->declBus(c+575,"riscv_soc core fetch br_predictor PHT_52", false,-1, 1,0);
        tracep->declBus(c+576,"riscv_soc core fetch br_predictor PHT_53", false,-1, 1,0);
        tracep->declBus(c+577,"riscv_soc core fetch br_predictor PHT_54", false,-1, 1,0);
        tracep->declBus(c+578,"riscv_soc core fetch br_predictor PHT_55", false,-1, 1,0);
        tracep->declBus(c+579,"riscv_soc core fetch br_predictor PHT_56", false,-1, 1,0);
        tracep->declBus(c+580,"riscv_soc core fetch br_predictor PHT_57", false,-1, 1,0);
        tracep->declBus(c+581,"riscv_soc core fetch br_predictor PHT_58", false,-1, 1,0);
        tracep->declBus(c+582,"riscv_soc core fetch br_predictor PHT_59", false,-1, 1,0);
        tracep->declBus(c+583,"riscv_soc core fetch br_predictor PHT_60", false,-1, 1,0);
        tracep->declBus(c+584,"riscv_soc core fetch br_predictor PHT_61", false,-1, 1,0);
        tracep->declBus(c+585,"riscv_soc core fetch br_predictor PHT_62", false,-1, 1,0);
        tracep->declBus(c+586,"riscv_soc core fetch br_predictor PHT_63", false,-1, 1,0);
        tracep->declBus(c+519,"riscv_soc core fetch br_predictor reg_head", false,-1, 2,0);
        tracep->declBus(c+504,"riscv_soc core fetch br_predictor update_index", false,-1, 5,0);
        tracep->declArray(c+587,"riscv_soc core fetch br_predictor update_btb_data", false,-1, 122,0);
        tracep->declBus(c+495,"riscv_soc core fetch br_predictor index", false,-1, 5,0);
        tracep->declQuad(c+591,"riscv_soc core fetch br_predictor tag", false,-1, 55,0);
        tracep->declBit(c+593,"riscv_soc core fetch br_predictor pht_taken", false,-1);
        tracep->declBit(c+594,"riscv_soc core fetch br_predictor btb_valid", false,-1);
        tracep->declQuad(c+595,"riscv_soc core fetch br_predictor btb_tag", false,-1, 55,0);
        tracep->declQuad(c+597,"riscv_soc core fetch br_predictor btb_target_next_pc", false,-1, 63,0);
        tracep->declBus(c+599,"riscv_soc core fetch br_predictor btb_br_type", false,-1, 1,0);
        tracep->declBit(c+600,"riscv_soc core fetch br_predictor pre_valid", false,-1);
        tracep->declBit(c+3014,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+230,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+236,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+237,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+238,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+239,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+242,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+246,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_soc core execute io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+250,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+251,"riscv_soc core execute io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+252,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+253,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+255,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+256,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+257,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+270,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+271,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+274,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+275,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+276,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+277,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+279,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+281,"riscv_soc core execute io_commit", false,-1);
        tracep->declBus(c+282,"riscv_soc core execute io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+283,"riscv_soc core execute io_difftest_peripheral", false,-1);
        tracep->declQuad(c+227,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+168,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+217,"riscv_soc core execute io_br_info_valid", false,-1);
        tracep->declBit(c+218,"riscv_soc core execute io_br_info_mispredict", false,-1);
        tracep->declQuad(c+219,"riscv_soc core execute io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+221,"riscv_soc core execute io_br_info_taken", false,-1);
        tracep->declQuad(c+222,"riscv_soc core execute io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+224,"riscv_soc core execute io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+225,"riscv_soc core execute io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+601,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBit(c+251,"riscv_soc core execute alu_exu_io_is_pre", false,-1);
        tracep->declBit(c+602,"riscv_soc core execute alu_exu_io_br_info_valid", false,-1);
        tracep->declBit(c+603,"riscv_soc core execute alu_exu_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+604,"riscv_soc core execute alu_exu_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+606,"riscv_soc core execute alu_exu_io_br_info_taken", false,-1);
        tracep->declQuad(c+607,"riscv_soc core execute alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+224,"riscv_soc core execute alu_exu_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+225,"riscv_soc core execute alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+237,"riscv_soc core execute alu_exu_io_opType", false,-1, 2,0);
        tracep->declBus(c+238,"riscv_soc core execute alu_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+609,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+246,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+613,"riscv_soc core execute alu_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+615,"riscv_soc core execute alu_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+616,"riscv_soc core execute alu_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core execute mem_exu_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mem_exu_reset", false,-1);
        tracep->declBit(c+618,"riscv_soc core execute mem_exu_io_valid", false,-1);
        tracep->declBus(c+238,"riscv_soc core execute mem_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+619,"riscv_soc core execute mem_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+621,"riscv_soc core execute mem_exu_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core execute mem_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+623,"riscv_soc core execute mem_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+625,"riscv_soc core execute mem_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+626,"riscv_soc core execute mem_exu_io_ready", false,-1);
        tracep->declBit(c+209,"riscv_soc core execute mem_exu_io_bus_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core execute mem_exu_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core execute mem_exu_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core execute mem_exu_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core execute mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core execute mem_exu_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core execute mem_exu_io_bus_ready", false,-1);
        tracep->declBit(c+283,"riscv_soc core execute mem_exu_io_difftest_peripheral", false,-1);
        tracep->declBit(c+3014,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+627,"riscv_soc core execute mu_exu_io_valid", false,-1);
        tracep->declBus(c+238,"riscv_soc core execute mu_exu_io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+609,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+628,"riscv_soc core execute mu_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+630,"riscv_soc core execute mu_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+631,"riscv_soc core execute mu_exu_io_ready", false,-1);
        tracep->declBit(c+632,"riscv_soc core execute system_exu_io_valid", false,-1);
        tracep->declBus(c+238,"riscv_soc core execute system_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+633,"riscv_soc core execute system_exu_io_csr_data", false,-1, 63,0);
        tracep->declBus(c+252,"riscv_soc core execute system_exu_io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+245,"riscv_soc core execute system_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+619,"riscv_soc core execute system_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core execute system_exu_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute system_exu_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+633,"riscv_soc core execute system_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+635,"riscv_soc core execute system_exu_io_csr_is_w", false,-1);
        tracep->declQuad(c+636,"riscv_soc core execute system_exu_io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+638,"riscv_soc core execute system_exu_io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+639,"riscv_soc core execute system_exu_io_is_except", false,-1);
        tracep->declBus(c+640,"riscv_soc core execute system_exu_io_exception", false,-1, 5,0);
        tracep->declBit(c+641,"riscv_soc core execute system_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+261,"riscv_soc core execute system_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+642,"riscv_soc core execute in_data_valid", false,-1);
        tracep->declBit(c+230,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+643,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBit(c+644,"riscv_soc core execute reg_alu_valid", false,-1);
        tracep->declBit(c+645,"riscv_soc core execute reg_mem_valid", false,-1);
        tracep->declBit(c+646,"riscv_soc core execute reg_mu_valid", false,-1);
        tracep->declBit(c+647,"riscv_soc core execute reg_system_valid", false,-1);
        tracep->declBus(c+648,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+649,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+650,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBus(c+266,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+217,"riscv_soc core execute reg_br_valid", false,-1);
        tracep->declBit(c+218,"riscv_soc core execute reg_br_mispredict", false,-1);
        tracep->declQuad(c+219,"riscv_soc core execute reg_br_pc", false,-1, 63,0);
        tracep->declBit(c+221,"riscv_soc core execute reg_taken", false,-1);
        tracep->declQuad(c+222,"riscv_soc core execute reg_br_next_pc", false,-1, 63,0);
        tracep->declQuad(c+271,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+270,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBit(c+652,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+653,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+276,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+654,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+655,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+277,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+279,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declBit(c+656,"riscv_soc core execute time_irq", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute soft_irq", false,-1);
        tracep->declBit(c+658,"riscv_soc core execute irq", false,-1);
        tracep->declQuad(c+227,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+659,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+660,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+661,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBus(c+282,"riscv_soc core execute reg_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+601,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBit(c+251,"riscv_soc core execute alu_exu io_is_pre", false,-1);
        tracep->declBit(c+602,"riscv_soc core execute alu_exu io_br_info_valid", false,-1);
        tracep->declBit(c+603,"riscv_soc core execute alu_exu io_br_info_mispredict", false,-1);
        tracep->declQuad(c+604,"riscv_soc core execute alu_exu io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+606,"riscv_soc core execute alu_exu io_br_info_taken", false,-1);
        tracep->declQuad(c+607,"riscv_soc core execute alu_exu io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+224,"riscv_soc core execute alu_exu io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+225,"riscv_soc core execute alu_exu io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+237,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+238,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+609,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+246,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+613,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+615,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+616,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declBit(c+662,"riscv_soc core execute alu_exu is_32", false,-1);
        tracep->declQuad(c+663,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+665,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+667,"riscv_soc core execute alu_exu op_imm", false,-1, 63,0);
        tracep->declBit(c+669,"riscv_soc core execute alu_exu rs2_is_imm", false,-1);
        tracep->declQuad(c+670,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+672,"riscv_soc core execute alu_exu rs1_is_pc", false,-1);
        tracep->declBit(c+673,"riscv_soc core execute alu_exu is_sra", false,-1);
        tracep->declQuad(c+674,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+676,"riscv_soc core execute alu_exu temp_rs2_data", false,-1, 63,0);
        tracep->declArray(c+678,"riscv_soc core execute alu_exu add_sub_result", false,-1, 64,0);
        tracep->declBit(c+681,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+682,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+683,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+684,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declQuad(c+688,"riscv_soc core execute alu_exu srl_temp", false,-1, 63,0);
        tracep->declQuad(c+690,"riscv_soc core execute alu_exu sra_temp", false,-1, 63,0);
        tracep->declQuad(c+692,"riscv_soc core execute alu_exu sr_temp", false,-1, 63,0);
        tracep->declBus(c+694,"riscv_soc core execute alu_exu func", false,-1, 2,0);
        tracep->declQuad(c+695,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declBit(c+224,"riscv_soc core execute alu_exu is_pre", false,-1);
        tracep->declBit(c+697,"riscv_soc core execute alu_exu is_br", false,-1);
        tracep->declBit(c+698,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declQuad(c+699,"riscv_soc core execute alu_exu temp_1", false,-1, 63,0);
        tracep->declArray(c+701,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declQuad(c+704,"riscv_soc core execute alu_exu op_pc_4", false,-1, 63,0);
        tracep->declArray(c+706,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declQuad(c+709,"riscv_soc core execute alu_exu dst_data", false,-1, 63,0);
        tracep->declQuad(c+711,"riscv_soc core execute alu_exu next_pc", false,-1, 63,0);
        tracep->declBit(c+713,"riscv_soc core execute alu_exu valid_next_pc", false,-1);
        tracep->declBit(c+714,"riscv_soc core execute alu_exu br_valid", false,-1);
        tracep->declBit(c+715,"riscv_soc core execute alu_exu flush", false,-1);
        tracep->declBit(c+3014,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+618,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+238,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+619,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+621,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+623,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+625,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+626,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+209,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declBit(c+283,"riscv_soc core execute mem_exu io_difftest_peripheral", false,-1);
        tracep->declQuad(c+716,"riscv_soc core execute mem_exu imm", false,-1, 63,0);
        tracep->declBit(c+626,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+718,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+720,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+722,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+723,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+724,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+623,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+625,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBus(c+725,"riscv_soc core execute mem_exu reg_exuType", false,-1, 6,0);
        tracep->declBit(c+283,"riscv_soc core execute mem_exu reg_difftest_peripheral", false,-1);
        tracep->declQuad(c+726,"riscv_soc core execute mem_exu mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+728,"riscv_soc core execute mem_exu mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+730,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+732,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declQuad(c+733,"riscv_soc core execute mem_exu mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+735,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+736,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+740,"riscv_soc core execute mem_exu chose_chancel", false,-1);
        tracep->declBit(c+3014,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+627,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+238,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+609,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+628,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+630,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+631,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+741,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declQuad(c+609,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+742,"riscv_soc core execute mu_exu div_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+744,"riscv_soc core execute mu_exu div_io_dest_is_w", false,-1);
        tracep->declBit(c+745,"riscv_soc core execute mu_exu div_io_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+746,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declQuad(c+609,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+747,"riscv_soc core execute mu_exu mul_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+749,"riscv_soc core execute mu_exu mul_io_dest_is_w", false,-1);
        tracep->declBit(c+750,"riscv_soc core execute mu_exu mul_io_ready", false,-1);
        tracep->declBit(c+3014,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+741,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+609,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+742,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+744,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+745,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declBit(c+662,"riscv_soc core execute mu_exu div is_32", false,-1);
        tracep->declBit(c+751,"riscv_soc core execute mu_exu div is_signed", false,-1);
        tracep->declArray(c+752,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+755,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+758,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+761,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+764,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+767,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+770,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+773,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+776,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+777,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+778,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declArray(c+779,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+784,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+785,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+786,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+787,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declBit(c+744,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+745,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declBit(c+788,"riscv_soc core execute mu_exu div reg_is_32", false,-1);
        tracep->declBit(c+789,"riscv_soc core execute mu_exu div reg_is_rem", false,-1);
        tracep->declQuad(c+790,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+792,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+746,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+609,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+747,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+749,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+750,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+794,"riscv_soc core execute mu_exu mul is_32", false,-1);
        tracep->declBit(c+795,"riscv_soc core execute mu_exu mul is_rs1_signed", false,-1);
        tracep->declBit(c+662,"riscv_soc core execute mu_exu mul is_rs2_signed", false,-1);
        tracep->declArray(c+796,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+801,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+804,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+750,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+807,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+808,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+811,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+816,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+821,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+749,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declArray(c+822,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBus(c+827,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declBit(c+828,"riscv_soc core execute mu_exu mul reg_not_h", false,-1);
        tracep->declBit(c+829,"riscv_soc core execute mu_exu mul reg_is_32", false,-1);
        tracep->declBit(c+632,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+238,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+633,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+252,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+245,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+619,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+633,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+635,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+636,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+638,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+639,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+640,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+641,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+261,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+667,"riscv_soc core execute system_exu imm", false,-1, 63,0);
        tracep->declBit(c+830,"riscv_soc core execute system_exu is_imm", false,-1);
        tracep->declQuad(c+831,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+833,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+835,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declQuad(c+837,"riscv_soc core execute system_exu temp_csr_result_data", false,-1, 63,0);
        tracep->declBit(c+839,"riscv_soc core execute system_exu is_mret", false,-1);
        tracep->declBit(c+840,"riscv_soc core execute system_exu is_sret", false,-1);
        tracep->declBit(c+841,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+842,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+843,"riscv_soc core execute system_exu is_except", false,-1);
        tracep->declBus(c+844,"riscv_soc core execute system_exu exception", false,-1, 3,0);
        tracep->declBit(c+845,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declQuad(c+846,"riscv_soc core execute system_exu result_status", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+230,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+232,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+233,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+235,"riscv_soc core decode io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+284,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+287,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+288,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+290,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+291,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+230,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+236,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+237,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+238,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+239,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+242,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+246,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_soc core decode io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+250,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+251,"riscv_soc core decode io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+252,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+253,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+236,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+237,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+238,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+239,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+240,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+242,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+245,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+246,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+250,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+252,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+253,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core decode reg_is_pre", false,-1);
        tracep->declBus(c+287,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+284,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+290,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBus(c+848,"riscv_soc core decode dest_addr", false,-1, 4,0);
        tracep->declBus(c+849,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBit(c+850,"riscv_soc core decode dest_is_reg", false,-1);
        tracep->declBit(c+851,"riscv_soc core decode rs1_is_reg", false,-1);
        tracep->declBit(c+852,"riscv_soc core decode rs2_is_reg", false,-1);
        tracep->declBit(c+3014,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+284,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+287,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+288,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+290,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+291,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+270,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+271,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+274,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+275,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+276,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+277,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+279,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+281,"riscv_soc core commit io_commit", false,-1);
        tracep->declBus(c+282,"riscv_soc core commit io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+283,"riscv_soc core commit io_difftest_peripheral", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit difftest_irq_0", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit difftest_peripheral_0", false,-1);
        tracep->declBit(c+87,"riscv_soc core commit difftest_commit_0", false,-1);
        tracep->declQuad(c+88,"riscv_soc core commit difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+90,"riscv_soc core commit difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+153,"riscv_soc core commit inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core commit csr_reg_clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core commit csr_reg_reset", false,-1);
        tracep->declBus(c+270,"riscv_soc core commit csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+271,"riscv_soc core commit csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core commit csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+279,"riscv_soc core commit csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+277,"riscv_soc core commit csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+274,"riscv_soc core commit csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+275,"riscv_soc core commit csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+853,"riscv_soc core commit csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+273,"riscv_soc core commit csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+281,"riscv_soc core commit csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+290,"riscv_soc core commit csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+291,"riscv_soc core commit csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core commit csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit csr_reg_io_r_csr_mie", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+854+i*2,"riscv_soc core commit regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+3102,"riscv_soc core commit regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+284,"riscv_soc core commit regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+918,"riscv_soc core commit regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+287,"riscv_soc core commit regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+920,"riscv_soc core commit regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+3103,"riscv_soc core commit regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+922,"riscv_soc core commit regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_2_en", false,-1);
        tracep->declBus(c+3104,"riscv_soc core commit regfile_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+91,"riscv_soc core commit regfile_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_3_en", false,-1);
        tracep->declBus(c+3105,"riscv_soc core commit regfile_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+93,"riscv_soc core commit regfile_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+3106,"riscv_soc core commit regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+95,"riscv_soc core commit regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_5_en", false,-1);
        tracep->declBus(c+3107,"riscv_soc core commit regfile_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+97,"riscv_soc core commit regfile_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_6_en", false,-1);
        tracep->declBus(c+3108,"riscv_soc core commit regfile_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"riscv_soc core commit regfile_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_7_en", false,-1);
        tracep->declBus(c+3109,"riscv_soc core commit regfile_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"riscv_soc core commit regfile_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_8_en", false,-1);
        tracep->declBus(c+3110,"riscv_soc core commit regfile_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+103,"riscv_soc core commit regfile_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_9_en", false,-1);
        tracep->declBus(c+3111,"riscv_soc core commit regfile_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+105,"riscv_soc core commit regfile_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_10_en", false,-1);
        tracep->declBus(c+3112,"riscv_soc core commit regfile_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"riscv_soc core commit regfile_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_11_en", false,-1);
        tracep->declBus(c+3113,"riscv_soc core commit regfile_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+109,"riscv_soc core commit regfile_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_12_en", false,-1);
        tracep->declBus(c+3114,"riscv_soc core commit regfile_MPORT_12_addr", false,-1, 4,0);
        tracep->declQuad(c+111,"riscv_soc core commit regfile_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_13_en", false,-1);
        tracep->declBus(c+3115,"riscv_soc core commit regfile_MPORT_13_addr", false,-1, 4,0);
        tracep->declQuad(c+113,"riscv_soc core commit regfile_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_14_en", false,-1);
        tracep->declBus(c+3116,"riscv_soc core commit regfile_MPORT_14_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"riscv_soc core commit regfile_MPORT_14_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_15_en", false,-1);
        tracep->declBus(c+3117,"riscv_soc core commit regfile_MPORT_15_addr", false,-1, 4,0);
        tracep->declQuad(c+117,"riscv_soc core commit regfile_MPORT_15_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_16_en", false,-1);
        tracep->declBus(c+3118,"riscv_soc core commit regfile_MPORT_16_addr", false,-1, 4,0);
        tracep->declQuad(c+119,"riscv_soc core commit regfile_MPORT_16_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_17_en", false,-1);
        tracep->declBus(c+3119,"riscv_soc core commit regfile_MPORT_17_addr", false,-1, 4,0);
        tracep->declQuad(c+121,"riscv_soc core commit regfile_MPORT_17_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_18_en", false,-1);
        tracep->declBus(c+3120,"riscv_soc core commit regfile_MPORT_18_addr", false,-1, 4,0);
        tracep->declQuad(c+123,"riscv_soc core commit regfile_MPORT_18_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_19_en", false,-1);
        tracep->declBus(c+3121,"riscv_soc core commit regfile_MPORT_19_addr", false,-1, 4,0);
        tracep->declQuad(c+125,"riscv_soc core commit regfile_MPORT_19_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_20_en", false,-1);
        tracep->declBus(c+3122,"riscv_soc core commit regfile_MPORT_20_addr", false,-1, 4,0);
        tracep->declQuad(c+127,"riscv_soc core commit regfile_MPORT_20_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_21_en", false,-1);
        tracep->declBus(c+3123,"riscv_soc core commit regfile_MPORT_21_addr", false,-1, 4,0);
        tracep->declQuad(c+129,"riscv_soc core commit regfile_MPORT_21_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_22_en", false,-1);
        tracep->declBus(c+3124,"riscv_soc core commit regfile_MPORT_22_addr", false,-1, 4,0);
        tracep->declQuad(c+131,"riscv_soc core commit regfile_MPORT_22_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_23_en", false,-1);
        tracep->declBus(c+3125,"riscv_soc core commit regfile_MPORT_23_addr", false,-1, 4,0);
        tracep->declQuad(c+133,"riscv_soc core commit regfile_MPORT_23_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_24_en", false,-1);
        tracep->declBus(c+3126,"riscv_soc core commit regfile_MPORT_24_addr", false,-1, 4,0);
        tracep->declQuad(c+135,"riscv_soc core commit regfile_MPORT_24_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_25_en", false,-1);
        tracep->declBus(c+3127,"riscv_soc core commit regfile_MPORT_25_addr", false,-1, 4,0);
        tracep->declQuad(c+137,"riscv_soc core commit regfile_MPORT_25_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_26_en", false,-1);
        tracep->declBus(c+3128,"riscv_soc core commit regfile_MPORT_26_addr", false,-1, 4,0);
        tracep->declQuad(c+139,"riscv_soc core commit regfile_MPORT_26_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_27_en", false,-1);
        tracep->declBus(c+3129,"riscv_soc core commit regfile_MPORT_27_addr", false,-1, 4,0);
        tracep->declQuad(c+141,"riscv_soc core commit regfile_MPORT_27_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_28_en", false,-1);
        tracep->declBus(c+3130,"riscv_soc core commit regfile_MPORT_28_addr", false,-1, 4,0);
        tracep->declQuad(c+143,"riscv_soc core commit regfile_MPORT_28_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_29_en", false,-1);
        tracep->declBus(c+3131,"riscv_soc core commit regfile_MPORT_29_addr", false,-1, 4,0);
        tracep->declQuad(c+145,"riscv_soc core commit regfile_MPORT_29_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_30_en", false,-1);
        tracep->declBus(c+3132,"riscv_soc core commit regfile_MPORT_30_addr", false,-1, 4,0);
        tracep->declQuad(c+147,"riscv_soc core commit regfile_MPORT_30_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_31_en", false,-1);
        tracep->declBus(c+3133,"riscv_soc core commit regfile_MPORT_31_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"riscv_soc core commit regfile_MPORT_31_data", false,-1, 63,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_32_en", false,-1);
        tracep->declBus(c+3134,"riscv_soc core commit regfile_MPORT_32_addr", false,-1, 4,0);
        tracep->declQuad(c+151,"riscv_soc core commit regfile_MPORT_32_data", false,-1, 63,0);
        tracep->declQuad(c+267,"riscv_soc core commit regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+266,"riscv_soc core commit regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+3102,"riscv_soc core commit regfile_MPORT_mask", false,-1);
        tracep->declBit(c+265,"riscv_soc core commit regfile_MPORT_en", false,-1);
        tracep->declBit(c+87,"riscv_soc core commit difftest_commit", false,-1);
        tracep->declBus(c+90,"riscv_soc core commit difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+88,"riscv_soc core commit difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core commit inst_counter", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core commit difftest_irq", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit difftest_peripheral", false,-1);
        tracep->declBit(c+3014,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+270,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+271,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+279,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+277,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+274,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+275,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+853,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+273,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+281,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+290,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+291,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+261,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+924,"riscv_soc core commit csr_reg irq", false,-1);
        tracep->declQuad(c+925,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+927,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+929,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+931,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+933,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+935,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+937,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+939,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+941,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+943,"riscv_soc core commit csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+3014,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+213,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+175,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+179,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+214,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+216,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+256,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+255,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+256,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+945,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+947,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+216,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+214,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+949,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+950,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+951,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+3014,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc axi_ram reset", false,-1);
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
        tracep->declBit(c+3014,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+952,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+954,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+956,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+958,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+959,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+961,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+962,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+954,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+963,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+964,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+965,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+3014,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+952,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+954,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+956,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+958,"riscv_soc axi_ram mem wen", false,-1);
        tracep->declBit(c+3014,"riscv_soc sram0 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram0 reset", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0 io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram0 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0 io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0 io_rdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0 Q", false,-1, 127,0);
        tracep->declArray(c+966,"riscv_soc sram0 sram_0", false,-1, 127,0);
        tracep->declArray(c+970,"riscv_soc sram0 sram_1", false,-1, 127,0);
        tracep->declArray(c+974,"riscv_soc sram0 sram_2", false,-1, 127,0);
        tracep->declArray(c+978,"riscv_soc sram0 sram_3", false,-1, 127,0);
        tracep->declArray(c+982,"riscv_soc sram0 sram_4", false,-1, 127,0);
        tracep->declArray(c+986,"riscv_soc sram0 sram_5", false,-1, 127,0);
        tracep->declArray(c+990,"riscv_soc sram0 sram_6", false,-1, 127,0);
        tracep->declArray(c+994,"riscv_soc sram0 sram_7", false,-1, 127,0);
        tracep->declArray(c+998,"riscv_soc sram0 sram_8", false,-1, 127,0);
        tracep->declArray(c+1002,"riscv_soc sram0 sram_9", false,-1, 127,0);
        tracep->declArray(c+1006,"riscv_soc sram0 sram_10", false,-1, 127,0);
        tracep->declArray(c+1010,"riscv_soc sram0 sram_11", false,-1, 127,0);
        tracep->declArray(c+1014,"riscv_soc sram0 sram_12", false,-1, 127,0);
        tracep->declArray(c+1018,"riscv_soc sram0 sram_13", false,-1, 127,0);
        tracep->declArray(c+1022,"riscv_soc sram0 sram_14", false,-1, 127,0);
        tracep->declArray(c+1026,"riscv_soc sram0 sram_15", false,-1, 127,0);
        tracep->declArray(c+1030,"riscv_soc sram0 sram_16", false,-1, 127,0);
        tracep->declArray(c+1034,"riscv_soc sram0 sram_17", false,-1, 127,0);
        tracep->declArray(c+1038,"riscv_soc sram0 sram_18", false,-1, 127,0);
        tracep->declArray(c+1042,"riscv_soc sram0 sram_19", false,-1, 127,0);
        tracep->declArray(c+1046,"riscv_soc sram0 sram_20", false,-1, 127,0);
        tracep->declArray(c+1050,"riscv_soc sram0 sram_21", false,-1, 127,0);
        tracep->declArray(c+1054,"riscv_soc sram0 sram_22", false,-1, 127,0);
        tracep->declArray(c+1058,"riscv_soc sram0 sram_23", false,-1, 127,0);
        tracep->declArray(c+1062,"riscv_soc sram0 sram_24", false,-1, 127,0);
        tracep->declArray(c+1066,"riscv_soc sram0 sram_25", false,-1, 127,0);
        tracep->declArray(c+1070,"riscv_soc sram0 sram_26", false,-1, 127,0);
        tracep->declArray(c+1074,"riscv_soc sram0 sram_27", false,-1, 127,0);
        tracep->declArray(c+1078,"riscv_soc sram0 sram_28", false,-1, 127,0);
        tracep->declArray(c+1082,"riscv_soc sram0 sram_29", false,-1, 127,0);
        tracep->declArray(c+1086,"riscv_soc sram0 sram_30", false,-1, 127,0);
        tracep->declArray(c+1090,"riscv_soc sram0 sram_31", false,-1, 127,0);
        tracep->declArray(c+1094,"riscv_soc sram0 sram_32", false,-1, 127,0);
        tracep->declArray(c+1098,"riscv_soc sram0 sram_33", false,-1, 127,0);
        tracep->declArray(c+1102,"riscv_soc sram0 sram_34", false,-1, 127,0);
        tracep->declArray(c+1106,"riscv_soc sram0 sram_35", false,-1, 127,0);
        tracep->declArray(c+1110,"riscv_soc sram0 sram_36", false,-1, 127,0);
        tracep->declArray(c+1114,"riscv_soc sram0 sram_37", false,-1, 127,0);
        tracep->declArray(c+1118,"riscv_soc sram0 sram_38", false,-1, 127,0);
        tracep->declArray(c+1122,"riscv_soc sram0 sram_39", false,-1, 127,0);
        tracep->declArray(c+1126,"riscv_soc sram0 sram_40", false,-1, 127,0);
        tracep->declArray(c+1130,"riscv_soc sram0 sram_41", false,-1, 127,0);
        tracep->declArray(c+1134,"riscv_soc sram0 sram_42", false,-1, 127,0);
        tracep->declArray(c+1138,"riscv_soc sram0 sram_43", false,-1, 127,0);
        tracep->declArray(c+1142,"riscv_soc sram0 sram_44", false,-1, 127,0);
        tracep->declArray(c+1146,"riscv_soc sram0 sram_45", false,-1, 127,0);
        tracep->declArray(c+1150,"riscv_soc sram0 sram_46", false,-1, 127,0);
        tracep->declArray(c+1154,"riscv_soc sram0 sram_47", false,-1, 127,0);
        tracep->declArray(c+1158,"riscv_soc sram0 sram_48", false,-1, 127,0);
        tracep->declArray(c+1162,"riscv_soc sram0 sram_49", false,-1, 127,0);
        tracep->declArray(c+1166,"riscv_soc sram0 sram_50", false,-1, 127,0);
        tracep->declArray(c+1170,"riscv_soc sram0 sram_51", false,-1, 127,0);
        tracep->declArray(c+1174,"riscv_soc sram0 sram_52", false,-1, 127,0);
        tracep->declArray(c+1178,"riscv_soc sram0 sram_53", false,-1, 127,0);
        tracep->declArray(c+1182,"riscv_soc sram0 sram_54", false,-1, 127,0);
        tracep->declArray(c+1186,"riscv_soc sram0 sram_55", false,-1, 127,0);
        tracep->declArray(c+1190,"riscv_soc sram0 sram_56", false,-1, 127,0);
        tracep->declArray(c+1194,"riscv_soc sram0 sram_57", false,-1, 127,0);
        tracep->declArray(c+1198,"riscv_soc sram0 sram_58", false,-1, 127,0);
        tracep->declArray(c+1202,"riscv_soc sram0 sram_59", false,-1, 127,0);
        tracep->declArray(c+1206,"riscv_soc sram0 sram_60", false,-1, 127,0);
        tracep->declArray(c+1210,"riscv_soc sram0 sram_61", false,-1, 127,0);
        tracep->declArray(c+1214,"riscv_soc sram0 sram_62", false,-1, 127,0);
        tracep->declArray(c+1218,"riscv_soc sram0 sram_63", false,-1, 127,0);
        tracep->declArray(c+3135,"riscv_soc sram0 bwen", false,-1, 127,0);
        tracep->declBit(c+335,"riscv_soc sram0 wen", false,-1);
        tracep->declBit(c+3014,"riscv_soc sram1 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram1 reset", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1 io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1 io_rdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1 Q", false,-1, 127,0);
        tracep->declArray(c+1222,"riscv_soc sram1 sram_0", false,-1, 127,0);
        tracep->declArray(c+1226,"riscv_soc sram1 sram_1", false,-1, 127,0);
        tracep->declArray(c+1230,"riscv_soc sram1 sram_2", false,-1, 127,0);
        tracep->declArray(c+1234,"riscv_soc sram1 sram_3", false,-1, 127,0);
        tracep->declArray(c+1238,"riscv_soc sram1 sram_4", false,-1, 127,0);
        tracep->declArray(c+1242,"riscv_soc sram1 sram_5", false,-1, 127,0);
        tracep->declArray(c+1246,"riscv_soc sram1 sram_6", false,-1, 127,0);
        tracep->declArray(c+1250,"riscv_soc sram1 sram_7", false,-1, 127,0);
        tracep->declArray(c+1254,"riscv_soc sram1 sram_8", false,-1, 127,0);
        tracep->declArray(c+1258,"riscv_soc sram1 sram_9", false,-1, 127,0);
        tracep->declArray(c+1262,"riscv_soc sram1 sram_10", false,-1, 127,0);
        tracep->declArray(c+1266,"riscv_soc sram1 sram_11", false,-1, 127,0);
        tracep->declArray(c+1270,"riscv_soc sram1 sram_12", false,-1, 127,0);
        tracep->declArray(c+1274,"riscv_soc sram1 sram_13", false,-1, 127,0);
        tracep->declArray(c+1278,"riscv_soc sram1 sram_14", false,-1, 127,0);
        tracep->declArray(c+1282,"riscv_soc sram1 sram_15", false,-1, 127,0);
        tracep->declArray(c+1286,"riscv_soc sram1 sram_16", false,-1, 127,0);
        tracep->declArray(c+1290,"riscv_soc sram1 sram_17", false,-1, 127,0);
        tracep->declArray(c+1294,"riscv_soc sram1 sram_18", false,-1, 127,0);
        tracep->declArray(c+1298,"riscv_soc sram1 sram_19", false,-1, 127,0);
        tracep->declArray(c+1302,"riscv_soc sram1 sram_20", false,-1, 127,0);
        tracep->declArray(c+1306,"riscv_soc sram1 sram_21", false,-1, 127,0);
        tracep->declArray(c+1310,"riscv_soc sram1 sram_22", false,-1, 127,0);
        tracep->declArray(c+1314,"riscv_soc sram1 sram_23", false,-1, 127,0);
        tracep->declArray(c+1318,"riscv_soc sram1 sram_24", false,-1, 127,0);
        tracep->declArray(c+1322,"riscv_soc sram1 sram_25", false,-1, 127,0);
        tracep->declArray(c+1326,"riscv_soc sram1 sram_26", false,-1, 127,0);
        tracep->declArray(c+1330,"riscv_soc sram1 sram_27", false,-1, 127,0);
        tracep->declArray(c+1334,"riscv_soc sram1 sram_28", false,-1, 127,0);
        tracep->declArray(c+1338,"riscv_soc sram1 sram_29", false,-1, 127,0);
        tracep->declArray(c+1342,"riscv_soc sram1 sram_30", false,-1, 127,0);
        tracep->declArray(c+1346,"riscv_soc sram1 sram_31", false,-1, 127,0);
        tracep->declArray(c+1350,"riscv_soc sram1 sram_32", false,-1, 127,0);
        tracep->declArray(c+1354,"riscv_soc sram1 sram_33", false,-1, 127,0);
        tracep->declArray(c+1358,"riscv_soc sram1 sram_34", false,-1, 127,0);
        tracep->declArray(c+1362,"riscv_soc sram1 sram_35", false,-1, 127,0);
        tracep->declArray(c+1366,"riscv_soc sram1 sram_36", false,-1, 127,0);
        tracep->declArray(c+1370,"riscv_soc sram1 sram_37", false,-1, 127,0);
        tracep->declArray(c+1374,"riscv_soc sram1 sram_38", false,-1, 127,0);
        tracep->declArray(c+1378,"riscv_soc sram1 sram_39", false,-1, 127,0);
        tracep->declArray(c+1382,"riscv_soc sram1 sram_40", false,-1, 127,0);
        tracep->declArray(c+1386,"riscv_soc sram1 sram_41", false,-1, 127,0);
        tracep->declArray(c+1390,"riscv_soc sram1 sram_42", false,-1, 127,0);
        tracep->declArray(c+1394,"riscv_soc sram1 sram_43", false,-1, 127,0);
        tracep->declArray(c+1398,"riscv_soc sram1 sram_44", false,-1, 127,0);
        tracep->declArray(c+1402,"riscv_soc sram1 sram_45", false,-1, 127,0);
        tracep->declArray(c+1406,"riscv_soc sram1 sram_46", false,-1, 127,0);
        tracep->declArray(c+1410,"riscv_soc sram1 sram_47", false,-1, 127,0);
        tracep->declArray(c+1414,"riscv_soc sram1 sram_48", false,-1, 127,0);
        tracep->declArray(c+1418,"riscv_soc sram1 sram_49", false,-1, 127,0);
        tracep->declArray(c+1422,"riscv_soc sram1 sram_50", false,-1, 127,0);
        tracep->declArray(c+1426,"riscv_soc sram1 sram_51", false,-1, 127,0);
        tracep->declArray(c+1430,"riscv_soc sram1 sram_52", false,-1, 127,0);
        tracep->declArray(c+1434,"riscv_soc sram1 sram_53", false,-1, 127,0);
        tracep->declArray(c+1438,"riscv_soc sram1 sram_54", false,-1, 127,0);
        tracep->declArray(c+1442,"riscv_soc sram1 sram_55", false,-1, 127,0);
        tracep->declArray(c+1446,"riscv_soc sram1 sram_56", false,-1, 127,0);
        tracep->declArray(c+1450,"riscv_soc sram1 sram_57", false,-1, 127,0);
        tracep->declArray(c+1454,"riscv_soc sram1 sram_58", false,-1, 127,0);
        tracep->declArray(c+1458,"riscv_soc sram1 sram_59", false,-1, 127,0);
        tracep->declArray(c+1462,"riscv_soc sram1 sram_60", false,-1, 127,0);
        tracep->declArray(c+1466,"riscv_soc sram1 sram_61", false,-1, 127,0);
        tracep->declArray(c+1470,"riscv_soc sram1 sram_62", false,-1, 127,0);
        tracep->declArray(c+1474,"riscv_soc sram1 sram_63", false,-1, 127,0);
        tracep->declArray(c+3135,"riscv_soc sram1 bwen", false,-1, 127,0);
        tracep->declBit(c+335,"riscv_soc sram1 wen", false,-1);
        tracep->declBit(c+3014,"riscv_soc sram2 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram2 reset", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2 io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2 io_rdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2 Q", false,-1, 127,0);
        tracep->declArray(c+1478,"riscv_soc sram2 sram_0", false,-1, 127,0);
        tracep->declArray(c+1482,"riscv_soc sram2 sram_1", false,-1, 127,0);
        tracep->declArray(c+1486,"riscv_soc sram2 sram_2", false,-1, 127,0);
        tracep->declArray(c+1490,"riscv_soc sram2 sram_3", false,-1, 127,0);
        tracep->declArray(c+1494,"riscv_soc sram2 sram_4", false,-1, 127,0);
        tracep->declArray(c+1498,"riscv_soc sram2 sram_5", false,-1, 127,0);
        tracep->declArray(c+1502,"riscv_soc sram2 sram_6", false,-1, 127,0);
        tracep->declArray(c+1506,"riscv_soc sram2 sram_7", false,-1, 127,0);
        tracep->declArray(c+1510,"riscv_soc sram2 sram_8", false,-1, 127,0);
        tracep->declArray(c+1514,"riscv_soc sram2 sram_9", false,-1, 127,0);
        tracep->declArray(c+1518,"riscv_soc sram2 sram_10", false,-1, 127,0);
        tracep->declArray(c+1522,"riscv_soc sram2 sram_11", false,-1, 127,0);
        tracep->declArray(c+1526,"riscv_soc sram2 sram_12", false,-1, 127,0);
        tracep->declArray(c+1530,"riscv_soc sram2 sram_13", false,-1, 127,0);
        tracep->declArray(c+1534,"riscv_soc sram2 sram_14", false,-1, 127,0);
        tracep->declArray(c+1538,"riscv_soc sram2 sram_15", false,-1, 127,0);
        tracep->declArray(c+1542,"riscv_soc sram2 sram_16", false,-1, 127,0);
        tracep->declArray(c+1546,"riscv_soc sram2 sram_17", false,-1, 127,0);
        tracep->declArray(c+1550,"riscv_soc sram2 sram_18", false,-1, 127,0);
        tracep->declArray(c+1554,"riscv_soc sram2 sram_19", false,-1, 127,0);
        tracep->declArray(c+1558,"riscv_soc sram2 sram_20", false,-1, 127,0);
        tracep->declArray(c+1562,"riscv_soc sram2 sram_21", false,-1, 127,0);
        tracep->declArray(c+1566,"riscv_soc sram2 sram_22", false,-1, 127,0);
        tracep->declArray(c+1570,"riscv_soc sram2 sram_23", false,-1, 127,0);
        tracep->declArray(c+1574,"riscv_soc sram2 sram_24", false,-1, 127,0);
        tracep->declArray(c+1578,"riscv_soc sram2 sram_25", false,-1, 127,0);
        tracep->declArray(c+1582,"riscv_soc sram2 sram_26", false,-1, 127,0);
        tracep->declArray(c+1586,"riscv_soc sram2 sram_27", false,-1, 127,0);
        tracep->declArray(c+1590,"riscv_soc sram2 sram_28", false,-1, 127,0);
        tracep->declArray(c+1594,"riscv_soc sram2 sram_29", false,-1, 127,0);
        tracep->declArray(c+1598,"riscv_soc sram2 sram_30", false,-1, 127,0);
        tracep->declArray(c+1602,"riscv_soc sram2 sram_31", false,-1, 127,0);
        tracep->declArray(c+1606,"riscv_soc sram2 sram_32", false,-1, 127,0);
        tracep->declArray(c+1610,"riscv_soc sram2 sram_33", false,-1, 127,0);
        tracep->declArray(c+1614,"riscv_soc sram2 sram_34", false,-1, 127,0);
        tracep->declArray(c+1618,"riscv_soc sram2 sram_35", false,-1, 127,0);
        tracep->declArray(c+1622,"riscv_soc sram2 sram_36", false,-1, 127,0);
        tracep->declArray(c+1626,"riscv_soc sram2 sram_37", false,-1, 127,0);
        tracep->declArray(c+1630,"riscv_soc sram2 sram_38", false,-1, 127,0);
        tracep->declArray(c+1634,"riscv_soc sram2 sram_39", false,-1, 127,0);
        tracep->declArray(c+1638,"riscv_soc sram2 sram_40", false,-1, 127,0);
        tracep->declArray(c+1642,"riscv_soc sram2 sram_41", false,-1, 127,0);
        tracep->declArray(c+1646,"riscv_soc sram2 sram_42", false,-1, 127,0);
        tracep->declArray(c+1650,"riscv_soc sram2 sram_43", false,-1, 127,0);
        tracep->declArray(c+1654,"riscv_soc sram2 sram_44", false,-1, 127,0);
        tracep->declArray(c+1658,"riscv_soc sram2 sram_45", false,-1, 127,0);
        tracep->declArray(c+1662,"riscv_soc sram2 sram_46", false,-1, 127,0);
        tracep->declArray(c+1666,"riscv_soc sram2 sram_47", false,-1, 127,0);
        tracep->declArray(c+1670,"riscv_soc sram2 sram_48", false,-1, 127,0);
        tracep->declArray(c+1674,"riscv_soc sram2 sram_49", false,-1, 127,0);
        tracep->declArray(c+1678,"riscv_soc sram2 sram_50", false,-1, 127,0);
        tracep->declArray(c+1682,"riscv_soc sram2 sram_51", false,-1, 127,0);
        tracep->declArray(c+1686,"riscv_soc sram2 sram_52", false,-1, 127,0);
        tracep->declArray(c+1690,"riscv_soc sram2 sram_53", false,-1, 127,0);
        tracep->declArray(c+1694,"riscv_soc sram2 sram_54", false,-1, 127,0);
        tracep->declArray(c+1698,"riscv_soc sram2 sram_55", false,-1, 127,0);
        tracep->declArray(c+1702,"riscv_soc sram2 sram_56", false,-1, 127,0);
        tracep->declArray(c+1706,"riscv_soc sram2 sram_57", false,-1, 127,0);
        tracep->declArray(c+1710,"riscv_soc sram2 sram_58", false,-1, 127,0);
        tracep->declArray(c+1714,"riscv_soc sram2 sram_59", false,-1, 127,0);
        tracep->declArray(c+1718,"riscv_soc sram2 sram_60", false,-1, 127,0);
        tracep->declArray(c+1722,"riscv_soc sram2 sram_61", false,-1, 127,0);
        tracep->declArray(c+1726,"riscv_soc sram2 sram_62", false,-1, 127,0);
        tracep->declArray(c+1730,"riscv_soc sram2 sram_63", false,-1, 127,0);
        tracep->declArray(c+3135,"riscv_soc sram2 bwen", false,-1, 127,0);
        tracep->declBit(c+336,"riscv_soc sram2 wen", false,-1);
        tracep->declBit(c+3014,"riscv_soc sram3 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram3 reset", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3 io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3 io_rdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3 Q", false,-1, 127,0);
        tracep->declArray(c+1734,"riscv_soc sram3 sram_0", false,-1, 127,0);
        tracep->declArray(c+1738,"riscv_soc sram3 sram_1", false,-1, 127,0);
        tracep->declArray(c+1742,"riscv_soc sram3 sram_2", false,-1, 127,0);
        tracep->declArray(c+1746,"riscv_soc sram3 sram_3", false,-1, 127,0);
        tracep->declArray(c+1750,"riscv_soc sram3 sram_4", false,-1, 127,0);
        tracep->declArray(c+1754,"riscv_soc sram3 sram_5", false,-1, 127,0);
        tracep->declArray(c+1758,"riscv_soc sram3 sram_6", false,-1, 127,0);
        tracep->declArray(c+1762,"riscv_soc sram3 sram_7", false,-1, 127,0);
        tracep->declArray(c+1766,"riscv_soc sram3 sram_8", false,-1, 127,0);
        tracep->declArray(c+1770,"riscv_soc sram3 sram_9", false,-1, 127,0);
        tracep->declArray(c+1774,"riscv_soc sram3 sram_10", false,-1, 127,0);
        tracep->declArray(c+1778,"riscv_soc sram3 sram_11", false,-1, 127,0);
        tracep->declArray(c+1782,"riscv_soc sram3 sram_12", false,-1, 127,0);
        tracep->declArray(c+1786,"riscv_soc sram3 sram_13", false,-1, 127,0);
        tracep->declArray(c+1790,"riscv_soc sram3 sram_14", false,-1, 127,0);
        tracep->declArray(c+1794,"riscv_soc sram3 sram_15", false,-1, 127,0);
        tracep->declArray(c+1798,"riscv_soc sram3 sram_16", false,-1, 127,0);
        tracep->declArray(c+1802,"riscv_soc sram3 sram_17", false,-1, 127,0);
        tracep->declArray(c+1806,"riscv_soc sram3 sram_18", false,-1, 127,0);
        tracep->declArray(c+1810,"riscv_soc sram3 sram_19", false,-1, 127,0);
        tracep->declArray(c+1814,"riscv_soc sram3 sram_20", false,-1, 127,0);
        tracep->declArray(c+1818,"riscv_soc sram3 sram_21", false,-1, 127,0);
        tracep->declArray(c+1822,"riscv_soc sram3 sram_22", false,-1, 127,0);
        tracep->declArray(c+1826,"riscv_soc sram3 sram_23", false,-1, 127,0);
        tracep->declArray(c+1830,"riscv_soc sram3 sram_24", false,-1, 127,0);
        tracep->declArray(c+1834,"riscv_soc sram3 sram_25", false,-1, 127,0);
        tracep->declArray(c+1838,"riscv_soc sram3 sram_26", false,-1, 127,0);
        tracep->declArray(c+1842,"riscv_soc sram3 sram_27", false,-1, 127,0);
        tracep->declArray(c+1846,"riscv_soc sram3 sram_28", false,-1, 127,0);
        tracep->declArray(c+1850,"riscv_soc sram3 sram_29", false,-1, 127,0);
        tracep->declArray(c+1854,"riscv_soc sram3 sram_30", false,-1, 127,0);
        tracep->declArray(c+1858,"riscv_soc sram3 sram_31", false,-1, 127,0);
        tracep->declArray(c+1862,"riscv_soc sram3 sram_32", false,-1, 127,0);
        tracep->declArray(c+1866,"riscv_soc sram3 sram_33", false,-1, 127,0);
        tracep->declArray(c+1870,"riscv_soc sram3 sram_34", false,-1, 127,0);
        tracep->declArray(c+1874,"riscv_soc sram3 sram_35", false,-1, 127,0);
        tracep->declArray(c+1878,"riscv_soc sram3 sram_36", false,-1, 127,0);
        tracep->declArray(c+1882,"riscv_soc sram3 sram_37", false,-1, 127,0);
        tracep->declArray(c+1886,"riscv_soc sram3 sram_38", false,-1, 127,0);
        tracep->declArray(c+1890,"riscv_soc sram3 sram_39", false,-1, 127,0);
        tracep->declArray(c+1894,"riscv_soc sram3 sram_40", false,-1, 127,0);
        tracep->declArray(c+1898,"riscv_soc sram3 sram_41", false,-1, 127,0);
        tracep->declArray(c+1902,"riscv_soc sram3 sram_42", false,-1, 127,0);
        tracep->declArray(c+1906,"riscv_soc sram3 sram_43", false,-1, 127,0);
        tracep->declArray(c+1910,"riscv_soc sram3 sram_44", false,-1, 127,0);
        tracep->declArray(c+1914,"riscv_soc sram3 sram_45", false,-1, 127,0);
        tracep->declArray(c+1918,"riscv_soc sram3 sram_46", false,-1, 127,0);
        tracep->declArray(c+1922,"riscv_soc sram3 sram_47", false,-1, 127,0);
        tracep->declArray(c+1926,"riscv_soc sram3 sram_48", false,-1, 127,0);
        tracep->declArray(c+1930,"riscv_soc sram3 sram_49", false,-1, 127,0);
        tracep->declArray(c+1934,"riscv_soc sram3 sram_50", false,-1, 127,0);
        tracep->declArray(c+1938,"riscv_soc sram3 sram_51", false,-1, 127,0);
        tracep->declArray(c+1942,"riscv_soc sram3 sram_52", false,-1, 127,0);
        tracep->declArray(c+1946,"riscv_soc sram3 sram_53", false,-1, 127,0);
        tracep->declArray(c+1950,"riscv_soc sram3 sram_54", false,-1, 127,0);
        tracep->declArray(c+1954,"riscv_soc sram3 sram_55", false,-1, 127,0);
        tracep->declArray(c+1958,"riscv_soc sram3 sram_56", false,-1, 127,0);
        tracep->declArray(c+1962,"riscv_soc sram3 sram_57", false,-1, 127,0);
        tracep->declArray(c+1966,"riscv_soc sram3 sram_58", false,-1, 127,0);
        tracep->declArray(c+1970,"riscv_soc sram3 sram_59", false,-1, 127,0);
        tracep->declArray(c+1974,"riscv_soc sram3 sram_60", false,-1, 127,0);
        tracep->declArray(c+1978,"riscv_soc sram3 sram_61", false,-1, 127,0);
        tracep->declArray(c+1982,"riscv_soc sram3 sram_62", false,-1, 127,0);
        tracep->declArray(c+1986,"riscv_soc sram3 sram_63", false,-1, 127,0);
        tracep->declArray(c+3135,"riscv_soc sram3 bwen", false,-1, 127,0);
        tracep->declBit(c+336,"riscv_soc sram3 wen", false,-1);
        tracep->declBit(c+3014,"riscv_soc sram4 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram4 reset", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4 io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4 io_rdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4 Q", false,-1, 127,0);
        tracep->declArray(c+1990,"riscv_soc sram4 sram_0", false,-1, 127,0);
        tracep->declArray(c+1994,"riscv_soc sram4 sram_1", false,-1, 127,0);
        tracep->declArray(c+1998,"riscv_soc sram4 sram_2", false,-1, 127,0);
        tracep->declArray(c+2002,"riscv_soc sram4 sram_3", false,-1, 127,0);
        tracep->declArray(c+2006,"riscv_soc sram4 sram_4", false,-1, 127,0);
        tracep->declArray(c+2010,"riscv_soc sram4 sram_5", false,-1, 127,0);
        tracep->declArray(c+2014,"riscv_soc sram4 sram_6", false,-1, 127,0);
        tracep->declArray(c+2018,"riscv_soc sram4 sram_7", false,-1, 127,0);
        tracep->declArray(c+2022,"riscv_soc sram4 sram_8", false,-1, 127,0);
        tracep->declArray(c+2026,"riscv_soc sram4 sram_9", false,-1, 127,0);
        tracep->declArray(c+2030,"riscv_soc sram4 sram_10", false,-1, 127,0);
        tracep->declArray(c+2034,"riscv_soc sram4 sram_11", false,-1, 127,0);
        tracep->declArray(c+2038,"riscv_soc sram4 sram_12", false,-1, 127,0);
        tracep->declArray(c+2042,"riscv_soc sram4 sram_13", false,-1, 127,0);
        tracep->declArray(c+2046,"riscv_soc sram4 sram_14", false,-1, 127,0);
        tracep->declArray(c+2050,"riscv_soc sram4 sram_15", false,-1, 127,0);
        tracep->declArray(c+2054,"riscv_soc sram4 sram_16", false,-1, 127,0);
        tracep->declArray(c+2058,"riscv_soc sram4 sram_17", false,-1, 127,0);
        tracep->declArray(c+2062,"riscv_soc sram4 sram_18", false,-1, 127,0);
        tracep->declArray(c+2066,"riscv_soc sram4 sram_19", false,-1, 127,0);
        tracep->declArray(c+2070,"riscv_soc sram4 sram_20", false,-1, 127,0);
        tracep->declArray(c+2074,"riscv_soc sram4 sram_21", false,-1, 127,0);
        tracep->declArray(c+2078,"riscv_soc sram4 sram_22", false,-1, 127,0);
        tracep->declArray(c+2082,"riscv_soc sram4 sram_23", false,-1, 127,0);
        tracep->declArray(c+2086,"riscv_soc sram4 sram_24", false,-1, 127,0);
        tracep->declArray(c+2090,"riscv_soc sram4 sram_25", false,-1, 127,0);
        tracep->declArray(c+2094,"riscv_soc sram4 sram_26", false,-1, 127,0);
        tracep->declArray(c+2098,"riscv_soc sram4 sram_27", false,-1, 127,0);
        tracep->declArray(c+2102,"riscv_soc sram4 sram_28", false,-1, 127,0);
        tracep->declArray(c+2106,"riscv_soc sram4 sram_29", false,-1, 127,0);
        tracep->declArray(c+2110,"riscv_soc sram4 sram_30", false,-1, 127,0);
        tracep->declArray(c+2114,"riscv_soc sram4 sram_31", false,-1, 127,0);
        tracep->declArray(c+2118,"riscv_soc sram4 sram_32", false,-1, 127,0);
        tracep->declArray(c+2122,"riscv_soc sram4 sram_33", false,-1, 127,0);
        tracep->declArray(c+2126,"riscv_soc sram4 sram_34", false,-1, 127,0);
        tracep->declArray(c+2130,"riscv_soc sram4 sram_35", false,-1, 127,0);
        tracep->declArray(c+2134,"riscv_soc sram4 sram_36", false,-1, 127,0);
        tracep->declArray(c+2138,"riscv_soc sram4 sram_37", false,-1, 127,0);
        tracep->declArray(c+2142,"riscv_soc sram4 sram_38", false,-1, 127,0);
        tracep->declArray(c+2146,"riscv_soc sram4 sram_39", false,-1, 127,0);
        tracep->declArray(c+2150,"riscv_soc sram4 sram_40", false,-1, 127,0);
        tracep->declArray(c+2154,"riscv_soc sram4 sram_41", false,-1, 127,0);
        tracep->declArray(c+2158,"riscv_soc sram4 sram_42", false,-1, 127,0);
        tracep->declArray(c+2162,"riscv_soc sram4 sram_43", false,-1, 127,0);
        tracep->declArray(c+2166,"riscv_soc sram4 sram_44", false,-1, 127,0);
        tracep->declArray(c+2170,"riscv_soc sram4 sram_45", false,-1, 127,0);
        tracep->declArray(c+2174,"riscv_soc sram4 sram_46", false,-1, 127,0);
        tracep->declArray(c+2178,"riscv_soc sram4 sram_47", false,-1, 127,0);
        tracep->declArray(c+2182,"riscv_soc sram4 sram_48", false,-1, 127,0);
        tracep->declArray(c+2186,"riscv_soc sram4 sram_49", false,-1, 127,0);
        tracep->declArray(c+2190,"riscv_soc sram4 sram_50", false,-1, 127,0);
        tracep->declArray(c+2194,"riscv_soc sram4 sram_51", false,-1, 127,0);
        tracep->declArray(c+2198,"riscv_soc sram4 sram_52", false,-1, 127,0);
        tracep->declArray(c+2202,"riscv_soc sram4 sram_53", false,-1, 127,0);
        tracep->declArray(c+2206,"riscv_soc sram4 sram_54", false,-1, 127,0);
        tracep->declArray(c+2210,"riscv_soc sram4 sram_55", false,-1, 127,0);
        tracep->declArray(c+2214,"riscv_soc sram4 sram_56", false,-1, 127,0);
        tracep->declArray(c+2218,"riscv_soc sram4 sram_57", false,-1, 127,0);
        tracep->declArray(c+2222,"riscv_soc sram4 sram_58", false,-1, 127,0);
        tracep->declArray(c+2226,"riscv_soc sram4 sram_59", false,-1, 127,0);
        tracep->declArray(c+2230,"riscv_soc sram4 sram_60", false,-1, 127,0);
        tracep->declArray(c+2234,"riscv_soc sram4 sram_61", false,-1, 127,0);
        tracep->declArray(c+2238,"riscv_soc sram4 sram_62", false,-1, 127,0);
        tracep->declArray(c+2242,"riscv_soc sram4 sram_63", false,-1, 127,0);
        tracep->declArray(c+388,"riscv_soc sram4 bwen", false,-1, 127,0);
        tracep->declBit(c+396,"riscv_soc sram4 wen", false,-1);
        tracep->declBit(c+3014,"riscv_soc sram5 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram5 reset", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5 io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram5 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5 io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5 io_rdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5 Q", false,-1, 127,0);
        tracep->declArray(c+2246,"riscv_soc sram5 sram_0", false,-1, 127,0);
        tracep->declArray(c+2250,"riscv_soc sram5 sram_1", false,-1, 127,0);
        tracep->declArray(c+2254,"riscv_soc sram5 sram_2", false,-1, 127,0);
        tracep->declArray(c+2258,"riscv_soc sram5 sram_3", false,-1, 127,0);
        tracep->declArray(c+2262,"riscv_soc sram5 sram_4", false,-1, 127,0);
        tracep->declArray(c+2266,"riscv_soc sram5 sram_5", false,-1, 127,0);
        tracep->declArray(c+2270,"riscv_soc sram5 sram_6", false,-1, 127,0);
        tracep->declArray(c+2274,"riscv_soc sram5 sram_7", false,-1, 127,0);
        tracep->declArray(c+2278,"riscv_soc sram5 sram_8", false,-1, 127,0);
        tracep->declArray(c+2282,"riscv_soc sram5 sram_9", false,-1, 127,0);
        tracep->declArray(c+2286,"riscv_soc sram5 sram_10", false,-1, 127,0);
        tracep->declArray(c+2290,"riscv_soc sram5 sram_11", false,-1, 127,0);
        tracep->declArray(c+2294,"riscv_soc sram5 sram_12", false,-1, 127,0);
        tracep->declArray(c+2298,"riscv_soc sram5 sram_13", false,-1, 127,0);
        tracep->declArray(c+2302,"riscv_soc sram5 sram_14", false,-1, 127,0);
        tracep->declArray(c+2306,"riscv_soc sram5 sram_15", false,-1, 127,0);
        tracep->declArray(c+2310,"riscv_soc sram5 sram_16", false,-1, 127,0);
        tracep->declArray(c+2314,"riscv_soc sram5 sram_17", false,-1, 127,0);
        tracep->declArray(c+2318,"riscv_soc sram5 sram_18", false,-1, 127,0);
        tracep->declArray(c+2322,"riscv_soc sram5 sram_19", false,-1, 127,0);
        tracep->declArray(c+2326,"riscv_soc sram5 sram_20", false,-1, 127,0);
        tracep->declArray(c+2330,"riscv_soc sram5 sram_21", false,-1, 127,0);
        tracep->declArray(c+2334,"riscv_soc sram5 sram_22", false,-1, 127,0);
        tracep->declArray(c+2338,"riscv_soc sram5 sram_23", false,-1, 127,0);
        tracep->declArray(c+2342,"riscv_soc sram5 sram_24", false,-1, 127,0);
        tracep->declArray(c+2346,"riscv_soc sram5 sram_25", false,-1, 127,0);
        tracep->declArray(c+2350,"riscv_soc sram5 sram_26", false,-1, 127,0);
        tracep->declArray(c+2354,"riscv_soc sram5 sram_27", false,-1, 127,0);
        tracep->declArray(c+2358,"riscv_soc sram5 sram_28", false,-1, 127,0);
        tracep->declArray(c+2362,"riscv_soc sram5 sram_29", false,-1, 127,0);
        tracep->declArray(c+2366,"riscv_soc sram5 sram_30", false,-1, 127,0);
        tracep->declArray(c+2370,"riscv_soc sram5 sram_31", false,-1, 127,0);
        tracep->declArray(c+2374,"riscv_soc sram5 sram_32", false,-1, 127,0);
        tracep->declArray(c+2378,"riscv_soc sram5 sram_33", false,-1, 127,0);
        tracep->declArray(c+2382,"riscv_soc sram5 sram_34", false,-1, 127,0);
        tracep->declArray(c+2386,"riscv_soc sram5 sram_35", false,-1, 127,0);
        tracep->declArray(c+2390,"riscv_soc sram5 sram_36", false,-1, 127,0);
        tracep->declArray(c+2394,"riscv_soc sram5 sram_37", false,-1, 127,0);
        tracep->declArray(c+2398,"riscv_soc sram5 sram_38", false,-1, 127,0);
        tracep->declArray(c+2402,"riscv_soc sram5 sram_39", false,-1, 127,0);
        tracep->declArray(c+2406,"riscv_soc sram5 sram_40", false,-1, 127,0);
        tracep->declArray(c+2410,"riscv_soc sram5 sram_41", false,-1, 127,0);
        tracep->declArray(c+2414,"riscv_soc sram5 sram_42", false,-1, 127,0);
        tracep->declArray(c+2418,"riscv_soc sram5 sram_43", false,-1, 127,0);
        tracep->declArray(c+2422,"riscv_soc sram5 sram_44", false,-1, 127,0);
        tracep->declArray(c+2426,"riscv_soc sram5 sram_45", false,-1, 127,0);
        tracep->declArray(c+2430,"riscv_soc sram5 sram_46", false,-1, 127,0);
        tracep->declArray(c+2434,"riscv_soc sram5 sram_47", false,-1, 127,0);
        tracep->declArray(c+2438,"riscv_soc sram5 sram_48", false,-1, 127,0);
        tracep->declArray(c+2442,"riscv_soc sram5 sram_49", false,-1, 127,0);
        tracep->declArray(c+2446,"riscv_soc sram5 sram_50", false,-1, 127,0);
        tracep->declArray(c+2450,"riscv_soc sram5 sram_51", false,-1, 127,0);
        tracep->declArray(c+2454,"riscv_soc sram5 sram_52", false,-1, 127,0);
        tracep->declArray(c+2458,"riscv_soc sram5 sram_53", false,-1, 127,0);
        tracep->declArray(c+2462,"riscv_soc sram5 sram_54", false,-1, 127,0);
        tracep->declArray(c+2466,"riscv_soc sram5 sram_55", false,-1, 127,0);
        tracep->declArray(c+2470,"riscv_soc sram5 sram_56", false,-1, 127,0);
        tracep->declArray(c+2474,"riscv_soc sram5 sram_57", false,-1, 127,0);
        tracep->declArray(c+2478,"riscv_soc sram5 sram_58", false,-1, 127,0);
        tracep->declArray(c+2482,"riscv_soc sram5 sram_59", false,-1, 127,0);
        tracep->declArray(c+2486,"riscv_soc sram5 sram_60", false,-1, 127,0);
        tracep->declArray(c+2490,"riscv_soc sram5 sram_61", false,-1, 127,0);
        tracep->declArray(c+2494,"riscv_soc sram5 sram_62", false,-1, 127,0);
        tracep->declArray(c+2498,"riscv_soc sram5 sram_63", false,-1, 127,0);
        tracep->declArray(c+3135,"riscv_soc sram5 bwen", false,-1, 127,0);
        tracep->declBit(c+396,"riscv_soc sram5 wen", false,-1);
        tracep->declBit(c+3014,"riscv_soc sram6 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram6 reset", false,-1);
        tracep->declBus(c+74,"riscv_soc sram6 io_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc sram6 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6 io_wdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc sram6 io_rdata", false,-1, 127,0);
        tracep->declArray(c+76,"riscv_soc sram6 Q", false,-1, 127,0);
        tracep->declArray(c+2502,"riscv_soc sram6 sram_0", false,-1, 127,0);
        tracep->declArray(c+2506,"riscv_soc sram6 sram_1", false,-1, 127,0);
        tracep->declArray(c+2510,"riscv_soc sram6 sram_2", false,-1, 127,0);
        tracep->declArray(c+2514,"riscv_soc sram6 sram_3", false,-1, 127,0);
        tracep->declArray(c+2518,"riscv_soc sram6 sram_4", false,-1, 127,0);
        tracep->declArray(c+2522,"riscv_soc sram6 sram_5", false,-1, 127,0);
        tracep->declArray(c+2526,"riscv_soc sram6 sram_6", false,-1, 127,0);
        tracep->declArray(c+2530,"riscv_soc sram6 sram_7", false,-1, 127,0);
        tracep->declArray(c+2534,"riscv_soc sram6 sram_8", false,-1, 127,0);
        tracep->declArray(c+2538,"riscv_soc sram6 sram_9", false,-1, 127,0);
        tracep->declArray(c+2542,"riscv_soc sram6 sram_10", false,-1, 127,0);
        tracep->declArray(c+2546,"riscv_soc sram6 sram_11", false,-1, 127,0);
        tracep->declArray(c+2550,"riscv_soc sram6 sram_12", false,-1, 127,0);
        tracep->declArray(c+2554,"riscv_soc sram6 sram_13", false,-1, 127,0);
        tracep->declArray(c+2558,"riscv_soc sram6 sram_14", false,-1, 127,0);
        tracep->declArray(c+2562,"riscv_soc sram6 sram_15", false,-1, 127,0);
        tracep->declArray(c+2566,"riscv_soc sram6 sram_16", false,-1, 127,0);
        tracep->declArray(c+2570,"riscv_soc sram6 sram_17", false,-1, 127,0);
        tracep->declArray(c+2574,"riscv_soc sram6 sram_18", false,-1, 127,0);
        tracep->declArray(c+2578,"riscv_soc sram6 sram_19", false,-1, 127,0);
        tracep->declArray(c+2582,"riscv_soc sram6 sram_20", false,-1, 127,0);
        tracep->declArray(c+2586,"riscv_soc sram6 sram_21", false,-1, 127,0);
        tracep->declArray(c+2590,"riscv_soc sram6 sram_22", false,-1, 127,0);
        tracep->declArray(c+2594,"riscv_soc sram6 sram_23", false,-1, 127,0);
        tracep->declArray(c+2598,"riscv_soc sram6 sram_24", false,-1, 127,0);
        tracep->declArray(c+2602,"riscv_soc sram6 sram_25", false,-1, 127,0);
        tracep->declArray(c+2606,"riscv_soc sram6 sram_26", false,-1, 127,0);
        tracep->declArray(c+2610,"riscv_soc sram6 sram_27", false,-1, 127,0);
        tracep->declArray(c+2614,"riscv_soc sram6 sram_28", false,-1, 127,0);
        tracep->declArray(c+2618,"riscv_soc sram6 sram_29", false,-1, 127,0);
        tracep->declArray(c+2622,"riscv_soc sram6 sram_30", false,-1, 127,0);
        tracep->declArray(c+2626,"riscv_soc sram6 sram_31", false,-1, 127,0);
        tracep->declArray(c+2630,"riscv_soc sram6 sram_32", false,-1, 127,0);
        tracep->declArray(c+2634,"riscv_soc sram6 sram_33", false,-1, 127,0);
        tracep->declArray(c+2638,"riscv_soc sram6 sram_34", false,-1, 127,0);
        tracep->declArray(c+2642,"riscv_soc sram6 sram_35", false,-1, 127,0);
        tracep->declArray(c+2646,"riscv_soc sram6 sram_36", false,-1, 127,0);
        tracep->declArray(c+2650,"riscv_soc sram6 sram_37", false,-1, 127,0);
        tracep->declArray(c+2654,"riscv_soc sram6 sram_38", false,-1, 127,0);
        tracep->declArray(c+2658,"riscv_soc sram6 sram_39", false,-1, 127,0);
        tracep->declArray(c+2662,"riscv_soc sram6 sram_40", false,-1, 127,0);
        tracep->declArray(c+2666,"riscv_soc sram6 sram_41", false,-1, 127,0);
        tracep->declArray(c+2670,"riscv_soc sram6 sram_42", false,-1, 127,0);
        tracep->declArray(c+2674,"riscv_soc sram6 sram_43", false,-1, 127,0);
        tracep->declArray(c+2678,"riscv_soc sram6 sram_44", false,-1, 127,0);
        tracep->declArray(c+2682,"riscv_soc sram6 sram_45", false,-1, 127,0);
        tracep->declArray(c+2686,"riscv_soc sram6 sram_46", false,-1, 127,0);
        tracep->declArray(c+2690,"riscv_soc sram6 sram_47", false,-1, 127,0);
        tracep->declArray(c+2694,"riscv_soc sram6 sram_48", false,-1, 127,0);
        tracep->declArray(c+2698,"riscv_soc sram6 sram_49", false,-1, 127,0);
        tracep->declArray(c+2702,"riscv_soc sram6 sram_50", false,-1, 127,0);
        tracep->declArray(c+2706,"riscv_soc sram6 sram_51", false,-1, 127,0);
        tracep->declArray(c+2710,"riscv_soc sram6 sram_52", false,-1, 127,0);
        tracep->declArray(c+2714,"riscv_soc sram6 sram_53", false,-1, 127,0);
        tracep->declArray(c+2718,"riscv_soc sram6 sram_54", false,-1, 127,0);
        tracep->declArray(c+2722,"riscv_soc sram6 sram_55", false,-1, 127,0);
        tracep->declArray(c+2726,"riscv_soc sram6 sram_56", false,-1, 127,0);
        tracep->declArray(c+2730,"riscv_soc sram6 sram_57", false,-1, 127,0);
        tracep->declArray(c+2734,"riscv_soc sram6 sram_58", false,-1, 127,0);
        tracep->declArray(c+2738,"riscv_soc sram6 sram_59", false,-1, 127,0);
        tracep->declArray(c+2742,"riscv_soc sram6 sram_60", false,-1, 127,0);
        tracep->declArray(c+2746,"riscv_soc sram6 sram_61", false,-1, 127,0);
        tracep->declArray(c+2750,"riscv_soc sram6 sram_62", false,-1, 127,0);
        tracep->declArray(c+2754,"riscv_soc sram6 sram_63", false,-1, 127,0);
        tracep->declArray(c+388,"riscv_soc sram6 bwen", false,-1, 127,0);
        tracep->declBit(c+405,"riscv_soc sram6 wen", false,-1);
        tracep->declBit(c+3014,"riscv_soc sram7 clock", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram7 reset", false,-1);
        tracep->declBus(c+80,"riscv_soc sram7 io_addr", false,-1, 5,0);
        tracep->declBit(c+75,"riscv_soc sram7 io_wen", false,-1);
        tracep->declArray(c+3098,"riscv_soc sram7 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7 io_wdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc sram7 io_rdata", false,-1, 127,0);
        tracep->declArray(c+81,"riscv_soc sram7 Q", false,-1, 127,0);
        tracep->declArray(c+2758,"riscv_soc sram7 sram_0", false,-1, 127,0);
        tracep->declArray(c+2762,"riscv_soc sram7 sram_1", false,-1, 127,0);
        tracep->declArray(c+2766,"riscv_soc sram7 sram_2", false,-1, 127,0);
        tracep->declArray(c+2770,"riscv_soc sram7 sram_3", false,-1, 127,0);
        tracep->declArray(c+2774,"riscv_soc sram7 sram_4", false,-1, 127,0);
        tracep->declArray(c+2778,"riscv_soc sram7 sram_5", false,-1, 127,0);
        tracep->declArray(c+2782,"riscv_soc sram7 sram_6", false,-1, 127,0);
        tracep->declArray(c+2786,"riscv_soc sram7 sram_7", false,-1, 127,0);
        tracep->declArray(c+2790,"riscv_soc sram7 sram_8", false,-1, 127,0);
        tracep->declArray(c+2794,"riscv_soc sram7 sram_9", false,-1, 127,0);
        tracep->declArray(c+2798,"riscv_soc sram7 sram_10", false,-1, 127,0);
        tracep->declArray(c+2802,"riscv_soc sram7 sram_11", false,-1, 127,0);
        tracep->declArray(c+2806,"riscv_soc sram7 sram_12", false,-1, 127,0);
        tracep->declArray(c+2810,"riscv_soc sram7 sram_13", false,-1, 127,0);
        tracep->declArray(c+2814,"riscv_soc sram7 sram_14", false,-1, 127,0);
        tracep->declArray(c+2818,"riscv_soc sram7 sram_15", false,-1, 127,0);
        tracep->declArray(c+2822,"riscv_soc sram7 sram_16", false,-1, 127,0);
        tracep->declArray(c+2826,"riscv_soc sram7 sram_17", false,-1, 127,0);
        tracep->declArray(c+2830,"riscv_soc sram7 sram_18", false,-1, 127,0);
        tracep->declArray(c+2834,"riscv_soc sram7 sram_19", false,-1, 127,0);
        tracep->declArray(c+2838,"riscv_soc sram7 sram_20", false,-1, 127,0);
        tracep->declArray(c+2842,"riscv_soc sram7 sram_21", false,-1, 127,0);
        tracep->declArray(c+2846,"riscv_soc sram7 sram_22", false,-1, 127,0);
        tracep->declArray(c+2850,"riscv_soc sram7 sram_23", false,-1, 127,0);
        tracep->declArray(c+2854,"riscv_soc sram7 sram_24", false,-1, 127,0);
        tracep->declArray(c+2858,"riscv_soc sram7 sram_25", false,-1, 127,0);
        tracep->declArray(c+2862,"riscv_soc sram7 sram_26", false,-1, 127,0);
        tracep->declArray(c+2866,"riscv_soc sram7 sram_27", false,-1, 127,0);
        tracep->declArray(c+2870,"riscv_soc sram7 sram_28", false,-1, 127,0);
        tracep->declArray(c+2874,"riscv_soc sram7 sram_29", false,-1, 127,0);
        tracep->declArray(c+2878,"riscv_soc sram7 sram_30", false,-1, 127,0);
        tracep->declArray(c+2882,"riscv_soc sram7 sram_31", false,-1, 127,0);
        tracep->declArray(c+2886,"riscv_soc sram7 sram_32", false,-1, 127,0);
        tracep->declArray(c+2890,"riscv_soc sram7 sram_33", false,-1, 127,0);
        tracep->declArray(c+2894,"riscv_soc sram7 sram_34", false,-1, 127,0);
        tracep->declArray(c+2898,"riscv_soc sram7 sram_35", false,-1, 127,0);
        tracep->declArray(c+2902,"riscv_soc sram7 sram_36", false,-1, 127,0);
        tracep->declArray(c+2906,"riscv_soc sram7 sram_37", false,-1, 127,0);
        tracep->declArray(c+2910,"riscv_soc sram7 sram_38", false,-1, 127,0);
        tracep->declArray(c+2914,"riscv_soc sram7 sram_39", false,-1, 127,0);
        tracep->declArray(c+2918,"riscv_soc sram7 sram_40", false,-1, 127,0);
        tracep->declArray(c+2922,"riscv_soc sram7 sram_41", false,-1, 127,0);
        tracep->declArray(c+2926,"riscv_soc sram7 sram_42", false,-1, 127,0);
        tracep->declArray(c+2930,"riscv_soc sram7 sram_43", false,-1, 127,0);
        tracep->declArray(c+2934,"riscv_soc sram7 sram_44", false,-1, 127,0);
        tracep->declArray(c+2938,"riscv_soc sram7 sram_45", false,-1, 127,0);
        tracep->declArray(c+2942,"riscv_soc sram7 sram_46", false,-1, 127,0);
        tracep->declArray(c+2946,"riscv_soc sram7 sram_47", false,-1, 127,0);
        tracep->declArray(c+2950,"riscv_soc sram7 sram_48", false,-1, 127,0);
        tracep->declArray(c+2954,"riscv_soc sram7 sram_49", false,-1, 127,0);
        tracep->declArray(c+2958,"riscv_soc sram7 sram_50", false,-1, 127,0);
        tracep->declArray(c+2962,"riscv_soc sram7 sram_51", false,-1, 127,0);
        tracep->declArray(c+2966,"riscv_soc sram7 sram_52", false,-1, 127,0);
        tracep->declArray(c+2970,"riscv_soc sram7 sram_53", false,-1, 127,0);
        tracep->declArray(c+2974,"riscv_soc sram7 sram_54", false,-1, 127,0);
        tracep->declArray(c+2978,"riscv_soc sram7 sram_55", false,-1, 127,0);
        tracep->declArray(c+2982,"riscv_soc sram7 sram_56", false,-1, 127,0);
        tracep->declArray(c+2986,"riscv_soc sram7 sram_57", false,-1, 127,0);
        tracep->declArray(c+2990,"riscv_soc sram7 sram_58", false,-1, 127,0);
        tracep->declArray(c+2994,"riscv_soc sram7 sram_59", false,-1, 127,0);
        tracep->declArray(c+2998,"riscv_soc sram7 sram_60", false,-1, 127,0);
        tracep->declArray(c+3002,"riscv_soc sram7 sram_61", false,-1, 127,0);
        tracep->declArray(c+3006,"riscv_soc sram7 sram_62", false,-1, 127,0);
        tracep->declArray(c+3010,"riscv_soc sram7 sram_63", false,-1, 127,0);
        tracep->declArray(c+3135,"riscv_soc sram7 bwen", false,-1, 127,0);
        tracep->declBit(c+405,"riscv_soc sram7 wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp2969;
    VlWide<4>/*127:0*/ __Vtemp2970;
    VlWide<4>/*127:0*/ __Vtemp2971;
    VlWide<4>/*127:0*/ __Vtemp2972;
    VlWide<4>/*127:0*/ __Vtemp2973;
    VlWide<4>/*127:0*/ __Vtemp2974;
    VlWide<4>/*127:0*/ __Vtemp2975;
    VlWide<4>/*127:0*/ __Vtemp2976;
    VlWide<4>/*127:0*/ __Vtemp2977;
    VlWide<4>/*127:0*/ __Vtemp2978;
    VlWide<4>/*127:0*/ __Vtemp2979;
    VlWide<4>/*127:0*/ __Vtemp2981;
    VlWide<4>/*127:0*/ __Vtemp2982;
    VlWide<4>/*127:0*/ __Vtemp2987;
    VlWide<4>/*127:0*/ __Vtemp2988;
    VlWide<4>/*127:0*/ __Vtemp2992;
    VlWide<4>/*127:0*/ __Vtemp2994;
    VlWide<4>/*127:0*/ __Vtemp2995;
    VlWide<4>/*127:0*/ __Vtemp2996;
    VlWide<3>/*95:0*/ __Vtemp2997;
    VlWide<3>/*95:0*/ __Vtemp2999;
    VlWide<3>/*95:0*/ __Vtemp3000;
    VlWide<3>/*95:0*/ __Vtemp3001;
    VlWide<3>/*95:0*/ __Vtemp3002;
    VlWide<3>/*95:0*/ __Vtemp3005;
    VlWide<3>/*95:0*/ __Vtemp3006;
    VlWide<3>/*95:0*/ __Vtemp3007;
    VlWide<5>/*159:0*/ __Vtemp3019;
    VlWide<5>/*159:0*/ __Vtemp3023;
    VlWide<3>/*95:0*/ __Vtemp3025;
    VlWide<5>/*159:0*/ __Vtemp3027;
    VlWide<5>/*159:0*/ __Vtemp3028;
    VlWide<5>/*159:0*/ __Vtemp3029;
    VlWide<5>/*159:0*/ __Vtemp3030;
    VlWide<5>/*159:0*/ __Vtemp3031;
    VlWide<5>/*159:0*/ __Vtemp3033;
    VlWide<5>/*159:0*/ __Vtemp3034;
    VlWide<5>/*159:0*/ __Vtemp3035;
    VlWide<5>/*159:0*/ __Vtemp3036;
    VlWide<5>/*159:0*/ __Vtemp3037;
    VlWide<5>/*159:0*/ __Vtemp3039;
    VlWide<5>/*159:0*/ __Vtemp3040;
    VlWide<5>/*159:0*/ __Vtemp3041;
    VlWide<5>/*159:0*/ __Vtemp3049;
    VlWide<5>/*159:0*/ __Vtemp3050;
    VlWide<5>/*159:0*/ __Vtemp3058;
    VlWide<4>/*127:0*/ __Vtemp3059;
    VlWide<4>/*127:0*/ __Vtemp3060;
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
        VL_EXTEND_WQ(128,54, __Vtemp2969, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        tracep->fullWData(oldp+32,(__Vtemp2969),128);
        tracep->fullWData(oldp+36,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
        tracep->fullCData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
        tracep->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        tracep->fullWData(oldp+42,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
        tracep->fullCData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+47,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
        tracep->fullCData(oldp+51,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr),6);
        tracep->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp2970[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp2970[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp2970[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp2970[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+53,(__Vtemp2970),128);
        tracep->fullWData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+61,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
        tracep->fullCData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp2971, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+66,(__Vtemp2971),128);
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
        tracep->fullQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [1U]),64);
        tracep->fullQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [2U]),64);
        tracep->fullQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [3U]),64);
        tracep->fullQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [4U]),64);
        tracep->fullQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [5U]),64);
        tracep->fullQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [6U]),64);
        tracep->fullQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [7U]),64);
        tracep->fullQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [8U]),64);
        tracep->fullQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [9U]),64);
        tracep->fullQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xaU]),64);
        tracep->fullQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xbU]),64);
        tracep->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xcU]),64);
        tracep->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xdU]),64);
        tracep->fullQData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xeU]),64);
        tracep->fullQData(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xfU]),64);
        tracep->fullQData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x10U]),64);
        tracep->fullQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x11U]),64);
        tracep->fullQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        tracep->fullQData(oldp+155,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
        tracep->fullBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
        tracep->fullBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
        tracep->fullBit(oldp+159,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        tracep->fullQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullBit(oldp+162,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        tracep->fullBit(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        tracep->fullQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        tracep->fullQData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
        tracep->fullBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        tracep->fullQData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        tracep->fullQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+179,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        tracep->fullCData(oldp+181,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        tracep->fullBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        tracep->fullBit(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+184,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+192,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+202,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        tracep->fullBit(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        tracep->fullQData(oldp+205,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
        tracep->fullQData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        tracep->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        tracep->fullQData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+212,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        tracep->fullBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        tracep->fullQData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        tracep->fullBit(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        tracep->fullQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        tracep->fullBit(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        tracep->fullQData(oldp+225,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                      ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                          : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                              : ((1U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                  : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
        tracep->fullBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        tracep->fullBit(oldp+231,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
        tracep->fullIData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
        tracep->fullQData(oldp+233,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                          : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                              : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
        tracep->fullBit(oldp+235,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
        tracep->fullBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullCData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        tracep->fullSData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+255,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
        tracep->fullQData(oldp+263,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        tracep->fullCData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        tracep->fullBit(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        tracep->fullSData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        tracep->fullBit(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        tracep->fullCData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        tracep->fullIData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        tracep->fullBit(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        tracep->fullCData(oldp+284,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+285,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0xfU))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0xfU)))
                                          ? 0ULL : 
                                         vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                         [(0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0xfU))]))),64);
        tracep->fullCData(oldp+287,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+288,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U)))
                                          ? 0ULL : 
                                         vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                         [(0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U))]))),64);
        tracep->fullSData(oldp+290,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+291,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        tracep->fullQData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        tracep->fullCData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        tracep->fullBit(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        tracep->fullBit(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        tracep->fullBit(oldp+299,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullWData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        tracep->fullWData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
        VL_EXTEND_WQ(128,54, __Vtemp2972, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp2973, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp2974[0U] = __Vtemp2972[0U];
            __Vtemp2974[1U] = __Vtemp2972[1U];
            __Vtemp2974[2U] = __Vtemp2972[2U];
            __Vtemp2974[3U] = __Vtemp2972[3U];
        } else {
            __Vtemp2974[0U] = __Vtemp2973[0U];
            __Vtemp2974[1U] = __Vtemp2973[1U];
            __Vtemp2974[2U] = __Vtemp2973[2U];
            __Vtemp2974[3U] = __Vtemp2973[3U];
        }
        tracep->fullWData(oldp+308,(__Vtemp2974),128);
        VL_EXTEND_WQ(128,54, __Vtemp2975, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp2976, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
            __Vtemp2977[0U] = __Vtemp2975[0U];
            __Vtemp2977[1U] = __Vtemp2975[1U];
            __Vtemp2977[2U] = __Vtemp2975[2U];
            __Vtemp2977[3U] = __Vtemp2975[3U];
        } else {
            __Vtemp2977[0U] = __Vtemp2976[0U];
            __Vtemp2977[1U] = __Vtemp2976[1U];
            __Vtemp2977[2U] = __Vtemp2976[2U];
            __Vtemp2977[3U] = __Vtemp2976[3U];
        }
        tracep->fullWData(oldp+312,(__Vtemp2977),128);
        tracep->fullBit(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        tracep->fullBit(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
        tracep->fullBit(oldp+318,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        tracep->fullQData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        tracep->fullQData(oldp+322,(((1U & (IData)(
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
        tracep->fullBit(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        tracep->fullQData(oldp+325,(((1U & (IData)(
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
        tracep->fullBit(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        tracep->fullCData(oldp+328,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        tracep->fullBit(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        tracep->fullBit(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullBit(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        tracep->fullQData(oldp+337,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullBit(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        tracep->fullBit(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        tracep->fullCData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        tracep->fullBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        tracep->fullBit(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        tracep->fullBit(oldp+344,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullBit(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        tracep->fullBit(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        tracep->fullQData(oldp+347,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+349,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+350,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        VL_EXTEND_WQ(128,54, __Vtemp2978, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp2979, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
        tracep->fullQData(oldp+351,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                           ? 
                                                          __Vtemp2978[1U]
                                                           : 
                                                          __Vtemp2979[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                            ? 
                                                           __Vtemp2978[0U]
                                                            : 
                                                           __Vtemp2979[0U])))))),54);
        VL_EXTEND_WQ(128,54, __Vtemp2981, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp2982, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
        tracep->fullQData(oldp+353,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                           ? 
                                                          __Vtemp2981[1U]
                                                           : 
                                                          __Vtemp2982[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                            ? 
                                                           __Vtemp2981[0U]
                                                            : 
                                                           __Vtemp2982[0U])))))),54);
        tracep->fullBit(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        tracep->fullBit(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        tracep->fullQData(oldp+357,((0xfffffffffffffff0ULL 
                                     & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        tracep->fullQData(oldp+359,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+361,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        tracep->fullQData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        tracep->fullBit(oldp+364,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        tracep->fullQData(oldp+365,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullQData(oldp+367,((~ (1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
        tracep->fullCData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        tracep->fullQData(oldp+370,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+372,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+373,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        tracep->fullCData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+386,((((QData)((IData)(
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
        tracep->fullWData(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+401,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+403,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+410,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
        tracep->fullQData(oldp+412,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
        tracep->fullBit(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+416,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+417,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+418,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+419,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+420,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+422,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+426,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+435,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+440,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+441,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+443,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
        tracep->fullIData(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
        tracep->fullBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
        tracep->fullQData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        tracep->fullBit(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
        tracep->fullBit(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullCData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        tracep->fullCData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        tracep->fullQData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        tracep->fullQData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        tracep->fullQData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        tracep->fullQData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        tracep->fullBit(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        tracep->fullCData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        tracep->fullCData(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        tracep->fullBit(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        tracep->fullBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        tracep->fullBit(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        tracep->fullBit(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        tracep->fullQData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        tracep->fullQData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        tracep->fullQData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        tracep->fullQData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        tracep->fullIData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        tracep->fullIData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        tracep->fullIData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        tracep->fullIData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        tracep->fullBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        tracep->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        tracep->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        tracep->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        tracep->fullBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullCData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullCData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        tracep->fullBit(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        tracep->fullBit(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        tracep->fullCData(oldp+494,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                            + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                           - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        tracep->fullCData(oldp+495,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))),6);
        tracep->fullWData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data),128);
        __Vtemp2987[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                           << 2U);
        __Vtemp2987[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                            >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                  >> 0x20U)) 
                                         << 2U));
        __Vtemp2987[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 9U)) << 3U) 
                           | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                              >> 2U)) 
                                     << 2U)) | ((IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                         >> 0x20U)) 
                                                >> 0x1eU)));
        __Vtemp2987[3U] = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 9U)) 
                                          >> 0x1dU) 
                                         | ((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 9U) 
                                                     >> 0x20U)) 
                                            << 3U)));
        VL_EXTEND_WW(128,123, __Vtemp2988, __Vtemp2987);
        tracep->fullWData(oldp+500,(__Vtemp2988),128);
        tracep->fullCData(oldp+504,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 3U)))),6);
        tracep->fullBit(oldp+505,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict))));
        tracep->fullQData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
        tracep->fullQData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
        tracep->fullQData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
        tracep->fullQData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
        tracep->fullQData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[4]),64);
        tracep->fullQData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[5]),64);
        tracep->fullBit(oldp+518,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
                                   & (2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])))));
        tracep->fullCData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        tracep->fullQData(oldp+520,(((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                                     [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                                      : 0ULL)),64);
        tracep->fullBit(oldp+522,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
                                   & ((2U != (3U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                      & (1U == (3U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))))));
        tracep->fullCData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        tracep->fullCData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        tracep->fullCData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        tracep->fullCData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        tracep->fullCData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        tracep->fullCData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        tracep->fullCData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        tracep->fullCData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        tracep->fullCData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        tracep->fullCData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        tracep->fullCData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        tracep->fullCData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        tracep->fullCData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        tracep->fullCData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        tracep->fullCData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        tracep->fullCData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        tracep->fullCData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        tracep->fullCData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        tracep->fullCData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        tracep->fullCData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        tracep->fullCData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        tracep->fullCData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        tracep->fullCData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        tracep->fullCData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        tracep->fullCData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        tracep->fullCData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        tracep->fullCData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        tracep->fullCData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        tracep->fullCData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        tracep->fullCData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        tracep->fullCData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        tracep->fullCData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        tracep->fullCData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        tracep->fullCData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        tracep->fullCData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        tracep->fullCData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        tracep->fullCData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        tracep->fullCData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        tracep->fullCData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        tracep->fullCData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        tracep->fullCData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        tracep->fullCData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        tracep->fullCData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        tracep->fullCData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        tracep->fullCData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        tracep->fullCData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        tracep->fullCData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        tracep->fullCData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        tracep->fullCData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        tracep->fullCData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        tracep->fullCData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        tracep->fullCData(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        tracep->fullCData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        tracep->fullCData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        tracep->fullCData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        tracep->fullCData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        tracep->fullCData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        tracep->fullCData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        tracep->fullCData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        tracep->fullCData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        tracep->fullCData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        tracep->fullCData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        tracep->fullCData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        tracep->fullCData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        __Vtemp2992[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                           << 2U);
        __Vtemp2992[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                            >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                  >> 0x20U)) 
                                         << 2U));
        __Vtemp2992[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 9U)) << 3U) 
                           | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                              >> 2U)) 
                                     << 2U)) | ((IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                         >> 0x20U)) 
                                                >> 0x1eU)));
        __Vtemp2992[3U] = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 9U)) 
                                          >> 0x1dU) 
                                         | ((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 9U) 
                                                     >> 0x20U)) 
                                            << 3U)));
        tracep->fullWData(oldp+587,(__Vtemp2992),123);
        tracep->fullQData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
        tracep->fullBit(oldp+593,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265) 
                                         >> 1U))));
        tracep->fullBit(oldp+594,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
                                         >> 0x1aU))));
        tracep->fullQData(oldp+595,((0xffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                           >> 2U)))),56);
        tracep->fullQData(oldp+597,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                                      >> 2U)))),64);
        tracep->fullCData(oldp+599,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])),2);
        tracep->fullBit(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        tracep->fullBit(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullBit(oldp+602,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
        tracep->fullBit(oldp+603,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
        tracep->fullQData(oldp+604,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                      : 0ULL)),64);
        tracep->fullBit(oldp+606,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+607,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
        tracep->fullQData(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+613,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
        tracep->fullBit(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
        tracep->fullQData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
        tracep->fullBit(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        tracep->fullQData(oldp+619,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
        tracep->fullQData(oldp+621,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
        tracep->fullQData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullBit(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        tracep->fullQData(oldp+628,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        tracep->fullBit(oldp+630,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
        tracep->fullBit(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        tracep->fullQData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        tracep->fullBit(oldp+635,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                   & ((0U != (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        tracep->fullQData(oldp+636,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        tracep->fullSData(oldp+638,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        tracep->fullCData(oldp+640,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),6);
        tracep->fullBit(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        tracep->fullBit(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        tracep->fullCData(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullBit(oldp+644,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        tracep->fullBit(oldp+645,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+646,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+647,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 3U))));
        tracep->fullCData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        tracep->fullBit(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        tracep->fullBit(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        tracep->fullBit(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+662,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        tracep->fullQData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        tracep->fullBit(oldp+669,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U)))));
        tracep->fullQData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+672,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullBit(oldp+673,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullQData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullQData(oldp+676,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        tracep->fullWData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        tracep->fullBit(oldp+681,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        tracep->fullBit(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp2994, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp2995, __Vtemp2994, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp2996[0U] = __Vtemp2995[0U];
        __Vtemp2996[1U] = __Vtemp2995[1U];
        __Vtemp2996[2U] = __Vtemp2995[2U];
        __Vtemp2996[3U] = (0x7fffffffU & __Vtemp2995[3U]);
        tracep->fullWData(oldp+684,(__Vtemp2996),127);
        tracep->fullQData(oldp+688,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                     >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+690,(VL_SHIFTRS_QQI(64,64,6, 
                                                   ((1U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+692,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? VL_SHIFTRS_QQI(64,64,6, 
                                                       ((1U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                      : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                           ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
        tracep->fullCData(oldp+694,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U))),3);
        tracep->fullQData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
        tracep->fullBit(oldp+697,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        tracep->fullBit(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        tracep->fullQData(oldp+699,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp2997[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp2997[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 0x20U));
        __Vtemp2997[2U] = 1U;
        tracep->fullWData(oldp+701,(__Vtemp2997),65);
        tracep->fullQData(oldp+704,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        tracep->fullWData(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        tracep->fullQData(oldp+711,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+713,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullBit(oldp+714,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        tracep->fullBit(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
        tracep->fullQData(oldp+716,((((QData)((IData)(
                                                      ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
        tracep->fullQData(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullCData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        tracep->fullQData(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        tracep->fullQData(oldp+728,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
        tracep->fullQData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        tracep->fullQData(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        tracep->fullBit(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        tracep->fullWData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        tracep->fullBit(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        tracep->fullBit(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        tracep->fullQData(oldp+742,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullBit(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        tracep->fullQData(oldp+747,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        tracep->fullBit(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullBit(oldp+751,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullWData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp2999[0U] = 1U;
        __Vtemp2999[1U] = 0U;
        __Vtemp2999[2U] = 0U;
        __Vtemp3000[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp3000[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp3000[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp3001, __Vtemp2999, __Vtemp3000);
        __Vtemp3002[0U] = __Vtemp3001[0U];
        __Vtemp3002[1U] = __Vtemp3001[1U];
        __Vtemp3002[2U] = (1U & __Vtemp3001[2U]);
        tracep->fullWData(oldp+773,(__Vtemp3002),65);
        tracep->fullCData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+784,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp3005[0U] = 1U;
        __Vtemp3005[1U] = 0U;
        __Vtemp3005[2U] = 0U;
        __Vtemp3006[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp3006[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp3006[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp3007, __Vtemp3005, __Vtemp3006);
        tracep->fullBit(oldp+785,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ __Vtemp3007[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp3007[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ (1U 
                                                & __Vtemp3007[2U]))))));
        tracep->fullBit(oldp+786,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullBit(oldp+788,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        tracep->fullBit(oldp+789,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                         >> 3U))));
        tracep->fullQData(oldp+790,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullQData(oldp+792,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+794,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))));
        tracep->fullBit(oldp+795,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U))));
        VL_EXTEND_WQ(130,64, __Vtemp3019, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp3023[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            __Vtemp3023[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3023[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3023[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3023[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x1fU)))
                                ? 3U : 0U);
        } else {
            __Vtemp3023[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                                : __Vtemp3019[0U]);
            __Vtemp3023[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                           >> 0x20U))
                                : __Vtemp3019[1U]);
            __Vtemp3023[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x3fU)))
                                    ? 0xffffffffU : 0U)
                                : __Vtemp3019[2U]);
            __Vtemp3023[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x3fU)))
                                    ? 0xffffffffU : 0U)
                                : __Vtemp3019[3U]);
            __Vtemp3023[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x3fU)))
                                    ? 3U : 0U) : __Vtemp3019[4U]);
        }
        tracep->fullWData(oldp+796,(__Vtemp3023),130);
        tracep->fullWData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp3025[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           << 1U);
        __Vtemp3025[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                            >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                         << 1U));
        __Vtemp3025[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                  << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                << 1U)));
        tracep->fullWData(oldp+804,(__Vtemp3025),67);
        tracep->fullCData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        __Vtemp3027[0U] = 1U;
        __Vtemp3027[1U] = 0U;
        __Vtemp3027[2U] = 0U;
        __Vtemp3027[3U] = 0U;
        __Vtemp3027[4U] = 0U;
        __Vtemp3028[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3028[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3028[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3028[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3028[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3029, __Vtemp3027, __Vtemp3028);
        __Vtemp3030[0U] = __Vtemp3029[0U];
        __Vtemp3030[1U] = __Vtemp3029[1U];
        __Vtemp3030[2U] = __Vtemp3029[2U];
        __Vtemp3030[3U] = __Vtemp3029[3U];
        __Vtemp3030[4U] = (3U & __Vtemp3029[4U]);
        VL_EXTEND_WW(131,130, __Vtemp3031, __Vtemp3030);
        __Vtemp3033[0U] = 1U;
        __Vtemp3033[1U] = 0U;
        __Vtemp3033[2U] = 0U;
        __Vtemp3033[3U] = 0U;
        __Vtemp3033[4U] = 0U;
        __Vtemp3034[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3034[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3034[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3034[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3034[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3035, __Vtemp3033, __Vtemp3034);
        __Vtemp3036[0U] = __Vtemp3035[0U];
        __Vtemp3036[1U] = __Vtemp3035[1U];
        __Vtemp3036[2U] = __Vtemp3035[2U];
        __Vtemp3036[3U] = __Vtemp3035[3U];
        __Vtemp3036[4U] = (3U & __Vtemp3035[4U]);
        VL_EXTEND_WW(131,130, __Vtemp3037, __Vtemp3036);
        __Vtemp3039[0U] = 1U;
        __Vtemp3039[1U] = 0U;
        __Vtemp3039[2U] = 0U;
        __Vtemp3039[3U] = 0U;
        __Vtemp3039[4U] = 0U;
        __Vtemp3040[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3040[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3040[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3040[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3040[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3041, __Vtemp3039, __Vtemp3040);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp3049[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp3049[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp3049[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp3049[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp3049[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp3049[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                : 0U);
            __Vtemp3049[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                : 0U);
            __Vtemp3049[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                : 0U);
            __Vtemp3049[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                : 0U);
            __Vtemp3049[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp3050, __Vtemp3049);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp3058[0U] = __Vtemp3031[0U];
            __Vtemp3058[1U] = __Vtemp3031[1U];
            __Vtemp3058[2U] = __Vtemp3031[2U];
            __Vtemp3058[3U] = __Vtemp3031[3U];
            __Vtemp3058[4U] = __Vtemp3031[4U];
        } else {
            __Vtemp3058[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3037[0U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? (__Vtemp3041[0U] 
                                    << 1U) : ((3U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                  << 1U)
                                               : __Vtemp3050[0U])));
            __Vtemp3058[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3037[1U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3041[0U] 
                                     >> 0x1fU) | (__Vtemp3041[1U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                           << 1U)) : 
                                    __Vtemp3050[1U])));
            __Vtemp3058[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3037[2U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3041[1U] 
                                     >> 0x1fU) | (__Vtemp3041[2U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                           << 1U)) : 
                                    __Vtemp3050[2U])));
            __Vtemp3058[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3037[3U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3041[2U] 
                                     >> 0x1fU) | (__Vtemp3041[3U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                           << 1U)) : 
                                    __Vtemp3050[3U])));
            __Vtemp3058[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3037[4U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3041[3U] 
                                     >> 0x1fU) | (6U 
                                                  & (__Vtemp3041[4U] 
                                                     << 1U)))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                           << 1U)) : 
                                    __Vtemp3050[4U])));
        }
        tracep->fullWData(oldp+822,(__Vtemp3058),131);
        tracep->fullCData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullBit(oldp+828,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+829,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        tracep->fullBit(oldp+830,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 4U))));
        tracep->fullQData(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullQData(oldp+837,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                      : ((3U == (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                          : ((5U == 
                                              (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullBit(oldp+839,((0x10U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+840,((0x18U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+841,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+842,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+843,(((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))) 
                                   | (8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
        tracep->fullCData(oldp+844,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),4);
        tracep->fullBit(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+846,(((0xffffffffffffff77ULL 
                                      & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                     | (QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                    >> 7U)))
                                                         ? 0x88U
                                                         : 0x80U))))),64);
        tracep->fullCData(oldp+848,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+849,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullBit(oldp+850,(((0x33U == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   | ((0x13U == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x3bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     | ((0x63U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        & ((0x5063U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           & ((0x7063U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              & ((0x4063U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                 & ((0x6063U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_434)))))))))))))));
        tracep->fullBit(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
        tracep->fullBit(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
        tracep->fullCData(oldp+853,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullQData(oldp+854,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[0]),64);
        tracep->fullQData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[1]),64);
        tracep->fullQData(oldp+858,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[2]),64);
        tracep->fullQData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[3]),64);
        tracep->fullQData(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[4]),64);
        tracep->fullQData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[5]),64);
        tracep->fullQData(oldp+866,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[6]),64);
        tracep->fullQData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[7]),64);
        tracep->fullQData(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[8]),64);
        tracep->fullQData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[9]),64);
        tracep->fullQData(oldp+874,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[10]),64);
        tracep->fullQData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[11]),64);
        tracep->fullQData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[12]),64);
        tracep->fullQData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[13]),64);
        tracep->fullQData(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[14]),64);
        tracep->fullQData(oldp+884,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[15]),64);
        tracep->fullQData(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[16]),64);
        tracep->fullQData(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[17]),64);
        tracep->fullQData(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[18]),64);
        tracep->fullQData(oldp+892,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[19]),64);
        tracep->fullQData(oldp+894,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[20]),64);
        tracep->fullQData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[21]),64);
        tracep->fullQData(oldp+898,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[22]),64);
        tracep->fullQData(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[23]),64);
        tracep->fullQData(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[24]),64);
        tracep->fullQData(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[25]),64);
        tracep->fullQData(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[26]),64);
        tracep->fullQData(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[27]),64);
        tracep->fullQData(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[28]),64);
        tracep->fullQData(oldp+912,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[29]),64);
        tracep->fullQData(oldp+914,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[30]),64);
        tracep->fullQData(oldp+916,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[31]),64);
        tracep->fullQData(oldp+918,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+922,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0U]),64);
        tracep->fullBit(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+927,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+929,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+931,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+933,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+935,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+937,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+939,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+941,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+943,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+945,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+947,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+950,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullBit(oldp+951,((0x4000U == (0xffffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullQData(oldp+952,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                      ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                      : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+954,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+956,((((QData)((IData)(
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
        tracep->fullBit(oldp+958,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+959,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+961,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+962,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+963,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+964,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                        ? 0xffU : 0U) 
                                      << 0x18U) | (
                                                   (((4U 
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
                                                          : 0U))))),32);
        tracep->fullIData(oldp+965,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                        ? 0xffU : 0U) 
                                      << 0x18U) | (
                                                   (((0x40U 
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
                                                          : 0U))))),32);
        tracep->fullWData(oldp+966,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
        tracep->fullWData(oldp+970,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
        tracep->fullWData(oldp+974,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
        tracep->fullWData(oldp+978,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
        tracep->fullWData(oldp+982,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
        tracep->fullWData(oldp+986,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
        tracep->fullWData(oldp+990,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
        tracep->fullWData(oldp+994,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
        tracep->fullWData(oldp+998,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
        tracep->fullWData(oldp+1002,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
        tracep->fullWData(oldp+1006,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
        tracep->fullWData(oldp+1010,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
        tracep->fullWData(oldp+1014,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
        tracep->fullWData(oldp+1018,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
        tracep->fullWData(oldp+1022,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
        tracep->fullWData(oldp+1026,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
        tracep->fullWData(oldp+1030,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
        tracep->fullWData(oldp+1034,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
        tracep->fullWData(oldp+1038,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
        tracep->fullWData(oldp+1042,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
        tracep->fullWData(oldp+1046,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
        tracep->fullWData(oldp+1050,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
        tracep->fullWData(oldp+1054,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
        tracep->fullWData(oldp+1058,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
        tracep->fullWData(oldp+1062,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
        tracep->fullWData(oldp+1066,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
        tracep->fullWData(oldp+1070,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
        tracep->fullWData(oldp+1074,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
        tracep->fullWData(oldp+1078,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
        tracep->fullWData(oldp+1082,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
        tracep->fullWData(oldp+1086,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
        tracep->fullWData(oldp+1090,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
        tracep->fullWData(oldp+1094,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
        tracep->fullWData(oldp+1098,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
        tracep->fullWData(oldp+1102,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
        tracep->fullWData(oldp+1106,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
        tracep->fullWData(oldp+1110,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
        tracep->fullWData(oldp+1114,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
        tracep->fullWData(oldp+1118,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
        tracep->fullWData(oldp+1122,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
        tracep->fullWData(oldp+1126,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
        tracep->fullWData(oldp+1130,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
        tracep->fullWData(oldp+1134,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
        tracep->fullWData(oldp+1138,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
        tracep->fullWData(oldp+1142,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
        tracep->fullWData(oldp+1146,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
        tracep->fullWData(oldp+1150,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
        tracep->fullWData(oldp+1154,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
        tracep->fullWData(oldp+1158,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
        tracep->fullWData(oldp+1162,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
        tracep->fullWData(oldp+1166,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
        tracep->fullWData(oldp+1170,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
        tracep->fullWData(oldp+1174,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
        tracep->fullWData(oldp+1178,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
        tracep->fullWData(oldp+1182,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
        tracep->fullWData(oldp+1186,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
        tracep->fullWData(oldp+1190,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
        tracep->fullWData(oldp+1194,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
        tracep->fullWData(oldp+1198,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
        tracep->fullWData(oldp+1202,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
        tracep->fullWData(oldp+1206,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
        tracep->fullWData(oldp+1210,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
        tracep->fullWData(oldp+1214,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
        tracep->fullWData(oldp+1218,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
        tracep->fullWData(oldp+1222,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
        tracep->fullWData(oldp+1226,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
        tracep->fullWData(oldp+1230,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
        tracep->fullWData(oldp+1234,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
        tracep->fullWData(oldp+1238,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
        tracep->fullWData(oldp+1242,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
        tracep->fullWData(oldp+1246,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
        tracep->fullWData(oldp+1250,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
        tracep->fullWData(oldp+1254,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
        tracep->fullWData(oldp+1258,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
        tracep->fullWData(oldp+1262,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
        tracep->fullWData(oldp+1266,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
        tracep->fullWData(oldp+1270,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
        tracep->fullWData(oldp+1274,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
        tracep->fullWData(oldp+1278,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
        tracep->fullWData(oldp+1282,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
        tracep->fullWData(oldp+1286,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
        tracep->fullWData(oldp+1290,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
        tracep->fullWData(oldp+1294,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
        tracep->fullWData(oldp+1298,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
        tracep->fullWData(oldp+1302,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
        tracep->fullWData(oldp+1306,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
        tracep->fullWData(oldp+1310,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
        tracep->fullWData(oldp+1314,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
        tracep->fullWData(oldp+1318,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
        tracep->fullWData(oldp+1322,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
        tracep->fullWData(oldp+1326,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
        tracep->fullWData(oldp+1330,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
        tracep->fullWData(oldp+1334,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
        tracep->fullWData(oldp+1338,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
        tracep->fullWData(oldp+1342,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
        tracep->fullWData(oldp+1346,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
        tracep->fullWData(oldp+1350,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
        tracep->fullWData(oldp+1354,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
        tracep->fullWData(oldp+1358,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
        tracep->fullWData(oldp+1362,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
        tracep->fullWData(oldp+1366,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
        tracep->fullWData(oldp+1370,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
        tracep->fullWData(oldp+1374,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
        tracep->fullWData(oldp+1378,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
        tracep->fullWData(oldp+1382,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
        tracep->fullWData(oldp+1386,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
        tracep->fullWData(oldp+1390,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
        tracep->fullWData(oldp+1394,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
        tracep->fullWData(oldp+1398,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
        tracep->fullWData(oldp+1402,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
        tracep->fullWData(oldp+1406,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
        tracep->fullWData(oldp+1410,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
        tracep->fullWData(oldp+1414,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
        tracep->fullWData(oldp+1418,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
        tracep->fullWData(oldp+1422,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
        tracep->fullWData(oldp+1426,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
        tracep->fullWData(oldp+1430,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
        tracep->fullWData(oldp+1434,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
        tracep->fullWData(oldp+1438,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
        tracep->fullWData(oldp+1442,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
        tracep->fullWData(oldp+1446,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
        tracep->fullWData(oldp+1450,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
        tracep->fullWData(oldp+1454,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
        tracep->fullWData(oldp+1458,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
        tracep->fullWData(oldp+1462,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
        tracep->fullWData(oldp+1466,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
        tracep->fullWData(oldp+1470,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
        tracep->fullWData(oldp+1474,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
        tracep->fullWData(oldp+1478,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
        tracep->fullWData(oldp+1482,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
        tracep->fullWData(oldp+1486,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
        tracep->fullWData(oldp+1490,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
        tracep->fullWData(oldp+1494,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
        tracep->fullWData(oldp+1498,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
        tracep->fullWData(oldp+1502,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
        tracep->fullWData(oldp+1506,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
        tracep->fullWData(oldp+1510,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
        tracep->fullWData(oldp+1514,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
        tracep->fullWData(oldp+1518,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
        tracep->fullWData(oldp+1522,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
        tracep->fullWData(oldp+1526,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
        tracep->fullWData(oldp+1530,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
        tracep->fullWData(oldp+1534,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
        tracep->fullWData(oldp+1538,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
        tracep->fullWData(oldp+1542,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
        tracep->fullWData(oldp+1546,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
        tracep->fullWData(oldp+1550,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
        tracep->fullWData(oldp+1554,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
        tracep->fullWData(oldp+1558,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
        tracep->fullWData(oldp+1562,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
        tracep->fullWData(oldp+1566,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
        tracep->fullWData(oldp+1570,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
        tracep->fullWData(oldp+1574,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
        tracep->fullWData(oldp+1578,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
        tracep->fullWData(oldp+1582,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
        tracep->fullWData(oldp+1586,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
        tracep->fullWData(oldp+1590,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
        tracep->fullWData(oldp+1594,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
        tracep->fullWData(oldp+1598,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
        tracep->fullWData(oldp+1602,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
        tracep->fullWData(oldp+1606,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
        tracep->fullWData(oldp+1610,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
        tracep->fullWData(oldp+1614,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
        tracep->fullWData(oldp+1618,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
        tracep->fullWData(oldp+1622,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
        tracep->fullWData(oldp+1626,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
        tracep->fullWData(oldp+1630,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
        tracep->fullWData(oldp+1634,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
        tracep->fullWData(oldp+1638,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
        tracep->fullWData(oldp+1642,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
        tracep->fullWData(oldp+1646,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
        tracep->fullWData(oldp+1650,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
        tracep->fullWData(oldp+1654,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
        tracep->fullWData(oldp+1658,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
        tracep->fullWData(oldp+1662,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
        tracep->fullWData(oldp+1666,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
        tracep->fullWData(oldp+1670,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
        tracep->fullWData(oldp+1674,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
        tracep->fullWData(oldp+1678,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
        tracep->fullWData(oldp+1682,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
        tracep->fullWData(oldp+1686,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
        tracep->fullWData(oldp+1690,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
        tracep->fullWData(oldp+1694,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
        tracep->fullWData(oldp+1698,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
        tracep->fullWData(oldp+1702,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
        tracep->fullWData(oldp+1706,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
        tracep->fullWData(oldp+1710,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
        tracep->fullWData(oldp+1714,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
        tracep->fullWData(oldp+1718,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
        tracep->fullWData(oldp+1722,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
        tracep->fullWData(oldp+1726,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
        tracep->fullWData(oldp+1730,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
        tracep->fullWData(oldp+1734,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
        tracep->fullWData(oldp+1738,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
        tracep->fullWData(oldp+1742,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
        tracep->fullWData(oldp+1746,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
        tracep->fullWData(oldp+1750,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
        tracep->fullWData(oldp+1754,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
        tracep->fullWData(oldp+1758,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
        tracep->fullWData(oldp+1762,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
        tracep->fullWData(oldp+1766,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
        tracep->fullWData(oldp+1770,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
        tracep->fullWData(oldp+1774,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
        tracep->fullWData(oldp+1778,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
        tracep->fullWData(oldp+1782,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
        tracep->fullWData(oldp+1786,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
        tracep->fullWData(oldp+1790,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
        tracep->fullWData(oldp+1794,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
        tracep->fullWData(oldp+1798,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
        tracep->fullWData(oldp+1802,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
        tracep->fullWData(oldp+1806,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
        tracep->fullWData(oldp+1810,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
        tracep->fullWData(oldp+1814,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
        tracep->fullWData(oldp+1818,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
        tracep->fullWData(oldp+1822,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
        tracep->fullWData(oldp+1826,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
        tracep->fullWData(oldp+1830,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
        tracep->fullWData(oldp+1834,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
        tracep->fullWData(oldp+1838,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
        tracep->fullWData(oldp+1842,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
        tracep->fullWData(oldp+1846,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
        tracep->fullWData(oldp+1850,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
        tracep->fullWData(oldp+1854,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
        tracep->fullWData(oldp+1858,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
        tracep->fullWData(oldp+1862,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
        tracep->fullWData(oldp+1866,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
        tracep->fullWData(oldp+1870,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
        tracep->fullWData(oldp+1874,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
        tracep->fullWData(oldp+1878,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
        tracep->fullWData(oldp+1882,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
        tracep->fullWData(oldp+1886,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
        tracep->fullWData(oldp+1890,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
        tracep->fullWData(oldp+1894,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
        tracep->fullWData(oldp+1898,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
        tracep->fullWData(oldp+1902,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
        tracep->fullWData(oldp+1906,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
        tracep->fullWData(oldp+1910,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
        tracep->fullWData(oldp+1914,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
        tracep->fullWData(oldp+1918,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
        tracep->fullWData(oldp+1922,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
        tracep->fullWData(oldp+1926,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
        tracep->fullWData(oldp+1930,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
        tracep->fullWData(oldp+1934,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
        tracep->fullWData(oldp+1938,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
        tracep->fullWData(oldp+1942,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
        tracep->fullWData(oldp+1946,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
        tracep->fullWData(oldp+1950,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
        tracep->fullWData(oldp+1954,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
        tracep->fullWData(oldp+1958,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
        tracep->fullWData(oldp+1962,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
        tracep->fullWData(oldp+1966,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
        tracep->fullWData(oldp+1970,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
        tracep->fullWData(oldp+1974,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
        tracep->fullWData(oldp+1978,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
        tracep->fullWData(oldp+1982,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
        tracep->fullWData(oldp+1986,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
        tracep->fullWData(oldp+1990,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
        tracep->fullWData(oldp+1994,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
        tracep->fullWData(oldp+1998,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
        tracep->fullWData(oldp+2002,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
        tracep->fullWData(oldp+2006,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
        tracep->fullWData(oldp+2010,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
        tracep->fullWData(oldp+2014,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
        tracep->fullWData(oldp+2018,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
        tracep->fullWData(oldp+2022,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
        tracep->fullWData(oldp+2026,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
        tracep->fullWData(oldp+2030,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
        tracep->fullWData(oldp+2034,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
        tracep->fullWData(oldp+2038,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
        tracep->fullWData(oldp+2042,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
        tracep->fullWData(oldp+2046,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
        tracep->fullWData(oldp+2050,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
        tracep->fullWData(oldp+2054,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
        tracep->fullWData(oldp+2058,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
        tracep->fullWData(oldp+2062,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
        tracep->fullWData(oldp+2066,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
        tracep->fullWData(oldp+2070,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
        tracep->fullWData(oldp+2074,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
        tracep->fullWData(oldp+2078,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
        tracep->fullWData(oldp+2082,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
        tracep->fullWData(oldp+2086,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
        tracep->fullWData(oldp+2090,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
        tracep->fullWData(oldp+2094,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
        tracep->fullWData(oldp+2098,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
        tracep->fullWData(oldp+2102,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
        tracep->fullWData(oldp+2106,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
        tracep->fullWData(oldp+2110,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
        tracep->fullWData(oldp+2114,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
        tracep->fullWData(oldp+2118,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
        tracep->fullWData(oldp+2122,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
        tracep->fullWData(oldp+2126,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
        tracep->fullWData(oldp+2130,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
        tracep->fullWData(oldp+2134,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
        tracep->fullWData(oldp+2138,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
        tracep->fullWData(oldp+2142,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
        tracep->fullWData(oldp+2146,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
        tracep->fullWData(oldp+2150,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
        tracep->fullWData(oldp+2154,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
        tracep->fullWData(oldp+2158,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
        tracep->fullWData(oldp+2162,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
        tracep->fullWData(oldp+2166,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
        tracep->fullWData(oldp+2170,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
        tracep->fullWData(oldp+2174,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
        tracep->fullWData(oldp+2178,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
        tracep->fullWData(oldp+2182,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
        tracep->fullWData(oldp+2186,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
        tracep->fullWData(oldp+2190,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
        tracep->fullWData(oldp+2194,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
        tracep->fullWData(oldp+2198,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
        tracep->fullWData(oldp+2202,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
        tracep->fullWData(oldp+2206,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
        tracep->fullWData(oldp+2210,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
        tracep->fullWData(oldp+2214,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
        tracep->fullWData(oldp+2218,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
        tracep->fullWData(oldp+2222,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
        tracep->fullWData(oldp+2226,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
        tracep->fullWData(oldp+2230,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
        tracep->fullWData(oldp+2234,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
        tracep->fullWData(oldp+2238,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
        tracep->fullWData(oldp+2242,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
        tracep->fullWData(oldp+2246,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
        tracep->fullWData(oldp+2250,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
        tracep->fullWData(oldp+2254,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
        tracep->fullWData(oldp+2258,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
        tracep->fullWData(oldp+2262,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
        tracep->fullWData(oldp+2266,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
        tracep->fullWData(oldp+2270,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
        tracep->fullWData(oldp+2274,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
        tracep->fullWData(oldp+2278,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
        tracep->fullWData(oldp+2282,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
        tracep->fullWData(oldp+2286,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
        tracep->fullWData(oldp+2290,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
        tracep->fullWData(oldp+2294,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
        tracep->fullWData(oldp+2298,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
        tracep->fullWData(oldp+2302,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
        tracep->fullWData(oldp+2306,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
        tracep->fullWData(oldp+2310,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
        tracep->fullWData(oldp+2314,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
        tracep->fullWData(oldp+2318,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
        tracep->fullWData(oldp+2322,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
        tracep->fullWData(oldp+2326,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
        tracep->fullWData(oldp+2330,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
        tracep->fullWData(oldp+2334,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
        tracep->fullWData(oldp+2338,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
        tracep->fullWData(oldp+2342,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
        tracep->fullWData(oldp+2346,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
        tracep->fullWData(oldp+2350,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
        tracep->fullWData(oldp+2354,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
        tracep->fullWData(oldp+2358,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
        tracep->fullWData(oldp+2362,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
        tracep->fullWData(oldp+2366,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
        tracep->fullWData(oldp+2370,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
        tracep->fullWData(oldp+2374,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
        tracep->fullWData(oldp+2378,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
        tracep->fullWData(oldp+2382,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
        tracep->fullWData(oldp+2386,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
        tracep->fullWData(oldp+2390,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
        tracep->fullWData(oldp+2394,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
        tracep->fullWData(oldp+2398,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
        tracep->fullWData(oldp+2402,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
        tracep->fullWData(oldp+2406,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
        tracep->fullWData(oldp+2410,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
        tracep->fullWData(oldp+2414,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
        tracep->fullWData(oldp+2418,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
        tracep->fullWData(oldp+2422,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
        tracep->fullWData(oldp+2426,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
        tracep->fullWData(oldp+2430,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
        tracep->fullWData(oldp+2434,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
        tracep->fullWData(oldp+2438,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
        tracep->fullWData(oldp+2442,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
        tracep->fullWData(oldp+2446,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
        tracep->fullWData(oldp+2450,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
        tracep->fullWData(oldp+2454,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
        tracep->fullWData(oldp+2458,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
        tracep->fullWData(oldp+2462,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
        tracep->fullWData(oldp+2466,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
        tracep->fullWData(oldp+2470,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
        tracep->fullWData(oldp+2474,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
        tracep->fullWData(oldp+2478,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
        tracep->fullWData(oldp+2482,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
        tracep->fullWData(oldp+2486,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
        tracep->fullWData(oldp+2490,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
        tracep->fullWData(oldp+2494,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
        tracep->fullWData(oldp+2498,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
        tracep->fullWData(oldp+2502,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
        tracep->fullWData(oldp+2506,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
        tracep->fullWData(oldp+2510,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
        tracep->fullWData(oldp+2514,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
        tracep->fullWData(oldp+2518,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
        tracep->fullWData(oldp+2522,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
        tracep->fullWData(oldp+2526,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
        tracep->fullWData(oldp+2530,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
        tracep->fullWData(oldp+2534,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
        tracep->fullWData(oldp+2538,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
        tracep->fullWData(oldp+2542,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
        tracep->fullWData(oldp+2546,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
        tracep->fullWData(oldp+2550,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
        tracep->fullWData(oldp+2554,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
        tracep->fullWData(oldp+2558,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
        tracep->fullWData(oldp+2562,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
        tracep->fullWData(oldp+2566,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
        tracep->fullWData(oldp+2570,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
        tracep->fullWData(oldp+2574,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
        tracep->fullWData(oldp+2578,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
        tracep->fullWData(oldp+2582,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
        tracep->fullWData(oldp+2586,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
        tracep->fullWData(oldp+2590,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
        tracep->fullWData(oldp+2594,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
        tracep->fullWData(oldp+2598,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
        tracep->fullWData(oldp+2602,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
        tracep->fullWData(oldp+2606,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
        tracep->fullWData(oldp+2610,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
        tracep->fullWData(oldp+2614,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
        tracep->fullWData(oldp+2618,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
        tracep->fullWData(oldp+2622,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
        tracep->fullWData(oldp+2626,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
        tracep->fullWData(oldp+2630,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
        tracep->fullWData(oldp+2634,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
        tracep->fullWData(oldp+2638,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
        tracep->fullWData(oldp+2642,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
        tracep->fullWData(oldp+2646,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
        tracep->fullWData(oldp+2650,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
        tracep->fullWData(oldp+2654,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
        tracep->fullWData(oldp+2658,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
        tracep->fullWData(oldp+2662,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
        tracep->fullWData(oldp+2666,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
        tracep->fullWData(oldp+2670,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
        tracep->fullWData(oldp+2674,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
        tracep->fullWData(oldp+2678,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
        tracep->fullWData(oldp+2682,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
        tracep->fullWData(oldp+2686,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
        tracep->fullWData(oldp+2690,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
        tracep->fullWData(oldp+2694,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
        tracep->fullWData(oldp+2698,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
        tracep->fullWData(oldp+2702,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
        tracep->fullWData(oldp+2706,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
        tracep->fullWData(oldp+2710,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
        tracep->fullWData(oldp+2714,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
        tracep->fullWData(oldp+2718,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
        tracep->fullWData(oldp+2722,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
        tracep->fullWData(oldp+2726,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
        tracep->fullWData(oldp+2730,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
        tracep->fullWData(oldp+2734,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
        tracep->fullWData(oldp+2738,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
        tracep->fullWData(oldp+2742,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
        tracep->fullWData(oldp+2746,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
        tracep->fullWData(oldp+2750,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
        tracep->fullWData(oldp+2754,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
        tracep->fullWData(oldp+2758,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
        tracep->fullWData(oldp+2762,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
        tracep->fullWData(oldp+2766,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
        tracep->fullWData(oldp+2770,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
        tracep->fullWData(oldp+2774,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
        tracep->fullWData(oldp+2778,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
        tracep->fullWData(oldp+2782,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
        tracep->fullWData(oldp+2786,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
        tracep->fullWData(oldp+2790,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
        tracep->fullWData(oldp+2794,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
        tracep->fullWData(oldp+2798,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
        tracep->fullWData(oldp+2802,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
        tracep->fullWData(oldp+2806,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
        tracep->fullWData(oldp+2810,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
        tracep->fullWData(oldp+2814,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
        tracep->fullWData(oldp+2818,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
        tracep->fullWData(oldp+2822,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
        tracep->fullWData(oldp+2826,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
        tracep->fullWData(oldp+2830,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
        tracep->fullWData(oldp+2834,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
        tracep->fullWData(oldp+2838,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
        tracep->fullWData(oldp+2842,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
        tracep->fullWData(oldp+2846,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
        tracep->fullWData(oldp+2850,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
        tracep->fullWData(oldp+2854,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
        tracep->fullWData(oldp+2858,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
        tracep->fullWData(oldp+2862,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
        tracep->fullWData(oldp+2866,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
        tracep->fullWData(oldp+2870,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
        tracep->fullWData(oldp+2874,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
        tracep->fullWData(oldp+2878,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
        tracep->fullWData(oldp+2882,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
        tracep->fullWData(oldp+2886,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
        tracep->fullWData(oldp+2890,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
        tracep->fullWData(oldp+2894,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
        tracep->fullWData(oldp+2898,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
        tracep->fullWData(oldp+2902,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
        tracep->fullWData(oldp+2906,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
        tracep->fullWData(oldp+2910,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
        tracep->fullWData(oldp+2914,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
        tracep->fullWData(oldp+2918,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
        tracep->fullWData(oldp+2922,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
        tracep->fullWData(oldp+2926,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
        tracep->fullWData(oldp+2930,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
        tracep->fullWData(oldp+2934,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
        tracep->fullWData(oldp+2938,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
        tracep->fullWData(oldp+2942,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
        tracep->fullWData(oldp+2946,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
        tracep->fullWData(oldp+2950,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
        tracep->fullWData(oldp+2954,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
        tracep->fullWData(oldp+2958,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
        tracep->fullWData(oldp+2962,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
        tracep->fullWData(oldp+2966,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
        tracep->fullWData(oldp+2970,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
        tracep->fullWData(oldp+2974,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
        tracep->fullWData(oldp+2978,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
        tracep->fullWData(oldp+2982,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
        tracep->fullWData(oldp+2986,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
        tracep->fullWData(oldp+2990,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
        tracep->fullWData(oldp+2994,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
        tracep->fullWData(oldp+2998,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
        tracep->fullWData(oldp+3002,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
        tracep->fullWData(oldp+3006,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
        tracep->fullWData(oldp+3010,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
        tracep->fullBit(oldp+3014,(vlSelf->clock));
        tracep->fullBit(oldp+3015,(vlSelf->reset));
        tracep->fullQData(oldp+3016,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+3018,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+3020,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+3022,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+3024,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+3026,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+3028,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+3030,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+3032,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+3034,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+3036,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+3038,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+3040,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+3042,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+3044,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+3046,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+3048,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+3050,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+3052,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+3054,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+3056,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+3058,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+3060,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+3062,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+3064,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+3066,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+3068,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+3070,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+3072,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+3074,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+3076,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+3078,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+3080,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+3082,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+3083,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+3084,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+3086,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+3087,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+3089,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+3091,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+3093,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+3095,(vlSelf->io_difftest_peripheral));
        tracep->fullQData(oldp+3096,(0ULL),64);
        __Vtemp3059[0U] = 0U;
        __Vtemp3059[1U] = 0U;
        __Vtemp3059[2U] = 0U;
        __Vtemp3059[3U] = 0U;
        tracep->fullWData(oldp+3098,(__Vtemp3059),128);
        tracep->fullBit(oldp+3102,(1U));
        tracep->fullCData(oldp+3103,(0U),5);
        tracep->fullCData(oldp+3104,(1U),5);
        tracep->fullCData(oldp+3105,(2U),5);
        tracep->fullCData(oldp+3106,(3U),5);
        tracep->fullCData(oldp+3107,(4U),5);
        tracep->fullCData(oldp+3108,(5U),5);
        tracep->fullCData(oldp+3109,(6U),5);
        tracep->fullCData(oldp+3110,(7U),5);
        tracep->fullCData(oldp+3111,(8U),5);
        tracep->fullCData(oldp+3112,(9U),5);
        tracep->fullCData(oldp+3113,(0xaU),5);
        tracep->fullCData(oldp+3114,(0xbU),5);
        tracep->fullCData(oldp+3115,(0xcU),5);
        tracep->fullCData(oldp+3116,(0xdU),5);
        tracep->fullCData(oldp+3117,(0xeU),5);
        tracep->fullCData(oldp+3118,(0xfU),5);
        tracep->fullCData(oldp+3119,(0x10U),5);
        tracep->fullCData(oldp+3120,(0x11U),5);
        tracep->fullCData(oldp+3121,(0x12U),5);
        tracep->fullCData(oldp+3122,(0x13U),5);
        tracep->fullCData(oldp+3123,(0x14U),5);
        tracep->fullCData(oldp+3124,(0x15U),5);
        tracep->fullCData(oldp+3125,(0x16U),5);
        tracep->fullCData(oldp+3126,(0x17U),5);
        tracep->fullCData(oldp+3127,(0x18U),5);
        tracep->fullCData(oldp+3128,(0x19U),5);
        tracep->fullCData(oldp+3129,(0x1aU),5);
        tracep->fullCData(oldp+3130,(0x1bU),5);
        tracep->fullCData(oldp+3131,(0x1cU),5);
        tracep->fullCData(oldp+3132,(0x1dU),5);
        tracep->fullCData(oldp+3133,(0x1eU),5);
        tracep->fullCData(oldp+3134,(0x1fU),5);
        __Vtemp3060[0U] = 0xffffffffU;
        __Vtemp3060[1U] = 0xffffffffU;
        __Vtemp3060[2U] = 0xffffffffU;
        __Vtemp3060[3U] = 0xffffffffU;
        tracep->fullWData(oldp+3135,(__Vtemp3060),128);
    }
}
