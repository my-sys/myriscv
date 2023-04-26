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
        tracep->declBit(c+811,"clock", false,-1);
        tracep->declBit(c+812,"reset", false,-1);
        tracep->declQuad(c+813,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+815,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+817,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+819,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+821,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+823,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+825,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+827,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+829,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+831,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+833,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+835,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+837,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+839,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+841,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+843,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+845,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+847,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+849,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+851,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+853,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+855,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+857,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+859,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+861,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+863,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+865,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+867,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+869,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+871,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+873,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+875,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+877,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+879,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+880,"io_difftest_commit", false,-1);
        tracep->declQuad(c+881,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+883,"io_difftest_irq", false,-1);
        tracep->declQuad(c+884,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+886,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+888,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+890,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+892,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+811,"riscv_soc clock", false,-1);
        tracep->declBit(c+812,"riscv_soc reset", false,-1);
        tracep->declQuad(c+813,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+815,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+817,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+819,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+821,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+823,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+825,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+827,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+829,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+831,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+833,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+835,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+837,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+839,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+841,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+843,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+845,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+847,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+849,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+851,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+853,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+855,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+857,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+859,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+861,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+863,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+865,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+867,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+869,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+871,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+873,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+875,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+877,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+879,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+880,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+881,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+883,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+884,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+886,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+888,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+890,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+892,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+811,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core_reset", false,-1);
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
        tracep->declBit(c+84,"riscv_soc core_difftest_irq", false,-1);
        tracep->declBit(c+85,"riscv_soc core_difftest_peripheral", false,-1);
        tracep->declBit(c+86,"riscv_soc core_difftest_commit", false,-1);
        tracep->declQuad(c+87,"riscv_soc core_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+89,"riscv_soc core_difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+893,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+90,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+92,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+94,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+100,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+102,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+106,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+108,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+112,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+114,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+116,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+118,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+128,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+130,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+132,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+134,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+136,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+138,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+140,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+146,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+150,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core_inst_counter", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc axi_ram_reset", false,-1);
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
        tracep->declBit(c+811,"riscv_soc sram0_clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0_io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram0_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0_io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0_io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram1_clock", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1_io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram2_clock", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2_io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram3_clock", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3_io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3_io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram4_clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4_io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4_io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram5_clock", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5_io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram5_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5_io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5_io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram6_clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram6_io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram6_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6_io_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc sram6_io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram7_clock", false,-1);
        tracep->declBus(c+79,"riscv_soc sram7_io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram7_io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram7_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7_io_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc sram7_io_rdata", false,-1, 127,0);
        tracep->declBus(c+89,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+154,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core reset", false,-1);
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
        tracep->declBit(c+84,"riscv_soc core difftest_irq", false,-1);
        tracep->declBit(c+85,"riscv_soc core difftest_peripheral", false,-1);
        tracep->declBit(c+86,"riscv_soc core difftest_commit", false,-1);
        tracep->declQuad(c+87,"riscv_soc core difftest_pc", false,-1, 63,0);
        tracep->declBus(c+89,"riscv_soc core difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+152,"riscv_soc core inst_counter", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache_io_flush", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache_io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache_io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core i_cache_io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core i_cache_io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+167,"riscv_soc core i_cache_io_is_fence_i", false,-1);
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
        tracep->declBit(c+168,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+172,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+173,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+182,"riscv_soc core d_cache_io_cpu_ready", false,-1);
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
        tracep->declBit(c+183,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+184,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+185,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+187,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+190,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+191,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+192,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+193,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+196,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+168,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+172,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+183,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+184,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+185,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+187,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+191,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+193,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+196,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+899,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+201,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1_io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_1_io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+204,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+208,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+211,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+157,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+212,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+215,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core fetch_reset", false,-1);
        tracep->declQuad(c+216,"riscv_soc core fetch_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core fetch_io_flush", false,-1);
        tracep->declBit(c+201,"riscv_soc core fetch_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+202,"riscv_soc core fetch_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core fetch_io_cpu_data_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core fetch_io_cpu_data_valid", false,-1);
        tracep->declQuad(c+204,"riscv_soc core fetch_io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core fetch_io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+219,"riscv_soc core fetch_io_put_pc_ready", false,-1);
        tracep->declBit(c+220,"riscv_soc core fetch_io_put_pc_valid", false,-1);
        tracep->declBus(c+221,"riscv_soc core fetch_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+222,"riscv_soc core fetch_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+156,"riscv_soc core fetch_io_out_flush", false,-1);
        tracep->declBit(c+811,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute_reset", false,-1);
        tracep->declBit(c+219,"riscv_soc core execute_io_op_datas_ready", false,-1);
        tracep->declBit(c+224,"riscv_soc core execute_io_op_datas_valid", false,-1);
        tracep->declBus(c+225,"riscv_soc core execute_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+226,"riscv_soc core execute_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+227,"riscv_soc core execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"riscv_soc core execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"riscv_soc core execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core execute_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+234,"riscv_soc core execute_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+236,"riscv_soc core execute_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_soc core execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+238,"riscv_soc core execute_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBus(c+239,"riscv_soc core execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+240,"riscv_soc core execute_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+242,"riscv_soc core execute_io_irq_time_irq", false,-1);
        tracep->declBit(c+243,"riscv_soc core execute_io_irq_soft_irq", false,-1);
        tracep->declQuad(c+244,"riscv_soc core execute_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+246,"riscv_soc core execute_io_mie", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc core execute_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc core execute_io_mtvec", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core execute_io_wb_valid", false,-1);
        tracep->declBus(c+253,"riscv_soc core execute_io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"riscv_soc core execute_io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+256,"riscv_soc core execute_io_csr_valid", false,-1);
        tracep->declBus(c+257,"riscv_soc core execute_io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+258,"riscv_soc core execute_io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+260,"riscv_soc core execute_io_csr_except_is_except", false,-1);
        tracep->declBit(c+261,"riscv_soc core execute_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+262,"riscv_soc core execute_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+263,"riscv_soc core execute_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+264,"riscv_soc core execute_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+266,"riscv_soc core execute_io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+268,"riscv_soc core execute_io_commit", false,-1);
        tracep->declBus(c+269,"riscv_soc core execute_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+270,"riscv_soc core execute_io_difftest_peripheral", false,-1);
        tracep->declQuad(c+216,"riscv_soc core execute_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core execute_io_flush", false,-1);
        tracep->declBit(c+167,"riscv_soc core execute_io_fence_i", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute_io_bus_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core execute_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core execute_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core execute_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core execute_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+211,"riscv_soc core execute_io_bus_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core decode_reset", false,-1);
        tracep->declBit(c+219,"riscv_soc core decode_io_get_inst_ready", false,-1);
        tracep->declBit(c+220,"riscv_soc core decode_io_get_inst_valid", false,-1);
        tracep->declBus(c+221,"riscv_soc core decode_io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+222,"riscv_soc core decode_io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBus(c+271,"riscv_soc core decode_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+272,"riscv_soc core decode_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+274,"riscv_soc core decode_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+275,"riscv_soc core decode_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+277,"riscv_soc core decode_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+278,"riscv_soc core decode_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+219,"riscv_soc core decode_io_op_datas_ready", false,-1);
        tracep->declBit(c+224,"riscv_soc core decode_io_op_datas_valid", false,-1);
        tracep->declBus(c+225,"riscv_soc core decode_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+226,"riscv_soc core decode_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+227,"riscv_soc core decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"riscv_soc core decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"riscv_soc core decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core decode_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+234,"riscv_soc core decode_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+236,"riscv_soc core decode_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_soc core decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+238,"riscv_soc core decode_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBus(c+239,"riscv_soc core decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+240,"riscv_soc core decode_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core decode_io_flush", false,-1);
        tracep->declBit(c+811,"riscv_soc core commit_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core commit_reset", false,-1);
        tracep->declBus(c+271,"riscv_soc core commit_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+272,"riscv_soc core commit_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+274,"riscv_soc core commit_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+275,"riscv_soc core commit_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core commit_io_normal_wb_valid", false,-1);
        tracep->declBus(c+253,"riscv_soc core commit_io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"riscv_soc core commit_io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+277,"riscv_soc core commit_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+278,"riscv_soc core commit_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+256,"riscv_soc core commit_io_csr_wb_valid", false,-1);
        tracep->declBus(c+257,"riscv_soc core commit_io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+258,"riscv_soc core commit_io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+260,"riscv_soc core commit_io_csr_except_is_except", false,-1);
        tracep->declBit(c+261,"riscv_soc core commit_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+262,"riscv_soc core commit_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+263,"riscv_soc core commit_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+264,"riscv_soc core commit_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+266,"riscv_soc core commit_io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc core commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc core commit_io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+244,"riscv_soc core commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+246,"riscv_soc core commit_io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+268,"riscv_soc core commit_io_commit", false,-1);
        tracep->declBus(c+269,"riscv_soc core commit_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+270,"riscv_soc core commit_io_difftest_peripheral", false,-1);
        tracep->declBit(c+84,"riscv_soc core commit_difftest_irq_0", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit_difftest_peripheral_0", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit_difftest_commit_0", false,-1);
        tracep->declQuad(c+87,"riscv_soc core commit_difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+89,"riscv_soc core commit_difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+893,"riscv_soc core commit__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+90,"riscv_soc core commit__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+92,"riscv_soc core commit__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+94,"riscv_soc core commit__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core commit__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core commit__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+100,"riscv_soc core commit__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+102,"riscv_soc core commit__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core commit__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+106,"riscv_soc core commit__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+108,"riscv_soc core commit__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core commit__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+112,"riscv_soc core commit__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+114,"riscv_soc core commit__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+116,"riscv_soc core commit__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+118,"riscv_soc core commit__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core commit__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core commit__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core commit__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core commit__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+128,"riscv_soc core commit__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+130,"riscv_soc core commit__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+132,"riscv_soc core commit__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+134,"riscv_soc core commit__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+136,"riscv_soc core commit__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+138,"riscv_soc core commit__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+140,"riscv_soc core commit__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv_soc core commit__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv_soc core commit__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+146,"riscv_soc core commit__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core commit__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+150,"riscv_soc core commit__WIRE_0_31", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core commit_inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+212,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+181,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+215,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+243,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+242,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+811,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache io_flush", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core i_cache io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core i_cache io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core i_cache io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core i_cache io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core i_cache io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+167,"riscv_soc core i_cache io_is_fence_i", false,-1);
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
        tracep->declBit(c+168,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+172,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core i_cache cache_stage0_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core i_cache cache_stage0_reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache cache_stage0_io_flush", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage0_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage0_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core i_cache cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage0_io_addr_ready", false,-1);
        tracep->declBit(c+280,"riscv_soc core i_cache cache_stage0_io_addr_valid", false,-1);
        tracep->declQuad(c+281,"riscv_soc core i_cache cache_stage0_io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core i_cache cache_stage1_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core i_cache cache_stage1_reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache cache_stage1_io_flush", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage1_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+280,"riscv_soc core i_cache cache_stage1_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+281,"riscv_soc core i_cache cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+283,"riscv_soc core i_cache cache_stage1_io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+284,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+285,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+286,"riscv_soc core i_cache cache_stage1_io_sram_valid", false,-1);
        tracep->declArray(c+287,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+291,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+295,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+299,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+303,"riscv_soc core i_cache cache_stage1_io_sram_ready", false,-1);
        tracep->declBit(c+304,"riscv_soc core i_cache cache_stage1_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+305,"riscv_soc core i_cache cache_stage1_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+306,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+308,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+284,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+309,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+311,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+285,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+312,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core i_cache cache_stage2_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core i_cache cache_stage2_reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache cache_stage2_io_flush", false,-1);
        tracep->declBit(c+304,"riscv_soc core i_cache cache_stage2_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+305,"riscv_soc core i_cache cache_stage2_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+306,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+308,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+284,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+309,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+311,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+285,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+312,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+172,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+314,"riscv_soc core i_cache cache_stage2_io_sram_w_valid", false,-1);
        tracep->declBus(c+315,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+316,"riscv_soc core i_cache cache_stage2_io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+161,"riscv_soc core i_cache cache_stage2_io_rdata_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core i_cache cache_stage2_io_rdata_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core i_cache cache_stage2_io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core i_cache cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+317,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+319,"riscv_soc core i_cache reg_sram1_valid", false,-1, 63,0);
        tracep->declBit(c+321,"riscv_soc core i_cache is_w_sram", false,-1);
        tracep->declBit(c+322,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declBit(c+323,"riscv_soc core i_cache is_sram1_write", false,-1);
        tracep->declQuad(c+324,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declBit(c+326,"riscv_soc core i_cache reg_temp_sram0_valid", false,-1);
        tracep->declBit(c+327,"riscv_soc core i_cache reg_temp_sram1_valid", false,-1);
        tracep->declBus(c+328,"riscv_soc core i_cache reg_temp_r_index", false,-1, 5,0);
        tracep->declBit(c+329,"riscv_soc core i_cache w_r_pass0_val", false,-1);
        tracep->declBit(c+330,"riscv_soc core i_cache w_r_pass1_val", false,-1);
        tracep->declBit(c+303,"riscv_soc core i_cache reg_sram_r_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core i_cache cache_stage0 clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core i_cache cache_stage0 reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache cache_stage0 io_flush", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage0 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage0 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core i_cache cache_stage0 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage0 io_addr_ready", false,-1);
        tracep->declBit(c+280,"riscv_soc core i_cache cache_stage0 io_addr_valid", false,-1);
        tracep->declQuad(c+281,"riscv_soc core i_cache cache_stage0 io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+280,"riscv_soc core i_cache cache_stage0 reg_valid", false,-1);
        tracep->declQuad(c+281,"riscv_soc core i_cache cache_stage0 reg_addr", false,-1, 63,0);
        tracep->declBit(c+331,"riscv_soc core i_cache cache_stage0 valid", false,-1);
        tracep->declBit(c+811,"riscv_soc core i_cache cache_stage1 clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core i_cache cache_stage1 reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache cache_stage1 io_flush", false,-1);
        tracep->declBit(c+157,"riscv_soc core i_cache cache_stage1 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+280,"riscv_soc core i_cache cache_stage1 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+281,"riscv_soc core i_cache cache_stage1 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+283,"riscv_soc core i_cache cache_stage1 io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+284,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+285,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+286,"riscv_soc core i_cache cache_stage1 io_sram_valid", false,-1);
        tracep->declArray(c+287,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+291,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+295,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+299,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+303,"riscv_soc core i_cache cache_stage1 io_sram_ready", false,-1);
        tracep->declBit(c+304,"riscv_soc core i_cache cache_stage1 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+305,"riscv_soc core i_cache cache_stage1 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+306,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+308,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+284,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+309,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+311,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+285,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+312,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+286,"riscv_soc core i_cache cache_stage1 valid", false,-1);
        tracep->declBit(c+332,"riscv_soc core i_cache cache_stage1 ready", false,-1);
        tracep->declQuad(c+306,"riscv_soc core i_cache cache_stage1 reg_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+333,"riscv_soc core i_cache cache_stage1 reg_valid", false,-1);
        tracep->declQuad(c+334,"riscv_soc core i_cache cache_stage1 reg_tag", false,-1, 53,0);
        tracep->declBus(c+336,"riscv_soc core i_cache cache_stage1 reg_index", false,-1, 5,0);
        tracep->declBus(c+337,"riscv_soc core i_cache cache_stage1 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+338,"riscv_soc core i_cache cache_stage1 tag_0", false,-1, 53,0);
        tracep->declQuad(c+340,"riscv_soc core i_cache cache_stage1 tag_1", false,-1, 53,0);
        tracep->declBit(c+811,"riscv_soc core i_cache cache_stage2 clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core i_cache cache_stage2 reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache cache_stage2 io_flush", false,-1);
        tracep->declBit(c+304,"riscv_soc core i_cache cache_stage2 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+305,"riscv_soc core i_cache cache_stage2 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+306,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+308,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+284,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+309,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+311,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+285,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+312,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+172,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+314,"riscv_soc core i_cache cache_stage2 io_sram_w_valid", false,-1);
        tracep->declBus(c+315,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+316,"riscv_soc core i_cache cache_stage2 io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+161,"riscv_soc core i_cache cache_stage2 io_rdata_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core i_cache cache_stage2 io_rdata_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core i_cache cache_stage2 io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core i_cache cache_stage2 io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBus(c+336,"riscv_soc core i_cache cache_stage2 index", false,-1, 5,0);
        tracep->declBit(c+342,"riscv_soc core i_cache cache_stage2 valid", false,-1);
        tracep->declBit(c+316,"riscv_soc core i_cache cache_stage2 reg_chosen_tag", false,-1);
        tracep->declQuad(c+163,"riscv_soc core i_cache cache_stage2 reg_rdata", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core i_cache cache_stage2 reg_valid", false,-1);
        tracep->declBit(c+343,"riscv_soc core i_cache cache_stage2 reg_ready", false,-1);
        tracep->declQuad(c+344,"riscv_soc core i_cache cache_stage2 temp_addr", false,-1, 63,0);
        tracep->declQuad(c+169,"riscv_soc core i_cache cache_stage2 reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core i_cache cache_stage2 reg_r_valid", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache cache_stage2 reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+314,"riscv_soc core i_cache cache_stage2 reg_cache_write", false,-1);
        tracep->declQuad(c+165,"riscv_soc core i_cache cache_stage2 reg_cpu_addr", false,-1, 63,0);
        tracep->declQuad(c+346,"riscv_soc core i_cache cache_stage2 reg_tag", false,-1, 53,0);
        tracep->declBus(c+348,"riscv_soc core i_cache cache_stage2 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+349,"riscv_soc core i_cache cache_stage2 reg_lru_1", false,-1, 63,0);
        tracep->declBit(c+351,"riscv_soc core i_cache cache_stage2 LRU_1", false,-1);
        tracep->declQuad(c+352,"riscv_soc core i_cache cache_stage2 chose_bit", false,-1, 63,0);
        tracep->declQuad(c+354,"riscv_soc core i_cache cache_stage2 neg_chose_bit", false,-1, 63,0);
        tracep->declBus(c+356,"riscv_soc core i_cache cache_stage2 reg_bus_state", false,-1, 1,0);
        tracep->declBit(c+811,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+173,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+182,"riscv_soc core d_cache io_cpu_ready", false,-1);
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
        tracep->declBit(c+183,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+184,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+185,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+187,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+190,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+191,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+192,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+193,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+196,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+357,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+359,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+360,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+361,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+362,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+364,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+365,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+366,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+368,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+369,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+182,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+176,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+370,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+371,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+57,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+372,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+373,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+375,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+379,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+383,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+384,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+386,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+388,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+390,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+392,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+393,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+395,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+193,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+185,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+187,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+184,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+190,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+397,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+399,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+401,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+402,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+403,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+404,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+405,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+406,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+407,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+409,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+411,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+413,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+414,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+415,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+416,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+417,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+811,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+168,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+171,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+172,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+183,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+184,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+185,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+187,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+191,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+193,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+195,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+196,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+899,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+418,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+419,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+420,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+421,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+422,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+423,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+424,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+425,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+426,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+201,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1 io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_1 io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+204,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+208,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+211,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+157,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+182,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+197,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+200,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+212,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+181,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+215,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+427,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+428,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+429,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+811,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core fetch reset", false,-1);
        tracep->declQuad(c+216,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+201,"riscv_soc core fetch io_cpu_addr_ready", false,-1);
        tracep->declBit(c+202,"riscv_soc core fetch io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core fetch io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core fetch io_cpu_data_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core fetch io_cpu_data_valid", false,-1);
        tracep->declQuad(c+204,"riscv_soc core fetch io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core fetch io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+219,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declBit(c+220,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+221,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+222,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+156,"riscv_soc core fetch io_out_flush", false,-1);
        tracep->declBit(c+811,"riscv_soc core fetch ibuf_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core fetch ibuf_reset", false,-1);
        tracep->declBit(c+218,"riscv_soc core fetch ibuf_io_flush", false,-1);
        tracep->declBit(c+161,"riscv_soc core fetch ibuf_io_cache_buf_ready", false,-1);
        tracep->declBit(c+430,"riscv_soc core fetch ibuf_io_cache_buf_valid", false,-1);
        tracep->declQuad(c+206,"riscv_soc core fetch ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+431,"riscv_soc core fetch ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+219,"riscv_soc core fetch ibuf_io_put_pc_ready", false,-1);
        tracep->declBit(c+220,"riscv_soc core fetch ibuf_io_put_pc_valid", false,-1);
        tracep->declBus(c+221,"riscv_soc core fetch ibuf_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+222,"riscv_soc core fetch ibuf_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBus(c+432,"riscv_soc core fetch reg_pc_0", false,-1, 31,0);
        tracep->declBit(c+433,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+434,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+202,"riscv_soc core fetch reg_bus_valid", false,-1);
        tracep->declBit(c+811,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+218,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+161,"riscv_soc core fetch ibuf io_cache_buf_ready", false,-1);
        tracep->declBit(c+430,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+206,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+431,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+219,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+220,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+221,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+222,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+436+i*2,"riscv_soc core fetch ibuf ibuf_pc", true,(i+0), 63,0);}}
        tracep->declBit(c+899,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_en", false,-1);
        tracep->declBus(c+444,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+222,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc core fetch ibuf ibuf_pc_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+445,"riscv_soc core fetch ibuf ibuf_pc_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+899,"riscv_soc core fetch ibuf ibuf_pc_MPORT_mask", false,-1);
        tracep->declBit(c+446,"riscv_soc core fetch ibuf ibuf_pc_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+447+i*1,"riscv_soc core fetch ibuf ibuf_inst", true,(i+0), 31,0);}}
        tracep->declBit(c+899,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_en", false,-1);
        tracep->declBus(c+444,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_addr", false,-1, 1,0);
        tracep->declBus(c+221,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+431,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+445,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+899,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_mask", false,-1);
        tracep->declBit(c+446,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_en", false,-1);
        tracep->declBit(c+451,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+452,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+453,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+454,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+445,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+444,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBus(c+455,"riscv_soc core fetch ibuf reg_ibuf_size", false,-1, 2,0);
        tracep->declBit(c+456,"riscv_soc core fetch ibuf enq_size", false,-1);
        tracep->declBit(c+457,"riscv_soc core fetch ibuf can_deq", false,-1);
        tracep->declBus(c+458,"riscv_soc core fetch ibuf result_size", false,-1, 2,0);
        tracep->declBit(c+811,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+219,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+224,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+225,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+226,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+227,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+234,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+236,"riscv_soc core execute io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+238,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBus(c+239,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+240,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+242,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+243,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+244,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+246,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+253,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+256,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+257,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+258,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+260,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+261,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+262,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+263,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+264,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+266,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+268,"riscv_soc core execute io_commit", false,-1);
        tracep->declBus(c+269,"riscv_soc core execute io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+270,"riscv_soc core execute io_difftest_peripheral", false,-1);
        tracep->declQuad(c+216,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+167,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBit(c+211,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+459,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBus(c+225,"riscv_soc core execute alu_exu_io_opType", false,-1, 2,0);
        tracep->declBus(c+226,"riscv_soc core execute alu_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+460,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+234,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+464,"riscv_soc core execute alu_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+466,"riscv_soc core execute alu_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+467,"riscv_soc core execute alu_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core execute mem_exu_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute mem_exu_reset", false,-1);
        tracep->declBit(c+469,"riscv_soc core execute mem_exu_io_valid", false,-1);
        tracep->declBus(c+226,"riscv_soc core execute mem_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+470,"riscv_soc core execute mem_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+472,"riscv_soc core execute mem_exu_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core execute mem_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+474,"riscv_soc core execute mem_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+476,"riscv_soc core execute mem_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+477,"riscv_soc core execute mem_exu_io_ready", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute mem_exu_io_bus_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core execute mem_exu_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core execute mem_exu_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute mem_exu_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core execute mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core execute mem_exu_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+211,"riscv_soc core execute mem_exu_io_bus_ready", false,-1);
        tracep->declBit(c+270,"riscv_soc core execute mem_exu_io_difftest_peripheral", false,-1);
        tracep->declBit(c+811,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+478,"riscv_soc core execute mu_exu_io_valid", false,-1);
        tracep->declBus(c+226,"riscv_soc core execute mu_exu_io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+460,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+479,"riscv_soc core execute mu_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+481,"riscv_soc core execute mu_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+482,"riscv_soc core execute mu_exu_io_ready", false,-1);
        tracep->declBit(c+483,"riscv_soc core execute system_exu_io_valid", false,-1);
        tracep->declBus(c+226,"riscv_soc core execute system_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+484,"riscv_soc core execute system_exu_io_csr_data", false,-1, 63,0);
        tracep->declBus(c+239,"riscv_soc core execute system_exu_io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+233,"riscv_soc core execute system_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+470,"riscv_soc core execute system_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc core execute system_exu_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+244,"riscv_soc core execute system_exu_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+484,"riscv_soc core execute system_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+486,"riscv_soc core execute system_exu_io_csr_is_w", false,-1);
        tracep->declQuad(c+487,"riscv_soc core execute system_exu_io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+489,"riscv_soc core execute system_exu_io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+490,"riscv_soc core execute system_exu_io_is_except", false,-1);
        tracep->declBus(c+491,"riscv_soc core execute system_exu_io_exception", false,-1, 5,0);
        tracep->declBit(c+492,"riscv_soc core execute system_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+248,"riscv_soc core execute system_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+493,"riscv_soc core execute in_data_valid", false,-1);
        tracep->declBit(c+219,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+494,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBit(c+495,"riscv_soc core execute reg_alu_valid", false,-1);
        tracep->declBit(c+496,"riscv_soc core execute reg_mem_valid", false,-1);
        tracep->declBit(c+497,"riscv_soc core execute reg_mu_valid", false,-1);
        tracep->declBit(c+498,"riscv_soc core execute reg_system_valid", false,-1);
        tracep->declBus(c+499,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+500,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+501,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBus(c+253,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+257,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBit(c+503,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+504,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+263,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+505,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+506,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+264,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+266,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declBit(c+507,"riscv_soc core execute time_irq", false,-1);
        tracep->declBit(c+508,"riscv_soc core execute soft_irq", false,-1);
        tracep->declBit(c+509,"riscv_soc core execute irq", false,-1);
        tracep->declQuad(c+216,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+510,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+511,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+512,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBus(c+269,"riscv_soc core execute reg_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+459,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBus(c+225,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+226,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+460,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+234,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+464,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+466,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+467,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declBit(c+513,"riscv_soc core execute alu_exu is_32", false,-1);
        tracep->declQuad(c+514,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+516,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+518,"riscv_soc core execute alu_exu op_imm", false,-1, 63,0);
        tracep->declBit(c+520,"riscv_soc core execute alu_exu rs2_is_imm", false,-1);
        tracep->declQuad(c+521,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+523,"riscv_soc core execute alu_exu rs1_is_pc", false,-1);
        tracep->declBit(c+524,"riscv_soc core execute alu_exu is_sra", false,-1);
        tracep->declQuad(c+525,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+527,"riscv_soc core execute alu_exu temp_rs2_data", false,-1, 63,0);
        tracep->declArray(c+529,"riscv_soc core execute alu_exu add_sub_result", false,-1, 64,0);
        tracep->declBit(c+532,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+533,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+534,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+535,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declQuad(c+539,"riscv_soc core execute alu_exu srl_temp", false,-1, 63,0);
        tracep->declQuad(c+541,"riscv_soc core execute alu_exu sra_temp", false,-1, 63,0);
        tracep->declQuad(c+543,"riscv_soc core execute alu_exu sr_temp", false,-1, 63,0);
        tracep->declBus(c+545,"riscv_soc core execute alu_exu func", false,-1, 2,0);
        tracep->declQuad(c+546,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declBit(c+548,"riscv_soc core execute alu_exu is_br", false,-1);
        tracep->declBit(c+549,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declQuad(c+550,"riscv_soc core execute alu_exu temp_1", false,-1, 63,0);
        tracep->declArray(c+552,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declArray(c+555,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declQuad(c+558,"riscv_soc core execute alu_exu dst_data", false,-1, 63,0);
        tracep->declBit(c+560,"riscv_soc core execute alu_exu valid_next_pc", false,-1);
        tracep->declBit(c+811,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+469,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+226,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+470,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+472,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+474,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+476,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+477,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+181,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+211,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declBit(c+270,"riscv_soc core execute mem_exu io_difftest_peripheral", false,-1);
        tracep->declQuad(c+561,"riscv_soc core execute mem_exu imm", false,-1, 63,0);
        tracep->declBit(c+477,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+563,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+565,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+567,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+568,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+569,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+474,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+476,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBus(c+570,"riscv_soc core execute mem_exu reg_exuType", false,-1, 6,0);
        tracep->declBit(c+270,"riscv_soc core execute mem_exu reg_difftest_peripheral", false,-1);
        tracep->declQuad(c+571,"riscv_soc core execute mem_exu mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+573,"riscv_soc core execute mem_exu mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+575,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+577,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declQuad(c+578,"riscv_soc core execute mem_exu mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+580,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+581,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+585,"riscv_soc core execute mem_exu chose_chancel", false,-1);
        tracep->declBit(c+811,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+478,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+226,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+460,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+479,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+481,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+482,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+586,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declQuad(c+460,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+226,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+587,"riscv_soc core execute mu_exu div_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+589,"riscv_soc core execute mu_exu div_io_dest_is_w", false,-1);
        tracep->declBit(c+590,"riscv_soc core execute mu_exu div_io_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+591,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declQuad(c+460,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+226,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+592,"riscv_soc core execute mu_exu mul_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+594,"riscv_soc core execute mu_exu mul_io_dest_is_w", false,-1);
        tracep->declBit(c+595,"riscv_soc core execute mu_exu mul_io_ready", false,-1);
        tracep->declBit(c+811,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+586,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+460,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+226,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+587,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+589,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+590,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declBit(c+513,"riscv_soc core execute mu_exu div is_32", false,-1);
        tracep->declBit(c+596,"riscv_soc core execute mu_exu div is_signed", false,-1);
        tracep->declArray(c+597,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+600,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+603,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+606,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+609,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+612,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+615,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+618,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+621,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+622,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+623,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declArray(c+624,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+629,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+630,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+631,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+632,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declBit(c+589,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+590,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declBit(c+633,"riscv_soc core execute mu_exu div reg_is_32", false,-1);
        tracep->declBit(c+634,"riscv_soc core execute mu_exu div reg_is_rem", false,-1);
        tracep->declQuad(c+635,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+637,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+591,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+460,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+226,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+592,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+594,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+595,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+639,"riscv_soc core execute mu_exu mul is_32", false,-1);
        tracep->declBit(c+640,"riscv_soc core execute mu_exu mul is_rs1_signed", false,-1);
        tracep->declBit(c+513,"riscv_soc core execute mu_exu mul is_rs2_signed", false,-1);
        tracep->declArray(c+641,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+646,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+649,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+595,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+652,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+653,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+656,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+661,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+666,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+594,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declArray(c+667,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBus(c+672,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declBit(c+673,"riscv_soc core execute mu_exu mul reg_not_h", false,-1);
        tracep->declBit(c+674,"riscv_soc core execute mu_exu mul reg_is_32", false,-1);
        tracep->declBit(c+483,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+226,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+484,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+239,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+233,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+470,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+244,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+484,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+486,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+487,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+489,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+490,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+491,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+492,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+248,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+518,"riscv_soc core execute system_exu imm", false,-1, 63,0);
        tracep->declBit(c+675,"riscv_soc core execute system_exu is_imm", false,-1);
        tracep->declQuad(c+676,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+678,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+680,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declQuad(c+682,"riscv_soc core execute system_exu temp_csr_result_data", false,-1, 63,0);
        tracep->declBit(c+684,"riscv_soc core execute system_exu is_mret", false,-1);
        tracep->declBit(c+685,"riscv_soc core execute system_exu is_sret", false,-1);
        tracep->declBit(c+686,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+687,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+688,"riscv_soc core execute system_exu is_except", false,-1);
        tracep->declBus(c+689,"riscv_soc core execute system_exu exception", false,-1, 3,0);
        tracep->declBit(c+690,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declQuad(c+691,"riscv_soc core execute system_exu result_status", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+219,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBit(c+220,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+221,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+222,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBus(c+271,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+272,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+274,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+275,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+277,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+278,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+219,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+224,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+225,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+226,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+227,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+234,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+236,"riscv_soc core decode io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+238,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBus(c+239,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+240,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+224,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+225,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+226,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+227,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+228,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+231,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+233,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+234,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+236,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+238,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+239,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+240,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+693,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBit(c+694,"riscv_soc core decode dest_is_reg", false,-1);
        tracep->declBit(c+695,"riscv_soc core decode rs1_is_reg", false,-1);
        tracep->declBit(c+696,"riscv_soc core decode rs2_is_reg", false,-1);
        tracep->declBus(c+274,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+271,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+277,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBus(c+697,"riscv_soc core decode dest_addr", false,-1, 4,0);
        tracep->declBit(c+811,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+271,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+272,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+274,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+275,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+253,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+254,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+277,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+278,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+256,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+257,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+258,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+260,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+261,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+262,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+263,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+264,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+266,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+244,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+246,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+268,"riscv_soc core commit io_commit", false,-1);
        tracep->declBus(c+269,"riscv_soc core commit io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+270,"riscv_soc core commit io_difftest_peripheral", false,-1);
        tracep->declBit(c+84,"riscv_soc core commit difftest_irq_0", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit difftest_peripheral_0", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit difftest_commit_0", false,-1);
        tracep->declQuad(c+87,"riscv_soc core commit difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+89,"riscv_soc core commit difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+152,"riscv_soc core commit inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core commit csr_reg_clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core commit csr_reg_reset", false,-1);
        tracep->declBus(c+257,"riscv_soc core commit csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+258,"riscv_soc core commit csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+256,"riscv_soc core commit csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+266,"riscv_soc core commit csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+264,"riscv_soc core commit csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+261,"riscv_soc core commit csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+262,"riscv_soc core commit csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+698,"riscv_soc core commit csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+260,"riscv_soc core commit csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+268,"riscv_soc core commit csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+277,"riscv_soc core commit csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+278,"riscv_soc core commit csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc core commit csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc core commit csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+244,"riscv_soc core commit csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+246,"riscv_soc core commit csr_reg_io_r_csr_mie", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+699+i*2,"riscv_soc core commit regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+899,"riscv_soc core commit regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+271,"riscv_soc core commit regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+763,"riscv_soc core commit regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+274,"riscv_soc core commit regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+765,"riscv_soc core commit regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+900,"riscv_soc core commit regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+767,"riscv_soc core commit regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_2_en", false,-1);
        tracep->declBus(c+901,"riscv_soc core commit regfile_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+90,"riscv_soc core commit regfile_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_3_en", false,-1);
        tracep->declBus(c+902,"riscv_soc core commit regfile_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+92,"riscv_soc core commit regfile_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+903,"riscv_soc core commit regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+94,"riscv_soc core commit regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_5_en", false,-1);
        tracep->declBus(c+904,"riscv_soc core commit regfile_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+96,"riscv_soc core commit regfile_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_6_en", false,-1);
        tracep->declBus(c+905,"riscv_soc core commit regfile_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"riscv_soc core commit regfile_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_7_en", false,-1);
        tracep->declBus(c+906,"riscv_soc core commit regfile_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"riscv_soc core commit regfile_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_8_en", false,-1);
        tracep->declBus(c+907,"riscv_soc core commit regfile_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+102,"riscv_soc core commit regfile_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_9_en", false,-1);
        tracep->declBus(c+908,"riscv_soc core commit regfile_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core commit regfile_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_10_en", false,-1);
        tracep->declBus(c+909,"riscv_soc core commit regfile_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"riscv_soc core commit regfile_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_11_en", false,-1);
        tracep->declBus(c+910,"riscv_soc core commit regfile_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+108,"riscv_soc core commit regfile_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_12_en", false,-1);
        tracep->declBus(c+911,"riscv_soc core commit regfile_MPORT_12_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"riscv_soc core commit regfile_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_13_en", false,-1);
        tracep->declBus(c+912,"riscv_soc core commit regfile_MPORT_13_addr", false,-1, 4,0);
        tracep->declQuad(c+112,"riscv_soc core commit regfile_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_14_en", false,-1);
        tracep->declBus(c+913,"riscv_soc core commit regfile_MPORT_14_addr", false,-1, 4,0);
        tracep->declQuad(c+114,"riscv_soc core commit regfile_MPORT_14_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_15_en", false,-1);
        tracep->declBus(c+914,"riscv_soc core commit regfile_MPORT_15_addr", false,-1, 4,0);
        tracep->declQuad(c+116,"riscv_soc core commit regfile_MPORT_15_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_16_en", false,-1);
        tracep->declBus(c+915,"riscv_soc core commit regfile_MPORT_16_addr", false,-1, 4,0);
        tracep->declQuad(c+118,"riscv_soc core commit regfile_MPORT_16_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_17_en", false,-1);
        tracep->declBus(c+916,"riscv_soc core commit regfile_MPORT_17_addr", false,-1, 4,0);
        tracep->declQuad(c+120,"riscv_soc core commit regfile_MPORT_17_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_18_en", false,-1);
        tracep->declBus(c+917,"riscv_soc core commit regfile_MPORT_18_addr", false,-1, 4,0);
        tracep->declQuad(c+122,"riscv_soc core commit regfile_MPORT_18_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_19_en", false,-1);
        tracep->declBus(c+918,"riscv_soc core commit regfile_MPORT_19_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"riscv_soc core commit regfile_MPORT_19_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_20_en", false,-1);
        tracep->declBus(c+919,"riscv_soc core commit regfile_MPORT_20_addr", false,-1, 4,0);
        tracep->declQuad(c+126,"riscv_soc core commit regfile_MPORT_20_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_21_en", false,-1);
        tracep->declBus(c+920,"riscv_soc core commit regfile_MPORT_21_addr", false,-1, 4,0);
        tracep->declQuad(c+128,"riscv_soc core commit regfile_MPORT_21_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_22_en", false,-1);
        tracep->declBus(c+921,"riscv_soc core commit regfile_MPORT_22_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"riscv_soc core commit regfile_MPORT_22_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_23_en", false,-1);
        tracep->declBus(c+922,"riscv_soc core commit regfile_MPORT_23_addr", false,-1, 4,0);
        tracep->declQuad(c+132,"riscv_soc core commit regfile_MPORT_23_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_24_en", false,-1);
        tracep->declBus(c+923,"riscv_soc core commit regfile_MPORT_24_addr", false,-1, 4,0);
        tracep->declQuad(c+134,"riscv_soc core commit regfile_MPORT_24_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_25_en", false,-1);
        tracep->declBus(c+924,"riscv_soc core commit regfile_MPORT_25_addr", false,-1, 4,0);
        tracep->declQuad(c+136,"riscv_soc core commit regfile_MPORT_25_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_26_en", false,-1);
        tracep->declBus(c+925,"riscv_soc core commit regfile_MPORT_26_addr", false,-1, 4,0);
        tracep->declQuad(c+138,"riscv_soc core commit regfile_MPORT_26_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_27_en", false,-1);
        tracep->declBus(c+926,"riscv_soc core commit regfile_MPORT_27_addr", false,-1, 4,0);
        tracep->declQuad(c+140,"riscv_soc core commit regfile_MPORT_27_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_28_en", false,-1);
        tracep->declBus(c+927,"riscv_soc core commit regfile_MPORT_28_addr", false,-1, 4,0);
        tracep->declQuad(c+142,"riscv_soc core commit regfile_MPORT_28_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_29_en", false,-1);
        tracep->declBus(c+928,"riscv_soc core commit regfile_MPORT_29_addr", false,-1, 4,0);
        tracep->declQuad(c+144,"riscv_soc core commit regfile_MPORT_29_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_30_en", false,-1);
        tracep->declBus(c+929,"riscv_soc core commit regfile_MPORT_30_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"riscv_soc core commit regfile_MPORT_30_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_31_en", false,-1);
        tracep->declBus(c+930,"riscv_soc core commit regfile_MPORT_31_addr", false,-1, 4,0);
        tracep->declQuad(c+148,"riscv_soc core commit regfile_MPORT_31_data", false,-1, 63,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_32_en", false,-1);
        tracep->declBus(c+931,"riscv_soc core commit regfile_MPORT_32_addr", false,-1, 4,0);
        tracep->declQuad(c+150,"riscv_soc core commit regfile_MPORT_32_data", false,-1, 63,0);
        tracep->declQuad(c+254,"riscv_soc core commit regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+253,"riscv_soc core commit regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+899,"riscv_soc core commit regfile_MPORT_mask", false,-1);
        tracep->declBit(c+252,"riscv_soc core commit regfile_MPORT_en", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit difftest_commit", false,-1);
        tracep->declBus(c+89,"riscv_soc core commit difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+87,"riscv_soc core commit difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core commit inst_counter", false,-1, 63,0);
        tracep->declBit(c+84,"riscv_soc core commit difftest_irq", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit difftest_peripheral", false,-1);
        tracep->declBit(c+811,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+257,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+258,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+256,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+266,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+264,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+261,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+262,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+698,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+260,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+268,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+277,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+278,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+244,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+246,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+769,"riscv_soc core commit csr_reg irq", false,-1);
        tracep->declQuad(c+770,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+772,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+774,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+776,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+778,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+780,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+782,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+784,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+786,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+788,"riscv_soc core commit csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+811,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+812,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+212,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+174,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+181,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+215,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+243,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+242,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+243,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+790,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+792,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+215,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+213,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+794,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+795,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+796,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+811,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+812,"riscv_soc axi_ram reset", false,-1);
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
        tracep->declBit(c+811,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+797,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+799,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+801,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+803,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+804,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+806,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+807,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+799,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+808,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+809,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+810,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+811,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+797,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+799,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+801,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+803,"riscv_soc axi_ram mem wen", false,-1);
        tracep->declBit(c+811,"riscv_soc sram0 clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0 io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram0 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0 io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0 io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram0 sram_CLK", false,-1);
        tracep->declArray(c+27,"riscv_soc sram0 sram_Q", false,-1, 127,0);
        tracep->declBit(c+932,"riscv_soc sram0 sram_CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram0 sram_WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram0 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram0 sram_A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram0 sram_D", false,-1, 127,0);
        tracep->declBus(c+933,"riscv_soc sram0 sram Bits", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc sram0 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+935,"riscv_soc sram0 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+933,"riscv_soc sram0 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+27,"riscv_soc sram0 sram Q", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram0 sram CLK", false,-1);
        tracep->declBit(c+932,"riscv_soc sram0 sram CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram0 sram WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram0 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram0 sram A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram0 sram D", false,-1, 127,0);
        tracep->declBit(c+899,"riscv_soc sram0 sram cen", false,-1);
        tracep->declBit(c+322,"riscv_soc sram0 sram wen", false,-1);
        tracep->declArray(c+936,"riscv_soc sram0 sram bwen", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram1 clock", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1 io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1 io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram1 sram_CLK", false,-1);
        tracep->declArray(c+36,"riscv_soc sram1 sram_Q", false,-1, 127,0);
        tracep->declBit(c+932,"riscv_soc sram1 sram_CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram1 sram_WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram1 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc sram1 sram_A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram1 sram_D", false,-1, 127,0);
        tracep->declBus(c+933,"riscv_soc sram1 sram Bits", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc sram1 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+935,"riscv_soc sram1 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+933,"riscv_soc sram1 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+36,"riscv_soc sram1 sram Q", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram1 sram CLK", false,-1);
        tracep->declBit(c+932,"riscv_soc sram1 sram CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram1 sram WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram1 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc sram1 sram A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram1 sram D", false,-1, 127,0);
        tracep->declBit(c+899,"riscv_soc sram1 sram cen", false,-1);
        tracep->declBit(c+322,"riscv_soc sram1 sram wen", false,-1);
        tracep->declArray(c+936,"riscv_soc sram1 sram bwen", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram2 clock", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2 io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2 io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram2 sram_CLK", false,-1);
        tracep->declArray(c+42,"riscv_soc sram2 sram_Q", false,-1, 127,0);
        tracep->declBit(c+932,"riscv_soc sram2 sram_CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram2 sram_WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram2 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc sram2 sram_A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram2 sram_D", false,-1, 127,0);
        tracep->declBus(c+933,"riscv_soc sram2 sram Bits", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc sram2 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+935,"riscv_soc sram2 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+933,"riscv_soc sram2 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+42,"riscv_soc sram2 sram Q", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram2 sram CLK", false,-1);
        tracep->declBit(c+932,"riscv_soc sram2 sram CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram2 sram WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram2 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc sram2 sram A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram2 sram D", false,-1, 127,0);
        tracep->declBit(c+899,"riscv_soc sram2 sram cen", false,-1);
        tracep->declBit(c+323,"riscv_soc sram2 sram wen", false,-1);
        tracep->declArray(c+936,"riscv_soc sram2 sram bwen", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram3 clock", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3 io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3 io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram3 sram_CLK", false,-1);
        tracep->declArray(c+47,"riscv_soc sram3 sram_Q", false,-1, 127,0);
        tracep->declBit(c+932,"riscv_soc sram3 sram_CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram3 sram_WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram3 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc sram3 sram_A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram3 sram_D", false,-1, 127,0);
        tracep->declBus(c+933,"riscv_soc sram3 sram Bits", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc sram3 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+935,"riscv_soc sram3 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+933,"riscv_soc sram3 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+47,"riscv_soc sram3 sram Q", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram3 sram CLK", false,-1);
        tracep->declBit(c+932,"riscv_soc sram3 sram CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram3 sram WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram3 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc sram3 sram A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram3 sram D", false,-1, 127,0);
        tracep->declBit(c+899,"riscv_soc sram3 sram cen", false,-1);
        tracep->declBit(c+323,"riscv_soc sram3 sram wen", false,-1);
        tracep->declArray(c+936,"riscv_soc sram3 sram bwen", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram4 clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4 io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4 io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram4 sram_CLK", false,-1);
        tracep->declArray(c+61,"riscv_soc sram4 sram_Q", false,-1, 127,0);
        tracep->declBit(c+932,"riscv_soc sram4 sram_CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram4 sram_WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram4 sram_A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram4 sram_D", false,-1, 127,0);
        tracep->declBus(c+933,"riscv_soc sram4 sram Bits", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc sram4 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+935,"riscv_soc sram4 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+933,"riscv_soc sram4 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+61,"riscv_soc sram4 sram Q", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram4 sram CLK", false,-1);
        tracep->declBit(c+932,"riscv_soc sram4 sram CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram4 sram WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram4 sram A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram4 sram D", false,-1, 127,0);
        tracep->declBit(c+899,"riscv_soc sram4 sram cen", false,-1);
        tracep->declBit(c+383,"riscv_soc sram4 sram wen", false,-1);
        tracep->declArray(c+375,"riscv_soc sram4 sram bwen", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram5 clock", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5 io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram5 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5 io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5 io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram5 sram_CLK", false,-1);
        tracep->declArray(c+70,"riscv_soc sram5 sram_Q", false,-1, 127,0);
        tracep->declBit(c+932,"riscv_soc sram5 sram_CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram5 sram_WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram5 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc sram5 sram_A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram5 sram_D", false,-1, 127,0);
        tracep->declBus(c+933,"riscv_soc sram5 sram Bits", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc sram5 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+935,"riscv_soc sram5 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+933,"riscv_soc sram5 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+70,"riscv_soc sram5 sram Q", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram5 sram CLK", false,-1);
        tracep->declBit(c+932,"riscv_soc sram5 sram CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram5 sram WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram5 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc sram5 sram A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram5 sram D", false,-1, 127,0);
        tracep->declBit(c+899,"riscv_soc sram5 sram cen", false,-1);
        tracep->declBit(c+383,"riscv_soc sram5 sram wen", false,-1);
        tracep->declArray(c+936,"riscv_soc sram5 sram bwen", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram6 clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram6 io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram6 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6 io_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc sram6 io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram6 sram_CLK", false,-1);
        tracep->declArray(c+75,"riscv_soc sram6 sram_Q", false,-1, 127,0);
        tracep->declBit(c+932,"riscv_soc sram6 sram_CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram6 sram_WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram6 sram_A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram6 sram_D", false,-1, 127,0);
        tracep->declBus(c+933,"riscv_soc sram6 sram Bits", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc sram6 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+935,"riscv_soc sram6 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+933,"riscv_soc sram6 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+75,"riscv_soc sram6 sram Q", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram6 sram CLK", false,-1);
        tracep->declBit(c+932,"riscv_soc sram6 sram CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram6 sram WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram6 sram A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram6 sram D", false,-1, 127,0);
        tracep->declBit(c+899,"riscv_soc sram6 sram cen", false,-1);
        tracep->declBit(c+392,"riscv_soc sram6 sram wen", false,-1);
        tracep->declArray(c+375,"riscv_soc sram6 sram bwen", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram7 clock", false,-1);
        tracep->declBus(c+79,"riscv_soc sram7 io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram7 io_wen", false,-1);
        tracep->declArray(c+895,"riscv_soc sram7 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7 io_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc sram7 io_rdata", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram7 sram_CLK", false,-1);
        tracep->declArray(c+80,"riscv_soc sram7 sram_Q", false,-1, 127,0);
        tracep->declBit(c+932,"riscv_soc sram7 sram_CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram7 sram_WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram7 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc sram7 sram_A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram7 sram_D", false,-1, 127,0);
        tracep->declBus(c+933,"riscv_soc sram7 sram Bits", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc sram7 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+935,"riscv_soc sram7 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+933,"riscv_soc sram7 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+80,"riscv_soc sram7 sram Q", false,-1, 127,0);
        tracep->declBit(c+811,"riscv_soc sram7 sram CLK", false,-1);
        tracep->declBit(c+932,"riscv_soc sram7 sram CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram7 sram WEN", false,-1);
        tracep->declArray(c+895,"riscv_soc sram7 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc sram7 sram A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram7 sram D", false,-1, 127,0);
        tracep->declBit(c+899,"riscv_soc sram7 sram cen", false,-1);
        tracep->declBit(c+392,"riscv_soc sram7 sram wen", false,-1);
        tracep->declArray(c+936,"riscv_soc sram7 sram bwen", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp686;
    VlWide<4>/*127:0*/ __Vtemp687;
    VlWide<4>/*127:0*/ __Vtemp688;
    VlWide<4>/*127:0*/ __Vtemp689;
    VlWide<4>/*127:0*/ __Vtemp690;
    VlWide<4>/*127:0*/ __Vtemp691;
    VlWide<4>/*127:0*/ __Vtemp692;
    VlWide<4>/*127:0*/ __Vtemp693;
    VlWide<4>/*127:0*/ __Vtemp694;
    VlWide<4>/*127:0*/ __Vtemp695;
    VlWide<4>/*127:0*/ __Vtemp696;
    VlWide<4>/*127:0*/ __Vtemp698;
    VlWide<4>/*127:0*/ __Vtemp699;
    VlWide<4>/*127:0*/ __Vtemp702;
    VlWide<4>/*127:0*/ __Vtemp703;
    VlWide<4>/*127:0*/ __Vtemp704;
    VlWide<3>/*95:0*/ __Vtemp705;
    VlWide<3>/*95:0*/ __Vtemp707;
    VlWide<3>/*95:0*/ __Vtemp708;
    VlWide<3>/*95:0*/ __Vtemp709;
    VlWide<3>/*95:0*/ __Vtemp710;
    VlWide<3>/*95:0*/ __Vtemp713;
    VlWide<3>/*95:0*/ __Vtemp714;
    VlWide<3>/*95:0*/ __Vtemp715;
    VlWide<5>/*159:0*/ __Vtemp727;
    VlWide<5>/*159:0*/ __Vtemp731;
    VlWide<3>/*95:0*/ __Vtemp733;
    VlWide<5>/*159:0*/ __Vtemp735;
    VlWide<5>/*159:0*/ __Vtemp736;
    VlWide<5>/*159:0*/ __Vtemp737;
    VlWide<5>/*159:0*/ __Vtemp738;
    VlWide<5>/*159:0*/ __Vtemp739;
    VlWide<5>/*159:0*/ __Vtemp741;
    VlWide<5>/*159:0*/ __Vtemp742;
    VlWide<5>/*159:0*/ __Vtemp743;
    VlWide<5>/*159:0*/ __Vtemp744;
    VlWide<5>/*159:0*/ __Vtemp745;
    VlWide<5>/*159:0*/ __Vtemp747;
    VlWide<5>/*159:0*/ __Vtemp748;
    VlWide<5>/*159:0*/ __Vtemp749;
    VlWide<5>/*159:0*/ __Vtemp757;
    VlWide<5>/*159:0*/ __Vtemp758;
    VlWide<5>/*159:0*/ __Vtemp766;
    VlWide<4>/*127:0*/ __Vtemp767;
    VlWide<4>/*127:0*/ __Vtemp768;
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
        tracep->fullWData(oldp+27,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q),128);
        tracep->fullCData(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp686, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        tracep->fullWData(oldp+32,(__Vtemp686),128);
        tracep->fullWData(oldp+36,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q),128);
        tracep->fullCData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
        tracep->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        tracep->fullWData(oldp+42,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q),128);
        tracep->fullCData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+47,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q),128);
        tracep->fullCData(oldp+51,((0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                                              : (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                         >> 4U))))),6);
        tracep->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp687[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp687[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp687[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp687[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+53,(__Vtemp687),128);
        tracep->fullWData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+61,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q),128);
        tracep->fullCData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp688, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+66,(__Vtemp688),128);
        tracep->fullWData(oldp+70,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q),128);
        tracep->fullBit(oldp+74,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+75,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q),128);
        tracep->fullCData(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+80,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q),128);
        tracep->fullBit(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        tracep->fullBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        tracep->fullBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        tracep->fullQData(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        tracep->fullIData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        tracep->fullQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [1U]),64);
        tracep->fullQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [2U]),64);
        tracep->fullQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [3U]),64);
        tracep->fullQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [4U]),64);
        tracep->fullQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [5U]),64);
        tracep->fullQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [6U]),64);
        tracep->fullQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [7U]),64);
        tracep->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [8U]),64);
        tracep->fullQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [9U]),64);
        tracep->fullQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xaU]),64);
        tracep->fullQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xbU]),64);
        tracep->fullQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xcU]),64);
        tracep->fullQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xdU]),64);
        tracep->fullQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xeU]),64);
        tracep->fullQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0xfU]),64);
        tracep->fullQData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x10U]),64);
        tracep->fullQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x11U]),64);
        tracep->fullQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x12U]),64);
        tracep->fullQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x13U]),64);
        tracep->fullQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x14U]),64);
        tracep->fullQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x15U]),64);
        tracep->fullQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x16U]),64);
        tracep->fullQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x17U]),64);
        tracep->fullQData(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x18U]),64);
        tracep->fullQData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x19U]),64);
        tracep->fullQData(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1aU]),64);
        tracep->fullQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1bU]),64);
        tracep->fullQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1cU]),64);
        tracep->fullQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1dU]),64);
        tracep->fullQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1eU]),64);
        tracep->fullQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0x1fU]),64);
        tracep->fullQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        tracep->fullQData(oldp+154,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
        tracep->fullBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
        tracep->fullBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
        tracep->fullBit(oldp+158,(((0ULL != ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                             >> 0x1fU)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        tracep->fullQData(oldp+159,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),64);
        tracep->fullBit(oldp+161,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        tracep->fullBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        tracep->fullQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        tracep->fullQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
        tracep->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        tracep->fullQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        tracep->fullQData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+178,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        tracep->fullCData(oldp+180,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        tracep->fullBit(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        tracep->fullBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+183,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+191,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+201,(((0ULL != ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        tracep->fullBit(oldp+203,(((0ULL != ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullQData(oldp+204,(((0ULL != ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                               >> 0x1fU))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
        tracep->fullQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        tracep->fullBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        tracep->fullQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+211,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
        tracep->fullBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        tracep->fullBit(oldp+220,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
        tracep->fullIData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data),32);
        tracep->fullQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                                    [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
        tracep->fullBit(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullCData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullSData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+242,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
        tracep->fullQData(oldp+250,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        tracep->fullCData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        tracep->fullBit(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        tracep->fullSData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        tracep->fullBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        tracep->fullCData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        tracep->fullIData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        tracep->fullBit(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        tracep->fullCData(oldp+271,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+272,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
        tracep->fullCData(oldp+274,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+275,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
        tracep->fullSData(oldp+277,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+278,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                        >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        tracep->fullQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        tracep->fullCData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        tracep->fullBit(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        tracep->fullBit(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        tracep->fullBit(oldp+286,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullWData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        tracep->fullWData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
        VL_EXTEND_WQ(128,54, __Vtemp689, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp690, (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp691[0U] = __Vtemp689[0U];
            __Vtemp691[1U] = __Vtemp689[1U];
            __Vtemp691[2U] = __Vtemp689[2U];
            __Vtemp691[3U] = __Vtemp689[3U];
        } else {
            __Vtemp691[0U] = __Vtemp690[0U];
            __Vtemp691[1U] = __Vtemp690[1U];
            __Vtemp691[2U] = __Vtemp690[2U];
            __Vtemp691[3U] = __Vtemp690[3U];
        }
        tracep->fullWData(oldp+295,(__Vtemp691),128);
        VL_EXTEND_WQ(128,54, __Vtemp692, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp693, (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
            __Vtemp694[0U] = __Vtemp692[0U];
            __Vtemp694[1U] = __Vtemp692[1U];
            __Vtemp694[2U] = __Vtemp692[2U];
            __Vtemp694[3U] = __Vtemp692[3U];
        } else {
            __Vtemp694[0U] = __Vtemp693[0U];
            __Vtemp694[1U] = __Vtemp693[1U];
            __Vtemp694[2U] = __Vtemp693[2U];
            __Vtemp694[3U] = __Vtemp693[3U];
        }
        tracep->fullWData(oldp+299,(__Vtemp694),128);
        tracep->fullBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        tracep->fullBit(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
        tracep->fullBit(oldp+305,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        tracep->fullQData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        tracep->fullQData(oldp+309,(((1U & (IData)(
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
        tracep->fullBit(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        tracep->fullQData(oldp+312,(((1U & (IData)(
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
        tracep->fullBit(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        tracep->fullCData(oldp+315,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullBit(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        tracep->fullBit(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        tracep->fullBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        tracep->fullQData(oldp+324,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        tracep->fullBit(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        tracep->fullCData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        tracep->fullBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        tracep->fullBit(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        tracep->fullBit(oldp+331,((((0ULL != ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullBit(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        tracep->fullBit(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        tracep->fullQData(oldp+334,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+336,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+337,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        VL_EXTEND_WQ(128,54, __Vtemp695, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp696, (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U])))));
        tracep->fullQData(oldp+338,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                           ? 
                                                          __Vtemp695[1U]
                                                           : 
                                                          __Vtemp696[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                            ? 
                                                           __Vtemp695[0U]
                                                            : 
                                                           __Vtemp696[0U])))))),54);
        VL_EXTEND_WQ(128,54, __Vtemp698, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp699, (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U])))));
        tracep->fullQData(oldp+340,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                           ? 
                                                          __Vtemp698[1U]
                                                           : 
                                                          __Vtemp699[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                            ? 
                                                           __Vtemp698[0U]
                                                            : 
                                                           __Vtemp699[0U])))))),54);
        tracep->fullBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        tracep->fullBit(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        tracep->fullQData(oldp+344,((0xfffffffffffffff0ULL 
                                     & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        tracep->fullQData(oldp+346,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+348,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        tracep->fullQData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        tracep->fullBit(oldp+351,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        tracep->fullQData(oldp+352,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullQData(oldp+354,((~ (1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
        tracep->fullCData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        tracep->fullQData(oldp+357,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+359,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+360,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        tracep->fullCData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+373,((((QData)((IData)(
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
        tracep->fullWData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+388,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+390,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+397,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U]))))),54);
        tracep->fullQData(oldp+399,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U]))))),54);
        tracep->fullBit(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+403,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+404,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+405,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+406,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+407,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+409,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+411,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+413,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullBit(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+422,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+427,((0ULL == ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+428,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+430,(((((0ULL != ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                               >> 0x1fU))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid)
                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)) 
                                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
        tracep->fullIData(oldp+431,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                                    >> 2U)))
                                      ? (IData)((((0ULL 
                                                   != 
                                                   ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                                    >> 0x1fU))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                                   : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
                                                 >> 0x20U))
                                      : (IData)(((0ULL 
                                                  != 
                                                  ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0)) 
                                                   >> 0x1fU))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                                  : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))),32);
        tracep->fullIData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),32);
        tracep->fullBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullQData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
        tracep->fullQData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
        tracep->fullQData(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
        tracep->fullQData(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
        tracep->fullCData(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullBit(oldp+446,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size))));
        tracep->fullIData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
        tracep->fullIData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
        tracep->fullIData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
        tracep->fullIData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
        tracep->fullBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullCData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        tracep->fullBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        tracep->fullBit(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        tracep->fullCData(oldp+458,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                            + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                           - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        tracep->fullBit(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullQData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
        tracep->fullQData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+464,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
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
        tracep->fullBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
        tracep->fullQData(oldp+467,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        tracep->fullQData(oldp+470,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
        tracep->fullQData(oldp+472,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
        tracep->fullQData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullBit(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        tracep->fullQData(oldp+479,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        tracep->fullBit(oldp+481,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
        tracep->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        tracep->fullQData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        tracep->fullBit(oldp+486,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                   & ((0U != (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        tracep->fullQData(oldp+487,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        tracep->fullSData(oldp+489,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        tracep->fullCData(oldp+491,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),6);
        tracep->fullBit(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        tracep->fullBit(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        tracep->fullCData(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullBit(oldp+495,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        tracep->fullBit(oldp+496,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+497,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+498,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 3U))));
        tracep->fullCData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        tracep->fullBit(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        tracep->fullBit(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        tracep->fullBit(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+513,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        tracep->fullQData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        tracep->fullBit(oldp+520,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U)))));
        tracep->fullQData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+523,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullBit(oldp+524,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullQData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullQData(oldp+527,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        tracep->fullWData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        tracep->fullBit(oldp+532,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        tracep->fullBit(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp702, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp703, __Vtemp702, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp704[0U] = __Vtemp703[0U];
        __Vtemp704[1U] = __Vtemp703[1U];
        __Vtemp704[2U] = __Vtemp703[2U];
        __Vtemp704[3U] = (0x7fffffffU & __Vtemp703[3U]);
        tracep->fullWData(oldp+535,(__Vtemp704),127);
        tracep->fullQData(oldp+539,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                     >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+541,(VL_SHIFTRS_QQI(64,64,6, 
                                                   ((1U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+543,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullCData(oldp+545,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U))),3);
        tracep->fullQData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
        tracep->fullBit(oldp+548,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        tracep->fullBit(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        tracep->fullQData(oldp+550,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp705[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp705[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                  >> 0x20U));
        __Vtemp705[2U] = 1U;
        tracep->fullWData(oldp+552,(__Vtemp705),65);
        tracep->fullWData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        tracep->fullBit(oldp+560,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+561,((((QData)((IData)(
                                                      ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
        tracep->fullQData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullCData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        tracep->fullQData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        tracep->fullQData(oldp+573,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
        tracep->fullQData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        tracep->fullQData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        tracep->fullBit(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        tracep->fullWData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        tracep->fullBit(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        tracep->fullBit(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        tracep->fullQData(oldp+587,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullBit(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        tracep->fullQData(oldp+592,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        tracep->fullBit(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullBit(oldp+596,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullWData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp707[0U] = 1U;
        __Vtemp707[1U] = 0U;
        __Vtemp707[2U] = 0U;
        __Vtemp708[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp708[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp708[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp709, __Vtemp707, __Vtemp708);
        __Vtemp710[0U] = __Vtemp709[0U];
        __Vtemp710[1U] = __Vtemp709[1U];
        __Vtemp710[2U] = (1U & __Vtemp709[2U]);
        tracep->fullWData(oldp+618,(__Vtemp710),65);
        tracep->fullCData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+629,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp713[0U] = 1U;
        __Vtemp713[1U] = 0U;
        __Vtemp713[2U] = 0U;
        __Vtemp714[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp714[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp714[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp715, __Vtemp713, __Vtemp714);
        tracep->fullBit(oldp+630,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ __Vtemp715[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp715[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ (1U 
                                                & __Vtemp715[2U]))))));
        tracep->fullBit(oldp+631,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullBit(oldp+633,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        tracep->fullBit(oldp+634,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                         >> 3U))));
        tracep->fullQData(oldp+635,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullQData(oldp+637,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+639,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))));
        tracep->fullBit(oldp+640,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U))));
        VL_EXTEND_WQ(130,64, __Vtemp727, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp731[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            __Vtemp731[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp731[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp731[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp731[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 3U : 0U);
        } else {
            __Vtemp731[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                               : __Vtemp727[0U]);
            __Vtemp731[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                          >> 0x20U))
                               : __Vtemp727[1U]);
            __Vtemp731[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 0xffffffffU : 0U)
                               : __Vtemp727[2U]);
            __Vtemp731[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 0xffffffffU : 0U)
                               : __Vtemp727[3U]);
            __Vtemp731[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 3U : 0U) : __Vtemp727[4U]);
        }
        tracep->fullWData(oldp+641,(__Vtemp731),130);
        tracep->fullWData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp733[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                          << 1U);
        __Vtemp733[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                        << 1U));
        __Vtemp733[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                 << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                             >> 0x1fU) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                               << 1U)));
        tracep->fullWData(oldp+649,(__Vtemp733),67);
        tracep->fullCData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        __Vtemp735[0U] = 1U;
        __Vtemp735[1U] = 0U;
        __Vtemp735[2U] = 0U;
        __Vtemp735[3U] = 0U;
        __Vtemp735[4U] = 0U;
        __Vtemp736[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp736[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp736[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp736[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp736[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp737, __Vtemp735, __Vtemp736);
        __Vtemp738[0U] = __Vtemp737[0U];
        __Vtemp738[1U] = __Vtemp737[1U];
        __Vtemp738[2U] = __Vtemp737[2U];
        __Vtemp738[3U] = __Vtemp737[3U];
        __Vtemp738[4U] = (3U & __Vtemp737[4U]);
        VL_EXTEND_WW(131,130, __Vtemp739, __Vtemp738);
        __Vtemp741[0U] = 1U;
        __Vtemp741[1U] = 0U;
        __Vtemp741[2U] = 0U;
        __Vtemp741[3U] = 0U;
        __Vtemp741[4U] = 0U;
        __Vtemp742[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp742[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp742[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp742[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp742[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp743, __Vtemp741, __Vtemp742);
        __Vtemp744[0U] = __Vtemp743[0U];
        __Vtemp744[1U] = __Vtemp743[1U];
        __Vtemp744[2U] = __Vtemp743[2U];
        __Vtemp744[3U] = __Vtemp743[3U];
        __Vtemp744[4U] = (3U & __Vtemp743[4U]);
        VL_EXTEND_WW(131,130, __Vtemp745, __Vtemp744);
        __Vtemp747[0U] = 1U;
        __Vtemp747[1U] = 0U;
        __Vtemp747[2U] = 0U;
        __Vtemp747[3U] = 0U;
        __Vtemp747[4U] = 0U;
        __Vtemp748[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp748[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp748[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp748[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp748[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp749, __Vtemp747, __Vtemp748);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp757[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp757[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp757[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp757[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp757[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp757[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                               : 0U);
            __Vtemp757[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                               : 0U);
            __Vtemp757[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                               : 0U);
            __Vtemp757[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                               : 0U);
            __Vtemp757[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                               : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp758, __Vtemp757);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp766[0U] = __Vtemp739[0U];
            __Vtemp766[1U] = __Vtemp739[1U];
            __Vtemp766[2U] = __Vtemp739[2U];
            __Vtemp766[3U] = __Vtemp739[3U];
            __Vtemp766[4U] = __Vtemp739[4U];
        } else {
            __Vtemp766[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp745[0U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   (__Vtemp749[0U] 
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
                                                    __Vtemp758[0U])));
            __Vtemp766[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp745[1U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp749[0U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp749[1U] 
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
                                                    __Vtemp758[1U])));
            __Vtemp766[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp745[2U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp749[1U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp749[2U] 
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
                                                    __Vtemp758[2U])));
            __Vtemp766[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp745[3U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp749[2U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp749[3U] 
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
                                                    __Vtemp758[3U])));
            __Vtemp766[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp745[4U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp749[3U] 
                                                     >> 0x1fU) 
                                                    | (6U 
                                                       & (__Vtemp749[4U] 
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
                                                    __Vtemp758[4U])));
        }
        tracep->fullWData(oldp+667,(__Vtemp766),131);
        tracep->fullCData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullBit(oldp+673,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+674,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        tracep->fullBit(oldp+675,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 4U))));
        tracep->fullQData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullQData(oldp+682,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullBit(oldp+684,((0x10U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+685,((0x18U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+686,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+687,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+688,(((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))) 
                                   | (8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
        tracep->fullCData(oldp+689,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),4);
        tracep->fullBit(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+691,(((0xffffffffffffff77ULL 
                                      & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                     | (QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                    >> 7U)))
                                                         ? 0x88U
                                                         : 0x80U))))),64);
        tracep->fullCData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullBit(oldp+694,(((0x33U == (0xfe00707fU 
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
        tracep->fullBit(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
        tracep->fullBit(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
        tracep->fullCData(oldp+697,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 7U))),5);
        tracep->fullCData(oldp+698,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[0]),64);
        tracep->fullQData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[1]),64);
        tracep->fullQData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[2]),64);
        tracep->fullQData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[3]),64);
        tracep->fullQData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[4]),64);
        tracep->fullQData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[5]),64);
        tracep->fullQData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[6]),64);
        tracep->fullQData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[7]),64);
        tracep->fullQData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[8]),64);
        tracep->fullQData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[9]),64);
        tracep->fullQData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[10]),64);
        tracep->fullQData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[11]),64);
        tracep->fullQData(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[12]),64);
        tracep->fullQData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[13]),64);
        tracep->fullQData(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[14]),64);
        tracep->fullQData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[15]),64);
        tracep->fullQData(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[16]),64);
        tracep->fullQData(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[17]),64);
        tracep->fullQData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[18]),64);
        tracep->fullQData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[19]),64);
        tracep->fullQData(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[20]),64);
        tracep->fullQData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[21]),64);
        tracep->fullQData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[22]),64);
        tracep->fullQData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[23]),64);
        tracep->fullQData(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[24]),64);
        tracep->fullQData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[25]),64);
        tracep->fullQData(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[26]),64);
        tracep->fullQData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[27]),64);
        tracep->fullQData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[28]),64);
        tracep->fullQData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[29]),64);
        tracep->fullQData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[30]),64);
        tracep->fullQData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[31]),64);
        tracep->fullQData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0U]),64);
        tracep->fullBit(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+788,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+795,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullBit(oldp+796,((0x4000U == (0xffffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullQData(oldp+797,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                      ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                      : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+799,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+801,((((QData)((IData)(
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
        tracep->fullBit(oldp+803,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+804,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+806,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+807,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+808,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+809,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullIData(oldp+810,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullBit(oldp+811,(vlSelf->clock));
        tracep->fullBit(oldp+812,(vlSelf->reset));
        tracep->fullQData(oldp+813,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+815,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+817,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+819,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+821,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+823,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+825,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+827,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+829,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+831,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+833,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+835,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+837,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+839,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+841,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+843,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+845,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+847,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+849,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+851,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+853,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+855,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+857,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+859,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+861,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+863,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+865,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+867,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+869,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+871,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+873,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+875,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+877,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+879,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+880,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+881,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+883,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+884,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+886,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+888,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+890,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+892,(vlSelf->io_difftest_peripheral));
        tracep->fullQData(oldp+893,(0ULL),64);
        __Vtemp767[0U] = 0U;
        __Vtemp767[1U] = 0U;
        __Vtemp767[2U] = 0U;
        __Vtemp767[3U] = 0U;
        tracep->fullWData(oldp+895,(__Vtemp767),128);
        tracep->fullBit(oldp+899,(1U));
        tracep->fullCData(oldp+900,(0U),5);
        tracep->fullCData(oldp+901,(1U),5);
        tracep->fullCData(oldp+902,(2U),5);
        tracep->fullCData(oldp+903,(3U),5);
        tracep->fullCData(oldp+904,(4U),5);
        tracep->fullCData(oldp+905,(5U),5);
        tracep->fullCData(oldp+906,(6U),5);
        tracep->fullCData(oldp+907,(7U),5);
        tracep->fullCData(oldp+908,(8U),5);
        tracep->fullCData(oldp+909,(9U),5);
        tracep->fullCData(oldp+910,(0xaU),5);
        tracep->fullCData(oldp+911,(0xbU),5);
        tracep->fullCData(oldp+912,(0xcU),5);
        tracep->fullCData(oldp+913,(0xdU),5);
        tracep->fullCData(oldp+914,(0xeU),5);
        tracep->fullCData(oldp+915,(0xfU),5);
        tracep->fullCData(oldp+916,(0x10U),5);
        tracep->fullCData(oldp+917,(0x11U),5);
        tracep->fullCData(oldp+918,(0x12U),5);
        tracep->fullCData(oldp+919,(0x13U),5);
        tracep->fullCData(oldp+920,(0x14U),5);
        tracep->fullCData(oldp+921,(0x15U),5);
        tracep->fullCData(oldp+922,(0x16U),5);
        tracep->fullCData(oldp+923,(0x17U),5);
        tracep->fullCData(oldp+924,(0x18U),5);
        tracep->fullCData(oldp+925,(0x19U),5);
        tracep->fullCData(oldp+926,(0x1aU),5);
        tracep->fullCData(oldp+927,(0x1bU),5);
        tracep->fullCData(oldp+928,(0x1cU),5);
        tracep->fullCData(oldp+929,(0x1dU),5);
        tracep->fullCData(oldp+930,(0x1eU),5);
        tracep->fullCData(oldp+931,(0x1fU),5);
        tracep->fullBit(oldp+932,(0U));
        tracep->fullIData(oldp+933,(0x80U),32);
        tracep->fullIData(oldp+934,(0x40U),32);
        tracep->fullIData(oldp+935,(6U),32);
        __Vtemp768[0U] = 0xffffffffU;
        __Vtemp768[1U] = 0xffffffffU;
        __Vtemp768[2U] = 0xffffffffU;
        __Vtemp768[3U] = 0xffffffffU;
        tracep->fullWData(oldp+936,(__Vtemp768),128);
    }
}
