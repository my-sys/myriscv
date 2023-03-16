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
        tracep->declBit(c+762,"clock", false,-1);
        tracep->declBit(c+763,"reset", false,-1);
        tracep->declQuad(c+764,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+766,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+768,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+770,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+772,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+774,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+776,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+778,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+780,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+782,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+784,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+786,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+788,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+790,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+792,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+794,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+796,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+798,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+800,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+802,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+804,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+806,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+808,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+810,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+812,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+814,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+816,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+818,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+820,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+822,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+824,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+826,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+828,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+830,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+831,"io_difftest_commit", false,-1);
        tracep->declQuad(c+832,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+834,"io_difftest_irq", false,-1);
        tracep->declQuad(c+835,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+837,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+839,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+841,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+843,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+762,"riscv_soc clock", false,-1);
        tracep->declBit(c+763,"riscv_soc reset", false,-1);
        tracep->declQuad(c+764,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+766,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+768,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+770,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+772,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+774,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+776,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+778,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+780,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+782,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+784,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+786,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+788,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+790,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+792,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+794,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+796,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+798,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+800,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+802,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+804,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+806,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+808,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+810,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+812,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+814,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+816,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+818,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+820,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+822,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+824,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+826,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+828,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+830,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+831,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+832,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+834,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+835,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+837,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+839,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+841,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+843,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+762,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core_reset", false,-1);
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
        tracep->declBit(c+21,"riscv_soc core_difftest_irq", false,-1);
        tracep->declBit(c+22,"riscv_soc core_difftest_peripheral", false,-1);
        tracep->declBit(c+23,"riscv_soc core_difftest_commit", false,-1);
        tracep->declQuad(c+24,"riscv_soc core_difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core_reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv_soc core_reg_mstatus", false,-1, 63,0);
        tracep->declBus(c+30,"riscv_soc core_difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+844,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+35,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+37,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+39,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+57,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+59,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+61,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+65,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+73,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+75,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+77,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+79,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+85,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core_reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core_reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core_inst_counter", false,-1, 63,0);
        tracep->declBit(c+762,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc axi_ram_reset", false,-1);
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
        tracep->declBus(c+30,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+99,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+762,"riscv_soc core clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core reset", false,-1);
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
        tracep->declBit(c+21,"riscv_soc core difftest_irq", false,-1);
        tracep->declBit(c+22,"riscv_soc core difftest_peripheral", false,-1);
        tracep->declBit(c+23,"riscv_soc core difftest_commit", false,-1);
        tracep->declQuad(c+24,"riscv_soc core difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv_soc core reg_mstatus", false,-1, 63,0);
        tracep->declBus(c+30,"riscv_soc core difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+93,"riscv_soc core reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core inst_counter", false,-1, 63,0);
        tracep->declBit(c+762,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+101,"riscv_soc core i_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core i_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core i_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+844,"riscv_soc core i_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+846,"riscv_soc core i_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+847,"riscv_soc core i_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+106,"riscv_soc core i_cache_io_cpu_ready", false,-1);
        tracep->declBit(c+847,"riscv_soc core i_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+107,"riscv_soc core i_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core i_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core i_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core i_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+113,"riscv_soc core i_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+847,"riscv_soc core i_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+114,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+115,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+118,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+762,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+119,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+128,"riscv_soc core d_cache_io_cpu_ready", false,-1);
        tracep->declBit(c+129,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+130,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+131,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+135,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+136,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+137,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+138,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+142,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+762,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+114,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+118,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+129,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+130,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+131,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+135,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+137,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+138,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+142,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+143,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+145,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+848,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+147,"riscv_soc core cross_bar_1_io_fetch_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1_io_fetch_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core cross_bar_1_io_fetch_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+150,"riscv_soc core cross_bar_1_io_fetch_ready", false,-1);
        tracep->declBit(c+151,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+154,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+101,"riscv_soc core cross_bar_1_io_ICache_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1_io_ICache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core cross_bar_1_io_ICache_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+106,"riscv_soc core cross_bar_1_io_ICache_ready", false,-1);
        tracep->declBit(c+119,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+128,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+143,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+145,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+762,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core fetch_reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core fetch_io_in_de_stall", false,-1);
        tracep->declBit(c+160,"riscv_soc core fetch_io_in_wb_stall", false,-1);
        tracep->declBit(c+161,"riscv_soc core fetch_io_in_ex_stall", false,-1);
        tracep->declQuad(c+162,"riscv_soc core fetch_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core fetch_io_in_flush", false,-1);
        tracep->declBit(c+147,"riscv_soc core fetch_io_bus_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core fetch_io_bus_bits_pc_0", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core fetch_io_bus_bits_inst", false,-1, 63,0);
        tracep->declBit(c+150,"riscv_soc core fetch_io_bus_ready", false,-1);
        tracep->declQuad(c+165,"riscv_soc core fetch_io_out_pc_1", false,-1, 63,0);
        tracep->declBus(c+167,"riscv_soc core fetch_io_out_inst", false,-1, 31,0);
        tracep->declBit(c+762,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute_reset", false,-1);
        tracep->declBus(c+168,"riscv_soc core execute_io_in_opType", false,-1, 2,0);
        tracep->declBus(c+169,"riscv_soc core execute_io_in_exuType", false,-1, 5,0);
        tracep->declBus(c+170,"riscv_soc core execute_io_in_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+171,"riscv_soc core execute_io_in_rs1_data", false,-1, 63,0);
        tracep->declBus(c+173,"riscv_soc core execute_io_in_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+174,"riscv_soc core execute_io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core execute_io_in_imm_data", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core execute_io_in_inst", false,-1, 31,0);
        tracep->declBus(c+181,"riscv_soc core execute_io_in_rs_addr", false,-1, 4,0);
        tracep->declBus(c+182,"riscv_soc core execute_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+183,"riscv_soc core execute_io_in_csr_data", false,-1, 63,0);
        tracep->declQuad(c+185,"riscv_soc core execute_io_in_wb_result_data", false,-1, 63,0);
        tracep->declBus(c+187,"riscv_soc core execute_io_in_wb_rs_addr", false,-1, 4,0);
        tracep->declBit(c+188,"riscv_soc core execute_io_in_wb_w_rs_en", false,-1);
        tracep->declBus(c+189,"riscv_soc core execute_io_in_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+190,"riscv_soc core execute_io_in_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core execute_io_in_wb_w_csr_en", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute_io_in_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute_io_in_flush", false,-1);
        tracep->declBus(c+194,"riscv_soc core execute_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+195,"riscv_soc core execute_io_out_rs_data", false,-1, 63,0);
        tracep->declBit(c+197,"riscv_soc core execute_io_out_w_rs_en", false,-1);
        tracep->declBus(c+198,"riscv_soc core execute_io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+199,"riscv_soc core execute_io_out_pc", false,-1, 63,0);
        tracep->declBus(c+201,"riscv_soc core execute_io_out_inst", false,-1, 31,0);
        tracep->declBus(c+202,"riscv_soc core execute_io_out_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+203,"riscv_soc core execute_io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+205,"riscv_soc core execute_io_out_mem_addr", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core execute_io_out_mem_avalid", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute_io_out_w_mem_en", false,-1);
        tracep->declBus(c+209,"riscv_soc core execute_io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+210,"riscv_soc core execute_io_out_csr_data", false,-1, 63,0);
        tracep->declBit(c+212,"riscv_soc core execute_io_out_w_csr_en", false,-1);
        tracep->declBus(c+213,"riscv_soc core execute_io_out_exception", false,-1, 4,0);
        tracep->declBit(c+214,"riscv_soc core execute_io_out_is_exception", false,-1);
        tracep->declBit(c+215,"riscv_soc core execute_io_out_is_mret", false,-1);
        tracep->declQuad(c+216,"riscv_soc core execute_io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core execute_io_out_valid_next_pc", false,-1);
        tracep->declBit(c+219,"riscv_soc core execute_io_out_flush", false,-1);
        tracep->declBit(c+161,"riscv_soc core execute_io_out_stall", false,-1);
        tracep->declBit(c+762,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core decode_reset", false,-1);
        tracep->declBus(c+167,"riscv_soc core decode_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+165,"riscv_soc core decode_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+187,"riscv_soc core decode_io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+185,"riscv_soc core decode_io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+188,"riscv_soc core decode_io_in_w_rs_en", false,-1);
        tracep->declQuad(c+220,"riscv_soc core decode_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+222,"riscv_soc core decode_io_in_stall", false,-1);
        tracep->declBit(c+164,"riscv_soc core decode_io_in_flush", false,-1);
        tracep->declQuad(c+171,"riscv_soc core decode_io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+174,"riscv_soc core decode_io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+170,"riscv_soc core decode_io_out_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+173,"riscv_soc core decode_io_out_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+223,"riscv_soc core decode_io_out_csr_addr_0", false,-1, 11,0);
        tracep->declBus(c+182,"riscv_soc core decode_io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+183,"riscv_soc core decode_io_out_csr_data", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core decode_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+176,"riscv_soc core decode_io_out_imm_data", false,-1, 63,0);
        tracep->declBus(c+168,"riscv_soc core decode_io_out_opType", false,-1, 2,0);
        tracep->declBus(c+169,"riscv_soc core decode_io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+178,"riscv_soc core decode_io_out_pc", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core decode_io_out_inst", false,-1, 31,0);
        tracep->declBit(c+159,"riscv_soc core decode_io_out_stall", false,-1);
        tracep->declQuad(c+844,"riscv_soc core decode__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv_soc core decode__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv_soc core decode__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+35,"riscv_soc core decode__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+37,"riscv_soc core decode__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+39,"riscv_soc core decode__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core decode__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core decode__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_soc core decode__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv_soc core decode__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv_soc core decode__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv_soc core decode__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv_soc core decode__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv_soc core decode__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+57,"riscv_soc core decode__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+59,"riscv_soc core decode__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+61,"riscv_soc core decode__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv_soc core decode__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+65,"riscv_soc core decode__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv_soc core decode__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv_soc core decode__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core decode__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+73,"riscv_soc core decode__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+75,"riscv_soc core decode__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+77,"riscv_soc core decode__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+79,"riscv_soc core decode__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_soc core decode__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv_soc core decode__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+85,"riscv_soc core decode__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core decode__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core decode__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core decode__WIRE_0_31", false,-1, 63,0);
        tracep->declBit(c+762,"riscv_soc core write_back_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core write_back_reset", false,-1);
        tracep->declBus(c+194,"riscv_soc core write_back_io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+195,"riscv_soc core write_back_io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+197,"riscv_soc core write_back_io_in_w_rs_en", false,-1);
        tracep->declBus(c+198,"riscv_soc core write_back_io_in_exuType", false,-1, 5,0);
        tracep->declBus(c+202,"riscv_soc core write_back_io_in_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+203,"riscv_soc core write_back_io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+205,"riscv_soc core write_back_io_in_mem_addr", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core write_back_io_in_mem_avalid", false,-1);
        tracep->declBit(c+208,"riscv_soc core write_back_io_in_w_mem_en", false,-1);
        tracep->declQuad(c+199,"riscv_soc core write_back_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+201,"riscv_soc core write_back_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+216,"riscv_soc core write_back_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core write_back_io_in_valid_next_pc", false,-1);
        tracep->declBus(c+209,"riscv_soc core write_back_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+210,"riscv_soc core write_back_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+212,"riscv_soc core write_back_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+224,"riscv_soc core write_back_io_in_mtvec", false,-1, 63,0);
        tracep->declQuad(c+226,"riscv_soc core write_back_io_in_mepc", false,-1, 63,0);
        tracep->declQuad(c+228,"riscv_soc core write_back_io_in_mstatus", false,-1, 63,0);
        tracep->declQuad(c+230,"riscv_soc core write_back_io_in_mie", false,-1, 63,0);
        tracep->declBit(c+215,"riscv_soc core write_back_io_in_is_mret", false,-1);
        tracep->declBit(c+232,"riscv_soc core write_back_io_in_time_irq", false,-1);
        tracep->declBit(c+233,"riscv_soc core write_back_io_in_soft_irq", false,-1);
        tracep->declBus(c+213,"riscv_soc core write_back_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+214,"riscv_soc core write_back_io_in_is_exception", false,-1);
        tracep->declBit(c+151,"riscv_soc core write_back_io_bus_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core write_back_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core write_back_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core write_back_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core write_back_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core write_back_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+154,"riscv_soc core write_back_io_bus_ready", false,-1);
        tracep->declBus(c+187,"riscv_soc core write_back_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+185,"riscv_soc core write_back_io_out_result_data", false,-1, 63,0);
        tracep->declBit(c+188,"riscv_soc core write_back_io_out_w_rs_en", false,-1);
        tracep->declBit(c+160,"riscv_soc core write_back_io_out_stall", false,-1);
        tracep->declBus(c+189,"riscv_soc core write_back_io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+190,"riscv_soc core write_back_io_out_csr_data", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core write_back_io_out_w_csr_en", false,-1);
        tracep->declBit(c+234,"riscv_soc core write_back_io_out_time_irq", false,-1);
        tracep->declBit(c+235,"riscv_soc core write_back_io_out_soft_irq", false,-1);
        tracep->declBus(c+236,"riscv_soc core write_back_io_out_exception", false,-1, 4,0);
        tracep->declBit(c+237,"riscv_soc core write_back_io_out_is_exception", false,-1);
        tracep->declQuad(c+238,"riscv_soc core write_back_io_out_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"riscv_soc core write_back_io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+242,"riscv_soc core write_back_io_out_commit", false,-1);
        tracep->declBit(c+193,"riscv_soc core write_back_io_out_flush", false,-1);
        tracep->declQuad(c+243,"riscv_soc core write_back_io_out_flush_pc", false,-1, 63,0);
        tracep->declBit(c+21,"riscv_soc core write_back_difftest_irq_0", false,-1);
        tracep->declBit(c+22,"riscv_soc core write_back_difftest_peripheral_0", false,-1);
        tracep->declBit(c+23,"riscv_soc core write_back_difftest_commit_0", false,-1);
        tracep->declQuad(c+24,"riscv_soc core write_back_difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+30,"riscv_soc core write_back_difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+97,"riscv_soc core write_back_inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+762,"riscv_soc core csr_reg_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core csr_reg_reset", false,-1);
        tracep->declBus(c+189,"riscv_soc core csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+190,"riscv_soc core csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+238,"riscv_soc core csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"riscv_soc core csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+234,"riscv_soc core csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+235,"riscv_soc core csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+236,"riscv_soc core csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+237,"riscv_soc core csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+242,"riscv_soc core csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+223,"riscv_soc core csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+220,"riscv_soc core csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+224,"riscv_soc core csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+226,"riscv_soc core csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+228,"riscv_soc core csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+230,"riscv_soc core csr_reg_io_r_csr_mie", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core csr_reg_reg_mepc_0", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv_soc core csr_reg_reg_mstatus_0", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core csr_reg_reg_mcause_0", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core csr_reg_reg_mtvec_0", false,-1, 63,0);
        tracep->declBit(c+762,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+155,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+156,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+158,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+233,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+232,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+762,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+101,"riscv_soc core i_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core i_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core i_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+844,"riscv_soc core i_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+846,"riscv_soc core i_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+847,"riscv_soc core i_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+106,"riscv_soc core i_cache io_cpu_ready", false,-1);
        tracep->declBit(c+847,"riscv_soc core i_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+107,"riscv_soc core i_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core i_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core i_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core i_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+113,"riscv_soc core i_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+847,"riscv_soc core i_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+114,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+115,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+118,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+762,"riscv_soc core i_cache sram0_data_clock", false,-1);
        tracep->declArray(c+245,"riscv_soc core i_cache sram0_data_io_Q", false,-1, 127,0);
        tracep->declBit(c+249,"riscv_soc core i_cache sram0_data_io_WEN", false,-1);
        tracep->declArray(c+250,"riscv_soc core i_cache sram0_data_io_BWEN", false,-1, 127,0);
        tracep->declBus(c+254,"riscv_soc core i_cache sram0_data_io_A", false,-1, 5,0);
        tracep->declArray(c+255,"riscv_soc core i_cache sram0_data_io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram0_tag_clock", false,-1);
        tracep->declArray(c+259,"riscv_soc core i_cache sram0_tag_io_Q", false,-1, 127,0);
        tracep->declBit(c+249,"riscv_soc core i_cache sram0_tag_io_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core i_cache sram0_tag_io_BWEN", false,-1, 127,0);
        tracep->declBus(c+263,"riscv_soc core i_cache sram0_tag_io_A", false,-1, 5,0);
        tracep->declArray(c+264,"riscv_soc core i_cache sram0_tag_io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram2_data_clock", false,-1);
        tracep->declArray(c+268,"riscv_soc core i_cache sram2_data_io_Q", false,-1, 127,0);
        tracep->declBit(c+272,"riscv_soc core i_cache sram2_data_io_WEN", false,-1);
        tracep->declArray(c+250,"riscv_soc core i_cache sram2_data_io_BWEN", false,-1, 127,0);
        tracep->declBus(c+254,"riscv_soc core i_cache sram2_data_io_A", false,-1, 5,0);
        tracep->declArray(c+255,"riscv_soc core i_cache sram2_data_io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram2_tag_clock", false,-1);
        tracep->declArray(c+273,"riscv_soc core i_cache sram2_tag_io_Q", false,-1, 127,0);
        tracep->declBit(c+272,"riscv_soc core i_cache sram2_tag_io_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core i_cache sram2_tag_io_BWEN", false,-1, 127,0);
        tracep->declBus(c+277,"riscv_soc core i_cache sram2_tag_io_A", false,-1, 5,0);
        tracep->declArray(c+264,"riscv_soc core i_cache sram2_tag_io_D", false,-1, 127,0);
        tracep->declQuad(c+278,"riscv_soc core i_cache Tag", false,-1, 53,0);
        tracep->declBus(c+280,"riscv_soc core i_cache Index", false,-1, 5,0);
        tracep->declBus(c+281,"riscv_soc core i_cache Offset", false,-1, 3,0);
        tracep->declBus(c+282,"riscv_soc core i_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+283,"riscv_soc core i_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+285,"riscv_soc core i_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+286,"riscv_soc core i_cache reg_is_w", false,-1);
        tracep->declQuad(c+287,"riscv_soc core i_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+289,"riscv_soc core i_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+290,"riscv_soc core i_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+106,"riscv_soc core i_cache reg_ready", false,-1);
        tracep->declQuad(c+104,"riscv_soc core i_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+291,"riscv_soc core i_cache reg_cache_write", false,-1);
        tracep->declBus(c+292,"riscv_soc core i_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+255,"riscv_soc core i_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+293,"riscv_soc core i_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+294,"riscv_soc core i_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+296,"riscv_soc core i_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+300,"riscv_soc core i_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+304,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declQuad(c+305,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+307,"riscv_soc core i_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+309,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+311,"riscv_soc core i_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+313,"riscv_soc core i_cache is_sram2_write", false,-1);
        tracep->declQuad(c+314,"riscv_soc core i_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+316,"riscv_soc core i_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core i_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+114,"riscv_soc core i_cache reg_r_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core i_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core i_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core i_cache reg_w_wlast", false,-1);
        tracep->declBit(c+107,"riscv_soc core i_cache reg_w_valid", false,-1);
        tracep->declBit(c+113,"riscv_soc core i_cache reg_b_ready", false,-1);
        tracep->declQuad(c+318,"riscv_soc core i_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+320,"riscv_soc core i_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+322,"riscv_soc core i_cache hit_0", false,-1);
        tracep->declBit(c+323,"riscv_soc core i_cache hit_2", false,-1);
        tracep->declBit(c+324,"riscv_soc core i_cache tag_valid_0", false,-1);
        tracep->declBit(c+325,"riscv_soc core i_cache tag_valid_2", false,-1);
        tracep->declBit(c+326,"riscv_soc core i_cache tag_dirty_0", false,-1);
        tracep->declBit(c+327,"riscv_soc core i_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+328,"riscv_soc core i_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+330,"riscv_soc core i_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+332,"riscv_soc core i_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+334,"riscv_soc core i_cache LRU_2", false,-1);
        tracep->declBit(c+335,"riscv_soc core i_cache reg_start_operation", false,-1);
        tracep->declBus(c+336,"riscv_soc core i_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+337,"riscv_soc core i_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+338,"riscv_soc core i_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+762,"riscv_soc core i_cache sram0_data clock", false,-1);
        tracep->declArray(c+245,"riscv_soc core i_cache sram0_data io_Q", false,-1, 127,0);
        tracep->declBit(c+249,"riscv_soc core i_cache sram0_data io_WEN", false,-1);
        tracep->declArray(c+250,"riscv_soc core i_cache sram0_data io_BWEN", false,-1, 127,0);
        tracep->declBus(c+254,"riscv_soc core i_cache sram0_data io_A", false,-1, 5,0);
        tracep->declArray(c+255,"riscv_soc core i_cache sram0_data io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram0_data sram_CLK", false,-1);
        tracep->declArray(c+245,"riscv_soc core i_cache sram0_data sram_Q", false,-1, 127,0);
        tracep->declBit(c+847,"riscv_soc core i_cache sram0_data sram_CEN", false,-1);
        tracep->declBit(c+249,"riscv_soc core i_cache sram0_data sram_WEN", false,-1);
        tracep->declArray(c+250,"riscv_soc core i_cache sram0_data sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+254,"riscv_soc core i_cache sram0_data sram_A", false,-1, 5,0);
        tracep->declArray(c+255,"riscv_soc core i_cache sram0_data sram_D", false,-1, 127,0);
        tracep->declBus(c+853,"riscv_soc core i_cache sram0_data sram Bits", false,-1, 31,0);
        tracep->declBus(c+854,"riscv_soc core i_cache sram0_data sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"riscv_soc core i_cache sram0_data sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+853,"riscv_soc core i_cache sram0_data sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+245,"riscv_soc core i_cache sram0_data sram Q", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram0_data sram CLK", false,-1);
        tracep->declBit(c+847,"riscv_soc core i_cache sram0_data sram CEN", false,-1);
        tracep->declBit(c+249,"riscv_soc core i_cache sram0_data sram WEN", false,-1);
        tracep->declArray(c+250,"riscv_soc core i_cache sram0_data sram BWEN", false,-1, 127,0);
        tracep->declBus(c+254,"riscv_soc core i_cache sram0_data sram A", false,-1, 5,0);
        tracep->declArray(c+255,"riscv_soc core i_cache sram0_data sram D", false,-1, 127,0);
        tracep->declBit(c+848,"riscv_soc core i_cache sram0_data sram cen", false,-1);
        tracep->declBit(c+304,"riscv_soc core i_cache sram0_data sram wen", false,-1);
        tracep->declArray(c+296,"riscv_soc core i_cache sram0_data sram bwen", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram0_tag clock", false,-1);
        tracep->declArray(c+259,"riscv_soc core i_cache sram0_tag io_Q", false,-1, 127,0);
        tracep->declBit(c+249,"riscv_soc core i_cache sram0_tag io_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core i_cache sram0_tag io_BWEN", false,-1, 127,0);
        tracep->declBus(c+263,"riscv_soc core i_cache sram0_tag io_A", false,-1, 5,0);
        tracep->declArray(c+264,"riscv_soc core i_cache sram0_tag io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram0_tag sram_CLK", false,-1);
        tracep->declArray(c+259,"riscv_soc core i_cache sram0_tag sram_Q", false,-1, 127,0);
        tracep->declBit(c+847,"riscv_soc core i_cache sram0_tag sram_CEN", false,-1);
        tracep->declBit(c+249,"riscv_soc core i_cache sram0_tag sram_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core i_cache sram0_tag sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+263,"riscv_soc core i_cache sram0_tag sram_A", false,-1, 5,0);
        tracep->declArray(c+264,"riscv_soc core i_cache sram0_tag sram_D", false,-1, 127,0);
        tracep->declBus(c+853,"riscv_soc core i_cache sram0_tag sram Bits", false,-1, 31,0);
        tracep->declBus(c+854,"riscv_soc core i_cache sram0_tag sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"riscv_soc core i_cache sram0_tag sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+853,"riscv_soc core i_cache sram0_tag sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+259,"riscv_soc core i_cache sram0_tag sram Q", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram0_tag sram CLK", false,-1);
        tracep->declBit(c+847,"riscv_soc core i_cache sram0_tag sram CEN", false,-1);
        tracep->declBit(c+249,"riscv_soc core i_cache sram0_tag sram WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core i_cache sram0_tag sram BWEN", false,-1, 127,0);
        tracep->declBus(c+263,"riscv_soc core i_cache sram0_tag sram A", false,-1, 5,0);
        tracep->declArray(c+264,"riscv_soc core i_cache sram0_tag sram D", false,-1, 127,0);
        tracep->declBit(c+848,"riscv_soc core i_cache sram0_tag sram cen", false,-1);
        tracep->declBit(c+304,"riscv_soc core i_cache sram0_tag sram wen", false,-1);
        tracep->declArray(c+856,"riscv_soc core i_cache sram0_tag sram bwen", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram2_data clock", false,-1);
        tracep->declArray(c+268,"riscv_soc core i_cache sram2_data io_Q", false,-1, 127,0);
        tracep->declBit(c+272,"riscv_soc core i_cache sram2_data io_WEN", false,-1);
        tracep->declArray(c+250,"riscv_soc core i_cache sram2_data io_BWEN", false,-1, 127,0);
        tracep->declBus(c+254,"riscv_soc core i_cache sram2_data io_A", false,-1, 5,0);
        tracep->declArray(c+255,"riscv_soc core i_cache sram2_data io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram2_data sram_CLK", false,-1);
        tracep->declArray(c+268,"riscv_soc core i_cache sram2_data sram_Q", false,-1, 127,0);
        tracep->declBit(c+847,"riscv_soc core i_cache sram2_data sram_CEN", false,-1);
        tracep->declBit(c+272,"riscv_soc core i_cache sram2_data sram_WEN", false,-1);
        tracep->declArray(c+250,"riscv_soc core i_cache sram2_data sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+254,"riscv_soc core i_cache sram2_data sram_A", false,-1, 5,0);
        tracep->declArray(c+255,"riscv_soc core i_cache sram2_data sram_D", false,-1, 127,0);
        tracep->declBus(c+853,"riscv_soc core i_cache sram2_data sram Bits", false,-1, 31,0);
        tracep->declBus(c+854,"riscv_soc core i_cache sram2_data sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"riscv_soc core i_cache sram2_data sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+853,"riscv_soc core i_cache sram2_data sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+268,"riscv_soc core i_cache sram2_data sram Q", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram2_data sram CLK", false,-1);
        tracep->declBit(c+847,"riscv_soc core i_cache sram2_data sram CEN", false,-1);
        tracep->declBit(c+272,"riscv_soc core i_cache sram2_data sram WEN", false,-1);
        tracep->declArray(c+250,"riscv_soc core i_cache sram2_data sram BWEN", false,-1, 127,0);
        tracep->declBus(c+254,"riscv_soc core i_cache sram2_data sram A", false,-1, 5,0);
        tracep->declArray(c+255,"riscv_soc core i_cache sram2_data sram D", false,-1, 127,0);
        tracep->declBit(c+848,"riscv_soc core i_cache sram2_data sram cen", false,-1);
        tracep->declBit(c+313,"riscv_soc core i_cache sram2_data sram wen", false,-1);
        tracep->declArray(c+296,"riscv_soc core i_cache sram2_data sram bwen", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram2_tag clock", false,-1);
        tracep->declArray(c+273,"riscv_soc core i_cache sram2_tag io_Q", false,-1, 127,0);
        tracep->declBit(c+272,"riscv_soc core i_cache sram2_tag io_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core i_cache sram2_tag io_BWEN", false,-1, 127,0);
        tracep->declBus(c+277,"riscv_soc core i_cache sram2_tag io_A", false,-1, 5,0);
        tracep->declArray(c+264,"riscv_soc core i_cache sram2_tag io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram2_tag sram_CLK", false,-1);
        tracep->declArray(c+273,"riscv_soc core i_cache sram2_tag sram_Q", false,-1, 127,0);
        tracep->declBit(c+847,"riscv_soc core i_cache sram2_tag sram_CEN", false,-1);
        tracep->declBit(c+272,"riscv_soc core i_cache sram2_tag sram_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core i_cache sram2_tag sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+277,"riscv_soc core i_cache sram2_tag sram_A", false,-1, 5,0);
        tracep->declArray(c+264,"riscv_soc core i_cache sram2_tag sram_D", false,-1, 127,0);
        tracep->declBus(c+853,"riscv_soc core i_cache sram2_tag sram Bits", false,-1, 31,0);
        tracep->declBus(c+854,"riscv_soc core i_cache sram2_tag sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"riscv_soc core i_cache sram2_tag sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+853,"riscv_soc core i_cache sram2_tag sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+273,"riscv_soc core i_cache sram2_tag sram Q", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core i_cache sram2_tag sram CLK", false,-1);
        tracep->declBit(c+847,"riscv_soc core i_cache sram2_tag sram CEN", false,-1);
        tracep->declBit(c+272,"riscv_soc core i_cache sram2_tag sram WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core i_cache sram2_tag sram BWEN", false,-1, 127,0);
        tracep->declBus(c+277,"riscv_soc core i_cache sram2_tag sram A", false,-1, 5,0);
        tracep->declArray(c+264,"riscv_soc core i_cache sram2_tag sram D", false,-1, 127,0);
        tracep->declBit(c+848,"riscv_soc core i_cache sram2_tag sram cen", false,-1);
        tracep->declBit(c+313,"riscv_soc core i_cache sram2_tag sram wen", false,-1);
        tracep->declArray(c+856,"riscv_soc core i_cache sram2_tag sram bwen", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+119,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+128,"riscv_soc core d_cache io_cpu_ready", false,-1);
        tracep->declBit(c+129,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+130,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+131,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+135,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+136,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+137,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+138,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+142,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+762,"riscv_soc core d_cache sram0_data_clock", false,-1);
        tracep->declArray(c+339,"riscv_soc core d_cache sram0_data_io_Q", false,-1, 127,0);
        tracep->declBit(c+343,"riscv_soc core d_cache sram0_data_io_WEN", false,-1);
        tracep->declArray(c+344,"riscv_soc core d_cache sram0_data_io_BWEN", false,-1, 127,0);
        tracep->declBus(c+348,"riscv_soc core d_cache sram0_data_io_A", false,-1, 5,0);
        tracep->declArray(c+349,"riscv_soc core d_cache sram0_data_io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram0_tag_clock", false,-1);
        tracep->declArray(c+353,"riscv_soc core d_cache sram0_tag_io_Q", false,-1, 127,0);
        tracep->declBit(c+343,"riscv_soc core d_cache sram0_tag_io_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core d_cache sram0_tag_io_BWEN", false,-1, 127,0);
        tracep->declBus(c+357,"riscv_soc core d_cache sram0_tag_io_A", false,-1, 5,0);
        tracep->declArray(c+358,"riscv_soc core d_cache sram0_tag_io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram2_data_clock", false,-1);
        tracep->declArray(c+362,"riscv_soc core d_cache sram2_data_io_Q", false,-1, 127,0);
        tracep->declBit(c+366,"riscv_soc core d_cache sram2_data_io_WEN", false,-1);
        tracep->declArray(c+344,"riscv_soc core d_cache sram2_data_io_BWEN", false,-1, 127,0);
        tracep->declBus(c+348,"riscv_soc core d_cache sram2_data_io_A", false,-1, 5,0);
        tracep->declArray(c+349,"riscv_soc core d_cache sram2_data_io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram2_tag_clock", false,-1);
        tracep->declArray(c+367,"riscv_soc core d_cache sram2_tag_io_Q", false,-1, 127,0);
        tracep->declBit(c+366,"riscv_soc core d_cache sram2_tag_io_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core d_cache sram2_tag_io_BWEN", false,-1, 127,0);
        tracep->declBus(c+357,"riscv_soc core d_cache sram2_tag_io_A", false,-1, 5,0);
        tracep->declArray(c+358,"riscv_soc core d_cache sram2_tag_io_D", false,-1, 127,0);
        tracep->declQuad(c+371,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+373,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+374,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+375,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+376,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+378,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+379,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+380,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+382,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+383,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+128,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+122,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+384,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+385,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+349,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+386,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+387,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+389,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+393,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+397,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+398,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+400,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+402,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+404,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+406,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+407,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+409,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+139,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+138,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+131,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+135,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+130,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+136,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+411,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+413,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+415,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+416,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+417,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+418,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+419,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+420,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+421,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+423,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+425,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+427,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+428,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+429,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+430,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+431,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+762,"riscv_soc core d_cache sram0_data clock", false,-1);
        tracep->declArray(c+339,"riscv_soc core d_cache sram0_data io_Q", false,-1, 127,0);
        tracep->declBit(c+343,"riscv_soc core d_cache sram0_data io_WEN", false,-1);
        tracep->declArray(c+344,"riscv_soc core d_cache sram0_data io_BWEN", false,-1, 127,0);
        tracep->declBus(c+348,"riscv_soc core d_cache sram0_data io_A", false,-1, 5,0);
        tracep->declArray(c+349,"riscv_soc core d_cache sram0_data io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram0_data sram_CLK", false,-1);
        tracep->declArray(c+339,"riscv_soc core d_cache sram0_data sram_Q", false,-1, 127,0);
        tracep->declBit(c+847,"riscv_soc core d_cache sram0_data sram_CEN", false,-1);
        tracep->declBit(c+343,"riscv_soc core d_cache sram0_data sram_WEN", false,-1);
        tracep->declArray(c+344,"riscv_soc core d_cache sram0_data sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+348,"riscv_soc core d_cache sram0_data sram_A", false,-1, 5,0);
        tracep->declArray(c+349,"riscv_soc core d_cache sram0_data sram_D", false,-1, 127,0);
        tracep->declBus(c+853,"riscv_soc core d_cache sram0_data sram Bits", false,-1, 31,0);
        tracep->declBus(c+854,"riscv_soc core d_cache sram0_data sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"riscv_soc core d_cache sram0_data sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+853,"riscv_soc core d_cache sram0_data sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+339,"riscv_soc core d_cache sram0_data sram Q", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram0_data sram CLK", false,-1);
        tracep->declBit(c+847,"riscv_soc core d_cache sram0_data sram CEN", false,-1);
        tracep->declBit(c+343,"riscv_soc core d_cache sram0_data sram WEN", false,-1);
        tracep->declArray(c+344,"riscv_soc core d_cache sram0_data sram BWEN", false,-1, 127,0);
        tracep->declBus(c+348,"riscv_soc core d_cache sram0_data sram A", false,-1, 5,0);
        tracep->declArray(c+349,"riscv_soc core d_cache sram0_data sram D", false,-1, 127,0);
        tracep->declBit(c+848,"riscv_soc core d_cache sram0_data sram cen", false,-1);
        tracep->declBit(c+397,"riscv_soc core d_cache sram0_data sram wen", false,-1);
        tracep->declArray(c+389,"riscv_soc core d_cache sram0_data sram bwen", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram0_tag clock", false,-1);
        tracep->declArray(c+353,"riscv_soc core d_cache sram0_tag io_Q", false,-1, 127,0);
        tracep->declBit(c+343,"riscv_soc core d_cache sram0_tag io_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core d_cache sram0_tag io_BWEN", false,-1, 127,0);
        tracep->declBus(c+357,"riscv_soc core d_cache sram0_tag io_A", false,-1, 5,0);
        tracep->declArray(c+358,"riscv_soc core d_cache sram0_tag io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram0_tag sram_CLK", false,-1);
        tracep->declArray(c+353,"riscv_soc core d_cache sram0_tag sram_Q", false,-1, 127,0);
        tracep->declBit(c+847,"riscv_soc core d_cache sram0_tag sram_CEN", false,-1);
        tracep->declBit(c+343,"riscv_soc core d_cache sram0_tag sram_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core d_cache sram0_tag sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+357,"riscv_soc core d_cache sram0_tag sram_A", false,-1, 5,0);
        tracep->declArray(c+358,"riscv_soc core d_cache sram0_tag sram_D", false,-1, 127,0);
        tracep->declBus(c+853,"riscv_soc core d_cache sram0_tag sram Bits", false,-1, 31,0);
        tracep->declBus(c+854,"riscv_soc core d_cache sram0_tag sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"riscv_soc core d_cache sram0_tag sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+853,"riscv_soc core d_cache sram0_tag sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+353,"riscv_soc core d_cache sram0_tag sram Q", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram0_tag sram CLK", false,-1);
        tracep->declBit(c+847,"riscv_soc core d_cache sram0_tag sram CEN", false,-1);
        tracep->declBit(c+343,"riscv_soc core d_cache sram0_tag sram WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core d_cache sram0_tag sram BWEN", false,-1, 127,0);
        tracep->declBus(c+357,"riscv_soc core d_cache sram0_tag sram A", false,-1, 5,0);
        tracep->declArray(c+358,"riscv_soc core d_cache sram0_tag sram D", false,-1, 127,0);
        tracep->declBit(c+848,"riscv_soc core d_cache sram0_tag sram cen", false,-1);
        tracep->declBit(c+397,"riscv_soc core d_cache sram0_tag sram wen", false,-1);
        tracep->declArray(c+856,"riscv_soc core d_cache sram0_tag sram bwen", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram2_data clock", false,-1);
        tracep->declArray(c+362,"riscv_soc core d_cache sram2_data io_Q", false,-1, 127,0);
        tracep->declBit(c+366,"riscv_soc core d_cache sram2_data io_WEN", false,-1);
        tracep->declArray(c+344,"riscv_soc core d_cache sram2_data io_BWEN", false,-1, 127,0);
        tracep->declBus(c+348,"riscv_soc core d_cache sram2_data io_A", false,-1, 5,0);
        tracep->declArray(c+349,"riscv_soc core d_cache sram2_data io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram2_data sram_CLK", false,-1);
        tracep->declArray(c+362,"riscv_soc core d_cache sram2_data sram_Q", false,-1, 127,0);
        tracep->declBit(c+847,"riscv_soc core d_cache sram2_data sram_CEN", false,-1);
        tracep->declBit(c+366,"riscv_soc core d_cache sram2_data sram_WEN", false,-1);
        tracep->declArray(c+344,"riscv_soc core d_cache sram2_data sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+348,"riscv_soc core d_cache sram2_data sram_A", false,-1, 5,0);
        tracep->declArray(c+349,"riscv_soc core d_cache sram2_data sram_D", false,-1, 127,0);
        tracep->declBus(c+853,"riscv_soc core d_cache sram2_data sram Bits", false,-1, 31,0);
        tracep->declBus(c+854,"riscv_soc core d_cache sram2_data sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"riscv_soc core d_cache sram2_data sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+853,"riscv_soc core d_cache sram2_data sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+362,"riscv_soc core d_cache sram2_data sram Q", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram2_data sram CLK", false,-1);
        tracep->declBit(c+847,"riscv_soc core d_cache sram2_data sram CEN", false,-1);
        tracep->declBit(c+366,"riscv_soc core d_cache sram2_data sram WEN", false,-1);
        tracep->declArray(c+344,"riscv_soc core d_cache sram2_data sram BWEN", false,-1, 127,0);
        tracep->declBus(c+348,"riscv_soc core d_cache sram2_data sram A", false,-1, 5,0);
        tracep->declArray(c+349,"riscv_soc core d_cache sram2_data sram D", false,-1, 127,0);
        tracep->declBit(c+848,"riscv_soc core d_cache sram2_data sram cen", false,-1);
        tracep->declBit(c+406,"riscv_soc core d_cache sram2_data sram wen", false,-1);
        tracep->declArray(c+389,"riscv_soc core d_cache sram2_data sram bwen", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram2_tag clock", false,-1);
        tracep->declArray(c+367,"riscv_soc core d_cache sram2_tag io_Q", false,-1, 127,0);
        tracep->declBit(c+366,"riscv_soc core d_cache sram2_tag io_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core d_cache sram2_tag io_BWEN", false,-1, 127,0);
        tracep->declBus(c+357,"riscv_soc core d_cache sram2_tag io_A", false,-1, 5,0);
        tracep->declArray(c+358,"riscv_soc core d_cache sram2_tag io_D", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram2_tag sram_CLK", false,-1);
        tracep->declArray(c+367,"riscv_soc core d_cache sram2_tag sram_Q", false,-1, 127,0);
        tracep->declBit(c+847,"riscv_soc core d_cache sram2_tag sram_CEN", false,-1);
        tracep->declBit(c+366,"riscv_soc core d_cache sram2_tag sram_WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core d_cache sram2_tag sram_BWEN", false,-1, 127,0);
        tracep->declBus(c+357,"riscv_soc core d_cache sram2_tag sram_A", false,-1, 5,0);
        tracep->declArray(c+358,"riscv_soc core d_cache sram2_tag sram_D", false,-1, 127,0);
        tracep->declBus(c+853,"riscv_soc core d_cache sram2_tag sram Bits", false,-1, 31,0);
        tracep->declBus(c+854,"riscv_soc core d_cache sram2_tag sram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"riscv_soc core d_cache sram2_tag sram Add_Width", false,-1, 31,0);
        tracep->declBus(c+853,"riscv_soc core d_cache sram2_tag sram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+367,"riscv_soc core d_cache sram2_tag sram Q", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core d_cache sram2_tag sram CLK", false,-1);
        tracep->declBit(c+847,"riscv_soc core d_cache sram2_tag sram CEN", false,-1);
        tracep->declBit(c+366,"riscv_soc core d_cache sram2_tag sram WEN", false,-1);
        tracep->declArray(c+849,"riscv_soc core d_cache sram2_tag sram BWEN", false,-1, 127,0);
        tracep->declBus(c+357,"riscv_soc core d_cache sram2_tag sram A", false,-1, 5,0);
        tracep->declArray(c+358,"riscv_soc core d_cache sram2_tag sram D", false,-1, 127,0);
        tracep->declBit(c+848,"riscv_soc core d_cache sram2_tag sram cen", false,-1);
        tracep->declBit(c+406,"riscv_soc core d_cache sram2_tag sram wen", false,-1);
        tracep->declArray(c+856,"riscv_soc core d_cache sram2_tag sram bwen", false,-1, 127,0);
        tracep->declBit(c+762,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+114,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+115,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+118,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+129,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+130,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+131,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+133,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+135,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+137,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+138,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+142,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+143,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+145,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+848,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBus(c+432,"riscv_soc core cross_bar reg_w_cnt", false,-1, 1,0);
        tracep->declBit(c+433,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+434,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+435,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+436,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+437,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+438,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+439,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+440,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+441,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+147,"riscv_soc core cross_bar_1 io_fetch_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1 io_fetch_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core cross_bar_1 io_fetch_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+150,"riscv_soc core cross_bar_1 io_fetch_ready", false,-1);
        tracep->declBit(c+151,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+154,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+101,"riscv_soc core cross_bar_1 io_ICache_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1 io_ICache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core cross_bar_1 io_ICache_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+106,"riscv_soc core cross_bar_1 io_ICache_ready", false,-1);
        tracep->declBit(c+119,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+128,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+143,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+145,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+158,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+442,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+443,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+444,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+762,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+159,"riscv_soc core fetch io_in_de_stall", false,-1);
        tracep->declBit(c+160,"riscv_soc core fetch io_in_wb_stall", false,-1);
        tracep->declBit(c+161,"riscv_soc core fetch io_in_ex_stall", false,-1);
        tracep->declQuad(c+162,"riscv_soc core fetch io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core fetch io_in_flush", false,-1);
        tracep->declBit(c+147,"riscv_soc core fetch io_bus_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core fetch io_bus_bits_pc_0", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core fetch io_bus_bits_inst", false,-1, 63,0);
        tracep->declBit(c+150,"riscv_soc core fetch io_bus_ready", false,-1);
        tracep->declQuad(c+165,"riscv_soc core fetch io_out_pc_1", false,-1, 63,0);
        tracep->declBus(c+167,"riscv_soc core fetch io_out_inst", false,-1, 31,0);
        tracep->declBit(c+445,"riscv_soc core fetch stall", false,-1);
        tracep->declQuad(c+102,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core fetch reg_pc_1", false,-1, 63,0);
        tracep->declBus(c+167,"riscv_soc core fetch reg_inst", false,-1, 31,0);
        tracep->declBit(c+147,"riscv_soc core fetch reg_valid", false,-1);
        tracep->declQuad(c+446,"riscv_soc core fetch reg_temp_pc_1", false,-1, 63,0);
        tracep->declBus(c+448,"riscv_soc core fetch reg_temp_inst", false,-1, 31,0);
        tracep->declBit(c+449,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+450,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+452,"riscv_soc core fetch need_update", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute reset", false,-1);
        tracep->declBus(c+168,"riscv_soc core execute io_in_opType", false,-1, 2,0);
        tracep->declBus(c+169,"riscv_soc core execute io_in_exuType", false,-1, 5,0);
        tracep->declBus(c+170,"riscv_soc core execute io_in_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+171,"riscv_soc core execute io_in_rs1_data", false,-1, 63,0);
        tracep->declBus(c+173,"riscv_soc core execute io_in_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+174,"riscv_soc core execute io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core execute io_in_imm_data", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute io_in_pc", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core execute io_in_inst", false,-1, 31,0);
        tracep->declBus(c+181,"riscv_soc core execute io_in_rs_addr", false,-1, 4,0);
        tracep->declBus(c+182,"riscv_soc core execute io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+183,"riscv_soc core execute io_in_csr_data", false,-1, 63,0);
        tracep->declQuad(c+185,"riscv_soc core execute io_in_wb_result_data", false,-1, 63,0);
        tracep->declBus(c+187,"riscv_soc core execute io_in_wb_rs_addr", false,-1, 4,0);
        tracep->declBit(c+188,"riscv_soc core execute io_in_wb_w_rs_en", false,-1);
        tracep->declBus(c+189,"riscv_soc core execute io_in_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+190,"riscv_soc core execute io_in_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core execute io_in_wb_w_csr_en", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute io_in_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute io_in_flush", false,-1);
        tracep->declBus(c+194,"riscv_soc core execute io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+195,"riscv_soc core execute io_out_rs_data", false,-1, 63,0);
        tracep->declBit(c+197,"riscv_soc core execute io_out_w_rs_en", false,-1);
        tracep->declBus(c+198,"riscv_soc core execute io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+199,"riscv_soc core execute io_out_pc", false,-1, 63,0);
        tracep->declBus(c+201,"riscv_soc core execute io_out_inst", false,-1, 31,0);
        tracep->declBus(c+202,"riscv_soc core execute io_out_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+203,"riscv_soc core execute io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+205,"riscv_soc core execute io_out_mem_addr", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core execute io_out_mem_avalid", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute io_out_w_mem_en", false,-1);
        tracep->declBus(c+209,"riscv_soc core execute io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+210,"riscv_soc core execute io_out_csr_data", false,-1, 63,0);
        tracep->declBit(c+212,"riscv_soc core execute io_out_w_csr_en", false,-1);
        tracep->declBus(c+213,"riscv_soc core execute io_out_exception", false,-1, 4,0);
        tracep->declBit(c+214,"riscv_soc core execute io_out_is_exception", false,-1);
        tracep->declBit(c+215,"riscv_soc core execute io_out_is_mret", false,-1);
        tracep->declQuad(c+216,"riscv_soc core execute io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core execute io_out_valid_next_pc", false,-1);
        tracep->declBit(c+219,"riscv_soc core execute io_out_flush", false,-1);
        tracep->declBit(c+161,"riscv_soc core execute io_out_stall", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute alu_exu_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute alu_exu_reset", false,-1);
        tracep->declBit(c+453,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute alu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+454,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+456,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declBit(c+160,"riscv_soc core execute alu_exu_io_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute alu_exu_io_in_flush", false,-1);
        tracep->declQuad(c+458,"riscv_soc core execute alu_exu_io_result_data", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core execute alu_exu_io_result_pc", false,-1, 63,0);
        tracep->declBit(c+460,"riscv_soc core execute alu_exu_io_next_pc_valid", false,-1);
        tracep->declBit(c+461,"riscv_soc core execute alu_exu_io_w_rs_en", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute lsu_exu_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute lsu_exu_reset", false,-1);
        tracep->declBit(c+462,"riscv_soc core execute lsu_exu_io_valid", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute lsu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+463,"riscv_soc core execute lsu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core execute lsu_exu_io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+205,"riscv_soc core execute lsu_exu_io_address_result", false,-1, 63,0);
        tracep->declBit(c+465,"riscv_soc core execute lsu_exu_io_avalid", false,-1);
        tracep->declBit(c+466,"riscv_soc core execute lsu_exu_io_w_mem_en", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute lsu_exu_io_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute lsu_exu_io_in_flush", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute mu_exu_io_in_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute mu_exu_io_in_flush", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute mu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+454,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+467,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+469,"riscv_soc core execute mu_exu_io_result_data", false,-1, 63,0);
        tracep->declBit(c+471,"riscv_soc core execute mu_exu_io_stall", false,-1);
        tracep->declBit(c+472,"riscv_soc core execute mu_exu_io_in_valid", false,-1);
        tracep->declBit(c+473,"riscv_soc core execute mu_exu_io_out_valid", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute csr_exu_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute csr_exu_reset", false,-1);
        tracep->declBit(c+474,"riscv_soc core execute csr_exu_io_valid", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute csr_exu_io_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute csr_exu_io_in_flush", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute csr_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+475,"riscv_soc core execute csr_exu_io_csr_data", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core execute csr_exu_io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+477,"riscv_soc core execute csr_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+479,"riscv_soc core execute csr_exu_io_rd_result", false,-1, 63,0);
        tracep->declBit(c+481,"riscv_soc core execute csr_exu_io_w_rs_en", false,-1);
        tracep->declQuad(c+210,"riscv_soc core execute csr_exu_io_csr_result", false,-1, 63,0);
        tracep->declBit(c+482,"riscv_soc core execute csr_exu_io_w_csr_en", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute abn_exu_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute abn_exu_reset", false,-1);
        tracep->declBit(c+483,"riscv_soc core execute abn_exu_io_valid", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute abn_exu_io_exuType", false,-1, 5,0);
        tracep->declBit(c+160,"riscv_soc core execute abn_exu_io_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute abn_exu_io_in_flush", false,-1);
        tracep->declBit(c+484,"riscv_soc core execute abn_exu_io_is_mret", false,-1);
        tracep->declBus(c+213,"riscv_soc core execute abn_exu_io_exception", false,-1, 4,0);
        tracep->declBit(c+485,"riscv_soc core execute abn_exu_io_is_exception", false,-1);
        tracep->declBus(c+486,"riscv_soc core execute reg_valid", false,-1, 4,0);
        tracep->declBit(c+487,"riscv_soc core execute stall", false,-1);
        tracep->declQuad(c+488,"riscv_soc core execute reg_rs_addr", false,-1, 63,0);
        tracep->declBus(c+209,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBus(c+490,"riscv_soc core execute reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+199,"riscv_soc core execute reg_pc", false,-1, 63,0);
        tracep->declBus(c+201,"riscv_soc core execute reg_inst", false,-1, 31,0);
        tracep->declBit(c+491,"riscv_soc core execute reg_flush", false,-1);
        tracep->declBus(c+492,"riscv_soc core execute valid", false,-1, 4,0);
        tracep->declQuad(c+493,"riscv_soc core execute reg_rs_data", false,-1, 63,0);
        tracep->declBit(c+495,"riscv_soc core execute reg_w_rs_en", false,-1);
        tracep->declBit(c+496,"riscv_soc core execute reg_w_csr_en", false,-1);
        tracep->declQuad(c+497,"riscv_soc core execute rs2_data", false,-1, 63,0);
        tracep->declQuad(c+203,"riscv_soc core execute reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+202,"riscv_soc core execute reg_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+499,"riscv_soc core execute reg_mem_avalid", false,-1);
        tracep->declBit(c+500,"riscv_soc core execute reg_w_mem_en", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute alu_exu clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute alu_exu reset", false,-1);
        tracep->declBit(c+453,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute alu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+454,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+456,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core execute alu_exu io_op_imm", false,-1, 63,0);
        tracep->declQuad(c+178,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declBit(c+160,"riscv_soc core execute alu_exu io_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute alu_exu io_in_flush", false,-1);
        tracep->declQuad(c+458,"riscv_soc core execute alu_exu io_result_data", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core execute alu_exu io_result_pc", false,-1, 63,0);
        tracep->declBit(c+460,"riscv_soc core execute alu_exu io_next_pc_valid", false,-1);
        tracep->declBit(c+461,"riscv_soc core execute alu_exu io_w_rs_en", false,-1);
        tracep->declQuad(c+501,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declArray(c+503,"riscv_soc core execute alu_exu subresult", false,-1, 64,0);
        tracep->declBit(c+506,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+507,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declQuad(c+508,"riscv_soc core execute alu_exu sllw_temp", false,-1, 62,0);
        tracep->declBus(c+510,"riscv_soc core execute alu_exu srlw_temp", false,-1, 31,0);
        tracep->declBus(c+511,"riscv_soc core execute alu_exu sraw_temp", false,-1, 31,0);
        tracep->declQuad(c+512,"riscv_soc core execute alu_exu add_temp", false,-1, 63,0);
        tracep->declArray(c+514,"riscv_soc core execute alu_exu temp_result_data", false,-1, 64,0);
        tracep->declBit(c+517,"riscv_soc core execute alu_exu w_rs_en", false,-1);
        tracep->declQuad(c+518,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declArray(c+520,"riscv_soc core execute alu_exu next_pc3", false,-1, 64,0);
        tracep->declArray(c+523,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declBit(c+526,"riscv_soc core execute alu_exu next_pc_valid", false,-1);
        tracep->declQuad(c+527,"riscv_soc core execute alu_exu result_pc", false,-1, 63,0);
        tracep->declQuad(c+458,"riscv_soc core execute alu_exu reg_result_data", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc core execute alu_exu reg_result_pc", false,-1, 63,0);
        tracep->declBit(c+460,"riscv_soc core execute alu_exu reg_next_pc_valid", false,-1);
        tracep->declBit(c+461,"riscv_soc core execute alu_exu reg_w_rs_en", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute lsu_exu clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute lsu_exu reset", false,-1);
        tracep->declBit(c+462,"riscv_soc core execute lsu_exu io_valid", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute lsu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+463,"riscv_soc core execute lsu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core execute lsu_exu io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+205,"riscv_soc core execute lsu_exu io_address_result", false,-1, 63,0);
        tracep->declBit(c+465,"riscv_soc core execute lsu_exu io_avalid", false,-1);
        tracep->declBit(c+466,"riscv_soc core execute lsu_exu io_w_mem_en", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute lsu_exu io_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute lsu_exu io_in_flush", false,-1);
        tracep->declQuad(c+205,"riscv_soc core execute lsu_exu reg_address_result", false,-1, 63,0);
        tracep->declBit(c+465,"riscv_soc core execute lsu_exu reg_avalid", false,-1);
        tracep->declBit(c+466,"riscv_soc core execute lsu_exu reg_w_mem_en", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute mu_exu io_in_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute mu_exu io_in_flush", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute mu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+454,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+467,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+469,"riscv_soc core execute mu_exu io_result_data", false,-1, 63,0);
        tracep->declBit(c+471,"riscv_soc core execute mu_exu io_stall", false,-1);
        tracep->declBit(c+472,"riscv_soc core execute mu_exu io_in_valid", false,-1);
        tracep->declBit(c+473,"riscv_soc core execute mu_exu io_out_valid", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute mu_exu div_io_in_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute mu_exu div_io_in_flush", false,-1);
        tracep->declQuad(c+454,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+467,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+529,"riscv_soc core execute mu_exu div_io_result", false,-1, 63,0);
        tracep->declBit(c+531,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 5,0);
        tracep->declBit(c+532,"riscv_soc core execute mu_exu div_io_stall", false,-1);
        tracep->declBit(c+533,"riscv_soc core execute mu_exu div_io_out_valid", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute mu_exu mul_io_in_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute mu_exu mul_io_in_flush", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+454,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+467,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+534,"riscv_soc core execute mu_exu mul_io_result", false,-1, 63,0);
        tracep->declBit(c+536,"riscv_soc core execute mu_exu mul_io_stall", false,-1);
        tracep->declBit(c+537,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declBit(c+538,"riscv_soc core execute mu_exu mul_io_out_valid", false,-1);
        tracep->declBit(c+762,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute mu_exu div io_in_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute mu_exu div io_in_flush", false,-1);
        tracep->declQuad(c+454,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+467,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+529,"riscv_soc core execute mu_exu div io_result", false,-1, 63,0);
        tracep->declBit(c+531,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute mu_exu div io_exuType", false,-1, 5,0);
        tracep->declBit(c+532,"riscv_soc core execute mu_exu div io_stall", false,-1);
        tracep->declBit(c+533,"riscv_soc core execute mu_exu div io_out_valid", false,-1);
        tracep->declBit(c+539,"riscv_soc core execute mu_exu div valid", false,-1);
        tracep->declArray(c+540,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+543,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+546,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+549,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+552,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+555,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+558,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+561,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+564,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+565,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+566,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 5,0);
        tracep->declBit(c+533,"riscv_soc core execute mu_exu div reg_out_valid", false,-1);
        tracep->declBit(c+532,"riscv_soc core execute mu_exu div reg_stall", false,-1);
        tracep->declArray(c+567,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+572,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+573,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+574,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+575,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declQuad(c+576,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+578,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+762,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute mu_exu mul io_in_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute mu_exu mul io_in_flush", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 5,0);
        tracep->declQuad(c+454,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+467,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+534,"riscv_soc core execute mu_exu mul io_result", false,-1, 63,0);
        tracep->declBit(c+536,"riscv_soc core execute mu_exu mul io_stall", false,-1);
        tracep->declBit(c+537,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declBit(c+538,"riscv_soc core execute mu_exu mul io_out_valid", false,-1);
        tracep->declBit(c+580,"riscv_soc core execute mu_exu mul valid", false,-1);
        tracep->declArray(c+581,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+586,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+589,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+536,"riscv_soc core execute mu_exu mul reg_stall", false,-1);
        tracep->declBus(c+592,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 5,0);
        tracep->declBus(c+593,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+594,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+597,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+602,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+607,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 3,0);
        tracep->declBit(c+538,"riscv_soc core execute mu_exu mul reg_out_valid", false,-1);
        tracep->declArray(c+608,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBit(c+762,"riscv_soc core execute csr_exu clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute csr_exu reset", false,-1);
        tracep->declBit(c+474,"riscv_soc core execute csr_exu io_valid", false,-1);
        tracep->declBit(c+160,"riscv_soc core execute csr_exu io_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute csr_exu io_in_flush", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute csr_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+475,"riscv_soc core execute csr_exu io_csr_data", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core execute csr_exu io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+477,"riscv_soc core execute csr_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+479,"riscv_soc core execute csr_exu io_rd_result", false,-1, 63,0);
        tracep->declBit(c+481,"riscv_soc core execute csr_exu io_w_rs_en", false,-1);
        tracep->declQuad(c+210,"riscv_soc core execute csr_exu io_csr_result", false,-1, 63,0);
        tracep->declBit(c+482,"riscv_soc core execute csr_exu io_w_csr_en", false,-1);
        tracep->declQuad(c+479,"riscv_soc core execute csr_exu reg_rd_result", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc core execute csr_exu reg_csr_result", false,-1, 63,0);
        tracep->declBit(c+481,"riscv_soc core execute csr_exu reg_w_rs_en", false,-1);
        tracep->declBit(c+482,"riscv_soc core execute csr_exu reg_w_csr_en", false,-1);
        tracep->declArray(c+613,"riscv_soc core execute csr_exu temp_csr_result_data", false,-1, 64,0);
        tracep->declBit(c+762,"riscv_soc core execute abn_exu clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core execute abn_exu reset", false,-1);
        tracep->declBit(c+483,"riscv_soc core execute abn_exu io_valid", false,-1);
        tracep->declBus(c+169,"riscv_soc core execute abn_exu io_exuType", false,-1, 5,0);
        tracep->declBit(c+160,"riscv_soc core execute abn_exu io_stall", false,-1);
        tracep->declBit(c+193,"riscv_soc core execute abn_exu io_in_flush", false,-1);
        tracep->declBit(c+484,"riscv_soc core execute abn_exu io_is_mret", false,-1);
        tracep->declBus(c+213,"riscv_soc core execute abn_exu io_exception", false,-1, 4,0);
        tracep->declBit(c+485,"riscv_soc core execute abn_exu io_is_exception", false,-1);
        tracep->declBit(c+484,"riscv_soc core execute abn_exu reg_is_mret", false,-1);
        tracep->declBus(c+213,"riscv_soc core execute abn_exu reg_exception", false,-1, 4,0);
        tracep->declBit(c+485,"riscv_soc core execute abn_exu reg_is_exception", false,-1);
        tracep->declBit(c+762,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core decode reset", false,-1);
        tracep->declBus(c+167,"riscv_soc core decode io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+165,"riscv_soc core decode io_in_pc", false,-1, 63,0);
        tracep->declBus(c+187,"riscv_soc core decode io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+185,"riscv_soc core decode io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+188,"riscv_soc core decode io_in_w_rs_en", false,-1);
        tracep->declQuad(c+220,"riscv_soc core decode io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+222,"riscv_soc core decode io_in_stall", false,-1);
        tracep->declBit(c+164,"riscv_soc core decode io_in_flush", false,-1);
        tracep->declQuad(c+171,"riscv_soc core decode io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+174,"riscv_soc core decode io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+170,"riscv_soc core decode io_out_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+173,"riscv_soc core decode io_out_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+223,"riscv_soc core decode io_out_csr_addr_0", false,-1, 11,0);
        tracep->declBus(c+182,"riscv_soc core decode io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+183,"riscv_soc core decode io_out_csr_data", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core decode io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+176,"riscv_soc core decode io_out_imm_data", false,-1, 63,0);
        tracep->declBus(c+168,"riscv_soc core decode io_out_opType", false,-1, 2,0);
        tracep->declBus(c+169,"riscv_soc core decode io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+178,"riscv_soc core decode io_out_pc", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core decode io_out_inst", false,-1, 31,0);
        tracep->declBit(c+159,"riscv_soc core decode io_out_stall", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+616+i*2,"riscv_soc core decode regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_en", false,-1);
        tracep->declBus(c+860,"riscv_soc core decode regfile_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+680,"riscv_soc core decode regfile_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+861,"riscv_soc core decode regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+31,"riscv_soc core decode regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_2_en", false,-1);
        tracep->declBus(c+862,"riscv_soc core decode regfile_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+33,"riscv_soc core decode regfile_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_3_en", false,-1);
        tracep->declBus(c+863,"riscv_soc core decode regfile_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"riscv_soc core decode regfile_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+864,"riscv_soc core decode regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+37,"riscv_soc core decode regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_5_en", false,-1);
        tracep->declBus(c+865,"riscv_soc core decode regfile_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+39,"riscv_soc core decode regfile_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_6_en", false,-1);
        tracep->declBus(c+866,"riscv_soc core decode regfile_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+41,"riscv_soc core decode regfile_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_7_en", false,-1);
        tracep->declBus(c+867,"riscv_soc core decode regfile_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+43,"riscv_soc core decode regfile_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_8_en", false,-1);
        tracep->declBus(c+868,"riscv_soc core decode regfile_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+45,"riscv_soc core decode regfile_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_9_en", false,-1);
        tracep->declBus(c+869,"riscv_soc core decode regfile_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+47,"riscv_soc core decode regfile_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_10_en", false,-1);
        tracep->declBus(c+870,"riscv_soc core decode regfile_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+49,"riscv_soc core decode regfile_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_11_en", false,-1);
        tracep->declBus(c+871,"riscv_soc core decode regfile_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+51,"riscv_soc core decode regfile_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_12_en", false,-1);
        tracep->declBus(c+872,"riscv_soc core decode regfile_MPORT_12_addr", false,-1, 4,0);
        tracep->declQuad(c+53,"riscv_soc core decode regfile_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_13_en", false,-1);
        tracep->declBus(c+873,"riscv_soc core decode regfile_MPORT_13_addr", false,-1, 4,0);
        tracep->declQuad(c+55,"riscv_soc core decode regfile_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_14_en", false,-1);
        tracep->declBus(c+874,"riscv_soc core decode regfile_MPORT_14_addr", false,-1, 4,0);
        tracep->declQuad(c+57,"riscv_soc core decode regfile_MPORT_14_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_15_en", false,-1);
        tracep->declBus(c+875,"riscv_soc core decode regfile_MPORT_15_addr", false,-1, 4,0);
        tracep->declQuad(c+59,"riscv_soc core decode regfile_MPORT_15_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_16_en", false,-1);
        tracep->declBus(c+876,"riscv_soc core decode regfile_MPORT_16_addr", false,-1, 4,0);
        tracep->declQuad(c+61,"riscv_soc core decode regfile_MPORT_16_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_17_en", false,-1);
        tracep->declBus(c+877,"riscv_soc core decode regfile_MPORT_17_addr", false,-1, 4,0);
        tracep->declQuad(c+63,"riscv_soc core decode regfile_MPORT_17_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_18_en", false,-1);
        tracep->declBus(c+878,"riscv_soc core decode regfile_MPORT_18_addr", false,-1, 4,0);
        tracep->declQuad(c+65,"riscv_soc core decode regfile_MPORT_18_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_19_en", false,-1);
        tracep->declBus(c+879,"riscv_soc core decode regfile_MPORT_19_addr", false,-1, 4,0);
        tracep->declQuad(c+67,"riscv_soc core decode regfile_MPORT_19_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_20_en", false,-1);
        tracep->declBus(c+880,"riscv_soc core decode regfile_MPORT_20_addr", false,-1, 4,0);
        tracep->declQuad(c+69,"riscv_soc core decode regfile_MPORT_20_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_21_en", false,-1);
        tracep->declBus(c+881,"riscv_soc core decode regfile_MPORT_21_addr", false,-1, 4,0);
        tracep->declQuad(c+71,"riscv_soc core decode regfile_MPORT_21_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_22_en", false,-1);
        tracep->declBus(c+882,"riscv_soc core decode regfile_MPORT_22_addr", false,-1, 4,0);
        tracep->declQuad(c+73,"riscv_soc core decode regfile_MPORT_22_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_23_en", false,-1);
        tracep->declBus(c+883,"riscv_soc core decode regfile_MPORT_23_addr", false,-1, 4,0);
        tracep->declQuad(c+75,"riscv_soc core decode regfile_MPORT_23_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_24_en", false,-1);
        tracep->declBus(c+884,"riscv_soc core decode regfile_MPORT_24_addr", false,-1, 4,0);
        tracep->declQuad(c+77,"riscv_soc core decode regfile_MPORT_24_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_25_en", false,-1);
        tracep->declBus(c+885,"riscv_soc core decode regfile_MPORT_25_addr", false,-1, 4,0);
        tracep->declQuad(c+79,"riscv_soc core decode regfile_MPORT_25_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_26_en", false,-1);
        tracep->declBus(c+886,"riscv_soc core decode regfile_MPORT_26_addr", false,-1, 4,0);
        tracep->declQuad(c+81,"riscv_soc core decode regfile_MPORT_26_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_27_en", false,-1);
        tracep->declBus(c+887,"riscv_soc core decode regfile_MPORT_27_addr", false,-1, 4,0);
        tracep->declQuad(c+83,"riscv_soc core decode regfile_MPORT_27_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_28_en", false,-1);
        tracep->declBus(c+888,"riscv_soc core decode regfile_MPORT_28_addr", false,-1, 4,0);
        tracep->declQuad(c+85,"riscv_soc core decode regfile_MPORT_28_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_29_en", false,-1);
        tracep->declBus(c+889,"riscv_soc core decode regfile_MPORT_29_addr", false,-1, 4,0);
        tracep->declQuad(c+87,"riscv_soc core decode regfile_MPORT_29_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_30_en", false,-1);
        tracep->declBus(c+890,"riscv_soc core decode regfile_MPORT_30_addr", false,-1, 4,0);
        tracep->declQuad(c+89,"riscv_soc core decode regfile_MPORT_30_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_31_en", false,-1);
        tracep->declBus(c+891,"riscv_soc core decode regfile_MPORT_31_addr", false,-1, 4,0);
        tracep->declQuad(c+91,"riscv_soc core decode regfile_MPORT_31_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+682,"riscv_soc core decode regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+683,"riscv_soc core decode regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+685,"riscv_soc core decode regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+686,"riscv_soc core decode regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+185,"riscv_soc core decode regfile_MPORT_32_data", false,-1, 63,0);
        tracep->declBus(c+187,"riscv_soc core decode regfile_MPORT_32_addr", false,-1, 4,0);
        tracep->declBit(c+848,"riscv_soc core decode regfile_MPORT_32_mask", false,-1);
        tracep->declBit(c+188,"riscv_soc core decode regfile_MPORT_32_en", false,-1);
        tracep->declQuad(c+171,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+174,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core decode reg_dest_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+176,"riscv_soc core decode reg_imm", false,-1, 63,0);
        tracep->declBus(c+688,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+689,"riscv_soc core decode reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+690,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+692,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+170,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+173,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+182,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+183,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core decode reg_stall", false,-1);
        tracep->declBit(c+693,"riscv_soc core decode stall", false,-1);
        tracep->declBus(c+694,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBus(c+685,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+682,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+695,"riscv_soc core decode dest_rs_addr", false,-1, 4,0);
        tracep->declBus(c+223,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBit(c+696,"riscv_soc core decode temp_stall", false,-1);
        tracep->declBit(c+762,"riscv_soc core write_back clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core write_back reset", false,-1);
        tracep->declBus(c+194,"riscv_soc core write_back io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+195,"riscv_soc core write_back io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+197,"riscv_soc core write_back io_in_w_rs_en", false,-1);
        tracep->declBus(c+198,"riscv_soc core write_back io_in_exuType", false,-1, 5,0);
        tracep->declBus(c+202,"riscv_soc core write_back io_in_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+203,"riscv_soc core write_back io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+205,"riscv_soc core write_back io_in_mem_addr", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core write_back io_in_mem_avalid", false,-1);
        tracep->declBit(c+208,"riscv_soc core write_back io_in_w_mem_en", false,-1);
        tracep->declQuad(c+199,"riscv_soc core write_back io_in_pc", false,-1, 63,0);
        tracep->declBus(c+201,"riscv_soc core write_back io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+216,"riscv_soc core write_back io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core write_back io_in_valid_next_pc", false,-1);
        tracep->declBus(c+209,"riscv_soc core write_back io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+210,"riscv_soc core write_back io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+212,"riscv_soc core write_back io_in_w_csr_en", false,-1);
        tracep->declQuad(c+224,"riscv_soc core write_back io_in_mtvec", false,-1, 63,0);
        tracep->declQuad(c+226,"riscv_soc core write_back io_in_mepc", false,-1, 63,0);
        tracep->declQuad(c+228,"riscv_soc core write_back io_in_mstatus", false,-1, 63,0);
        tracep->declQuad(c+230,"riscv_soc core write_back io_in_mie", false,-1, 63,0);
        tracep->declBit(c+215,"riscv_soc core write_back io_in_is_mret", false,-1);
        tracep->declBit(c+232,"riscv_soc core write_back io_in_time_irq", false,-1);
        tracep->declBit(c+233,"riscv_soc core write_back io_in_soft_irq", false,-1);
        tracep->declBus(c+213,"riscv_soc core write_back io_in_exception", false,-1, 4,0);
        tracep->declBit(c+214,"riscv_soc core write_back io_in_is_exception", false,-1);
        tracep->declBit(c+151,"riscv_soc core write_back io_bus_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core write_back io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core write_back io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core write_back io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core write_back io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core write_back io_bus_bits_is_w", false,-1);
        tracep->declBit(c+154,"riscv_soc core write_back io_bus_ready", false,-1);
        tracep->declBus(c+187,"riscv_soc core write_back io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+185,"riscv_soc core write_back io_out_result_data", false,-1, 63,0);
        tracep->declBit(c+188,"riscv_soc core write_back io_out_w_rs_en", false,-1);
        tracep->declBit(c+160,"riscv_soc core write_back io_out_stall", false,-1);
        tracep->declBus(c+189,"riscv_soc core write_back io_out_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+190,"riscv_soc core write_back io_out_csr_data", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core write_back io_out_w_csr_en", false,-1);
        tracep->declBit(c+234,"riscv_soc core write_back io_out_time_irq", false,-1);
        tracep->declBit(c+235,"riscv_soc core write_back io_out_soft_irq", false,-1);
        tracep->declBus(c+236,"riscv_soc core write_back io_out_exception", false,-1, 4,0);
        tracep->declBit(c+237,"riscv_soc core write_back io_out_is_exception", false,-1);
        tracep->declQuad(c+238,"riscv_soc core write_back io_out_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"riscv_soc core write_back io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+242,"riscv_soc core write_back io_out_commit", false,-1);
        tracep->declBit(c+193,"riscv_soc core write_back io_out_flush", false,-1);
        tracep->declQuad(c+243,"riscv_soc core write_back io_out_flush_pc", false,-1, 63,0);
        tracep->declBit(c+21,"riscv_soc core write_back difftest_irq_0", false,-1);
        tracep->declBit(c+22,"riscv_soc core write_back difftest_peripheral_0", false,-1);
        tracep->declBit(c+23,"riscv_soc core write_back difftest_commit_0", false,-1);
        tracep->declQuad(c+24,"riscv_soc core write_back difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+30,"riscv_soc core write_back difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+97,"riscv_soc core write_back inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+160,"riscv_soc core write_back reg_stall", false,-1);
        tracep->declBit(c+697,"riscv_soc core write_back reg_flush", false,-1);
        tracep->declQuad(c+120,"riscv_soc core write_back reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core write_back reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+126,"riscv_soc core write_back reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+127,"riscv_soc core write_back reg_bus_is_w", false,-1);
        tracep->declBit(c+151,"riscv_soc core write_back reg_bus_valid", false,-1);
        tracep->declBus(c+698,"riscv_soc core write_back reg_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+699,"riscv_soc core write_back reg_result_data", false,-1, 63,0);
        tracep->declBit(c+701,"riscv_soc core write_back reg_w_rs_en", false,-1);
        tracep->declBit(c+242,"riscv_soc core write_back reg_commit", false,-1);
        tracep->declBus(c+702,"riscv_soc core write_back reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+703,"riscv_soc core write_back mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+705,"riscv_soc core write_back mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+707,"riscv_soc core write_back mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+709,"riscv_soc core write_back reg_ls_state", false,-1);
        tracep->declQuad(c+710,"riscv_soc core write_back rs2_data", false,-1, 63,0);
        tracep->declArray(c+712,"riscv_soc core write_back mem_w_data", false,-1, 126,0);
        tracep->declBit(c+716,"riscv_soc core write_back test_is_peripheral", false,-1);
        tracep->declBit(c+717,"riscv_soc core write_back is_commit", false,-1);
        tracep->declQuad(c+718,"riscv_soc core write_back reg_csr_addr", false,-1, 63,0);
        tracep->declQuad(c+190,"riscv_soc core write_back reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+720,"riscv_soc core write_back reg_w_csr_en", false,-1);
        tracep->declBit(c+721,"riscv_soc core write_back is_time_irq", false,-1);
        tracep->declBit(c+722,"riscv_soc core write_back is_soft_irq", false,-1);
        tracep->declBit(c+723,"riscv_soc core write_back is_irq", false,-1);
        tracep->declQuad(c+243,"riscv_soc core write_back reg_flush_pc", false,-1, 63,0);
        tracep->declBit(c+724,"riscv_soc core write_back temp_except", false,-1);
        tracep->declBit(c+725,"riscv_soc core write_back reg_time_irq", false,-1);
        tracep->declBit(c+726,"riscv_soc core write_back reg_soft_irq", false,-1);
        tracep->declBus(c+236,"riscv_soc core write_back reg_exception", false,-1, 4,0);
        tracep->declBit(c+237,"riscv_soc core write_back reg_is_exception", false,-1);
        tracep->declBus(c+727,"riscv_soc core write_back reg_inst", false,-1, 31,0);
        tracep->declQuad(c+238,"riscv_soc core write_back reg_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"riscv_soc core write_back reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+23,"riscv_soc core write_back difftest_commit", false,-1);
        tracep->declBus(c+30,"riscv_soc core write_back difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"riscv_soc core write_back difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_soc core write_back inst_counter", false,-1, 63,0);
        tracep->declBit(c+21,"riscv_soc core write_back difftest_irq", false,-1);
        tracep->declBit(c+22,"riscv_soc core write_back difftest_peripheral", false,-1);
        tracep->declBit(c+762,"riscv_soc core csr_reg clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core csr_reg reset", false,-1);
        tracep->declBus(c+189,"riscv_soc core csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+190,"riscv_soc core csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+192,"riscv_soc core csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+238,"riscv_soc core csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+240,"riscv_soc core csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+234,"riscv_soc core csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+235,"riscv_soc core csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+236,"riscv_soc core csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+237,"riscv_soc core csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+242,"riscv_soc core csr_reg io_in_commit", false,-1);
        tracep->declBus(c+223,"riscv_soc core csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+220,"riscv_soc core csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+224,"riscv_soc core csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+226,"riscv_soc core csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+228,"riscv_soc core csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+230,"riscv_soc core csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core csr_reg reg_mepc_0", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv_soc core csr_reg reg_mstatus_0", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core csr_reg reg_mcause_0", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core csr_reg reg_mtvec_0", false,-1, 63,0);
        tracep->declBit(c+728,"riscv_soc core csr_reg irq", false,-1);
        tracep->declQuad(c+28,"riscv_soc core csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+729,"riscv_soc core csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_soc core csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+731,"riscv_soc core csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_soc core csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+733,"riscv_soc core csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+735,"riscv_soc core csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+737,"riscv_soc core csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+739,"riscv_soc core csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+762,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+763,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+155,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+120,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+156,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+158,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+233,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+232,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+233,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+741,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+743,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+156,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+745,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+746,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+747,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+762,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+763,"riscv_soc axi_ram reset", false,-1);
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
        tracep->declBit(c+762,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+748,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+750,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+752,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+754,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+755,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+757,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+758,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+750,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+759,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+760,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+761,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+762,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+748,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+750,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+752,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+754,"riscv_soc axi_ram mem wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp975;
    VlWide<4>/*127:0*/ __Vtemp976;
    VlWide<4>/*127:0*/ __Vtemp977;
    VlWide<4>/*127:0*/ __Vtemp978;
    VlWide<3>/*95:0*/ __Vtemp980;
    VlWide<3>/*95:0*/ __Vtemp981;
    VlWide<3>/*95:0*/ __Vtemp982;
    VlWide<3>/*95:0*/ __Vtemp984;
    VlWide<3>/*95:0*/ __Vtemp985;
    VlWide<3>/*95:0*/ __Vtemp987;
    VlWide<3>/*95:0*/ __Vtemp989;
    VlWide<3>/*95:0*/ __Vtemp990;
    VlWide<3>/*95:0*/ __Vtemp991;
    VlWide<3>/*95:0*/ __Vtemp992;
    VlWide<3>/*95:0*/ __Vtemp995;
    VlWide<3>/*95:0*/ __Vtemp996;
    VlWide<3>/*95:0*/ __Vtemp997;
    VlWide<5>/*159:0*/ __Vtemp1006;
    VlWide<5>/*159:0*/ __Vtemp1010;
    VlWide<3>/*95:0*/ __Vtemp1012;
    VlWide<5>/*159:0*/ __Vtemp1014;
    VlWide<5>/*159:0*/ __Vtemp1015;
    VlWide<5>/*159:0*/ __Vtemp1016;
    VlWide<5>/*159:0*/ __Vtemp1017;
    VlWide<5>/*159:0*/ __Vtemp1018;
    VlWide<5>/*159:0*/ __Vtemp1020;
    VlWide<5>/*159:0*/ __Vtemp1021;
    VlWide<5>/*159:0*/ __Vtemp1022;
    VlWide<5>/*159:0*/ __Vtemp1023;
    VlWide<5>/*159:0*/ __Vtemp1024;
    VlWide<5>/*159:0*/ __Vtemp1026;
    VlWide<5>/*159:0*/ __Vtemp1027;
    VlWide<5>/*159:0*/ __Vtemp1028;
    VlWide<5>/*159:0*/ __Vtemp1036;
    VlWide<5>/*159:0*/ __Vtemp1037;
    VlWide<5>/*159:0*/ __Vtemp1045;
    VlWide<4>/*127:0*/ __Vtemp1047;
    VlWide<4>/*127:0*/ __Vtemp1048;
    VlWide<4>/*127:0*/ __Vtemp1049;
    VlWide<4>/*127:0*/ __Vtemp1050;
    VlWide<4>/*127:0*/ __Vtemp1051;
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
        tracep->fullBit(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_irq));
        tracep->fullBit(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_peripheral));
        tracep->fullBit(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit));
        tracep->fullQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc),64);
        tracep->fullQData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullIData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst),32);
        tracep->fullQData(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [1U]),64);
        tracep->fullQData(oldp+33,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [2U]),64);
        tracep->fullQData(oldp+35,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [3U]),64);
        tracep->fullQData(oldp+37,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [4U]),64);
        tracep->fullQData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [5U]),64);
        tracep->fullQData(oldp+41,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [6U]),64);
        tracep->fullQData(oldp+43,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [7U]),64);
        tracep->fullQData(oldp+45,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [8U]),64);
        tracep->fullQData(oldp+47,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [9U]),64);
        tracep->fullQData(oldp+49,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xaU]),64);
        tracep->fullQData(oldp+51,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xbU]),64);
        tracep->fullQData(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xcU]),64);
        tracep->fullQData(oldp+55,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xdU]),64);
        tracep->fullQData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xeU]),64);
        tracep->fullQData(oldp+59,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xfU]),64);
        tracep->fullQData(oldp+61,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x10U]),64);
        tracep->fullQData(oldp+63,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x11U]),64);
        tracep->fullQData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x12U]),64);
        tracep->fullQData(oldp+67,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x13U]),64);
        tracep->fullQData(oldp+69,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x14U]),64);
        tracep->fullQData(oldp+71,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x15U]),64);
        tracep->fullQData(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x16U]),64);
        tracep->fullQData(oldp+75,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x17U]),64);
        tracep->fullQData(oldp+77,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x18U]),64);
        tracep->fullQData(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x19U]),64);
        tracep->fullQData(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1aU]),64);
        tracep->fullQData(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1bU]),64);
        tracep->fullQData(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1cU]),64);
        tracep->fullQData(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1dU]),64);
        tracep->fullQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1eU]),64);
        tracep->fullQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1fU]),64);
        tracep->fullQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter),64);
        tracep->fullQData(oldp+99,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst))),64);
        tracep->fullBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid));
        tracep->fullQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
        tracep->fullBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
        tracep->fullBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready));
        tracep->fullBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+137,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
        tracep->fullQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata),64);
        tracep->fullBit(oldp+150,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
        tracep->fullQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+154,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
        tracep->fullBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
        tracep->fullBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_stall));
        tracep->fullQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc),64);
        tracep->fullBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush));
        tracep->fullQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
        tracep->fullIData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
        tracep->fullCData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
        tracep->fullCData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
        tracep->fullCData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullQData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
        tracep->fullQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc),64);
        tracep->fullIData(oldp+180,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
                                      ? 0U : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst)),32);
        tracep->fullCData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
        tracep->fullSData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
        tracep->fullCData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
        tracep->fullBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
        tracep->fullSData(oldp+189,((0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))),12);
        tracep->fullQData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en));
        tracep->fullBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
        tracep->fullCData(oldp+194,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
        tracep->fullQData(oldp+195,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___reg_rs_data_T_6)),64);
        tracep->fullBit(oldp+197,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))));
        tracep->fullCData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
        tracep->fullQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
        tracep->fullIData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
        tracep->fullCData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
        tracep->fullQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result),64);
        tracep->fullBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
        tracep->fullBit(oldp+208,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U)))));
        tracep->fullSData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result),64);
        tracep->fullBit(oldp+212,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en))));
        tracep->fullCData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception),5);
        tracep->fullBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_exception));
        tracep->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret));
        tracep->fullQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc),64);
        tracep->fullBit(oldp+218,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid)))));
        tracep->fullBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
        tracep->fullQData(oldp+220,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U) == 
                                       (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
        tracep->fullSData(oldp+223,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec),64);
        tracep->fullQData(oldp+226,((((0x341U == (0xfffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc)),64);
        tracep->fullQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullBit(oldp+232,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullBit(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq));
        tracep->fullBit(oldp+235,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq))));
        tracep->fullCData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception),5);
        tracep->fullBit(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception));
        tracep->fullQData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
        tracep->fullQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
        tracep->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc),64);
        tracep->fullWData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q),128);
        tracep->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        __Vtemp975[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]);
        __Vtemp975[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]);
        __Vtemp975[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]);
        __Vtemp975[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+250,(__Vtemp975),128);
        tracep->fullCData(oldp+254,((0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                                               : (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                          >> 4U))))),6);
        tracep->fullWData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q),128);
        tracep->fullCData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A),6);
        VL_EXTEND_WQ(128,54, __Vtemp976, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
        tracep->fullWData(oldp+264,(__Vtemp976),128);
        tracep->fullWData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q),128);
        tracep->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q),128);
        tracep->fullCData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A),6);
        tracep->fullQData(oldp+278,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+280,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+281,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
        tracep->fullCData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+294,((((QData)((IData)(
                                                      ((((0x80U 
                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 0x18U) 
                                                       | ((((0x40U 
                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                             ? 0xffU
                                                             : 0U) 
                                                           << 0x10U) 
                                                          | ((((0x20U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((0x10U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                 ? 0xffU
                                                                 : 0U)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((((8U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 0x18U) 
                                                                   | ((((4U 
                                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                         ? 0xffU
                                                                         : 0U) 
                                                                       << 0x10U) 
                                                                      | ((((2U 
                                                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                            ? 0xffU
                                                                            : 0U) 
                                                                          << 8U) 
                                                                         | ((1U 
                                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                             ? 0xffU
                                                                             : 0U)))))))),64);
        tracep->fullWData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+309,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+311,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+318,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[0U]))))),54);
        tracep->fullQData(oldp+320,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U]))))),54);
        tracep->fullBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0));
        tracep->fullBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
        tracep->fullBit(oldp+324,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+325,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+326,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+327,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+328,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[0U]))))),64);
        tracep->fullQData(oldp+330,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[0U]))))),64);
        tracep->fullQData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+334,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish));
        tracep->fullWData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q),128);
        tracep->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp977[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp977[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp977[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp977[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+344,(__Vtemp977),128);
        tracep->fullCData(oldp+348,((0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                                               : (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                          >> 4U))))),6);
        tracep->fullWData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q),128);
        tracep->fullCData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A),6);
        VL_EXTEND_WQ(128,54, __Vtemp978, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+358,(__Vtemp978),128);
        tracep->fullWData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q),128);
        tracep->fullBit(oldp+366,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q),128);
        tracep->fullQData(oldp+371,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+373,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+374,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))),4);
        tracep->fullCData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+387,((((QData)((IData)(
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
        tracep->fullWData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+402,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+404,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+411,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[0U]))))),54);
        tracep->fullQData(oldp+413,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U]))))),54);
        tracep->fullBit(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+417,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+418,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+419,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+420,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+421,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[0U]))))),64);
        tracep->fullQData(oldp+423,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[0U]))))),64);
        tracep->fullQData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+427,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt),2);
        tracep->fullBit(oldp+433,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))));
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
        tracep->fullBit(oldp+443,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
        tracep->fullQData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
        tracep->fullIData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
        tracep->fullBit(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
        tracep->fullBit(oldp+453,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))));
        tracep->fullQData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
        tracep->fullQData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
        tracep->fullQData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid));
        tracep->fullBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+462,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+463,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr))
                                      ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6)),64);
        tracep->fullBit(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid));
        tracep->fullBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en));
        tracep->fullQData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+469,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid)
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
        tracep->fullBit(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
        tracep->fullBit(oldp+472,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                         >> 3U))));
        tracep->fullBit(oldp+473,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid))));
        tracep->fullBit(oldp+474,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                         >> 2U))));
        tracep->fullQData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data),64);
        tracep->fullQData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data),64);
        tracep->fullQData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result),64);
        tracep->fullBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en));
        tracep->fullBit(oldp+483,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                         >> 4U))));
        tracep->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret));
        tracep->fullBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception));
        tracep->fullCData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),5);
        tracep->fullBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall));
        tracep->fullQData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
        tracep->fullCData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
        tracep->fullBit(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
        tracep->fullCData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),5);
        tracep->fullQData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
        tracep->fullBit(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en));
        tracep->fullQData(oldp+497,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))
                                      ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6)),64);
        tracep->fullBit(oldp+499,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid) 
                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        tracep->fullBit(oldp+500,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        tracep->fullQData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        __Vtemp980[0U] = 1U;
        __Vtemp980[1U] = 0U;
        __Vtemp980[2U] = 0U;
        VL_ADD_W(3, __Vtemp981, __Vtemp980, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        __Vtemp982[0U] = __Vtemp981[0U];
        __Vtemp982[1U] = __Vtemp981[1U];
        __Vtemp982[2U] = (1U & __Vtemp981[2U]);
        tracep->fullWData(oldp+503,(__Vtemp982),65);
        __Vtemp984[0U] = 1U;
        __Vtemp984[1U] = 0U;
        __Vtemp984[2U] = 0U;
        VL_ADD_W(3, __Vtemp985, __Vtemp984, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        tracep->fullBit(oldp+506,((1U & (~ (1U & __Vtemp985[2U])))));
        tracep->fullBit(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullQData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
        tracep->fullIData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
        tracep->fullIData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
        tracep->fullQData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp),64);
        tracep->fullWData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),65);
        tracep->fullBit(oldp+517,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
        tracep->fullQData(oldp+518,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
        __Vtemp987[0U] = (IData)((0xfffffffffffffffeULL 
                                  & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                     + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
        __Vtemp987[1U] = (IData)(((0xfffffffffffffffeULL 
                                   & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                      + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)) 
                                  >> 0x20U));
        __Vtemp987[2U] = 1U;
        tracep->fullWData(oldp+520,(__Vtemp987),65);
        tracep->fullWData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullBit(oldp+526,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+527,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullQData(oldp+529,(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+531,((1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                           >> 3U) & 
                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 4U)) 
                                         & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall))))));
        tracep->fullBit(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
        tracep->fullBit(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
        tracep->fullQData(oldp+534,(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        tracep->fullBit(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
        tracep->fullBit(oldp+537,((1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                           >> 3U) & 
                                          (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                              >> 4U))) 
                                         & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall))))));
        tracep->fullBit(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
        tracep->fullBit(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid));
        tracep->fullWData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp989[0U] = 1U;
        __Vtemp989[1U] = 0U;
        __Vtemp989[2U] = 0U;
        __Vtemp990[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp990[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp990[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp991, __Vtemp989, __Vtemp990);
        __Vtemp992[0U] = __Vtemp991[0U];
        __Vtemp992[1U] = __Vtemp991[1U];
        __Vtemp992[2U] = (1U & __Vtemp991[2U]);
        tracep->fullWData(oldp+561,(__Vtemp992),65);
        tracep->fullCData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
        tracep->fullWData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+572,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp995[0U] = 1U;
        __Vtemp995[1U] = 0U;
        __Vtemp995[2U] = 0U;
        __Vtemp996[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp996[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp996[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp997, __Vtemp995, __Vtemp996);
        tracep->fullBit(oldp+573,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ __Vtemp997[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp997[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ (1U 
                                                & __Vtemp997[2U]))))));
        tracep->fullBit(oldp+574,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullQData(oldp+576,(((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullQData(oldp+578,(((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__valid));
        VL_EXTEND_WQ(130,64, __Vtemp1006, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            __Vtemp1010[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            __Vtemp1010[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp1010[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp1010[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp1010[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 3U : 0U);
        } else {
            __Vtemp1010[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)
                                : __Vtemp1006[0U]);
            __Vtemp1010[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                           >> 0x20U))
                                : __Vtemp1006[1U]);
            __Vtemp1010[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? 0xffffffffU : __Vtemp1006[2U]);
            __Vtemp1010[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? 0xffffffffU : __Vtemp1006[3U]);
            __Vtemp1010[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? 3U : __Vtemp1006[4U]);
        }
        tracep->fullWData(oldp+581,(__Vtemp1010),130);
        tracep->fullWData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp1012[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           << 1U);
        __Vtemp1012[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                            >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                         << 1U));
        __Vtemp1012[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                  << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                << 1U)));
        tracep->fullWData(oldp+589,(__Vtemp1012),67);
        tracep->fullCData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
        tracep->fullCData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),4);
        __Vtemp1014[0U] = 1U;
        __Vtemp1014[1U] = 0U;
        __Vtemp1014[2U] = 0U;
        __Vtemp1014[3U] = 0U;
        __Vtemp1014[4U] = 0U;
        __Vtemp1015[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp1015[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp1015[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp1015[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp1015[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp1016, __Vtemp1014, __Vtemp1015);
        __Vtemp1017[0U] = __Vtemp1016[0U];
        __Vtemp1017[1U] = __Vtemp1016[1U];
        __Vtemp1017[2U] = __Vtemp1016[2U];
        __Vtemp1017[3U] = __Vtemp1016[3U];
        __Vtemp1017[4U] = (3U & __Vtemp1016[4U]);
        VL_EXTEND_WW(131,130, __Vtemp1018, __Vtemp1017);
        __Vtemp1020[0U] = 1U;
        __Vtemp1020[1U] = 0U;
        __Vtemp1020[2U] = 0U;
        __Vtemp1020[3U] = 0U;
        __Vtemp1020[4U] = 0U;
        __Vtemp1021[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp1021[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp1021[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp1021[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp1021[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp1022, __Vtemp1020, __Vtemp1021);
        __Vtemp1023[0U] = __Vtemp1022[0U];
        __Vtemp1023[1U] = __Vtemp1022[1U];
        __Vtemp1023[2U] = __Vtemp1022[2U];
        __Vtemp1023[3U] = __Vtemp1022[3U];
        __Vtemp1023[4U] = (3U & __Vtemp1022[4U]);
        VL_EXTEND_WW(131,130, __Vtemp1024, __Vtemp1023);
        __Vtemp1026[0U] = 1U;
        __Vtemp1026[1U] = 0U;
        __Vtemp1026[2U] = 0U;
        __Vtemp1026[3U] = 0U;
        __Vtemp1026[4U] = 0U;
        __Vtemp1027[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp1027[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp1027[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp1027[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp1027[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp1028, __Vtemp1026, __Vtemp1027);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp1036[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp1036[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp1036[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp1036[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp1036[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp1036[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                : 0U);
            __Vtemp1036[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                : 0U);
            __Vtemp1036[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                : 0U);
            __Vtemp1036[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                : 0U);
            __Vtemp1036[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp1037, __Vtemp1036);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp1045[0U] = __Vtemp1018[0U];
            __Vtemp1045[1U] = __Vtemp1018[1U];
            __Vtemp1045[2U] = __Vtemp1018[2U];
            __Vtemp1045[3U] = __Vtemp1018[3U];
            __Vtemp1045[4U] = __Vtemp1018[4U];
        } else {
            __Vtemp1045[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp1024[0U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? (__Vtemp1028[0U] 
                                    << 1U) : ((3U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                  << 1U)
                                               : __Vtemp1037[0U])));
            __Vtemp1045[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp1024[1U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp1028[0U] 
                                     >> 0x1fU) | (__Vtemp1028[1U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                           << 1U)) : 
                                    __Vtemp1037[1U])));
            __Vtemp1045[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp1024[2U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp1028[1U] 
                                     >> 0x1fU) | (__Vtemp1028[2U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                           << 1U)) : 
                                    __Vtemp1037[2U])));
            __Vtemp1045[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp1024[3U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp1028[2U] 
                                     >> 0x1fU) | (__Vtemp1028[3U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                           << 1U)) : 
                                    __Vtemp1037[3U])));
            __Vtemp1045[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp1024[4U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp1028[3U] 
                                     >> 0x1fU) | (6U 
                                                  & (__Vtemp1028[4U] 
                                                     << 1U)))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                           << 1U)) : 
                                    __Vtemp1037[4U])));
        }
        tracep->fullWData(oldp+608,(__Vtemp1045),131);
        tracep->fullWData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data),65);
        tracep->fullQData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
        tracep->fullQData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
        tracep->fullQData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
        tracep->fullQData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
        tracep->fullQData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
        tracep->fullQData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
        tracep->fullQData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
        tracep->fullQData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
        tracep->fullQData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
        tracep->fullQData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
        tracep->fullQData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
        tracep->fullQData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
        tracep->fullQData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
        tracep->fullQData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
        tracep->fullQData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
        tracep->fullQData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
        tracep->fullQData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
        tracep->fullQData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
        tracep->fullQData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
        tracep->fullQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
        tracep->fullQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
        tracep->fullQData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
        tracep->fullQData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
        tracep->fullQData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
        tracep->fullQData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
        tracep->fullQData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
        tracep->fullQData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
        tracep->fullQData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
        tracep->fullQData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
        tracep->fullQData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
        tracep->fullQData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
        tracep->fullQData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
        tracep->fullQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                    [0U]),64);
        tracep->fullCData(oldp+682,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                               >> 0xfU))]),64);
        tracep->fullCData(oldp+685,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                               >> 0x14U))]),64);
        tracep->fullCData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
        tracep->fullQData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullBit(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
        tracep->fullCData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullCData(oldp+695,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 7U))),5);
        tracep->fullBit(oldp+696,((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
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
        tracep->fullBit(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush));
        tracep->fullCData(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
        tracep->fullQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
        tracep->fullBit(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
        tracep->fullCData(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
        tracep->fullQData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
        tracep->fullQData(oldp+705,(((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
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
        tracep->fullQData(oldp+707,(((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
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
        tracep->fullBit(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
        tracep->fullQData(oldp+710,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data)),64);
        VL_EXTEND_WQ(127,64, __Vtemp1047, ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data
                                            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data));
        VL_SHIFTL_WWI(127,127,6, __Vtemp1048, __Vtemp1047, 
                      (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result) 
                                << 3U)));
        __Vtemp1049[0U] = __Vtemp1048[0U];
        __Vtemp1049[1U] = __Vtemp1048[1U];
        __Vtemp1049[2U] = __Vtemp1048[2U];
        __Vtemp1049[3U] = (0x7fffffffU & __Vtemp1048[3U]);
        tracep->fullWData(oldp+712,(__Vtemp1049),127);
        tracep->fullBit(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__test_is_peripheral));
        tracep->fullBit(oldp+717,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))));
        tracep->fullQData(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr),64);
        tracep->fullBit(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en));
        tracep->fullBit(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq));
        tracep->fullBit(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq));
        tracep->fullBit(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_irq));
        tracep->fullBit(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except));
        tracep->fullBit(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq));
        tracep->fullBit(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq));
        tracep->fullIData(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
        tracep->fullBit(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+739,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0x14U))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret
                                      : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+746,((0U == (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
        tracep->fullBit(oldp+747,((0x30U == (0xffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
        tracep->fullQData(oldp+748,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                      ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                      : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+750,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+752,((((QData)((IData)(
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
        tracep->fullBit(oldp+754,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+755,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+757,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+758,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+759,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+760,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullIData(oldp+761,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullBit(oldp+762,(vlSelf->clock));
        tracep->fullBit(oldp+763,(vlSelf->reset));
        tracep->fullQData(oldp+764,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+766,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+768,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+770,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+772,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+774,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+776,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+778,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+780,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+782,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+784,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+786,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+788,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+790,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+792,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+794,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+796,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+798,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+800,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+802,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+804,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+806,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+808,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+810,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+812,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+814,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+816,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+818,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+820,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+822,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+824,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+826,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+828,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+830,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+831,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+832,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+834,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+835,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+837,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+839,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+841,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+843,(vlSelf->io_difftest_peripheral));
        tracep->fullQData(oldp+844,(0ULL),64);
        tracep->fullCData(oldp+846,(0U),8);
        tracep->fullBit(oldp+847,(0U));
        tracep->fullBit(oldp+848,(1U));
        __Vtemp1050[0U] = 0U;
        __Vtemp1050[1U] = 0U;
        __Vtemp1050[2U] = 0U;
        __Vtemp1050[3U] = 0U;
        tracep->fullWData(oldp+849,(__Vtemp1050),128);
        tracep->fullIData(oldp+853,(0x80U),32);
        tracep->fullIData(oldp+854,(0x40U),32);
        tracep->fullIData(oldp+855,(6U),32);
        __Vtemp1051[0U] = 0xffffffffU;
        __Vtemp1051[1U] = 0xffffffffU;
        __Vtemp1051[2U] = 0xffffffffU;
        __Vtemp1051[3U] = 0xffffffffU;
        tracep->fullWData(oldp+856,(__Vtemp1051),128);
        tracep->fullCData(oldp+860,(0U),5);
        tracep->fullCData(oldp+861,(1U),5);
        tracep->fullCData(oldp+862,(2U),5);
        tracep->fullCData(oldp+863,(3U),5);
        tracep->fullCData(oldp+864,(4U),5);
        tracep->fullCData(oldp+865,(5U),5);
        tracep->fullCData(oldp+866,(6U),5);
        tracep->fullCData(oldp+867,(7U),5);
        tracep->fullCData(oldp+868,(8U),5);
        tracep->fullCData(oldp+869,(9U),5);
        tracep->fullCData(oldp+870,(0xaU),5);
        tracep->fullCData(oldp+871,(0xbU),5);
        tracep->fullCData(oldp+872,(0xcU),5);
        tracep->fullCData(oldp+873,(0xdU),5);
        tracep->fullCData(oldp+874,(0xeU),5);
        tracep->fullCData(oldp+875,(0xfU),5);
        tracep->fullCData(oldp+876,(0x10U),5);
        tracep->fullCData(oldp+877,(0x11U),5);
        tracep->fullCData(oldp+878,(0x12U),5);
        tracep->fullCData(oldp+879,(0x13U),5);
        tracep->fullCData(oldp+880,(0x14U),5);
        tracep->fullCData(oldp+881,(0x15U),5);
        tracep->fullCData(oldp+882,(0x16U),5);
        tracep->fullCData(oldp+883,(0x17U),5);
        tracep->fullCData(oldp+884,(0x18U),5);
        tracep->fullCData(oldp+885,(0x19U),5);
        tracep->fullCData(oldp+886,(0x1aU),5);
        tracep->fullCData(oldp+887,(0x1bU),5);
        tracep->fullCData(oldp+888,(0x1cU),5);
        tracep->fullCData(oldp+889,(0x1dU),5);
        tracep->fullCData(oldp+890,(0x1eU),5);
        tracep->fullCData(oldp+891,(0x1fU),5);
    }
}
