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
        tracep->declBit(c+903,"clock", false,-1);
        tracep->declBit(c+904,"reset", false,-1);
        tracep->declQuad(c+905,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+907,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+909,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+911,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+913,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+915,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+917,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+919,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+921,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+923,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+925,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+927,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+929,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+931,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+933,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+935,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+937,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+939,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+941,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+943,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+945,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+947,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+949,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+951,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+953,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+955,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+957,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+959,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+961,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+963,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+965,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+967,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+969,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+971,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+972,"io_difftest_commit", false,-1);
        tracep->declQuad(c+973,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+975,"io_difftest_irq", false,-1);
        tracep->declQuad(c+976,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+978,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+980,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+982,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+984,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+903,"riscv_soc clock", false,-1);
        tracep->declBit(c+904,"riscv_soc reset", false,-1);
        tracep->declQuad(c+905,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+907,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+909,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+911,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+913,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+915,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+917,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+919,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+921,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+923,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+925,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+927,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+929,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+931,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+933,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+935,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+937,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+939,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+941,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+943,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+945,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+947,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+949,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+951,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+953,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+955,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+957,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+959,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+961,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+963,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+965,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+967,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+969,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+971,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+972,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+973,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+975,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+976,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+978,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+980,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+982,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+984,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+903,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core_reset", false,-1);
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
        tracep->declBus(c+26,"riscv_soc core_difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+985,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+27,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+35,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+37,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+39,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+57,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+59,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+61,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+65,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+73,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+75,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+77,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+79,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+85,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core_inst_counter", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc axi_ram_reset", false,-1);
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
        tracep->declBus(c+26,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+91,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core reset", false,-1);
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
        tracep->declBus(c+26,"riscv_soc core difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+89,"riscv_soc core inst_counter", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache_io_flush", false,-1);
        tracep->declBit(c+94,"riscv_soc core i_cache_io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache_io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+98,"riscv_soc core i_cache_io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+99,"riscv_soc core i_cache_io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+100,"riscv_soc core i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+102,"riscv_soc core i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+104,"riscv_soc core i_cache_io_is_fence_i", false,-1);
        tracep->declBit(c+105,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+106,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+109,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+110,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+119,"riscv_soc core d_cache_io_cpu_ready", false,-1);
        tracep->declBit(c+120,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+121,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+122,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declBit(c+124,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+125,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+126,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+127,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+128,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+130,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+131,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+105,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+106,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+109,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+120,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+121,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+122,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declBit(c+124,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+126,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+127,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+128,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+130,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+131,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+132,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+133,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+134,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+135,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+987,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+136,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+137,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+98,"riscv_soc core cross_bar_1_io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+138,"riscv_soc core cross_bar_1_io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+143,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+94,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+98,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+99,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+100,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+110,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+119,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+132,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+133,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+134,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+135,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+147,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core fetch_reset", false,-1);
        tracep->declBit(c+151,"riscv_soc core fetch_io_br_info_valid", false,-1);
        tracep->declBit(c+152,"riscv_soc core fetch_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+153,"riscv_soc core fetch_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+155,"riscv_soc core fetch_io_br_info_taken", false,-1);
        tracep->declQuad(c+156,"riscv_soc core fetch_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core fetch_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+161,"riscv_soc core fetch_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+163,"riscv_soc core fetch_io_flush", false,-1);
        tracep->declBit(c+136,"riscv_soc core fetch_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+137,"riscv_soc core fetch_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+98,"riscv_soc core fetch_io_cpu_data_ready", false,-1);
        tracep->declBit(c+138,"riscv_soc core fetch_io_cpu_data_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core fetch_io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core fetch_io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core fetch_io_put_pc_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core fetch_io_put_pc_valid", false,-1);
        tracep->declBus(c+166,"riscv_soc core fetch_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+167,"riscv_soc core fetch_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core fetch_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+93,"riscv_soc core fetch_io_out_flush", false,-1);
        tracep->declBit(c+903,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute_reset", false,-1);
        tracep->declBit(c+164,"riscv_soc core execute_io_op_datas_ready", false,-1);
        tracep->declBit(c+170,"riscv_soc core execute_io_op_datas_valid", false,-1);
        tracep->declBus(c+171,"riscv_soc core execute_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+172,"riscv_soc core execute_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+173,"riscv_soc core execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+174,"riscv_soc core execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+177,"riscv_soc core execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core execute_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+180,"riscv_soc core execute_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+182,"riscv_soc core execute_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+183,"riscv_soc core execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+184,"riscv_soc core execute_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+185,"riscv_soc core execute_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+186,"riscv_soc core execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+187,"riscv_soc core execute_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core execute_io_irq_time_irq", false,-1);
        tracep->declBit(c+190,"riscv_soc core execute_io_irq_soft_irq", false,-1);
        tracep->declQuad(c+191,"riscv_soc core execute_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+193,"riscv_soc core execute_io_mie", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core execute_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core execute_io_mtvec", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core execute_io_wb_valid", false,-1);
        tracep->declBus(c+200,"riscv_soc core execute_io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+201,"riscv_soc core execute_io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core execute_io_csr_valid", false,-1);
        tracep->declBus(c+204,"riscv_soc core execute_io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+205,"riscv_soc core execute_io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core execute_io_csr_except_is_except", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core execute_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+210,"riscv_soc core execute_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+211,"riscv_soc core execute_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core execute_io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+215,"riscv_soc core execute_io_commit", false,-1);
        tracep->declBus(c+216,"riscv_soc core execute_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+217,"riscv_soc core execute_io_difftest_peripheral", false,-1);
        tracep->declQuad(c+161,"riscv_soc core execute_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+163,"riscv_soc core execute_io_flush", false,-1);
        tracep->declBit(c+104,"riscv_soc core execute_io_fence_i", false,-1);
        tracep->declBit(c+151,"riscv_soc core execute_io_br_info_valid", false,-1);
        tracep->declBit(c+152,"riscv_soc core execute_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+153,"riscv_soc core execute_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+155,"riscv_soc core execute_io_br_info_taken", false,-1);
        tracep->declQuad(c+156,"riscv_soc core execute_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core execute_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+143,"riscv_soc core execute_io_bus_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core execute_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv_soc core execute_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core execute_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core execute_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core execute_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core execute_io_bus_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core decode_reset", false,-1);
        tracep->declBit(c+164,"riscv_soc core decode_io_get_inst_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core decode_io_get_inst_valid", false,-1);
        tracep->declBus(c+166,"riscv_soc core decode_io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+167,"riscv_soc core decode_io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core decode_io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+218,"riscv_soc core decode_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core decode_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core decode_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core decode_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core decode_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+225,"riscv_soc core decode_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core decode_io_op_datas_ready", false,-1);
        tracep->declBit(c+170,"riscv_soc core decode_io_op_datas_valid", false,-1);
        tracep->declBus(c+171,"riscv_soc core decode_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+172,"riscv_soc core decode_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+173,"riscv_soc core decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+174,"riscv_soc core decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+177,"riscv_soc core decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core decode_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+180,"riscv_soc core decode_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+182,"riscv_soc core decode_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+183,"riscv_soc core decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+184,"riscv_soc core decode_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+185,"riscv_soc core decode_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+186,"riscv_soc core decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+187,"riscv_soc core decode_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+163,"riscv_soc core decode_io_flush", false,-1);
        tracep->declBit(c+903,"riscv_soc core commit_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core commit_reset", false,-1);
        tracep->declBus(c+218,"riscv_soc core commit_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core commit_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core commit_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core commit_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core commit_io_normal_wb_valid", false,-1);
        tracep->declBus(c+200,"riscv_soc core commit_io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+201,"riscv_soc core commit_io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core commit_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+225,"riscv_soc core commit_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core commit_io_csr_wb_valid", false,-1);
        tracep->declBus(c+204,"riscv_soc core commit_io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+205,"riscv_soc core commit_io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core commit_io_csr_except_is_except", false,-1);
        tracep->declBit(c+208,"riscv_soc core commit_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core commit_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+210,"riscv_soc core commit_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+211,"riscv_soc core commit_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core commit_io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core commit_io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+191,"riscv_soc core commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+193,"riscv_soc core commit_io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+215,"riscv_soc core commit_io_commit", false,-1);
        tracep->declBus(c+216,"riscv_soc core commit_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+217,"riscv_soc core commit_io_difftest_peripheral", false,-1);
        tracep->declBit(c+21,"riscv_soc core commit_difftest_irq_0", false,-1);
        tracep->declBit(c+22,"riscv_soc core commit_difftest_peripheral_0", false,-1);
        tracep->declBit(c+23,"riscv_soc core commit_difftest_commit_0", false,-1);
        tracep->declQuad(c+24,"riscv_soc core commit_difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+26,"riscv_soc core commit_difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+985,"riscv_soc core commit__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+27,"riscv_soc core commit__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv_soc core commit__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv_soc core commit__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv_soc core commit__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+35,"riscv_soc core commit__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+37,"riscv_soc core commit__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+39,"riscv_soc core commit__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core commit__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core commit__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_soc core commit__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv_soc core commit__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv_soc core commit__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv_soc core commit__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv_soc core commit__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv_soc core commit__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+57,"riscv_soc core commit__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+59,"riscv_soc core commit__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+61,"riscv_soc core commit__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv_soc core commit__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+65,"riscv_soc core commit__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv_soc core commit__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv_soc core commit__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core commit__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+73,"riscv_soc core commit__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+75,"riscv_soc core commit__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+77,"riscv_soc core commit__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+79,"riscv_soc core commit__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_soc core commit__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv_soc core commit__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+85,"riscv_soc core commit__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core commit__WIRE_0_31", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core commit_inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+147,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+190,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+189,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+903,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache io_flush", false,-1);
        tracep->declBit(c+94,"riscv_soc core i_cache io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core i_cache io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+98,"riscv_soc core i_cache io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+99,"riscv_soc core i_cache io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+100,"riscv_soc core i_cache io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+102,"riscv_soc core i_cache io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+104,"riscv_soc core i_cache io_is_fence_i", false,-1);
        tracep->declBit(c+105,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+106,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+109,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core i_cache cache_stage0_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core i_cache cache_stage0_reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache cache_stage0_io_flush", false,-1);
        tracep->declBit(c+94,"riscv_soc core i_cache cache_stage0_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache cache_stage0_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core i_cache cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core i_cache cache_stage0_io_addr_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core i_cache cache_stage0_io_addr_valid", false,-1);
        tracep->declQuad(c+228,"riscv_soc core i_cache cache_stage0_io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core i_cache cache_stage1_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core i_cache cache_stage1_reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache cache_stage1_io_flush", false,-1);
        tracep->declBit(c+94,"riscv_soc core i_cache cache_stage1_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core i_cache cache_stage1_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+228,"riscv_soc core i_cache cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core i_cache cache_stage1_io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+232,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+233,"riscv_soc core i_cache cache_stage1_io_sram_valid", false,-1);
        tracep->declArray(c+234,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+238,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+242,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+246,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+250,"riscv_soc core i_cache cache_stage1_io_sram_ready", false,-1);
        tracep->declBit(c+251,"riscv_soc core i_cache cache_stage1_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+252,"riscv_soc core i_cache cache_stage1_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+253,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+256,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+258,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+232,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+259,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core i_cache cache_stage2_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core i_cache cache_stage2_reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache cache_stage2_io_flush", false,-1);
        tracep->declBit(c+251,"riscv_soc core i_cache cache_stage2_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+252,"riscv_soc core i_cache cache_stage2_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+253,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+256,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+258,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+232,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+259,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+105,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+106,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+109,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+261,"riscv_soc core i_cache cache_stage2_io_sram_w_valid", false,-1);
        tracep->declBus(c+262,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+263,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+267,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+271,"riscv_soc core i_cache cache_stage2_io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+98,"riscv_soc core i_cache cache_stage2_io_rdata_ready", false,-1);
        tracep->declBit(c+99,"riscv_soc core i_cache cache_stage2_io_rdata_valid", false,-1);
        tracep->declQuad(c+100,"riscv_soc core i_cache cache_stage2_io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+102,"riscv_soc core i_cache cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+272,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+274,"riscv_soc core i_cache reg_sram1_valid", false,-1, 63,0);
        tracep->declBit(c+276,"riscv_soc core i_cache is_w_sram", false,-1);
        tracep->declBit(c+277,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declBit(c+278,"riscv_soc core i_cache is_sram1_write", false,-1);
        tracep->declQuad(c+279,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declBit(c+281,"riscv_soc core i_cache reg_temp_sram0_valid", false,-1);
        tracep->declBit(c+282,"riscv_soc core i_cache reg_temp_sram1_valid", false,-1);
        tracep->declBus(c+283,"riscv_soc core i_cache reg_temp_r_index", false,-1, 5,0);
        tracep->declBit(c+284,"riscv_soc core i_cache w_r_pass0_val", false,-1);
        tracep->declBit(c+285,"riscv_soc core i_cache w_r_pass1_val", false,-1);
        tracep->declBit(c+250,"riscv_soc core i_cache reg_sram_r_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core i_cache cache_stage0 clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core i_cache cache_stage0 reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache cache_stage0 io_flush", false,-1);
        tracep->declBit(c+94,"riscv_soc core i_cache cache_stage0 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache cache_stage0 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core i_cache cache_stage0 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core i_cache cache_stage0 io_addr_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core i_cache cache_stage0 io_addr_valid", false,-1);
        tracep->declQuad(c+228,"riscv_soc core i_cache cache_stage0 io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+227,"riscv_soc core i_cache cache_stage0 reg_valid", false,-1);
        tracep->declQuad(c+228,"riscv_soc core i_cache cache_stage0 reg_addr", false,-1, 63,0);
        tracep->declBit(c+286,"riscv_soc core i_cache cache_stage0 valid", false,-1);
        tracep->declBit(c+903,"riscv_soc core i_cache cache_stage1 clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core i_cache cache_stage1 reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache cache_stage1 io_flush", false,-1);
        tracep->declBit(c+94,"riscv_soc core i_cache cache_stage1 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+227,"riscv_soc core i_cache cache_stage1 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+228,"riscv_soc core i_cache cache_stage1 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+230,"riscv_soc core i_cache cache_stage1 io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+232,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+233,"riscv_soc core i_cache cache_stage1 io_sram_valid", false,-1);
        tracep->declArray(c+234,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+238,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+242,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+246,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+250,"riscv_soc core i_cache cache_stage1 io_sram_ready", false,-1);
        tracep->declBit(c+251,"riscv_soc core i_cache cache_stage1 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+252,"riscv_soc core i_cache cache_stage1 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+253,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+256,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+258,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+232,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+259,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+233,"riscv_soc core i_cache cache_stage1 valid", false,-1);
        tracep->declBit(c+287,"riscv_soc core i_cache cache_stage1 ready", false,-1);
        tracep->declQuad(c+253,"riscv_soc core i_cache cache_stage1 reg_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+288,"riscv_soc core i_cache cache_stage1 reg_valid", false,-1);
        tracep->declQuad(c+289,"riscv_soc core i_cache cache_stage1 reg_tag", false,-1, 53,0);
        tracep->declBus(c+291,"riscv_soc core i_cache cache_stage1 reg_index", false,-1, 5,0);
        tracep->declBus(c+292,"riscv_soc core i_cache cache_stage1 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+293,"riscv_soc core i_cache cache_stage1 tag_0", false,-1, 53,0);
        tracep->declQuad(c+295,"riscv_soc core i_cache cache_stage1 tag_1", false,-1, 53,0);
        tracep->declBit(c+903,"riscv_soc core i_cache cache_stage2 clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core i_cache cache_stage2 reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache cache_stage2 io_flush", false,-1);
        tracep->declBit(c+251,"riscv_soc core i_cache cache_stage2 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+252,"riscv_soc core i_cache cache_stage2 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+253,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+256,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+258,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+232,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+259,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+105,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+106,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+109,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+261,"riscv_soc core i_cache cache_stage2 io_sram_w_valid", false,-1);
        tracep->declBus(c+262,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+263,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+267,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+271,"riscv_soc core i_cache cache_stage2 io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+98,"riscv_soc core i_cache cache_stage2 io_rdata_ready", false,-1);
        tracep->declBit(c+99,"riscv_soc core i_cache cache_stage2 io_rdata_valid", false,-1);
        tracep->declQuad(c+100,"riscv_soc core i_cache cache_stage2 io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+102,"riscv_soc core i_cache cache_stage2 io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBus(c+291,"riscv_soc core i_cache cache_stage2 index", false,-1, 5,0);
        tracep->declBit(c+297,"riscv_soc core i_cache cache_stage2 valid", false,-1);
        tracep->declBit(c+271,"riscv_soc core i_cache cache_stage2 reg_chosen_tag", false,-1);
        tracep->declQuad(c+100,"riscv_soc core i_cache cache_stage2 reg_rdata", false,-1, 63,0);
        tracep->declBit(c+99,"riscv_soc core i_cache cache_stage2 reg_valid", false,-1);
        tracep->declBit(c+298,"riscv_soc core i_cache cache_stage2 reg_ready", false,-1);
        tracep->declQuad(c+299,"riscv_soc core i_cache cache_stage2 temp_addr", false,-1, 63,0);
        tracep->declQuad(c+106,"riscv_soc core i_cache cache_stage2 reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+105,"riscv_soc core i_cache cache_stage2 reg_r_valid", false,-1);
        tracep->declArray(c+263,"riscv_soc core i_cache cache_stage2 reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+261,"riscv_soc core i_cache cache_stage2 reg_cache_write", false,-1);
        tracep->declQuad(c+102,"riscv_soc core i_cache cache_stage2 reg_cpu_addr", false,-1, 63,0);
        tracep->declQuad(c+301,"riscv_soc core i_cache cache_stage2 reg_tag", false,-1, 53,0);
        tracep->declBus(c+303,"riscv_soc core i_cache cache_stage2 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+304,"riscv_soc core i_cache cache_stage2 reg_lru_1", false,-1, 63,0);
        tracep->declBit(c+306,"riscv_soc core i_cache cache_stage2 LRU_1", false,-1);
        tracep->declQuad(c+307,"riscv_soc core i_cache cache_stage2 chose_bit", false,-1, 63,0);
        tracep->declQuad(c+309,"riscv_soc core i_cache cache_stage2 neg_chose_bit", false,-1, 63,0);
        tracep->declBus(c+311,"riscv_soc core i_cache cache_stage2 reg_bus_state", false,-1, 1,0);
        tracep->declBit(c+903,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+110,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+119,"riscv_soc core d_cache io_cpu_ready", false,-1);
        tracep->declBit(c+120,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+121,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+122,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declBit(c+124,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+125,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+126,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+127,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+128,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+130,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+131,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+312,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+314,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+315,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+316,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+317,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+319,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+320,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+321,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+323,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+324,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+119,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+113,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+325,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+326,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+327,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+331,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+332,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+334,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+338,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+342,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+343,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+345,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+347,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+349,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+351,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+352,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+354,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+128,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+127,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+122,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declBit(c+124,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+121,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+125,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declBit(c+356,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+357,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+358,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+359,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+360,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+361,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+363,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+364,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+365,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+366,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+367,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+903,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+105,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+106,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+108,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+109,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+120,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+121,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+122,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declBit(c+124,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+126,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+127,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+128,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+130,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+131,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+132,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+133,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+134,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+135,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+987,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+368,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+369,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+370,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+371,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+372,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+373,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+374,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+375,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+376,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+136,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+137,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+98,"riscv_soc core cross_bar_1 io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+138,"riscv_soc core cross_bar_1 io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+143,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+94,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+98,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+99,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+100,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+110,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+119,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+132,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+133,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+134,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+135,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+147,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+377,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+378,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+379,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+903,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+151,"riscv_soc core fetch io_br_info_valid", false,-1);
        tracep->declBit(c+152,"riscv_soc core fetch io_br_info_mispredict", false,-1);
        tracep->declQuad(c+153,"riscv_soc core fetch io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+155,"riscv_soc core fetch io_br_info_taken", false,-1);
        tracep->declQuad(c+156,"riscv_soc core fetch io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core fetch io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core fetch io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+161,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+163,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+136,"riscv_soc core fetch io_cpu_addr_ready", false,-1);
        tracep->declBit(c+137,"riscv_soc core fetch io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core fetch io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+98,"riscv_soc core fetch io_cpu_data_ready", false,-1);
        tracep->declBit(c+138,"riscv_soc core fetch io_cpu_data_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core fetch io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+141,"riscv_soc core fetch io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+166,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+167,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core fetch io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+93,"riscv_soc core fetch io_out_flush", false,-1);
        tracep->declBit(c+903,"riscv_soc core fetch ibuf_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core fetch ibuf_reset", false,-1);
        tracep->declBit(c+163,"riscv_soc core fetch ibuf_io_flush", false,-1);
        tracep->declBit(c+98,"riscv_soc core fetch ibuf_io_cache_buf_ready", false,-1);
        tracep->declBit(c+380,"riscv_soc core fetch ibuf_io_cache_buf_valid", false,-1);
        tracep->declQuad(c+141,"riscv_soc core fetch ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+381,"riscv_soc core fetch ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+382,"riscv_soc core fetch ibuf_io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+164,"riscv_soc core fetch ibuf_io_put_pc_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core fetch ibuf_io_put_pc_valid", false,-1);
        tracep->declBus(c+166,"riscv_soc core fetch ibuf_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+167,"riscv_soc core fetch ibuf_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core fetch ibuf_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+903,"riscv_soc core fetch br_predictor_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core fetch br_predictor_reset", false,-1);
        tracep->declBit(c+151,"riscv_soc core fetch br_predictor_io_br_info_valid", false,-1);
        tracep->declBit(c+152,"riscv_soc core fetch br_predictor_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+153,"riscv_soc core fetch br_predictor_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+155,"riscv_soc core fetch br_predictor_io_br_info_taken", false,-1);
        tracep->declQuad(c+156,"riscv_soc core fetch br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core fetch br_predictor_io_pc", false,-1, 63,0);
        tracep->declQuad(c+383,"riscv_soc core fetch br_predictor_io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+385,"riscv_soc core fetch br_predictor_io_pre_valid", false,-1);
        tracep->declQuad(c+96,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declBit(c+386,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+387,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core fetch reg_bus_valid", false,-1);
        tracep->declBus(c+389,"riscv_soc core fetch pre_info_head", false,-1, 1,0);
        tracep->declBus(c+390,"riscv_soc core fetch pre_info_tail", false,-1, 1,0);
        tracep->declQuad(c+391,"riscv_soc core fetch pre_info_fifo_0", false,-1, 63,0);
        tracep->declQuad(c+393,"riscv_soc core fetch pre_info_fifo_1", false,-1, 63,0);
        tracep->declQuad(c+395,"riscv_soc core fetch pre_info_fifo_2", false,-1, 63,0);
        tracep->declQuad(c+397,"riscv_soc core fetch pre_info_fifo_3", false,-1, 63,0);
        tracep->declBit(c+399,"riscv_soc core fetch pre_enq", false,-1);
        tracep->declBus(c+400,"riscv_soc core fetch is_pre_head", false,-1, 1,0);
        tracep->declBus(c+401,"riscv_soc core fetch is_pre_tail", false,-1, 1,0);
        tracep->declBit(c+402,"riscv_soc core fetch is_pre_fifo_0", false,-1);
        tracep->declBit(c+403,"riscv_soc core fetch is_pre_fifo_1", false,-1);
        tracep->declBit(c+404,"riscv_soc core fetch is_pre_fifo_2", false,-1);
        tracep->declBit(c+405,"riscv_soc core fetch is_pre_fifo_3", false,-1);
        tracep->declBit(c+903,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+163,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+98,"riscv_soc core fetch ibuf io_cache_buf_ready", false,-1);
        tracep->declBit(c+380,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+141,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+381,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+382,"riscv_soc core fetch ibuf io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+164,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+166,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+167,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core fetch ibuf io_put_pc_bits_is_pre", false,-1);
        tracep->declQuad(c+406,"riscv_soc core fetch ibuf ibuf_pc_0", false,-1, 63,0);
        tracep->declQuad(c+408,"riscv_soc core fetch ibuf ibuf_pc_1", false,-1, 63,0);
        tracep->declQuad(c+410,"riscv_soc core fetch ibuf ibuf_pc_2", false,-1, 63,0);
        tracep->declQuad(c+412,"riscv_soc core fetch ibuf ibuf_pc_3", false,-1, 63,0);
        tracep->declBus(c+414,"riscv_soc core fetch ibuf ibuf_inst_0", false,-1, 31,0);
        tracep->declBus(c+415,"riscv_soc core fetch ibuf ibuf_inst_1", false,-1, 31,0);
        tracep->declBus(c+416,"riscv_soc core fetch ibuf ibuf_inst_2", false,-1, 31,0);
        tracep->declBus(c+417,"riscv_soc core fetch ibuf ibuf_inst_3", false,-1, 31,0);
        tracep->declBit(c+418,"riscv_soc core fetch ibuf ibuf_is_pre_0", false,-1);
        tracep->declBit(c+419,"riscv_soc core fetch ibuf ibuf_is_pre_1", false,-1);
        tracep->declBit(c+420,"riscv_soc core fetch ibuf ibuf_is_pre_2", false,-1);
        tracep->declBit(c+421,"riscv_soc core fetch ibuf ibuf_is_pre_3", false,-1);
        tracep->declBit(c+422,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+423,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+424,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+425,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+426,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+427,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBus(c+428,"riscv_soc core fetch ibuf reg_ibuf_size", false,-1, 2,0);
        tracep->declBit(c+429,"riscv_soc core fetch ibuf enq_size", false,-1);
        tracep->declBit(c+430,"riscv_soc core fetch ibuf can_deq", false,-1);
        tracep->declBus(c+431,"riscv_soc core fetch ibuf result_size", false,-1, 2,0);
        tracep->declBit(c+903,"riscv_soc core fetch br_predictor clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core fetch br_predictor reset", false,-1);
        tracep->declBit(c+151,"riscv_soc core fetch br_predictor io_br_info_valid", false,-1);
        tracep->declBit(c+152,"riscv_soc core fetch br_predictor io_br_info_mispredict", false,-1);
        tracep->declQuad(c+153,"riscv_soc core fetch br_predictor io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+155,"riscv_soc core fetch br_predictor io_br_info_taken", false,-1);
        tracep->declQuad(c+156,"riscv_soc core fetch br_predictor io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core fetch br_predictor io_pc", false,-1, 63,0);
        tracep->declQuad(c+383,"riscv_soc core fetch br_predictor io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+385,"riscv_soc core fetch br_predictor io_pre_valid", false,-1);
        tracep->declBit(c+987,"riscv_soc core fetch br_predictor BTB_btb_data_en", false,-1);
        tracep->declBus(c+432,"riscv_soc core fetch br_predictor BTB_btb_data_addr", false,-1, 5,0);
        tracep->declArray(c+433,"riscv_soc core fetch br_predictor BTB_btb_data_data", false,-1, 127,0);
        tracep->declArray(c+437,"riscv_soc core fetch br_predictor BTB_MPORT_data", false,-1, 127,0);
        tracep->declBus(c+441,"riscv_soc core fetch br_predictor BTB_MPORT_addr", false,-1, 5,0);
        tracep->declBit(c+987,"riscv_soc core fetch br_predictor BTB_MPORT_mask", false,-1);
        tracep->declBit(c+442,"riscv_soc core fetch br_predictor BTB_MPORT_en", false,-1);
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+443+i*2,"riscv_soc core fetch br_predictor RAS", true,(i+0), 63,0);}}
        tracep->declBit(c+455,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_en", false,-1);
        tracep->declBus(c+456,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_addr", false,-1, 2,0);
        tracep->declQuad(c+457,"riscv_soc core fetch br_predictor RAS_pre_next_pc_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core fetch br_predictor RAS_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+456,"riscv_soc core fetch br_predictor RAS_MPORT_1_addr", false,-1, 2,0);
        tracep->declBit(c+987,"riscv_soc core fetch br_predictor RAS_MPORT_1_mask", false,-1);
        tracep->declBit(c+459,"riscv_soc core fetch br_predictor RAS_MPORT_1_en", false,-1);
        tracep->declBus(c+460,"riscv_soc core fetch br_predictor PHT_0", false,-1, 1,0);
        tracep->declBus(c+461,"riscv_soc core fetch br_predictor PHT_1", false,-1, 1,0);
        tracep->declBus(c+462,"riscv_soc core fetch br_predictor PHT_2", false,-1, 1,0);
        tracep->declBus(c+463,"riscv_soc core fetch br_predictor PHT_3", false,-1, 1,0);
        tracep->declBus(c+464,"riscv_soc core fetch br_predictor PHT_4", false,-1, 1,0);
        tracep->declBus(c+465,"riscv_soc core fetch br_predictor PHT_5", false,-1, 1,0);
        tracep->declBus(c+466,"riscv_soc core fetch br_predictor PHT_6", false,-1, 1,0);
        tracep->declBus(c+467,"riscv_soc core fetch br_predictor PHT_7", false,-1, 1,0);
        tracep->declBus(c+468,"riscv_soc core fetch br_predictor PHT_8", false,-1, 1,0);
        tracep->declBus(c+469,"riscv_soc core fetch br_predictor PHT_9", false,-1, 1,0);
        tracep->declBus(c+470,"riscv_soc core fetch br_predictor PHT_10", false,-1, 1,0);
        tracep->declBus(c+471,"riscv_soc core fetch br_predictor PHT_11", false,-1, 1,0);
        tracep->declBus(c+472,"riscv_soc core fetch br_predictor PHT_12", false,-1, 1,0);
        tracep->declBus(c+473,"riscv_soc core fetch br_predictor PHT_13", false,-1, 1,0);
        tracep->declBus(c+474,"riscv_soc core fetch br_predictor PHT_14", false,-1, 1,0);
        tracep->declBus(c+475,"riscv_soc core fetch br_predictor PHT_15", false,-1, 1,0);
        tracep->declBus(c+476,"riscv_soc core fetch br_predictor PHT_16", false,-1, 1,0);
        tracep->declBus(c+477,"riscv_soc core fetch br_predictor PHT_17", false,-1, 1,0);
        tracep->declBus(c+478,"riscv_soc core fetch br_predictor PHT_18", false,-1, 1,0);
        tracep->declBus(c+479,"riscv_soc core fetch br_predictor PHT_19", false,-1, 1,0);
        tracep->declBus(c+480,"riscv_soc core fetch br_predictor PHT_20", false,-1, 1,0);
        tracep->declBus(c+481,"riscv_soc core fetch br_predictor PHT_21", false,-1, 1,0);
        tracep->declBus(c+482,"riscv_soc core fetch br_predictor PHT_22", false,-1, 1,0);
        tracep->declBus(c+483,"riscv_soc core fetch br_predictor PHT_23", false,-1, 1,0);
        tracep->declBus(c+484,"riscv_soc core fetch br_predictor PHT_24", false,-1, 1,0);
        tracep->declBus(c+485,"riscv_soc core fetch br_predictor PHT_25", false,-1, 1,0);
        tracep->declBus(c+486,"riscv_soc core fetch br_predictor PHT_26", false,-1, 1,0);
        tracep->declBus(c+487,"riscv_soc core fetch br_predictor PHT_27", false,-1, 1,0);
        tracep->declBus(c+488,"riscv_soc core fetch br_predictor PHT_28", false,-1, 1,0);
        tracep->declBus(c+489,"riscv_soc core fetch br_predictor PHT_29", false,-1, 1,0);
        tracep->declBus(c+490,"riscv_soc core fetch br_predictor PHT_30", false,-1, 1,0);
        tracep->declBus(c+491,"riscv_soc core fetch br_predictor PHT_31", false,-1, 1,0);
        tracep->declBus(c+492,"riscv_soc core fetch br_predictor PHT_32", false,-1, 1,0);
        tracep->declBus(c+493,"riscv_soc core fetch br_predictor PHT_33", false,-1, 1,0);
        tracep->declBus(c+494,"riscv_soc core fetch br_predictor PHT_34", false,-1, 1,0);
        tracep->declBus(c+495,"riscv_soc core fetch br_predictor PHT_35", false,-1, 1,0);
        tracep->declBus(c+496,"riscv_soc core fetch br_predictor PHT_36", false,-1, 1,0);
        tracep->declBus(c+497,"riscv_soc core fetch br_predictor PHT_37", false,-1, 1,0);
        tracep->declBus(c+498,"riscv_soc core fetch br_predictor PHT_38", false,-1, 1,0);
        tracep->declBus(c+499,"riscv_soc core fetch br_predictor PHT_39", false,-1, 1,0);
        tracep->declBus(c+500,"riscv_soc core fetch br_predictor PHT_40", false,-1, 1,0);
        tracep->declBus(c+501,"riscv_soc core fetch br_predictor PHT_41", false,-1, 1,0);
        tracep->declBus(c+502,"riscv_soc core fetch br_predictor PHT_42", false,-1, 1,0);
        tracep->declBus(c+503,"riscv_soc core fetch br_predictor PHT_43", false,-1, 1,0);
        tracep->declBus(c+504,"riscv_soc core fetch br_predictor PHT_44", false,-1, 1,0);
        tracep->declBus(c+505,"riscv_soc core fetch br_predictor PHT_45", false,-1, 1,0);
        tracep->declBus(c+506,"riscv_soc core fetch br_predictor PHT_46", false,-1, 1,0);
        tracep->declBus(c+507,"riscv_soc core fetch br_predictor PHT_47", false,-1, 1,0);
        tracep->declBus(c+508,"riscv_soc core fetch br_predictor PHT_48", false,-1, 1,0);
        tracep->declBus(c+509,"riscv_soc core fetch br_predictor PHT_49", false,-1, 1,0);
        tracep->declBus(c+510,"riscv_soc core fetch br_predictor PHT_50", false,-1, 1,0);
        tracep->declBus(c+511,"riscv_soc core fetch br_predictor PHT_51", false,-1, 1,0);
        tracep->declBus(c+512,"riscv_soc core fetch br_predictor PHT_52", false,-1, 1,0);
        tracep->declBus(c+513,"riscv_soc core fetch br_predictor PHT_53", false,-1, 1,0);
        tracep->declBus(c+514,"riscv_soc core fetch br_predictor PHT_54", false,-1, 1,0);
        tracep->declBus(c+515,"riscv_soc core fetch br_predictor PHT_55", false,-1, 1,0);
        tracep->declBus(c+516,"riscv_soc core fetch br_predictor PHT_56", false,-1, 1,0);
        tracep->declBus(c+517,"riscv_soc core fetch br_predictor PHT_57", false,-1, 1,0);
        tracep->declBus(c+518,"riscv_soc core fetch br_predictor PHT_58", false,-1, 1,0);
        tracep->declBus(c+519,"riscv_soc core fetch br_predictor PHT_59", false,-1, 1,0);
        tracep->declBus(c+520,"riscv_soc core fetch br_predictor PHT_60", false,-1, 1,0);
        tracep->declBus(c+521,"riscv_soc core fetch br_predictor PHT_61", false,-1, 1,0);
        tracep->declBus(c+522,"riscv_soc core fetch br_predictor PHT_62", false,-1, 1,0);
        tracep->declBus(c+523,"riscv_soc core fetch br_predictor PHT_63", false,-1, 1,0);
        tracep->declBus(c+456,"riscv_soc core fetch br_predictor reg_head", false,-1, 2,0);
        tracep->declBus(c+441,"riscv_soc core fetch br_predictor update_index", false,-1, 5,0);
        tracep->declArray(c+524,"riscv_soc core fetch br_predictor update_btb_data", false,-1, 122,0);
        tracep->declBus(c+432,"riscv_soc core fetch br_predictor index", false,-1, 5,0);
        tracep->declQuad(c+528,"riscv_soc core fetch br_predictor tag", false,-1, 55,0);
        tracep->declBit(c+530,"riscv_soc core fetch br_predictor pht_taken", false,-1);
        tracep->declBit(c+531,"riscv_soc core fetch br_predictor btb_valid", false,-1);
        tracep->declQuad(c+532,"riscv_soc core fetch br_predictor btb_tag", false,-1, 55,0);
        tracep->declQuad(c+534,"riscv_soc core fetch br_predictor btb_target_next_pc", false,-1, 63,0);
        tracep->declBus(c+536,"riscv_soc core fetch br_predictor btb_br_type", false,-1, 1,0);
        tracep->declBit(c+537,"riscv_soc core fetch br_predictor pre_valid", false,-1);
        tracep->declBit(c+903,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+164,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+170,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+171,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+172,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+173,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+174,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+177,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+180,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+182,"riscv_soc core execute io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+183,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+184,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+185,"riscv_soc core execute io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+186,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+187,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+190,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+191,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+193,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+200,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+201,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+204,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+205,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+208,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+210,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+211,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+215,"riscv_soc core execute io_commit", false,-1);
        tracep->declBus(c+216,"riscv_soc core execute io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+217,"riscv_soc core execute io_difftest_peripheral", false,-1);
        tracep->declQuad(c+161,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+163,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+104,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+151,"riscv_soc core execute io_br_info_valid", false,-1);
        tracep->declBit(c+152,"riscv_soc core execute io_br_info_mispredict", false,-1);
        tracep->declQuad(c+153,"riscv_soc core execute io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+155,"riscv_soc core execute io_br_info_taken", false,-1);
        tracep->declQuad(c+156,"riscv_soc core execute io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core execute io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core execute io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+143,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+538,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBit(c+185,"riscv_soc core execute alu_exu_io_is_pre", false,-1);
        tracep->declBit(c+539,"riscv_soc core execute alu_exu_io_br_info_valid", false,-1);
        tracep->declBit(c+540,"riscv_soc core execute alu_exu_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+541,"riscv_soc core execute alu_exu_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+543,"riscv_soc core execute alu_exu_io_br_info_taken", false,-1);
        tracep->declQuad(c+544,"riscv_soc core execute alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core execute alu_exu_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core execute alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+171,"riscv_soc core execute alu_exu_io_opType", false,-1, 2,0);
        tracep->declBus(c+172,"riscv_soc core execute alu_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+546,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+548,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+180,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+550,"riscv_soc core execute alu_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+552,"riscv_soc core execute alu_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+553,"riscv_soc core execute alu_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core execute mem_exu_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute mem_exu_reset", false,-1);
        tracep->declBit(c+555,"riscv_soc core execute mem_exu_io_valid", false,-1);
        tracep->declBus(c+172,"riscv_soc core execute mem_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+556,"riscv_soc core execute mem_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+558,"riscv_soc core execute mem_exu_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core execute mem_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+560,"riscv_soc core execute mem_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+562,"riscv_soc core execute mem_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+563,"riscv_soc core execute mem_exu_io_ready", false,-1);
        tracep->declBit(c+143,"riscv_soc core execute mem_exu_io_bus_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core execute mem_exu_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv_soc core execute mem_exu_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core execute mem_exu_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core execute mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core execute mem_exu_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core execute mem_exu_io_bus_ready", false,-1);
        tracep->declBit(c+217,"riscv_soc core execute mem_exu_io_difftest_peripheral", false,-1);
        tracep->declBit(c+903,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+564,"riscv_soc core execute mu_exu_io_valid", false,-1);
        tracep->declBus(c+172,"riscv_soc core execute mu_exu_io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+546,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+548,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+565,"riscv_soc core execute mu_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+567,"riscv_soc core execute mu_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+568,"riscv_soc core execute mu_exu_io_ready", false,-1);
        tracep->declBit(c+569,"riscv_soc core execute system_exu_io_valid", false,-1);
        tracep->declBus(c+172,"riscv_soc core execute system_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+570,"riscv_soc core execute system_exu_io_csr_data", false,-1, 63,0);
        tracep->declBus(c+186,"riscv_soc core execute system_exu_io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+179,"riscv_soc core execute system_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+556,"riscv_soc core execute system_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core execute system_exu_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+191,"riscv_soc core execute system_exu_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+570,"riscv_soc core execute system_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+572,"riscv_soc core execute system_exu_io_csr_is_w", false,-1);
        tracep->declQuad(c+573,"riscv_soc core execute system_exu_io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+575,"riscv_soc core execute system_exu_io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+576,"riscv_soc core execute system_exu_io_is_except", false,-1);
        tracep->declBus(c+577,"riscv_soc core execute system_exu_io_exception", false,-1, 5,0);
        tracep->declBit(c+578,"riscv_soc core execute system_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+195,"riscv_soc core execute system_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+579,"riscv_soc core execute in_data_valid", false,-1);
        tracep->declBit(c+164,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+580,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBit(c+581,"riscv_soc core execute reg_alu_valid", false,-1);
        tracep->declBit(c+582,"riscv_soc core execute reg_mem_valid", false,-1);
        tracep->declBit(c+583,"riscv_soc core execute reg_mu_valid", false,-1);
        tracep->declBit(c+584,"riscv_soc core execute reg_system_valid", false,-1);
        tracep->declBus(c+585,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+586,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+587,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBus(c+200,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+151,"riscv_soc core execute reg_br_valid", false,-1);
        tracep->declBit(c+152,"riscv_soc core execute reg_br_mispredict", false,-1);
        tracep->declQuad(c+153,"riscv_soc core execute reg_br_pc", false,-1, 63,0);
        tracep->declBit(c+155,"riscv_soc core execute reg_taken", false,-1);
        tracep->declQuad(c+156,"riscv_soc core execute reg_br_next_pc", false,-1, 63,0);
        tracep->declQuad(c+205,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+204,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBit(c+589,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+590,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+210,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+591,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+592,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+211,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declBit(c+593,"riscv_soc core execute time_irq", false,-1);
        tracep->declBit(c+594,"riscv_soc core execute soft_irq", false,-1);
        tracep->declBit(c+595,"riscv_soc core execute irq", false,-1);
        tracep->declQuad(c+161,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+596,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+597,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+598,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBus(c+216,"riscv_soc core execute reg_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+538,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBit(c+185,"riscv_soc core execute alu_exu io_is_pre", false,-1);
        tracep->declBit(c+539,"riscv_soc core execute alu_exu io_br_info_valid", false,-1);
        tracep->declBit(c+540,"riscv_soc core execute alu_exu io_br_info_mispredict", false,-1);
        tracep->declQuad(c+541,"riscv_soc core execute alu_exu io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+543,"riscv_soc core execute alu_exu io_br_info_taken", false,-1);
        tracep->declQuad(c+544,"riscv_soc core execute alu_exu io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core execute alu_exu io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+159,"riscv_soc core execute alu_exu io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+171,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+172,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+546,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+548,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+180,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+550,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+552,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+553,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declBit(c+599,"riscv_soc core execute alu_exu is_32", false,-1);
        tracep->declQuad(c+600,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+602,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute alu_exu op_imm", false,-1, 63,0);
        tracep->declBit(c+606,"riscv_soc core execute alu_exu rs2_is_imm", false,-1);
        tracep->declQuad(c+607,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+609,"riscv_soc core execute alu_exu rs1_is_pc", false,-1);
        tracep->declBit(c+610,"riscv_soc core execute alu_exu is_sra", false,-1);
        tracep->declQuad(c+611,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+613,"riscv_soc core execute alu_exu temp_rs2_data", false,-1, 63,0);
        tracep->declArray(c+615,"riscv_soc core execute alu_exu add_sub_result", false,-1, 64,0);
        tracep->declBit(c+618,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+619,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+620,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+621,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declQuad(c+625,"riscv_soc core execute alu_exu srl_temp", false,-1, 63,0);
        tracep->declQuad(c+627,"riscv_soc core execute alu_exu sra_temp", false,-1, 63,0);
        tracep->declQuad(c+629,"riscv_soc core execute alu_exu sr_temp", false,-1, 63,0);
        tracep->declBus(c+631,"riscv_soc core execute alu_exu func", false,-1, 2,0);
        tracep->declQuad(c+632,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declBit(c+158,"riscv_soc core execute alu_exu is_pre", false,-1);
        tracep->declBit(c+634,"riscv_soc core execute alu_exu is_br", false,-1);
        tracep->declBit(c+635,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declQuad(c+636,"riscv_soc core execute alu_exu temp_1", false,-1, 63,0);
        tracep->declArray(c+638,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declQuad(c+641,"riscv_soc core execute alu_exu op_pc_4", false,-1, 63,0);
        tracep->declArray(c+643,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declQuad(c+646,"riscv_soc core execute alu_exu dst_data", false,-1, 63,0);
        tracep->declQuad(c+648,"riscv_soc core execute alu_exu next_pc", false,-1, 63,0);
        tracep->declBit(c+650,"riscv_soc core execute alu_exu valid_next_pc", false,-1);
        tracep->declBit(c+651,"riscv_soc core execute alu_exu br_valid", false,-1);
        tracep->declBit(c+652,"riscv_soc core execute alu_exu flush", false,-1);
        tracep->declBit(c+903,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+555,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+172,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+556,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+558,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+560,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+562,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+563,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+143,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+117,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+118,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+146,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declBit(c+217,"riscv_soc core execute mem_exu io_difftest_peripheral", false,-1);
        tracep->declQuad(c+653,"riscv_soc core execute mem_exu imm", false,-1, 63,0);
        tracep->declBit(c+563,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+655,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+657,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+659,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+660,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+661,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+560,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+562,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBus(c+662,"riscv_soc core execute mem_exu reg_exuType", false,-1, 6,0);
        tracep->declBit(c+217,"riscv_soc core execute mem_exu reg_difftest_peripheral", false,-1);
        tracep->declQuad(c+663,"riscv_soc core execute mem_exu mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+665,"riscv_soc core execute mem_exu mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+667,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+669,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declQuad(c+670,"riscv_soc core execute mem_exu mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+672,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+673,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+677,"riscv_soc core execute mem_exu chose_chancel", false,-1);
        tracep->declBit(c+903,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+564,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+172,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+546,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+548,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+565,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+567,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+568,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+678,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declQuad(c+546,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+548,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+172,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+679,"riscv_soc core execute mu_exu div_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+681,"riscv_soc core execute mu_exu div_io_dest_is_w", false,-1);
        tracep->declBit(c+682,"riscv_soc core execute mu_exu div_io_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+683,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declQuad(c+546,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+548,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+172,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+684,"riscv_soc core execute mu_exu mul_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+686,"riscv_soc core execute mu_exu mul_io_dest_is_w", false,-1);
        tracep->declBit(c+687,"riscv_soc core execute mu_exu mul_io_ready", false,-1);
        tracep->declBit(c+903,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+678,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+546,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+548,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+172,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+679,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+681,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+682,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declBit(c+599,"riscv_soc core execute mu_exu div is_32", false,-1);
        tracep->declBit(c+688,"riscv_soc core execute mu_exu div is_signed", false,-1);
        tracep->declArray(c+689,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+692,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+695,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+698,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+701,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+704,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+707,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+710,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+713,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+714,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+715,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declArray(c+716,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+721,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+722,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+723,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+724,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declBit(c+681,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+682,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declBit(c+725,"riscv_soc core execute mu_exu div reg_is_32", false,-1);
        tracep->declBit(c+726,"riscv_soc core execute mu_exu div reg_is_rem", false,-1);
        tracep->declQuad(c+727,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+729,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+683,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+546,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+548,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+172,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+684,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+686,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+687,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+731,"riscv_soc core execute mu_exu mul is_32", false,-1);
        tracep->declBit(c+732,"riscv_soc core execute mu_exu mul is_rs1_signed", false,-1);
        tracep->declBit(c+599,"riscv_soc core execute mu_exu mul is_rs2_signed", false,-1);
        tracep->declArray(c+733,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+738,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+741,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+687,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+744,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+745,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+748,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+753,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+758,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+686,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declArray(c+759,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBus(c+764,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declBit(c+765,"riscv_soc core execute mu_exu mul reg_not_h", false,-1);
        tracep->declBit(c+766,"riscv_soc core execute mu_exu mul reg_is_32", false,-1);
        tracep->declBit(c+569,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+172,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+570,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+186,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+179,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+556,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+191,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+570,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+572,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+573,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+575,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+576,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+577,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+578,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+195,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+604,"riscv_soc core execute system_exu imm", false,-1, 63,0);
        tracep->declBit(c+767,"riscv_soc core execute system_exu is_imm", false,-1);
        tracep->declQuad(c+768,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+770,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+772,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declQuad(c+774,"riscv_soc core execute system_exu temp_csr_result_data", false,-1, 63,0);
        tracep->declBit(c+776,"riscv_soc core execute system_exu is_mret", false,-1);
        tracep->declBit(c+777,"riscv_soc core execute system_exu is_sret", false,-1);
        tracep->declBit(c+778,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+779,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+780,"riscv_soc core execute system_exu is_except", false,-1);
        tracep->declBus(c+781,"riscv_soc core execute system_exu exception", false,-1, 3,0);
        tracep->declBit(c+782,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declQuad(c+783,"riscv_soc core execute system_exu result_status", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+164,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBit(c+165,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+166,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+167,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core decode io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+218,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+225,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+170,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+171,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+172,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+173,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+174,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+177,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+180,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+182,"riscv_soc core decode io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+183,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+184,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+185,"riscv_soc core decode io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+186,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+187,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+163,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+170,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+171,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+172,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+173,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+174,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+177,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+179,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+180,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+182,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+183,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+184,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+186,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+187,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+185,"riscv_soc core decode reg_is_pre", false,-1);
        tracep->declBus(c+221,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+218,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+224,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBus(c+785,"riscv_soc core decode dest_addr", false,-1, 4,0);
        tracep->declBus(c+786,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBit(c+787,"riscv_soc core decode dest_is_reg", false,-1);
        tracep->declBit(c+788,"riscv_soc core decode rs1_is_reg", false,-1);
        tracep->declBit(c+789,"riscv_soc core decode rs2_is_reg", false,-1);
        tracep->declBit(c+903,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+218,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+219,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+221,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+222,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+200,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+201,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+224,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+225,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+204,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+205,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+208,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+210,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+211,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+213,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+191,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+193,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+215,"riscv_soc core commit io_commit", false,-1);
        tracep->declBus(c+216,"riscv_soc core commit io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+217,"riscv_soc core commit io_difftest_peripheral", false,-1);
        tracep->declBit(c+21,"riscv_soc core commit difftest_irq_0", false,-1);
        tracep->declBit(c+22,"riscv_soc core commit difftest_peripheral_0", false,-1);
        tracep->declBit(c+23,"riscv_soc core commit difftest_commit_0", false,-1);
        tracep->declQuad(c+24,"riscv_soc core commit difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+26,"riscv_soc core commit difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+89,"riscv_soc core commit inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core commit csr_reg_clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core commit csr_reg_reset", false,-1);
        tracep->declBus(c+204,"riscv_soc core commit csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+205,"riscv_soc core commit csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core commit csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+213,"riscv_soc core commit csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"riscv_soc core commit csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+208,"riscv_soc core commit csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core commit csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+790,"riscv_soc core commit csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+207,"riscv_soc core commit csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+215,"riscv_soc core commit csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+224,"riscv_soc core commit csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+225,"riscv_soc core commit csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core commit csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core commit csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+191,"riscv_soc core commit csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+193,"riscv_soc core commit csr_reg_io_r_csr_mie", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+791+i*2,"riscv_soc core commit regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+987,"riscv_soc core commit regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+218,"riscv_soc core commit regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+855,"riscv_soc core commit regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+221,"riscv_soc core commit regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+857,"riscv_soc core commit regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+988,"riscv_soc core commit regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+859,"riscv_soc core commit regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_2_en", false,-1);
        tracep->declBus(c+989,"riscv_soc core commit regfile_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+27,"riscv_soc core commit regfile_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_3_en", false,-1);
        tracep->declBus(c+990,"riscv_soc core commit regfile_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+29,"riscv_soc core commit regfile_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+991,"riscv_soc core commit regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+31,"riscv_soc core commit regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_5_en", false,-1);
        tracep->declBus(c+992,"riscv_soc core commit regfile_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+33,"riscv_soc core commit regfile_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_6_en", false,-1);
        tracep->declBus(c+993,"riscv_soc core commit regfile_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"riscv_soc core commit regfile_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_7_en", false,-1);
        tracep->declBus(c+994,"riscv_soc core commit regfile_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+37,"riscv_soc core commit regfile_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_8_en", false,-1);
        tracep->declBus(c+995,"riscv_soc core commit regfile_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+39,"riscv_soc core commit regfile_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_9_en", false,-1);
        tracep->declBus(c+996,"riscv_soc core commit regfile_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+41,"riscv_soc core commit regfile_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_10_en", false,-1);
        tracep->declBus(c+997,"riscv_soc core commit regfile_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+43,"riscv_soc core commit regfile_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_11_en", false,-1);
        tracep->declBus(c+998,"riscv_soc core commit regfile_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+45,"riscv_soc core commit regfile_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_12_en", false,-1);
        tracep->declBus(c+999,"riscv_soc core commit regfile_MPORT_12_addr", false,-1, 4,0);
        tracep->declQuad(c+47,"riscv_soc core commit regfile_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_13_en", false,-1);
        tracep->declBus(c+1000,"riscv_soc core commit regfile_MPORT_13_addr", false,-1, 4,0);
        tracep->declQuad(c+49,"riscv_soc core commit regfile_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_14_en", false,-1);
        tracep->declBus(c+1001,"riscv_soc core commit regfile_MPORT_14_addr", false,-1, 4,0);
        tracep->declQuad(c+51,"riscv_soc core commit regfile_MPORT_14_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_15_en", false,-1);
        tracep->declBus(c+1002,"riscv_soc core commit regfile_MPORT_15_addr", false,-1, 4,0);
        tracep->declQuad(c+53,"riscv_soc core commit regfile_MPORT_15_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_16_en", false,-1);
        tracep->declBus(c+1003,"riscv_soc core commit regfile_MPORT_16_addr", false,-1, 4,0);
        tracep->declQuad(c+55,"riscv_soc core commit regfile_MPORT_16_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_17_en", false,-1);
        tracep->declBus(c+1004,"riscv_soc core commit regfile_MPORT_17_addr", false,-1, 4,0);
        tracep->declQuad(c+57,"riscv_soc core commit regfile_MPORT_17_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_18_en", false,-1);
        tracep->declBus(c+1005,"riscv_soc core commit regfile_MPORT_18_addr", false,-1, 4,0);
        tracep->declQuad(c+59,"riscv_soc core commit regfile_MPORT_18_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_19_en", false,-1);
        tracep->declBus(c+1006,"riscv_soc core commit regfile_MPORT_19_addr", false,-1, 4,0);
        tracep->declQuad(c+61,"riscv_soc core commit regfile_MPORT_19_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_20_en", false,-1);
        tracep->declBus(c+1007,"riscv_soc core commit regfile_MPORT_20_addr", false,-1, 4,0);
        tracep->declQuad(c+63,"riscv_soc core commit regfile_MPORT_20_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_21_en", false,-1);
        tracep->declBus(c+1008,"riscv_soc core commit regfile_MPORT_21_addr", false,-1, 4,0);
        tracep->declQuad(c+65,"riscv_soc core commit regfile_MPORT_21_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_22_en", false,-1);
        tracep->declBus(c+1009,"riscv_soc core commit regfile_MPORT_22_addr", false,-1, 4,0);
        tracep->declQuad(c+67,"riscv_soc core commit regfile_MPORT_22_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_23_en", false,-1);
        tracep->declBus(c+1010,"riscv_soc core commit regfile_MPORT_23_addr", false,-1, 4,0);
        tracep->declQuad(c+69,"riscv_soc core commit regfile_MPORT_23_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_24_en", false,-1);
        tracep->declBus(c+1011,"riscv_soc core commit regfile_MPORT_24_addr", false,-1, 4,0);
        tracep->declQuad(c+71,"riscv_soc core commit regfile_MPORT_24_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_25_en", false,-1);
        tracep->declBus(c+1012,"riscv_soc core commit regfile_MPORT_25_addr", false,-1, 4,0);
        tracep->declQuad(c+73,"riscv_soc core commit regfile_MPORT_25_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_26_en", false,-1);
        tracep->declBus(c+1013,"riscv_soc core commit regfile_MPORT_26_addr", false,-1, 4,0);
        tracep->declQuad(c+75,"riscv_soc core commit regfile_MPORT_26_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_27_en", false,-1);
        tracep->declBus(c+1014,"riscv_soc core commit regfile_MPORT_27_addr", false,-1, 4,0);
        tracep->declQuad(c+77,"riscv_soc core commit regfile_MPORT_27_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_28_en", false,-1);
        tracep->declBus(c+1015,"riscv_soc core commit regfile_MPORT_28_addr", false,-1, 4,0);
        tracep->declQuad(c+79,"riscv_soc core commit regfile_MPORT_28_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_29_en", false,-1);
        tracep->declBus(c+1016,"riscv_soc core commit regfile_MPORT_29_addr", false,-1, 4,0);
        tracep->declQuad(c+81,"riscv_soc core commit regfile_MPORT_29_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_30_en", false,-1);
        tracep->declBus(c+1017,"riscv_soc core commit regfile_MPORT_30_addr", false,-1, 4,0);
        tracep->declQuad(c+83,"riscv_soc core commit regfile_MPORT_30_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_31_en", false,-1);
        tracep->declBus(c+1018,"riscv_soc core commit regfile_MPORT_31_addr", false,-1, 4,0);
        tracep->declQuad(c+85,"riscv_soc core commit regfile_MPORT_31_data", false,-1, 63,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_32_en", false,-1);
        tracep->declBus(c+1019,"riscv_soc core commit regfile_MPORT_32_addr", false,-1, 4,0);
        tracep->declQuad(c+87,"riscv_soc core commit regfile_MPORT_32_data", false,-1, 63,0);
        tracep->declQuad(c+201,"riscv_soc core commit regfile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+200,"riscv_soc core commit regfile_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+987,"riscv_soc core commit regfile_MPORT_mask", false,-1);
        tracep->declBit(c+199,"riscv_soc core commit regfile_MPORT_en", false,-1);
        tracep->declBit(c+23,"riscv_soc core commit difftest_commit", false,-1);
        tracep->declBus(c+26,"riscv_soc core commit difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"riscv_soc core commit difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core commit inst_counter", false,-1, 63,0);
        tracep->declBit(c+21,"riscv_soc core commit difftest_irq", false,-1);
        tracep->declBit(c+22,"riscv_soc core commit difftest_peripheral", false,-1);
        tracep->declBit(c+903,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+204,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+205,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+213,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+208,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+209,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+790,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+207,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+215,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+224,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+225,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+191,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+193,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+861,"riscv_soc core commit csr_reg irq", false,-1);
        tracep->declQuad(c+862,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+864,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+866,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+868,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+870,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+872,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+874,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+876,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+878,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+880,"riscv_soc core commit csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+903,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+904,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+147,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+111,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+190,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+189,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+190,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+882,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+884,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+150,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+148,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+886,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+887,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+888,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+903,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+904,"riscv_soc axi_ram reset", false,-1);
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
        tracep->declBit(c+903,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+889,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+891,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+893,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+895,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+896,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+898,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+899,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+891,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+900,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+901,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+902,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+903,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+889,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+891,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+893,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+895,"riscv_soc axi_ram mem wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp669;
    VlWide<4>/*127:0*/ __Vtemp671;
    VlWide<4>/*127:0*/ __Vtemp672;
    VlWide<4>/*127:0*/ __Vtemp674;
    VlWide<4>/*127:0*/ __Vtemp675;
    VlWide<4>/*127:0*/ __Vtemp676;
    VlWide<4>/*127:0*/ __Vtemp679;
    VlWide<4>/*127:0*/ __Vtemp685;
    VlWide<4>/*127:0*/ __Vtemp686;
    VlWide<4>/*127:0*/ __Vtemp690;
    VlWide<4>/*127:0*/ __Vtemp692;
    VlWide<4>/*127:0*/ __Vtemp693;
    VlWide<4>/*127:0*/ __Vtemp694;
    VlWide<3>/*95:0*/ __Vtemp695;
    VlWide<3>/*95:0*/ __Vtemp697;
    VlWide<3>/*95:0*/ __Vtemp698;
    VlWide<3>/*95:0*/ __Vtemp699;
    VlWide<3>/*95:0*/ __Vtemp700;
    VlWide<3>/*95:0*/ __Vtemp703;
    VlWide<3>/*95:0*/ __Vtemp704;
    VlWide<3>/*95:0*/ __Vtemp705;
    VlWide<5>/*159:0*/ __Vtemp717;
    VlWide<5>/*159:0*/ __Vtemp721;
    VlWide<3>/*95:0*/ __Vtemp723;
    VlWide<5>/*159:0*/ __Vtemp725;
    VlWide<5>/*159:0*/ __Vtemp726;
    VlWide<5>/*159:0*/ __Vtemp727;
    VlWide<5>/*159:0*/ __Vtemp728;
    VlWide<5>/*159:0*/ __Vtemp729;
    VlWide<5>/*159:0*/ __Vtemp731;
    VlWide<5>/*159:0*/ __Vtemp732;
    VlWide<5>/*159:0*/ __Vtemp733;
    VlWide<5>/*159:0*/ __Vtemp734;
    VlWide<5>/*159:0*/ __Vtemp735;
    VlWide<5>/*159:0*/ __Vtemp737;
    VlWide<5>/*159:0*/ __Vtemp738;
    VlWide<5>/*159:0*/ __Vtemp739;
    VlWide<5>/*159:0*/ __Vtemp747;
    VlWide<5>/*159:0*/ __Vtemp748;
    VlWide<5>/*159:0*/ __Vtemp756;
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
                                    ? 0ULL : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
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
        tracep->fullBit(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        tracep->fullBit(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        tracep->fullBit(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        tracep->fullQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        tracep->fullIData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        tracep->fullQData(oldp+27,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [1U]),64);
        tracep->fullQData(oldp+29,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [2U]),64);
        tracep->fullQData(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [3U]),64);
        tracep->fullQData(oldp+33,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [4U]),64);
        tracep->fullQData(oldp+35,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [5U]),64);
        tracep->fullQData(oldp+37,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [6U]),64);
        tracep->fullQData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [7U]),64);
        tracep->fullQData(oldp+41,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [8U]),64);
        tracep->fullQData(oldp+43,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [9U]),64);
        tracep->fullQData(oldp+45,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0xaU]),64);
        tracep->fullQData(oldp+47,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0xbU]),64);
        tracep->fullQData(oldp+49,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0xcU]),64);
        tracep->fullQData(oldp+51,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0xdU]),64);
        tracep->fullQData(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0xeU]),64);
        tracep->fullQData(oldp+55,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0xfU]),64);
        tracep->fullQData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x10U]),64);
        tracep->fullQData(oldp+59,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x11U]),64);
        tracep->fullQData(oldp+61,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x12U]),64);
        tracep->fullQData(oldp+63,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x13U]),64);
        tracep->fullQData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x14U]),64);
        tracep->fullQData(oldp+67,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x15U]),64);
        tracep->fullQData(oldp+69,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x16U]),64);
        tracep->fullQData(oldp+71,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x17U]),64);
        tracep->fullQData(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x18U]),64);
        tracep->fullQData(oldp+75,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x19U]),64);
        tracep->fullQData(oldp+77,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x1aU]),64);
        tracep->fullQData(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x1bU]),64);
        tracep->fullQData(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x1cU]),64);
        tracep->fullQData(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x1dU]),64);
        tracep->fullQData(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x1eU]),64);
        tracep->fullQData(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                   [0x1fU]),64);
        tracep->fullQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        tracep->fullQData(oldp+91,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
        tracep->fullBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
        tracep->fullBit(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
        tracep->fullBit(oldp+95,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU)) 
                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        tracep->fullQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullBit(oldp+98,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        tracep->fullBit(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        tracep->fullQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        tracep->fullQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
        tracep->fullBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        tracep->fullQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        tracep->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+115,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        tracep->fullCData(oldp+117,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        tracep->fullBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        tracep->fullBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+120,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullBit(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+126,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+136,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        tracep->fullBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        tracep->fullQData(oldp+139,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
        tracep->fullQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        tracep->fullBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        tracep->fullQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+146,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        tracep->fullBit(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        tracep->fullQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        tracep->fullBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        tracep->fullQData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        tracep->fullBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        tracep->fullQData(oldp+159,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                      ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                          : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                              : ((1U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                  : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
        tracep->fullBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        tracep->fullBit(oldp+165,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
        tracep->fullIData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
        tracep->fullQData(oldp+167,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                          : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                              : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
        tracep->fullBit(oldp+169,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
        tracep->fullBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullCData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullBit(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        tracep->fullSData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+189,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
        tracep->fullQData(oldp+197,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        tracep->fullCData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        tracep->fullBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        tracep->fullSData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        tracep->fullBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        tracep->fullCData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        tracep->fullIData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        tracep->fullBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        tracep->fullCData(oldp+218,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+219,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
        tracep->fullCData(oldp+221,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+222,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
        tracep->fullSData(oldp+224,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+225,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        tracep->fullQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        tracep->fullCData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        tracep->fullBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        tracep->fullBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        tracep->fullBit(oldp+233,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullWData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        tracep->fullWData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
        VL_EXTEND_WQ(128,54, __Vtemp669, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp671[0U] = __Vtemp669[0U];
            __Vtemp671[1U] = __Vtemp669[1U];
            __Vtemp671[2U] = __Vtemp669[2U];
            __Vtemp671[3U] = __Vtemp669[3U];
        } else {
            __Vtemp671[0U] = 0U;
            __Vtemp671[1U] = 0U;
            __Vtemp671[2U] = 0U;
            __Vtemp671[3U] = 0U;
        }
        tracep->fullWData(oldp+242,(__Vtemp671),128);
        VL_EXTEND_WQ(128,54, __Vtemp672, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
            __Vtemp674[0U] = __Vtemp672[0U];
            __Vtemp674[1U] = __Vtemp672[1U];
            __Vtemp674[2U] = __Vtemp672[2U];
            __Vtemp674[3U] = __Vtemp672[3U];
        } else {
            __Vtemp674[0U] = 0U;
            __Vtemp674[1U] = 0U;
            __Vtemp674[2U] = 0U;
            __Vtemp674[3U] = 0U;
        }
        tracep->fullWData(oldp+246,(__Vtemp674),128);
        tracep->fullBit(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        tracep->fullBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
        tracep->fullBit(oldp+252,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        tracep->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        tracep->fullQData(oldp+256,(((1U & (IData)(
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
        tracep->fullBit(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        tracep->fullQData(oldp+259,(((1U & (IData)(
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
        tracep->fullBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        tracep->fullCData(oldp+262,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullWData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        VL_EXTEND_WQ(128,54, __Vtemp675, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        tracep->fullWData(oldp+267,(__Vtemp675),128);
        tracep->fullBit(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        tracep->fullBit(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        tracep->fullBit(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullBit(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        tracep->fullQData(oldp+279,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullBit(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        tracep->fullBit(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        tracep->fullCData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        tracep->fullBit(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        tracep->fullBit(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        tracep->fullBit(oldp+286,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullBit(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        tracep->fullBit(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        tracep->fullQData(oldp+289,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+291,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+292,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        VL_EXTEND_WQ(128,54, __Vtemp676, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        tracep->fullQData(oldp+293,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                           ? 
                                                          __Vtemp676[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                            ? 
                                                           __Vtemp676[0U]
                                                            : 0U)))))),54);
        VL_EXTEND_WQ(128,54, __Vtemp679, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        tracep->fullQData(oldp+295,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                           ? 
                                                          __Vtemp679[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                            ? 
                                                           __Vtemp679[0U]
                                                            : 0U)))))),54);
        tracep->fullBit(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        tracep->fullBit(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        tracep->fullQData(oldp+299,((0xfffffffffffffff0ULL 
                                     & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        tracep->fullQData(oldp+301,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+303,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        tracep->fullQData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        tracep->fullBit(oldp+306,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        tracep->fullQData(oldp+307,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullQData(oldp+309,((~ (1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
        tracep->fullCData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        tracep->fullQData(oldp+312,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+314,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+315,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        tracep->fullCData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullWData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullBit(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+332,((((QData)((IData)(
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
        tracep->fullWData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+347,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+349,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullBit(oldp+356,((0ULL == vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag)));
        tracep->fullBit(oldp+357,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+358,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+359,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+360,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+363,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullBit(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+372,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+377,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+378,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                            >> 0x1fU))));
        tracep->fullBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+380,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
        tracep->fullIData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
        tracep->fullBit(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
        tracep->fullQData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        tracep->fullBit(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
        tracep->fullBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullCData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        tracep->fullCData(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        tracep->fullQData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        tracep->fullQData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        tracep->fullQData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        tracep->fullQData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        tracep->fullBit(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        tracep->fullCData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        tracep->fullCData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        tracep->fullBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        tracep->fullBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        tracep->fullBit(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        tracep->fullBit(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        tracep->fullQData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        tracep->fullQData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        tracep->fullQData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        tracep->fullQData(oldp+412,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        tracep->fullIData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        tracep->fullIData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        tracep->fullIData(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        tracep->fullIData(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        tracep->fullBit(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        tracep->fullBit(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        tracep->fullBit(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        tracep->fullBit(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        tracep->fullBit(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullCData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullCData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        tracep->fullBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        tracep->fullBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        tracep->fullCData(oldp+431,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                            + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                           - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        tracep->fullCData(oldp+432,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))),6);
        tracep->fullWData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data),128);
        __Vtemp685[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                          << 2U);
        __Vtemp685[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                           >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp685[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                    >> 9U)) << 3U) 
                          | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 2U)) 
                                    << 2U)) | ((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                        >> 0x20U)) 
                                               >> 0x1eU)));
        __Vtemp685[3U] = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 9U)) 
                                         >> 0x1dU) 
                                        | ((IData)(
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                     >> 9U) 
                                                    >> 0x20U)) 
                                           << 3U)));
        VL_EXTEND_WW(128,123, __Vtemp686, __Vtemp685);
        tracep->fullWData(oldp+437,(__Vtemp686),128);
        tracep->fullCData(oldp+441,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 3U)))),6);
        tracep->fullBit(oldp+442,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict))));
        tracep->fullQData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
        tracep->fullQData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
        tracep->fullQData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
        tracep->fullQData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
        tracep->fullQData(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[4]),64);
        tracep->fullQData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[5]),64);
        tracep->fullBit(oldp+455,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
                                   & (2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])))));
        tracep->fullCData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        tracep->fullQData(oldp+457,(((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                                     [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                                      : 0ULL)),64);
        tracep->fullBit(oldp+459,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
                                   & ((2U != (3U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                      & (1U == (3U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))))));
        tracep->fullCData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        tracep->fullCData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        tracep->fullCData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        tracep->fullCData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        tracep->fullCData(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        tracep->fullCData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        tracep->fullCData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        tracep->fullCData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        tracep->fullCData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        tracep->fullCData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        tracep->fullCData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        tracep->fullCData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        tracep->fullCData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        tracep->fullCData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        tracep->fullCData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        tracep->fullCData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        tracep->fullCData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        tracep->fullCData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        tracep->fullCData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        tracep->fullCData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        tracep->fullCData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        tracep->fullCData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        tracep->fullCData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        tracep->fullCData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        tracep->fullCData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        tracep->fullCData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        tracep->fullCData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        tracep->fullCData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        tracep->fullCData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        tracep->fullCData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        tracep->fullCData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        tracep->fullCData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        tracep->fullCData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        tracep->fullCData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        tracep->fullCData(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        tracep->fullCData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        tracep->fullCData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        tracep->fullCData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        tracep->fullCData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        tracep->fullCData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        tracep->fullCData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        tracep->fullCData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        tracep->fullCData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        tracep->fullCData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        tracep->fullCData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        tracep->fullCData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        tracep->fullCData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        tracep->fullCData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        tracep->fullCData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        tracep->fullCData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        tracep->fullCData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        tracep->fullCData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        tracep->fullCData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        tracep->fullCData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        tracep->fullCData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        tracep->fullCData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        tracep->fullCData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        tracep->fullCData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        tracep->fullCData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        tracep->fullCData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        tracep->fullCData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        tracep->fullCData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        tracep->fullCData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        tracep->fullCData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        __Vtemp690[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                          << 2U);
        __Vtemp690[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                           >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp690[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                    >> 9U)) << 3U) 
                          | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 2U)) 
                                    << 2U)) | ((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                        >> 0x20U)) 
                                               >> 0x1eU)));
        __Vtemp690[3U] = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 9U)) 
                                         >> 0x1dU) 
                                        | ((IData)(
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                     >> 9U) 
                                                    >> 0x20U)) 
                                           << 3U)));
        tracep->fullWData(oldp+524,(__Vtemp690),123);
        tracep->fullQData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
        tracep->fullBit(oldp+530,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265) 
                                         >> 1U))));
        tracep->fullBit(oldp+531,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
                                         >> 0x1aU))));
        tracep->fullQData(oldp+532,((0xffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                           >> 2U)))),56);
        tracep->fullQData(oldp+534,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                                      >> 2U)))),64);
        tracep->fullCData(oldp+536,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])),2);
        tracep->fullBit(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        tracep->fullBit(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullBit(oldp+539,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
        tracep->fullBit(oldp+540,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
        tracep->fullQData(oldp+541,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                      : 0ULL)),64);
        tracep->fullBit(oldp+543,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+544,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
        tracep->fullQData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+550,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
        tracep->fullBit(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
        tracep->fullQData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
        tracep->fullBit(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        tracep->fullQData(oldp+556,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
        tracep->fullQData(oldp+558,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
        tracep->fullQData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullBit(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        tracep->fullQData(oldp+565,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        tracep->fullBit(oldp+567,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
        tracep->fullBit(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        tracep->fullQData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        tracep->fullBit(oldp+572,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                   & ((0U != (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        tracep->fullQData(oldp+573,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        tracep->fullSData(oldp+575,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        tracep->fullCData(oldp+577,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),6);
        tracep->fullBit(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        tracep->fullBit(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        tracep->fullCData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullBit(oldp+581,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        tracep->fullBit(oldp+582,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+583,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+584,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 3U))));
        tracep->fullCData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        tracep->fullBit(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        tracep->fullBit(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        tracep->fullBit(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+599,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        tracep->fullQData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        tracep->fullBit(oldp+606,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U)))));
        tracep->fullQData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+609,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullBit(oldp+610,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullQData(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullQData(oldp+613,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        tracep->fullWData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        tracep->fullBit(oldp+618,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        tracep->fullBit(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp692, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp693, __Vtemp692, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp694[0U] = __Vtemp693[0U];
        __Vtemp694[1U] = __Vtemp693[1U];
        __Vtemp694[2U] = __Vtemp693[2U];
        __Vtemp694[3U] = (0x7fffffffU & __Vtemp693[3U]);
        tracep->fullWData(oldp+621,(__Vtemp694),127);
        tracep->fullQData(oldp+625,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                     >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+627,(VL_SHIFTRS_QQI(64,64,6, 
                                                   ((1U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+629,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullCData(oldp+631,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U))),3);
        tracep->fullQData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
        tracep->fullBit(oldp+634,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        tracep->fullBit(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        tracep->fullQData(oldp+636,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp695[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp695[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                  >> 0x20U));
        __Vtemp695[2U] = 1U;
        tracep->fullWData(oldp+638,(__Vtemp695),65);
        tracep->fullQData(oldp+641,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        tracep->fullWData(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        tracep->fullQData(oldp+648,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+650,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullBit(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        tracep->fullBit(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
        tracep->fullQData(oldp+653,((((QData)((IData)(
                                                      ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
        tracep->fullQData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullCData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        tracep->fullQData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        tracep->fullQData(oldp+665,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
        tracep->fullQData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        tracep->fullQData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        tracep->fullBit(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        tracep->fullWData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        tracep->fullBit(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        tracep->fullBit(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        tracep->fullQData(oldp+679,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullBit(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        tracep->fullQData(oldp+684,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        tracep->fullBit(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullBit(oldp+688,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullWData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp697[0U] = 1U;
        __Vtemp697[1U] = 0U;
        __Vtemp697[2U] = 0U;
        __Vtemp698[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp698[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp698[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp699, __Vtemp697, __Vtemp698);
        __Vtemp700[0U] = __Vtemp699[0U];
        __Vtemp700[1U] = __Vtemp699[1U];
        __Vtemp700[2U] = (1U & __Vtemp699[2U]);
        tracep->fullWData(oldp+710,(__Vtemp700),65);
        tracep->fullCData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+714,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+721,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp703[0U] = 1U;
        __Vtemp703[1U] = 0U;
        __Vtemp703[2U] = 0U;
        __Vtemp704[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp704[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp704[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp705, __Vtemp703, __Vtemp704);
        tracep->fullBit(oldp+722,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ __Vtemp705[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp705[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ (1U 
                                                & __Vtemp705[2U]))))));
        tracep->fullBit(oldp+723,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullBit(oldp+725,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        tracep->fullBit(oldp+726,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                         >> 3U))));
        tracep->fullQData(oldp+727,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullQData(oldp+729,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+731,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))));
        tracep->fullBit(oldp+732,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U))));
        VL_EXTEND_WQ(130,64, __Vtemp717, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp721[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            __Vtemp721[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp721[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp721[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U);
            __Vtemp721[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 3U : 0U);
        } else {
            __Vtemp721[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                               : __Vtemp717[0U]);
            __Vtemp721[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                          >> 0x20U))
                               : __Vtemp717[1U]);
            __Vtemp721[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 0xffffffffU : 0U)
                               : __Vtemp717[2U]);
            __Vtemp721[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 0xffffffffU : 0U)
                               : __Vtemp717[3U]);
            __Vtemp721[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x3fU)))
                                   ? 3U : 0U) : __Vtemp717[4U]);
        }
        tracep->fullWData(oldp+733,(__Vtemp721),130);
        tracep->fullWData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp723[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                          << 1U);
        __Vtemp723[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                        << 1U));
        __Vtemp723[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                 << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                             >> 0x1fU) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                               << 1U)));
        tracep->fullWData(oldp+741,(__Vtemp723),67);
        tracep->fullCData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        __Vtemp725[0U] = 1U;
        __Vtemp725[1U] = 0U;
        __Vtemp725[2U] = 0U;
        __Vtemp725[3U] = 0U;
        __Vtemp725[4U] = 0U;
        __Vtemp726[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp726[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp726[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp726[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp726[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp727, __Vtemp725, __Vtemp726);
        __Vtemp728[0U] = __Vtemp727[0U];
        __Vtemp728[1U] = __Vtemp727[1U];
        __Vtemp728[2U] = __Vtemp727[2U];
        __Vtemp728[3U] = __Vtemp727[3U];
        __Vtemp728[4U] = (3U & __Vtemp727[4U]);
        VL_EXTEND_WW(131,130, __Vtemp729, __Vtemp728);
        __Vtemp731[0U] = 1U;
        __Vtemp731[1U] = 0U;
        __Vtemp731[2U] = 0U;
        __Vtemp731[3U] = 0U;
        __Vtemp731[4U] = 0U;
        __Vtemp732[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp732[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp732[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp732[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp732[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp733, __Vtemp731, __Vtemp732);
        __Vtemp734[0U] = __Vtemp733[0U];
        __Vtemp734[1U] = __Vtemp733[1U];
        __Vtemp734[2U] = __Vtemp733[2U];
        __Vtemp734[3U] = __Vtemp733[3U];
        __Vtemp734[4U] = (3U & __Vtemp733[4U]);
        VL_EXTEND_WW(131,130, __Vtemp735, __Vtemp734);
        __Vtemp737[0U] = 1U;
        __Vtemp737[1U] = 0U;
        __Vtemp737[2U] = 0U;
        __Vtemp737[3U] = 0U;
        __Vtemp737[4U] = 0U;
        __Vtemp738[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp738[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp738[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp738[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp738[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp739, __Vtemp737, __Vtemp738);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp747[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp747[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp747[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp747[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp747[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp747[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                               : 0U);
            __Vtemp747[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                               : 0U);
            __Vtemp747[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                               : 0U);
            __Vtemp747[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                               : 0U);
            __Vtemp747[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                               : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp748, __Vtemp747);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp756[0U] = __Vtemp729[0U];
            __Vtemp756[1U] = __Vtemp729[1U];
            __Vtemp756[2U] = __Vtemp729[2U];
            __Vtemp756[3U] = __Vtemp729[3U];
            __Vtemp756[4U] = __Vtemp729[4U];
        } else {
            __Vtemp756[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp735[0U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   (__Vtemp739[0U] 
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
                                                    __Vtemp748[0U])));
            __Vtemp756[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp735[1U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp739[0U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp739[1U] 
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
                                                    __Vtemp748[1U])));
            __Vtemp756[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp735[2U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp739[1U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp739[2U] 
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
                                                    __Vtemp748[2U])));
            __Vtemp756[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp735[3U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp739[2U] 
                                                     >> 0x1fU) 
                                                    | (__Vtemp739[3U] 
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
                                                    __Vtemp748[3U])));
            __Vtemp756[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                               ? __Vtemp735[4U] : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((__Vtemp739[3U] 
                                                     >> 0x1fU) 
                                                    | (6U 
                                                       & (__Vtemp739[4U] 
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
                                                    __Vtemp748[4U])));
        }
        tracep->fullWData(oldp+759,(__Vtemp756),131);
        tracep->fullCData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullBit(oldp+765,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+766,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        tracep->fullBit(oldp+767,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 4U))));
        tracep->fullQData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullQData(oldp+774,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullBit(oldp+776,((0x10U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+777,((0x18U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        tracep->fullBit(oldp+778,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+779,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+780,(((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))) 
                                   | (8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
        tracep->fullCData(oldp+781,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 3U
                                                 : 0U))),4);
        tracep->fullBit(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+783,(((0xffffffffffffff77ULL 
                                      & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                     | (QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                    >> 7U)))
                                                         ? 0x88U
                                                         : 0x80U))))),64);
        tracep->fullCData(oldp+785,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullBit(oldp+787,(((0x33U == (0xfe00707fU 
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
        tracep->fullBit(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
        tracep->fullBit(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
        tracep->fullCData(oldp+790,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullQData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[0]),64);
        tracep->fullQData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[1]),64);
        tracep->fullQData(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[2]),64);
        tracep->fullQData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[3]),64);
        tracep->fullQData(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[4]),64);
        tracep->fullQData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[5]),64);
        tracep->fullQData(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[6]),64);
        tracep->fullQData(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[7]),64);
        tracep->fullQData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[8]),64);
        tracep->fullQData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[9]),64);
        tracep->fullQData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[10]),64);
        tracep->fullQData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[11]),64);
        tracep->fullQData(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[12]),64);
        tracep->fullQData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[13]),64);
        tracep->fullQData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[14]),64);
        tracep->fullQData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[15]),64);
        tracep->fullQData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[16]),64);
        tracep->fullQData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[17]),64);
        tracep->fullQData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[18]),64);
        tracep->fullQData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[19]),64);
        tracep->fullQData(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[20]),64);
        tracep->fullQData(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[21]),64);
        tracep->fullQData(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[22]),64);
        tracep->fullQData(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[23]),64);
        tracep->fullQData(oldp+839,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[24]),64);
        tracep->fullQData(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[25]),64);
        tracep->fullQData(oldp+843,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[26]),64);
        tracep->fullQData(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[27]),64);
        tracep->fullQData(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[28]),64);
        tracep->fullQData(oldp+849,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[29]),64);
        tracep->fullQData(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[30]),64);
        tracep->fullQData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[31]),64);
        tracep->fullQData(oldp+855,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+859,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                    [0U]),64);
        tracep->fullBit(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+866,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+874,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+880,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+884,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+887,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullBit(oldp+888,((0x4000U == (0xffffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullQData(oldp+889,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                      ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                      : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+891,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+893,((((QData)((IData)(
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
        tracep->fullBit(oldp+895,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+896,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+898,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+899,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+900,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+901,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullIData(oldp+902,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullBit(oldp+903,(vlSelf->clock));
        tracep->fullBit(oldp+904,(vlSelf->reset));
        tracep->fullQData(oldp+905,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+907,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+909,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+911,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+913,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+915,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+917,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+919,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+921,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+923,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+925,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+927,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+929,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+931,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+933,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+935,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+937,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+939,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+941,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+943,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+945,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+947,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+949,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+951,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+953,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+955,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+957,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+959,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+961,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+963,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+965,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+967,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+969,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+971,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+972,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+973,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+975,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+976,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+978,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+980,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+982,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+984,(vlSelf->io_difftest_peripheral));
        tracep->fullQData(oldp+985,(0ULL),64);
        tracep->fullBit(oldp+987,(1U));
        tracep->fullCData(oldp+988,(0U),5);
        tracep->fullCData(oldp+989,(1U),5);
        tracep->fullCData(oldp+990,(2U),5);
        tracep->fullCData(oldp+991,(3U),5);
        tracep->fullCData(oldp+992,(4U),5);
        tracep->fullCData(oldp+993,(5U),5);
        tracep->fullCData(oldp+994,(6U),5);
        tracep->fullCData(oldp+995,(7U),5);
        tracep->fullCData(oldp+996,(8U),5);
        tracep->fullCData(oldp+997,(9U),5);
        tracep->fullCData(oldp+998,(0xaU),5);
        tracep->fullCData(oldp+999,(0xbU),5);
        tracep->fullCData(oldp+1000,(0xcU),5);
        tracep->fullCData(oldp+1001,(0xdU),5);
        tracep->fullCData(oldp+1002,(0xeU),5);
        tracep->fullCData(oldp+1003,(0xfU),5);
        tracep->fullCData(oldp+1004,(0x10U),5);
        tracep->fullCData(oldp+1005,(0x11U),5);
        tracep->fullCData(oldp+1006,(0x12U),5);
        tracep->fullCData(oldp+1007,(0x13U),5);
        tracep->fullCData(oldp+1008,(0x14U),5);
        tracep->fullCData(oldp+1009,(0x15U),5);
        tracep->fullCData(oldp+1010,(0x16U),5);
        tracep->fullCData(oldp+1011,(0x17U),5);
        tracep->fullCData(oldp+1012,(0x18U),5);
        tracep->fullCData(oldp+1013,(0x19U),5);
        tracep->fullCData(oldp+1014,(0x1aU),5);
        tracep->fullCData(oldp+1015,(0x1bU),5);
        tracep->fullCData(oldp+1016,(0x1cU),5);
        tracep->fullCData(oldp+1017,(0x1dU),5);
        tracep->fullCData(oldp+1018,(0x1eU),5);
        tracep->fullCData(oldp+1019,(0x1fU),5);
    }
}
