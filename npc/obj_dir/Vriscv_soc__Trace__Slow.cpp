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
        tracep->declBit(c+656,"clock", false,-1);
        tracep->declBit(c+657,"reset", false,-1);
        tracep->declQuad(c+658,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+660,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+662,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+664,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+666,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+668,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+670,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+672,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+674,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+676,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+678,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+680,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+682,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+684,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+686,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+688,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+690,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+692,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+694,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+696,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+698,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+700,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+702,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+704,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+706,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+708,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+710,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+712,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+714,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+716,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+718,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+720,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+722,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+724,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+725,"io_difftest_commit", false,-1);
        tracep->declQuad(c+726,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+728,"io_difftest_irq", false,-1);
        tracep->declQuad(c+729,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+731,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+733,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+735,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+737,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+656,"riscv_soc clock", false,-1);
        tracep->declBit(c+657,"riscv_soc reset", false,-1);
        tracep->declQuad(c+658,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+660,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+662,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+664,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+666,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+668,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+670,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+672,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+674,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+676,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+678,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+680,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+682,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+684,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+686,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+688,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+690,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+692,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+694,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+696,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+698,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+700,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+702,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+704,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+706,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+708,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+710,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+712,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+714,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+716,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+718,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+720,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+722,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+724,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+725,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+726,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+728,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+729,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+731,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+733,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+735,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+737,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+656,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core_reset", false,-1);
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
        tracep->declBus(c+51,"riscv_soc core_io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc core_io_sram6_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core_io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core_io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc core_io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc core_io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc core_io_sram7_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core_io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc core_io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc axi_ram_reset", false,-1);
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
        tracep->declBit(c+656,"riscv_soc sram0_clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0_io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram0_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0_io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0_io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram1_clock", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1_io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram2_clock", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2_io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram3_clock", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3_io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3_io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram4_clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4_io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4_io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram5_clock", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5_io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram5_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5_io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5_io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram6_clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram6_io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram6_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6_io_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc sram6_io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram7_clock", false,-1);
        tracep->declBus(c+79,"riscv_soc sram7_io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram7_io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram7_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7_io_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc sram7_io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc core clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core reset", false,-1);
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
        tracep->declBus(c+51,"riscv_soc core io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc core io_sram6_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc core io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc core io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc core io_sram7_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc core io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+84,"riscv_soc core i_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core i_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core i_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+89,"riscv_soc core i_cache_io_cpu_ready", false,-1);
        tracep->declBit(c+90,"riscv_soc core i_cache_io_is_fence_i", false,-1);
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
        tracep->declBit(c+91,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+92,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+656,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+96,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+105,"riscv_soc core d_cache_io_cpu_ready", false,-1);
        tracep->declBus(c+51,"riscv_soc core d_cache_io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core d_cache_io_sram0_data_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core d_cache_io_sram0_data_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core d_cache_io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc core d_cache_io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc core d_cache_io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core d_cache_io_sram0_tag_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache_io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core d_cache_io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc core d_cache_io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc core d_cache_io_sram2_data_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core d_cache_io_sram2_data_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core d_cache_io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc core d_cache_io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc core d_cache_io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc core d_cache_io_sram2_tag_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache_io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc core d_cache_io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+106,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+107,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+113,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+114,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+115,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+116,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+119,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+656,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+91,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+92,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+95,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+106,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+107,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+114,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+115,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+116,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+119,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+120,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+121,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+122,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+123,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+742,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+124,"riscv_soc core cross_bar_1_io_fetch_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core cross_bar_1_io_fetch_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core cross_bar_1_io_fetch_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1_io_fetch_ready", false,-1);
        tracep->declBit(c+128,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+131,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+84,"riscv_soc core cross_bar_1_io_ICache_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core cross_bar_1_io_ICache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core cross_bar_1_io_ICache_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+89,"riscv_soc core cross_bar_1_io_ICache_ready", false,-1);
        tracep->declBit(c+96,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+105,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+121,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+122,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+123,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+132,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+135,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+656,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core fetch_reset", false,-1);
        tracep->declBit(c+136,"riscv_soc core fetch_io_in_de_stall", false,-1);
        tracep->declBit(c+137,"riscv_soc core fetch_io_in_wb_stall", false,-1);
        tracep->declBit(c+138,"riscv_soc core fetch_io_in_ex_stall", false,-1);
        tracep->declQuad(c+139,"riscv_soc core fetch_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core fetch_io_in_flush", false,-1);
        tracep->declBit(c+124,"riscv_soc core fetch_io_bus_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core fetch_io_bus_bits_pc_0", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core fetch_io_bus_bits_inst", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core fetch_io_bus_ready", false,-1);
        tracep->declQuad(c+142,"riscv_soc core fetch_io_out_pc_1", false,-1, 63,0);
        tracep->declBus(c+144,"riscv_soc core fetch_io_out_inst", false,-1, 31,0);
        tracep->declBit(c+656,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute_reset", false,-1);
        tracep->declBus(c+145,"riscv_soc core execute_io_in_opType", false,-1, 2,0);
        tracep->declBus(c+146,"riscv_soc core execute_io_in_exuType", false,-1, 5,0);
        tracep->declBus(c+147,"riscv_soc core execute_io_in_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+148,"riscv_soc core execute_io_in_rs1_data", false,-1, 63,0);
        tracep->declBus(c+150,"riscv_soc core execute_io_in_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+151,"riscv_soc core execute_io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core execute_io_in_imm_data", false,-1, 63,0);
        tracep->declQuad(c+155,"riscv_soc core execute_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+157,"riscv_soc core execute_io_in_rs_addr", false,-1, 4,0);
        tracep->declBus(c+158,"riscv_soc core execute_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+159,"riscv_soc core execute_io_in_csr_data", false,-1, 63,0);
        tracep->declQuad(c+161,"riscv_soc core execute_io_in_wb_result_data", false,-1, 63,0);
        tracep->declBus(c+163,"riscv_soc core execute_io_in_wb_rs_addr", false,-1, 4,0);
        tracep->declBit(c+164,"riscv_soc core execute_io_in_wb_w_rs_en", false,-1);
        tracep->declBus(c+165,"riscv_soc core execute_io_in_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+166,"riscv_soc core execute_io_in_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core execute_io_in_wb_w_csr_en", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute_io_in_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute_io_in_flush", false,-1);
        tracep->declBus(c+170,"riscv_soc core execute_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+171,"riscv_soc core execute_io_out_rs_data", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core execute_io_out_w_rs_en", false,-1);
        tracep->declBus(c+174,"riscv_soc core execute_io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+175,"riscv_soc core execute_io_out_pc", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core execute_io_out_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core execute_io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+180,"riscv_soc core execute_io_out_mem_addr", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core execute_io_out_mem_avalid", false,-1);
        tracep->declBit(c+183,"riscv_soc core execute_io_out_w_mem_en", false,-1);
        tracep->declBus(c+184,"riscv_soc core execute_io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+185,"riscv_soc core execute_io_out_csr_data", false,-1, 63,0);
        tracep->declBit(c+187,"riscv_soc core execute_io_out_w_csr_en", false,-1);
        tracep->declBus(c+188,"riscv_soc core execute_io_out_exception", false,-1, 4,0);
        tracep->declBit(c+189,"riscv_soc core execute_io_out_is_exception", false,-1);
        tracep->declBit(c+190,"riscv_soc core execute_io_out_is_mret", false,-1);
        tracep->declBit(c+90,"riscv_soc core execute_io_out_is_fence_i", false,-1);
        tracep->declQuad(c+191,"riscv_soc core execute_io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core execute_io_out_valid_next_pc", false,-1);
        tracep->declBit(c+194,"riscv_soc core execute_io_out_flush", false,-1);
        tracep->declBit(c+138,"riscv_soc core execute_io_out_stall", false,-1);
        tracep->declBit(c+656,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core decode_reset", false,-1);
        tracep->declBus(c+144,"riscv_soc core decode_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+142,"riscv_soc core decode_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+163,"riscv_soc core decode_io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+161,"riscv_soc core decode_io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core decode_io_in_w_rs_en", false,-1);
        tracep->declQuad(c+195,"riscv_soc core decode_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+197,"riscv_soc core decode_io_in_stall", false,-1);
        tracep->declBit(c+198,"riscv_soc core decode_io_in_flush", false,-1);
        tracep->declQuad(c+148,"riscv_soc core decode_io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+151,"riscv_soc core decode_io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+147,"riscv_soc core decode_io_out_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_soc core decode_io_out_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+199,"riscv_soc core decode_io_out_csr_addr_0", false,-1, 11,0);
        tracep->declBus(c+158,"riscv_soc core decode_io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+159,"riscv_soc core decode_io_out_csr_data", false,-1, 63,0);
        tracep->declBus(c+157,"riscv_soc core decode_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+153,"riscv_soc core decode_io_out_imm_data", false,-1, 63,0);
        tracep->declBus(c+145,"riscv_soc core decode_io_out_opType", false,-1, 2,0);
        tracep->declBus(c+146,"riscv_soc core decode_io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+155,"riscv_soc core decode_io_out_pc", false,-1, 63,0);
        tracep->declBit(c+136,"riscv_soc core decode_io_out_stall", false,-1);
        tracep->declBit(c+656,"riscv_soc core write_back_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core write_back_reset", false,-1);
        tracep->declBus(c+170,"riscv_soc core write_back_io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+171,"riscv_soc core write_back_io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core write_back_io_in_w_rs_en", false,-1);
        tracep->declBus(c+174,"riscv_soc core write_back_io_in_exuType", false,-1, 5,0);
        tracep->declBus(c+177,"riscv_soc core write_back_io_in_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core write_back_io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+180,"riscv_soc core write_back_io_in_mem_addr", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core write_back_io_in_mem_avalid", false,-1);
        tracep->declBit(c+183,"riscv_soc core write_back_io_in_w_mem_en", false,-1);
        tracep->declQuad(c+175,"riscv_soc core write_back_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+191,"riscv_soc core write_back_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core write_back_io_in_valid_next_pc", false,-1);
        tracep->declBus(c+184,"riscv_soc core write_back_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+185,"riscv_soc core write_back_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+187,"riscv_soc core write_back_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+200,"riscv_soc core write_back_io_in_mtvec", false,-1, 63,0);
        tracep->declQuad(c+202,"riscv_soc core write_back_io_in_mepc", false,-1, 63,0);
        tracep->declQuad(c+204,"riscv_soc core write_back_io_in_mstatus", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core write_back_io_in_mie", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core write_back_io_in_is_mret", false,-1);
        tracep->declBit(c+208,"riscv_soc core write_back_io_in_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core write_back_io_in_soft_irq", false,-1);
        tracep->declBus(c+188,"riscv_soc core write_back_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+189,"riscv_soc core write_back_io_in_is_exception", false,-1);
        tracep->declBit(c+128,"riscv_soc core write_back_io_bus_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core write_back_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core write_back_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core write_back_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core write_back_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core write_back_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+131,"riscv_soc core write_back_io_bus_ready", false,-1);
        tracep->declBus(c+163,"riscv_soc core write_back_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+161,"riscv_soc core write_back_io_out_result_data", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core write_back_io_out_w_rs_en", false,-1);
        tracep->declBit(c+137,"riscv_soc core write_back_io_out_stall", false,-1);
        tracep->declBus(c+165,"riscv_soc core write_back_io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+166,"riscv_soc core write_back_io_out_csr_data", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core write_back_io_out_w_csr_en", false,-1);
        tracep->declBit(c+210,"riscv_soc core write_back_io_out_time_irq", false,-1);
        tracep->declBit(c+211,"riscv_soc core write_back_io_out_soft_irq", false,-1);
        tracep->declBus(c+212,"riscv_soc core write_back_io_out_exception", false,-1, 4,0);
        tracep->declBit(c+213,"riscv_soc core write_back_io_out_is_exception", false,-1);
        tracep->declQuad(c+214,"riscv_soc core write_back_io_out_pc", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core write_back_io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core write_back_io_out_commit", false,-1);
        tracep->declBit(c+169,"riscv_soc core write_back_io_out_flush", false,-1);
        tracep->declQuad(c+219,"riscv_soc core write_back_io_out_flush_pc", false,-1, 63,0);
        tracep->declBit(c+656,"riscv_soc core csr_reg_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core csr_reg_reset", false,-1);
        tracep->declBus(c+165,"riscv_soc core csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+166,"riscv_soc core csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+214,"riscv_soc core csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+210,"riscv_soc core csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+211,"riscv_soc core csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+212,"riscv_soc core csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+213,"riscv_soc core csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+218,"riscv_soc core csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+199,"riscv_soc core csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+195,"riscv_soc core csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+200,"riscv_soc core csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+202,"riscv_soc core csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+204,"riscv_soc core csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core csr_reg_io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+656,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+132,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+104,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+135,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+209,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+208,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+656,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+84,"riscv_soc core i_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core i_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core i_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+89,"riscv_soc core i_cache io_cpu_ready", false,-1);
        tracep->declBit(c+90,"riscv_soc core i_cache io_is_fence_i", false,-1);
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
        tracep->declBit(c+91,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+92,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+221,"riscv_soc core i_cache Tag", false,-1, 53,0);
        tracep->declBus(c+223,"riscv_soc core i_cache Index", false,-1, 5,0);
        tracep->declBus(c+224,"riscv_soc core i_cache Offset", false,-1, 3,0);
        tracep->declBus(c+225,"riscv_soc core i_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+226,"riscv_soc core i_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+228,"riscv_soc core i_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+229,"riscv_soc core i_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+89,"riscv_soc core i_cache reg_ready", false,-1);
        tracep->declQuad(c+87,"riscv_soc core i_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+230,"riscv_soc core i_cache reg_cache_write", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+231,"riscv_soc core i_cache reg_chosen_tag", false,-1);
        tracep->declBit(c+232,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declQuad(c+233,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+235,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+237,"riscv_soc core i_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+239,"riscv_soc core i_cache is_sram2_write", false,-1);
        tracep->declQuad(c+240,"riscv_soc core i_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+92,"riscv_soc core i_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+91,"riscv_soc core i_cache reg_r_valid", false,-1);
        tracep->declQuad(c+242,"riscv_soc core i_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+244,"riscv_soc core i_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+246,"riscv_soc core i_cache hit_0", false,-1);
        tracep->declBit(c+247,"riscv_soc core i_cache hit_2", false,-1);
        tracep->declBit(c+248,"riscv_soc core i_cache tag_valid_0", false,-1);
        tracep->declBit(c+249,"riscv_soc core i_cache tag_valid_2", false,-1);
        tracep->declQuad(c+250,"riscv_soc core i_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+252,"riscv_soc core i_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+254,"riscv_soc core i_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+256,"riscv_soc core i_cache LRU_2", false,-1);
        tracep->declBit(c+257,"riscv_soc core i_cache reg_start_operation", false,-1);
        tracep->declBit(c+656,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+96,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+105,"riscv_soc core d_cache io_cpu_ready", false,-1);
        tracep->declBus(c+51,"riscv_soc core d_cache io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core d_cache io_sram0_data_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core d_cache io_sram0_data_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core d_cache io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc core d_cache io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc core d_cache io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc core d_cache io_sram0_tag_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core d_cache io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc core d_cache io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc core d_cache io_sram2_data_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc core d_cache io_sram2_data_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc core d_cache io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc core d_cache io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc core d_cache io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc core d_cache io_sram2_tag_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc core d_cache io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+106,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+107,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+113,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+114,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+115,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+116,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+119,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+258,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+260,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+261,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+262,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+263,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+265,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+266,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+267,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+269,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+270,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+105,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+99,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+271,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+272,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+57,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+273,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+274,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+276,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+280,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+284,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+285,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+287,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+289,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+291,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+293,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+294,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+296,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+116,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+115,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+107,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+113,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+298,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+300,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+302,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+303,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+304,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+305,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+306,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+307,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+308,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+310,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+312,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+314,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+315,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+316,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+317,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+318,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+656,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+91,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+92,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+95,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+106,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+107,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+114,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+115,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+116,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+119,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+120,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+121,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+122,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+123,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+742,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+319,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+320,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+321,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+322,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+323,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+324,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+325,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+326,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+327,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+124,"riscv_soc core cross_bar_1 io_fetch_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core cross_bar_1 io_fetch_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core cross_bar_1 io_fetch_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1 io_fetch_ready", false,-1);
        tracep->declBit(c+128,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+131,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+84,"riscv_soc core cross_bar_1 io_ICache_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core cross_bar_1 io_ICache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core cross_bar_1 io_ICache_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+89,"riscv_soc core cross_bar_1 io_ICache_ready", false,-1);
        tracep->declBit(c+96,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+105,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+121,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+122,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+123,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+132,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+104,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+135,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+328,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+329,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+330,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+656,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+136,"riscv_soc core fetch io_in_de_stall", false,-1);
        tracep->declBit(c+137,"riscv_soc core fetch io_in_wb_stall", false,-1);
        tracep->declBit(c+138,"riscv_soc core fetch io_in_ex_stall", false,-1);
        tracep->declQuad(c+139,"riscv_soc core fetch io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core fetch io_in_flush", false,-1);
        tracep->declBit(c+124,"riscv_soc core fetch io_bus_valid", false,-1);
        tracep->declQuad(c+85,"riscv_soc core fetch io_bus_bits_pc_0", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core fetch io_bus_bits_inst", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core fetch io_bus_ready", false,-1);
        tracep->declQuad(c+142,"riscv_soc core fetch io_out_pc_1", false,-1, 63,0);
        tracep->declBus(c+144,"riscv_soc core fetch io_out_inst", false,-1, 31,0);
        tracep->declBit(c+331,"riscv_soc core fetch stall", false,-1);
        tracep->declQuad(c+85,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv_soc core fetch reg_pc_1", false,-1, 63,0);
        tracep->declBus(c+144,"riscv_soc core fetch reg_inst", false,-1, 31,0);
        tracep->declBit(c+124,"riscv_soc core fetch reg_valid", false,-1);
        tracep->declQuad(c+332,"riscv_soc core fetch reg_temp_pc_1", false,-1, 63,0);
        tracep->declBus(c+334,"riscv_soc core fetch reg_temp_inst", false,-1, 31,0);
        tracep->declBit(c+335,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+336,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+338,"riscv_soc core fetch need_update", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute reset", false,-1);
        tracep->declBus(c+145,"riscv_soc core execute io_in_opType", false,-1, 2,0);
        tracep->declBus(c+146,"riscv_soc core execute io_in_exuType", false,-1, 5,0);
        tracep->declBus(c+147,"riscv_soc core execute io_in_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+148,"riscv_soc core execute io_in_rs1_data", false,-1, 63,0);
        tracep->declBus(c+150,"riscv_soc core execute io_in_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+151,"riscv_soc core execute io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core execute io_in_imm_data", false,-1, 63,0);
        tracep->declQuad(c+155,"riscv_soc core execute io_in_pc", false,-1, 63,0);
        tracep->declBus(c+157,"riscv_soc core execute io_in_rs_addr", false,-1, 4,0);
        tracep->declBus(c+158,"riscv_soc core execute io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+159,"riscv_soc core execute io_in_csr_data", false,-1, 63,0);
        tracep->declQuad(c+161,"riscv_soc core execute io_in_wb_result_data", false,-1, 63,0);
        tracep->declBus(c+163,"riscv_soc core execute io_in_wb_rs_addr", false,-1, 4,0);
        tracep->declBit(c+164,"riscv_soc core execute io_in_wb_w_rs_en", false,-1);
        tracep->declBus(c+165,"riscv_soc core execute io_in_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+166,"riscv_soc core execute io_in_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core execute io_in_wb_w_csr_en", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute io_in_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute io_in_flush", false,-1);
        tracep->declBus(c+170,"riscv_soc core execute io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+171,"riscv_soc core execute io_out_rs_data", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core execute io_out_w_rs_en", false,-1);
        tracep->declBus(c+174,"riscv_soc core execute io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+175,"riscv_soc core execute io_out_pc", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core execute io_out_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core execute io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+180,"riscv_soc core execute io_out_mem_addr", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core execute io_out_mem_avalid", false,-1);
        tracep->declBit(c+183,"riscv_soc core execute io_out_w_mem_en", false,-1);
        tracep->declBus(c+184,"riscv_soc core execute io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+185,"riscv_soc core execute io_out_csr_data", false,-1, 63,0);
        tracep->declBit(c+187,"riscv_soc core execute io_out_w_csr_en", false,-1);
        tracep->declBus(c+188,"riscv_soc core execute io_out_exception", false,-1, 4,0);
        tracep->declBit(c+189,"riscv_soc core execute io_out_is_exception", false,-1);
        tracep->declBit(c+190,"riscv_soc core execute io_out_is_mret", false,-1);
        tracep->declBit(c+90,"riscv_soc core execute io_out_is_fence_i", false,-1);
        tracep->declQuad(c+191,"riscv_soc core execute io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core execute io_out_valid_next_pc", false,-1);
        tracep->declBit(c+194,"riscv_soc core execute io_out_flush", false,-1);
        tracep->declBit(c+138,"riscv_soc core execute io_out_stall", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute alu_exu_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute alu_exu_reset", false,-1);
        tracep->declBit(c+339,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute alu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+340,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+342,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 63,0);
        tracep->declQuad(c+155,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core execute alu_exu_io_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute alu_exu_io_in_flush", false,-1);
        tracep->declQuad(c+344,"riscv_soc core execute alu_exu_io_result_data", false,-1, 63,0);
        tracep->declQuad(c+346,"riscv_soc core execute alu_exu_io_result_pc", false,-1, 63,0);
        tracep->declBit(c+348,"riscv_soc core execute alu_exu_io_next_pc_valid", false,-1);
        tracep->declBit(c+349,"riscv_soc core execute alu_exu_io_w_rs_en", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute lsu_exu_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute lsu_exu_reset", false,-1);
        tracep->declBit(c+350,"riscv_soc core execute lsu_exu_io_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute lsu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+351,"riscv_soc core execute lsu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core execute lsu_exu_io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+180,"riscv_soc core execute lsu_exu_io_address_result", false,-1, 63,0);
        tracep->declBit(c+353,"riscv_soc core execute lsu_exu_io_avalid", false,-1);
        tracep->declBit(c+354,"riscv_soc core execute lsu_exu_io_w_mem_en", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute lsu_exu_io_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute lsu_exu_io_in_flush", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute mu_exu_io_in_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute mu_exu_io_in_flush", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute mu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+355,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+357,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+359,"riscv_soc core execute mu_exu_io_result_data", false,-1, 63,0);
        tracep->declBit(c+361,"riscv_soc core execute mu_exu_io_stall", false,-1);
        tracep->declBit(c+362,"riscv_soc core execute mu_exu_io_in_valid", false,-1);
        tracep->declBit(c+363,"riscv_soc core execute mu_exu_io_out_valid", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute csr_exu_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute csr_exu_reset", false,-1);
        tracep->declBit(c+364,"riscv_soc core execute csr_exu_io_valid", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute csr_exu_io_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute csr_exu_io_in_flush", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute csr_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+365,"riscv_soc core execute csr_exu_io_csr_data", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core execute csr_exu_io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+367,"riscv_soc core execute csr_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+369,"riscv_soc core execute csr_exu_io_rd_result", false,-1, 63,0);
        tracep->declBit(c+371,"riscv_soc core execute csr_exu_io_w_rs_en", false,-1);
        tracep->declQuad(c+185,"riscv_soc core execute csr_exu_io_csr_result", false,-1, 63,0);
        tracep->declBit(c+372,"riscv_soc core execute csr_exu_io_w_csr_en", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute abn_exu_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute abn_exu_reset", false,-1);
        tracep->declBit(c+373,"riscv_soc core execute abn_exu_io_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute abn_exu_io_exuType", false,-1, 5,0);
        tracep->declBit(c+137,"riscv_soc core execute abn_exu_io_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute abn_exu_io_in_flush", false,-1);
        tracep->declBit(c+374,"riscv_soc core execute abn_exu_io_is_fence_i", false,-1);
        tracep->declBit(c+375,"riscv_soc core execute abn_exu_io_is_mret", false,-1);
        tracep->declBus(c+188,"riscv_soc core execute abn_exu_io_exception", false,-1, 4,0);
        tracep->declBit(c+376,"riscv_soc core execute abn_exu_io_is_exception", false,-1);
        tracep->declBus(c+377,"riscv_soc core execute reg_valid", false,-1, 4,0);
        tracep->declBit(c+378,"riscv_soc core execute stall", false,-1);
        tracep->declQuad(c+379,"riscv_soc core execute reg_rs_addr", false,-1, 63,0);
        tracep->declBus(c+184,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBus(c+381,"riscv_soc core execute reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+175,"riscv_soc core execute reg_pc", false,-1, 63,0);
        tracep->declBit(c+382,"riscv_soc core execute reg_flush", false,-1);
        tracep->declBus(c+383,"riscv_soc core execute valid", false,-1, 4,0);
        tracep->declQuad(c+384,"riscv_soc core execute reg_rs_data", false,-1, 63,0);
        tracep->declBit(c+386,"riscv_soc core execute reg_w_rs_en", false,-1);
        tracep->declBit(c+387,"riscv_soc core execute reg_w_csr_en", false,-1);
        tracep->declQuad(c+388,"riscv_soc core execute rs2_data", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core execute reg_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+390,"riscv_soc core execute reg_mem_avalid", false,-1);
        tracep->declBit(c+391,"riscv_soc core execute reg_w_mem_en", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute alu_exu clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute alu_exu reset", false,-1);
        tracep->declBit(c+339,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute alu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+340,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+342,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core execute alu_exu io_op_imm", false,-1, 63,0);
        tracep->declQuad(c+155,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core execute alu_exu io_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute alu_exu io_in_flush", false,-1);
        tracep->declQuad(c+344,"riscv_soc core execute alu_exu io_result_data", false,-1, 63,0);
        tracep->declQuad(c+346,"riscv_soc core execute alu_exu io_result_pc", false,-1, 63,0);
        tracep->declBit(c+348,"riscv_soc core execute alu_exu io_next_pc_valid", false,-1);
        tracep->declBit(c+349,"riscv_soc core execute alu_exu io_w_rs_en", false,-1);
        tracep->declQuad(c+392,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declArray(c+394,"riscv_soc core execute alu_exu subresult", false,-1, 64,0);
        tracep->declBit(c+397,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+398,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declQuad(c+399,"riscv_soc core execute alu_exu sllw_temp", false,-1, 62,0);
        tracep->declBus(c+401,"riscv_soc core execute alu_exu srlw_temp", false,-1, 31,0);
        tracep->declBus(c+402,"riscv_soc core execute alu_exu sraw_temp", false,-1, 31,0);
        tracep->declQuad(c+403,"riscv_soc core execute alu_exu add_temp", false,-1, 63,0);
        tracep->declArray(c+405,"riscv_soc core execute alu_exu temp_result_data", false,-1, 64,0);
        tracep->declBit(c+408,"riscv_soc core execute alu_exu w_rs_en", false,-1);
        tracep->declQuad(c+409,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declArray(c+411,"riscv_soc core execute alu_exu next_pc3", false,-1, 64,0);
        tracep->declArray(c+414,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declBit(c+417,"riscv_soc core execute alu_exu next_pc_valid", false,-1);
        tracep->declQuad(c+418,"riscv_soc core execute alu_exu result_pc", false,-1, 63,0);
        tracep->declQuad(c+344,"riscv_soc core execute alu_exu reg_result_data", false,-1, 63,0);
        tracep->declQuad(c+346,"riscv_soc core execute alu_exu reg_result_pc", false,-1, 63,0);
        tracep->declBit(c+348,"riscv_soc core execute alu_exu reg_next_pc_valid", false,-1);
        tracep->declBit(c+349,"riscv_soc core execute alu_exu reg_w_rs_en", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute lsu_exu clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute lsu_exu reset", false,-1);
        tracep->declBit(c+350,"riscv_soc core execute lsu_exu io_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute lsu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+351,"riscv_soc core execute lsu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core execute lsu_exu io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+180,"riscv_soc core execute lsu_exu io_address_result", false,-1, 63,0);
        tracep->declBit(c+353,"riscv_soc core execute lsu_exu io_avalid", false,-1);
        tracep->declBit(c+354,"riscv_soc core execute lsu_exu io_w_mem_en", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute lsu_exu io_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute lsu_exu io_in_flush", false,-1);
        tracep->declQuad(c+180,"riscv_soc core execute lsu_exu reg_address_result", false,-1, 63,0);
        tracep->declBit(c+353,"riscv_soc core execute lsu_exu reg_avalid", false,-1);
        tracep->declBit(c+354,"riscv_soc core execute lsu_exu reg_w_mem_en", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute mu_exu io_in_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute mu_exu io_in_flush", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute mu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+355,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+357,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+359,"riscv_soc core execute mu_exu io_result_data", false,-1, 63,0);
        tracep->declBit(c+361,"riscv_soc core execute mu_exu io_stall", false,-1);
        tracep->declBit(c+362,"riscv_soc core execute mu_exu io_in_valid", false,-1);
        tracep->declBit(c+363,"riscv_soc core execute mu_exu io_out_valid", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute mu_exu div_io_in_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute mu_exu div_io_in_flush", false,-1);
        tracep->declQuad(c+355,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+357,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+420,"riscv_soc core execute mu_exu div_io_result", false,-1, 63,0);
        tracep->declBit(c+422,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 5,0);
        tracep->declBit(c+423,"riscv_soc core execute mu_exu div_io_stall", false,-1);
        tracep->declBit(c+424,"riscv_soc core execute mu_exu div_io_out_valid", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute mu_exu mul_io_in_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute mu_exu mul_io_in_flush", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+355,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+357,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+425,"riscv_soc core execute mu_exu mul_io_result", false,-1, 63,0);
        tracep->declBit(c+427,"riscv_soc core execute mu_exu mul_io_stall", false,-1);
        tracep->declBit(c+428,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declBit(c+429,"riscv_soc core execute mu_exu mul_io_out_valid", false,-1);
        tracep->declBit(c+656,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute mu_exu div io_in_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute mu_exu div io_in_flush", false,-1);
        tracep->declQuad(c+355,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+357,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+420,"riscv_soc core execute mu_exu div io_result", false,-1, 63,0);
        tracep->declBit(c+422,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute mu_exu div io_exuType", false,-1, 5,0);
        tracep->declBit(c+423,"riscv_soc core execute mu_exu div io_stall", false,-1);
        tracep->declBit(c+424,"riscv_soc core execute mu_exu div io_out_valid", false,-1);
        tracep->declBit(c+430,"riscv_soc core execute mu_exu div valid", false,-1);
        tracep->declArray(c+431,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+434,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+437,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+440,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+443,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+446,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+449,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+452,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+455,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+456,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+457,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 5,0);
        tracep->declBit(c+424,"riscv_soc core execute mu_exu div reg_out_valid", false,-1);
        tracep->declBit(c+423,"riscv_soc core execute mu_exu div reg_stall", false,-1);
        tracep->declArray(c+458,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+463,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+464,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+465,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+466,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declQuad(c+467,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+469,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+656,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute mu_exu mul io_in_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute mu_exu mul io_in_flush", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 5,0);
        tracep->declQuad(c+355,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+357,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+425,"riscv_soc core execute mu_exu mul io_result", false,-1, 63,0);
        tracep->declBit(c+427,"riscv_soc core execute mu_exu mul io_stall", false,-1);
        tracep->declBit(c+428,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declBit(c+429,"riscv_soc core execute mu_exu mul io_out_valid", false,-1);
        tracep->declBit(c+471,"riscv_soc core execute mu_exu mul valid", false,-1);
        tracep->declArray(c+472,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+477,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+480,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+427,"riscv_soc core execute mu_exu mul reg_stall", false,-1);
        tracep->declBus(c+483,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 5,0);
        tracep->declBus(c+484,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+485,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+488,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+493,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+498,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 3,0);
        tracep->declBit(c+429,"riscv_soc core execute mu_exu mul reg_out_valid", false,-1);
        tracep->declArray(c+499,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBit(c+656,"riscv_soc core execute csr_exu clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute csr_exu reset", false,-1);
        tracep->declBit(c+364,"riscv_soc core execute csr_exu io_valid", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute csr_exu io_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute csr_exu io_in_flush", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute csr_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+365,"riscv_soc core execute csr_exu io_csr_data", false,-1, 63,0);
        tracep->declQuad(c+153,"riscv_soc core execute csr_exu io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+367,"riscv_soc core execute csr_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+369,"riscv_soc core execute csr_exu io_rd_result", false,-1, 63,0);
        tracep->declBit(c+371,"riscv_soc core execute csr_exu io_w_rs_en", false,-1);
        tracep->declQuad(c+185,"riscv_soc core execute csr_exu io_csr_result", false,-1, 63,0);
        tracep->declBit(c+372,"riscv_soc core execute csr_exu io_w_csr_en", false,-1);
        tracep->declQuad(c+369,"riscv_soc core execute csr_exu reg_rd_result", false,-1, 63,0);
        tracep->declQuad(c+185,"riscv_soc core execute csr_exu reg_csr_result", false,-1, 63,0);
        tracep->declBit(c+371,"riscv_soc core execute csr_exu reg_w_rs_en", false,-1);
        tracep->declBit(c+372,"riscv_soc core execute csr_exu reg_w_csr_en", false,-1);
        tracep->declArray(c+504,"riscv_soc core execute csr_exu temp_csr_result_data", false,-1, 64,0);
        tracep->declBit(c+656,"riscv_soc core execute abn_exu clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core execute abn_exu reset", false,-1);
        tracep->declBit(c+373,"riscv_soc core execute abn_exu io_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core execute abn_exu io_exuType", false,-1, 5,0);
        tracep->declBit(c+137,"riscv_soc core execute abn_exu io_stall", false,-1);
        tracep->declBit(c+169,"riscv_soc core execute abn_exu io_in_flush", false,-1);
        tracep->declBit(c+374,"riscv_soc core execute abn_exu io_is_fence_i", false,-1);
        tracep->declBit(c+375,"riscv_soc core execute abn_exu io_is_mret", false,-1);
        tracep->declBus(c+188,"riscv_soc core execute abn_exu io_exception", false,-1, 4,0);
        tracep->declBit(c+376,"riscv_soc core execute abn_exu io_is_exception", false,-1);
        tracep->declBit(c+374,"riscv_soc core execute abn_exu reg_is_fence_i", false,-1);
        tracep->declBit(c+375,"riscv_soc core execute abn_exu reg_is_mret", false,-1);
        tracep->declBus(c+188,"riscv_soc core execute abn_exu reg_exception", false,-1, 4,0);
        tracep->declBit(c+376,"riscv_soc core execute abn_exu reg_is_exception", false,-1);
        tracep->declBit(c+656,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core decode reset", false,-1);
        tracep->declBus(c+144,"riscv_soc core decode io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+142,"riscv_soc core decode io_in_pc", false,-1, 63,0);
        tracep->declBus(c+163,"riscv_soc core decode io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+161,"riscv_soc core decode io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core decode io_in_w_rs_en", false,-1);
        tracep->declQuad(c+195,"riscv_soc core decode io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+197,"riscv_soc core decode io_in_stall", false,-1);
        tracep->declBit(c+198,"riscv_soc core decode io_in_flush", false,-1);
        tracep->declQuad(c+148,"riscv_soc core decode io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+151,"riscv_soc core decode io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+147,"riscv_soc core decode io_out_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_soc core decode io_out_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+199,"riscv_soc core decode io_out_csr_addr_0", false,-1, 11,0);
        tracep->declBus(c+158,"riscv_soc core decode io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+159,"riscv_soc core decode io_out_csr_data", false,-1, 63,0);
        tracep->declBus(c+157,"riscv_soc core decode io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+153,"riscv_soc core decode io_out_imm_data", false,-1, 63,0);
        tracep->declBus(c+145,"riscv_soc core decode io_out_opType", false,-1, 2,0);
        tracep->declBus(c+146,"riscv_soc core decode io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+155,"riscv_soc core decode io_out_pc", false,-1, 63,0);
        tracep->declBit(c+136,"riscv_soc core decode io_out_stall", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+507+i*2,"riscv_soc core decode regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+742,"riscv_soc core decode regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+571,"riscv_soc core decode regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+572,"riscv_soc core decode regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+742,"riscv_soc core decode regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+574,"riscv_soc core decode regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+575,"riscv_soc core decode regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+161,"riscv_soc core decode regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+163,"riscv_soc core decode regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+742,"riscv_soc core decode regfile_MPORT_mask", false,-1);
        tracep->declBit(c+164,"riscv_soc core decode regfile_MPORT_en", false,-1);
        tracep->declQuad(c+148,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+151,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+157,"riscv_soc core decode reg_dest_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+153,"riscv_soc core decode reg_imm", false,-1, 63,0);
        tracep->declBus(c+577,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+578,"riscv_soc core decode reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+579,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+147,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+158,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+159,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+136,"riscv_soc core decode reg_stall", false,-1);
        tracep->declBit(c+581,"riscv_soc core decode stall", false,-1);
        tracep->declBus(c+582,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBus(c+574,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+571,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+583,"riscv_soc core decode dest_rs_addr", false,-1, 4,0);
        tracep->declBus(c+199,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBit(c+584,"riscv_soc core decode temp_stall", false,-1);
        tracep->declBit(c+656,"riscv_soc core write_back clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core write_back reset", false,-1);
        tracep->declBus(c+170,"riscv_soc core write_back io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+171,"riscv_soc core write_back io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core write_back io_in_w_rs_en", false,-1);
        tracep->declBus(c+174,"riscv_soc core write_back io_in_exuType", false,-1, 5,0);
        tracep->declBus(c+177,"riscv_soc core write_back io_in_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core write_back io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+180,"riscv_soc core write_back io_in_mem_addr", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core write_back io_in_mem_avalid", false,-1);
        tracep->declBit(c+183,"riscv_soc core write_back io_in_w_mem_en", false,-1);
        tracep->declQuad(c+175,"riscv_soc core write_back io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+191,"riscv_soc core write_back io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core write_back io_in_valid_next_pc", false,-1);
        tracep->declBus(c+184,"riscv_soc core write_back io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+185,"riscv_soc core write_back io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+187,"riscv_soc core write_back io_in_w_csr_en", false,-1);
        tracep->declQuad(c+200,"riscv_soc core write_back io_in_mtvec", false,-1, 63,0);
        tracep->declQuad(c+202,"riscv_soc core write_back io_in_mepc", false,-1, 63,0);
        tracep->declQuad(c+204,"riscv_soc core write_back io_in_mstatus", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core write_back io_in_mie", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core write_back io_in_is_mret", false,-1);
        tracep->declBit(c+208,"riscv_soc core write_back io_in_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core write_back io_in_soft_irq", false,-1);
        tracep->declBus(c+188,"riscv_soc core write_back io_in_exception", false,-1, 4,0);
        tracep->declBit(c+189,"riscv_soc core write_back io_in_is_exception", false,-1);
        tracep->declBit(c+128,"riscv_soc core write_back io_bus_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core write_back io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core write_back io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core write_back io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core write_back io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core write_back io_bus_bits_is_w", false,-1);
        tracep->declBit(c+131,"riscv_soc core write_back io_bus_ready", false,-1);
        tracep->declBus(c+163,"riscv_soc core write_back io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+161,"riscv_soc core write_back io_out_result_data", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core write_back io_out_w_rs_en", false,-1);
        tracep->declBit(c+137,"riscv_soc core write_back io_out_stall", false,-1);
        tracep->declBus(c+165,"riscv_soc core write_back io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+166,"riscv_soc core write_back io_out_csr_data", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core write_back io_out_w_csr_en", false,-1);
        tracep->declBit(c+210,"riscv_soc core write_back io_out_time_irq", false,-1);
        tracep->declBit(c+211,"riscv_soc core write_back io_out_soft_irq", false,-1);
        tracep->declBus(c+212,"riscv_soc core write_back io_out_exception", false,-1, 4,0);
        tracep->declBit(c+213,"riscv_soc core write_back io_out_is_exception", false,-1);
        tracep->declQuad(c+214,"riscv_soc core write_back io_out_pc", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core write_back io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core write_back io_out_commit", false,-1);
        tracep->declBit(c+169,"riscv_soc core write_back io_out_flush", false,-1);
        tracep->declQuad(c+219,"riscv_soc core write_back io_out_flush_pc", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core write_back reg_stall", false,-1);
        tracep->declBit(c+585,"riscv_soc core write_back reg_flush", false,-1);
        tracep->declQuad(c+97,"riscv_soc core write_back reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core write_back reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+103,"riscv_soc core write_back reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+104,"riscv_soc core write_back reg_bus_is_w", false,-1);
        tracep->declBit(c+128,"riscv_soc core write_back reg_bus_valid", false,-1);
        tracep->declBus(c+586,"riscv_soc core write_back reg_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+587,"riscv_soc core write_back reg_result_data", false,-1, 63,0);
        tracep->declBit(c+589,"riscv_soc core write_back reg_w_rs_en", false,-1);
        tracep->declBit(c+218,"riscv_soc core write_back reg_commit", false,-1);
        tracep->declBus(c+590,"riscv_soc core write_back reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+591,"riscv_soc core write_back mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+593,"riscv_soc core write_back mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+595,"riscv_soc core write_back mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+597,"riscv_soc core write_back reg_ls_state", false,-1);
        tracep->declQuad(c+598,"riscv_soc core write_back rs2_data", false,-1, 63,0);
        tracep->declArray(c+600,"riscv_soc core write_back mem_w_data", false,-1, 126,0);
        tracep->declBit(c+604,"riscv_soc core write_back is_commit", false,-1);
        tracep->declQuad(c+605,"riscv_soc core write_back reg_csr_addr", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core write_back reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+607,"riscv_soc core write_back reg_w_csr_en", false,-1);
        tracep->declBit(c+608,"riscv_soc core write_back is_time_irq", false,-1);
        tracep->declBit(c+609,"riscv_soc core write_back is_soft_irq", false,-1);
        tracep->declBit(c+610,"riscv_soc core write_back is_irq", false,-1);
        tracep->declQuad(c+219,"riscv_soc core write_back reg_flush_pc", false,-1, 63,0);
        tracep->declBit(c+611,"riscv_soc core write_back temp_except", false,-1);
        tracep->declBit(c+612,"riscv_soc core write_back reg_time_irq", false,-1);
        tracep->declBit(c+613,"riscv_soc core write_back reg_soft_irq", false,-1);
        tracep->declBus(c+212,"riscv_soc core write_back reg_exception", false,-1, 4,0);
        tracep->declBit(c+213,"riscv_soc core write_back reg_is_exception", false,-1);
        tracep->declQuad(c+214,"riscv_soc core write_back reg_pc", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core write_back reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+656,"riscv_soc core csr_reg clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core csr_reg reset", false,-1);
        tracep->declBus(c+165,"riscv_soc core csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+166,"riscv_soc core csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+214,"riscv_soc core csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+210,"riscv_soc core csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+211,"riscv_soc core csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+212,"riscv_soc core csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+213,"riscv_soc core csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+218,"riscv_soc core csr_reg io_in_commit", false,-1);
        tracep->declBus(c+199,"riscv_soc core csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+195,"riscv_soc core csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+200,"riscv_soc core csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+202,"riscv_soc core csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+204,"riscv_soc core csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+614,"riscv_soc core csr_reg irq", false,-1);
        tracep->declQuad(c+615,"riscv_soc core csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+617,"riscv_soc core csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+619,"riscv_soc core csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+621,"riscv_soc core csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+623,"riscv_soc core csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+625,"riscv_soc core csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+627,"riscv_soc core csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+629,"riscv_soc core csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+631,"riscv_soc core csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+633,"riscv_soc core csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+656,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+657,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+132,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+97,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+104,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+135,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+209,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+208,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+635,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+637,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+135,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+133,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+639,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+640,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+641,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+656,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+657,"riscv_soc axi_ram reset", false,-1);
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
        tracep->declBit(c+656,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+642,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+644,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+646,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+648,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+649,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+651,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+652,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+644,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+653,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+654,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+655,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+656,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+642,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+644,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+646,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+648,"riscv_soc axi_ram mem wen", false,-1);
        tracep->declBit(c+656,"riscv_soc sram0 clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0 io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram0 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0 io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0 io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram0 sram_CLK", false,-1);
        tracep->declArray(c+27,"riscv_soc sram0 sram_Q", false,-1, 127,0);
        tracep->declBit(c+743,"riscv_soc sram0 sram_CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram0 sram_WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram0 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram0 sram_A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram0 sram_D", false,-1, 127,0);
        tracep->declBus(c+744,"riscv_soc sram0 sram Bits", false,-1, 31,0);
        tracep->declBus(c+745,"riscv_soc sram0 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc sram0 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+744,"riscv_soc sram0 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+27,"riscv_soc sram0 sram Q", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram0 sram CLK", false,-1);
        tracep->declBit(c+743,"riscv_soc sram0 sram CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram0 sram WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram0 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram0 sram A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram0 sram D", false,-1, 127,0);
        tracep->declBit(c+742,"riscv_soc sram0 sram cen", false,-1);
        tracep->declBit(c+232,"riscv_soc sram0 sram wen", false,-1);
        tracep->declArray(c+747,"riscv_soc sram0 sram bwen", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram1 clock", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1 io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1 io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram1 sram_CLK", false,-1);
        tracep->declArray(c+36,"riscv_soc sram1 sram_Q", false,-1, 127,0);
        tracep->declBit(c+743,"riscv_soc sram1 sram_CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram1 sram_WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram1 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc sram1 sram_A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram1 sram_D", false,-1, 127,0);
        tracep->declBus(c+744,"riscv_soc sram1 sram Bits", false,-1, 31,0);
        tracep->declBus(c+745,"riscv_soc sram1 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc sram1 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+744,"riscv_soc sram1 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+36,"riscv_soc sram1 sram Q", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram1 sram CLK", false,-1);
        tracep->declBit(c+743,"riscv_soc sram1 sram CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram1 sram WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram1 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc sram1 sram A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram1 sram D", false,-1, 127,0);
        tracep->declBit(c+742,"riscv_soc sram1 sram cen", false,-1);
        tracep->declBit(c+232,"riscv_soc sram1 sram wen", false,-1);
        tracep->declArray(c+747,"riscv_soc sram1 sram bwen", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram2 clock", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2 io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2 io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram2 sram_CLK", false,-1);
        tracep->declArray(c+42,"riscv_soc sram2 sram_Q", false,-1, 127,0);
        tracep->declBit(c+743,"riscv_soc sram2 sram_CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram2 sram_WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram2 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc sram2 sram_A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram2 sram_D", false,-1, 127,0);
        tracep->declBus(c+744,"riscv_soc sram2 sram Bits", false,-1, 31,0);
        tracep->declBus(c+745,"riscv_soc sram2 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc sram2 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+744,"riscv_soc sram2 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+42,"riscv_soc sram2 sram Q", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram2 sram CLK", false,-1);
        tracep->declBit(c+743,"riscv_soc sram2 sram CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram2 sram WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram2 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc sram2 sram A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram2 sram D", false,-1, 127,0);
        tracep->declBit(c+742,"riscv_soc sram2 sram cen", false,-1);
        tracep->declBit(c+239,"riscv_soc sram2 sram wen", false,-1);
        tracep->declArray(c+747,"riscv_soc sram2 sram bwen", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram3 clock", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3 io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3 io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram3 sram_CLK", false,-1);
        tracep->declArray(c+47,"riscv_soc sram3 sram_Q", false,-1, 127,0);
        tracep->declBit(c+743,"riscv_soc sram3 sram_CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram3 sram_WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram3 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc sram3 sram_A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram3 sram_D", false,-1, 127,0);
        tracep->declBus(c+744,"riscv_soc sram3 sram Bits", false,-1, 31,0);
        tracep->declBus(c+745,"riscv_soc sram3 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc sram3 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+744,"riscv_soc sram3 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+47,"riscv_soc sram3 sram Q", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram3 sram CLK", false,-1);
        tracep->declBit(c+743,"riscv_soc sram3 sram CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram3 sram WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram3 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc sram3 sram A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram3 sram D", false,-1, 127,0);
        tracep->declBit(c+742,"riscv_soc sram3 sram cen", false,-1);
        tracep->declBit(c+239,"riscv_soc sram3 sram wen", false,-1);
        tracep->declArray(c+747,"riscv_soc sram3 sram bwen", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram4 clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4 io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4 io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram4 sram_CLK", false,-1);
        tracep->declArray(c+61,"riscv_soc sram4 sram_Q", false,-1, 127,0);
        tracep->declBit(c+743,"riscv_soc sram4 sram_CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram4 sram_WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram4 sram_A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram4 sram_D", false,-1, 127,0);
        tracep->declBus(c+744,"riscv_soc sram4 sram Bits", false,-1, 31,0);
        tracep->declBus(c+745,"riscv_soc sram4 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc sram4 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+744,"riscv_soc sram4 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+61,"riscv_soc sram4 sram Q", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram4 sram CLK", false,-1);
        tracep->declBit(c+743,"riscv_soc sram4 sram CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram4 sram WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram4 sram A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram4 sram D", false,-1, 127,0);
        tracep->declBit(c+742,"riscv_soc sram4 sram cen", false,-1);
        tracep->declBit(c+284,"riscv_soc sram4 sram wen", false,-1);
        tracep->declArray(c+276,"riscv_soc sram4 sram bwen", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram5 clock", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5 io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram5 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5 io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5 io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram5 sram_CLK", false,-1);
        tracep->declArray(c+70,"riscv_soc sram5 sram_Q", false,-1, 127,0);
        tracep->declBit(c+743,"riscv_soc sram5 sram_CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram5 sram_WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram5 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc sram5 sram_A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram5 sram_D", false,-1, 127,0);
        tracep->declBus(c+744,"riscv_soc sram5 sram Bits", false,-1, 31,0);
        tracep->declBus(c+745,"riscv_soc sram5 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc sram5 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+744,"riscv_soc sram5 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+70,"riscv_soc sram5 sram Q", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram5 sram CLK", false,-1);
        tracep->declBit(c+743,"riscv_soc sram5 sram CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram5 sram WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram5 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc sram5 sram A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram5 sram D", false,-1, 127,0);
        tracep->declBit(c+742,"riscv_soc sram5 sram cen", false,-1);
        tracep->declBit(c+284,"riscv_soc sram5 sram wen", false,-1);
        tracep->declArray(c+747,"riscv_soc sram5 sram bwen", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram6 clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram6 io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram6 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6 io_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc sram6 io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram6 sram_CLK", false,-1);
        tracep->declArray(c+75,"riscv_soc sram6 sram_Q", false,-1, 127,0);
        tracep->declBit(c+743,"riscv_soc sram6 sram_CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram6 sram_WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram6 sram_A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram6 sram_D", false,-1, 127,0);
        tracep->declBus(c+744,"riscv_soc sram6 sram Bits", false,-1, 31,0);
        tracep->declBus(c+745,"riscv_soc sram6 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc sram6 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+744,"riscv_soc sram6 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+75,"riscv_soc sram6 sram Q", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram6 sram CLK", false,-1);
        tracep->declBit(c+743,"riscv_soc sram6 sram CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram6 sram WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram6 sram A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram6 sram D", false,-1, 127,0);
        tracep->declBit(c+742,"riscv_soc sram6 sram cen", false,-1);
        tracep->declBit(c+293,"riscv_soc sram6 sram wen", false,-1);
        tracep->declArray(c+276,"riscv_soc sram6 sram bwen", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram7 clock", false,-1);
        tracep->declBus(c+79,"riscv_soc sram7 io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram7 io_wen", false,-1);
        tracep->declArray(c+738,"riscv_soc sram7 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7 io_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc sram7 io_rdata", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram7 sram_CLK", false,-1);
        tracep->declArray(c+80,"riscv_soc sram7 sram_Q", false,-1, 127,0);
        tracep->declBit(c+743,"riscv_soc sram7 sram_CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram7 sram_WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram7 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc sram7 sram_A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram7 sram_D", false,-1, 127,0);
        tracep->declBus(c+744,"riscv_soc sram7 sram Bits", false,-1, 31,0);
        tracep->declBus(c+745,"riscv_soc sram7 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc sram7 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+744,"riscv_soc sram7 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+80,"riscv_soc sram7 sram Q", false,-1, 127,0);
        tracep->declBit(c+656,"riscv_soc sram7 sram CLK", false,-1);
        tracep->declBit(c+743,"riscv_soc sram7 sram CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram7 sram WEN", false,-1);
        tracep->declArray(c+738,"riscv_soc sram7 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc sram7 sram A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram7 sram D", false,-1, 127,0);
        tracep->declBit(c+742,"riscv_soc sram7 sram cen", false,-1);
        tracep->declBit(c+293,"riscv_soc sram7 sram wen", false,-1);
        tracep->declArray(c+747,"riscv_soc sram7 sram bwen", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp903;
    VlWide<4>/*127:0*/ __Vtemp904;
    VlWide<4>/*127:0*/ __Vtemp905;
    VlWide<3>/*95:0*/ __Vtemp907;
    VlWide<3>/*95:0*/ __Vtemp908;
    VlWide<3>/*95:0*/ __Vtemp909;
    VlWide<3>/*95:0*/ __Vtemp911;
    VlWide<3>/*95:0*/ __Vtemp912;
    VlWide<3>/*95:0*/ __Vtemp914;
    VlWide<3>/*95:0*/ __Vtemp916;
    VlWide<3>/*95:0*/ __Vtemp917;
    VlWide<3>/*95:0*/ __Vtemp918;
    VlWide<3>/*95:0*/ __Vtemp919;
    VlWide<3>/*95:0*/ __Vtemp922;
    VlWide<3>/*95:0*/ __Vtemp923;
    VlWide<3>/*95:0*/ __Vtemp924;
    VlWide<5>/*159:0*/ __Vtemp933;
    VlWide<5>/*159:0*/ __Vtemp937;
    VlWide<3>/*95:0*/ __Vtemp939;
    VlWide<5>/*159:0*/ __Vtemp941;
    VlWide<5>/*159:0*/ __Vtemp942;
    VlWide<5>/*159:0*/ __Vtemp943;
    VlWide<5>/*159:0*/ __Vtemp944;
    VlWide<5>/*159:0*/ __Vtemp945;
    VlWide<5>/*159:0*/ __Vtemp947;
    VlWide<5>/*159:0*/ __Vtemp948;
    VlWide<5>/*159:0*/ __Vtemp949;
    VlWide<5>/*159:0*/ __Vtemp950;
    VlWide<5>/*159:0*/ __Vtemp951;
    VlWide<5>/*159:0*/ __Vtemp953;
    VlWide<5>/*159:0*/ __Vtemp954;
    VlWide<5>/*159:0*/ __Vtemp955;
    VlWide<5>/*159:0*/ __Vtemp963;
    VlWide<5>/*159:0*/ __Vtemp964;
    VlWide<5>/*159:0*/ __Vtemp972;
    VlWide<4>/*127:0*/ __Vtemp974;
    VlWide<4>/*127:0*/ __Vtemp975;
    VlWide<4>/*127:0*/ __Vtemp976;
    VlWide<4>/*127:0*/ __Vtemp977;
    VlWide<4>/*127:0*/ __Vtemp978;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
        tracep->fullBit(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
        tracep->fullQData(oldp+3,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr
                                        : 0ULL))),64);
        tracep->fullBit(oldp+5,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
        tracep->fullBit(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
        tracep->fullQData(oldp+7,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata
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
        tracep->fullWData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+27,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q),128);
        tracep->fullCData(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp903, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
        tracep->fullWData(oldp+32,(__Vtemp903),128);
        tracep->fullWData(oldp+36,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q),128);
        tracep->fullCData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
        tracep->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+42,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q),128);
        tracep->fullCData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+47,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q),128);
        tracep->fullCData(oldp+51,((0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                                              : (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                         >> 4U))))),6);
        tracep->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp904[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp904[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp904[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp904[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+53,(__Vtemp904),128);
        tracep->fullWData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+61,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q),128);
        tracep->fullCData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp905, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+66,(__Vtemp905),128);
        tracep->fullWData(oldp+70,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q),128);
        tracep->fullBit(oldp+74,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+75,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q),128);
        tracep->fullCData(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+80,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q),128);
        tracep->fullBit(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid));
        tracep->fullQData(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullQData(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
        tracep->fullBit(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
        tracep->fullBit(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_fence_i));
        tracep->fullBit(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+106,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+114,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
        tracep->fullQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata),64);
        tracep->fullBit(oldp+127,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
        tracep->fullQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+131,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
        tracep->fullBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
        tracep->fullBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_stall));
        tracep->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc),64);
        tracep->fullBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush));
        tracep->fullQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
        tracep->fullIData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
        tracep->fullCData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
        tracep->fullCData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
        tracep->fullCData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
        tracep->fullQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc),64);
        tracep->fullCData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
        tracep->fullSData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
        tracep->fullCData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
        tracep->fullBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
        tracep->fullSData(oldp+165,((0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))),12);
        tracep->fullQData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en));
        tracep->fullBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
        tracep->fullCData(oldp+170,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
        tracep->fullQData(oldp+171,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___reg_rs_data_T_6)),64);
        tracep->fullBit(oldp+173,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))));
        tracep->fullCData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
        tracep->fullQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
        tracep->fullCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
        tracep->fullQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result),64);
        tracep->fullBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
        tracep->fullBit(oldp+183,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U)))));
        tracep->fullSData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result),64);
        tracep->fullBit(oldp+187,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en))));
        tracep->fullCData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception),5);
        tracep->fullBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_exception));
        tracep->fullBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret));
        tracep->fullQData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_next_pc),64);
        tracep->fullBit(oldp+193,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))));
        tracep->fullBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
        tracep->fullQData(oldp+195,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U) == 
                                       (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
        tracep->fullBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush));
        tracep->fullSData(oldp+199,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec),64);
        tracep->fullQData(oldp+202,((((0x341U == (0xfffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc)),64);
        tracep->fullQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullBit(oldp+208,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq));
        tracep->fullBit(oldp+211,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq))));
        tracep->fullCData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception),5);
        tracep->fullBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception));
        tracep->fullQData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
        tracep->fullQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
        tracep->fullQData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc),64);
        tracep->fullQData(oldp+221,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+223,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+224,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
        tracep->fullCData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
        tracep->fullBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
        tracep->fullBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+235,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+237,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+242,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U]))))),54);
        tracep->fullQData(oldp+244,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U]))))),54);
        tracep->fullBit(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0));
        tracep->fullBit(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
        tracep->fullBit(oldp+248,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+249,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))));
        tracep->fullQData(oldp+250,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[0U]))))),64);
        tracep->fullQData(oldp+252,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[0U]))))),64);
        tracep->fullQData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+256,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
        tracep->fullQData(oldp+258,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+260,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+261,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))),4);
        tracep->fullCData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+274,((((QData)((IData)(
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
        tracep->fullWData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+289,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+291,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+298,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U]))))),54);
        tracep->fullQData(oldp+300,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U]))))),54);
        tracep->fullBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+304,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+305,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+306,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+307,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+308,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[0U]))))),64);
        tracep->fullQData(oldp+310,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[0U]))))),64);
        tracep->fullQData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+314,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullBit(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+323,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+328,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+329,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
        tracep->fullQData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
        tracep->fullIData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
        tracep->fullBit(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
        tracep->fullBit(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullQData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
        tracep->fullQData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
        tracep->fullQData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data),64);
        tracep->fullQData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc),64);
        tracep->fullBit(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid));
        tracep->fullBit(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_valid));
        tracep->fullQData(oldp+351,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr))
                                      ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6)),64);
        tracep->fullBit(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid));
        tracep->fullBit(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en));
        tracep->fullQData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
        tracep->fullQData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+359,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid)
                                       ? ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                           ? ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                           : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                       : 0ULL) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid)
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                       >> 0x1fU)
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))))
                                                   : 0ULL))),64);
        tracep->fullBit(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
        tracep->fullBit(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid));
        tracep->fullBit(oldp+363,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid))));
        tracep->fullBit(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_valid));
        tracep->fullQData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data),64);
        tracep->fullQData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data),64);
        tracep->fullQData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result),64);
        tracep->fullBit(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en));
        tracep->fullBit(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu_io_valid));
        tracep->fullBit(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_fence_i));
        tracep->fullBit(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret));
        tracep->fullBit(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception));
        tracep->fullCData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),5);
        tracep->fullBit(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall));
        tracep->fullQData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
        tracep->fullCData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
        tracep->fullBit(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
        tracep->fullCData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),5);
        tracep->fullQData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
        tracep->fullBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en));
        tracep->fullQData(oldp+388,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))
                                      ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6)),64);
        tracep->fullBit(oldp+390,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid) 
                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        tracep->fullBit(oldp+391,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        tracep->fullQData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        __Vtemp907[0U] = 1U;
        __Vtemp907[1U] = 0U;
        __Vtemp907[2U] = 0U;
        VL_ADD_W(3, __Vtemp908, __Vtemp907, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        __Vtemp909[0U] = __Vtemp908[0U];
        __Vtemp909[1U] = __Vtemp908[1U];
        __Vtemp909[2U] = (1U & __Vtemp908[2U]);
        tracep->fullWData(oldp+394,(__Vtemp909),65);
        __Vtemp911[0U] = 1U;
        __Vtemp911[1U] = 0U;
        __Vtemp911[2U] = 0U;
        VL_ADD_W(3, __Vtemp912, __Vtemp911, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        tracep->fullBit(oldp+397,((1U & (~ (1U & __Vtemp912[2U])))));
        tracep->fullBit(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullQData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
        tracep->fullIData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
        tracep->fullIData(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
        tracep->fullQData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp),64);
        tracep->fullWData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),65);
        tracep->fullBit(oldp+408,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
        tracep->fullQData(oldp+409,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
        __Vtemp914[0U] = (IData)((0xfffffffffffffffeULL 
                                  & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                     + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
        __Vtemp914[1U] = (IData)(((0xfffffffffffffffeULL 
                                   & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                      + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)) 
                                  >> 0x20U));
        __Vtemp914[2U] = 1U;
        tracep->fullWData(oldp+411,(__Vtemp914),65);
        tracep->fullWData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullBit(oldp+417,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+418,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullQData(oldp+420,(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                      ? ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                      : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+422,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid) 
                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 4U)) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall)))));
        tracep->fullBit(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
        tracep->fullBit(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
        tracep->fullQData(oldp+425,(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                      ? (((QData)((IData)(
                                                          ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                      : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))))),64);
        tracep->fullBit(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
        tracep->fullBit(oldp+428,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid) 
                                    & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                          >> 4U))) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall)))));
        tracep->fullBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
        tracep->fullBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid));
        tracep->fullWData(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp916[0U] = 1U;
        __Vtemp916[1U] = 0U;
        __Vtemp916[2U] = 0U;
        __Vtemp917[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp917[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp917[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp918, __Vtemp916, __Vtemp917);
        __Vtemp919[0U] = __Vtemp918[0U];
        __Vtemp919[1U] = __Vtemp918[1U];
        __Vtemp919[2U] = (1U & __Vtemp918[2U]);
        tracep->fullWData(oldp+452,(__Vtemp919),65);
        tracep->fullCData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
        tracep->fullWData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+463,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp922[0U] = 1U;
        __Vtemp922[1U] = 0U;
        __Vtemp922[2U] = 0U;
        __Vtemp923[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp923[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp923[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp924, __Vtemp922, __Vtemp923);
        tracep->fullBit(oldp+464,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ __Vtemp924[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp924[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ (1U 
                                                & __Vtemp924[2U]))))));
        tracep->fullBit(oldp+465,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullQData(oldp+467,(((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullQData(oldp+469,(((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__valid));
        VL_EXTEND_WQ(130,64, __Vtemp933, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            __Vtemp937[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            __Vtemp937[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp937[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp937[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp937[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 3U : 0U);
        } else {
            __Vtemp937[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                               : __Vtemp933[0U]);
            __Vtemp937[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                          >> 0x20U))
                               : __Vtemp933[1U]);
            __Vtemp937[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? 0xffffffffU : __Vtemp933[2U]);
            __Vtemp937[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? 0xffffffffU : __Vtemp933[3U]);
            __Vtemp937[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? 3U : __Vtemp933[4U]);
        }
        tracep->fullWData(oldp+472,(__Vtemp937),130);
        tracep->fullWData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp939[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                          << 1U);
        __Vtemp939[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                        << 1U));
        __Vtemp939[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                 << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                             >> 0x1fU) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                               << 1U)));
        tracep->fullWData(oldp+480,(__Vtemp939),67);
        tracep->fullCData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
        tracep->fullCData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),4);
        __Vtemp941[0U] = 1U;
        __Vtemp941[1U] = 0U;
        __Vtemp941[2U] = 0U;
        __Vtemp941[3U] = 0U;
        __Vtemp941[4U] = 0U;
        __Vtemp942[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp942[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp942[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp942[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp942[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp943, __Vtemp941, __Vtemp942);
        __Vtemp944[0U] = __Vtemp943[0U];
        __Vtemp944[1U] = __Vtemp943[1U];
        __Vtemp944[2U] = __Vtemp943[2U];
        __Vtemp944[3U] = __Vtemp943[3U];
        __Vtemp944[4U] = (3U & __Vtemp943[4U]);
        VL_EXTEND_WW(131,130, __Vtemp945, __Vtemp944);
        __Vtemp947[0U] = 1U;
        __Vtemp947[1U] = 0U;
        __Vtemp947[2U] = 0U;
        __Vtemp947[3U] = 0U;
        __Vtemp947[4U] = 0U;
        __Vtemp948[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp948[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp948[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp948[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp948[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp949, __Vtemp947, __Vtemp948);
        __Vtemp950[0U] = __Vtemp949[0U];
        __Vtemp950[1U] = __Vtemp949[1U];
        __Vtemp950[2U] = __Vtemp949[2U];
        __Vtemp950[3U] = __Vtemp949[3U];
        __Vtemp950[4U] = (3U & __Vtemp949[4U]);
        VL_EXTEND_WW(131,130, __Vtemp951, __Vtemp950);
        __Vtemp953[0U] = 1U;
        __Vtemp953[1U] = 0U;
        __Vtemp953[2U] = 0U;
        __Vtemp953[3U] = 0U;
        __Vtemp953[4U] = 0U;
        __Vtemp954[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp954[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp954[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp954[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp954[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp955, __Vtemp953, __Vtemp954);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp963[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp963[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp963[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp963[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp963[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp963[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                               : 0U);
            __Vtemp963[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                               : 0U);
            __Vtemp963[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                               : 0U);
            __Vtemp963[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                               : 0U);
            __Vtemp963[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                               : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp964, __Vtemp963);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp972[0U] = __Vtemp945[0U];
            __Vtemp972[1U] = __Vtemp945[1U];
            __Vtemp972[2U] = __Vtemp945[2U];
            __Vtemp972[3U] = __Vtemp945[3U];
            __Vtemp972[4U] = __Vtemp945[4U];
        } else {
            __Vtemp972[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp951[0U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   (__Vtemp955[0U] 
                                                    << 1U)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                     ? 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                     << 1U)
                                                     : 
                                                    __Vtemp964[0U])));
            __Vtemp972[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp951[1U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp955[0U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp955[1U] 
                                                       << 1U))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                     ? 
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                      >> 0x1fU) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                        << 1U))
                                                     : 
                                                    __Vtemp964[1U])));
            __Vtemp972[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp951[2U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp955[1U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp955[2U] 
                                                       << 1U))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                     ? 
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                      >> 0x1fU) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                        << 1U))
                                                     : 
                                                    __Vtemp964[2U])));
            __Vtemp972[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp951[3U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp955[2U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp955[3U] 
                                                       << 1U))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                     ? 
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                      >> 0x1fU) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                        << 1U))
                                                     : 
                                                    __Vtemp964[3U])));
            __Vtemp972[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp951[4U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp955[3U] 
                                                     >> 0x1fU) 
                                                    | (6U 
                                                       & (__Vtemp955[4U] 
                                                          << 1U)))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                     ? 
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                      >> 0x1fU) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                        << 1U))
                                                     : 
                                                    __Vtemp964[4U])));
        }
        tracep->fullWData(oldp+499,(__Vtemp972),131);
        tracep->fullWData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data),65);
        tracep->fullQData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
        tracep->fullQData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
        tracep->fullQData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
        tracep->fullQData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
        tracep->fullQData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
        tracep->fullQData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
        tracep->fullQData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
        tracep->fullQData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
        tracep->fullQData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
        tracep->fullQData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
        tracep->fullQData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
        tracep->fullQData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
        tracep->fullQData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
        tracep->fullQData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
        tracep->fullQData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
        tracep->fullQData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
        tracep->fullQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
        tracep->fullQData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
        tracep->fullQData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
        tracep->fullQData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
        tracep->fullQData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
        tracep->fullQData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
        tracep->fullQData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
        tracep->fullQData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
        tracep->fullQData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
        tracep->fullQData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
        tracep->fullQData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
        tracep->fullQData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
        tracep->fullQData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
        tracep->fullQData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
        tracep->fullQData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
        tracep->fullQData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
        tracep->fullCData(oldp+571,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                               >> 0xfU))]),64);
        tracep->fullCData(oldp+574,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                               >> 0x14U))]),64);
        tracep->fullCData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
        tracep->fullQData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullBit(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
        tracep->fullCData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullCData(oldp+583,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 7U))),5);
        tracep->fullBit(oldp+584,((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                    & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))) 
                                   & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0xfU))) 
                                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr) 
                                         == (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                >> 0x14U)))))));
        tracep->fullBit(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush));
        tracep->fullCData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
        tracep->fullQData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
        tracep->fullBit(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
        tracep->fullCData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
        tracep->fullQData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
        tracep->fullQData(oldp+593,(((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                      ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))
                                      : ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))
                                          : ((0xaU 
                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))))
                                              : ((9U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                                                  >> 7U)))
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))))
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data
                                                     : 0ULL)))))))),64);
        tracep->fullQData(oldp+595,(((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                      ? (QData)((IData)(
                                                        (0x7ffU 
                                                         & ((IData)(0xfU) 
                                                            << 
                                                            (7U 
                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                      : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                          ? (QData)((IData)(
                                                            (0x1ffU 
                                                             & ((IData)(3U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                          : ((0x1dU 
                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                              ? (QData)((IData)(
                                                                (0x7fffU 
                                                                 & ((IData)(0xffU) 
                                                                    << 
                                                                    (7U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                              : ((5U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        << 
                                                                        (7U 
                                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                                  : 0ULL))))),64);
        tracep->fullBit(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
        tracep->fullQData(oldp+598,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data)),64);
        VL_EXTEND_WQ(127,64, __Vtemp974, ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data
                                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data));
        VL_SHIFTL_WWI(127,127,6, __Vtemp975, __Vtemp974, 
                      (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result) 
                                << 3U)));
        __Vtemp976[0U] = __Vtemp975[0U];
        __Vtemp976[1U] = __Vtemp975[1U];
        __Vtemp976[2U] = __Vtemp975[2U];
        __Vtemp976[3U] = (0x7fffffffU & __Vtemp975[3U]);
        tracep->fullWData(oldp+600,(__Vtemp976),127);
        tracep->fullBit(oldp+604,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))));
        tracep->fullQData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr),64);
        tracep->fullBit(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en));
        tracep->fullBit(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq));
        tracep->fullBit(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq));
        tracep->fullBit(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_irq));
        tracep->fullBit(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except));
        tracep->fullBit(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq));
        tracep->fullBit(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq));
        tracep->fullBit(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+633,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0x14U))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret
                                      : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+640,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
        tracep->fullBit(oldp+641,((0x4000U == (0xffffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
        tracep->fullQData(oldp+642,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                      ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                      : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+644,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+646,((((QData)((IData)(
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
        tracep->fullBit(oldp+648,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+649,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+651,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+652,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+653,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+654,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullIData(oldp+655,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullBit(oldp+656,(vlSelf->clock));
        tracep->fullBit(oldp+657,(vlSelf->reset));
        tracep->fullQData(oldp+658,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+660,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+662,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+664,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+666,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+668,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+670,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+672,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+674,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+676,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+678,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+680,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+682,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+684,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+686,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+688,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+690,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+692,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+694,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+696,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+698,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+700,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+702,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+704,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+706,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+708,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+710,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+712,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+714,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+716,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+718,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+720,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+722,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+724,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+725,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+726,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+728,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+729,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+731,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+733,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+735,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+737,(vlSelf->io_difftest_peripheral));
        __Vtemp977[0U] = 0U;
        __Vtemp977[1U] = 0U;
        __Vtemp977[2U] = 0U;
        __Vtemp977[3U] = 0U;
        tracep->fullWData(oldp+738,(__Vtemp977),128);
        tracep->fullBit(oldp+742,(1U));
        tracep->fullBit(oldp+743,(0U));
        tracep->fullIData(oldp+744,(0x80U),32);
        tracep->fullIData(oldp+745,(0x40U),32);
        tracep->fullIData(oldp+746,(6U),32);
        __Vtemp978[0U] = 0xffffffffU;
        __Vtemp978[1U] = 0xffffffffU;
        __Vtemp978[2U] = 0xffffffffU;
        __Vtemp978[3U] = 0xffffffffU;
        tracep->fullWData(oldp+747,(__Vtemp978),128);
    }
}
