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
        tracep->declBit(c+952,"clock", false,-1);
        tracep->declBit(c+953,"reset", false,-1);
        tracep->declQuad(c+954,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+956,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+958,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+960,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+962,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+964,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+966,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+968,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+970,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+972,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+974,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+976,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+978,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+980,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+982,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+984,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+986,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+988,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+990,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+992,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+994,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+996,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+998,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+1000,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+1002,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+1004,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+1006,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+1008,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+1010,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+1012,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+1014,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+1016,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+1018,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+1020,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+1021,"io_difftest_commit", false,-1);
        tracep->declQuad(c+1022,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+1024,"io_difftest_irq", false,-1);
        tracep->declQuad(c+1025,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+1027,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+1029,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+1031,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+1033,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+952,"riscv_soc clock", false,-1);
        tracep->declBit(c+953,"riscv_soc reset", false,-1);
        tracep->declQuad(c+954,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+956,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+958,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+960,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+962,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+964,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+966,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+968,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+970,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+972,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+974,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+976,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+978,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+980,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+982,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+984,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+986,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+988,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+990,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+992,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+994,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+996,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+998,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+1000,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+1002,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+1004,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+1006,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+1008,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+1010,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+1012,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+1014,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+1016,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+1018,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+1020,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+1021,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+1022,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+1024,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+1025,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+1027,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+1029,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+1031,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+1033,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+952,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core_reset", false,-1);
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
        tracep->declBus(c+21,"riscv_soc core_io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core_io_sram1_wen", false,-1);
        tracep->declArray(c+31,"riscv_soc core_io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+35,"riscv_soc core_io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core_io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc core_io_sram2_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core_io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+40,"riscv_soc core_io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core_io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc core_io_sram3_wen", false,-1);
        tracep->declArray(c+31,"riscv_soc core_io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+44,"riscv_soc core_io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc core_io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc core_io_sram4_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc core_io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc core_io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+58,"riscv_soc core_io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+62,"riscv_soc core_io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc core_io_sram5_wen", false,-1);
        tracep->declArray(c+63,"riscv_soc core_io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+67,"riscv_soc core_io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc core_io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc core_io_sram6_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc core_io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc core_io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+72,"riscv_soc core_io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+76,"riscv_soc core_io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc core_io_sram7_wen", false,-1);
        tracep->declArray(c+63,"riscv_soc core_io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+77,"riscv_soc core_io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+81,"riscv_soc core_difftest_irq", false,-1);
        tracep->declBit(c+82,"riscv_soc core_difftest_peripheral", false,-1);
        tracep->declBit(c+83,"riscv_soc core_difftest_commit", false,-1);
        tracep->declQuad(c+84,"riscv_soc core_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+86,"riscv_soc core_difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+1034,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+103,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+105,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+107,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+109,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+111,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+119,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+121,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+123,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+131,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+135,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+137,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+139,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+143,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+147,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core_inst_counter", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc axi_ram_reset", false,-1);
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
        tracep->declBit(c+952,"riscv_soc sram0_clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0_io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram0_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0_io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0_io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram1_clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram1_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1_io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+31,"riscv_soc sram1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+35,"riscv_soc sram1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram2_clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram2_io_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc sram2_io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+40,"riscv_soc sram2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram3_clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram3_io_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc sram3_io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+31,"riscv_soc sram3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+44,"riscv_soc sram3_io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram4_clock", false,-1);
        tracep->declBus(c+48,"riscv_soc sram4_io_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc sram4_io_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc sram4_io_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc sram4_io_wdata", false,-1, 127,0);
        tracep->declArray(c+58,"riscv_soc sram4_io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram5_clock", false,-1);
        tracep->declBus(c+62,"riscv_soc sram5_io_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc sram5_io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram5_io_wmask", false,-1, 127,0);
        tracep->declArray(c+63,"riscv_soc sram5_io_wdata", false,-1, 127,0);
        tracep->declArray(c+67,"riscv_soc sram5_io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram6_clock", false,-1);
        tracep->declBus(c+48,"riscv_soc sram6_io_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc sram6_io_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc sram6_io_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc sram6_io_wdata", false,-1, 127,0);
        tracep->declArray(c+72,"riscv_soc sram6_io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram7_clock", false,-1);
        tracep->declBus(c+76,"riscv_soc sram7_io_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc sram7_io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram7_io_wmask", false,-1, 127,0);
        tracep->declArray(c+63,"riscv_soc sram7_io_wdata", false,-1, 127,0);
        tracep->declArray(c+77,"riscv_soc sram7_io_rdata", false,-1, 127,0);
        tracep->declBus(c+86,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+151,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core reset", false,-1);
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
        tracep->declBus(c+21,"riscv_soc core io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core io_sram1_wen", false,-1);
        tracep->declArray(c+31,"riscv_soc core io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+35,"riscv_soc core io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc core io_sram2_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+40,"riscv_soc core io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc core io_sram3_wen", false,-1);
        tracep->declArray(c+31,"riscv_soc core io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+44,"riscv_soc core io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc core io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc core io_sram4_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc core io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc core io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+58,"riscv_soc core io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+62,"riscv_soc core io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc core io_sram5_wen", false,-1);
        tracep->declArray(c+63,"riscv_soc core io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+67,"riscv_soc core io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc core io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc core io_sram6_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc core io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc core io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+72,"riscv_soc core io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+76,"riscv_soc core io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc core io_sram7_wen", false,-1);
        tracep->declArray(c+63,"riscv_soc core io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+77,"riscv_soc core io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+81,"riscv_soc core difftest_irq", false,-1);
        tracep->declBit(c+82,"riscv_soc core difftest_peripheral", false,-1);
        tracep->declBit(c+83,"riscv_soc core difftest_commit", false,-1);
        tracep->declQuad(c+84,"riscv_soc core difftest_pc", false,-1, 63,0);
        tracep->declBus(c+86,"riscv_soc core difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+149,"riscv_soc core inst_counter", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+153,"riscv_soc core i_cache_io_flush", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache_io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core i_cache_io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core i_cache_io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache_io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv_soc core i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core i_cache_io_is_fence_i", false,-1);
        tracep->declBus(c+21,"riscv_soc core i_cache_io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core i_cache_io_sram0_data_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache_io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc core i_cache_io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core i_cache_io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core i_cache_io_sram0_tag_wen", false,-1);
        tracep->declArray(c+31,"riscv_soc core i_cache_io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+35,"riscv_soc core i_cache_io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core i_cache_io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc core i_cache_io_sram2_data_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache_io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+40,"riscv_soc core i_cache_io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core i_cache_io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc core i_cache_io_sram2_tag_wen", false,-1);
        tracep->declArray(c+31,"riscv_soc core i_cache_io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+44,"riscv_soc core i_cache_io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+165,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+169,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+170,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+179,"riscv_soc core d_cache_io_cpu_ready", false,-1);
        tracep->declBus(c+48,"riscv_soc core d_cache_io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc core d_cache_io_sram0_data_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc core d_cache_io_sram0_data_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc core d_cache_io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+58,"riscv_soc core d_cache_io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+62,"riscv_soc core d_cache_io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc core d_cache_io_sram0_tag_wen", false,-1);
        tracep->declArray(c+63,"riscv_soc core d_cache_io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+67,"riscv_soc core d_cache_io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc core d_cache_io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc core d_cache_io_sram2_data_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc core d_cache_io_sram2_data_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc core d_cache_io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+72,"riscv_soc core d_cache_io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+76,"riscv_soc core d_cache_io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc core d_cache_io_sram2_tag_wen", false,-1);
        tracep->declArray(c+63,"riscv_soc core d_cache_io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+77,"riscv_soc core d_cache_io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+180,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+181,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+182,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+184,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+186,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+187,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+188,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+189,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+190,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+193,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+165,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+169,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+180,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+181,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+182,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+184,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+186,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+188,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+189,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+190,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+193,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+196,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+1040,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+198,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1_io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_1_io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+201,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+203,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+205,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+208,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+154,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+170,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+179,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+196,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+209,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core fetch_reset", false,-1);
        tracep->declBit(c+213,"riscv_soc core fetch_io_br_info_valid", false,-1);
        tracep->declBit(c+214,"riscv_soc core fetch_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+215,"riscv_soc core fetch_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core fetch_io_br_info_taken", false,-1);
        tracep->declQuad(c+218,"riscv_soc core fetch_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+220,"riscv_soc core fetch_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+221,"riscv_soc core fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+223,"riscv_soc core fetch_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core fetch_io_flush", false,-1);
        tracep->declBit(c+198,"riscv_soc core fetch_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core fetch_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core fetch_io_cpu_data_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core fetch_io_cpu_data_valid", false,-1);
        tracep->declQuad(c+201,"riscv_soc core fetch_io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+203,"riscv_soc core fetch_io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core fetch_io_put_pc_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core fetch_io_put_pc_valid", false,-1);
        tracep->declBus(c+228,"riscv_soc core fetch_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+229,"riscv_soc core fetch_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core fetch_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+153,"riscv_soc core fetch_io_out_flush", false,-1);
        tracep->declBit(c+952,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute_reset", false,-1);
        tracep->declBit(c+226,"riscv_soc core execute_io_op_datas_ready", false,-1);
        tracep->declBit(c+232,"riscv_soc core execute_io_op_datas_valid", false,-1);
        tracep->declBus(c+233,"riscv_soc core execute_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+234,"riscv_soc core execute_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+235,"riscv_soc core execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"riscv_soc core execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"riscv_soc core execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core execute_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+242,"riscv_soc core execute_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core execute_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+245,"riscv_soc core execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+246,"riscv_soc core execute_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+247,"riscv_soc core execute_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+248,"riscv_soc core execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core execute_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core execute_io_irq_time_irq", false,-1);
        tracep->declBit(c+252,"riscv_soc core execute_io_irq_soft_irq", false,-1);
        tracep->declQuad(c+253,"riscv_soc core execute_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+255,"riscv_soc core execute_io_mie", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core execute_io_mtvec", false,-1, 63,0);
        tracep->declBit(c+261,"riscv_soc core execute_io_wb_valid", false,-1);
        tracep->declBus(c+262,"riscv_soc core execute_io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"riscv_soc core execute_io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core execute_io_csr_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core execute_io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+267,"riscv_soc core execute_io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core execute_io_csr_except_is_except", false,-1);
        tracep->declBit(c+270,"riscv_soc core execute_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+271,"riscv_soc core execute_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+272,"riscv_soc core execute_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+273,"riscv_soc core execute_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+275,"riscv_soc core execute_io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+277,"riscv_soc core execute_io_commit", false,-1);
        tracep->declBus(c+278,"riscv_soc core execute_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+279,"riscv_soc core execute_io_difftest_peripheral", false,-1);
        tracep->declQuad(c+223,"riscv_soc core execute_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core execute_io_flush", false,-1);
        tracep->declBit(c+164,"riscv_soc core execute_io_fence_i", false,-1);
        tracep->declBit(c+213,"riscv_soc core execute_io_br_info_valid", false,-1);
        tracep->declBit(c+214,"riscv_soc core execute_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+215,"riscv_soc core execute_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core execute_io_br_info_taken", false,-1);
        tracep->declQuad(c+218,"riscv_soc core execute_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+220,"riscv_soc core execute_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+221,"riscv_soc core execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+205,"riscv_soc core execute_io_bus_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core execute_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core execute_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core execute_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core execute_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core execute_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute_io_bus_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core decode_reset", false,-1);
        tracep->declBit(c+226,"riscv_soc core decode_io_get_inst_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core decode_io_get_inst_valid", false,-1);
        tracep->declBus(c+228,"riscv_soc core decode_io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+229,"riscv_soc core decode_io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core decode_io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+280,"riscv_soc core decode_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+281,"riscv_soc core decode_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+283,"riscv_soc core decode_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+284,"riscv_soc core decode_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+286,"riscv_soc core decode_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+287,"riscv_soc core decode_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core decode_io_op_datas_ready", false,-1);
        tracep->declBit(c+232,"riscv_soc core decode_io_op_datas_valid", false,-1);
        tracep->declBus(c+233,"riscv_soc core decode_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+234,"riscv_soc core decode_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+235,"riscv_soc core decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"riscv_soc core decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"riscv_soc core decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core decode_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+242,"riscv_soc core decode_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core decode_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+245,"riscv_soc core decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+246,"riscv_soc core decode_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+247,"riscv_soc core decode_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+248,"riscv_soc core decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core decode_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core decode_io_flush", false,-1);
        tracep->declBit(c+952,"riscv_soc core commit_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core commit_reset", false,-1);
        tracep->declBus(c+280,"riscv_soc core commit_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+281,"riscv_soc core commit_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+283,"riscv_soc core commit_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+284,"riscv_soc core commit_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+261,"riscv_soc core commit_io_normal_wb_valid", false,-1);
        tracep->declBus(c+262,"riscv_soc core commit_io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"riscv_soc core commit_io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+286,"riscv_soc core commit_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+287,"riscv_soc core commit_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core commit_io_csr_wb_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core commit_io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+267,"riscv_soc core commit_io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core commit_io_csr_except_is_except", false,-1);
        tracep->declBit(c+270,"riscv_soc core commit_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+271,"riscv_soc core commit_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+272,"riscv_soc core commit_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+273,"riscv_soc core commit_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+275,"riscv_soc core commit_io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit_io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+253,"riscv_soc core commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+255,"riscv_soc core commit_io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+277,"riscv_soc core commit_io_commit", false,-1);
        tracep->declBus(c+278,"riscv_soc core commit_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+279,"riscv_soc core commit_io_difftest_peripheral", false,-1);
        tracep->declBit(c+81,"riscv_soc core commit_difftest_irq_0", false,-1);
        tracep->declBit(c+82,"riscv_soc core commit_difftest_peripheral_0", false,-1);
        tracep->declBit(c+83,"riscv_soc core commit_difftest_commit_0", false,-1);
        tracep->declQuad(c+84,"riscv_soc core commit_difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+86,"riscv_soc core commit_difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+1034,"riscv_soc core commit__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core commit__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core commit__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core commit__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core commit__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core commit__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core commit__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_soc core commit__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_soc core commit__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+103,"riscv_soc core commit__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+105,"riscv_soc core commit__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+107,"riscv_soc core commit__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+109,"riscv_soc core commit__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+111,"riscv_soc core commit__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core commit__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core commit__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core commit__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+119,"riscv_soc core commit__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+121,"riscv_soc core commit__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+123,"riscv_soc core commit__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv_soc core commit__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core commit__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+129,"riscv_soc core commit__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+131,"riscv_soc core commit__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core commit__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+135,"riscv_soc core commit__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+137,"riscv_soc core commit__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+139,"riscv_soc core commit__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core commit__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+143,"riscv_soc core commit__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core commit__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+147,"riscv_soc core commit__WIRE_0_31", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core commit_inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+209,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+178,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+252,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+251,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+952,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+153,"riscv_soc core i_cache io_flush", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core i_cache io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core i_cache io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core i_cache io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv_soc core i_cache io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core i_cache io_is_fence_i", false,-1);
        tracep->declBus(c+21,"riscv_soc core i_cache io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core i_cache io_sram0_data_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc core i_cache io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core i_cache io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc core i_cache io_sram0_tag_wen", false,-1);
        tracep->declArray(c+31,"riscv_soc core i_cache io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+35,"riscv_soc core i_cache io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core i_cache io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc core i_cache io_sram2_data_wen", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+40,"riscv_soc core i_cache io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc core i_cache io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc core i_cache io_sram2_tag_wen", false,-1);
        tracep->declArray(c+31,"riscv_soc core i_cache io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+44,"riscv_soc core i_cache io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+165,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+169,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core i_cache cache_stage0_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core i_cache cache_stage0_reset", false,-1);
        tracep->declBit(c+153,"riscv_soc core i_cache cache_stage0_io_flush", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage0_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core i_cache cache_stage0_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core i_cache cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage0_io_addr_ready", false,-1);
        tracep->declBit(c+289,"riscv_soc core i_cache cache_stage0_io_addr_valid", false,-1);
        tracep->declQuad(c+290,"riscv_soc core i_cache cache_stage0_io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core i_cache cache_stage1_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core i_cache cache_stage1_reset", false,-1);
        tracep->declBit(c+153,"riscv_soc core i_cache cache_stage1_io_flush", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage1_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+289,"riscv_soc core i_cache cache_stage1_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+290,"riscv_soc core i_cache cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+292,"riscv_soc core i_cache cache_stage1_io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+294,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+295,"riscv_soc core i_cache cache_stage1_io_sram_valid", false,-1);
        tracep->declArray(c+296,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+300,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+304,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+308,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+312,"riscv_soc core i_cache cache_stage1_io_sram_ready", false,-1);
        tracep->declBit(c+313,"riscv_soc core i_cache cache_stage1_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+314,"riscv_soc core i_cache cache_stage1_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+315,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+318,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+320,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+294,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core i_cache cache_stage2_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core i_cache cache_stage2_reset", false,-1);
        tracep->declBit(c+153,"riscv_soc core i_cache cache_stage2_io_flush", false,-1);
        tracep->declBit(c+313,"riscv_soc core i_cache cache_stage2_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+314,"riscv_soc core i_cache cache_stage2_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+315,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+318,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+320,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+294,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+165,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+169,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+323,"riscv_soc core i_cache cache_stage2_io_sram_w_valid", false,-1);
        tracep->declBus(c+324,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+31,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+325,"riscv_soc core i_cache cache_stage2_io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage2_io_rdata_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage2_io_rdata_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache cache_stage2_io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv_soc core i_cache cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+326,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+328,"riscv_soc core i_cache reg_sram1_valid", false,-1, 63,0);
        tracep->declBit(c+330,"riscv_soc core i_cache is_w_sram", false,-1);
        tracep->declBit(c+331,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declBit(c+332,"riscv_soc core i_cache is_sram1_write", false,-1);
        tracep->declQuad(c+333,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declBit(c+335,"riscv_soc core i_cache reg_temp_sram0_valid", false,-1);
        tracep->declBit(c+336,"riscv_soc core i_cache reg_temp_sram1_valid", false,-1);
        tracep->declBus(c+337,"riscv_soc core i_cache reg_temp_r_index", false,-1, 5,0);
        tracep->declBit(c+338,"riscv_soc core i_cache w_r_pass0_val", false,-1);
        tracep->declBit(c+339,"riscv_soc core i_cache w_r_pass1_val", false,-1);
        tracep->declBit(c+312,"riscv_soc core i_cache reg_sram_r_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core i_cache cache_stage0 clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core i_cache cache_stage0 reset", false,-1);
        tracep->declBit(c+153,"riscv_soc core i_cache cache_stage0 io_flush", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage0 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core i_cache cache_stage0 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core i_cache cache_stage0 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage0 io_addr_ready", false,-1);
        tracep->declBit(c+289,"riscv_soc core i_cache cache_stage0 io_addr_valid", false,-1);
        tracep->declQuad(c+290,"riscv_soc core i_cache cache_stage0 io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+289,"riscv_soc core i_cache cache_stage0 reg_valid", false,-1);
        tracep->declQuad(c+290,"riscv_soc core i_cache cache_stage0 reg_addr", false,-1, 63,0);
        tracep->declBit(c+340,"riscv_soc core i_cache cache_stage0 valid", false,-1);
        tracep->declBit(c+952,"riscv_soc core i_cache cache_stage1 clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core i_cache cache_stage1 reset", false,-1);
        tracep->declBit(c+153,"riscv_soc core i_cache cache_stage1 io_flush", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage1 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+289,"riscv_soc core i_cache cache_stage1 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+290,"riscv_soc core i_cache cache_stage1 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+292,"riscv_soc core i_cache cache_stage1 io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+294,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+295,"riscv_soc core i_cache cache_stage1 io_sram_valid", false,-1);
        tracep->declArray(c+296,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+300,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+304,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+308,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+312,"riscv_soc core i_cache cache_stage1 io_sram_ready", false,-1);
        tracep->declBit(c+313,"riscv_soc core i_cache cache_stage1 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+314,"riscv_soc core i_cache cache_stage1 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+315,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+318,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+320,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+294,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+295,"riscv_soc core i_cache cache_stage1 valid", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage1 ready", false,-1);
        tracep->declQuad(c+315,"riscv_soc core i_cache cache_stage1 reg_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+341,"riscv_soc core i_cache cache_stage1 reg_valid", false,-1);
        tracep->declQuad(c+342,"riscv_soc core i_cache cache_stage1 reg_tag", false,-1, 53,0);
        tracep->declBus(c+344,"riscv_soc core i_cache cache_stage1 reg_index", false,-1, 5,0);
        tracep->declBus(c+345,"riscv_soc core i_cache cache_stage1 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+346,"riscv_soc core i_cache cache_stage1 tag_0", false,-1, 53,0);
        tracep->declQuad(c+348,"riscv_soc core i_cache cache_stage1 tag_1", false,-1, 53,0);
        tracep->declBit(c+952,"riscv_soc core i_cache cache_stage2 clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core i_cache cache_stage2 reset", false,-1);
        tracep->declBit(c+153,"riscv_soc core i_cache cache_stage2 io_flush", false,-1);
        tracep->declBit(c+313,"riscv_soc core i_cache cache_stage2 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+314,"riscv_soc core i_cache cache_stage2 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+315,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+293,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+318,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+320,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+294,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+165,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+169,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+323,"riscv_soc core i_cache cache_stage2 io_sram_w_valid", false,-1);
        tracep->declBus(c+324,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+31,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+325,"riscv_soc core i_cache cache_stage2 io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage2 io_rdata_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage2 io_rdata_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache cache_stage2 io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv_soc core i_cache cache_stage2 io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBus(c+344,"riscv_soc core i_cache cache_stage2 index", false,-1, 5,0);
        tracep->declBit(c+350,"riscv_soc core i_cache cache_stage2 valid", false,-1);
        tracep->declBit(c+325,"riscv_soc core i_cache cache_stage2 reg_chosen_tag", false,-1);
        tracep->declQuad(c+160,"riscv_soc core i_cache cache_stage2 reg_rdata", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage2 reg_valid", false,-1);
        tracep->declBit(c+351,"riscv_soc core i_cache cache_stage2 reg_ready", false,-1);
        tracep->declQuad(c+352,"riscv_soc core i_cache cache_stage2 temp_addr", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core i_cache cache_stage2 reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+165,"riscv_soc core i_cache cache_stage2 reg_r_valid", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2 reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+323,"riscv_soc core i_cache cache_stage2 reg_cache_write", false,-1);
        tracep->declQuad(c+162,"riscv_soc core i_cache cache_stage2 reg_cpu_addr", false,-1, 63,0);
        tracep->declQuad(c+354,"riscv_soc core i_cache cache_stage2 reg_tag", false,-1, 53,0);
        tracep->declBus(c+356,"riscv_soc core i_cache cache_stage2 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+357,"riscv_soc core i_cache cache_stage2 reg_lru_1", false,-1, 63,0);
        tracep->declBit(c+359,"riscv_soc core i_cache cache_stage2 LRU_1", false,-1);
        tracep->declQuad(c+360,"riscv_soc core i_cache cache_stage2 chose_bit", false,-1, 63,0);
        tracep->declQuad(c+362,"riscv_soc core i_cache cache_stage2 neg_chose_bit", false,-1, 63,0);
        tracep->declBus(c+364,"riscv_soc core i_cache cache_stage2 reg_bus_state", false,-1, 1,0);
        tracep->declBit(c+952,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+170,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+179,"riscv_soc core d_cache io_cpu_ready", false,-1);
        tracep->declBus(c+48,"riscv_soc core d_cache io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc core d_cache io_sram0_data_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc core d_cache io_sram0_data_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc core d_cache io_sram0_data_wdata", false,-1, 127,0);
        tracep->declArray(c+58,"riscv_soc core d_cache io_sram0_data_rdata", false,-1, 127,0);
        tracep->declBus(c+62,"riscv_soc core d_cache io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc core d_cache io_sram0_tag_wen", false,-1);
        tracep->declArray(c+63,"riscv_soc core d_cache io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+67,"riscv_soc core d_cache io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc core d_cache io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc core d_cache io_sram2_data_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc core d_cache io_sram2_data_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc core d_cache io_sram2_data_wdata", false,-1, 127,0);
        tracep->declArray(c+72,"riscv_soc core d_cache io_sram2_data_rdata", false,-1, 127,0);
        tracep->declBus(c+76,"riscv_soc core d_cache io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc core d_cache io_sram2_tag_wen", false,-1);
        tracep->declArray(c+63,"riscv_soc core d_cache io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declArray(c+77,"riscv_soc core d_cache io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+180,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+181,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+182,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+184,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+186,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+187,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+188,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+189,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+190,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+193,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+365,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+367,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+368,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+369,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+370,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+372,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+373,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+374,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+376,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+377,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+179,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+173,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+378,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+379,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+54,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+380,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+381,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+383,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+387,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+391,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+392,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+394,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+396,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+398,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+400,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+401,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+403,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+190,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+182,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+184,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+186,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+181,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+187,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+405,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+407,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+409,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+410,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+411,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+412,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+413,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+414,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+415,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+417,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+419,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+421,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+422,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+423,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+424,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+425,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+952,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+165,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+166,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+169,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+180,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+181,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+182,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+184,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+186,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+188,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+189,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+190,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+193,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+196,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+1040,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+426,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+427,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+428,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+429,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+430,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+431,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+432,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+433,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+434,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+198,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1 io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_1 io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+201,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+203,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+205,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+208,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+154,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+159,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+160,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+170,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+179,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+196,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+209,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+178,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+435,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+436,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+437,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+952,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+213,"riscv_soc core fetch io_br_info_valid", false,-1);
        tracep->declBit(c+214,"riscv_soc core fetch io_br_info_mispredict", false,-1);
        tracep->declQuad(c+215,"riscv_soc core fetch io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core fetch io_br_info_taken", false,-1);
        tracep->declQuad(c+218,"riscv_soc core fetch io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+220,"riscv_soc core fetch io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+221,"riscv_soc core fetch io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+223,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+198,"riscv_soc core fetch io_cpu_addr_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core fetch io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core fetch io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core fetch io_cpu_data_ready", false,-1);
        tracep->declBit(c+200,"riscv_soc core fetch io_cpu_data_valid", false,-1);
        tracep->declQuad(c+201,"riscv_soc core fetch io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+203,"riscv_soc core fetch io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+228,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+229,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core fetch io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+153,"riscv_soc core fetch io_out_flush", false,-1);
        tracep->declBit(c+952,"riscv_soc core fetch ibuf_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core fetch ibuf_reset", false,-1);
        tracep->declBit(c+225,"riscv_soc core fetch ibuf_io_flush", false,-1);
        tracep->declBit(c+158,"riscv_soc core fetch ibuf_io_cache_buf_ready", false,-1);
        tracep->declBit(c+438,"riscv_soc core fetch ibuf_io_cache_buf_valid", false,-1);
        tracep->declQuad(c+203,"riscv_soc core fetch ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+439,"riscv_soc core fetch ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+440,"riscv_soc core fetch ibuf_io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+226,"riscv_soc core fetch ibuf_io_put_pc_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core fetch ibuf_io_put_pc_valid", false,-1);
        tracep->declBus(c+228,"riscv_soc core fetch ibuf_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+229,"riscv_soc core fetch ibuf_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core fetch ibuf_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+952,"riscv_soc core fetch br_predictor_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core fetch br_predictor_reset", false,-1);
        tracep->declBit(c+213,"riscv_soc core fetch br_predictor_io_br_info_valid", false,-1);
        tracep->declBit(c+214,"riscv_soc core fetch br_predictor_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+215,"riscv_soc core fetch br_predictor_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core fetch br_predictor_io_br_info_taken", false,-1);
        tracep->declQuad(c+218,"riscv_soc core fetch br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+156,"riscv_soc core fetch br_predictor_io_pc", false,-1, 63,0);
        tracep->declQuad(c+441,"riscv_soc core fetch br_predictor_io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+443,"riscv_soc core fetch br_predictor_io_pre_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declBit(c+444,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+445,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core fetch reg_bus_valid", false,-1);
        tracep->declBus(c+447,"riscv_soc core fetch pre_info_head", false,-1, 1,0);
        tracep->declBus(c+448,"riscv_soc core fetch pre_info_tail", false,-1, 1,0);
        tracep->declQuad(c+449,"riscv_soc core fetch pre_info_fifo_0", false,-1, 63,0);
        tracep->declQuad(c+451,"riscv_soc core fetch pre_info_fifo_1", false,-1, 63,0);
        tracep->declQuad(c+453,"riscv_soc core fetch pre_info_fifo_2", false,-1, 63,0);
        tracep->declQuad(c+455,"riscv_soc core fetch pre_info_fifo_3", false,-1, 63,0);
        tracep->declBit(c+457,"riscv_soc core fetch pre_enq", false,-1);
        tracep->declBus(c+458,"riscv_soc core fetch is_pre_head", false,-1, 1,0);
        tracep->declBus(c+459,"riscv_soc core fetch is_pre_tail", false,-1, 1,0);
        tracep->declBit(c+460,"riscv_soc core fetch is_pre_fifo_0", false,-1);
        tracep->declBit(c+461,"riscv_soc core fetch is_pre_fifo_1", false,-1);
        tracep->declBit(c+462,"riscv_soc core fetch is_pre_fifo_2", false,-1);
        tracep->declBit(c+463,"riscv_soc core fetch is_pre_fifo_3", false,-1);
        tracep->declBit(c+952,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+225,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+158,"riscv_soc core fetch ibuf io_cache_buf_ready", false,-1);
        tracep->declBit(c+438,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+203,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+439,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+440,"riscv_soc core fetch ibuf io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+226,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+228,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+229,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core fetch ibuf io_put_pc_bits_is_pre", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+464+i*2,"riscv_soc core fetch ibuf ibuf_pc", true,(i+0), 63,0);}}
        tracep->declBit(c+1040,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_en", false,-1);
        tracep->declBus(c+472,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+229,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+203,"riscv_soc core fetch ibuf ibuf_pc_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+473,"riscv_soc core fetch ibuf ibuf_pc_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+1040,"riscv_soc core fetch ibuf ibuf_pc_MPORT_mask", false,-1);
        tracep->declBit(c+474,"riscv_soc core fetch ibuf ibuf_pc_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+475+i*1,"riscv_soc core fetch ibuf ibuf_inst", true,(i+0), 31,0);}}
        tracep->declBit(c+1040,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_en", false,-1);
        tracep->declBus(c+472,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_addr", false,-1, 1,0);
        tracep->declBus(c+228,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+439,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+473,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+1040,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_mask", false,-1);
        tracep->declBit(c+474,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+479+i*1,"riscv_soc core fetch ibuf ibuf_is_pre", true,(i+0));}}
        tracep->declBit(c+1040,"riscv_soc core fetch ibuf ibuf_is_pre_io_put_pc_bits_is_pre_MPORT_en", false,-1);
        tracep->declBus(c+472,"riscv_soc core fetch ibuf ibuf_is_pre_io_put_pc_bits_is_pre_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+231,"riscv_soc core fetch ibuf ibuf_is_pre_io_put_pc_bits_is_pre_MPORT_data", false,-1);
        tracep->declBit(c+440,"riscv_soc core fetch ibuf ibuf_is_pre_MPORT_2_data", false,-1);
        tracep->declBus(c+473,"riscv_soc core fetch ibuf ibuf_is_pre_MPORT_2_addr", false,-1, 1,0);
        tracep->declBit(c+1040,"riscv_soc core fetch ibuf ibuf_is_pre_MPORT_2_mask", false,-1);
        tracep->declBit(c+474,"riscv_soc core fetch ibuf ibuf_is_pre_MPORT_2_en", false,-1);
        tracep->declBit(c+483,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+484,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+485,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+486,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+473,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+472,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBus(c+487,"riscv_soc core fetch ibuf reg_ibuf_size", false,-1, 2,0);
        tracep->declBit(c+488,"riscv_soc core fetch ibuf enq_size", false,-1);
        tracep->declBit(c+489,"riscv_soc core fetch ibuf can_deq", false,-1);
        tracep->declBus(c+490,"riscv_soc core fetch ibuf result_size", false,-1, 2,0);
        tracep->declBit(c+952,"riscv_soc core fetch br_predictor clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core fetch br_predictor reset", false,-1);
        tracep->declBit(c+213,"riscv_soc core fetch br_predictor io_br_info_valid", false,-1);
        tracep->declBit(c+214,"riscv_soc core fetch br_predictor io_br_info_mispredict", false,-1);
        tracep->declQuad(c+215,"riscv_soc core fetch br_predictor io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core fetch br_predictor io_br_info_taken", false,-1);
        tracep->declQuad(c+218,"riscv_soc core fetch br_predictor io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+156,"riscv_soc core fetch br_predictor io_pc", false,-1, 63,0);
        tracep->declQuad(c+441,"riscv_soc core fetch br_predictor io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+443,"riscv_soc core fetch br_predictor io_pre_valid", false,-1);
        tracep->declBit(c+1040,"riscv_soc core fetch br_predictor BTB_btb_data_en", false,-1);
        tracep->declBus(c+491,"riscv_soc core fetch br_predictor BTB_btb_data_addr", false,-1, 5,0);
        tracep->declArray(c+492,"riscv_soc core fetch br_predictor BTB_btb_data_data", false,-1, 127,0);
        tracep->declArray(c+496,"riscv_soc core fetch br_predictor BTB_MPORT_data", false,-1, 127,0);
        tracep->declBus(c+500,"riscv_soc core fetch br_predictor BTB_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+1040,"riscv_soc core fetch br_predictor BTB_MPORT_mask", false,-1);
        tracep->declBit(c+501,"riscv_soc core fetch br_predictor BTB_MPORT_en", false,-1);
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+502+i*2,"riscv_soc core fetch br_predictor RAS", true,(i+0), 63,0);}}
        tracep->declBit(c+514,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_en", false,-1);
        tracep->declBus(c+515,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_addr", false,-1, 2,0);
        tracep->declQuad(c+516,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+156,"riscv_soc core fetch br_predictor RAS_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+515,"riscv_soc core fetch br_predictor RAS_MPORT_1_addr", false,-1, 2,0);
        tracep->declBit(c+1040,"riscv_soc core fetch br_predictor RAS_MPORT_1_mask", false,-1);
        tracep->declBit(c+518,"riscv_soc core fetch br_predictor RAS_MPORT_1_en", false,-1);
        tracep->declBus(c+519,"riscv_soc core fetch br_predictor PHT_0", false,-1, 1,0);
        tracep->declBus(c+520,"riscv_soc core fetch br_predictor PHT_1", false,-1, 1,0);
        tracep->declBus(c+521,"riscv_soc core fetch br_predictor PHT_2", false,-1, 1,0);
        tracep->declBus(c+522,"riscv_soc core fetch br_predictor PHT_3", false,-1, 1,0);
        tracep->declBus(c+523,"riscv_soc core fetch br_predictor PHT_4", false,-1, 1,0);
        tracep->declBus(c+524,"riscv_soc core fetch br_predictor PHT_5", false,-1, 1,0);
        tracep->declBus(c+525,"riscv_soc core fetch br_predictor PHT_6", false,-1, 1,0);
        tracep->declBus(c+526,"riscv_soc core fetch br_predictor PHT_7", false,-1, 1,0);
        tracep->declBus(c+527,"riscv_soc core fetch br_predictor PHT_8", false,-1, 1,0);
        tracep->declBus(c+528,"riscv_soc core fetch br_predictor PHT_9", false,-1, 1,0);
        tracep->declBus(c+529,"riscv_soc core fetch br_predictor PHT_10", false,-1, 1,0);
        tracep->declBus(c+530,"riscv_soc core fetch br_predictor PHT_11", false,-1, 1,0);
        tracep->declBus(c+531,"riscv_soc core fetch br_predictor PHT_12", false,-1, 1,0);
        tracep->declBus(c+532,"riscv_soc core fetch br_predictor PHT_13", false,-1, 1,0);
        tracep->declBus(c+533,"riscv_soc core fetch br_predictor PHT_14", false,-1, 1,0);
        tracep->declBus(c+534,"riscv_soc core fetch br_predictor PHT_15", false,-1, 1,0);
        tracep->declBus(c+535,"riscv_soc core fetch br_predictor PHT_16", false,-1, 1,0);
        tracep->declBus(c+536,"riscv_soc core fetch br_predictor PHT_17", false,-1, 1,0);
        tracep->declBus(c+537,"riscv_soc core fetch br_predictor PHT_18", false,-1, 1,0);
        tracep->declBus(c+538,"riscv_soc core fetch br_predictor PHT_19", false,-1, 1,0);
        tracep->declBus(c+539,"riscv_soc core fetch br_predictor PHT_20", false,-1, 1,0);
        tracep->declBus(c+540,"riscv_soc core fetch br_predictor PHT_21", false,-1, 1,0);
        tracep->declBus(c+541,"riscv_soc core fetch br_predictor PHT_22", false,-1, 1,0);
        tracep->declBus(c+542,"riscv_soc core fetch br_predictor PHT_23", false,-1, 1,0);
        tracep->declBus(c+543,"riscv_soc core fetch br_predictor PHT_24", false,-1, 1,0);
        tracep->declBus(c+544,"riscv_soc core fetch br_predictor PHT_25", false,-1, 1,0);
        tracep->declBus(c+545,"riscv_soc core fetch br_predictor PHT_26", false,-1, 1,0);
        tracep->declBus(c+546,"riscv_soc core fetch br_predictor PHT_27", false,-1, 1,0);
        tracep->declBus(c+547,"riscv_soc core fetch br_predictor PHT_28", false,-1, 1,0);
        tracep->declBus(c+548,"riscv_soc core fetch br_predictor PHT_29", false,-1, 1,0);
        tracep->declBus(c+549,"riscv_soc core fetch br_predictor PHT_30", false,-1, 1,0);
        tracep->declBus(c+550,"riscv_soc core fetch br_predictor PHT_31", false,-1, 1,0);
        tracep->declBus(c+551,"riscv_soc core fetch br_predictor PHT_32", false,-1, 1,0);
        tracep->declBus(c+552,"riscv_soc core fetch br_predictor PHT_33", false,-1, 1,0);
        tracep->declBus(c+553,"riscv_soc core fetch br_predictor PHT_34", false,-1, 1,0);
        tracep->declBus(c+554,"riscv_soc core fetch br_predictor PHT_35", false,-1, 1,0);
        tracep->declBus(c+555,"riscv_soc core fetch br_predictor PHT_36", false,-1, 1,0);
        tracep->declBus(c+556,"riscv_soc core fetch br_predictor PHT_37", false,-1, 1,0);
        tracep->declBus(c+557,"riscv_soc core fetch br_predictor PHT_38", false,-1, 1,0);
        tracep->declBus(c+558,"riscv_soc core fetch br_predictor PHT_39", false,-1, 1,0);
        tracep->declBus(c+559,"riscv_soc core fetch br_predictor PHT_40", false,-1, 1,0);
        tracep->declBus(c+560,"riscv_soc core fetch br_predictor PHT_41", false,-1, 1,0);
        tracep->declBus(c+561,"riscv_soc core fetch br_predictor PHT_42", false,-1, 1,0);
        tracep->declBus(c+562,"riscv_soc core fetch br_predictor PHT_43", false,-1, 1,0);
        tracep->declBus(c+563,"riscv_soc core fetch br_predictor PHT_44", false,-1, 1,0);
        tracep->declBus(c+564,"riscv_soc core fetch br_predictor PHT_45", false,-1, 1,0);
        tracep->declBus(c+565,"riscv_soc core fetch br_predictor PHT_46", false,-1, 1,0);
        tracep->declBus(c+566,"riscv_soc core fetch br_predictor PHT_47", false,-1, 1,0);
        tracep->declBus(c+567,"riscv_soc core fetch br_predictor PHT_48", false,-1, 1,0);
        tracep->declBus(c+568,"riscv_soc core fetch br_predictor PHT_49", false,-1, 1,0);
        tracep->declBus(c+569,"riscv_soc core fetch br_predictor PHT_50", false,-1, 1,0);
        tracep->declBus(c+570,"riscv_soc core fetch br_predictor PHT_51", false,-1, 1,0);
        tracep->declBus(c+571,"riscv_soc core fetch br_predictor PHT_52", false,-1, 1,0);
        tracep->declBus(c+572,"riscv_soc core fetch br_predictor PHT_53", false,-1, 1,0);
        tracep->declBus(c+573,"riscv_soc core fetch br_predictor PHT_54", false,-1, 1,0);
        tracep->declBus(c+574,"riscv_soc core fetch br_predictor PHT_55", false,-1, 1,0);
        tracep->declBus(c+575,"riscv_soc core fetch br_predictor PHT_56", false,-1, 1,0);
        tracep->declBus(c+576,"riscv_soc core fetch br_predictor PHT_57", false,-1, 1,0);
        tracep->declBus(c+577,"riscv_soc core fetch br_predictor PHT_58", false,-1, 1,0);
        tracep->declBus(c+578,"riscv_soc core fetch br_predictor PHT_59", false,-1, 1,0);
        tracep->declBus(c+579,"riscv_soc core fetch br_predictor PHT_60", false,-1, 1,0);
        tracep->declBus(c+580,"riscv_soc core fetch br_predictor PHT_61", false,-1, 1,0);
        tracep->declBus(c+581,"riscv_soc core fetch br_predictor PHT_62", false,-1, 1,0);
        tracep->declBus(c+582,"riscv_soc core fetch br_predictor PHT_63", false,-1, 1,0);
        tracep->declBus(c+515,"riscv_soc core fetch br_predictor reg_head", false,-1, 2,0);
        tracep->declBus(c+500,"riscv_soc core fetch br_predictor update_index", false,-1, 5,0);
        tracep->declArray(c+583,"riscv_soc core fetch br_predictor update_btb_data", false,-1, 122,0);
        tracep->declBus(c+491,"riscv_soc core fetch br_predictor index", false,-1, 5,0);
        tracep->declQuad(c+587,"riscv_soc core fetch br_predictor tag", false,-1, 55,0);
        tracep->declBit(c+589,"riscv_soc core fetch br_predictor pht_taken", false,-1);
        tracep->declBit(c+590,"riscv_soc core fetch br_predictor btb_valid", false,-1);
        tracep->declQuad(c+591,"riscv_soc core fetch br_predictor btb_tag", false,-1, 55,0);
        tracep->declQuad(c+593,"riscv_soc core fetch br_predictor btb_target_next_pc", false,-1, 63,0);
        tracep->declBus(c+595,"riscv_soc core fetch br_predictor btb_br_type", false,-1, 1,0);
        tracep->declBit(c+443,"riscv_soc core fetch br_predictor pre_valid", false,-1);
        tracep->declBit(c+952,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+226,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+232,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+233,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+234,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+235,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+242,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core execute io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+245,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+246,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+247,"riscv_soc core execute io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+248,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+252,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+253,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+255,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declBit(c+261,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+262,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+267,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+270,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+271,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+272,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+273,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+275,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+277,"riscv_soc core execute io_commit", false,-1);
        tracep->declBus(c+278,"riscv_soc core execute io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+279,"riscv_soc core execute io_difftest_peripheral", false,-1);
        tracep->declQuad(c+223,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+164,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+213,"riscv_soc core execute io_br_info_valid", false,-1);
        tracep->declBit(c+214,"riscv_soc core execute io_br_info_mispredict", false,-1);
        tracep->declQuad(c+215,"riscv_soc core execute io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core execute io_br_info_taken", false,-1);
        tracep->declQuad(c+218,"riscv_soc core execute io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+220,"riscv_soc core execute io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+221,"riscv_soc core execute io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+205,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+596,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBit(c+247,"riscv_soc core execute alu_exu_io_is_pre", false,-1);
        tracep->declBit(c+597,"riscv_soc core execute alu_exu_io_br_info_valid", false,-1);
        tracep->declBit(c+598,"riscv_soc core execute alu_exu_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+242,"riscv_soc core execute alu_exu_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+599,"riscv_soc core execute alu_exu_io_br_info_taken", false,-1);
        tracep->declQuad(c+600,"riscv_soc core execute alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+220,"riscv_soc core execute alu_exu_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+221,"riscv_soc core execute alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core execute alu_exu_io_opType", false,-1, 2,0);
        tracep->declBus(c+234,"riscv_soc core execute alu_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+602,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+242,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+606,"riscv_soc core execute alu_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+608,"riscv_soc core execute alu_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+600,"riscv_soc core execute alu_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core execute mem_exu_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute mem_exu_reset", false,-1);
        tracep->declBit(c+609,"riscv_soc core execute mem_exu_io_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core execute mem_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+610,"riscv_soc core execute mem_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+612,"riscv_soc core execute mem_exu_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core execute mem_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+614,"riscv_soc core execute mem_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+616,"riscv_soc core execute mem_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+617,"riscv_soc core execute mem_exu_io_ready", false,-1);
        tracep->declBit(c+205,"riscv_soc core execute mem_exu_io_bus_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core execute mem_exu_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core execute mem_exu_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core execute mem_exu_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core execute mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core execute mem_exu_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute mem_exu_io_bus_ready", false,-1);
        tracep->declBit(c+279,"riscv_soc core execute mem_exu_io_difftest_peripheral", false,-1);
        tracep->declBit(c+952,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+618,"riscv_soc core execute mu_exu_io_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core execute mu_exu_io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+602,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+619,"riscv_soc core execute mu_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+621,"riscv_soc core execute mu_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+622,"riscv_soc core execute mu_exu_io_ready", false,-1);
        tracep->declBit(c+623,"riscv_soc core execute system_exu_io_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core execute system_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+624,"riscv_soc core execute system_exu_io_csr_data", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_soc core execute system_exu_io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+241,"riscv_soc core execute system_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+610,"riscv_soc core execute system_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute system_exu_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+253,"riscv_soc core execute system_exu_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+624,"riscv_soc core execute system_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+626,"riscv_soc core execute system_exu_io_csr_is_w", false,-1);
        tracep->declQuad(c+627,"riscv_soc core execute system_exu_io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+629,"riscv_soc core execute system_exu_io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+630,"riscv_soc core execute system_exu_io_is_except", false,-1);
        tracep->declBus(c+631,"riscv_soc core execute system_exu_io_exception", false,-1, 5,0);
        tracep->declBit(c+632,"riscv_soc core execute system_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+257,"riscv_soc core execute system_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+633,"riscv_soc core execute in_data_valid", false,-1);
        tracep->declBit(c+226,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+634,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBit(c+635,"riscv_soc core execute reg_alu_valid", false,-1);
        tracep->declBit(c+636,"riscv_soc core execute reg_mem_valid", false,-1);
        tracep->declBit(c+637,"riscv_soc core execute reg_mu_valid", false,-1);
        tracep->declBit(c+638,"riscv_soc core execute reg_system_valid", false,-1);
        tracep->declBus(c+639,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+640,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+641,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBus(c+262,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+213,"riscv_soc core execute reg_br_valid", false,-1);
        tracep->declBit(c+214,"riscv_soc core execute reg_br_mispredict", false,-1);
        tracep->declQuad(c+215,"riscv_soc core execute reg_br_pc", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core execute reg_taken", false,-1);
        tracep->declQuad(c+218,"riscv_soc core execute reg_br_next_pc", false,-1, 63,0);
        tracep->declQuad(c+267,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+266,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBit(c+643,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+644,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+272,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+645,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+646,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+273,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+275,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declBit(c+647,"riscv_soc core execute time_irq", false,-1);
        tracep->declBit(c+648,"riscv_soc core execute soft_irq", false,-1);
        tracep->declBit(c+649,"riscv_soc core execute irq", false,-1);
        tracep->declQuad(c+223,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+650,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+651,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+652,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBus(c+278,"riscv_soc core execute reg_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+596,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBit(c+247,"riscv_soc core execute alu_exu io_is_pre", false,-1);
        tracep->declBit(c+597,"riscv_soc core execute alu_exu io_br_info_valid", false,-1);
        tracep->declBit(c+598,"riscv_soc core execute alu_exu io_br_info_mispredict", false,-1);
        tracep->declQuad(c+242,"riscv_soc core execute alu_exu io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+599,"riscv_soc core execute alu_exu io_br_info_taken", false,-1);
        tracep->declQuad(c+600,"riscv_soc core execute alu_exu io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+220,"riscv_soc core execute alu_exu io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+221,"riscv_soc core execute alu_exu io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+234,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+602,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+242,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+606,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+608,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+600,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declBit(c+653,"riscv_soc core execute alu_exu is_32", false,-1);
        tracep->declQuad(c+654,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+656,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+658,"riscv_soc core execute alu_exu op_imm", false,-1, 63,0);
        tracep->declBit(c+660,"riscv_soc core execute alu_exu rs2_is_imm", false,-1);
        tracep->declQuad(c+661,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+663,"riscv_soc core execute alu_exu rs1_is_pc", false,-1);
        tracep->declBit(c+664,"riscv_soc core execute alu_exu is_sra", false,-1);
        tracep->declQuad(c+665,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+667,"riscv_soc core execute alu_exu temp_rs2_data", false,-1, 63,0);
        tracep->declArray(c+669,"riscv_soc core execute alu_exu add_sub_result", false,-1, 64,0);
        tracep->declBit(c+672,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+673,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+674,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+675,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declQuad(c+679,"riscv_soc core execute alu_exu srl_temp", false,-1, 63,0);
        tracep->declQuad(c+681,"riscv_soc core execute alu_exu sra_temp", false,-1, 63,0);
        tracep->declQuad(c+683,"riscv_soc core execute alu_exu sr_temp", false,-1, 63,0);
        tracep->declBus(c+685,"riscv_soc core execute alu_exu func", false,-1, 2,0);
        tracep->declQuad(c+686,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declBit(c+220,"riscv_soc core execute alu_exu is_pre", false,-1);
        tracep->declBit(c+688,"riscv_soc core execute alu_exu is_br", false,-1);
        tracep->declBit(c+689,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declQuad(c+690,"riscv_soc core execute alu_exu temp_1", false,-1, 63,0);
        tracep->declArray(c+692,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declQuad(c+695,"riscv_soc core execute alu_exu op_pc_4", false,-1, 63,0);
        tracep->declArray(c+697,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declQuad(c+700,"riscv_soc core execute alu_exu dst_data", false,-1, 63,0);
        tracep->declQuad(c+600,"riscv_soc core execute alu_exu next_pc", false,-1, 63,0);
        tracep->declBit(c+599,"riscv_soc core execute alu_exu valid_next_pc", false,-1);
        tracep->declBit(c+598,"riscv_soc core execute alu_exu flush", false,-1);
        tracep->declBit(c+952,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+609,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+610,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+612,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+614,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+616,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+617,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+205,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+177,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+178,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declBit(c+279,"riscv_soc core execute mem_exu io_difftest_peripheral", false,-1);
        tracep->declQuad(c+702,"riscv_soc core execute mem_exu imm", false,-1, 63,0);
        tracep->declBit(c+617,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+704,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+706,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+708,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+709,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+710,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+614,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+616,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBus(c+711,"riscv_soc core execute mem_exu reg_exuType", false,-1, 6,0);
        tracep->declBit(c+279,"riscv_soc core execute mem_exu reg_difftest_peripheral", false,-1);
        tracep->declQuad(c+712,"riscv_soc core execute mem_exu mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+714,"riscv_soc core execute mem_exu mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+716,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+718,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declQuad(c+719,"riscv_soc core execute mem_exu mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+721,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+722,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+726,"riscv_soc core execute mem_exu chose_chancel", false,-1);
        tracep->declBit(c+952,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+618,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+602,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+619,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+621,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+622,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+727,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declQuad(c+602,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+234,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+728,"riscv_soc core execute mu_exu div_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+730,"riscv_soc core execute mu_exu div_io_dest_is_w", false,-1);
        tracep->declBit(c+731,"riscv_soc core execute mu_exu div_io_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+732,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declQuad(c+602,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+234,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+733,"riscv_soc core execute mu_exu mul_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+735,"riscv_soc core execute mu_exu mul_io_dest_is_w", false,-1);
        tracep->declBit(c+736,"riscv_soc core execute mu_exu mul_io_ready", false,-1);
        tracep->declBit(c+952,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+727,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+602,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+234,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+728,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+730,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+731,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declBit(c+653,"riscv_soc core execute mu_exu div is_32", false,-1);
        tracep->declBit(c+737,"riscv_soc core execute mu_exu div is_signed", false,-1);
        tracep->declArray(c+738,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+741,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+744,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+747,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+750,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+753,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+756,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+759,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+762,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+763,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+764,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declArray(c+765,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+770,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+771,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+772,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+773,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declBit(c+730,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+731,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declBit(c+774,"riscv_soc core execute mu_exu div reg_is_32", false,-1);
        tracep->declBit(c+775,"riscv_soc core execute mu_exu div reg_is_rem", false,-1);
        tracep->declQuad(c+776,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+778,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+732,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+602,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+234,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+733,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+735,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+736,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+780,"riscv_soc core execute mu_exu mul is_32", false,-1);
        tracep->declBit(c+781,"riscv_soc core execute mu_exu mul is_rs1_signed", false,-1);
        tracep->declBit(c+653,"riscv_soc core execute mu_exu mul is_rs2_signed", false,-1);
        tracep->declArray(c+782,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+787,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+790,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+736,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+793,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+794,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+797,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+802,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+807,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+735,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declArray(c+808,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBus(c+813,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declBit(c+814,"riscv_soc core execute mu_exu mul reg_not_h", false,-1);
        tracep->declBit(c+815,"riscv_soc core execute mu_exu mul reg_is_32", false,-1);
        tracep->declBit(c+623,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+234,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+624,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+241,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+610,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+253,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+624,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+626,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+627,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+629,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+630,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+631,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+632,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+257,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+658,"riscv_soc core execute system_exu imm", false,-1, 63,0);
        tracep->declBit(c+816,"riscv_soc core execute system_exu is_imm", false,-1);
        tracep->declQuad(c+817,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+819,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+821,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declQuad(c+823,"riscv_soc core execute system_exu temp_csr_result_data", false,-1, 63,0);
        tracep->declBit(c+825,"riscv_soc core execute system_exu is_mret", false,-1);
        tracep->declBit(c+826,"riscv_soc core execute system_exu is_sret", false,-1);
        tracep->declBit(c+827,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+828,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+829,"riscv_soc core execute system_exu is_except", false,-1);
        tracep->declBus(c+830,"riscv_soc core execute system_exu exception", false,-1, 3,0);
        tracep->declBit(c+831,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declQuad(c+832,"riscv_soc core execute system_exu result_status", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+226,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+228,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+229,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core decode io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+280,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+281,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+283,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+284,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+286,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+287,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+226,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+232,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+233,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+234,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+235,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+242,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core decode io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+245,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+246,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+247,"riscv_soc core decode io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+248,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+232,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+233,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+234,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+235,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+236,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+238,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+239,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+241,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+242,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+245,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+246,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+248,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+247,"riscv_soc core decode reg_is_pre", false,-1);
        tracep->declBus(c+834,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBit(c+835,"riscv_soc core decode dest_is_reg", false,-1);
        tracep->declBit(c+836,"riscv_soc core decode rs1_is_reg", false,-1);
        tracep->declBit(c+837,"riscv_soc core decode rs2_is_reg", false,-1);
        tracep->declBus(c+283,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+280,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+286,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBus(c+838,"riscv_soc core decode dest_addr", false,-1, 4,0);
        tracep->declBit(c+952,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+280,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+281,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+283,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+284,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+261,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+262,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+286,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+287,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+267,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+269,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+270,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+271,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+272,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+273,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+275,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+253,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+255,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+277,"riscv_soc core commit io_commit", false,-1);
        tracep->declBus(c+278,"riscv_soc core commit io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+279,"riscv_soc core commit io_difftest_peripheral", false,-1);
        tracep->declBit(c+81,"riscv_soc core commit difftest_irq_0", false,-1);
        tracep->declBit(c+82,"riscv_soc core commit difftest_peripheral_0", false,-1);
        tracep->declBit(c+83,"riscv_soc core commit difftest_commit_0", false,-1);
        tracep->declQuad(c+84,"riscv_soc core commit difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+86,"riscv_soc core commit difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+149,"riscv_soc core commit inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core commit csr_reg_clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core commit csr_reg_reset", false,-1);
        tracep->declBus(c+266,"riscv_soc core commit csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+267,"riscv_soc core commit csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core commit csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+275,"riscv_soc core commit csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+273,"riscv_soc core commit csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+270,"riscv_soc core commit csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+271,"riscv_soc core commit csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+839,"riscv_soc core commit csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+269,"riscv_soc core commit csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+277,"riscv_soc core commit csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+286,"riscv_soc core commit csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+287,"riscv_soc core commit csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+253,"riscv_soc core commit csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+255,"riscv_soc core commit csr_reg_io_r_csr_mie", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+840+i*2,"riscv_soc core commit regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+1040,"riscv_soc core commit regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+280,"riscv_soc core commit regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+904,"riscv_soc core commit regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+283,"riscv_soc core commit regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+906,"riscv_soc core commit regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+1041,"riscv_soc core commit regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+908,"riscv_soc core commit regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_2_en", false,-1);
        tracep->declBus(c+1042,"riscv_soc core commit regfile_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+87,"riscv_soc core commit regfile_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_3_en", false,-1);
        tracep->declBus(c+1043,"riscv_soc core commit regfile_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+89,"riscv_soc core commit regfile_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+1044,"riscv_soc core commit regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+91,"riscv_soc core commit regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_5_en", false,-1);
        tracep->declBus(c+1045,"riscv_soc core commit regfile_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+93,"riscv_soc core commit regfile_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_6_en", false,-1);
        tracep->declBus(c+1046,"riscv_soc core commit regfile_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+95,"riscv_soc core commit regfile_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_7_en", false,-1);
        tracep->declBus(c+1047,"riscv_soc core commit regfile_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+97,"riscv_soc core commit regfile_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_8_en", false,-1);
        tracep->declBus(c+1048,"riscv_soc core commit regfile_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"riscv_soc core commit regfile_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_9_en", false,-1);
        tracep->declBus(c+1049,"riscv_soc core commit regfile_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"riscv_soc core commit regfile_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_10_en", false,-1);
        tracep->declBus(c+1050,"riscv_soc core commit regfile_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+103,"riscv_soc core commit regfile_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_11_en", false,-1);
        tracep->declBus(c+1051,"riscv_soc core commit regfile_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+105,"riscv_soc core commit regfile_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_12_en", false,-1);
        tracep->declBus(c+1052,"riscv_soc core commit regfile_MPORT_12_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"riscv_soc core commit regfile_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_13_en", false,-1);
        tracep->declBus(c+1053,"riscv_soc core commit regfile_MPORT_13_addr", false,-1, 4,0);
        tracep->declQuad(c+109,"riscv_soc core commit regfile_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_14_en", false,-1);
        tracep->declBus(c+1054,"riscv_soc core commit regfile_MPORT_14_addr", false,-1, 4,0);
        tracep->declQuad(c+111,"riscv_soc core commit regfile_MPORT_14_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_15_en", false,-1);
        tracep->declBus(c+1055,"riscv_soc core commit regfile_MPORT_15_addr", false,-1, 4,0);
        tracep->declQuad(c+113,"riscv_soc core commit regfile_MPORT_15_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_16_en", false,-1);
        tracep->declBus(c+1056,"riscv_soc core commit regfile_MPORT_16_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"riscv_soc core commit regfile_MPORT_16_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_17_en", false,-1);
        tracep->declBus(c+1057,"riscv_soc core commit regfile_MPORT_17_addr", false,-1, 4,0);
        tracep->declQuad(c+117,"riscv_soc core commit regfile_MPORT_17_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_18_en", false,-1);
        tracep->declBus(c+1058,"riscv_soc core commit regfile_MPORT_18_addr", false,-1, 4,0);
        tracep->declQuad(c+119,"riscv_soc core commit regfile_MPORT_18_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_19_en", false,-1);
        tracep->declBus(c+1059,"riscv_soc core commit regfile_MPORT_19_addr", false,-1, 4,0);
        tracep->declQuad(c+121,"riscv_soc core commit regfile_MPORT_19_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_20_en", false,-1);
        tracep->declBus(c+1060,"riscv_soc core commit regfile_MPORT_20_addr", false,-1, 4,0);
        tracep->declQuad(c+123,"riscv_soc core commit regfile_MPORT_20_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_21_en", false,-1);
        tracep->declBus(c+1061,"riscv_soc core commit regfile_MPORT_21_addr", false,-1, 4,0);
        tracep->declQuad(c+125,"riscv_soc core commit regfile_MPORT_21_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_22_en", false,-1);
        tracep->declBus(c+1062,"riscv_soc core commit regfile_MPORT_22_addr", false,-1, 4,0);
        tracep->declQuad(c+127,"riscv_soc core commit regfile_MPORT_22_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_23_en", false,-1);
        tracep->declBus(c+1063,"riscv_soc core commit regfile_MPORT_23_addr", false,-1, 4,0);
        tracep->declQuad(c+129,"riscv_soc core commit regfile_MPORT_23_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_24_en", false,-1);
        tracep->declBus(c+1064,"riscv_soc core commit regfile_MPORT_24_addr", false,-1, 4,0);
        tracep->declQuad(c+131,"riscv_soc core commit regfile_MPORT_24_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_25_en", false,-1);
        tracep->declBus(c+1065,"riscv_soc core commit regfile_MPORT_25_addr", false,-1, 4,0);
        tracep->declQuad(c+133,"riscv_soc core commit regfile_MPORT_25_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_26_en", false,-1);
        tracep->declBus(c+1066,"riscv_soc core commit regfile_MPORT_26_addr", false,-1, 4,0);
        tracep->declQuad(c+135,"riscv_soc core commit regfile_MPORT_26_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_27_en", false,-1);
        tracep->declBus(c+1067,"riscv_soc core commit regfile_MPORT_27_addr", false,-1, 4,0);
        tracep->declQuad(c+137,"riscv_soc core commit regfile_MPORT_27_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_28_en", false,-1);
        tracep->declBus(c+1068,"riscv_soc core commit regfile_MPORT_28_addr", false,-1, 4,0);
        tracep->declQuad(c+139,"riscv_soc core commit regfile_MPORT_28_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_29_en", false,-1);
        tracep->declBus(c+1069,"riscv_soc core commit regfile_MPORT_29_addr", false,-1, 4,0);
        tracep->declQuad(c+141,"riscv_soc core commit regfile_MPORT_29_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_30_en", false,-1);
        tracep->declBus(c+1070,"riscv_soc core commit regfile_MPORT_30_addr", false,-1, 4,0);
        tracep->declQuad(c+143,"riscv_soc core commit regfile_MPORT_30_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_31_en", false,-1);
        tracep->declBus(c+1071,"riscv_soc core commit regfile_MPORT_31_addr", false,-1, 4,0);
        tracep->declQuad(c+145,"riscv_soc core commit regfile_MPORT_31_data", false,-1, 63,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_32_en", false,-1);
        tracep->declBus(c+1072,"riscv_soc core commit regfile_MPORT_32_addr", false,-1, 4,0);
        tracep->declQuad(c+147,"riscv_soc core commit regfile_MPORT_32_data", false,-1, 63,0);
        tracep->declQuad(c+263,"riscv_soc core commit regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+262,"riscv_soc core commit regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+1040,"riscv_soc core commit regfile_MPORT_mask", false,-1);
        tracep->declBit(c+261,"riscv_soc core commit regfile_MPORT_en", false,-1);
        tracep->declBit(c+83,"riscv_soc core commit difftest_commit", false,-1);
        tracep->declBus(c+86,"riscv_soc core commit difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+84,"riscv_soc core commit difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core commit inst_counter", false,-1, 63,0);
        tracep->declBit(c+81,"riscv_soc core commit difftest_irq", false,-1);
        tracep->declBit(c+82,"riscv_soc core commit difftest_peripheral", false,-1);
        tracep->declBit(c+952,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+266,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+267,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+265,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+275,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+273,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+270,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+271,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+839,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+269,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+277,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+286,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+287,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+259,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+253,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+255,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+910,"riscv_soc core commit csr_reg irq", false,-1);
        tracep->declQuad(c+911,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+913,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+915,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+917,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+919,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+921,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+923,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+925,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+927,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+929,"riscv_soc core commit csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+952,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+953,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+209,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+171,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+175,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+178,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+212,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+252,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+251,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+252,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+931,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+933,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+212,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+210,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+935,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+936,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+937,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+952,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+953,"riscv_soc axi_ram reset", false,-1);
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
        tracep->declBit(c+952,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+938,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+940,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+942,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+944,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+945,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+947,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+948,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+940,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+949,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+950,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+952,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+938,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+940,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+942,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+944,"riscv_soc axi_ram mem wen", false,-1);
        tracep->declBit(c+952,"riscv_soc sram0 clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0 io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram0 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0 io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0 io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram0 sram_CLK", false,-1);
        tracep->declArray(c+27,"riscv_soc sram0 sram_Q", false,-1, 127,0);
        tracep->declBit(c+1073,"riscv_soc sram0 sram_CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram0 sram_WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram0 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram0 sram_A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram0 sram_D", false,-1, 127,0);
        tracep->declBus(c+1074,"riscv_soc sram0 sram Bits", false,-1, 31,0);
        tracep->declBus(c+1075,"riscv_soc sram0 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1076,"riscv_soc sram0 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1074,"riscv_soc sram0 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+27,"riscv_soc sram0 sram Q", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram0 sram CLK", false,-1);
        tracep->declBit(c+1073,"riscv_soc sram0 sram CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram0 sram WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram0 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram0 sram A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram0 sram D", false,-1, 127,0);
        tracep->declBit(c+1040,"riscv_soc sram0 sram cen", false,-1);
        tracep->declBit(c+331,"riscv_soc sram0 sram wen", false,-1);
        tracep->declArray(c+1077,"riscv_soc sram0 sram bwen", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram1 clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram1 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1 io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+31,"riscv_soc sram1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+35,"riscv_soc sram1 io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram1 sram_CLK", false,-1);
        tracep->declArray(c+35,"riscv_soc sram1 sram_Q", false,-1, 127,0);
        tracep->declBit(c+1073,"riscv_soc sram1 sram_CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram1 sram_WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram1 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram1 sram_A", false,-1, 5,0);
        tracep->declArray(c+31,"riscv_soc sram1 sram_D", false,-1, 127,0);
        tracep->declBus(c+1074,"riscv_soc sram1 sram Bits", false,-1, 31,0);
        tracep->declBus(c+1075,"riscv_soc sram1 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1076,"riscv_soc sram1 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1074,"riscv_soc sram1 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+35,"riscv_soc sram1 sram Q", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram1 sram CLK", false,-1);
        tracep->declBit(c+1073,"riscv_soc sram1 sram CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram1 sram WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram1 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram1 sram A", false,-1, 5,0);
        tracep->declArray(c+31,"riscv_soc sram1 sram D", false,-1, 127,0);
        tracep->declBit(c+1040,"riscv_soc sram1 sram cen", false,-1);
        tracep->declBit(c+331,"riscv_soc sram1 sram wen", false,-1);
        tracep->declArray(c+1077,"riscv_soc sram1 sram bwen", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram2 clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram2 io_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc sram2 io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+40,"riscv_soc sram2 io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram2 sram_CLK", false,-1);
        tracep->declArray(c+40,"riscv_soc sram2 sram_Q", false,-1, 127,0);
        tracep->declBit(c+1073,"riscv_soc sram2 sram_CEN", false,-1);
        tracep->declBit(c+39,"riscv_soc sram2 sram_WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram2 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram2 sram_A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram2 sram_D", false,-1, 127,0);
        tracep->declBus(c+1074,"riscv_soc sram2 sram Bits", false,-1, 31,0);
        tracep->declBus(c+1075,"riscv_soc sram2 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1076,"riscv_soc sram2 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1074,"riscv_soc sram2 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+40,"riscv_soc sram2 sram Q", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram2 sram CLK", false,-1);
        tracep->declBit(c+1073,"riscv_soc sram2 sram CEN", false,-1);
        tracep->declBit(c+39,"riscv_soc sram2 sram WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram2 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram2 sram A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram2 sram D", false,-1, 127,0);
        tracep->declBit(c+1040,"riscv_soc sram2 sram cen", false,-1);
        tracep->declBit(c+332,"riscv_soc sram2 sram wen", false,-1);
        tracep->declArray(c+1077,"riscv_soc sram2 sram bwen", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram3 clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram3 io_addr", false,-1, 5,0);
        tracep->declBit(c+39,"riscv_soc sram3 io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+31,"riscv_soc sram3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+44,"riscv_soc sram3 io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram3 sram_CLK", false,-1);
        tracep->declArray(c+44,"riscv_soc sram3 sram_Q", false,-1, 127,0);
        tracep->declBit(c+1073,"riscv_soc sram3 sram_CEN", false,-1);
        tracep->declBit(c+39,"riscv_soc sram3 sram_WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram3 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram3 sram_A", false,-1, 5,0);
        tracep->declArray(c+31,"riscv_soc sram3 sram_D", false,-1, 127,0);
        tracep->declBus(c+1074,"riscv_soc sram3 sram Bits", false,-1, 31,0);
        tracep->declBus(c+1075,"riscv_soc sram3 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1076,"riscv_soc sram3 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1074,"riscv_soc sram3 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+44,"riscv_soc sram3 sram Q", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram3 sram CLK", false,-1);
        tracep->declBit(c+1073,"riscv_soc sram3 sram CEN", false,-1);
        tracep->declBit(c+39,"riscv_soc sram3 sram WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram3 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram3 sram A", false,-1, 5,0);
        tracep->declArray(c+31,"riscv_soc sram3 sram D", false,-1, 127,0);
        tracep->declBit(c+1040,"riscv_soc sram3 sram cen", false,-1);
        tracep->declBit(c+332,"riscv_soc sram3 sram wen", false,-1);
        tracep->declArray(c+1077,"riscv_soc sram3 sram bwen", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram4 clock", false,-1);
        tracep->declBus(c+48,"riscv_soc sram4 io_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc sram4 io_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc sram4 io_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc sram4 io_wdata", false,-1, 127,0);
        tracep->declArray(c+58,"riscv_soc sram4 io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram4 sram_CLK", false,-1);
        tracep->declArray(c+58,"riscv_soc sram4 sram_Q", false,-1, 127,0);
        tracep->declBit(c+1073,"riscv_soc sram4 sram_CEN", false,-1);
        tracep->declBit(c+49,"riscv_soc sram4 sram_WEN", false,-1);
        tracep->declArray(c+50,"riscv_soc sram4 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc sram4 sram_A", false,-1, 5,0);
        tracep->declArray(c+54,"riscv_soc sram4 sram_D", false,-1, 127,0);
        tracep->declBus(c+1074,"riscv_soc sram4 sram Bits", false,-1, 31,0);
        tracep->declBus(c+1075,"riscv_soc sram4 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1076,"riscv_soc sram4 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1074,"riscv_soc sram4 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+58,"riscv_soc sram4 sram Q", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram4 sram CLK", false,-1);
        tracep->declBit(c+1073,"riscv_soc sram4 sram CEN", false,-1);
        tracep->declBit(c+49,"riscv_soc sram4 sram WEN", false,-1);
        tracep->declArray(c+50,"riscv_soc sram4 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc sram4 sram A", false,-1, 5,0);
        tracep->declArray(c+54,"riscv_soc sram4 sram D", false,-1, 127,0);
        tracep->declBit(c+1040,"riscv_soc sram4 sram cen", false,-1);
        tracep->declBit(c+391,"riscv_soc sram4 sram wen", false,-1);
        tracep->declArray(c+383,"riscv_soc sram4 sram bwen", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram5 clock", false,-1);
        tracep->declBus(c+62,"riscv_soc sram5 io_addr", false,-1, 5,0);
        tracep->declBit(c+49,"riscv_soc sram5 io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram5 io_wmask", false,-1, 127,0);
        tracep->declArray(c+63,"riscv_soc sram5 io_wdata", false,-1, 127,0);
        tracep->declArray(c+67,"riscv_soc sram5 io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram5 sram_CLK", false,-1);
        tracep->declArray(c+67,"riscv_soc sram5 sram_Q", false,-1, 127,0);
        tracep->declBit(c+1073,"riscv_soc sram5 sram_CEN", false,-1);
        tracep->declBit(c+49,"riscv_soc sram5 sram_WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram5 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+62,"riscv_soc sram5 sram_A", false,-1, 5,0);
        tracep->declArray(c+63,"riscv_soc sram5 sram_D", false,-1, 127,0);
        tracep->declBus(c+1074,"riscv_soc sram5 sram Bits", false,-1, 31,0);
        tracep->declBus(c+1075,"riscv_soc sram5 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1076,"riscv_soc sram5 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1074,"riscv_soc sram5 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+67,"riscv_soc sram5 sram Q", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram5 sram CLK", false,-1);
        tracep->declBit(c+1073,"riscv_soc sram5 sram CEN", false,-1);
        tracep->declBit(c+49,"riscv_soc sram5 sram WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram5 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+62,"riscv_soc sram5 sram A", false,-1, 5,0);
        tracep->declArray(c+63,"riscv_soc sram5 sram D", false,-1, 127,0);
        tracep->declBit(c+1040,"riscv_soc sram5 sram cen", false,-1);
        tracep->declBit(c+391,"riscv_soc sram5 sram wen", false,-1);
        tracep->declArray(c+1077,"riscv_soc sram5 sram bwen", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram6 clock", false,-1);
        tracep->declBus(c+48,"riscv_soc sram6 io_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc sram6 io_wen", false,-1);
        tracep->declArray(c+50,"riscv_soc sram6 io_wmask", false,-1, 127,0);
        tracep->declArray(c+54,"riscv_soc sram6 io_wdata", false,-1, 127,0);
        tracep->declArray(c+72,"riscv_soc sram6 io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram6 sram_CLK", false,-1);
        tracep->declArray(c+72,"riscv_soc sram6 sram_Q", false,-1, 127,0);
        tracep->declBit(c+1073,"riscv_soc sram6 sram_CEN", false,-1);
        tracep->declBit(c+71,"riscv_soc sram6 sram_WEN", false,-1);
        tracep->declArray(c+50,"riscv_soc sram6 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc sram6 sram_A", false,-1, 5,0);
        tracep->declArray(c+54,"riscv_soc sram6 sram_D", false,-1, 127,0);
        tracep->declBus(c+1074,"riscv_soc sram6 sram Bits", false,-1, 31,0);
        tracep->declBus(c+1075,"riscv_soc sram6 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1076,"riscv_soc sram6 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1074,"riscv_soc sram6 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+72,"riscv_soc sram6 sram Q", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram6 sram CLK", false,-1);
        tracep->declBit(c+1073,"riscv_soc sram6 sram CEN", false,-1);
        tracep->declBit(c+71,"riscv_soc sram6 sram WEN", false,-1);
        tracep->declArray(c+50,"riscv_soc sram6 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+48,"riscv_soc sram6 sram A", false,-1, 5,0);
        tracep->declArray(c+54,"riscv_soc sram6 sram D", false,-1, 127,0);
        tracep->declBit(c+1040,"riscv_soc sram6 sram cen", false,-1);
        tracep->declBit(c+400,"riscv_soc sram6 sram wen", false,-1);
        tracep->declArray(c+383,"riscv_soc sram6 sram bwen", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram7 clock", false,-1);
        tracep->declBus(c+76,"riscv_soc sram7 io_addr", false,-1, 5,0);
        tracep->declBit(c+71,"riscv_soc sram7 io_wen", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram7 io_wmask", false,-1, 127,0);
        tracep->declArray(c+63,"riscv_soc sram7 io_wdata", false,-1, 127,0);
        tracep->declArray(c+77,"riscv_soc sram7 io_rdata", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram7 sram_CLK", false,-1);
        tracep->declArray(c+77,"riscv_soc sram7 sram_Q", false,-1, 127,0);
        tracep->declBit(c+1073,"riscv_soc sram7 sram_CEN", false,-1);
        tracep->declBit(c+71,"riscv_soc sram7 sram_WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram7 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+76,"riscv_soc sram7 sram_A", false,-1, 5,0);
        tracep->declArray(c+63,"riscv_soc sram7 sram_D", false,-1, 127,0);
        tracep->declBus(c+1074,"riscv_soc sram7 sram Bits", false,-1, 31,0);
        tracep->declBus(c+1075,"riscv_soc sram7 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1076,"riscv_soc sram7 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1074,"riscv_soc sram7 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+77,"riscv_soc sram7 sram Q", false,-1, 127,0);
        tracep->declBit(c+952,"riscv_soc sram7 sram CLK", false,-1);
        tracep->declBit(c+1073,"riscv_soc sram7 sram CEN", false,-1);
        tracep->declBit(c+71,"riscv_soc sram7 sram WEN", false,-1);
        tracep->declArray(c+1036,"riscv_soc sram7 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+76,"riscv_soc sram7 sram A", false,-1, 5,0);
        tracep->declArray(c+63,"riscv_soc sram7 sram D", false,-1, 127,0);
        tracep->declBit(c+1040,"riscv_soc sram7 sram cen", false,-1);
        tracep->declBit(c+400,"riscv_soc sram7 sram wen", false,-1);
        tracep->declArray(c+1077,"riscv_soc sram7 sram bwen", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp693;
    VlWide<4>/*127:0*/ __Vtemp694;
    VlWide<4>/*127:0*/ __Vtemp695;
    VlWide<4>/*127:0*/ __Vtemp696;
    VlWide<4>/*127:0*/ __Vtemp697;
    VlWide<4>/*127:0*/ __Vtemp698;
    VlWide<4>/*127:0*/ __Vtemp699;
    VlWide<4>/*127:0*/ __Vtemp700;
    VlWide<4>/*127:0*/ __Vtemp701;
    VlWide<4>/*127:0*/ __Vtemp702;
    VlWide<4>/*127:0*/ __Vtemp703;
    VlWide<4>/*127:0*/ __Vtemp705;
    VlWide<4>/*127:0*/ __Vtemp706;
    VlWide<4>/*127:0*/ __Vtemp711;
    VlWide<4>/*127:0*/ __Vtemp712;
    VlWide<4>/*127:0*/ __Vtemp716;
    VlWide<4>/*127:0*/ __Vtemp718;
    VlWide<4>/*127:0*/ __Vtemp719;
    VlWide<4>/*127:0*/ __Vtemp720;
    VlWide<3>/*95:0*/ __Vtemp721;
    VlWide<3>/*95:0*/ __Vtemp723;
    VlWide<3>/*95:0*/ __Vtemp724;
    VlWide<3>/*95:0*/ __Vtemp725;
    VlWide<3>/*95:0*/ __Vtemp726;
    VlWide<3>/*95:0*/ __Vtemp729;
    VlWide<3>/*95:0*/ __Vtemp730;
    VlWide<3>/*95:0*/ __Vtemp731;
    VlWide<5>/*159:0*/ __Vtemp743;
    VlWide<5>/*159:0*/ __Vtemp747;
    VlWide<3>/*95:0*/ __Vtemp749;
    VlWide<5>/*159:0*/ __Vtemp751;
    VlWide<5>/*159:0*/ __Vtemp752;
    VlWide<5>/*159:0*/ __Vtemp753;
    VlWide<5>/*159:0*/ __Vtemp754;
    VlWide<5>/*159:0*/ __Vtemp755;
    VlWide<5>/*159:0*/ __Vtemp757;
    VlWide<5>/*159:0*/ __Vtemp758;
    VlWide<5>/*159:0*/ __Vtemp759;
    VlWide<5>/*159:0*/ __Vtemp760;
    VlWide<5>/*159:0*/ __Vtemp761;
    VlWide<5>/*159:0*/ __Vtemp763;
    VlWide<5>/*159:0*/ __Vtemp764;
    VlWide<5>/*159:0*/ __Vtemp765;
    VlWide<5>/*159:0*/ __Vtemp773;
    VlWide<5>/*159:0*/ __Vtemp774;
    VlWide<5>/*159:0*/ __Vtemp782;
    VlWide<4>/*127:0*/ __Vtemp783;
    VlWide<4>/*127:0*/ __Vtemp784;
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
        tracep->fullCData(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr),6);
        tracep->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        tracep->fullWData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+27,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q),128);
        VL_EXTEND_WQ(128,54, __Vtemp693, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        tracep->fullWData(oldp+31,(__Vtemp693),128);
        tracep->fullWData(oldp+35,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q),128);
        tracep->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        tracep->fullWData(oldp+40,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q),128);
        tracep->fullWData(oldp+44,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q),128);
        tracep->fullCData(oldp+48,((0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                                              : (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                         >> 4U))))),6);
        tracep->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp694[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp694[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp694[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp694[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+50,(__Vtemp694),128);
        tracep->fullWData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+58,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q),128);
        tracep->fullCData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp695, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+63,(__Vtemp695),128);
        tracep->fullWData(oldp+67,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q),128);
        tracep->fullBit(oldp+71,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+72,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q),128);
        tracep->fullCData(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+77,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q),128);
        tracep->fullBit(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        tracep->fullBit(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        tracep->fullBit(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        tracep->fullQData(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        tracep->fullIData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        tracep->fullQData(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [1U]),64);
        tracep->fullQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [2U]),64);
        tracep->fullQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [3U]),64);
        tracep->fullQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [4U]),64);
        tracep->fullQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [5U]),64);
        tracep->fullQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [6U]),64);
        tracep->fullQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [7U]),64);
        tracep->fullQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [8U]),64);
        tracep->fullQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [9U]),64);
        tracep->fullQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xaU]),64);
        tracep->fullQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xbU]),64);
        tracep->fullQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xcU]),64);
        tracep->fullQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xdU]),64);
        tracep->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xeU]),64);
        tracep->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xfU]),64);
        tracep->fullQData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x10U]),64);
        tracep->fullQData(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x11U]),64);
        tracep->fullQData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        tracep->fullQData(oldp+151,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
        tracep->fullBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
        tracep->fullBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
        tracep->fullBit(oldp+155,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        tracep->fullQData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullBit(oldp+158,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        tracep->fullBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        tracep->fullQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        tracep->fullQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
        tracep->fullBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        tracep->fullQData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        tracep->fullQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+175,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        tracep->fullCData(oldp+177,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        tracep->fullBit(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        tracep->fullBit(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+180,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+188,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+198,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        tracep->fullBit(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        tracep->fullQData(oldp+201,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
        tracep->fullQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        tracep->fullBit(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        tracep->fullQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+208,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        tracep->fullBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        tracep->fullQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        tracep->fullBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        tracep->fullQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        tracep->fullBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        tracep->fullQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_get_pre_info_pre_next_pc),64);
        tracep->fullQData(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
        tracep->fullBit(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        tracep->fullBit(oldp+227,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
        tracep->fullIData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data),32);
        tracep->fullQData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                                    [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
        tracep->fullBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre
                                  [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]));
        tracep->fullBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullCData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullBit(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        tracep->fullSData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+251,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
        tracep->fullQData(oldp+259,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        tracep->fullCData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        tracep->fullBit(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        tracep->fullSData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        tracep->fullBit(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        tracep->fullCData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        tracep->fullIData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        tracep->fullBit(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        tracep->fullCData(oldp+280,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+281,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                            >> 0xfU))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                    >> 0xfU)))
                                          ? 0ULL : 
                                         vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                         [(0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                            >> 0xfU))]))),64);
        tracep->fullCData(oldp+283,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+284,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                            >> 0x14U))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : ((0U == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                    >> 0x14U)))
                                          ? 0ULL : 
                                         vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                         [(0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                            >> 0x14U))]))),64);
        tracep->fullSData(oldp+286,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+287,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                        >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        tracep->fullQData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        tracep->fullCData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        tracep->fullBit(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        tracep->fullBit(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        tracep->fullBit(oldp+295,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullWData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        tracep->fullWData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
        VL_EXTEND_WQ(128,54, __Vtemp696, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp697, (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp698[0U] = __Vtemp696[0U];
            __Vtemp698[1U] = __Vtemp696[1U];
            __Vtemp698[2U] = __Vtemp696[2U];
            __Vtemp698[3U] = __Vtemp696[3U];
        } else {
            __Vtemp698[0U] = __Vtemp697[0U];
            __Vtemp698[1U] = __Vtemp697[1U];
            __Vtemp698[2U] = __Vtemp697[2U];
            __Vtemp698[3U] = __Vtemp697[3U];
        }
        tracep->fullWData(oldp+304,(__Vtemp698),128);
        VL_EXTEND_WQ(128,54, __Vtemp699, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp700, (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
            __Vtemp701[0U] = __Vtemp699[0U];
            __Vtemp701[1U] = __Vtemp699[1U];
            __Vtemp701[2U] = __Vtemp699[2U];
            __Vtemp701[3U] = __Vtemp699[3U];
        } else {
            __Vtemp701[0U] = __Vtemp700[0U];
            __Vtemp701[1U] = __Vtemp700[1U];
            __Vtemp701[2U] = __Vtemp700[2U];
            __Vtemp701[3U] = __Vtemp700[3U];
        }
        tracep->fullWData(oldp+308,(__Vtemp701),128);
        tracep->fullBit(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        tracep->fullBit(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
        tracep->fullBit(oldp+314,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        tracep->fullQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        tracep->fullQData(oldp+318,(((1U & (IData)(
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
        tracep->fullBit(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        tracep->fullQData(oldp+321,(((1U & (IData)(
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
        tracep->fullBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        tracep->fullCData(oldp+324,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullBit(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        tracep->fullBit(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        tracep->fullBit(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullBit(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        tracep->fullQData(oldp+333,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullBit(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        tracep->fullBit(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        tracep->fullCData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        tracep->fullBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        tracep->fullBit(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        tracep->fullBit(oldp+340,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullBit(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        tracep->fullQData(oldp+342,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+344,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+345,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        VL_EXTEND_WQ(128,54, __Vtemp702, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp703, (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U])))));
        tracep->fullQData(oldp+346,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                           ? 
                                                          __Vtemp702[1U]
                                                           : 
                                                          __Vtemp703[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                            ? 
                                                           __Vtemp702[0U]
                                                            : 
                                                           __Vtemp703[0U])))))),54);
        VL_EXTEND_WQ(128,54, __Vtemp705, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp706, (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U])))));
        tracep->fullQData(oldp+348,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                           ? 
                                                          __Vtemp705[1U]
                                                           : 
                                                          __Vtemp706[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                            ? 
                                                           __Vtemp705[0U]
                                                            : 
                                                           __Vtemp706[0U])))))),54);
        tracep->fullBit(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        tracep->fullBit(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        tracep->fullQData(oldp+352,((0xfffffffffffffff0ULL 
                                     & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        tracep->fullQData(oldp+354,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+356,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        tracep->fullQData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        tracep->fullBit(oldp+359,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        tracep->fullQData(oldp+360,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullQData(oldp+362,((~ (1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
        tracep->fullCData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        tracep->fullQData(oldp+365,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+367,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+368,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        tracep->fullCData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+381,((((QData)((IData)(
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
        tracep->fullWData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+396,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+398,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+405,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U]))))),54);
        tracep->fullQData(oldp+407,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U]))))),54);
        tracep->fullBit(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+411,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+412,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+413,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+414,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+415,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+417,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+421,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+430,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+435,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+436,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+438,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
        tracep->fullIData(oldp+439,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                                    >> 2U)))
                                      ? (IData)((((0ULL 
                                                   != 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 0x1fU))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                                   : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
                                                 >> 0x20U))
                                      : (IData)(((0ULL 
                                                  != 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 0x1fU))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                                  : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))),32);
        tracep->fullBit(oldp+440,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3)
                                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2)
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1)
                                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0))))));
        tracep->fullQData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        tracep->fullBit(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
        tracep->fullBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullCData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        tracep->fullCData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        tracep->fullQData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        tracep->fullQData(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        tracep->fullQData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        tracep->fullQData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        tracep->fullBit(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        tracep->fullCData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        tracep->fullCData(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        tracep->fullBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        tracep->fullBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        tracep->fullBit(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        tracep->fullBit(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        tracep->fullQData(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
        tracep->fullQData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
        tracep->fullQData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
        tracep->fullQData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
        tracep->fullCData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullBit(oldp+474,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size))));
        tracep->fullIData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
        tracep->fullIData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
        tracep->fullIData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
        tracep->fullIData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
        tracep->fullBit(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[0]));
        tracep->fullBit(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[1]));
        tracep->fullBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[2]));
        tracep->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[3]));
        tracep->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullCData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        tracep->fullBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        tracep->fullBit(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        tracep->fullCData(oldp+490,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                            + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                           - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        tracep->fullCData(oldp+491,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))),6);
        tracep->fullWData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data),128);
        __Vtemp711[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                          << 2U);
        __Vtemp711[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                           >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp711[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                    >> 9U)) << 3U) 
                          | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 2U)) 
                                    << 2U)) | ((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                        >> 0x20U)) 
                                               >> 0x1eU)));
        __Vtemp711[3U] = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 9U)) 
                                         >> 0x1dU) 
                                        | ((IData)(
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                     >> 9U) 
                                                    >> 0x20U)) 
                                           << 3U)));
        VL_EXTEND_WW(128,123, __Vtemp712, __Vtemp711);
        tracep->fullWData(oldp+496,(__Vtemp712),128);
        tracep->fullCData(oldp+500,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 3U)))),6);
        tracep->fullBit(oldp+501,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict))));
        tracep->fullQData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
        tracep->fullQData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
        tracep->fullQData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
        tracep->fullQData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
        tracep->fullQData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[4]),64);
        tracep->fullQData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[5]),64);
        tracep->fullBit(oldp+514,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___T) 
                                   & (2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])))));
        tracep->fullCData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        tracep->fullQData(oldp+516,(((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                                     [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                                      : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____Vxrand1)),64);
        tracep->fullBit(oldp+518,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___T) 
                                   & ((2U != (3U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                      & (1U == (3U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))))));
        tracep->fullCData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        tracep->fullCData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        tracep->fullCData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        tracep->fullCData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        tracep->fullCData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        tracep->fullCData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        tracep->fullCData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        tracep->fullCData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        tracep->fullCData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        tracep->fullCData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        tracep->fullCData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        tracep->fullCData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        tracep->fullCData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        tracep->fullCData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        tracep->fullCData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        tracep->fullCData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        tracep->fullCData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        tracep->fullCData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        tracep->fullCData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        tracep->fullCData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        tracep->fullCData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        tracep->fullCData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        tracep->fullCData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        tracep->fullCData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        tracep->fullCData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        tracep->fullCData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        tracep->fullCData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        tracep->fullCData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        tracep->fullCData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        tracep->fullCData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        tracep->fullCData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        tracep->fullCData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        tracep->fullCData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        tracep->fullCData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        tracep->fullCData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        tracep->fullCData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        tracep->fullCData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        tracep->fullCData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        tracep->fullCData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        tracep->fullCData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        tracep->fullCData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        tracep->fullCData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        tracep->fullCData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        tracep->fullCData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        tracep->fullCData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        tracep->fullCData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        tracep->fullCData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        tracep->fullCData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        tracep->fullCData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        tracep->fullCData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        tracep->fullCData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        tracep->fullCData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        tracep->fullCData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        tracep->fullCData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        tracep->fullCData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        tracep->fullCData(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        tracep->fullCData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        tracep->fullCData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        tracep->fullCData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        tracep->fullCData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        tracep->fullCData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        tracep->fullCData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        tracep->fullCData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        tracep->fullCData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        __Vtemp716[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                          << 2U);
        __Vtemp716[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                           >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp716[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                    >> 9U)) << 3U) 
                          | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 2U)) 
                                    << 2U)) | ((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                        >> 0x20U)) 
                                               >> 0x1eU)));
        __Vtemp716[3U] = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 9U)) 
                                         >> 0x1dU) 
                                        | ((IData)(
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                     >> 9U) 
                                                    >> 0x20U)) 
                                           << 3U)));
        tracep->fullWData(oldp+583,(__Vtemp716),123);
        tracep->fullQData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
        tracep->fullBit(oldp+589,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265) 
                                         >> 1U))));
        tracep->fullBit(oldp+590,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
                                         >> 0x1aU))));
        tracep->fullQData(oldp+591,((0xffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                           >> 2U)))),56);
        tracep->fullQData(oldp+593,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                                      >> 2U)))),64);
        tracep->fullCData(oldp+595,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])),2);
        tracep->fullBit(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullBit(oldp+597,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
        tracep->fullBit(oldp+598,((1U & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                                            & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]) 
                                           & ((((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]))) 
                                              != vlSelf->riscv_soc__DOT__core__DOT__fetch_io_get_pre_info_pre_next_pc)) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
                                             & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)))) 
                                         | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                                            & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]))))));
        tracep->fullBit(oldp+599,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+600,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullQData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
        tracep->fullQData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+606,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                      ? (((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                       >> 0x1fU)))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)),64);
        tracep->fullBit(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
        tracep->fullBit(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        tracep->fullQData(oldp+610,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
        tracep->fullQData(oldp+612,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
        tracep->fullQData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullBit(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        tracep->fullQData(oldp+619,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        tracep->fullBit(oldp+621,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
        tracep->fullBit(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        tracep->fullQData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        tracep->fullBit(oldp+626,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                   & ((0U != (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        tracep->fullQData(oldp+627,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        tracep->fullSData(oldp+629,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        tracep->fullCData(oldp+631,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),6);
        tracep->fullBit(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        tracep->fullBit(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        tracep->fullCData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullBit(oldp+635,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        tracep->fullBit(oldp+636,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+637,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+638,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 3U))));
        tracep->fullCData(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        tracep->fullBit(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        tracep->fullBit(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        tracep->fullBit(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+653,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        tracep->fullQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        tracep->fullBit(oldp+660,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U)))));
        tracep->fullQData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+663,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullBit(oldp+664,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullQData(oldp+667,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        tracep->fullWData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        tracep->fullBit(oldp+672,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        tracep->fullBit(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp718, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp719, __Vtemp718, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp720[0U] = __Vtemp719[0U];
        __Vtemp720[1U] = __Vtemp719[1U];
        __Vtemp720[2U] = __Vtemp719[2U];
        __Vtemp720[3U] = (0x7fffffffU & __Vtemp719[3U]);
        tracep->fullWData(oldp+675,(__Vtemp720),127);
        tracep->fullQData(oldp+679,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                     >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+681,(VL_SHIFTRS_QQI(64,64,6, 
                                                   ((1U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+683,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullCData(oldp+685,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U))),3);
        tracep->fullQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
        tracep->fullBit(oldp+688,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        tracep->fullBit(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        tracep->fullQData(oldp+690,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp721[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp721[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                  >> 0x20U));
        __Vtemp721[2U] = 1U;
        tracep->fullWData(oldp+692,(__Vtemp721),65);
        tracep->fullQData(oldp+695,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        tracep->fullWData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        tracep->fullQData(oldp+702,((((QData)((IData)(
                                                      ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
        tracep->fullQData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullCData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        tracep->fullQData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        tracep->fullQData(oldp+714,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
        tracep->fullQData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        tracep->fullQData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        tracep->fullBit(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        tracep->fullWData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        tracep->fullBit(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        tracep->fullBit(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        tracep->fullQData(oldp+728,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullBit(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        tracep->fullQData(oldp+733,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        tracep->fullBit(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullBit(oldp+737,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullWData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp723[0U] = 1U;
        __Vtemp723[1U] = 0U;
        __Vtemp723[2U] = 0U;
        __Vtemp724[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp724[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp724[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp725, __Vtemp723, __Vtemp724);
        __Vtemp726[0U] = __Vtemp725[0U];
        __Vtemp726[1U] = __Vtemp725[1U];
        __Vtemp726[2U] = (1U & __Vtemp725[2U]);
        tracep->fullWData(oldp+759,(__Vtemp726),65);
        tracep->fullCData(oldp+762,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+770,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp729[0U] = 1U;
        __Vtemp729[1U] = 0U;
        __Vtemp729[2U] = 0U;
        __Vtemp730[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp730[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp730[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp731, __Vtemp729, __Vtemp730);
        tracep->fullBit(oldp+771,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ __Vtemp731[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp731[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ (1U 
                                                & __Vtemp731[2U]))))));
        tracep->fullBit(oldp+772,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullBit(oldp+774,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        tracep->fullBit(oldp+775,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                         >> 3U))));
        tracep->fullQData(oldp+776,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullQData(oldp+778,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+780,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))));
        tracep->fullBit(oldp+781,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U))));
        VL_EXTEND_WQ(130,64, __Vtemp743, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp747[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            __Vtemp747[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp747[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp747[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp747[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 3U : 0U);
        } else {
            __Vtemp747[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                               : __Vtemp743[0U]);
            __Vtemp747[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                          >> 0x20U))
                               : __Vtemp743[1U]);
            __Vtemp747[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 0xffffffffU : 0U)
                               : __Vtemp743[2U]);
            __Vtemp747[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 0xffffffffU : 0U)
                               : __Vtemp743[3U]);
            __Vtemp747[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 3U : 0U) : __Vtemp743[4U]);
        }
        tracep->fullWData(oldp+782,(__Vtemp747),130);
        tracep->fullWData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp749[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                          << 1U);
        __Vtemp749[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                        << 1U));
        __Vtemp749[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                 << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                             >> 0x1fU) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                               << 1U)));
        tracep->fullWData(oldp+790,(__Vtemp749),67);
        tracep->fullCData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        __Vtemp751[0U] = 1U;
        __Vtemp751[1U] = 0U;
        __Vtemp751[2U] = 0U;
        __Vtemp751[3U] = 0U;
        __Vtemp751[4U] = 0U;
        __Vtemp752[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp752[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp752[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp752[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp752[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp753, __Vtemp751, __Vtemp752);
        __Vtemp754[0U] = __Vtemp753[0U];
        __Vtemp754[1U] = __Vtemp753[1U];
        __Vtemp754[2U] = __Vtemp753[2U];
        __Vtemp754[3U] = __Vtemp753[3U];
        __Vtemp754[4U] = (3U & __Vtemp753[4U]);
        VL_EXTEND_WW(131,130, __Vtemp755, __Vtemp754);
        __Vtemp757[0U] = 1U;
        __Vtemp757[1U] = 0U;
        __Vtemp757[2U] = 0U;
        __Vtemp757[3U] = 0U;
        __Vtemp757[4U] = 0U;
        __Vtemp758[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp758[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp758[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp758[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp758[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp759, __Vtemp757, __Vtemp758);
        __Vtemp760[0U] = __Vtemp759[0U];
        __Vtemp760[1U] = __Vtemp759[1U];
        __Vtemp760[2U] = __Vtemp759[2U];
        __Vtemp760[3U] = __Vtemp759[3U];
        __Vtemp760[4U] = (3U & __Vtemp759[4U]);
        VL_EXTEND_WW(131,130, __Vtemp761, __Vtemp760);
        __Vtemp763[0U] = 1U;
        __Vtemp763[1U] = 0U;
        __Vtemp763[2U] = 0U;
        __Vtemp763[3U] = 0U;
        __Vtemp763[4U] = 0U;
        __Vtemp764[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp764[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp764[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp764[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp764[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp765, __Vtemp763, __Vtemp764);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp773[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp773[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp773[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp773[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp773[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp773[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                               : 0U);
            __Vtemp773[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                               : 0U);
            __Vtemp773[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                               : 0U);
            __Vtemp773[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                               : 0U);
            __Vtemp773[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                               : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp774, __Vtemp773);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp782[0U] = __Vtemp755[0U];
            __Vtemp782[1U] = __Vtemp755[1U];
            __Vtemp782[2U] = __Vtemp755[2U];
            __Vtemp782[3U] = __Vtemp755[3U];
            __Vtemp782[4U] = __Vtemp755[4U];
        } else {
            __Vtemp782[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp761[0U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   (__Vtemp765[0U] 
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
                                                    __Vtemp774[0U])));
            __Vtemp782[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp761[1U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp765[0U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp765[1U] 
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
                                                    __Vtemp774[1U])));
            __Vtemp782[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp761[2U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp765[1U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp765[2U] 
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
                                                    __Vtemp774[2U])));
            __Vtemp782[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp761[3U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp765[2U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp765[3U] 
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
                                                    __Vtemp774[3U])));
            __Vtemp782[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp761[4U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp765[3U] 
                                                     >> 0x1fU) 
                                                    | (6U 
                                                       & (__Vtemp765[4U] 
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
                                                    __Vtemp774[4U])));
        }
        tracep->fullWData(oldp+808,(__Vtemp782),131);
        tracep->fullCData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullBit(oldp+814,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+815,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        tracep->fullBit(oldp+816,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 4U))));
        tracep->fullQData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullQData(oldp+823,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullBit(oldp+825,((0x10U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+826,((0x18U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+827,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+828,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+829,(((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))) 
                                   | (8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
        tracep->fullCData(oldp+830,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),4);
        tracep->fullBit(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+832,(((0xffffffffffffff77ULL 
                                      & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                     | (QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                    >> 7U)))
                                                         ? 0x88U
                                                         : 0x80U))))),64);
        tracep->fullCData(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullBit(oldp+835,(((0x33U == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   | ((0x13U == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x3bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     | ((0x63U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        & ((0x5063U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           & ((0x7063U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              & ((0x4063U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                 & ((0x6063U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_434)))))))))))))));
        tracep->fullBit(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
        tracep->fullBit(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
        tracep->fullCData(oldp+838,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 7U))),5);
        tracep->fullCData(oldp+839,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullQData(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[0]),64);
        tracep->fullQData(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[1]),64);
        tracep->fullQData(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[2]),64);
        tracep->fullQData(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[3]),64);
        tracep->fullQData(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[4]),64);
        tracep->fullQData(oldp+850,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[5]),64);
        tracep->fullQData(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[6]),64);
        tracep->fullQData(oldp+854,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[7]),64);
        tracep->fullQData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[8]),64);
        tracep->fullQData(oldp+858,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[9]),64);
        tracep->fullQData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[10]),64);
        tracep->fullQData(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[11]),64);
        tracep->fullQData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[12]),64);
        tracep->fullQData(oldp+866,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[13]),64);
        tracep->fullQData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[14]),64);
        tracep->fullQData(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[15]),64);
        tracep->fullQData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[16]),64);
        tracep->fullQData(oldp+874,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[17]),64);
        tracep->fullQData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[18]),64);
        tracep->fullQData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[19]),64);
        tracep->fullQData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[20]),64);
        tracep->fullQData(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[21]),64);
        tracep->fullQData(oldp+884,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[22]),64);
        tracep->fullQData(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[23]),64);
        tracep->fullQData(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[24]),64);
        tracep->fullQData(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[25]),64);
        tracep->fullQData(oldp+892,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[26]),64);
        tracep->fullQData(oldp+894,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[27]),64);
        tracep->fullQData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[28]),64);
        tracep->fullQData(oldp+898,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[29]),64);
        tracep->fullQData(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[30]),64);
        tracep->fullQData(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[31]),64);
        tracep->fullQData(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0U]),64);
        tracep->fullBit(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+911,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+915,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+919,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+923,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+927,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+929,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+931,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+933,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+935,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+936,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullBit(oldp+937,((0x4000U == (0xffffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullQData(oldp+938,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                      ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                      : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+940,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+942,((((QData)((IData)(
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
        tracep->fullBit(oldp+944,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+945,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+947,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+948,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+949,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+950,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullIData(oldp+951,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullBit(oldp+952,(vlSelf->clock));
        tracep->fullBit(oldp+953,(vlSelf->reset));
        tracep->fullQData(oldp+954,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+956,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+958,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+960,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+962,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+964,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+966,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+968,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+970,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+972,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+974,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+976,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+978,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+980,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+982,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+984,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+986,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+988,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+990,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+992,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+994,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+996,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+998,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+1000,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+1002,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+1004,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+1006,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+1008,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+1010,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+1012,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+1014,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+1016,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+1018,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+1020,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+1021,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+1022,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+1024,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+1025,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+1027,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+1029,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+1031,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+1033,(vlSelf->io_difftest_peripheral));
        tracep->fullQData(oldp+1034,(0ULL),64);
        __Vtemp783[0U] = 0U;
        __Vtemp783[1U] = 0U;
        __Vtemp783[2U] = 0U;
        __Vtemp783[3U] = 0U;
        tracep->fullWData(oldp+1036,(__Vtemp783),128);
        tracep->fullBit(oldp+1040,(1U));
        tracep->fullCData(oldp+1041,(0U),5);
        tracep->fullCData(oldp+1042,(1U),5);
        tracep->fullCData(oldp+1043,(2U),5);
        tracep->fullCData(oldp+1044,(3U),5);
        tracep->fullCData(oldp+1045,(4U),5);
        tracep->fullCData(oldp+1046,(5U),5);
        tracep->fullCData(oldp+1047,(6U),5);
        tracep->fullCData(oldp+1048,(7U),5);
        tracep->fullCData(oldp+1049,(8U),5);
        tracep->fullCData(oldp+1050,(9U),5);
        tracep->fullCData(oldp+1051,(0xaU),5);
        tracep->fullCData(oldp+1052,(0xbU),5);
        tracep->fullCData(oldp+1053,(0xcU),5);
        tracep->fullCData(oldp+1054,(0xdU),5);
        tracep->fullCData(oldp+1055,(0xeU),5);
        tracep->fullCData(oldp+1056,(0xfU),5);
        tracep->fullCData(oldp+1057,(0x10U),5);
        tracep->fullCData(oldp+1058,(0x11U),5);
        tracep->fullCData(oldp+1059,(0x12U),5);
        tracep->fullCData(oldp+1060,(0x13U),5);
        tracep->fullCData(oldp+1061,(0x14U),5);
        tracep->fullCData(oldp+1062,(0x15U),5);
        tracep->fullCData(oldp+1063,(0x16U),5);
        tracep->fullCData(oldp+1064,(0x17U),5);
        tracep->fullCData(oldp+1065,(0x18U),5);
        tracep->fullCData(oldp+1066,(0x19U),5);
        tracep->fullCData(oldp+1067,(0x1aU),5);
        tracep->fullCData(oldp+1068,(0x1bU),5);
        tracep->fullCData(oldp+1069,(0x1cU),5);
        tracep->fullCData(oldp+1070,(0x1dU),5);
        tracep->fullCData(oldp+1071,(0x1eU),5);
        tracep->fullCData(oldp+1072,(0x1fU),5);
        tracep->fullBit(oldp+1073,(0U));
        tracep->fullIData(oldp+1074,(0x80U),32);
        tracep->fullIData(oldp+1075,(0x40U),32);
        tracep->fullIData(oldp+1076,(6U),32);
        __Vtemp784[0U] = 0xffffffffU;
        __Vtemp784[1U] = 0xffffffffU;
        __Vtemp784[2U] = 0xffffffffU;
        __Vtemp784[3U] = 0xffffffffU;
        tracep->fullWData(oldp+1077,(__Vtemp784),128);
    }
}
