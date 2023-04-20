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
        tracep->declBit(c+738,"clock", false,-1);
        tracep->declBit(c+739,"reset", false,-1);
        tracep->declQuad(c+740,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+742,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+744,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+746,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+748,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+750,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+752,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+754,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+756,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+758,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+760,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+762,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+764,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+766,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+768,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+770,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+772,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+774,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+776,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+778,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+780,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+782,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+784,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+786,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+788,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+790,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+792,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+794,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+796,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+798,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+800,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+802,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+804,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+806,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+807,"io_difftest_commit", false,-1);
        tracep->declQuad(c+808,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+810,"io_difftest_irq", false,-1);
        tracep->declQuad(c+811,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+813,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+815,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+817,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+819,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+738,"riscv_soc clock", false,-1);
        tracep->declBit(c+739,"riscv_soc reset", false,-1);
        tracep->declQuad(c+740,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+742,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+744,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+746,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+748,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+750,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+752,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+754,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+756,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+758,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+760,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+762,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+764,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+766,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+768,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+770,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+772,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+774,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+776,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+778,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+780,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+782,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+784,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+786,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+788,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+790,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+792,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+794,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+796,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+798,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+800,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+802,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+804,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+806,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+807,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+808,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+810,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+811,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+813,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+815,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+817,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+819,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+738,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core_reset", false,-1);
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
        tracep->declQuad(c+820,"riscv_soc core__WIRE_0", false,-1, 63,0);
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
        tracep->declBit(c+738,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc axi_ram_reset", false,-1);
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
        tracep->declBit(c+738,"riscv_soc sram0_clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0_io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram0_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0_io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0_io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram1_clock", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1_io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1_io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram2_clock", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2_io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram3_clock", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3_io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3_io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3_io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram4_clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4_io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4_io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram5_clock", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5_io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5_io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram5_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5_io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5_io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram6_clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram6_io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram6_io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6_io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6_io_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc sram6_io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram7_clock", false,-1);
        tracep->declBus(c+79,"riscv_soc sram7_io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram7_io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram7_io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7_io_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc sram7_io_rdata", false,-1, 127,0);
        tracep->declBus(c+89,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+154,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core reset", false,-1);
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
        tracep->declBit(c+738,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core i_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+159,"riscv_soc core i_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core i_cache_io_cpu_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core i_cache_io_is_fence_i", false,-1);
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
        tracep->declBit(c+163,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+166,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+167,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+738,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+168,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+171,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+177,"riscv_soc core d_cache_io_cpu_ready", false,-1);
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
        tracep->declBit(c+178,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+179,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+182,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+185,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+186,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+187,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+191,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+738,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+163,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+166,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+167,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+178,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+179,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+182,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+186,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+187,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+191,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+195,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+826,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declQuad(c+157,"riscv_soc core cross_bar_1_io_fetch_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+196,"riscv_soc core cross_bar_1_io_fetch_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core cross_bar_1_io_fetch_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+200,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+156,"riscv_soc core cross_bar_1_io_ICache_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core cross_bar_1_io_ICache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_1_io_ICache_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1_io_ICache_ready", false,-1);
        tracep->declBit(c+168,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+177,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+195,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+204,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+206,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+738,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core fetch_reset", false,-1);
        tracep->declQuad(c+207,"riscv_soc core fetch_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core fetch_io_flush", false,-1);
        tracep->declBit(c+826,"riscv_soc core fetch_io_bus_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core fetch_io_bus_bits_pc_0", false,-1, 63,0);
        tracep->declQuad(c+196,"riscv_soc core fetch_io_bus_bits_inst", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core fetch_io_bus_ready", false,-1);
        tracep->declBit(c+210,"riscv_soc core fetch_io_put_pc_ready", false,-1);
        tracep->declBit(c+211,"riscv_soc core fetch_io_put_pc_valid", false,-1);
        tracep->declBus(c+212,"riscv_soc core fetch_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+213,"riscv_soc core fetch_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute_reset", false,-1);
        tracep->declBit(c+210,"riscv_soc core execute_io_op_datas_ready", false,-1);
        tracep->declBit(c+215,"riscv_soc core execute_io_op_datas_valid", false,-1);
        tracep->declBus(c+216,"riscv_soc core execute_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+217,"riscv_soc core execute_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+218,"riscv_soc core execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core execute_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+225,"riscv_soc core execute_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+227,"riscv_soc core execute_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+228,"riscv_soc core execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+229,"riscv_soc core execute_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBus(c+230,"riscv_soc core execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+231,"riscv_soc core execute_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+233,"riscv_soc core execute_io_irq_time_irq", false,-1);
        tracep->declBit(c+234,"riscv_soc core execute_io_irq_soft_irq", false,-1);
        tracep->declQuad(c+235,"riscv_soc core execute_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+237,"riscv_soc core execute_io_mie", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core execute_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+241,"riscv_soc core execute_io_mtvec", false,-1, 63,0);
        tracep->declBit(c+243,"riscv_soc core execute_io_wb_valid", false,-1);
        tracep->declBus(c+244,"riscv_soc core execute_io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core execute_io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+247,"riscv_soc core execute_io_csr_valid", false,-1);
        tracep->declBus(c+248,"riscv_soc core execute_io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core execute_io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core execute_io_csr_except_is_except", false,-1);
        tracep->declBit(c+252,"riscv_soc core execute_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+253,"riscv_soc core execute_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+254,"riscv_soc core execute_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+255,"riscv_soc core execute_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute_io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core execute_io_commit", false,-1);
        tracep->declBus(c+260,"riscv_soc core execute_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+261,"riscv_soc core execute_io_difftest_peripheral", false,-1);
        tracep->declQuad(c+207,"riscv_soc core execute_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core execute_io_flush", false,-1);
        tracep->declBit(c+162,"riscv_soc core execute_io_fence_i", false,-1);
        tracep->declBit(c+199,"riscv_soc core execute_io_bus_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core execute_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+200,"riscv_soc core execute_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core execute_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core execute_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core execute_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+202,"riscv_soc core execute_io_bus_ready", false,-1);
        tracep->declBit(c+738,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core decode_reset", false,-1);
        tracep->declBit(c+210,"riscv_soc core decode_io_get_inst_ready", false,-1);
        tracep->declBit(c+211,"riscv_soc core decode_io_get_inst_valid", false,-1);
        tracep->declBus(c+212,"riscv_soc core decode_io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+213,"riscv_soc core decode_io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBus(c+262,"riscv_soc core decode_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"riscv_soc core decode_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+265,"riscv_soc core decode_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"riscv_soc core decode_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+268,"riscv_soc core decode_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+269,"riscv_soc core decode_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+210,"riscv_soc core decode_io_op_datas_ready", false,-1);
        tracep->declBit(c+215,"riscv_soc core decode_io_op_datas_valid", false,-1);
        tracep->declBus(c+216,"riscv_soc core decode_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+217,"riscv_soc core decode_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+218,"riscv_soc core decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core decode_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+225,"riscv_soc core decode_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+227,"riscv_soc core decode_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+228,"riscv_soc core decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+229,"riscv_soc core decode_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBus(c+230,"riscv_soc core decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+231,"riscv_soc core decode_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core decode_io_flush", false,-1);
        tracep->declBit(c+738,"riscv_soc core commit_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core commit_reset", false,-1);
        tracep->declBus(c+262,"riscv_soc core commit_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"riscv_soc core commit_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+265,"riscv_soc core commit_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"riscv_soc core commit_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+243,"riscv_soc core commit_io_normal_wb_valid", false,-1);
        tracep->declBus(c+244,"riscv_soc core commit_io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core commit_io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+268,"riscv_soc core commit_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+269,"riscv_soc core commit_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+247,"riscv_soc core commit_io_csr_wb_valid", false,-1);
        tracep->declBus(c+248,"riscv_soc core commit_io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core commit_io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core commit_io_csr_except_is_except", false,-1);
        tracep->declBit(c+252,"riscv_soc core commit_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+253,"riscv_soc core commit_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+254,"riscv_soc core commit_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+255,"riscv_soc core commit_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit_io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+241,"riscv_soc core commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core commit_io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+235,"riscv_soc core commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+237,"riscv_soc core commit_io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core commit_io_commit", false,-1);
        tracep->declBus(c+260,"riscv_soc core commit_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+261,"riscv_soc core commit_io_difftest_peripheral", false,-1);
        tracep->declBit(c+84,"riscv_soc core commit_difftest_irq_0", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit_difftest_peripheral_0", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit_difftest_commit_0", false,-1);
        tracep->declQuad(c+87,"riscv_soc core commit_difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+89,"riscv_soc core commit_difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+820,"riscv_soc core commit__WIRE_0_0", false,-1, 63,0);
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
        tracep->declBit(c+738,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+203,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+204,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+176,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+206,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+234,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+233,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+738,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+156,"riscv_soc core i_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core i_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+159,"riscv_soc core i_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core i_cache io_cpu_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core i_cache io_is_fence_i", false,-1);
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
        tracep->declBit(c+163,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+166,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+167,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+271,"riscv_soc core i_cache Tag", false,-1, 53,0);
        tracep->declBus(c+273,"riscv_soc core i_cache Index", false,-1, 5,0);
        tracep->declBus(c+274,"riscv_soc core i_cache Offset", false,-1, 3,0);
        tracep->declBus(c+275,"riscv_soc core i_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+276,"riscv_soc core i_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+278,"riscv_soc core i_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+279,"riscv_soc core i_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+161,"riscv_soc core i_cache reg_ready", false,-1);
        tracep->declQuad(c+159,"riscv_soc core i_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+280,"riscv_soc core i_cache reg_cache_write", false,-1);
        tracep->declArray(c+23,"riscv_soc core i_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+281,"riscv_soc core i_cache reg_chosen_tag", false,-1);
        tracep->declBit(c+282,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declQuad(c+283,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+285,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+287,"riscv_soc core i_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+289,"riscv_soc core i_cache is_sram2_write", false,-1);
        tracep->declQuad(c+290,"riscv_soc core i_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+164,"riscv_soc core i_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+163,"riscv_soc core i_cache reg_r_valid", false,-1);
        tracep->declQuad(c+292,"riscv_soc core i_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+294,"riscv_soc core i_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+296,"riscv_soc core i_cache hit_0", false,-1);
        tracep->declBit(c+297,"riscv_soc core i_cache hit_2", false,-1);
        tracep->declBit(c+298,"riscv_soc core i_cache tag_valid_0", false,-1);
        tracep->declBit(c+299,"riscv_soc core i_cache tag_valid_2", false,-1);
        tracep->declQuad(c+300,"riscv_soc core i_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+302,"riscv_soc core i_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+304,"riscv_soc core i_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+306,"riscv_soc core i_cache LRU_2", false,-1);
        tracep->declBit(c+307,"riscv_soc core i_cache reg_start_operation", false,-1);
        tracep->declBit(c+738,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+168,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+171,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+177,"riscv_soc core d_cache io_cpu_ready", false,-1);
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
        tracep->declBit(c+178,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+179,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+182,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+185,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+186,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+187,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+191,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+308,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+310,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+311,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+312,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+313,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+315,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+316,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+317,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+319,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+320,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+177,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+171,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+321,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+322,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+57,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+323,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+324,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+326,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+330,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+334,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+335,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+337,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+339,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+341,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+343,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+344,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+346,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+188,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+187,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+182,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+179,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+185,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+348,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+350,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+352,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+353,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+354,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+355,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+356,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+357,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+358,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+360,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+362,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+364,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+365,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+366,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+367,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+368,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+738,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+163,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+164,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+166,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+167,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+178,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+179,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+182,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+184,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+186,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+187,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+188,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+190,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+191,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+195,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+826,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+369,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+370,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+371,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+372,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+373,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+374,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+375,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+376,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+377,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declQuad(c+157,"riscv_soc core cross_bar_1 io_fetch_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+196,"riscv_soc core cross_bar_1 io_fetch_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core cross_bar_1 io_fetch_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+200,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+202,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+156,"riscv_soc core cross_bar_1 io_ICache_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core cross_bar_1 io_ICache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+159,"riscv_soc core cross_bar_1 io_ICache_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1 io_ICache_ready", false,-1);
        tracep->declBit(c+168,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+171,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+177,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+195,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+203,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+204,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+176,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+206,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+192,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+378,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+379,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+738,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core fetch reset", false,-1);
        tracep->declQuad(c+207,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+826,"riscv_soc core fetch io_bus_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core fetch io_bus_bits_pc_0", false,-1, 63,0);
        tracep->declQuad(c+196,"riscv_soc core fetch io_bus_bits_inst", false,-1, 63,0);
        tracep->declBit(c+198,"riscv_soc core fetch io_bus_ready", false,-1);
        tracep->declBit(c+210,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declBit(c+211,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+212,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+213,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core fetch ibuf_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core fetch ibuf_reset", false,-1);
        tracep->declBit(c+209,"riscv_soc core fetch ibuf_io_flush", false,-1);
        tracep->declBit(c+380,"riscv_soc core fetch ibuf_io_cache_buf_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core fetch ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+381,"riscv_soc core fetch ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+210,"riscv_soc core fetch ibuf_io_put_pc_ready", false,-1);
        tracep->declBit(c+211,"riscv_soc core fetch ibuf_io_put_pc_valid", false,-1);
        tracep->declBus(c+212,"riscv_soc core fetch ibuf_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+213,"riscv_soc core fetch ibuf_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+157,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declBit(c+382,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+383,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+209,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+380,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+157,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+381,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+210,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+211,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+212,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+213,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+385+i*2,"riscv_soc core fetch ibuf ibuf_pc", true,(i+0), 63,0);}}
        tracep->declBit(c+826,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_en", false,-1);
        tracep->declBus(c+393,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_addr", false,-1, 1,0);
        tracep->declQuad(c+213,"riscv_soc core fetch ibuf ibuf_pc_io_put_pc_bits_pc_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+157,"riscv_soc core fetch ibuf ibuf_pc_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+394,"riscv_soc core fetch ibuf ibuf_pc_MPORT_addr", false,-1, 1,0);
        tracep->declBit(c+826,"riscv_soc core fetch ibuf ibuf_pc_MPORT_mask", false,-1);
        tracep->declBit(c+395,"riscv_soc core fetch ibuf ibuf_pc_MPORT_en", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+396+i*1,"riscv_soc core fetch ibuf ibuf_inst", true,(i+0), 31,0);}}
        tracep->declBit(c+826,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_en", false,-1);
        tracep->declBus(c+393,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_addr", false,-1, 1,0);
        tracep->declBus(c+212,"riscv_soc core fetch ibuf ibuf_inst_io_put_pc_bits_inst_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+381,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+394,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_addr", false,-1, 1,0);
        tracep->declBit(c+826,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_mask", false,-1);
        tracep->declBit(c+395,"riscv_soc core fetch ibuf ibuf_inst_MPORT_1_en", false,-1);
        tracep->declBit(c+400,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+401,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+402,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+403,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+394,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+393,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBit(c+738,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+210,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+215,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+216,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+217,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+218,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+225,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+227,"riscv_soc core execute io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+228,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+229,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBus(c+230,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+231,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+233,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+234,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+235,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+237,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+241,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declBit(c+243,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+244,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+247,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+248,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+252,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+253,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+254,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+255,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core execute io_commit", false,-1);
        tracep->declBus(c+260,"riscv_soc core execute io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+261,"riscv_soc core execute io_difftest_peripheral", false,-1);
        tracep->declQuad(c+207,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+162,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+199,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+200,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBit(c+202,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+404,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBus(c+216,"riscv_soc core execute alu_exu_io_opType", false,-1, 2,0);
        tracep->declBus(c+217,"riscv_soc core execute alu_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+405,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+407,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+225,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+409,"riscv_soc core execute alu_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+411,"riscv_soc core execute alu_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+412,"riscv_soc core execute alu_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core execute mem_exu_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute mem_exu_reset", false,-1);
        tracep->declBit(c+414,"riscv_soc core execute mem_exu_io_valid", false,-1);
        tracep->declBus(c+217,"riscv_soc core execute mem_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+415,"riscv_soc core execute mem_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+417,"riscv_soc core execute mem_exu_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core execute mem_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+419,"riscv_soc core execute mem_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+421,"riscv_soc core execute mem_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+422,"riscv_soc core execute mem_exu_io_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core execute mem_exu_io_bus_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core execute mem_exu_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+200,"riscv_soc core execute mem_exu_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core execute mem_exu_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core execute mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core execute mem_exu_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+202,"riscv_soc core execute mem_exu_io_bus_ready", false,-1);
        tracep->declBit(c+261,"riscv_soc core execute mem_exu_io_difftest_peripheral", false,-1);
        tracep->declBit(c+738,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+423,"riscv_soc core execute mu_exu_io_valid", false,-1);
        tracep->declBus(c+217,"riscv_soc core execute mu_exu_io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+405,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+407,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+424,"riscv_soc core execute mu_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+426,"riscv_soc core execute mu_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+427,"riscv_soc core execute mu_exu_io_ready", false,-1);
        tracep->declBit(c+428,"riscv_soc core execute system_exu_io_valid", false,-1);
        tracep->declBus(c+217,"riscv_soc core execute system_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+429,"riscv_soc core execute system_exu_io_csr_data", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core execute system_exu_io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+224,"riscv_soc core execute system_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+415,"riscv_soc core execute system_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core execute system_exu_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+235,"riscv_soc core execute system_exu_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+429,"riscv_soc core execute system_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+431,"riscv_soc core execute system_exu_io_csr_is_w", false,-1);
        tracep->declQuad(c+432,"riscv_soc core execute system_exu_io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+434,"riscv_soc core execute system_exu_io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+435,"riscv_soc core execute system_exu_io_is_except", false,-1);
        tracep->declBus(c+436,"riscv_soc core execute system_exu_io_exception", false,-1, 5,0);
        tracep->declBit(c+437,"riscv_soc core execute system_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+239,"riscv_soc core execute system_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+210,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+438,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBit(c+439,"riscv_soc core execute reg_alu_valid", false,-1);
        tracep->declBit(c+440,"riscv_soc core execute reg_mem_valid", false,-1);
        tracep->declBit(c+441,"riscv_soc core execute reg_mu_valid", false,-1);
        tracep->declBit(c+442,"riscv_soc core execute reg_system_valid", false,-1);
        tracep->declBus(c+443,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+444,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+445,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+249,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBit(c+447,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+448,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+254,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+449,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+450,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+255,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declBit(c+451,"riscv_soc core execute time_irq", false,-1);
        tracep->declBit(c+452,"riscv_soc core execute soft_irq", false,-1);
        tracep->declBit(c+453,"riscv_soc core execute irq", false,-1);
        tracep->declQuad(c+207,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+454,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+455,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+456,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBus(c+260,"riscv_soc core execute reg_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+404,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBus(c+216,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+217,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+405,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+407,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+225,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+409,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+411,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+412,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declBit(c+457,"riscv_soc core execute alu_exu is_32", false,-1);
        tracep->declQuad(c+458,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+460,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute alu_exu op_imm", false,-1, 63,0);
        tracep->declBit(c+464,"riscv_soc core execute alu_exu rs2_is_imm", false,-1);
        tracep->declQuad(c+465,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+467,"riscv_soc core execute alu_exu rs1_is_pc", false,-1);
        tracep->declBit(c+468,"riscv_soc core execute alu_exu is_sub", false,-1);
        tracep->declQuad(c+469,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+471,"riscv_soc core execute alu_exu temp_rs2_data", false,-1, 63,0);
        tracep->declArray(c+473,"riscv_soc core execute alu_exu add_sub_result", false,-1, 64,0);
        tracep->declBit(c+476,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+477,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+478,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+479,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declQuad(c+483,"riscv_soc core execute alu_exu srl_temp", false,-1, 63,0);
        tracep->declQuad(c+485,"riscv_soc core execute alu_exu sra_temp", false,-1, 63,0);
        tracep->declBus(c+487,"riscv_soc core execute alu_exu func", false,-1, 2,0);
        tracep->declQuad(c+488,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declBit(c+490,"riscv_soc core execute alu_exu is_br", false,-1);
        tracep->declBit(c+491,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declArray(c+492,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declArray(c+495,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declBit(c+498,"riscv_soc core execute alu_exu valid_next_pc", false,-1);
        tracep->declBit(c+738,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+414,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+217,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+415,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+417,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+419,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+421,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+422,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+199,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+200,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+202,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declBit(c+261,"riscv_soc core execute mem_exu io_difftest_peripheral", false,-1);
        tracep->declQuad(c+499,"riscv_soc core execute mem_exu imm", false,-1, 63,0);
        tracep->declBit(c+422,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+169,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+176,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+199,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+419,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+421,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBit(c+261,"riscv_soc core execute mem_exu reg_difftest_peripheral", false,-1);
        tracep->declQuad(c+501,"riscv_soc core execute mem_exu mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+503,"riscv_soc core execute mem_exu mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+505,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+507,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declQuad(c+508,"riscv_soc core execute mem_exu mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+510,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+511,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+738,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+423,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+217,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+405,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+407,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+424,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+426,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+427,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+738,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+515,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declQuad(c+405,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+407,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+217,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+516,"riscv_soc core execute mu_exu div_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+518,"riscv_soc core execute mu_exu div_io_dest_is_w", false,-1);
        tracep->declBit(c+519,"riscv_soc core execute mu_exu div_io_ready", false,-1);
        tracep->declBit(c+738,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+520,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declQuad(c+405,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+407,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+217,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+521,"riscv_soc core execute mu_exu mul_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+523,"riscv_soc core execute mu_exu mul_io_dest_is_w", false,-1);
        tracep->declBit(c+524,"riscv_soc core execute mu_exu mul_io_ready", false,-1);
        tracep->declBit(c+738,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+515,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+405,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+407,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+217,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+516,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+518,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+519,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declBit(c+457,"riscv_soc core execute mu_exu div is_32", false,-1);
        tracep->declBit(c+525,"riscv_soc core execute mu_exu div is_signed", false,-1);
        tracep->declArray(c+526,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+529,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+532,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+535,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+538,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+541,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+544,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+547,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+550,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+551,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+552,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declArray(c+553,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+558,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+559,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+560,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+561,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declBit(c+518,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+519,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declBit(c+562,"riscv_soc core execute mu_exu div reg_is_32", false,-1);
        tracep->declBit(c+563,"riscv_soc core execute mu_exu div reg_is_rem", false,-1);
        tracep->declQuad(c+564,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+566,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+520,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+405,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+407,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+217,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+521,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+523,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+524,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+568,"riscv_soc core execute mu_exu mul is_32", false,-1);
        tracep->declBit(c+569,"riscv_soc core execute mu_exu mul is_rs1_signed", false,-1);
        tracep->declBit(c+457,"riscv_soc core execute mu_exu mul is_rs2_signed", false,-1);
        tracep->declArray(c+570,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+575,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+578,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+524,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+581,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+582,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+585,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+590,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+595,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+523,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declArray(c+596,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBus(c+601,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declBit(c+602,"riscv_soc core execute mu_exu mul reg_not_h", false,-1);
        tracep->declBit(c+603,"riscv_soc core execute mu_exu mul reg_is_32", false,-1);
        tracep->declBit(c+428,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+217,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+429,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+224,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+415,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+235,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+429,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+431,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+432,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+434,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+435,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+436,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+437,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+239,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+462,"riscv_soc core execute system_exu imm", false,-1, 63,0);
        tracep->declBit(c+604,"riscv_soc core execute system_exu is_imm", false,-1);
        tracep->declQuad(c+605,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+607,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+609,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declQuad(c+611,"riscv_soc core execute system_exu temp_csr_result_data", false,-1, 63,0);
        tracep->declBit(c+613,"riscv_soc core execute system_exu is_mret", false,-1);
        tracep->declBit(c+614,"riscv_soc core execute system_exu is_sret", false,-1);
        tracep->declBit(c+615,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+616,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+617,"riscv_soc core execute system_exu is_except", false,-1);
        tracep->declBus(c+618,"riscv_soc core execute system_exu exception", false,-1, 3,0);
        tracep->declBit(c+619,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declQuad(c+620,"riscv_soc core execute system_exu result_status", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+210,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBit(c+211,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+212,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+213,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBus(c+262,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+265,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+268,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+269,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+210,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+215,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+216,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+217,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+218,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+225,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+227,"riscv_soc core decode io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+228,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+229,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBus(c+230,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+231,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+209,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+215,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+216,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+217,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+218,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+225,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+227,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+228,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+229,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+230,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+231,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+622,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBit(c+623,"riscv_soc core decode dest_is_reg", false,-1);
        tracep->declBus(c+265,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+262,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+268,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBus(c+624,"riscv_soc core decode dest_addr", false,-1, 4,0);
        tracep->declBit(c+738,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+262,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+263,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+265,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+243,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+244,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+245,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+268,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+269,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+247,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+248,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+252,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+253,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+254,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+255,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+257,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+241,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+235,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+237,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core commit io_commit", false,-1);
        tracep->declBus(c+260,"riscv_soc core commit io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+261,"riscv_soc core commit io_difftest_peripheral", false,-1);
        tracep->declBit(c+84,"riscv_soc core commit difftest_irq_0", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit difftest_peripheral_0", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit difftest_commit_0", false,-1);
        tracep->declQuad(c+87,"riscv_soc core commit difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+89,"riscv_soc core commit difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+152,"riscv_soc core commit inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core commit csr_reg_clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core commit csr_reg_reset", false,-1);
        tracep->declBus(c+248,"riscv_soc core commit csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core commit csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+247,"riscv_soc core commit csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+257,"riscv_soc core commit csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+255,"riscv_soc core commit csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core commit csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+253,"riscv_soc core commit csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+625,"riscv_soc core commit csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+251,"riscv_soc core commit csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+259,"riscv_soc core commit csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+268,"riscv_soc core commit csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+269,"riscv_soc core commit csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+241,"riscv_soc core commit csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core commit csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+235,"riscv_soc core commit csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+237,"riscv_soc core commit csr_reg_io_r_csr_mie", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+626+i*2,"riscv_soc core commit regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+826,"riscv_soc core commit regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+262,"riscv_soc core commit regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+690,"riscv_soc core commit regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+265,"riscv_soc core commit regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+692,"riscv_soc core commit regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+827,"riscv_soc core commit regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+694,"riscv_soc core commit regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_2_en", false,-1);
        tracep->declBus(c+828,"riscv_soc core commit regfile_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+90,"riscv_soc core commit regfile_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_3_en", false,-1);
        tracep->declBus(c+829,"riscv_soc core commit regfile_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+92,"riscv_soc core commit regfile_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+830,"riscv_soc core commit regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+94,"riscv_soc core commit regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_5_en", false,-1);
        tracep->declBus(c+831,"riscv_soc core commit regfile_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+96,"riscv_soc core commit regfile_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_6_en", false,-1);
        tracep->declBus(c+832,"riscv_soc core commit regfile_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"riscv_soc core commit regfile_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_7_en", false,-1);
        tracep->declBus(c+833,"riscv_soc core commit regfile_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"riscv_soc core commit regfile_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_8_en", false,-1);
        tracep->declBus(c+834,"riscv_soc core commit regfile_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+102,"riscv_soc core commit regfile_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_9_en", false,-1);
        tracep->declBus(c+835,"riscv_soc core commit regfile_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core commit regfile_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_10_en", false,-1);
        tracep->declBus(c+836,"riscv_soc core commit regfile_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"riscv_soc core commit regfile_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_11_en", false,-1);
        tracep->declBus(c+837,"riscv_soc core commit regfile_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+108,"riscv_soc core commit regfile_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_12_en", false,-1);
        tracep->declBus(c+838,"riscv_soc core commit regfile_MPORT_12_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"riscv_soc core commit regfile_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_13_en", false,-1);
        tracep->declBus(c+839,"riscv_soc core commit regfile_MPORT_13_addr", false,-1, 4,0);
        tracep->declQuad(c+112,"riscv_soc core commit regfile_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_14_en", false,-1);
        tracep->declBus(c+840,"riscv_soc core commit regfile_MPORT_14_addr", false,-1, 4,0);
        tracep->declQuad(c+114,"riscv_soc core commit regfile_MPORT_14_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_15_en", false,-1);
        tracep->declBus(c+841,"riscv_soc core commit regfile_MPORT_15_addr", false,-1, 4,0);
        tracep->declQuad(c+116,"riscv_soc core commit regfile_MPORT_15_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_16_en", false,-1);
        tracep->declBus(c+842,"riscv_soc core commit regfile_MPORT_16_addr", false,-1, 4,0);
        tracep->declQuad(c+118,"riscv_soc core commit regfile_MPORT_16_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_17_en", false,-1);
        tracep->declBus(c+843,"riscv_soc core commit regfile_MPORT_17_addr", false,-1, 4,0);
        tracep->declQuad(c+120,"riscv_soc core commit regfile_MPORT_17_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_18_en", false,-1);
        tracep->declBus(c+844,"riscv_soc core commit regfile_MPORT_18_addr", false,-1, 4,0);
        tracep->declQuad(c+122,"riscv_soc core commit regfile_MPORT_18_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_19_en", false,-1);
        tracep->declBus(c+845,"riscv_soc core commit regfile_MPORT_19_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"riscv_soc core commit regfile_MPORT_19_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_20_en", false,-1);
        tracep->declBus(c+846,"riscv_soc core commit regfile_MPORT_20_addr", false,-1, 4,0);
        tracep->declQuad(c+126,"riscv_soc core commit regfile_MPORT_20_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_21_en", false,-1);
        tracep->declBus(c+847,"riscv_soc core commit regfile_MPORT_21_addr", false,-1, 4,0);
        tracep->declQuad(c+128,"riscv_soc core commit regfile_MPORT_21_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_22_en", false,-1);
        tracep->declBus(c+848,"riscv_soc core commit regfile_MPORT_22_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"riscv_soc core commit regfile_MPORT_22_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_23_en", false,-1);
        tracep->declBus(c+849,"riscv_soc core commit regfile_MPORT_23_addr", false,-1, 4,0);
        tracep->declQuad(c+132,"riscv_soc core commit regfile_MPORT_23_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_24_en", false,-1);
        tracep->declBus(c+850,"riscv_soc core commit regfile_MPORT_24_addr", false,-1, 4,0);
        tracep->declQuad(c+134,"riscv_soc core commit regfile_MPORT_24_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_25_en", false,-1);
        tracep->declBus(c+851,"riscv_soc core commit regfile_MPORT_25_addr", false,-1, 4,0);
        tracep->declQuad(c+136,"riscv_soc core commit regfile_MPORT_25_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_26_en", false,-1);
        tracep->declBus(c+852,"riscv_soc core commit regfile_MPORT_26_addr", false,-1, 4,0);
        tracep->declQuad(c+138,"riscv_soc core commit regfile_MPORT_26_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_27_en", false,-1);
        tracep->declBus(c+853,"riscv_soc core commit regfile_MPORT_27_addr", false,-1, 4,0);
        tracep->declQuad(c+140,"riscv_soc core commit regfile_MPORT_27_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_28_en", false,-1);
        tracep->declBus(c+854,"riscv_soc core commit regfile_MPORT_28_addr", false,-1, 4,0);
        tracep->declQuad(c+142,"riscv_soc core commit regfile_MPORT_28_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_29_en", false,-1);
        tracep->declBus(c+855,"riscv_soc core commit regfile_MPORT_29_addr", false,-1, 4,0);
        tracep->declQuad(c+144,"riscv_soc core commit regfile_MPORT_29_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_30_en", false,-1);
        tracep->declBus(c+856,"riscv_soc core commit regfile_MPORT_30_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"riscv_soc core commit regfile_MPORT_30_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_31_en", false,-1);
        tracep->declBus(c+857,"riscv_soc core commit regfile_MPORT_31_addr", false,-1, 4,0);
        tracep->declQuad(c+148,"riscv_soc core commit regfile_MPORT_31_data", false,-1, 63,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_32_en", false,-1);
        tracep->declBus(c+858,"riscv_soc core commit regfile_MPORT_32_addr", false,-1, 4,0);
        tracep->declQuad(c+150,"riscv_soc core commit regfile_MPORT_32_data", false,-1, 63,0);
        tracep->declQuad(c+245,"riscv_soc core commit regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+244,"riscv_soc core commit regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+826,"riscv_soc core commit regfile_MPORT_mask", false,-1);
        tracep->declBit(c+243,"riscv_soc core commit regfile_MPORT_en", false,-1);
        tracep->declBit(c+86,"riscv_soc core commit difftest_commit", false,-1);
        tracep->declBus(c+89,"riscv_soc core commit difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+87,"riscv_soc core commit difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core commit inst_counter", false,-1, 63,0);
        tracep->declBit(c+84,"riscv_soc core commit difftest_irq", false,-1);
        tracep->declBit(c+85,"riscv_soc core commit difftest_peripheral", false,-1);
        tracep->declBit(c+738,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+248,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+249,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+247,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+257,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+255,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+253,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+625,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+251,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+259,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+268,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+269,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+241,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+235,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+237,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+696,"riscv_soc core commit csr_reg irq", false,-1);
        tracep->declQuad(c+697,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+699,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+701,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+703,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+705,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+707,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+709,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+711,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+713,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+715,"riscv_soc core commit csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+738,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+739,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+203,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+169,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+173,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+204,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+176,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+206,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+234,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+233,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+234,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+717,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+719,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+206,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+204,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+721,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+722,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+723,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+738,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+739,"riscv_soc axi_ram reset", false,-1);
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
        tracep->declBit(c+738,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+724,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+726,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+728,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+730,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+731,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+733,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+734,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+726,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+735,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+736,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+737,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+738,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+724,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+726,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+728,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+730,"riscv_soc axi_ram mem wen", false,-1);
        tracep->declBit(c+738,"riscv_soc sram0 clock", false,-1);
        tracep->declBus(c+21,"riscv_soc sram0 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram0 io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram0 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram0 io_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"riscv_soc sram0 io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram0 sram_CLK", false,-1);
        tracep->declArray(c+27,"riscv_soc sram0 sram_Q", false,-1, 127,0);
        tracep->declBit(c+859,"riscv_soc sram0 sram_CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram0 sram_WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram0 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram0 sram_A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram0 sram_D", false,-1, 127,0);
        tracep->declBus(c+860,"riscv_soc sram0 sram Bits", false,-1, 31,0);
        tracep->declBus(c+861,"riscv_soc sram0 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc sram0 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc sram0 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+27,"riscv_soc sram0 sram Q", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram0 sram CLK", false,-1);
        tracep->declBit(c+859,"riscv_soc sram0 sram CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram0 sram WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram0 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"riscv_soc sram0 sram A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram0 sram D", false,-1, 127,0);
        tracep->declBit(c+826,"riscv_soc sram0 sram cen", false,-1);
        tracep->declBit(c+282,"riscv_soc sram0 sram wen", false,-1);
        tracep->declArray(c+863,"riscv_soc sram0 sram bwen", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram1 clock", false,-1);
        tracep->declBus(c+31,"riscv_soc sram1 io_addr", false,-1, 5,0);
        tracep->declBit(c+22,"riscv_soc sram1 io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+36,"riscv_soc sram1 io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram1 sram_CLK", false,-1);
        tracep->declArray(c+36,"riscv_soc sram1 sram_Q", false,-1, 127,0);
        tracep->declBit(c+859,"riscv_soc sram1 sram_CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram1 sram_WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram1 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc sram1 sram_A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram1 sram_D", false,-1, 127,0);
        tracep->declBus(c+860,"riscv_soc sram1 sram Bits", false,-1, 31,0);
        tracep->declBus(c+861,"riscv_soc sram1 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc sram1 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc sram1 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+36,"riscv_soc sram1 sram Q", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram1 sram CLK", false,-1);
        tracep->declBit(c+859,"riscv_soc sram1 sram CEN", false,-1);
        tracep->declBit(c+22,"riscv_soc sram1 sram WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram1 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+31,"riscv_soc sram1 sram A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram1 sram D", false,-1, 127,0);
        tracep->declBit(c+826,"riscv_soc sram1 sram cen", false,-1);
        tracep->declBit(c+282,"riscv_soc sram1 sram wen", false,-1);
        tracep->declArray(c+863,"riscv_soc sram1 sram bwen", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram2 clock", false,-1);
        tracep->declBus(c+40,"riscv_soc sram2 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram2 io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"riscv_soc sram2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"riscv_soc sram2 io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram2 sram_CLK", false,-1);
        tracep->declArray(c+42,"riscv_soc sram2 sram_Q", false,-1, 127,0);
        tracep->declBit(c+859,"riscv_soc sram2 sram_CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram2 sram_WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram2 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc sram2 sram_A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram2 sram_D", false,-1, 127,0);
        tracep->declBus(c+860,"riscv_soc sram2 sram Bits", false,-1, 31,0);
        tracep->declBus(c+861,"riscv_soc sram2 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc sram2 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc sram2 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+42,"riscv_soc sram2 sram Q", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram2 sram CLK", false,-1);
        tracep->declBit(c+859,"riscv_soc sram2 sram CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram2 sram WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram2 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+40,"riscv_soc sram2 sram A", false,-1, 5,0);
        tracep->declArray(c+23,"riscv_soc sram2 sram D", false,-1, 127,0);
        tracep->declBit(c+826,"riscv_soc sram2 sram cen", false,-1);
        tracep->declBit(c+289,"riscv_soc sram2 sram wen", false,-1);
        tracep->declArray(c+863,"riscv_soc sram2 sram bwen", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram3 clock", false,-1);
        tracep->declBus(c+46,"riscv_soc sram3 io_addr", false,-1, 5,0);
        tracep->declBit(c+41,"riscv_soc sram3 io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+32,"riscv_soc sram3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"riscv_soc sram3 io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram3 sram_CLK", false,-1);
        tracep->declArray(c+47,"riscv_soc sram3 sram_Q", false,-1, 127,0);
        tracep->declBit(c+859,"riscv_soc sram3 sram_CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram3 sram_WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram3 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc sram3 sram_A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram3 sram_D", false,-1, 127,0);
        tracep->declBus(c+860,"riscv_soc sram3 sram Bits", false,-1, 31,0);
        tracep->declBus(c+861,"riscv_soc sram3 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc sram3 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc sram3 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+47,"riscv_soc sram3 sram Q", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram3 sram CLK", false,-1);
        tracep->declBit(c+859,"riscv_soc sram3 sram CEN", false,-1);
        tracep->declBit(c+41,"riscv_soc sram3 sram WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram3 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+46,"riscv_soc sram3 sram A", false,-1, 5,0);
        tracep->declArray(c+32,"riscv_soc sram3 sram D", false,-1, 127,0);
        tracep->declBit(c+826,"riscv_soc sram3 sram cen", false,-1);
        tracep->declBit(c+289,"riscv_soc sram3 sram wen", false,-1);
        tracep->declArray(c+863,"riscv_soc sram3 sram bwen", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram4 clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram4 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram4 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram4 io_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"riscv_soc sram4 io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram4 sram_CLK", false,-1);
        tracep->declArray(c+61,"riscv_soc sram4 sram_Q", false,-1, 127,0);
        tracep->declBit(c+859,"riscv_soc sram4 sram_CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram4 sram_WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram4 sram_A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram4 sram_D", false,-1, 127,0);
        tracep->declBus(c+860,"riscv_soc sram4 sram Bits", false,-1, 31,0);
        tracep->declBus(c+861,"riscv_soc sram4 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc sram4 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc sram4 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+61,"riscv_soc sram4 sram Q", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram4 sram CLK", false,-1);
        tracep->declBit(c+859,"riscv_soc sram4 sram CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram4 sram WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram4 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram4 sram A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram4 sram D", false,-1, 127,0);
        tracep->declBit(c+826,"riscv_soc sram4 sram cen", false,-1);
        tracep->declBit(c+334,"riscv_soc sram4 sram wen", false,-1);
        tracep->declArray(c+326,"riscv_soc sram4 sram bwen", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram5 clock", false,-1);
        tracep->declBus(c+65,"riscv_soc sram5 io_addr", false,-1, 5,0);
        tracep->declBit(c+52,"riscv_soc sram5 io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram5 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram5 io_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram5 io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram5 sram_CLK", false,-1);
        tracep->declArray(c+70,"riscv_soc sram5 sram_Q", false,-1, 127,0);
        tracep->declBit(c+859,"riscv_soc sram5 sram_CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram5 sram_WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram5 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc sram5 sram_A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram5 sram_D", false,-1, 127,0);
        tracep->declBus(c+860,"riscv_soc sram5 sram Bits", false,-1, 31,0);
        tracep->declBus(c+861,"riscv_soc sram5 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc sram5 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc sram5 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+70,"riscv_soc sram5 sram Q", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram5 sram CLK", false,-1);
        tracep->declBit(c+859,"riscv_soc sram5 sram CEN", false,-1);
        tracep->declBit(c+52,"riscv_soc sram5 sram WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram5 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+65,"riscv_soc sram5 sram A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram5 sram D", false,-1, 127,0);
        tracep->declBit(c+826,"riscv_soc sram5 sram cen", false,-1);
        tracep->declBit(c+334,"riscv_soc sram5 sram wen", false,-1);
        tracep->declArray(c+863,"riscv_soc sram5 sram bwen", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram6 clock", false,-1);
        tracep->declBus(c+51,"riscv_soc sram6 io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram6 io_wen", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 io_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"riscv_soc sram6 io_wdata", false,-1, 127,0);
        tracep->declArray(c+75,"riscv_soc sram6 io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram6 sram_CLK", false,-1);
        tracep->declArray(c+75,"riscv_soc sram6 sram_Q", false,-1, 127,0);
        tracep->declBit(c+859,"riscv_soc sram6 sram_CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram6 sram_WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram6 sram_A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram6 sram_D", false,-1, 127,0);
        tracep->declBus(c+860,"riscv_soc sram6 sram Bits", false,-1, 31,0);
        tracep->declBus(c+861,"riscv_soc sram6 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc sram6 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc sram6 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+75,"riscv_soc sram6 sram Q", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram6 sram CLK", false,-1);
        tracep->declBit(c+859,"riscv_soc sram6 sram CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram6 sram WEN", false,-1);
        tracep->declArray(c+53,"riscv_soc sram6 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"riscv_soc sram6 sram A", false,-1, 5,0);
        tracep->declArray(c+57,"riscv_soc sram6 sram D", false,-1, 127,0);
        tracep->declBit(c+826,"riscv_soc sram6 sram cen", false,-1);
        tracep->declBit(c+343,"riscv_soc sram6 sram wen", false,-1);
        tracep->declArray(c+326,"riscv_soc sram6 sram bwen", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram7 clock", false,-1);
        tracep->declBus(c+79,"riscv_soc sram7 io_addr", false,-1, 5,0);
        tracep->declBit(c+74,"riscv_soc sram7 io_wen", false,-1);
        tracep->declArray(c+822,"riscv_soc sram7 io_wmask", false,-1, 127,0);
        tracep->declArray(c+66,"riscv_soc sram7 io_wdata", false,-1, 127,0);
        tracep->declArray(c+80,"riscv_soc sram7 io_rdata", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram7 sram_CLK", false,-1);
        tracep->declArray(c+80,"riscv_soc sram7 sram_Q", false,-1, 127,0);
        tracep->declBit(c+859,"riscv_soc sram7 sram_CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram7 sram_WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram7 sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc sram7 sram_A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram7 sram_D", false,-1, 127,0);
        tracep->declBus(c+860,"riscv_soc sram7 sram Bits", false,-1, 31,0);
        tracep->declBus(c+861,"riscv_soc sram7 sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc sram7 sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc sram7 sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+80,"riscv_soc sram7 sram Q", false,-1, 127,0);
        tracep->declBit(c+738,"riscv_soc sram7 sram CLK", false,-1);
        tracep->declBit(c+859,"riscv_soc sram7 sram CEN", false,-1);
        tracep->declBit(c+74,"riscv_soc sram7 sram WEN", false,-1);
        tracep->declArray(c+822,"riscv_soc sram7 sram BWEN", false,-1, 127,0);
        tracep->declBus(c+79,"riscv_soc sram7 sram A", false,-1, 5,0);
        tracep->declArray(c+66,"riscv_soc sram7 sram D", false,-1, 127,0);
        tracep->declBit(c+826,"riscv_soc sram7 sram cen", false,-1);
        tracep->declBit(c+343,"riscv_soc sram7 sram wen", false,-1);
        tracep->declArray(c+863,"riscv_soc sram7 sram bwen", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp688;
    VlWide<4>/*127:0*/ __Vtemp689;
    VlWide<4>/*127:0*/ __Vtemp690;
    VlWide<4>/*127:0*/ __Vtemp692;
    VlWide<4>/*127:0*/ __Vtemp693;
    VlWide<4>/*127:0*/ __Vtemp696;
    VlWide<4>/*127:0*/ __Vtemp697;
    VlWide<4>/*127:0*/ __Vtemp698;
    VlWide<4>/*127:0*/ __Vtemp700;
    VlWide<4>/*127:0*/ __Vtemp701;
    VlWide<3>/*95:0*/ __Vtemp703;
    VlWide<4>/*127:0*/ __Vtemp705;
    VlWide<4>/*127:0*/ __Vtemp706;
    VlWide<4>/*127:0*/ __Vtemp707;
    VlWide<3>/*95:0*/ __Vtemp709;
    VlWide<3>/*95:0*/ __Vtemp710;
    VlWide<3>/*95:0*/ __Vtemp711;
    VlWide<3>/*95:0*/ __Vtemp712;
    VlWide<3>/*95:0*/ __Vtemp715;
    VlWide<3>/*95:0*/ __Vtemp716;
    VlWide<3>/*95:0*/ __Vtemp717;
    VlWide<5>/*159:0*/ __Vtemp726;
    VlWide<5>/*159:0*/ __Vtemp730;
    VlWide<3>/*95:0*/ __Vtemp732;
    VlWide<5>/*159:0*/ __Vtemp734;
    VlWide<5>/*159:0*/ __Vtemp735;
    VlWide<5>/*159:0*/ __Vtemp736;
    VlWide<5>/*159:0*/ __Vtemp737;
    VlWide<5>/*159:0*/ __Vtemp738;
    VlWide<5>/*159:0*/ __Vtemp740;
    VlWide<5>/*159:0*/ __Vtemp741;
    VlWide<5>/*159:0*/ __Vtemp742;
    VlWide<5>/*159:0*/ __Vtemp743;
    VlWide<5>/*159:0*/ __Vtemp744;
    VlWide<5>/*159:0*/ __Vtemp746;
    VlWide<5>/*159:0*/ __Vtemp747;
    VlWide<5>/*159:0*/ __Vtemp748;
    VlWide<5>/*159:0*/ __Vtemp756;
    VlWide<5>/*159:0*/ __Vtemp757;
    VlWide<5>/*159:0*/ __Vtemp765;
    VlWide<4>/*127:0*/ __Vtemp766;
    VlWide<4>/*127:0*/ __Vtemp767;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
        tracep->fullBit(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
        tracep->fullQData(oldp+3,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr
                                        : 0ULL))),64);
        tracep->fullBit(oldp+5,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
        tracep->fullBit(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
        tracep->fullQData(oldp+7,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata
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
        VL_EXTEND_WQ(128,54, __Vtemp688, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
        tracep->fullWData(oldp+32,(__Vtemp688),128);
        tracep->fullWData(oldp+36,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q),128);
        tracep->fullCData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
        tracep->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+42,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q),128);
        tracep->fullCData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr),6);
        tracep->fullWData(oldp+47,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q),128);
        tracep->fullCData(oldp+51,((0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                                              : (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                                         >> 4U))))),6);
        tracep->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp689[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp689[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp689[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp689[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+53,(__Vtemp689),128);
        tracep->fullWData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+61,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q),128);
        tracep->fullCData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp690, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+66,(__Vtemp690),128);
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
        tracep->fullBit(oldp+156,((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU))));
        tracep->fullQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
        tracep->fullBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
        tracep->fullBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
        tracep->fullBit(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+178,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+186,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+192,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullQData(oldp+196,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
        tracep->fullBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready));
        tracep->fullBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullQData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+202,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullQData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
        tracep->fullBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        tracep->fullBit(oldp+211,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
        tracep->fullIData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data),32);
        tracep->fullQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                                    [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
        tracep->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullCData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullSData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+233,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
        tracep->fullQData(oldp+241,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        tracep->fullCData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        tracep->fullBit(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        tracep->fullSData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        tracep->fullBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        tracep->fullCData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        tracep->fullIData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        tracep->fullBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        tracep->fullCData(oldp+262,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+263,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
        tracep->fullCData(oldp+265,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+266,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
        tracep->fullSData(oldp+268,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+269,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                        >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullQData(oldp+271,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+273,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+274,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
        tracep->fullCData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
        tracep->fullBit(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
        tracep->fullBit(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+285,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+287,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+292,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U]))))),54);
        tracep->fullQData(oldp+294,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U]))))),54);
        tracep->fullBit(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0));
        tracep->fullBit(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
        tracep->fullBit(oldp+298,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+299,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))));
        tracep->fullQData(oldp+300,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+302,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+306,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
        tracep->fullQData(oldp+308,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+310,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+311,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr))),4);
        tracep->fullCData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+324,((((QData)((IData)(
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
        tracep->fullWData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+339,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+341,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+348,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U]))))),54);
        tracep->fullQData(oldp+350,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U]))))),54);
        tracep->fullBit(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+354,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+355,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+356,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+357,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+358,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+360,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
        tracep->fullQData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+364,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullBit(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+373,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+378,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_valid));
        tracep->fullIData(oldp+381,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 2U)))
                                      ? (IData)((((0ULL 
                                                   != 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 0x1fU))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                                                   : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
                                                 >> 0x20U))
                                      : (IData)(((0ULL 
                                                  != 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 0x1fU))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                                                  : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))),32);
        tracep->fullBit(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullQData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
        tracep->fullQData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
        tracep->fullQData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
        tracep->fullQData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
        tracep->fullCData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullBit(oldp+395,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_valid))));
        tracep->fullIData(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
        tracep->fullIData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
        tracep->fullIData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
        tracep->fullIData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
        tracep->fullBit(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullBit(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullQData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
        tracep->fullQData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        VL_EXTEND_WQ(127,64, __Vtemp692, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
        VL_SHIFTL_WWI(127,127,6, __Vtemp693, __Vtemp692, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        tracep->fullQData(oldp+409,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                      ? (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)
                                      : ((5U == (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? VL_SHIFTRS_QQI(64,64,6, 
                                                           ((3U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                 >> 5U)))
                                                             ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                                             : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                          : ((5U == 
                                              (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp693[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp693[0U])))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U)))
                                                      ? (QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U)))
                                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U]))))))))))))),64);
        tracep->fullBit(oldp+411,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
        tracep->fullQData(oldp+412,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        tracep->fullQData(oldp+415,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
        tracep->fullQData(oldp+417,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
        tracep->fullQData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullBit(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        tracep->fullQData(oldp+424,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        tracep->fullBit(oldp+426,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
        tracep->fullBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        tracep->fullQData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        tracep->fullBit(oldp+431,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                   & ((0U != (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        tracep->fullQData(oldp+432,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        tracep->fullSData(oldp+434,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        tracep->fullCData(oldp+436,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),6);
        tracep->fullBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        tracep->fullCData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullBit(oldp+439,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        tracep->fullBit(oldp+440,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+441,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+442,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 3U))));
        tracep->fullCData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        tracep->fullBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        tracep->fullBit(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        tracep->fullBit(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+457,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        tracep->fullQData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        tracep->fullBit(oldp+464,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U)))));
        tracep->fullQData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+467,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullBit(oldp+468,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullQData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullQData(oldp+471,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        tracep->fullWData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        tracep->fullBit(oldp+476,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        tracep->fullBit(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp696, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
        VL_SHIFTL_WWI(127,127,6, __Vtemp697, __Vtemp696, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp698[0U] = __Vtemp697[0U];
        __Vtemp698[1U] = __Vtemp697[1U];
        __Vtemp698[2U] = __Vtemp697[2U];
        __Vtemp698[3U] = (0x7fffffffU & __Vtemp697[3U]);
        tracep->fullWData(oldp+479,(__Vtemp698),127);
        tracep->fullQData(oldp+483,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                     >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+485,(VL_SHIFTRS_QQI(64,64,6, 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 5U)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullCData(oldp+487,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U))),3);
        VL_EXTEND_WQ(127,64, __Vtemp700, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
        VL_SHIFTL_WWI(127,127,6, __Vtemp701, __Vtemp700, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        tracep->fullQData(oldp+488,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                      ? VL_SHIFTRS_QQI(64,64,6, 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                             >> 5U)))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                      : ((5U == (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                             >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                          : ((1U == 
                                              (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? (((QData)((IData)(
                                                                  __Vtemp701[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   __Vtemp701[0U])))
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? (QData)((IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U)))
                                                      ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U])))))))))))),64);
        tracep->fullBit(oldp+490,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        tracep->fullBit(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        __Vtemp703[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp703[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                  >> 0x20U));
        __Vtemp703[2U] = 1U;
        tracep->fullWData(oldp+492,(__Vtemp703),65);
        tracep->fullWData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullBit(oldp+498,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+499,((((QData)((IData)(
                                                      ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
        tracep->fullQData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        tracep->fullQData(oldp+503,(((((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                      >> 7U)))
                                        ? 0xffffffffffffffULL
                                        : 0ULL) << 8U) 
                                     | (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))),64);
        tracep->fullQData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+507,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U))));
        tracep->fullQData(oldp+508,(((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                      ? (QData)((IData)(
                                                        (0x7ffU 
                                                         & ((IData)(0xfU) 
                                                            << 
                                                            (7U 
                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                                      : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                          ? (QData)((IData)(
                                                            (0x1ffU 
                                                             & ((IData)(3U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                                          : ((0xeU 
                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                              ? (QData)((IData)(
                                                                (0x7fffU 
                                                                 & ((IData)(0xffU) 
                                                                    << 
                                                                    (7U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                                              : ((2U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        << 
                                                                        (7U 
                                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                                                  : 0ULL))))),64);
        tracep->fullBit(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        VL_EXTEND_WQ(127,64, __Vtemp705, (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                           : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data));
        VL_SHIFTL_WWI(127,127,6, __Vtemp706, __Vtemp705, 
                      (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                                << 3U)));
        __Vtemp707[0U] = __Vtemp706[0U];
        __Vtemp707[1U] = __Vtemp706[1U];
        __Vtemp707[2U] = __Vtemp706[2U];
        __Vtemp707[3U] = (0x7fffffffU & __Vtemp706[3U]);
        tracep->fullWData(oldp+511,(__Vtemp707),127);
        tracep->fullBit(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        tracep->fullQData(oldp+516,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullBit(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        tracep->fullQData(oldp+521,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        tracep->fullBit(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullBit(oldp+525,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullWData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp709[0U] = 1U;
        __Vtemp709[1U] = 0U;
        __Vtemp709[2U] = 0U;
        __Vtemp710[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp710[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp710[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp711, __Vtemp709, __Vtemp710);
        __Vtemp712[0U] = __Vtemp711[0U];
        __Vtemp712[1U] = __Vtemp711[1U];
        __Vtemp712[2U] = (1U & __Vtemp711[2U]);
        tracep->fullWData(oldp+547,(__Vtemp712),65);
        tracep->fullCData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+558,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp715[0U] = 1U;
        __Vtemp715[1U] = 0U;
        __Vtemp715[2U] = 0U;
        __Vtemp716[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp716[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp716[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp717, __Vtemp715, __Vtemp716);
        tracep->fullBit(oldp+559,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ __Vtemp717[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp717[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ (1U 
                                                & __Vtemp717[2U]))))));
        tracep->fullBit(oldp+560,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullBit(oldp+562,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        tracep->fullBit(oldp+563,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                         >> 3U))));
        tracep->fullQData(oldp+564,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullQData(oldp+566,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+568,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))));
        tracep->fullBit(oldp+569,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U))));
        VL_EXTEND_WQ(130,64, __Vtemp726, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp730[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            __Vtemp730[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp730[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp730[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp730[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 3U : 0U);
        } else {
            __Vtemp730[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                               : __Vtemp726[0U]);
            __Vtemp730[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                          >> 0x20U))
                               : __Vtemp726[1U]);
            __Vtemp730[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? 0xffffffffU : __Vtemp726[2U]);
            __Vtemp730[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? 0xffffffffU : __Vtemp726[3U]);
            __Vtemp730[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? 3U : __Vtemp726[4U]);
        }
        tracep->fullWData(oldp+570,(__Vtemp730),130);
        tracep->fullWData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp732[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                          << 1U);
        __Vtemp732[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                        << 1U));
        __Vtemp732[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                 << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                             >> 0x1fU) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                               << 1U)));
        tracep->fullWData(oldp+578,(__Vtemp732),67);
        tracep->fullCData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        __Vtemp734[0U] = 1U;
        __Vtemp734[1U] = 0U;
        __Vtemp734[2U] = 0U;
        __Vtemp734[3U] = 0U;
        __Vtemp734[4U] = 0U;
        __Vtemp735[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp735[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp735[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp735[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp735[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp736, __Vtemp734, __Vtemp735);
        __Vtemp737[0U] = __Vtemp736[0U];
        __Vtemp737[1U] = __Vtemp736[1U];
        __Vtemp737[2U] = __Vtemp736[2U];
        __Vtemp737[3U] = __Vtemp736[3U];
        __Vtemp737[4U] = (3U & __Vtemp736[4U]);
        VL_EXTEND_WW(131,130, __Vtemp738, __Vtemp737);
        __Vtemp740[0U] = 1U;
        __Vtemp740[1U] = 0U;
        __Vtemp740[2U] = 0U;
        __Vtemp740[3U] = 0U;
        __Vtemp740[4U] = 0U;
        __Vtemp741[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp741[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp741[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp741[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp741[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp742, __Vtemp740, __Vtemp741);
        __Vtemp743[0U] = __Vtemp742[0U];
        __Vtemp743[1U] = __Vtemp742[1U];
        __Vtemp743[2U] = __Vtemp742[2U];
        __Vtemp743[3U] = __Vtemp742[3U];
        __Vtemp743[4U] = (3U & __Vtemp742[4U]);
        VL_EXTEND_WW(131,130, __Vtemp744, __Vtemp743);
        __Vtemp746[0U] = 1U;
        __Vtemp746[1U] = 0U;
        __Vtemp746[2U] = 0U;
        __Vtemp746[3U] = 0U;
        __Vtemp746[4U] = 0U;
        __Vtemp747[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp747[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp747[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp747[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp747[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp748, __Vtemp746, __Vtemp747);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp756[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp756[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp756[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp756[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp756[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp756[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                               : 0U);
            __Vtemp756[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                               : 0U);
            __Vtemp756[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                               : 0U);
            __Vtemp756[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                               : 0U);
            __Vtemp756[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                               : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp757, __Vtemp756);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp765[0U] = __Vtemp738[0U];
            __Vtemp765[1U] = __Vtemp738[1U];
            __Vtemp765[2U] = __Vtemp738[2U];
            __Vtemp765[3U] = __Vtemp738[3U];
            __Vtemp765[4U] = __Vtemp738[4U];
        } else {
            __Vtemp765[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp744[0U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   (__Vtemp748[0U] 
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
                                                    __Vtemp757[0U])));
            __Vtemp765[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp744[1U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp748[0U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp748[1U] 
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
                                                    __Vtemp757[1U])));
            __Vtemp765[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp744[2U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp748[1U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp748[2U] 
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
                                                    __Vtemp757[2U])));
            __Vtemp765[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp744[3U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp748[2U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp748[3U] 
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
                                                    __Vtemp757[3U])));
            __Vtemp765[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp744[4U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp748[3U] 
                                                     >> 0x1fU) 
                                                    | (6U 
                                                       & (__Vtemp748[4U] 
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
                                                    __Vtemp757[4U])));
        }
        tracep->fullWData(oldp+596,(__Vtemp765),131);
        tracep->fullCData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullBit(oldp+602,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+603,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        tracep->fullBit(oldp+604,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 4U))));
        tracep->fullQData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullQData(oldp+611,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullBit(oldp+613,((0x10U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+614,((0x18U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+615,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+616,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+617,(((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))) 
                                   | (8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
        tracep->fullCData(oldp+618,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),4);
        tracep->fullBit(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+620,(((0xffffffffffffff77ULL 
                                      & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                     | (QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                    >> 7U)))
                                                         ? 0x88U
                                                         : 0x80U))))),64);
        tracep->fullCData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullBit(oldp+623,(((0x33U == (0xfe00707fU 
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
        tracep->fullCData(oldp+624,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                              >> 7U))),5);
        tracep->fullCData(oldp+625,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullQData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[0]),64);
        tracep->fullQData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[1]),64);
        tracep->fullQData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[2]),64);
        tracep->fullQData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[3]),64);
        tracep->fullQData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[4]),64);
        tracep->fullQData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[5]),64);
        tracep->fullQData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[6]),64);
        tracep->fullQData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[7]),64);
        tracep->fullQData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[8]),64);
        tracep->fullQData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[9]),64);
        tracep->fullQData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[10]),64);
        tracep->fullQData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[11]),64);
        tracep->fullQData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[12]),64);
        tracep->fullQData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[13]),64);
        tracep->fullQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[14]),64);
        tracep->fullQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[15]),64);
        tracep->fullQData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[16]),64);
        tracep->fullQData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[17]),64);
        tracep->fullQData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[18]),64);
        tracep->fullQData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[19]),64);
        tracep->fullQData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[20]),64);
        tracep->fullQData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[21]),64);
        tracep->fullQData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[22]),64);
        tracep->fullQData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[23]),64);
        tracep->fullQData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[24]),64);
        tracep->fullQData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[25]),64);
        tracep->fullQData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[26]),64);
        tracep->fullQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[27]),64);
        tracep->fullQData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[28]),64);
        tracep->fullQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[29]),64);
        tracep->fullQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[30]),64);
        tracep->fullQData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[31]),64);
        tracep->fullQData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0U]),64);
        tracep->fullBit(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+715,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+722,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))));
        tracep->fullBit(oldp+723,((0x4000U == (0xffffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))));
        tracep->fullQData(oldp+724,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                      ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                      : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+726,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+728,((((QData)((IData)(
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
        tracep->fullBit(oldp+730,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+731,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+733,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+734,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+735,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+736,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullIData(oldp+737,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullBit(oldp+738,(vlSelf->clock));
        tracep->fullBit(oldp+739,(vlSelf->reset));
        tracep->fullQData(oldp+740,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+742,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+744,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+746,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+748,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+750,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+752,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+754,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+756,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+758,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+760,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+762,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+764,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+766,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+768,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+770,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+772,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+774,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+776,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+778,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+780,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+782,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+784,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+786,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+788,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+790,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+792,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+794,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+796,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+798,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+800,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+802,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+804,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+806,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+807,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+808,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+810,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+811,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+813,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+815,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+817,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+819,(vlSelf->io_difftest_peripheral));
        tracep->fullQData(oldp+820,(0ULL),64);
        __Vtemp766[0U] = 0U;
        __Vtemp766[1U] = 0U;
        __Vtemp766[2U] = 0U;
        __Vtemp766[3U] = 0U;
        tracep->fullWData(oldp+822,(__Vtemp766),128);
        tracep->fullBit(oldp+826,(1U));
        tracep->fullCData(oldp+827,(0U),5);
        tracep->fullCData(oldp+828,(1U),5);
        tracep->fullCData(oldp+829,(2U),5);
        tracep->fullCData(oldp+830,(3U),5);
        tracep->fullCData(oldp+831,(4U),5);
        tracep->fullCData(oldp+832,(5U),5);
        tracep->fullCData(oldp+833,(6U),5);
        tracep->fullCData(oldp+834,(7U),5);
        tracep->fullCData(oldp+835,(8U),5);
        tracep->fullCData(oldp+836,(9U),5);
        tracep->fullCData(oldp+837,(0xaU),5);
        tracep->fullCData(oldp+838,(0xbU),5);
        tracep->fullCData(oldp+839,(0xcU),5);
        tracep->fullCData(oldp+840,(0xdU),5);
        tracep->fullCData(oldp+841,(0xeU),5);
        tracep->fullCData(oldp+842,(0xfU),5);
        tracep->fullCData(oldp+843,(0x10U),5);
        tracep->fullCData(oldp+844,(0x11U),5);
        tracep->fullCData(oldp+845,(0x12U),5);
        tracep->fullCData(oldp+846,(0x13U),5);
        tracep->fullCData(oldp+847,(0x14U),5);
        tracep->fullCData(oldp+848,(0x15U),5);
        tracep->fullCData(oldp+849,(0x16U),5);
        tracep->fullCData(oldp+850,(0x17U),5);
        tracep->fullCData(oldp+851,(0x18U),5);
        tracep->fullCData(oldp+852,(0x19U),5);
        tracep->fullCData(oldp+853,(0x1aU),5);
        tracep->fullCData(oldp+854,(0x1bU),5);
        tracep->fullCData(oldp+855,(0x1cU),5);
        tracep->fullCData(oldp+856,(0x1dU),5);
        tracep->fullCData(oldp+857,(0x1eU),5);
        tracep->fullCData(oldp+858,(0x1fU),5);
        tracep->fullBit(oldp+859,(0U));
        tracep->fullIData(oldp+860,(0x80U),32);
        tracep->fullIData(oldp+861,(0x40U),32);
        tracep->fullIData(oldp+862,(6U),32);
        __Vtemp767[0U] = 0xffffffffU;
        __Vtemp767[1U] = 0xffffffffU;
        __Vtemp767[2U] = 0xffffffffU;
        __Vtemp767[3U] = 0xffffffffU;
        tracep->fullWData(oldp+863,(__Vtemp767),128);
    }
}
