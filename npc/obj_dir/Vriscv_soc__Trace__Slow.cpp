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
        tracep->declBit(c+3186,"clock", false,-1);
        tracep->declBit(c+3187,"reset", false,-1);
        tracep->declBit(c+3186,"riscv_soc clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc reset", false,-1);
        tracep->declBit(c+3186,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core_reset", false,-1);
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
        tracep->declBit(c+3186,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc axi_ram_reset", false,-1);
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
        tracep->declBit(c+3186,"riscv_soc core clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core reset", false,-1);
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
        tracep->declBit(c+3186,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+21,"riscv_soc core i_cache_io_flush", false,-1);
        tracep->declBit(c+22,"riscv_soc core i_cache_io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+23,"riscv_soc core i_cache_io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+26,"riscv_soc core i_cache_io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+27,"riscv_soc core i_cache_io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+28,"riscv_soc core i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+32,"riscv_soc core i_cache_io_is_fence_i", false,-1);
        tracep->declBit(c+33,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+34,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+36,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+37,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+38,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+47,"riscv_soc core d_cache_io_cpu_ready", false,-1);
        tracep->declBit(c+48,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+49,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+50,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+54,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+55,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+56,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+57,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+58,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+60,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+61,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+33,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+34,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+36,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+37,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+48,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+49,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+50,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+54,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+56,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+57,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+58,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+60,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+61,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+62,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+63,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+64,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+65,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+3188,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+66,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+67,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+26,"riscv_soc core cross_bar_1_io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+68,"riscv_soc core cross_bar_1_io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+69,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+76,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+22,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+23,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+26,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+27,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+28,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+38,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+47,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+62,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+63,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+64,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+65,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+77,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+80,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core fetch_reset", false,-1);
        tracep->declBit(c+81,"riscv_soc core fetch_io_br_info_valid", false,-1);
        tracep->declBit(c+82,"riscv_soc core fetch_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+83,"riscv_soc core fetch_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core fetch_io_br_info_taken", false,-1);
        tracep->declQuad(c+86,"riscv_soc core fetch_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core fetch_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core fetch_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core fetch_io_flush", false,-1);
        tracep->declBit(c+66,"riscv_soc core fetch_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+67,"riscv_soc core fetch_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+26,"riscv_soc core fetch_io_cpu_data_ready", false,-1);
        tracep->declBit(c+68,"riscv_soc core fetch_io_cpu_data_valid", false,-1);
        tracep->declQuad(c+69,"riscv_soc core fetch_io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core fetch_io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core fetch_io_put_pc_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core fetch_io_put_pc_valid", false,-1);
        tracep->declBus(c+96,"riscv_soc core fetch_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"riscv_soc core fetch_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+99,"riscv_soc core fetch_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+21,"riscv_soc core fetch_io_out_flush", false,-1);
        tracep->declBit(c+3186,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute_reset", false,-1);
        tracep->declBit(c+94,"riscv_soc core execute_io_op_datas_ready", false,-1);
        tracep->declBit(c+100,"riscv_soc core execute_io_op_datas_valid", false,-1);
        tracep->declBus(c+101,"riscv_soc core execute_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+102,"riscv_soc core execute_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+103,"riscv_soc core execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+106,"riscv_soc core execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"riscv_soc core execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core execute_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+110,"riscv_soc core execute_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+112,"riscv_soc core execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+113,"riscv_soc core execute_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+114,"riscv_soc core execute_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+115,"riscv_soc core execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+116,"riscv_soc core execute_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core execute_io_irq_time_irq", false,-1);
        tracep->declBit(c+119,"riscv_soc core execute_io_irq_soft_irq", false,-1);
        tracep->declQuad(c+120,"riscv_soc core execute_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core execute_io_mie", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core execute_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core execute_io_mtvec", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core execute_io_wb_valid", false,-1);
        tracep->declBus(c+129,"riscv_soc core execute_io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"riscv_soc core execute_io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+132,"riscv_soc core execute_io_csr_valid", false,-1);
        tracep->declBus(c+133,"riscv_soc core execute_io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+134,"riscv_soc core execute_io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+136,"riscv_soc core execute_io_csr_except_is_except", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+138,"riscv_soc core execute_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+139,"riscv_soc core execute_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+140,"riscv_soc core execute_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv_soc core execute_io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core execute_io_commit", false,-1);
        tracep->declQuad(c+91,"riscv_soc core execute_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core execute_io_flush", false,-1);
        tracep->declBit(c+32,"riscv_soc core execute_io_fence_i", false,-1);
        tracep->declBit(c+81,"riscv_soc core execute_io_br_info_valid", false,-1);
        tracep->declBit(c+82,"riscv_soc core execute_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+83,"riscv_soc core execute_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core execute_io_br_info_taken", false,-1);
        tracep->declQuad(c+86,"riscv_soc core execute_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core execute_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core execute_io_bus_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core execute_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv_soc core execute_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core execute_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core execute_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core execute_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+76,"riscv_soc core execute_io_bus_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core decode_reset", false,-1);
        tracep->declBit(c+94,"riscv_soc core decode_io_get_inst_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core decode_io_get_inst_valid", false,-1);
        tracep->declBus(c+96,"riscv_soc core decode_io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"riscv_soc core decode_io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+99,"riscv_soc core decode_io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+145,"riscv_soc core decode_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"riscv_soc core decode_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+148,"riscv_soc core decode_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"riscv_soc core decode_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+151,"riscv_soc core decode_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+152,"riscv_soc core decode_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core decode_io_op_datas_ready", false,-1);
        tracep->declBit(c+100,"riscv_soc core decode_io_op_datas_valid", false,-1);
        tracep->declBus(c+101,"riscv_soc core decode_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+102,"riscv_soc core decode_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+103,"riscv_soc core decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+106,"riscv_soc core decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"riscv_soc core decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core decode_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+110,"riscv_soc core decode_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+112,"riscv_soc core decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+113,"riscv_soc core decode_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+114,"riscv_soc core decode_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+115,"riscv_soc core decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+116,"riscv_soc core decode_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core decode_io_flush", false,-1);
        tracep->declBit(c+3186,"riscv_soc core commit_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core commit_reset", false,-1);
        tracep->declBus(c+145,"riscv_soc core commit_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"riscv_soc core commit_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+148,"riscv_soc core commit_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"riscv_soc core commit_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core commit_io_normal_wb_valid", false,-1);
        tracep->declBus(c+129,"riscv_soc core commit_io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"riscv_soc core commit_io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+151,"riscv_soc core commit_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+152,"riscv_soc core commit_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+132,"riscv_soc core commit_io_csr_wb_valid", false,-1);
        tracep->declBus(c+133,"riscv_soc core commit_io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+134,"riscv_soc core commit_io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+136,"riscv_soc core commit_io_csr_except_is_except", false,-1);
        tracep->declBit(c+137,"riscv_soc core commit_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+138,"riscv_soc core commit_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+139,"riscv_soc core commit_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+140,"riscv_soc core commit_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv_soc core commit_io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core commit_io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core commit_io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core commit_io_commit", false,-1);
        tracep->declBit(c+3186,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+77,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+46,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+80,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+119,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+118,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+3186,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+21,"riscv_soc core i_cache io_flush", false,-1);
        tracep->declBit(c+22,"riscv_soc core i_cache io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+23,"riscv_soc core i_cache io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core i_cache io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+26,"riscv_soc core i_cache io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+27,"riscv_soc core i_cache io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+28,"riscv_soc core i_cache io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core i_cache io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+32,"riscv_soc core i_cache io_is_fence_i", false,-1);
        tracep->declBit(c+33,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+34,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+36,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+37,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core i_cache cache_stage0_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache cache_stage0_reset", false,-1);
        tracep->declBit(c+21,"riscv_soc core i_cache cache_stage0_io_flush", false,-1);
        tracep->declBit(c+22,"riscv_soc core i_cache cache_stage0_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+23,"riscv_soc core i_cache cache_stage0_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core i_cache cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+22,"riscv_soc core i_cache cache_stage0_io_addr_ready", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage0_io_addr_valid", false,-1);
        tracep->declQuad(c+155,"riscv_soc core i_cache cache_stage0_io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+3186,"riscv_soc core i_cache cache_stage1_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache cache_stage1_reset", false,-1);
        tracep->declBit(c+21,"riscv_soc core i_cache cache_stage1_io_flush", false,-1);
        tracep->declBit(c+22,"riscv_soc core i_cache cache_stage1_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage1_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+155,"riscv_soc core i_cache cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+157,"riscv_soc core i_cache cache_stage1_io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage1_io_sram_valid", false,-1);
        tracep->declArray(c+161,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+165,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+169,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+173,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+177,"riscv_soc core i_cache cache_stage1_io_sram_ready", false,-1);
        tracep->declBit(c+178,"riscv_soc core i_cache cache_stage1_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+179,"riscv_soc core i_cache cache_stage1_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+183,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+185,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+3186,"riscv_soc core i_cache cache_stage2_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache cache_stage2_reset", false,-1);
        tracep->declBit(c+21,"riscv_soc core i_cache cache_stage2_io_flush", false,-1);
        tracep->declBit(c+178,"riscv_soc core i_cache cache_stage2_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+179,"riscv_soc core i_cache cache_stage2_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+183,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+185,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+33,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+34,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+36,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+37,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+188,"riscv_soc core i_cache cache_stage2_io_sram_w_valid", false,-1);
        tracep->declBus(c+189,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+190,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+194,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+198,"riscv_soc core i_cache cache_stage2_io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+26,"riscv_soc core i_cache cache_stage2_io_rdata_ready", false,-1);
        tracep->declBit(c+27,"riscv_soc core i_cache cache_stage2_io_rdata_valid", false,-1);
        tracep->declQuad(c+28,"riscv_soc core i_cache cache_stage2_io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core i_cache cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+3186,"riscv_soc core i_cache SRAM_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache SRAM_reset", false,-1);
        tracep->declBus(c+199,"riscv_soc core i_cache SRAM_io_addr", false,-1, 5,0);
        tracep->declBit(c+200,"riscv_soc core i_cache SRAM_io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core i_cache SRAM_io_wmask", false,-1, 127,0);
        tracep->declArray(c+190,"riscv_soc core i_cache SRAM_io_wdata", false,-1, 127,0);
        tracep->declArray(c+201,"riscv_soc core i_cache SRAM_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3186,"riscv_soc core i_cache SRAM_1_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache SRAM_1_reset", false,-1);
        tracep->declBus(c+205,"riscv_soc core i_cache SRAM_1_io_addr", false,-1, 5,0);
        tracep->declBit(c+200,"riscv_soc core i_cache SRAM_1_io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core i_cache SRAM_1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+194,"riscv_soc core i_cache SRAM_1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+206,"riscv_soc core i_cache SRAM_1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3186,"riscv_soc core i_cache SRAM_2_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache SRAM_2_reset", false,-1);
        tracep->declBus(c+210,"riscv_soc core i_cache SRAM_2_io_addr", false,-1, 5,0);
        tracep->declBit(c+211,"riscv_soc core i_cache SRAM_2_io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core i_cache SRAM_2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+190,"riscv_soc core i_cache SRAM_2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+212,"riscv_soc core i_cache SRAM_2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3186,"riscv_soc core i_cache SRAM_3_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache SRAM_3_reset", false,-1);
        tracep->declBus(c+216,"riscv_soc core i_cache SRAM_3_io_addr", false,-1, 5,0);
        tracep->declBit(c+211,"riscv_soc core i_cache SRAM_3_io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core i_cache SRAM_3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+194,"riscv_soc core i_cache SRAM_3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+217,"riscv_soc core i_cache SRAM_3_io_rdata", false,-1, 127,0);
        tracep->declQuad(c+221,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+223,"riscv_soc core i_cache reg_sram1_valid", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core i_cache is_w_sram", false,-1);
        tracep->declBit(c+226,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declBit(c+227,"riscv_soc core i_cache is_sram1_write", false,-1);
        tracep->declQuad(c+228,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declBit(c+230,"riscv_soc core i_cache reg_temp_sram0_valid", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache reg_temp_sram1_valid", false,-1);
        tracep->declBus(c+232,"riscv_soc core i_cache reg_temp_r_index", false,-1, 5,0);
        tracep->declBit(c+233,"riscv_soc core i_cache w_r_pass0_val", false,-1);
        tracep->declBit(c+234,"riscv_soc core i_cache w_r_pass1_val", false,-1);
        tracep->declBit(c+177,"riscv_soc core i_cache reg_sram_r_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core i_cache cache_stage0 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache cache_stage0 reset", false,-1);
        tracep->declBit(c+21,"riscv_soc core i_cache cache_stage0 io_flush", false,-1);
        tracep->declBit(c+22,"riscv_soc core i_cache cache_stage0 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+23,"riscv_soc core i_cache cache_stage0 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core i_cache cache_stage0 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+22,"riscv_soc core i_cache cache_stage0 io_addr_ready", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage0 io_addr_valid", false,-1);
        tracep->declQuad(c+155,"riscv_soc core i_cache cache_stage0 io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage0 reg_valid", false,-1);
        tracep->declQuad(c+155,"riscv_soc core i_cache cache_stage0 reg_addr", false,-1, 63,0);
        tracep->declBit(c+235,"riscv_soc core i_cache cache_stage0 valid", false,-1);
        tracep->declBit(c+3186,"riscv_soc core i_cache cache_stage1 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache cache_stage1 reset", false,-1);
        tracep->declBit(c+21,"riscv_soc core i_cache cache_stage1 io_flush", false,-1);
        tracep->declBit(c+22,"riscv_soc core i_cache cache_stage1 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+154,"riscv_soc core i_cache cache_stage1 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+155,"riscv_soc core i_cache cache_stage1 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+157,"riscv_soc core i_cache cache_stage1 io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage1 io_sram_valid", false,-1);
        tracep->declArray(c+161,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+165,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+169,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+173,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+177,"riscv_soc core i_cache cache_stage1 io_sram_ready", false,-1);
        tracep->declBit(c+178,"riscv_soc core i_cache cache_stage1 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+179,"riscv_soc core i_cache cache_stage1 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+183,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+185,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+160,"riscv_soc core i_cache cache_stage1 valid", false,-1);
        tracep->declBit(c+236,"riscv_soc core i_cache cache_stage1 ready", false,-1);
        tracep->declQuad(c+180,"riscv_soc core i_cache cache_stage1 reg_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+237,"riscv_soc core i_cache cache_stage1 reg_valid", false,-1);
        tracep->declQuad(c+238,"riscv_soc core i_cache cache_stage1 reg_tag", false,-1, 53,0);
        tracep->declBus(c+240,"riscv_soc core i_cache cache_stage1 reg_index", false,-1, 5,0);
        tracep->declBus(c+241,"riscv_soc core i_cache cache_stage1 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+242,"riscv_soc core i_cache cache_stage1 tag_0", false,-1, 53,0);
        tracep->declQuad(c+244,"riscv_soc core i_cache cache_stage1 tag_1", false,-1, 53,0);
        tracep->declBit(c+3186,"riscv_soc core i_cache cache_stage2 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache cache_stage2 reset", false,-1);
        tracep->declBit(c+21,"riscv_soc core i_cache cache_stage2 io_flush", false,-1);
        tracep->declBit(c+178,"riscv_soc core i_cache cache_stage2 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+179,"riscv_soc core i_cache cache_stage2 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+180,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+182,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+158,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+183,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+185,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+159,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+186,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+33,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+34,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+36,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+37,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+188,"riscv_soc core i_cache cache_stage2 io_sram_w_valid", false,-1);
        tracep->declBus(c+189,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+190,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+194,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+198,"riscv_soc core i_cache cache_stage2 io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+26,"riscv_soc core i_cache cache_stage2 io_rdata_ready", false,-1);
        tracep->declBit(c+27,"riscv_soc core i_cache cache_stage2 io_rdata_valid", false,-1);
        tracep->declQuad(c+28,"riscv_soc core i_cache cache_stage2 io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core i_cache cache_stage2 io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBus(c+240,"riscv_soc core i_cache cache_stage2 index", false,-1, 5,0);
        tracep->declBit(c+246,"riscv_soc core i_cache cache_stage2 valid", false,-1);
        tracep->declBit(c+198,"riscv_soc core i_cache cache_stage2 reg_chosen_tag", false,-1);
        tracep->declQuad(c+28,"riscv_soc core i_cache cache_stage2 reg_rdata", false,-1, 63,0);
        tracep->declBit(c+27,"riscv_soc core i_cache cache_stage2 reg_valid", false,-1);
        tracep->declBit(c+247,"riscv_soc core i_cache cache_stage2 reg_ready", false,-1);
        tracep->declQuad(c+248,"riscv_soc core i_cache cache_stage2 temp_addr", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv_soc core i_cache cache_stage2 reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+33,"riscv_soc core i_cache cache_stage2 reg_r_valid", false,-1);
        tracep->declArray(c+190,"riscv_soc core i_cache cache_stage2 reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+188,"riscv_soc core i_cache cache_stage2 reg_cache_write", false,-1);
        tracep->declQuad(c+30,"riscv_soc core i_cache cache_stage2 reg_cpu_addr", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc core i_cache cache_stage2 reg_tag", false,-1, 53,0);
        tracep->declBus(c+252,"riscv_soc core i_cache cache_stage2 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+253,"riscv_soc core i_cache cache_stage2 reg_lru_1", false,-1, 63,0);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage2 LRU_1", false,-1);
        tracep->declQuad(c+256,"riscv_soc core i_cache cache_stage2 chose_bit", false,-1, 63,0);
        tracep->declQuad(c+258,"riscv_soc core i_cache cache_stage2 neg_chose_bit", false,-1, 63,0);
        tracep->declBus(c+260,"riscv_soc core i_cache cache_stage2 reg_bus_state", false,-1, 1,0);
        tracep->declBit(c+3186,"riscv_soc core i_cache SRAM clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache SRAM reset", false,-1);
        tracep->declBus(c+199,"riscv_soc core i_cache SRAM io_addr", false,-1, 5,0);
        tracep->declBit(c+200,"riscv_soc core i_cache SRAM io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core i_cache SRAM io_wmask", false,-1, 127,0);
        tracep->declArray(c+190,"riscv_soc core i_cache SRAM io_wdata", false,-1, 127,0);
        tracep->declArray(c+201,"riscv_soc core i_cache SRAM io_rdata", false,-1, 127,0);
        tracep->declArray(c+201,"riscv_soc core i_cache SRAM Q", false,-1, 127,0);
        tracep->declArray(c+261,"riscv_soc core i_cache SRAM sram_0", false,-1, 127,0);
        tracep->declArray(c+265,"riscv_soc core i_cache SRAM sram_1", false,-1, 127,0);
        tracep->declArray(c+269,"riscv_soc core i_cache SRAM sram_2", false,-1, 127,0);
        tracep->declArray(c+273,"riscv_soc core i_cache SRAM sram_3", false,-1, 127,0);
        tracep->declArray(c+277,"riscv_soc core i_cache SRAM sram_4", false,-1, 127,0);
        tracep->declArray(c+281,"riscv_soc core i_cache SRAM sram_5", false,-1, 127,0);
        tracep->declArray(c+285,"riscv_soc core i_cache SRAM sram_6", false,-1, 127,0);
        tracep->declArray(c+289,"riscv_soc core i_cache SRAM sram_7", false,-1, 127,0);
        tracep->declArray(c+293,"riscv_soc core i_cache SRAM sram_8", false,-1, 127,0);
        tracep->declArray(c+297,"riscv_soc core i_cache SRAM sram_9", false,-1, 127,0);
        tracep->declArray(c+301,"riscv_soc core i_cache SRAM sram_10", false,-1, 127,0);
        tracep->declArray(c+305,"riscv_soc core i_cache SRAM sram_11", false,-1, 127,0);
        tracep->declArray(c+309,"riscv_soc core i_cache SRAM sram_12", false,-1, 127,0);
        tracep->declArray(c+313,"riscv_soc core i_cache SRAM sram_13", false,-1, 127,0);
        tracep->declArray(c+317,"riscv_soc core i_cache SRAM sram_14", false,-1, 127,0);
        tracep->declArray(c+321,"riscv_soc core i_cache SRAM sram_15", false,-1, 127,0);
        tracep->declArray(c+325,"riscv_soc core i_cache SRAM sram_16", false,-1, 127,0);
        tracep->declArray(c+329,"riscv_soc core i_cache SRAM sram_17", false,-1, 127,0);
        tracep->declArray(c+333,"riscv_soc core i_cache SRAM sram_18", false,-1, 127,0);
        tracep->declArray(c+337,"riscv_soc core i_cache SRAM sram_19", false,-1, 127,0);
        tracep->declArray(c+341,"riscv_soc core i_cache SRAM sram_20", false,-1, 127,0);
        tracep->declArray(c+345,"riscv_soc core i_cache SRAM sram_21", false,-1, 127,0);
        tracep->declArray(c+349,"riscv_soc core i_cache SRAM sram_22", false,-1, 127,0);
        tracep->declArray(c+353,"riscv_soc core i_cache SRAM sram_23", false,-1, 127,0);
        tracep->declArray(c+357,"riscv_soc core i_cache SRAM sram_24", false,-1, 127,0);
        tracep->declArray(c+361,"riscv_soc core i_cache SRAM sram_25", false,-1, 127,0);
        tracep->declArray(c+365,"riscv_soc core i_cache SRAM sram_26", false,-1, 127,0);
        tracep->declArray(c+369,"riscv_soc core i_cache SRAM sram_27", false,-1, 127,0);
        tracep->declArray(c+373,"riscv_soc core i_cache SRAM sram_28", false,-1, 127,0);
        tracep->declArray(c+377,"riscv_soc core i_cache SRAM sram_29", false,-1, 127,0);
        tracep->declArray(c+381,"riscv_soc core i_cache SRAM sram_30", false,-1, 127,0);
        tracep->declArray(c+385,"riscv_soc core i_cache SRAM sram_31", false,-1, 127,0);
        tracep->declArray(c+389,"riscv_soc core i_cache SRAM sram_32", false,-1, 127,0);
        tracep->declArray(c+393,"riscv_soc core i_cache SRAM sram_33", false,-1, 127,0);
        tracep->declArray(c+397,"riscv_soc core i_cache SRAM sram_34", false,-1, 127,0);
        tracep->declArray(c+401,"riscv_soc core i_cache SRAM sram_35", false,-1, 127,0);
        tracep->declArray(c+405,"riscv_soc core i_cache SRAM sram_36", false,-1, 127,0);
        tracep->declArray(c+409,"riscv_soc core i_cache SRAM sram_37", false,-1, 127,0);
        tracep->declArray(c+413,"riscv_soc core i_cache SRAM sram_38", false,-1, 127,0);
        tracep->declArray(c+417,"riscv_soc core i_cache SRAM sram_39", false,-1, 127,0);
        tracep->declArray(c+421,"riscv_soc core i_cache SRAM sram_40", false,-1, 127,0);
        tracep->declArray(c+425,"riscv_soc core i_cache SRAM sram_41", false,-1, 127,0);
        tracep->declArray(c+429,"riscv_soc core i_cache SRAM sram_42", false,-1, 127,0);
        tracep->declArray(c+433,"riscv_soc core i_cache SRAM sram_43", false,-1, 127,0);
        tracep->declArray(c+437,"riscv_soc core i_cache SRAM sram_44", false,-1, 127,0);
        tracep->declArray(c+441,"riscv_soc core i_cache SRAM sram_45", false,-1, 127,0);
        tracep->declArray(c+445,"riscv_soc core i_cache SRAM sram_46", false,-1, 127,0);
        tracep->declArray(c+449,"riscv_soc core i_cache SRAM sram_47", false,-1, 127,0);
        tracep->declArray(c+453,"riscv_soc core i_cache SRAM sram_48", false,-1, 127,0);
        tracep->declArray(c+457,"riscv_soc core i_cache SRAM sram_49", false,-1, 127,0);
        tracep->declArray(c+461,"riscv_soc core i_cache SRAM sram_50", false,-1, 127,0);
        tracep->declArray(c+465,"riscv_soc core i_cache SRAM sram_51", false,-1, 127,0);
        tracep->declArray(c+469,"riscv_soc core i_cache SRAM sram_52", false,-1, 127,0);
        tracep->declArray(c+473,"riscv_soc core i_cache SRAM sram_53", false,-1, 127,0);
        tracep->declArray(c+477,"riscv_soc core i_cache SRAM sram_54", false,-1, 127,0);
        tracep->declArray(c+481,"riscv_soc core i_cache SRAM sram_55", false,-1, 127,0);
        tracep->declArray(c+485,"riscv_soc core i_cache SRAM sram_56", false,-1, 127,0);
        tracep->declArray(c+489,"riscv_soc core i_cache SRAM sram_57", false,-1, 127,0);
        tracep->declArray(c+493,"riscv_soc core i_cache SRAM sram_58", false,-1, 127,0);
        tracep->declArray(c+497,"riscv_soc core i_cache SRAM sram_59", false,-1, 127,0);
        tracep->declArray(c+501,"riscv_soc core i_cache SRAM sram_60", false,-1, 127,0);
        tracep->declArray(c+505,"riscv_soc core i_cache SRAM sram_61", false,-1, 127,0);
        tracep->declArray(c+509,"riscv_soc core i_cache SRAM sram_62", false,-1, 127,0);
        tracep->declArray(c+513,"riscv_soc core i_cache SRAM sram_63", false,-1, 127,0);
        tracep->declArray(c+3193,"riscv_soc core i_cache SRAM bwen", false,-1, 127,0);
        tracep->declBit(c+226,"riscv_soc core i_cache SRAM wen", false,-1);
        tracep->declBit(c+3186,"riscv_soc core i_cache SRAM_1 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache SRAM_1 reset", false,-1);
        tracep->declBus(c+205,"riscv_soc core i_cache SRAM_1 io_addr", false,-1, 5,0);
        tracep->declBit(c+200,"riscv_soc core i_cache SRAM_1 io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core i_cache SRAM_1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+194,"riscv_soc core i_cache SRAM_1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+206,"riscv_soc core i_cache SRAM_1 io_rdata", false,-1, 127,0);
        tracep->declArray(c+206,"riscv_soc core i_cache SRAM_1 Q", false,-1, 127,0);
        tracep->declArray(c+517,"riscv_soc core i_cache SRAM_1 sram_0", false,-1, 127,0);
        tracep->declArray(c+521,"riscv_soc core i_cache SRAM_1 sram_1", false,-1, 127,0);
        tracep->declArray(c+525,"riscv_soc core i_cache SRAM_1 sram_2", false,-1, 127,0);
        tracep->declArray(c+529,"riscv_soc core i_cache SRAM_1 sram_3", false,-1, 127,0);
        tracep->declArray(c+533,"riscv_soc core i_cache SRAM_1 sram_4", false,-1, 127,0);
        tracep->declArray(c+537,"riscv_soc core i_cache SRAM_1 sram_5", false,-1, 127,0);
        tracep->declArray(c+541,"riscv_soc core i_cache SRAM_1 sram_6", false,-1, 127,0);
        tracep->declArray(c+545,"riscv_soc core i_cache SRAM_1 sram_7", false,-1, 127,0);
        tracep->declArray(c+549,"riscv_soc core i_cache SRAM_1 sram_8", false,-1, 127,0);
        tracep->declArray(c+553,"riscv_soc core i_cache SRAM_1 sram_9", false,-1, 127,0);
        tracep->declArray(c+557,"riscv_soc core i_cache SRAM_1 sram_10", false,-1, 127,0);
        tracep->declArray(c+561,"riscv_soc core i_cache SRAM_1 sram_11", false,-1, 127,0);
        tracep->declArray(c+565,"riscv_soc core i_cache SRAM_1 sram_12", false,-1, 127,0);
        tracep->declArray(c+569,"riscv_soc core i_cache SRAM_1 sram_13", false,-1, 127,0);
        tracep->declArray(c+573,"riscv_soc core i_cache SRAM_1 sram_14", false,-1, 127,0);
        tracep->declArray(c+577,"riscv_soc core i_cache SRAM_1 sram_15", false,-1, 127,0);
        tracep->declArray(c+581,"riscv_soc core i_cache SRAM_1 sram_16", false,-1, 127,0);
        tracep->declArray(c+585,"riscv_soc core i_cache SRAM_1 sram_17", false,-1, 127,0);
        tracep->declArray(c+589,"riscv_soc core i_cache SRAM_1 sram_18", false,-1, 127,0);
        tracep->declArray(c+593,"riscv_soc core i_cache SRAM_1 sram_19", false,-1, 127,0);
        tracep->declArray(c+597,"riscv_soc core i_cache SRAM_1 sram_20", false,-1, 127,0);
        tracep->declArray(c+601,"riscv_soc core i_cache SRAM_1 sram_21", false,-1, 127,0);
        tracep->declArray(c+605,"riscv_soc core i_cache SRAM_1 sram_22", false,-1, 127,0);
        tracep->declArray(c+609,"riscv_soc core i_cache SRAM_1 sram_23", false,-1, 127,0);
        tracep->declArray(c+613,"riscv_soc core i_cache SRAM_1 sram_24", false,-1, 127,0);
        tracep->declArray(c+617,"riscv_soc core i_cache SRAM_1 sram_25", false,-1, 127,0);
        tracep->declArray(c+621,"riscv_soc core i_cache SRAM_1 sram_26", false,-1, 127,0);
        tracep->declArray(c+625,"riscv_soc core i_cache SRAM_1 sram_27", false,-1, 127,0);
        tracep->declArray(c+629,"riscv_soc core i_cache SRAM_1 sram_28", false,-1, 127,0);
        tracep->declArray(c+633,"riscv_soc core i_cache SRAM_1 sram_29", false,-1, 127,0);
        tracep->declArray(c+637,"riscv_soc core i_cache SRAM_1 sram_30", false,-1, 127,0);
        tracep->declArray(c+641,"riscv_soc core i_cache SRAM_1 sram_31", false,-1, 127,0);
        tracep->declArray(c+645,"riscv_soc core i_cache SRAM_1 sram_32", false,-1, 127,0);
        tracep->declArray(c+649,"riscv_soc core i_cache SRAM_1 sram_33", false,-1, 127,0);
        tracep->declArray(c+653,"riscv_soc core i_cache SRAM_1 sram_34", false,-1, 127,0);
        tracep->declArray(c+657,"riscv_soc core i_cache SRAM_1 sram_35", false,-1, 127,0);
        tracep->declArray(c+661,"riscv_soc core i_cache SRAM_1 sram_36", false,-1, 127,0);
        tracep->declArray(c+665,"riscv_soc core i_cache SRAM_1 sram_37", false,-1, 127,0);
        tracep->declArray(c+669,"riscv_soc core i_cache SRAM_1 sram_38", false,-1, 127,0);
        tracep->declArray(c+673,"riscv_soc core i_cache SRAM_1 sram_39", false,-1, 127,0);
        tracep->declArray(c+677,"riscv_soc core i_cache SRAM_1 sram_40", false,-1, 127,0);
        tracep->declArray(c+681,"riscv_soc core i_cache SRAM_1 sram_41", false,-1, 127,0);
        tracep->declArray(c+685,"riscv_soc core i_cache SRAM_1 sram_42", false,-1, 127,0);
        tracep->declArray(c+689,"riscv_soc core i_cache SRAM_1 sram_43", false,-1, 127,0);
        tracep->declArray(c+693,"riscv_soc core i_cache SRAM_1 sram_44", false,-1, 127,0);
        tracep->declArray(c+697,"riscv_soc core i_cache SRAM_1 sram_45", false,-1, 127,0);
        tracep->declArray(c+701,"riscv_soc core i_cache SRAM_1 sram_46", false,-1, 127,0);
        tracep->declArray(c+705,"riscv_soc core i_cache SRAM_1 sram_47", false,-1, 127,0);
        tracep->declArray(c+709,"riscv_soc core i_cache SRAM_1 sram_48", false,-1, 127,0);
        tracep->declArray(c+713,"riscv_soc core i_cache SRAM_1 sram_49", false,-1, 127,0);
        tracep->declArray(c+717,"riscv_soc core i_cache SRAM_1 sram_50", false,-1, 127,0);
        tracep->declArray(c+721,"riscv_soc core i_cache SRAM_1 sram_51", false,-1, 127,0);
        tracep->declArray(c+725,"riscv_soc core i_cache SRAM_1 sram_52", false,-1, 127,0);
        tracep->declArray(c+729,"riscv_soc core i_cache SRAM_1 sram_53", false,-1, 127,0);
        tracep->declArray(c+733,"riscv_soc core i_cache SRAM_1 sram_54", false,-1, 127,0);
        tracep->declArray(c+737,"riscv_soc core i_cache SRAM_1 sram_55", false,-1, 127,0);
        tracep->declArray(c+741,"riscv_soc core i_cache SRAM_1 sram_56", false,-1, 127,0);
        tracep->declArray(c+745,"riscv_soc core i_cache SRAM_1 sram_57", false,-1, 127,0);
        tracep->declArray(c+749,"riscv_soc core i_cache SRAM_1 sram_58", false,-1, 127,0);
        tracep->declArray(c+753,"riscv_soc core i_cache SRAM_1 sram_59", false,-1, 127,0);
        tracep->declArray(c+757,"riscv_soc core i_cache SRAM_1 sram_60", false,-1, 127,0);
        tracep->declArray(c+761,"riscv_soc core i_cache SRAM_1 sram_61", false,-1, 127,0);
        tracep->declArray(c+765,"riscv_soc core i_cache SRAM_1 sram_62", false,-1, 127,0);
        tracep->declArray(c+769,"riscv_soc core i_cache SRAM_1 sram_63", false,-1, 127,0);
        tracep->declArray(c+3193,"riscv_soc core i_cache SRAM_1 bwen", false,-1, 127,0);
        tracep->declBit(c+226,"riscv_soc core i_cache SRAM_1 wen", false,-1);
        tracep->declBit(c+3186,"riscv_soc core i_cache SRAM_2 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache SRAM_2 reset", false,-1);
        tracep->declBus(c+210,"riscv_soc core i_cache SRAM_2 io_addr", false,-1, 5,0);
        tracep->declBit(c+211,"riscv_soc core i_cache SRAM_2 io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core i_cache SRAM_2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+190,"riscv_soc core i_cache SRAM_2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+212,"riscv_soc core i_cache SRAM_2 io_rdata", false,-1, 127,0);
        tracep->declArray(c+212,"riscv_soc core i_cache SRAM_2 Q", false,-1, 127,0);
        tracep->declArray(c+773,"riscv_soc core i_cache SRAM_2 sram_0", false,-1, 127,0);
        tracep->declArray(c+777,"riscv_soc core i_cache SRAM_2 sram_1", false,-1, 127,0);
        tracep->declArray(c+781,"riscv_soc core i_cache SRAM_2 sram_2", false,-1, 127,0);
        tracep->declArray(c+785,"riscv_soc core i_cache SRAM_2 sram_3", false,-1, 127,0);
        tracep->declArray(c+789,"riscv_soc core i_cache SRAM_2 sram_4", false,-1, 127,0);
        tracep->declArray(c+793,"riscv_soc core i_cache SRAM_2 sram_5", false,-1, 127,0);
        tracep->declArray(c+797,"riscv_soc core i_cache SRAM_2 sram_6", false,-1, 127,0);
        tracep->declArray(c+801,"riscv_soc core i_cache SRAM_2 sram_7", false,-1, 127,0);
        tracep->declArray(c+805,"riscv_soc core i_cache SRAM_2 sram_8", false,-1, 127,0);
        tracep->declArray(c+809,"riscv_soc core i_cache SRAM_2 sram_9", false,-1, 127,0);
        tracep->declArray(c+813,"riscv_soc core i_cache SRAM_2 sram_10", false,-1, 127,0);
        tracep->declArray(c+817,"riscv_soc core i_cache SRAM_2 sram_11", false,-1, 127,0);
        tracep->declArray(c+821,"riscv_soc core i_cache SRAM_2 sram_12", false,-1, 127,0);
        tracep->declArray(c+825,"riscv_soc core i_cache SRAM_2 sram_13", false,-1, 127,0);
        tracep->declArray(c+829,"riscv_soc core i_cache SRAM_2 sram_14", false,-1, 127,0);
        tracep->declArray(c+833,"riscv_soc core i_cache SRAM_2 sram_15", false,-1, 127,0);
        tracep->declArray(c+837,"riscv_soc core i_cache SRAM_2 sram_16", false,-1, 127,0);
        tracep->declArray(c+841,"riscv_soc core i_cache SRAM_2 sram_17", false,-1, 127,0);
        tracep->declArray(c+845,"riscv_soc core i_cache SRAM_2 sram_18", false,-1, 127,0);
        tracep->declArray(c+849,"riscv_soc core i_cache SRAM_2 sram_19", false,-1, 127,0);
        tracep->declArray(c+853,"riscv_soc core i_cache SRAM_2 sram_20", false,-1, 127,0);
        tracep->declArray(c+857,"riscv_soc core i_cache SRAM_2 sram_21", false,-1, 127,0);
        tracep->declArray(c+861,"riscv_soc core i_cache SRAM_2 sram_22", false,-1, 127,0);
        tracep->declArray(c+865,"riscv_soc core i_cache SRAM_2 sram_23", false,-1, 127,0);
        tracep->declArray(c+869,"riscv_soc core i_cache SRAM_2 sram_24", false,-1, 127,0);
        tracep->declArray(c+873,"riscv_soc core i_cache SRAM_2 sram_25", false,-1, 127,0);
        tracep->declArray(c+877,"riscv_soc core i_cache SRAM_2 sram_26", false,-1, 127,0);
        tracep->declArray(c+881,"riscv_soc core i_cache SRAM_2 sram_27", false,-1, 127,0);
        tracep->declArray(c+885,"riscv_soc core i_cache SRAM_2 sram_28", false,-1, 127,0);
        tracep->declArray(c+889,"riscv_soc core i_cache SRAM_2 sram_29", false,-1, 127,0);
        tracep->declArray(c+893,"riscv_soc core i_cache SRAM_2 sram_30", false,-1, 127,0);
        tracep->declArray(c+897,"riscv_soc core i_cache SRAM_2 sram_31", false,-1, 127,0);
        tracep->declArray(c+901,"riscv_soc core i_cache SRAM_2 sram_32", false,-1, 127,0);
        tracep->declArray(c+905,"riscv_soc core i_cache SRAM_2 sram_33", false,-1, 127,0);
        tracep->declArray(c+909,"riscv_soc core i_cache SRAM_2 sram_34", false,-1, 127,0);
        tracep->declArray(c+913,"riscv_soc core i_cache SRAM_2 sram_35", false,-1, 127,0);
        tracep->declArray(c+917,"riscv_soc core i_cache SRAM_2 sram_36", false,-1, 127,0);
        tracep->declArray(c+921,"riscv_soc core i_cache SRAM_2 sram_37", false,-1, 127,0);
        tracep->declArray(c+925,"riscv_soc core i_cache SRAM_2 sram_38", false,-1, 127,0);
        tracep->declArray(c+929,"riscv_soc core i_cache SRAM_2 sram_39", false,-1, 127,0);
        tracep->declArray(c+933,"riscv_soc core i_cache SRAM_2 sram_40", false,-1, 127,0);
        tracep->declArray(c+937,"riscv_soc core i_cache SRAM_2 sram_41", false,-1, 127,0);
        tracep->declArray(c+941,"riscv_soc core i_cache SRAM_2 sram_42", false,-1, 127,0);
        tracep->declArray(c+945,"riscv_soc core i_cache SRAM_2 sram_43", false,-1, 127,0);
        tracep->declArray(c+949,"riscv_soc core i_cache SRAM_2 sram_44", false,-1, 127,0);
        tracep->declArray(c+953,"riscv_soc core i_cache SRAM_2 sram_45", false,-1, 127,0);
        tracep->declArray(c+957,"riscv_soc core i_cache SRAM_2 sram_46", false,-1, 127,0);
        tracep->declArray(c+961,"riscv_soc core i_cache SRAM_2 sram_47", false,-1, 127,0);
        tracep->declArray(c+965,"riscv_soc core i_cache SRAM_2 sram_48", false,-1, 127,0);
        tracep->declArray(c+969,"riscv_soc core i_cache SRAM_2 sram_49", false,-1, 127,0);
        tracep->declArray(c+973,"riscv_soc core i_cache SRAM_2 sram_50", false,-1, 127,0);
        tracep->declArray(c+977,"riscv_soc core i_cache SRAM_2 sram_51", false,-1, 127,0);
        tracep->declArray(c+981,"riscv_soc core i_cache SRAM_2 sram_52", false,-1, 127,0);
        tracep->declArray(c+985,"riscv_soc core i_cache SRAM_2 sram_53", false,-1, 127,0);
        tracep->declArray(c+989,"riscv_soc core i_cache SRAM_2 sram_54", false,-1, 127,0);
        tracep->declArray(c+993,"riscv_soc core i_cache SRAM_2 sram_55", false,-1, 127,0);
        tracep->declArray(c+997,"riscv_soc core i_cache SRAM_2 sram_56", false,-1, 127,0);
        tracep->declArray(c+1001,"riscv_soc core i_cache SRAM_2 sram_57", false,-1, 127,0);
        tracep->declArray(c+1005,"riscv_soc core i_cache SRAM_2 sram_58", false,-1, 127,0);
        tracep->declArray(c+1009,"riscv_soc core i_cache SRAM_2 sram_59", false,-1, 127,0);
        tracep->declArray(c+1013,"riscv_soc core i_cache SRAM_2 sram_60", false,-1, 127,0);
        tracep->declArray(c+1017,"riscv_soc core i_cache SRAM_2 sram_61", false,-1, 127,0);
        tracep->declArray(c+1021,"riscv_soc core i_cache SRAM_2 sram_62", false,-1, 127,0);
        tracep->declArray(c+1025,"riscv_soc core i_cache SRAM_2 sram_63", false,-1, 127,0);
        tracep->declArray(c+3193,"riscv_soc core i_cache SRAM_2 bwen", false,-1, 127,0);
        tracep->declBit(c+227,"riscv_soc core i_cache SRAM_2 wen", false,-1);
        tracep->declBit(c+3186,"riscv_soc core i_cache SRAM_3 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core i_cache SRAM_3 reset", false,-1);
        tracep->declBus(c+216,"riscv_soc core i_cache SRAM_3 io_addr", false,-1, 5,0);
        tracep->declBit(c+211,"riscv_soc core i_cache SRAM_3 io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core i_cache SRAM_3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+194,"riscv_soc core i_cache SRAM_3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+217,"riscv_soc core i_cache SRAM_3 io_rdata", false,-1, 127,0);
        tracep->declArray(c+217,"riscv_soc core i_cache SRAM_3 Q", false,-1, 127,0);
        tracep->declArray(c+1029,"riscv_soc core i_cache SRAM_3 sram_0", false,-1, 127,0);
        tracep->declArray(c+1033,"riscv_soc core i_cache SRAM_3 sram_1", false,-1, 127,0);
        tracep->declArray(c+1037,"riscv_soc core i_cache SRAM_3 sram_2", false,-1, 127,0);
        tracep->declArray(c+1041,"riscv_soc core i_cache SRAM_3 sram_3", false,-1, 127,0);
        tracep->declArray(c+1045,"riscv_soc core i_cache SRAM_3 sram_4", false,-1, 127,0);
        tracep->declArray(c+1049,"riscv_soc core i_cache SRAM_3 sram_5", false,-1, 127,0);
        tracep->declArray(c+1053,"riscv_soc core i_cache SRAM_3 sram_6", false,-1, 127,0);
        tracep->declArray(c+1057,"riscv_soc core i_cache SRAM_3 sram_7", false,-1, 127,0);
        tracep->declArray(c+1061,"riscv_soc core i_cache SRAM_3 sram_8", false,-1, 127,0);
        tracep->declArray(c+1065,"riscv_soc core i_cache SRAM_3 sram_9", false,-1, 127,0);
        tracep->declArray(c+1069,"riscv_soc core i_cache SRAM_3 sram_10", false,-1, 127,0);
        tracep->declArray(c+1073,"riscv_soc core i_cache SRAM_3 sram_11", false,-1, 127,0);
        tracep->declArray(c+1077,"riscv_soc core i_cache SRAM_3 sram_12", false,-1, 127,0);
        tracep->declArray(c+1081,"riscv_soc core i_cache SRAM_3 sram_13", false,-1, 127,0);
        tracep->declArray(c+1085,"riscv_soc core i_cache SRAM_3 sram_14", false,-1, 127,0);
        tracep->declArray(c+1089,"riscv_soc core i_cache SRAM_3 sram_15", false,-1, 127,0);
        tracep->declArray(c+1093,"riscv_soc core i_cache SRAM_3 sram_16", false,-1, 127,0);
        tracep->declArray(c+1097,"riscv_soc core i_cache SRAM_3 sram_17", false,-1, 127,0);
        tracep->declArray(c+1101,"riscv_soc core i_cache SRAM_3 sram_18", false,-1, 127,0);
        tracep->declArray(c+1105,"riscv_soc core i_cache SRAM_3 sram_19", false,-1, 127,0);
        tracep->declArray(c+1109,"riscv_soc core i_cache SRAM_3 sram_20", false,-1, 127,0);
        tracep->declArray(c+1113,"riscv_soc core i_cache SRAM_3 sram_21", false,-1, 127,0);
        tracep->declArray(c+1117,"riscv_soc core i_cache SRAM_3 sram_22", false,-1, 127,0);
        tracep->declArray(c+1121,"riscv_soc core i_cache SRAM_3 sram_23", false,-1, 127,0);
        tracep->declArray(c+1125,"riscv_soc core i_cache SRAM_3 sram_24", false,-1, 127,0);
        tracep->declArray(c+1129,"riscv_soc core i_cache SRAM_3 sram_25", false,-1, 127,0);
        tracep->declArray(c+1133,"riscv_soc core i_cache SRAM_3 sram_26", false,-1, 127,0);
        tracep->declArray(c+1137,"riscv_soc core i_cache SRAM_3 sram_27", false,-1, 127,0);
        tracep->declArray(c+1141,"riscv_soc core i_cache SRAM_3 sram_28", false,-1, 127,0);
        tracep->declArray(c+1145,"riscv_soc core i_cache SRAM_3 sram_29", false,-1, 127,0);
        tracep->declArray(c+1149,"riscv_soc core i_cache SRAM_3 sram_30", false,-1, 127,0);
        tracep->declArray(c+1153,"riscv_soc core i_cache SRAM_3 sram_31", false,-1, 127,0);
        tracep->declArray(c+1157,"riscv_soc core i_cache SRAM_3 sram_32", false,-1, 127,0);
        tracep->declArray(c+1161,"riscv_soc core i_cache SRAM_3 sram_33", false,-1, 127,0);
        tracep->declArray(c+1165,"riscv_soc core i_cache SRAM_3 sram_34", false,-1, 127,0);
        tracep->declArray(c+1169,"riscv_soc core i_cache SRAM_3 sram_35", false,-1, 127,0);
        tracep->declArray(c+1173,"riscv_soc core i_cache SRAM_3 sram_36", false,-1, 127,0);
        tracep->declArray(c+1177,"riscv_soc core i_cache SRAM_3 sram_37", false,-1, 127,0);
        tracep->declArray(c+1181,"riscv_soc core i_cache SRAM_3 sram_38", false,-1, 127,0);
        tracep->declArray(c+1185,"riscv_soc core i_cache SRAM_3 sram_39", false,-1, 127,0);
        tracep->declArray(c+1189,"riscv_soc core i_cache SRAM_3 sram_40", false,-1, 127,0);
        tracep->declArray(c+1193,"riscv_soc core i_cache SRAM_3 sram_41", false,-1, 127,0);
        tracep->declArray(c+1197,"riscv_soc core i_cache SRAM_3 sram_42", false,-1, 127,0);
        tracep->declArray(c+1201,"riscv_soc core i_cache SRAM_3 sram_43", false,-1, 127,0);
        tracep->declArray(c+1205,"riscv_soc core i_cache SRAM_3 sram_44", false,-1, 127,0);
        tracep->declArray(c+1209,"riscv_soc core i_cache SRAM_3 sram_45", false,-1, 127,0);
        tracep->declArray(c+1213,"riscv_soc core i_cache SRAM_3 sram_46", false,-1, 127,0);
        tracep->declArray(c+1217,"riscv_soc core i_cache SRAM_3 sram_47", false,-1, 127,0);
        tracep->declArray(c+1221,"riscv_soc core i_cache SRAM_3 sram_48", false,-1, 127,0);
        tracep->declArray(c+1225,"riscv_soc core i_cache SRAM_3 sram_49", false,-1, 127,0);
        tracep->declArray(c+1229,"riscv_soc core i_cache SRAM_3 sram_50", false,-1, 127,0);
        tracep->declArray(c+1233,"riscv_soc core i_cache SRAM_3 sram_51", false,-1, 127,0);
        tracep->declArray(c+1237,"riscv_soc core i_cache SRAM_3 sram_52", false,-1, 127,0);
        tracep->declArray(c+1241,"riscv_soc core i_cache SRAM_3 sram_53", false,-1, 127,0);
        tracep->declArray(c+1245,"riscv_soc core i_cache SRAM_3 sram_54", false,-1, 127,0);
        tracep->declArray(c+1249,"riscv_soc core i_cache SRAM_3 sram_55", false,-1, 127,0);
        tracep->declArray(c+1253,"riscv_soc core i_cache SRAM_3 sram_56", false,-1, 127,0);
        tracep->declArray(c+1257,"riscv_soc core i_cache SRAM_3 sram_57", false,-1, 127,0);
        tracep->declArray(c+1261,"riscv_soc core i_cache SRAM_3 sram_58", false,-1, 127,0);
        tracep->declArray(c+1265,"riscv_soc core i_cache SRAM_3 sram_59", false,-1, 127,0);
        tracep->declArray(c+1269,"riscv_soc core i_cache SRAM_3 sram_60", false,-1, 127,0);
        tracep->declArray(c+1273,"riscv_soc core i_cache SRAM_3 sram_61", false,-1, 127,0);
        tracep->declArray(c+1277,"riscv_soc core i_cache SRAM_3 sram_62", false,-1, 127,0);
        tracep->declArray(c+1281,"riscv_soc core i_cache SRAM_3 sram_63", false,-1, 127,0);
        tracep->declArray(c+3193,"riscv_soc core i_cache SRAM_3 bwen", false,-1, 127,0);
        tracep->declBit(c+227,"riscv_soc core i_cache SRAM_3 wen", false,-1);
        tracep->declBit(c+3186,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+38,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+47,"riscv_soc core d_cache io_cpu_ready", false,-1);
        tracep->declBit(c+48,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+49,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+50,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+54,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+55,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+56,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+57,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+58,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+60,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+61,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core d_cache SRAM_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache SRAM_reset", false,-1);
        tracep->declBus(c+1285,"riscv_soc core d_cache SRAM_io_addr", false,-1, 5,0);
        tracep->declBit(c+1286,"riscv_soc core d_cache SRAM_io_wen", false,-1);
        tracep->declArray(c+1287,"riscv_soc core d_cache SRAM_io_wmask", false,-1, 127,0);
        tracep->declArray(c+1291,"riscv_soc core d_cache SRAM_io_wdata", false,-1, 127,0);
        tracep->declArray(c+1295,"riscv_soc core d_cache SRAM_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3186,"riscv_soc core d_cache SRAM_1_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache SRAM_1_reset", false,-1);
        tracep->declBus(c+1299,"riscv_soc core d_cache SRAM_1_io_addr", false,-1, 5,0);
        tracep->declBit(c+1286,"riscv_soc core d_cache SRAM_1_io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core d_cache SRAM_1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+1300,"riscv_soc core d_cache SRAM_1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+1304,"riscv_soc core d_cache SRAM_1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3186,"riscv_soc core d_cache SRAM_2_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache SRAM_2_reset", false,-1);
        tracep->declBus(c+1308,"riscv_soc core d_cache SRAM_2_io_addr", false,-1, 5,0);
        tracep->declBit(c+1309,"riscv_soc core d_cache SRAM_2_io_wen", false,-1);
        tracep->declArray(c+1287,"riscv_soc core d_cache SRAM_2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+1291,"riscv_soc core d_cache SRAM_2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+1310,"riscv_soc core d_cache SRAM_2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3186,"riscv_soc core d_cache SRAM_3_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache SRAM_3_reset", false,-1);
        tracep->declBus(c+1314,"riscv_soc core d_cache SRAM_3_io_addr", false,-1, 5,0);
        tracep->declBit(c+1309,"riscv_soc core d_cache SRAM_3_io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core d_cache SRAM_3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+1300,"riscv_soc core d_cache SRAM_3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+1315,"riscv_soc core d_cache SRAM_3_io_rdata", false,-1, 127,0);
        tracep->declQuad(c+1319,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+1321,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+1322,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+1323,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+1324,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+1326,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1327,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+1328,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+1330,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+1331,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+47,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+41,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+1332,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+1333,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+1291,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+1334,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+1335,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+1337,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+1341,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+1345,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+1346,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+1348,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+1350,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+1352,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+1354,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+1355,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+1357,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+58,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+57,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+50,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+54,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+49,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+55,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+1359,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+1361,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+1363,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+1364,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+1365,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+1366,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+1367,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+1368,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+1369,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+1371,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+1373,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+1375,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+1376,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+1377,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+1378,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+1379,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+3186,"riscv_soc core d_cache SRAM clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache SRAM reset", false,-1);
        tracep->declBus(c+1285,"riscv_soc core d_cache SRAM io_addr", false,-1, 5,0);
        tracep->declBit(c+1286,"riscv_soc core d_cache SRAM io_wen", false,-1);
        tracep->declArray(c+1287,"riscv_soc core d_cache SRAM io_wmask", false,-1, 127,0);
        tracep->declArray(c+1291,"riscv_soc core d_cache SRAM io_wdata", false,-1, 127,0);
        tracep->declArray(c+1295,"riscv_soc core d_cache SRAM io_rdata", false,-1, 127,0);
        tracep->declArray(c+1295,"riscv_soc core d_cache SRAM Q", false,-1, 127,0);
        tracep->declArray(c+1380,"riscv_soc core d_cache SRAM sram_0", false,-1, 127,0);
        tracep->declArray(c+1384,"riscv_soc core d_cache SRAM sram_1", false,-1, 127,0);
        tracep->declArray(c+1388,"riscv_soc core d_cache SRAM sram_2", false,-1, 127,0);
        tracep->declArray(c+1392,"riscv_soc core d_cache SRAM sram_3", false,-1, 127,0);
        tracep->declArray(c+1396,"riscv_soc core d_cache SRAM sram_4", false,-1, 127,0);
        tracep->declArray(c+1400,"riscv_soc core d_cache SRAM sram_5", false,-1, 127,0);
        tracep->declArray(c+1404,"riscv_soc core d_cache SRAM sram_6", false,-1, 127,0);
        tracep->declArray(c+1408,"riscv_soc core d_cache SRAM sram_7", false,-1, 127,0);
        tracep->declArray(c+1412,"riscv_soc core d_cache SRAM sram_8", false,-1, 127,0);
        tracep->declArray(c+1416,"riscv_soc core d_cache SRAM sram_9", false,-1, 127,0);
        tracep->declArray(c+1420,"riscv_soc core d_cache SRAM sram_10", false,-1, 127,0);
        tracep->declArray(c+1424,"riscv_soc core d_cache SRAM sram_11", false,-1, 127,0);
        tracep->declArray(c+1428,"riscv_soc core d_cache SRAM sram_12", false,-1, 127,0);
        tracep->declArray(c+1432,"riscv_soc core d_cache SRAM sram_13", false,-1, 127,0);
        tracep->declArray(c+1436,"riscv_soc core d_cache SRAM sram_14", false,-1, 127,0);
        tracep->declArray(c+1440,"riscv_soc core d_cache SRAM sram_15", false,-1, 127,0);
        tracep->declArray(c+1444,"riscv_soc core d_cache SRAM sram_16", false,-1, 127,0);
        tracep->declArray(c+1448,"riscv_soc core d_cache SRAM sram_17", false,-1, 127,0);
        tracep->declArray(c+1452,"riscv_soc core d_cache SRAM sram_18", false,-1, 127,0);
        tracep->declArray(c+1456,"riscv_soc core d_cache SRAM sram_19", false,-1, 127,0);
        tracep->declArray(c+1460,"riscv_soc core d_cache SRAM sram_20", false,-1, 127,0);
        tracep->declArray(c+1464,"riscv_soc core d_cache SRAM sram_21", false,-1, 127,0);
        tracep->declArray(c+1468,"riscv_soc core d_cache SRAM sram_22", false,-1, 127,0);
        tracep->declArray(c+1472,"riscv_soc core d_cache SRAM sram_23", false,-1, 127,0);
        tracep->declArray(c+1476,"riscv_soc core d_cache SRAM sram_24", false,-1, 127,0);
        tracep->declArray(c+1480,"riscv_soc core d_cache SRAM sram_25", false,-1, 127,0);
        tracep->declArray(c+1484,"riscv_soc core d_cache SRAM sram_26", false,-1, 127,0);
        tracep->declArray(c+1488,"riscv_soc core d_cache SRAM sram_27", false,-1, 127,0);
        tracep->declArray(c+1492,"riscv_soc core d_cache SRAM sram_28", false,-1, 127,0);
        tracep->declArray(c+1496,"riscv_soc core d_cache SRAM sram_29", false,-1, 127,0);
        tracep->declArray(c+1500,"riscv_soc core d_cache SRAM sram_30", false,-1, 127,0);
        tracep->declArray(c+1504,"riscv_soc core d_cache SRAM sram_31", false,-1, 127,0);
        tracep->declArray(c+1508,"riscv_soc core d_cache SRAM sram_32", false,-1, 127,0);
        tracep->declArray(c+1512,"riscv_soc core d_cache SRAM sram_33", false,-1, 127,0);
        tracep->declArray(c+1516,"riscv_soc core d_cache SRAM sram_34", false,-1, 127,0);
        tracep->declArray(c+1520,"riscv_soc core d_cache SRAM sram_35", false,-1, 127,0);
        tracep->declArray(c+1524,"riscv_soc core d_cache SRAM sram_36", false,-1, 127,0);
        tracep->declArray(c+1528,"riscv_soc core d_cache SRAM sram_37", false,-1, 127,0);
        tracep->declArray(c+1532,"riscv_soc core d_cache SRAM sram_38", false,-1, 127,0);
        tracep->declArray(c+1536,"riscv_soc core d_cache SRAM sram_39", false,-1, 127,0);
        tracep->declArray(c+1540,"riscv_soc core d_cache SRAM sram_40", false,-1, 127,0);
        tracep->declArray(c+1544,"riscv_soc core d_cache SRAM sram_41", false,-1, 127,0);
        tracep->declArray(c+1548,"riscv_soc core d_cache SRAM sram_42", false,-1, 127,0);
        tracep->declArray(c+1552,"riscv_soc core d_cache SRAM sram_43", false,-1, 127,0);
        tracep->declArray(c+1556,"riscv_soc core d_cache SRAM sram_44", false,-1, 127,0);
        tracep->declArray(c+1560,"riscv_soc core d_cache SRAM sram_45", false,-1, 127,0);
        tracep->declArray(c+1564,"riscv_soc core d_cache SRAM sram_46", false,-1, 127,0);
        tracep->declArray(c+1568,"riscv_soc core d_cache SRAM sram_47", false,-1, 127,0);
        tracep->declArray(c+1572,"riscv_soc core d_cache SRAM sram_48", false,-1, 127,0);
        tracep->declArray(c+1576,"riscv_soc core d_cache SRAM sram_49", false,-1, 127,0);
        tracep->declArray(c+1580,"riscv_soc core d_cache SRAM sram_50", false,-1, 127,0);
        tracep->declArray(c+1584,"riscv_soc core d_cache SRAM sram_51", false,-1, 127,0);
        tracep->declArray(c+1588,"riscv_soc core d_cache SRAM sram_52", false,-1, 127,0);
        tracep->declArray(c+1592,"riscv_soc core d_cache SRAM sram_53", false,-1, 127,0);
        tracep->declArray(c+1596,"riscv_soc core d_cache SRAM sram_54", false,-1, 127,0);
        tracep->declArray(c+1600,"riscv_soc core d_cache SRAM sram_55", false,-1, 127,0);
        tracep->declArray(c+1604,"riscv_soc core d_cache SRAM sram_56", false,-1, 127,0);
        tracep->declArray(c+1608,"riscv_soc core d_cache SRAM sram_57", false,-1, 127,0);
        tracep->declArray(c+1612,"riscv_soc core d_cache SRAM sram_58", false,-1, 127,0);
        tracep->declArray(c+1616,"riscv_soc core d_cache SRAM sram_59", false,-1, 127,0);
        tracep->declArray(c+1620,"riscv_soc core d_cache SRAM sram_60", false,-1, 127,0);
        tracep->declArray(c+1624,"riscv_soc core d_cache SRAM sram_61", false,-1, 127,0);
        tracep->declArray(c+1628,"riscv_soc core d_cache SRAM sram_62", false,-1, 127,0);
        tracep->declArray(c+1632,"riscv_soc core d_cache SRAM sram_63", false,-1, 127,0);
        tracep->declArray(c+1337,"riscv_soc core d_cache SRAM bwen", false,-1, 127,0);
        tracep->declBit(c+1345,"riscv_soc core d_cache SRAM wen", false,-1);
        tracep->declBit(c+3186,"riscv_soc core d_cache SRAM_1 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache SRAM_1 reset", false,-1);
        tracep->declBus(c+1299,"riscv_soc core d_cache SRAM_1 io_addr", false,-1, 5,0);
        tracep->declBit(c+1286,"riscv_soc core d_cache SRAM_1 io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core d_cache SRAM_1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+1300,"riscv_soc core d_cache SRAM_1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+1304,"riscv_soc core d_cache SRAM_1 io_rdata", false,-1, 127,0);
        tracep->declArray(c+1304,"riscv_soc core d_cache SRAM_1 Q", false,-1, 127,0);
        tracep->declArray(c+1636,"riscv_soc core d_cache SRAM_1 sram_0", false,-1, 127,0);
        tracep->declArray(c+1640,"riscv_soc core d_cache SRAM_1 sram_1", false,-1, 127,0);
        tracep->declArray(c+1644,"riscv_soc core d_cache SRAM_1 sram_2", false,-1, 127,0);
        tracep->declArray(c+1648,"riscv_soc core d_cache SRAM_1 sram_3", false,-1, 127,0);
        tracep->declArray(c+1652,"riscv_soc core d_cache SRAM_1 sram_4", false,-1, 127,0);
        tracep->declArray(c+1656,"riscv_soc core d_cache SRAM_1 sram_5", false,-1, 127,0);
        tracep->declArray(c+1660,"riscv_soc core d_cache SRAM_1 sram_6", false,-1, 127,0);
        tracep->declArray(c+1664,"riscv_soc core d_cache SRAM_1 sram_7", false,-1, 127,0);
        tracep->declArray(c+1668,"riscv_soc core d_cache SRAM_1 sram_8", false,-1, 127,0);
        tracep->declArray(c+1672,"riscv_soc core d_cache SRAM_1 sram_9", false,-1, 127,0);
        tracep->declArray(c+1676,"riscv_soc core d_cache SRAM_1 sram_10", false,-1, 127,0);
        tracep->declArray(c+1680,"riscv_soc core d_cache SRAM_1 sram_11", false,-1, 127,0);
        tracep->declArray(c+1684,"riscv_soc core d_cache SRAM_1 sram_12", false,-1, 127,0);
        tracep->declArray(c+1688,"riscv_soc core d_cache SRAM_1 sram_13", false,-1, 127,0);
        tracep->declArray(c+1692,"riscv_soc core d_cache SRAM_1 sram_14", false,-1, 127,0);
        tracep->declArray(c+1696,"riscv_soc core d_cache SRAM_1 sram_15", false,-1, 127,0);
        tracep->declArray(c+1700,"riscv_soc core d_cache SRAM_1 sram_16", false,-1, 127,0);
        tracep->declArray(c+1704,"riscv_soc core d_cache SRAM_1 sram_17", false,-1, 127,0);
        tracep->declArray(c+1708,"riscv_soc core d_cache SRAM_1 sram_18", false,-1, 127,0);
        tracep->declArray(c+1712,"riscv_soc core d_cache SRAM_1 sram_19", false,-1, 127,0);
        tracep->declArray(c+1716,"riscv_soc core d_cache SRAM_1 sram_20", false,-1, 127,0);
        tracep->declArray(c+1720,"riscv_soc core d_cache SRAM_1 sram_21", false,-1, 127,0);
        tracep->declArray(c+1724,"riscv_soc core d_cache SRAM_1 sram_22", false,-1, 127,0);
        tracep->declArray(c+1728,"riscv_soc core d_cache SRAM_1 sram_23", false,-1, 127,0);
        tracep->declArray(c+1732,"riscv_soc core d_cache SRAM_1 sram_24", false,-1, 127,0);
        tracep->declArray(c+1736,"riscv_soc core d_cache SRAM_1 sram_25", false,-1, 127,0);
        tracep->declArray(c+1740,"riscv_soc core d_cache SRAM_1 sram_26", false,-1, 127,0);
        tracep->declArray(c+1744,"riscv_soc core d_cache SRAM_1 sram_27", false,-1, 127,0);
        tracep->declArray(c+1748,"riscv_soc core d_cache SRAM_1 sram_28", false,-1, 127,0);
        tracep->declArray(c+1752,"riscv_soc core d_cache SRAM_1 sram_29", false,-1, 127,0);
        tracep->declArray(c+1756,"riscv_soc core d_cache SRAM_1 sram_30", false,-1, 127,0);
        tracep->declArray(c+1760,"riscv_soc core d_cache SRAM_1 sram_31", false,-1, 127,0);
        tracep->declArray(c+1764,"riscv_soc core d_cache SRAM_1 sram_32", false,-1, 127,0);
        tracep->declArray(c+1768,"riscv_soc core d_cache SRAM_1 sram_33", false,-1, 127,0);
        tracep->declArray(c+1772,"riscv_soc core d_cache SRAM_1 sram_34", false,-1, 127,0);
        tracep->declArray(c+1776,"riscv_soc core d_cache SRAM_1 sram_35", false,-1, 127,0);
        tracep->declArray(c+1780,"riscv_soc core d_cache SRAM_1 sram_36", false,-1, 127,0);
        tracep->declArray(c+1784,"riscv_soc core d_cache SRAM_1 sram_37", false,-1, 127,0);
        tracep->declArray(c+1788,"riscv_soc core d_cache SRAM_1 sram_38", false,-1, 127,0);
        tracep->declArray(c+1792,"riscv_soc core d_cache SRAM_1 sram_39", false,-1, 127,0);
        tracep->declArray(c+1796,"riscv_soc core d_cache SRAM_1 sram_40", false,-1, 127,0);
        tracep->declArray(c+1800,"riscv_soc core d_cache SRAM_1 sram_41", false,-1, 127,0);
        tracep->declArray(c+1804,"riscv_soc core d_cache SRAM_1 sram_42", false,-1, 127,0);
        tracep->declArray(c+1808,"riscv_soc core d_cache SRAM_1 sram_43", false,-1, 127,0);
        tracep->declArray(c+1812,"riscv_soc core d_cache SRAM_1 sram_44", false,-1, 127,0);
        tracep->declArray(c+1816,"riscv_soc core d_cache SRAM_1 sram_45", false,-1, 127,0);
        tracep->declArray(c+1820,"riscv_soc core d_cache SRAM_1 sram_46", false,-1, 127,0);
        tracep->declArray(c+1824,"riscv_soc core d_cache SRAM_1 sram_47", false,-1, 127,0);
        tracep->declArray(c+1828,"riscv_soc core d_cache SRAM_1 sram_48", false,-1, 127,0);
        tracep->declArray(c+1832,"riscv_soc core d_cache SRAM_1 sram_49", false,-1, 127,0);
        tracep->declArray(c+1836,"riscv_soc core d_cache SRAM_1 sram_50", false,-1, 127,0);
        tracep->declArray(c+1840,"riscv_soc core d_cache SRAM_1 sram_51", false,-1, 127,0);
        tracep->declArray(c+1844,"riscv_soc core d_cache SRAM_1 sram_52", false,-1, 127,0);
        tracep->declArray(c+1848,"riscv_soc core d_cache SRAM_1 sram_53", false,-1, 127,0);
        tracep->declArray(c+1852,"riscv_soc core d_cache SRAM_1 sram_54", false,-1, 127,0);
        tracep->declArray(c+1856,"riscv_soc core d_cache SRAM_1 sram_55", false,-1, 127,0);
        tracep->declArray(c+1860,"riscv_soc core d_cache SRAM_1 sram_56", false,-1, 127,0);
        tracep->declArray(c+1864,"riscv_soc core d_cache SRAM_1 sram_57", false,-1, 127,0);
        tracep->declArray(c+1868,"riscv_soc core d_cache SRAM_1 sram_58", false,-1, 127,0);
        tracep->declArray(c+1872,"riscv_soc core d_cache SRAM_1 sram_59", false,-1, 127,0);
        tracep->declArray(c+1876,"riscv_soc core d_cache SRAM_1 sram_60", false,-1, 127,0);
        tracep->declArray(c+1880,"riscv_soc core d_cache SRAM_1 sram_61", false,-1, 127,0);
        tracep->declArray(c+1884,"riscv_soc core d_cache SRAM_1 sram_62", false,-1, 127,0);
        tracep->declArray(c+1888,"riscv_soc core d_cache SRAM_1 sram_63", false,-1, 127,0);
        tracep->declArray(c+3193,"riscv_soc core d_cache SRAM_1 bwen", false,-1, 127,0);
        tracep->declBit(c+1345,"riscv_soc core d_cache SRAM_1 wen", false,-1);
        tracep->declBit(c+3186,"riscv_soc core d_cache SRAM_2 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache SRAM_2 reset", false,-1);
        tracep->declBus(c+1308,"riscv_soc core d_cache SRAM_2 io_addr", false,-1, 5,0);
        tracep->declBit(c+1309,"riscv_soc core d_cache SRAM_2 io_wen", false,-1);
        tracep->declArray(c+1287,"riscv_soc core d_cache SRAM_2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+1291,"riscv_soc core d_cache SRAM_2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+1310,"riscv_soc core d_cache SRAM_2 io_rdata", false,-1, 127,0);
        tracep->declArray(c+1310,"riscv_soc core d_cache SRAM_2 Q", false,-1, 127,0);
        tracep->declArray(c+1892,"riscv_soc core d_cache SRAM_2 sram_0", false,-1, 127,0);
        tracep->declArray(c+1896,"riscv_soc core d_cache SRAM_2 sram_1", false,-1, 127,0);
        tracep->declArray(c+1900,"riscv_soc core d_cache SRAM_2 sram_2", false,-1, 127,0);
        tracep->declArray(c+1904,"riscv_soc core d_cache SRAM_2 sram_3", false,-1, 127,0);
        tracep->declArray(c+1908,"riscv_soc core d_cache SRAM_2 sram_4", false,-1, 127,0);
        tracep->declArray(c+1912,"riscv_soc core d_cache SRAM_2 sram_5", false,-1, 127,0);
        tracep->declArray(c+1916,"riscv_soc core d_cache SRAM_2 sram_6", false,-1, 127,0);
        tracep->declArray(c+1920,"riscv_soc core d_cache SRAM_2 sram_7", false,-1, 127,0);
        tracep->declArray(c+1924,"riscv_soc core d_cache SRAM_2 sram_8", false,-1, 127,0);
        tracep->declArray(c+1928,"riscv_soc core d_cache SRAM_2 sram_9", false,-1, 127,0);
        tracep->declArray(c+1932,"riscv_soc core d_cache SRAM_2 sram_10", false,-1, 127,0);
        tracep->declArray(c+1936,"riscv_soc core d_cache SRAM_2 sram_11", false,-1, 127,0);
        tracep->declArray(c+1940,"riscv_soc core d_cache SRAM_2 sram_12", false,-1, 127,0);
        tracep->declArray(c+1944,"riscv_soc core d_cache SRAM_2 sram_13", false,-1, 127,0);
        tracep->declArray(c+1948,"riscv_soc core d_cache SRAM_2 sram_14", false,-1, 127,0);
        tracep->declArray(c+1952,"riscv_soc core d_cache SRAM_2 sram_15", false,-1, 127,0);
        tracep->declArray(c+1956,"riscv_soc core d_cache SRAM_2 sram_16", false,-1, 127,0);
        tracep->declArray(c+1960,"riscv_soc core d_cache SRAM_2 sram_17", false,-1, 127,0);
        tracep->declArray(c+1964,"riscv_soc core d_cache SRAM_2 sram_18", false,-1, 127,0);
        tracep->declArray(c+1968,"riscv_soc core d_cache SRAM_2 sram_19", false,-1, 127,0);
        tracep->declArray(c+1972,"riscv_soc core d_cache SRAM_2 sram_20", false,-1, 127,0);
        tracep->declArray(c+1976,"riscv_soc core d_cache SRAM_2 sram_21", false,-1, 127,0);
        tracep->declArray(c+1980,"riscv_soc core d_cache SRAM_2 sram_22", false,-1, 127,0);
        tracep->declArray(c+1984,"riscv_soc core d_cache SRAM_2 sram_23", false,-1, 127,0);
        tracep->declArray(c+1988,"riscv_soc core d_cache SRAM_2 sram_24", false,-1, 127,0);
        tracep->declArray(c+1992,"riscv_soc core d_cache SRAM_2 sram_25", false,-1, 127,0);
        tracep->declArray(c+1996,"riscv_soc core d_cache SRAM_2 sram_26", false,-1, 127,0);
        tracep->declArray(c+2000,"riscv_soc core d_cache SRAM_2 sram_27", false,-1, 127,0);
        tracep->declArray(c+2004,"riscv_soc core d_cache SRAM_2 sram_28", false,-1, 127,0);
        tracep->declArray(c+2008,"riscv_soc core d_cache SRAM_2 sram_29", false,-1, 127,0);
        tracep->declArray(c+2012,"riscv_soc core d_cache SRAM_2 sram_30", false,-1, 127,0);
        tracep->declArray(c+2016,"riscv_soc core d_cache SRAM_2 sram_31", false,-1, 127,0);
        tracep->declArray(c+2020,"riscv_soc core d_cache SRAM_2 sram_32", false,-1, 127,0);
        tracep->declArray(c+2024,"riscv_soc core d_cache SRAM_2 sram_33", false,-1, 127,0);
        tracep->declArray(c+2028,"riscv_soc core d_cache SRAM_2 sram_34", false,-1, 127,0);
        tracep->declArray(c+2032,"riscv_soc core d_cache SRAM_2 sram_35", false,-1, 127,0);
        tracep->declArray(c+2036,"riscv_soc core d_cache SRAM_2 sram_36", false,-1, 127,0);
        tracep->declArray(c+2040,"riscv_soc core d_cache SRAM_2 sram_37", false,-1, 127,0);
        tracep->declArray(c+2044,"riscv_soc core d_cache SRAM_2 sram_38", false,-1, 127,0);
        tracep->declArray(c+2048,"riscv_soc core d_cache SRAM_2 sram_39", false,-1, 127,0);
        tracep->declArray(c+2052,"riscv_soc core d_cache SRAM_2 sram_40", false,-1, 127,0);
        tracep->declArray(c+2056,"riscv_soc core d_cache SRAM_2 sram_41", false,-1, 127,0);
        tracep->declArray(c+2060,"riscv_soc core d_cache SRAM_2 sram_42", false,-1, 127,0);
        tracep->declArray(c+2064,"riscv_soc core d_cache SRAM_2 sram_43", false,-1, 127,0);
        tracep->declArray(c+2068,"riscv_soc core d_cache SRAM_2 sram_44", false,-1, 127,0);
        tracep->declArray(c+2072,"riscv_soc core d_cache SRAM_2 sram_45", false,-1, 127,0);
        tracep->declArray(c+2076,"riscv_soc core d_cache SRAM_2 sram_46", false,-1, 127,0);
        tracep->declArray(c+2080,"riscv_soc core d_cache SRAM_2 sram_47", false,-1, 127,0);
        tracep->declArray(c+2084,"riscv_soc core d_cache SRAM_2 sram_48", false,-1, 127,0);
        tracep->declArray(c+2088,"riscv_soc core d_cache SRAM_2 sram_49", false,-1, 127,0);
        tracep->declArray(c+2092,"riscv_soc core d_cache SRAM_2 sram_50", false,-1, 127,0);
        tracep->declArray(c+2096,"riscv_soc core d_cache SRAM_2 sram_51", false,-1, 127,0);
        tracep->declArray(c+2100,"riscv_soc core d_cache SRAM_2 sram_52", false,-1, 127,0);
        tracep->declArray(c+2104,"riscv_soc core d_cache SRAM_2 sram_53", false,-1, 127,0);
        tracep->declArray(c+2108,"riscv_soc core d_cache SRAM_2 sram_54", false,-1, 127,0);
        tracep->declArray(c+2112,"riscv_soc core d_cache SRAM_2 sram_55", false,-1, 127,0);
        tracep->declArray(c+2116,"riscv_soc core d_cache SRAM_2 sram_56", false,-1, 127,0);
        tracep->declArray(c+2120,"riscv_soc core d_cache SRAM_2 sram_57", false,-1, 127,0);
        tracep->declArray(c+2124,"riscv_soc core d_cache SRAM_2 sram_58", false,-1, 127,0);
        tracep->declArray(c+2128,"riscv_soc core d_cache SRAM_2 sram_59", false,-1, 127,0);
        tracep->declArray(c+2132,"riscv_soc core d_cache SRAM_2 sram_60", false,-1, 127,0);
        tracep->declArray(c+2136,"riscv_soc core d_cache SRAM_2 sram_61", false,-1, 127,0);
        tracep->declArray(c+2140,"riscv_soc core d_cache SRAM_2 sram_62", false,-1, 127,0);
        tracep->declArray(c+2144,"riscv_soc core d_cache SRAM_2 sram_63", false,-1, 127,0);
        tracep->declArray(c+1337,"riscv_soc core d_cache SRAM_2 bwen", false,-1, 127,0);
        tracep->declBit(c+1354,"riscv_soc core d_cache SRAM_2 wen", false,-1);
        tracep->declBit(c+3186,"riscv_soc core d_cache SRAM_3 clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core d_cache SRAM_3 reset", false,-1);
        tracep->declBus(c+1314,"riscv_soc core d_cache SRAM_3 io_addr", false,-1, 5,0);
        tracep->declBit(c+1309,"riscv_soc core d_cache SRAM_3 io_wen", false,-1);
        tracep->declArray(c+3189,"riscv_soc core d_cache SRAM_3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+1300,"riscv_soc core d_cache SRAM_3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+1315,"riscv_soc core d_cache SRAM_3 io_rdata", false,-1, 127,0);
        tracep->declArray(c+1315,"riscv_soc core d_cache SRAM_3 Q", false,-1, 127,0);
        tracep->declArray(c+2148,"riscv_soc core d_cache SRAM_3 sram_0", false,-1, 127,0);
        tracep->declArray(c+2152,"riscv_soc core d_cache SRAM_3 sram_1", false,-1, 127,0);
        tracep->declArray(c+2156,"riscv_soc core d_cache SRAM_3 sram_2", false,-1, 127,0);
        tracep->declArray(c+2160,"riscv_soc core d_cache SRAM_3 sram_3", false,-1, 127,0);
        tracep->declArray(c+2164,"riscv_soc core d_cache SRAM_3 sram_4", false,-1, 127,0);
        tracep->declArray(c+2168,"riscv_soc core d_cache SRAM_3 sram_5", false,-1, 127,0);
        tracep->declArray(c+2172,"riscv_soc core d_cache SRAM_3 sram_6", false,-1, 127,0);
        tracep->declArray(c+2176,"riscv_soc core d_cache SRAM_3 sram_7", false,-1, 127,0);
        tracep->declArray(c+2180,"riscv_soc core d_cache SRAM_3 sram_8", false,-1, 127,0);
        tracep->declArray(c+2184,"riscv_soc core d_cache SRAM_3 sram_9", false,-1, 127,0);
        tracep->declArray(c+2188,"riscv_soc core d_cache SRAM_3 sram_10", false,-1, 127,0);
        tracep->declArray(c+2192,"riscv_soc core d_cache SRAM_3 sram_11", false,-1, 127,0);
        tracep->declArray(c+2196,"riscv_soc core d_cache SRAM_3 sram_12", false,-1, 127,0);
        tracep->declArray(c+2200,"riscv_soc core d_cache SRAM_3 sram_13", false,-1, 127,0);
        tracep->declArray(c+2204,"riscv_soc core d_cache SRAM_3 sram_14", false,-1, 127,0);
        tracep->declArray(c+2208,"riscv_soc core d_cache SRAM_3 sram_15", false,-1, 127,0);
        tracep->declArray(c+2212,"riscv_soc core d_cache SRAM_3 sram_16", false,-1, 127,0);
        tracep->declArray(c+2216,"riscv_soc core d_cache SRAM_3 sram_17", false,-1, 127,0);
        tracep->declArray(c+2220,"riscv_soc core d_cache SRAM_3 sram_18", false,-1, 127,0);
        tracep->declArray(c+2224,"riscv_soc core d_cache SRAM_3 sram_19", false,-1, 127,0);
        tracep->declArray(c+2228,"riscv_soc core d_cache SRAM_3 sram_20", false,-1, 127,0);
        tracep->declArray(c+2232,"riscv_soc core d_cache SRAM_3 sram_21", false,-1, 127,0);
        tracep->declArray(c+2236,"riscv_soc core d_cache SRAM_3 sram_22", false,-1, 127,0);
        tracep->declArray(c+2240,"riscv_soc core d_cache SRAM_3 sram_23", false,-1, 127,0);
        tracep->declArray(c+2244,"riscv_soc core d_cache SRAM_3 sram_24", false,-1, 127,0);
        tracep->declArray(c+2248,"riscv_soc core d_cache SRAM_3 sram_25", false,-1, 127,0);
        tracep->declArray(c+2252,"riscv_soc core d_cache SRAM_3 sram_26", false,-1, 127,0);
        tracep->declArray(c+2256,"riscv_soc core d_cache SRAM_3 sram_27", false,-1, 127,0);
        tracep->declArray(c+2260,"riscv_soc core d_cache SRAM_3 sram_28", false,-1, 127,0);
        tracep->declArray(c+2264,"riscv_soc core d_cache SRAM_3 sram_29", false,-1, 127,0);
        tracep->declArray(c+2268,"riscv_soc core d_cache SRAM_3 sram_30", false,-1, 127,0);
        tracep->declArray(c+2272,"riscv_soc core d_cache SRAM_3 sram_31", false,-1, 127,0);
        tracep->declArray(c+2276,"riscv_soc core d_cache SRAM_3 sram_32", false,-1, 127,0);
        tracep->declArray(c+2280,"riscv_soc core d_cache SRAM_3 sram_33", false,-1, 127,0);
        tracep->declArray(c+2284,"riscv_soc core d_cache SRAM_3 sram_34", false,-1, 127,0);
        tracep->declArray(c+2288,"riscv_soc core d_cache SRAM_3 sram_35", false,-1, 127,0);
        tracep->declArray(c+2292,"riscv_soc core d_cache SRAM_3 sram_36", false,-1, 127,0);
        tracep->declArray(c+2296,"riscv_soc core d_cache SRAM_3 sram_37", false,-1, 127,0);
        tracep->declArray(c+2300,"riscv_soc core d_cache SRAM_3 sram_38", false,-1, 127,0);
        tracep->declArray(c+2304,"riscv_soc core d_cache SRAM_3 sram_39", false,-1, 127,0);
        tracep->declArray(c+2308,"riscv_soc core d_cache SRAM_3 sram_40", false,-1, 127,0);
        tracep->declArray(c+2312,"riscv_soc core d_cache SRAM_3 sram_41", false,-1, 127,0);
        tracep->declArray(c+2316,"riscv_soc core d_cache SRAM_3 sram_42", false,-1, 127,0);
        tracep->declArray(c+2320,"riscv_soc core d_cache SRAM_3 sram_43", false,-1, 127,0);
        tracep->declArray(c+2324,"riscv_soc core d_cache SRAM_3 sram_44", false,-1, 127,0);
        tracep->declArray(c+2328,"riscv_soc core d_cache SRAM_3 sram_45", false,-1, 127,0);
        tracep->declArray(c+2332,"riscv_soc core d_cache SRAM_3 sram_46", false,-1, 127,0);
        tracep->declArray(c+2336,"riscv_soc core d_cache SRAM_3 sram_47", false,-1, 127,0);
        tracep->declArray(c+2340,"riscv_soc core d_cache SRAM_3 sram_48", false,-1, 127,0);
        tracep->declArray(c+2344,"riscv_soc core d_cache SRAM_3 sram_49", false,-1, 127,0);
        tracep->declArray(c+2348,"riscv_soc core d_cache SRAM_3 sram_50", false,-1, 127,0);
        tracep->declArray(c+2352,"riscv_soc core d_cache SRAM_3 sram_51", false,-1, 127,0);
        tracep->declArray(c+2356,"riscv_soc core d_cache SRAM_3 sram_52", false,-1, 127,0);
        tracep->declArray(c+2360,"riscv_soc core d_cache SRAM_3 sram_53", false,-1, 127,0);
        tracep->declArray(c+2364,"riscv_soc core d_cache SRAM_3 sram_54", false,-1, 127,0);
        tracep->declArray(c+2368,"riscv_soc core d_cache SRAM_3 sram_55", false,-1, 127,0);
        tracep->declArray(c+2372,"riscv_soc core d_cache SRAM_3 sram_56", false,-1, 127,0);
        tracep->declArray(c+2376,"riscv_soc core d_cache SRAM_3 sram_57", false,-1, 127,0);
        tracep->declArray(c+2380,"riscv_soc core d_cache SRAM_3 sram_58", false,-1, 127,0);
        tracep->declArray(c+2384,"riscv_soc core d_cache SRAM_3 sram_59", false,-1, 127,0);
        tracep->declArray(c+2388,"riscv_soc core d_cache SRAM_3 sram_60", false,-1, 127,0);
        tracep->declArray(c+2392,"riscv_soc core d_cache SRAM_3 sram_61", false,-1, 127,0);
        tracep->declArray(c+2396,"riscv_soc core d_cache SRAM_3 sram_62", false,-1, 127,0);
        tracep->declArray(c+2400,"riscv_soc core d_cache SRAM_3 sram_63", false,-1, 127,0);
        tracep->declArray(c+3193,"riscv_soc core d_cache SRAM_3 bwen", false,-1, 127,0);
        tracep->declBit(c+1354,"riscv_soc core d_cache SRAM_3 wen", false,-1);
        tracep->declBit(c+3186,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+33,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+34,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+36,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+37,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+48,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+49,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+50,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+54,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+56,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+57,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+58,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+60,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+61,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+62,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+63,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+64,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+65,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+3188,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+2404,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+2405,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+2406,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+2407,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+2408,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+2409,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+2410,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+2411,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+2412,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+66,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+67,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+26,"riscv_soc core cross_bar_1 io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+68,"riscv_soc core cross_bar_1 io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+69,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+76,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+22,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+23,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+26,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+27,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+28,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+38,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+47,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+62,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+63,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+64,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+65,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+77,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+46,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+80,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+2413,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+2414,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+2415,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+3186,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+81,"riscv_soc core fetch io_br_info_valid", false,-1);
        tracep->declBit(c+82,"riscv_soc core fetch io_br_info_mispredict", false,-1);
        tracep->declQuad(c+83,"riscv_soc core fetch io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core fetch io_br_info_taken", false,-1);
        tracep->declQuad(c+86,"riscv_soc core fetch io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core fetch io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core fetch io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+66,"riscv_soc core fetch io_cpu_addr_ready", false,-1);
        tracep->declBit(c+67,"riscv_soc core fetch io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core fetch io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+26,"riscv_soc core fetch io_cpu_data_ready", false,-1);
        tracep->declBit(c+68,"riscv_soc core fetch io_cpu_data_valid", false,-1);
        tracep->declQuad(c+69,"riscv_soc core fetch io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core fetch io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+96,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+99,"riscv_soc core fetch io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+21,"riscv_soc core fetch io_out_flush", false,-1);
        tracep->declBit(c+3186,"riscv_soc core fetch ibuf_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core fetch ibuf_reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core fetch ibuf_io_flush", false,-1);
        tracep->declBit(c+26,"riscv_soc core fetch ibuf_io_cache_buf_ready", false,-1);
        tracep->declBit(c+2416,"riscv_soc core fetch ibuf_io_cache_buf_valid", false,-1);
        tracep->declQuad(c+71,"riscv_soc core fetch ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+2417,"riscv_soc core fetch ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+2418,"riscv_soc core fetch ibuf_io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+94,"riscv_soc core fetch ibuf_io_put_pc_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core fetch ibuf_io_put_pc_valid", false,-1);
        tracep->declBus(c+96,"riscv_soc core fetch ibuf_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"riscv_soc core fetch ibuf_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+99,"riscv_soc core fetch ibuf_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+3186,"riscv_soc core fetch br_predictor_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core fetch br_predictor_reset", false,-1);
        tracep->declBit(c+81,"riscv_soc core fetch br_predictor_io_br_info_valid", false,-1);
        tracep->declBit(c+82,"riscv_soc core fetch br_predictor_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+83,"riscv_soc core fetch br_predictor_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core fetch br_predictor_io_br_info_taken", false,-1);
        tracep->declQuad(c+86,"riscv_soc core fetch br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+24,"riscv_soc core fetch br_predictor_io_pc", false,-1, 63,0);
        tracep->declQuad(c+2419,"riscv_soc core fetch br_predictor_io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+2421,"riscv_soc core fetch br_predictor_io_pre_valid", false,-1);
        tracep->declQuad(c+24,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declBit(c+2422,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+2423,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+67,"riscv_soc core fetch reg_bus_valid", false,-1);
        tracep->declBus(c+2425,"riscv_soc core fetch pre_info_head", false,-1, 1,0);
        tracep->declBus(c+2426,"riscv_soc core fetch pre_info_tail", false,-1, 1,0);
        tracep->declQuad(c+2427,"riscv_soc core fetch pre_info_fifo_0", false,-1, 63,0);
        tracep->declQuad(c+2429,"riscv_soc core fetch pre_info_fifo_1", false,-1, 63,0);
        tracep->declQuad(c+2431,"riscv_soc core fetch pre_info_fifo_2", false,-1, 63,0);
        tracep->declQuad(c+2433,"riscv_soc core fetch pre_info_fifo_3", false,-1, 63,0);
        tracep->declBit(c+2435,"riscv_soc core fetch pre_enq", false,-1);
        tracep->declBus(c+2436,"riscv_soc core fetch is_pre_head", false,-1, 1,0);
        tracep->declBus(c+2437,"riscv_soc core fetch is_pre_tail", false,-1, 1,0);
        tracep->declBit(c+2438,"riscv_soc core fetch is_pre_fifo_0", false,-1);
        tracep->declBit(c+2439,"riscv_soc core fetch is_pre_fifo_1", false,-1);
        tracep->declBit(c+2440,"riscv_soc core fetch is_pre_fifo_2", false,-1);
        tracep->declBit(c+2441,"riscv_soc core fetch is_pre_fifo_3", false,-1);
        tracep->declBit(c+3186,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+26,"riscv_soc core fetch ibuf io_cache_buf_ready", false,-1);
        tracep->declBit(c+2416,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+71,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+2417,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+2418,"riscv_soc core fetch ibuf io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+94,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+96,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+99,"riscv_soc core fetch ibuf io_put_pc_bits_is_pre", false,-1);
        tracep->declQuad(c+2442,"riscv_soc core fetch ibuf ibuf_pc_0", false,-1, 63,0);
        tracep->declQuad(c+2444,"riscv_soc core fetch ibuf ibuf_pc_1", false,-1, 63,0);
        tracep->declQuad(c+2446,"riscv_soc core fetch ibuf ibuf_pc_2", false,-1, 63,0);
        tracep->declQuad(c+2448,"riscv_soc core fetch ibuf ibuf_pc_3", false,-1, 63,0);
        tracep->declBus(c+2450,"riscv_soc core fetch ibuf ibuf_inst_0", false,-1, 31,0);
        tracep->declBus(c+2451,"riscv_soc core fetch ibuf ibuf_inst_1", false,-1, 31,0);
        tracep->declBus(c+2452,"riscv_soc core fetch ibuf ibuf_inst_2", false,-1, 31,0);
        tracep->declBus(c+2453,"riscv_soc core fetch ibuf ibuf_inst_3", false,-1, 31,0);
        tracep->declBit(c+2454,"riscv_soc core fetch ibuf ibuf_is_pre_0", false,-1);
        tracep->declBit(c+2455,"riscv_soc core fetch ibuf ibuf_is_pre_1", false,-1);
        tracep->declBit(c+2456,"riscv_soc core fetch ibuf ibuf_is_pre_2", false,-1);
        tracep->declBit(c+2457,"riscv_soc core fetch ibuf ibuf_is_pre_3", false,-1);
        tracep->declBit(c+2458,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+2459,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+2460,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+2461,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+2462,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+2463,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBus(c+2464,"riscv_soc core fetch ibuf reg_ibuf_size", false,-1, 2,0);
        tracep->declBit(c+2465,"riscv_soc core fetch ibuf enq_size", false,-1);
        tracep->declBit(c+2466,"riscv_soc core fetch ibuf can_deq", false,-1);
        tracep->declBus(c+2467,"riscv_soc core fetch ibuf result_size", false,-1, 2,0);
        tracep->declBit(c+3186,"riscv_soc core fetch br_predictor clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core fetch br_predictor reset", false,-1);
        tracep->declBit(c+81,"riscv_soc core fetch br_predictor io_br_info_valid", false,-1);
        tracep->declBit(c+82,"riscv_soc core fetch br_predictor io_br_info_mispredict", false,-1);
        tracep->declQuad(c+83,"riscv_soc core fetch br_predictor io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core fetch br_predictor io_br_info_taken", false,-1);
        tracep->declQuad(c+86,"riscv_soc core fetch br_predictor io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+24,"riscv_soc core fetch br_predictor io_pc", false,-1, 63,0);
        tracep->declQuad(c+2419,"riscv_soc core fetch br_predictor io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+2421,"riscv_soc core fetch br_predictor io_pre_valid", false,-1);
        tracep->declArray(c+2468,"riscv_soc core fetch br_predictor BTB_0", false,-1, 127,0);
        tracep->declArray(c+2472,"riscv_soc core fetch br_predictor BTB_1", false,-1, 127,0);
        tracep->declArray(c+2476,"riscv_soc core fetch br_predictor BTB_2", false,-1, 127,0);
        tracep->declArray(c+2480,"riscv_soc core fetch br_predictor BTB_3", false,-1, 127,0);
        tracep->declArray(c+2484,"riscv_soc core fetch br_predictor BTB_4", false,-1, 127,0);
        tracep->declArray(c+2488,"riscv_soc core fetch br_predictor BTB_5", false,-1, 127,0);
        tracep->declArray(c+2492,"riscv_soc core fetch br_predictor BTB_6", false,-1, 127,0);
        tracep->declArray(c+2496,"riscv_soc core fetch br_predictor BTB_7", false,-1, 127,0);
        tracep->declArray(c+2500,"riscv_soc core fetch br_predictor BTB_8", false,-1, 127,0);
        tracep->declArray(c+2504,"riscv_soc core fetch br_predictor BTB_9", false,-1, 127,0);
        tracep->declArray(c+2508,"riscv_soc core fetch br_predictor BTB_10", false,-1, 127,0);
        tracep->declArray(c+2512,"riscv_soc core fetch br_predictor BTB_11", false,-1, 127,0);
        tracep->declArray(c+2516,"riscv_soc core fetch br_predictor BTB_12", false,-1, 127,0);
        tracep->declArray(c+2520,"riscv_soc core fetch br_predictor BTB_13", false,-1, 127,0);
        tracep->declArray(c+2524,"riscv_soc core fetch br_predictor BTB_14", false,-1, 127,0);
        tracep->declArray(c+2528,"riscv_soc core fetch br_predictor BTB_15", false,-1, 127,0);
        tracep->declArray(c+2532,"riscv_soc core fetch br_predictor BTB_16", false,-1, 127,0);
        tracep->declArray(c+2536,"riscv_soc core fetch br_predictor BTB_17", false,-1, 127,0);
        tracep->declArray(c+2540,"riscv_soc core fetch br_predictor BTB_18", false,-1, 127,0);
        tracep->declArray(c+2544,"riscv_soc core fetch br_predictor BTB_19", false,-1, 127,0);
        tracep->declArray(c+2548,"riscv_soc core fetch br_predictor BTB_20", false,-1, 127,0);
        tracep->declArray(c+2552,"riscv_soc core fetch br_predictor BTB_21", false,-1, 127,0);
        tracep->declArray(c+2556,"riscv_soc core fetch br_predictor BTB_22", false,-1, 127,0);
        tracep->declArray(c+2560,"riscv_soc core fetch br_predictor BTB_23", false,-1, 127,0);
        tracep->declArray(c+2564,"riscv_soc core fetch br_predictor BTB_24", false,-1, 127,0);
        tracep->declArray(c+2568,"riscv_soc core fetch br_predictor BTB_25", false,-1, 127,0);
        tracep->declArray(c+2572,"riscv_soc core fetch br_predictor BTB_26", false,-1, 127,0);
        tracep->declArray(c+2576,"riscv_soc core fetch br_predictor BTB_27", false,-1, 127,0);
        tracep->declArray(c+2580,"riscv_soc core fetch br_predictor BTB_28", false,-1, 127,0);
        tracep->declArray(c+2584,"riscv_soc core fetch br_predictor BTB_29", false,-1, 127,0);
        tracep->declArray(c+2588,"riscv_soc core fetch br_predictor BTB_30", false,-1, 127,0);
        tracep->declArray(c+2592,"riscv_soc core fetch br_predictor BTB_31", false,-1, 127,0);
        tracep->declArray(c+2596,"riscv_soc core fetch br_predictor BTB_32", false,-1, 127,0);
        tracep->declArray(c+2600,"riscv_soc core fetch br_predictor BTB_33", false,-1, 127,0);
        tracep->declArray(c+2604,"riscv_soc core fetch br_predictor BTB_34", false,-1, 127,0);
        tracep->declArray(c+2608,"riscv_soc core fetch br_predictor BTB_35", false,-1, 127,0);
        tracep->declArray(c+2612,"riscv_soc core fetch br_predictor BTB_36", false,-1, 127,0);
        tracep->declArray(c+2616,"riscv_soc core fetch br_predictor BTB_37", false,-1, 127,0);
        tracep->declArray(c+2620,"riscv_soc core fetch br_predictor BTB_38", false,-1, 127,0);
        tracep->declArray(c+2624,"riscv_soc core fetch br_predictor BTB_39", false,-1, 127,0);
        tracep->declArray(c+2628,"riscv_soc core fetch br_predictor BTB_40", false,-1, 127,0);
        tracep->declArray(c+2632,"riscv_soc core fetch br_predictor BTB_41", false,-1, 127,0);
        tracep->declArray(c+2636,"riscv_soc core fetch br_predictor BTB_42", false,-1, 127,0);
        tracep->declArray(c+2640,"riscv_soc core fetch br_predictor BTB_43", false,-1, 127,0);
        tracep->declArray(c+2644,"riscv_soc core fetch br_predictor BTB_44", false,-1, 127,0);
        tracep->declArray(c+2648,"riscv_soc core fetch br_predictor BTB_45", false,-1, 127,0);
        tracep->declArray(c+2652,"riscv_soc core fetch br_predictor BTB_46", false,-1, 127,0);
        tracep->declArray(c+2656,"riscv_soc core fetch br_predictor BTB_47", false,-1, 127,0);
        tracep->declArray(c+2660,"riscv_soc core fetch br_predictor BTB_48", false,-1, 127,0);
        tracep->declArray(c+2664,"riscv_soc core fetch br_predictor BTB_49", false,-1, 127,0);
        tracep->declArray(c+2668,"riscv_soc core fetch br_predictor BTB_50", false,-1, 127,0);
        tracep->declArray(c+2672,"riscv_soc core fetch br_predictor BTB_51", false,-1, 127,0);
        tracep->declArray(c+2676,"riscv_soc core fetch br_predictor BTB_52", false,-1, 127,0);
        tracep->declArray(c+2680,"riscv_soc core fetch br_predictor BTB_53", false,-1, 127,0);
        tracep->declArray(c+2684,"riscv_soc core fetch br_predictor BTB_54", false,-1, 127,0);
        tracep->declArray(c+2688,"riscv_soc core fetch br_predictor BTB_55", false,-1, 127,0);
        tracep->declArray(c+2692,"riscv_soc core fetch br_predictor BTB_56", false,-1, 127,0);
        tracep->declArray(c+2696,"riscv_soc core fetch br_predictor BTB_57", false,-1, 127,0);
        tracep->declArray(c+2700,"riscv_soc core fetch br_predictor BTB_58", false,-1, 127,0);
        tracep->declArray(c+2704,"riscv_soc core fetch br_predictor BTB_59", false,-1, 127,0);
        tracep->declArray(c+2708,"riscv_soc core fetch br_predictor BTB_60", false,-1, 127,0);
        tracep->declArray(c+2712,"riscv_soc core fetch br_predictor BTB_61", false,-1, 127,0);
        tracep->declArray(c+2716,"riscv_soc core fetch br_predictor BTB_62", false,-1, 127,0);
        tracep->declArray(c+2720,"riscv_soc core fetch br_predictor BTB_63", false,-1, 127,0);
        tracep->declQuad(c+2724,"riscv_soc core fetch br_predictor RAS_0", false,-1, 63,0);
        tracep->declQuad(c+2726,"riscv_soc core fetch br_predictor RAS_1", false,-1, 63,0);
        tracep->declQuad(c+2728,"riscv_soc core fetch br_predictor RAS_2", false,-1, 63,0);
        tracep->declQuad(c+2730,"riscv_soc core fetch br_predictor RAS_3", false,-1, 63,0);
        tracep->declQuad(c+2732,"riscv_soc core fetch br_predictor RAS_4", false,-1, 63,0);
        tracep->declQuad(c+2734,"riscv_soc core fetch br_predictor RAS_5", false,-1, 63,0);
        tracep->declBus(c+2736,"riscv_soc core fetch br_predictor PHT_0", false,-1, 1,0);
        tracep->declBus(c+2737,"riscv_soc core fetch br_predictor PHT_1", false,-1, 1,0);
        tracep->declBus(c+2738,"riscv_soc core fetch br_predictor PHT_2", false,-1, 1,0);
        tracep->declBus(c+2739,"riscv_soc core fetch br_predictor PHT_3", false,-1, 1,0);
        tracep->declBus(c+2740,"riscv_soc core fetch br_predictor PHT_4", false,-1, 1,0);
        tracep->declBus(c+2741,"riscv_soc core fetch br_predictor PHT_5", false,-1, 1,0);
        tracep->declBus(c+2742,"riscv_soc core fetch br_predictor PHT_6", false,-1, 1,0);
        tracep->declBus(c+2743,"riscv_soc core fetch br_predictor PHT_7", false,-1, 1,0);
        tracep->declBus(c+2744,"riscv_soc core fetch br_predictor PHT_8", false,-1, 1,0);
        tracep->declBus(c+2745,"riscv_soc core fetch br_predictor PHT_9", false,-1, 1,0);
        tracep->declBus(c+2746,"riscv_soc core fetch br_predictor PHT_10", false,-1, 1,0);
        tracep->declBus(c+2747,"riscv_soc core fetch br_predictor PHT_11", false,-1, 1,0);
        tracep->declBus(c+2748,"riscv_soc core fetch br_predictor PHT_12", false,-1, 1,0);
        tracep->declBus(c+2749,"riscv_soc core fetch br_predictor PHT_13", false,-1, 1,0);
        tracep->declBus(c+2750,"riscv_soc core fetch br_predictor PHT_14", false,-1, 1,0);
        tracep->declBus(c+2751,"riscv_soc core fetch br_predictor PHT_15", false,-1, 1,0);
        tracep->declBus(c+2752,"riscv_soc core fetch br_predictor PHT_16", false,-1, 1,0);
        tracep->declBus(c+2753,"riscv_soc core fetch br_predictor PHT_17", false,-1, 1,0);
        tracep->declBus(c+2754,"riscv_soc core fetch br_predictor PHT_18", false,-1, 1,0);
        tracep->declBus(c+2755,"riscv_soc core fetch br_predictor PHT_19", false,-1, 1,0);
        tracep->declBus(c+2756,"riscv_soc core fetch br_predictor PHT_20", false,-1, 1,0);
        tracep->declBus(c+2757,"riscv_soc core fetch br_predictor PHT_21", false,-1, 1,0);
        tracep->declBus(c+2758,"riscv_soc core fetch br_predictor PHT_22", false,-1, 1,0);
        tracep->declBus(c+2759,"riscv_soc core fetch br_predictor PHT_23", false,-1, 1,0);
        tracep->declBus(c+2760,"riscv_soc core fetch br_predictor PHT_24", false,-1, 1,0);
        tracep->declBus(c+2761,"riscv_soc core fetch br_predictor PHT_25", false,-1, 1,0);
        tracep->declBus(c+2762,"riscv_soc core fetch br_predictor PHT_26", false,-1, 1,0);
        tracep->declBus(c+2763,"riscv_soc core fetch br_predictor PHT_27", false,-1, 1,0);
        tracep->declBus(c+2764,"riscv_soc core fetch br_predictor PHT_28", false,-1, 1,0);
        tracep->declBus(c+2765,"riscv_soc core fetch br_predictor PHT_29", false,-1, 1,0);
        tracep->declBus(c+2766,"riscv_soc core fetch br_predictor PHT_30", false,-1, 1,0);
        tracep->declBus(c+2767,"riscv_soc core fetch br_predictor PHT_31", false,-1, 1,0);
        tracep->declBus(c+2768,"riscv_soc core fetch br_predictor PHT_32", false,-1, 1,0);
        tracep->declBus(c+2769,"riscv_soc core fetch br_predictor PHT_33", false,-1, 1,0);
        tracep->declBus(c+2770,"riscv_soc core fetch br_predictor PHT_34", false,-1, 1,0);
        tracep->declBus(c+2771,"riscv_soc core fetch br_predictor PHT_35", false,-1, 1,0);
        tracep->declBus(c+2772,"riscv_soc core fetch br_predictor PHT_36", false,-1, 1,0);
        tracep->declBus(c+2773,"riscv_soc core fetch br_predictor PHT_37", false,-1, 1,0);
        tracep->declBus(c+2774,"riscv_soc core fetch br_predictor PHT_38", false,-1, 1,0);
        tracep->declBus(c+2775,"riscv_soc core fetch br_predictor PHT_39", false,-1, 1,0);
        tracep->declBus(c+2776,"riscv_soc core fetch br_predictor PHT_40", false,-1, 1,0);
        tracep->declBus(c+2777,"riscv_soc core fetch br_predictor PHT_41", false,-1, 1,0);
        tracep->declBus(c+2778,"riscv_soc core fetch br_predictor PHT_42", false,-1, 1,0);
        tracep->declBus(c+2779,"riscv_soc core fetch br_predictor PHT_43", false,-1, 1,0);
        tracep->declBus(c+2780,"riscv_soc core fetch br_predictor PHT_44", false,-1, 1,0);
        tracep->declBus(c+2781,"riscv_soc core fetch br_predictor PHT_45", false,-1, 1,0);
        tracep->declBus(c+2782,"riscv_soc core fetch br_predictor PHT_46", false,-1, 1,0);
        tracep->declBus(c+2783,"riscv_soc core fetch br_predictor PHT_47", false,-1, 1,0);
        tracep->declBus(c+2784,"riscv_soc core fetch br_predictor PHT_48", false,-1, 1,0);
        tracep->declBus(c+2785,"riscv_soc core fetch br_predictor PHT_49", false,-1, 1,0);
        tracep->declBus(c+2786,"riscv_soc core fetch br_predictor PHT_50", false,-1, 1,0);
        tracep->declBus(c+2787,"riscv_soc core fetch br_predictor PHT_51", false,-1, 1,0);
        tracep->declBus(c+2788,"riscv_soc core fetch br_predictor PHT_52", false,-1, 1,0);
        tracep->declBus(c+2789,"riscv_soc core fetch br_predictor PHT_53", false,-1, 1,0);
        tracep->declBus(c+2790,"riscv_soc core fetch br_predictor PHT_54", false,-1, 1,0);
        tracep->declBus(c+2791,"riscv_soc core fetch br_predictor PHT_55", false,-1, 1,0);
        tracep->declBus(c+2792,"riscv_soc core fetch br_predictor PHT_56", false,-1, 1,0);
        tracep->declBus(c+2793,"riscv_soc core fetch br_predictor PHT_57", false,-1, 1,0);
        tracep->declBus(c+2794,"riscv_soc core fetch br_predictor PHT_58", false,-1, 1,0);
        tracep->declBus(c+2795,"riscv_soc core fetch br_predictor PHT_59", false,-1, 1,0);
        tracep->declBus(c+2796,"riscv_soc core fetch br_predictor PHT_60", false,-1, 1,0);
        tracep->declBus(c+2797,"riscv_soc core fetch br_predictor PHT_61", false,-1, 1,0);
        tracep->declBus(c+2798,"riscv_soc core fetch br_predictor PHT_62", false,-1, 1,0);
        tracep->declBus(c+2799,"riscv_soc core fetch br_predictor PHT_63", false,-1, 1,0);
        tracep->declBus(c+2800,"riscv_soc core fetch br_predictor reg_head", false,-1, 2,0);
        tracep->declBus(c+2801,"riscv_soc core fetch br_predictor update_index", false,-1, 5,0);
        tracep->declArray(c+2802,"riscv_soc core fetch br_predictor update_btb_data", false,-1, 122,0);
        tracep->declBus(c+2806,"riscv_soc core fetch br_predictor index", false,-1, 5,0);
        tracep->declQuad(c+2807,"riscv_soc core fetch br_predictor tag", false,-1, 55,0);
        tracep->declBit(c+2809,"riscv_soc core fetch br_predictor pht_taken", false,-1);
        tracep->declBit(c+2810,"riscv_soc core fetch br_predictor btb_valid", false,-1);
        tracep->declQuad(c+2811,"riscv_soc core fetch br_predictor btb_tag", false,-1, 55,0);
        tracep->declQuad(c+2813,"riscv_soc core fetch br_predictor btb_target_next_pc", false,-1, 63,0);
        tracep->declBus(c+2815,"riscv_soc core fetch br_predictor btb_br_type", false,-1, 1,0);
        tracep->declBit(c+2816,"riscv_soc core fetch br_predictor pre_valid", false,-1);
        tracep->declBit(c+3186,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+94,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+100,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+101,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+102,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+103,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+106,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+110,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+112,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+113,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+114,"riscv_soc core execute io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+115,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+116,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+118,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+119,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+120,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+129,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+132,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+133,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+134,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+136,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+137,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+138,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+139,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+140,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core execute io_commit", false,-1);
        tracep->declQuad(c+91,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+32,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+81,"riscv_soc core execute io_br_info_valid", false,-1);
        tracep->declBit(c+82,"riscv_soc core execute io_br_info_mispredict", false,-1);
        tracep->declQuad(c+83,"riscv_soc core execute io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core execute io_br_info_taken", false,-1);
        tracep->declQuad(c+86,"riscv_soc core execute io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core execute io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core execute io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBit(c+76,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+2817,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBit(c+114,"riscv_soc core execute alu_exu_io_is_pre", false,-1);
        tracep->declBit(c+2818,"riscv_soc core execute alu_exu_io_br_info_valid", false,-1);
        tracep->declBit(c+2819,"riscv_soc core execute alu_exu_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+2820,"riscv_soc core execute alu_exu_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+2822,"riscv_soc core execute alu_exu_io_br_info_taken", false,-1);
        tracep->declQuad(c+2823,"riscv_soc core execute alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core execute alu_exu_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core execute alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+101,"riscv_soc core execute alu_exu_io_opType", false,-1, 2,0);
        tracep->declBus(c+102,"riscv_soc core execute alu_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2825,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+2827,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+110,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+2829,"riscv_soc core execute alu_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+2831,"riscv_soc core execute alu_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+2832,"riscv_soc core execute alu_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+3186,"riscv_soc core execute mem_exu_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute mem_exu_reset", false,-1);
        tracep->declBit(c+2834,"riscv_soc core execute mem_exu_io_valid", false,-1);
        tracep->declBus(c+102,"riscv_soc core execute mem_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2835,"riscv_soc core execute mem_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2837,"riscv_soc core execute mem_exu_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core execute mem_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+2839,"riscv_soc core execute mem_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2841,"riscv_soc core execute mem_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+2842,"riscv_soc core execute mem_exu_io_ready", false,-1);
        tracep->declBit(c+73,"riscv_soc core execute mem_exu_io_bus_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core execute mem_exu_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv_soc core execute mem_exu_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core execute mem_exu_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core execute mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core execute mem_exu_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+76,"riscv_soc core execute mem_exu_io_bus_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+2843,"riscv_soc core execute mu_exu_io_valid", false,-1);
        tracep->declBus(c+102,"riscv_soc core execute mu_exu_io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+2844,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2846,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+2848,"riscv_soc core execute mu_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2850,"riscv_soc core execute mu_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+2851,"riscv_soc core execute mu_exu_io_ready", false,-1);
        tracep->declBit(c+2852,"riscv_soc core execute system_exu_io_valid", false,-1);
        tracep->declBus(c+102,"riscv_soc core execute system_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2853,"riscv_soc core execute system_exu_io_csr_data", false,-1, 63,0);
        tracep->declBus(c+115,"riscv_soc core execute system_exu_io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+109,"riscv_soc core execute system_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+2835,"riscv_soc core execute system_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core execute system_exu_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core execute system_exu_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+2853,"riscv_soc core execute system_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+2855,"riscv_soc core execute system_exu_io_csr_is_w", false,-1);
        tracep->declQuad(c+2856,"riscv_soc core execute system_exu_io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+2858,"riscv_soc core execute system_exu_io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+2859,"riscv_soc core execute system_exu_io_is_except", false,-1);
        tracep->declBus(c+2860,"riscv_soc core execute system_exu_io_exception", false,-1, 5,0);
        tracep->declBit(c+2861,"riscv_soc core execute system_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+124,"riscv_soc core execute system_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+2862,"riscv_soc core execute in_data_valid", false,-1);
        tracep->declBit(c+2863,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+2864,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBit(c+2865,"riscv_soc core execute reg_alu_valid", false,-1);
        tracep->declBit(c+2866,"riscv_soc core execute reg_mem_valid", false,-1);
        tracep->declBit(c+2867,"riscv_soc core execute reg_mu_valid", false,-1);
        tracep->declBit(c+2868,"riscv_soc core execute reg_system_valid", false,-1);
        tracep->declBus(c+2869,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+2870,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+2871,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBus(c+129,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+81,"riscv_soc core execute reg_br_valid", false,-1);
        tracep->declBit(c+82,"riscv_soc core execute reg_br_mispredict", false,-1);
        tracep->declQuad(c+83,"riscv_soc core execute reg_br_pc", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core execute reg_taken", false,-1);
        tracep->declQuad(c+86,"riscv_soc core execute reg_br_next_pc", false,-1, 63,0);
        tracep->declQuad(c+134,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+133,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBit(c+2873,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+2874,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+139,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+2875,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+2876,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+140,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declBit(c+2877,"riscv_soc core execute time_irq", false,-1);
        tracep->declBit(c+2878,"riscv_soc core execute soft_irq", false,-1);
        tracep->declBit(c+2879,"riscv_soc core execute irq", false,-1);
        tracep->declQuad(c+91,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+2880,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+2881,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+2882,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBit(c+2817,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBit(c+114,"riscv_soc core execute alu_exu io_is_pre", false,-1);
        tracep->declBit(c+2818,"riscv_soc core execute alu_exu io_br_info_valid", false,-1);
        tracep->declBit(c+2819,"riscv_soc core execute alu_exu io_br_info_mispredict", false,-1);
        tracep->declQuad(c+2820,"riscv_soc core execute alu_exu io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+2822,"riscv_soc core execute alu_exu io_br_info_taken", false,-1);
        tracep->declQuad(c+2823,"riscv_soc core execute alu_exu io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core execute alu_exu io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core execute alu_exu io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+101,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+102,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2825,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+2827,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+110,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+2829,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+2831,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+2832,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declBit(c+2883,"riscv_soc core execute alu_exu is_32", false,-1);
        tracep->declQuad(c+2884,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+2886,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+2888,"riscv_soc core execute alu_exu op_imm", false,-1, 63,0);
        tracep->declBit(c+2890,"riscv_soc core execute alu_exu rs2_is_imm", false,-1);
        tracep->declQuad(c+2891,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+2893,"riscv_soc core execute alu_exu rs1_is_pc", false,-1);
        tracep->declBit(c+2894,"riscv_soc core execute alu_exu is_sra", false,-1);
        tracep->declQuad(c+2895,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2897,"riscv_soc core execute alu_exu temp_rs2_data", false,-1, 63,0);
        tracep->declArray(c+2899,"riscv_soc core execute alu_exu add_sub_result", false,-1, 64,0);
        tracep->declBit(c+2902,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+2903,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+2904,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+2905,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declQuad(c+2909,"riscv_soc core execute alu_exu srl_temp", false,-1, 63,0);
        tracep->declQuad(c+2911,"riscv_soc core execute alu_exu sra_temp", false,-1, 63,0);
        tracep->declQuad(c+2913,"riscv_soc core execute alu_exu sr_temp", false,-1, 63,0);
        tracep->declBus(c+2915,"riscv_soc core execute alu_exu func", false,-1, 2,0);
        tracep->declQuad(c+2916,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declBit(c+2918,"riscv_soc core execute alu_exu is_pre", false,-1);
        tracep->declBit(c+2919,"riscv_soc core execute alu_exu is_br", false,-1);
        tracep->declBit(c+2920,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declQuad(c+2921,"riscv_soc core execute alu_exu temp_1", false,-1, 63,0);
        tracep->declArray(c+2923,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declQuad(c+2926,"riscv_soc core execute alu_exu op_pc_4", false,-1, 63,0);
        tracep->declArray(c+2928,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declQuad(c+2931,"riscv_soc core execute alu_exu dst_data", false,-1, 63,0);
        tracep->declQuad(c+2933,"riscv_soc core execute alu_exu next_pc", false,-1, 63,0);
        tracep->declBit(c+2935,"riscv_soc core execute alu_exu valid_next_pc", false,-1);
        tracep->declBit(c+2936,"riscv_soc core execute alu_exu br_valid", false,-1);
        tracep->declBit(c+2937,"riscv_soc core execute alu_exu flush", false,-1);
        tracep->declBit(c+3186,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+2834,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+102,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2835,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2837,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+2839,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2841,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+2842,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+73,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+45,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+46,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+76,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declQuad(c+2938,"riscv_soc core execute mem_exu imm", false,-1, 63,0);
        tracep->declBit(c+2842,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+2940,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+2942,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+2944,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+2945,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+2946,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+2839,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+2841,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBus(c+2947,"riscv_soc core execute mem_exu reg_exuType", false,-1, 6,0);
        tracep->declQuad(c+2948,"riscv_soc core execute mem_exu mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+2950,"riscv_soc core execute mem_exu mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+2952,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+2954,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declQuad(c+2955,"riscv_soc core execute mem_exu mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+2957,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+2958,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+2962,"riscv_soc core execute mem_exu chose_chancel", false,-1);
        tracep->declBit(c+3186,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+2843,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+102,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+2844,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2846,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+2848,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2850,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+2851,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+2963,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declQuad(c+2844,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2846,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+102,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2964,"riscv_soc core execute mu_exu div_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2966,"riscv_soc core execute mu_exu div_io_dest_is_w", false,-1);
        tracep->declBit(c+2967,"riscv_soc core execute mu_exu div_io_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+2968,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declQuad(c+2844,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2846,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+102,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2969,"riscv_soc core execute mu_exu mul_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2971,"riscv_soc core execute mu_exu mul_io_dest_is_w", false,-1);
        tracep->declBit(c+2972,"riscv_soc core execute mu_exu mul_io_ready", false,-1);
        tracep->declBit(c+3186,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+2963,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+2844,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2846,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+102,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2964,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2966,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+2967,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declBit(c+2883,"riscv_soc core execute mu_exu div is_32", false,-1);
        tracep->declBit(c+2973,"riscv_soc core execute mu_exu div is_signed", false,-1);
        tracep->declArray(c+2974,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+2977,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+2980,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+2983,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+2986,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+2989,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+2992,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+2995,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+2998,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+2999,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+3000,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declArray(c+3001,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+3006,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+3007,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+3008,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+3009,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declBit(c+2966,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+2967,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declBit(c+3010,"riscv_soc core execute mu_exu div reg_is_32", false,-1);
        tracep->declBit(c+3011,"riscv_soc core execute mu_exu div reg_is_rem", false,-1);
        tracep->declQuad(c+3012,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+3014,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+3186,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+2968,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+2844,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2846,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+102,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2969,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2971,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+2972,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+3016,"riscv_soc core execute mu_exu mul is_32", false,-1);
        tracep->declBit(c+3017,"riscv_soc core execute mu_exu mul is_rs1_signed", false,-1);
        tracep->declBit(c+2883,"riscv_soc core execute mu_exu mul is_rs2_signed", false,-1);
        tracep->declArray(c+3018,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+3023,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+3026,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+2972,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+3029,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+3030,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+3033,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+3038,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+3043,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+2971,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declArray(c+3044,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBus(c+3049,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declBit(c+3050,"riscv_soc core execute mu_exu mul reg_not_h", false,-1);
        tracep->declBit(c+3051,"riscv_soc core execute mu_exu mul reg_is_32", false,-1);
        tracep->declBit(c+2852,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+102,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2853,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+115,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+109,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+2835,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+2853,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+2855,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+2856,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+2858,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+2859,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+2860,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+2861,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+124,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+3052,"riscv_soc core execute system_exu imm", false,-1, 63,0);
        tracep->declBit(c+3054,"riscv_soc core execute system_exu is_imm", false,-1);
        tracep->declQuad(c+3055,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+3057,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+3059,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declQuad(c+3061,"riscv_soc core execute system_exu temp_csr_result_data", false,-1, 63,0);
        tracep->declBit(c+3063,"riscv_soc core execute system_exu is_mret", false,-1);
        tracep->declBit(c+3064,"riscv_soc core execute system_exu is_sret", false,-1);
        tracep->declBit(c+3065,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+3066,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+3067,"riscv_soc core execute system_exu is_except", false,-1);
        tracep->declBus(c+3068,"riscv_soc core execute system_exu exception", false,-1, 3,0);
        tracep->declBit(c+3069,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declQuad(c+3070,"riscv_soc core execute system_exu result_status", false,-1, 63,0);
        tracep->declBit(c+3186,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+94,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBit(c+95,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+96,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+99,"riscv_soc core decode io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+145,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+148,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+151,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+152,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+94,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+100,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+101,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+102,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+103,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+106,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+110,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+112,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+113,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+114,"riscv_soc core decode io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+115,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+116,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+100,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+101,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+102,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+103,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+106,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+107,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+109,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+110,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+112,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+113,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+115,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+116,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+114,"riscv_soc core decode reg_is_pre", false,-1);
        tracep->declBus(c+148,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+145,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+151,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBus(c+3072,"riscv_soc core decode dest_addr", false,-1, 4,0);
        tracep->declBus(c+3073,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBus(c+3074,"riscv_soc core decode dest_is_reg", false,-1, 1,0);
        tracep->declBus(c+3075,"riscv_soc core decode rs1_is_reg", false,-1, 1,0);
        tracep->declBus(c+3076,"riscv_soc core decode rs2_is_reg", false,-1, 1,0);
        tracep->declBit(c+3077,"riscv_soc core decode temp_rs1_is_reg", false,-1);
        tracep->declBit(c+3078,"riscv_soc core decode temp_rs2_is_reg", false,-1);
        tracep->declBit(c+3186,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+145,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+148,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+149,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+129,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+130,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+151,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+152,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+132,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+133,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+134,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+136,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+137,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+138,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+139,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+140,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core commit io_commit", false,-1);
        tracep->declBit(c+3186,"riscv_soc core commit csr_reg_clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core commit csr_reg_reset", false,-1);
        tracep->declBus(c+133,"riscv_soc core commit csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+134,"riscv_soc core commit csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+132,"riscv_soc core commit csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+142,"riscv_soc core commit csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+140,"riscv_soc core commit csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core commit csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+138,"riscv_soc core commit csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+3079,"riscv_soc core commit csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+136,"riscv_soc core commit csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+144,"riscv_soc core commit csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+151,"riscv_soc core commit csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+152,"riscv_soc core commit csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core commit csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core commit csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core commit csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core commit csr_reg_io_r_csr_mie", false,-1, 63,0);
        tracep->declQuad(c+3080,"riscv_soc core commit reg_file_0", false,-1, 63,0);
        tracep->declQuad(c+3082,"riscv_soc core commit reg_file_1", false,-1, 63,0);
        tracep->declQuad(c+3084,"riscv_soc core commit reg_file_2", false,-1, 63,0);
        tracep->declQuad(c+3086,"riscv_soc core commit reg_file_3", false,-1, 63,0);
        tracep->declQuad(c+3088,"riscv_soc core commit reg_file_4", false,-1, 63,0);
        tracep->declQuad(c+3090,"riscv_soc core commit reg_file_5", false,-1, 63,0);
        tracep->declQuad(c+3092,"riscv_soc core commit reg_file_6", false,-1, 63,0);
        tracep->declQuad(c+3094,"riscv_soc core commit reg_file_7", false,-1, 63,0);
        tracep->declQuad(c+3096,"riscv_soc core commit reg_file_8", false,-1, 63,0);
        tracep->declQuad(c+3098,"riscv_soc core commit reg_file_9", false,-1, 63,0);
        tracep->declQuad(c+3100,"riscv_soc core commit reg_file_10", false,-1, 63,0);
        tracep->declQuad(c+3102,"riscv_soc core commit reg_file_11", false,-1, 63,0);
        tracep->declQuad(c+3104,"riscv_soc core commit reg_file_12", false,-1, 63,0);
        tracep->declQuad(c+3106,"riscv_soc core commit reg_file_13", false,-1, 63,0);
        tracep->declQuad(c+3108,"riscv_soc core commit reg_file_14", false,-1, 63,0);
        tracep->declQuad(c+3110,"riscv_soc core commit reg_file_15", false,-1, 63,0);
        tracep->declQuad(c+3112,"riscv_soc core commit reg_file_16", false,-1, 63,0);
        tracep->declQuad(c+3114,"riscv_soc core commit reg_file_17", false,-1, 63,0);
        tracep->declQuad(c+3116,"riscv_soc core commit reg_file_18", false,-1, 63,0);
        tracep->declQuad(c+3118,"riscv_soc core commit reg_file_19", false,-1, 63,0);
        tracep->declQuad(c+3120,"riscv_soc core commit reg_file_20", false,-1, 63,0);
        tracep->declQuad(c+3122,"riscv_soc core commit reg_file_21", false,-1, 63,0);
        tracep->declQuad(c+3124,"riscv_soc core commit reg_file_22", false,-1, 63,0);
        tracep->declQuad(c+3126,"riscv_soc core commit reg_file_23", false,-1, 63,0);
        tracep->declQuad(c+3128,"riscv_soc core commit reg_file_24", false,-1, 63,0);
        tracep->declQuad(c+3130,"riscv_soc core commit reg_file_25", false,-1, 63,0);
        tracep->declQuad(c+3132,"riscv_soc core commit reg_file_26", false,-1, 63,0);
        tracep->declQuad(c+3134,"riscv_soc core commit reg_file_27", false,-1, 63,0);
        tracep->declQuad(c+3136,"riscv_soc core commit reg_file_28", false,-1, 63,0);
        tracep->declQuad(c+3138,"riscv_soc core commit reg_file_29", false,-1, 63,0);
        tracep->declQuad(c+3140,"riscv_soc core commit reg_file_30", false,-1, 63,0);
        tracep->declQuad(c+3142,"riscv_soc core commit reg_file_31", false,-1, 63,0);
        tracep->declBit(c+3186,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+133,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+134,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+132,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+142,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+140,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+138,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+3079,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+136,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+144,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+151,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+152,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+124,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+3144,"riscv_soc core commit csr_reg irq", false,-1);
        tracep->declQuad(c+3145,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3147,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+3149,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+3151,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+3153,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+3155,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+3157,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+3159,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+3161,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+3163,"riscv_soc core commit csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+3186,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+77,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+39,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+46,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+80,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+119,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+118,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+119,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+3165,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+3167,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+80,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+78,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+3169,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+3170,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+3171,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+3186,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+3187,"riscv_soc axi_ram reset", false,-1);
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
        tracep->declBit(c+3186,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+3172,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+3174,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+3176,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+3178,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+3179,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+3181,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+3182,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+3174,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+3183,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+3184,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+3185,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+3186,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+3172,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+3174,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+3176,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+3178,"riscv_soc axi_ram mem wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp3296;
    VlWide<4>/*127:0*/ __Vtemp3297;
    VlWide<4>/*127:0*/ __Vtemp3299;
    VlWide<4>/*127:0*/ __Vtemp3300;
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
        tracep->fullBit(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
        tracep->fullBit(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
        tracep->fullBit(oldp+23,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU)) 
                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        tracep->fullQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullBit(oldp+26,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        tracep->fullBit(oldp+27,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        tracep->fullQData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        tracep->fullQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
        tracep->fullBit(oldp+33,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        tracep->fullQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+37,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        tracep->fullQData(oldp+41,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+43,((((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        tracep->fullCData(oldp+45,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        tracep->fullBit(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        tracep->fullBit(oldp+47,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+48,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                  & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+49,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+55,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+56,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                  & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+61,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+63,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+66,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU))
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+67,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        tracep->fullBit(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        tracep->fullQData(oldp+69,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU))
                                     ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                     : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
        tracep->fullQData(oldp+71,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        tracep->fullBit(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        tracep->fullQData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+76,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                            >> 0x1fU))
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                   : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+77,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        tracep->fullBit(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        tracep->fullQData(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        tracep->fullBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        tracep->fullQData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        tracep->fullBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid));
        tracep->fullQData(oldp+89,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                     ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                             : ((1U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                 : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                     : 0ULL)),64);
        tracep->fullQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
        tracep->fullBit(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_op_datas_ready));
        tracep->fullBit(oldp+95,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
        tracep->fullIData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
        tracep->fullQData(oldp+97,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                     ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                     : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                         : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                             : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
        tracep->fullBit(oldp+99,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                   : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
        tracep->fullBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullCData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullBit(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        tracep->fullSData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+118,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
        tracep->fullQData(oldp+126,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        tracep->fullCData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        tracep->fullBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        tracep->fullSData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        tracep->fullBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+138,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))));
        tracep->fullCData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+144,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))));
        tracep->fullCData(oldp+145,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+146,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
        tracep->fullCData(oldp+148,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+149,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
        tracep->fullSData(oldp+151,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+152,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        tracep->fullQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        tracep->fullCData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        tracep->fullBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        tracep->fullBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        tracep->fullBit(oldp+160,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullWData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        tracep->fullWData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
        VL_EXTEND_WQ(128,54, __Vtemp3286, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3287, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp3288[0U] = __Vtemp3286[0U];
            __Vtemp3288[1U] = __Vtemp3286[1U];
            __Vtemp3288[2U] = __Vtemp3286[2U];
            __Vtemp3288[3U] = __Vtemp3286[3U];
        } else {
            __Vtemp3288[0U] = __Vtemp3287[0U];
            __Vtemp3288[1U] = __Vtemp3287[1U];
            __Vtemp3288[2U] = __Vtemp3287[2U];
            __Vtemp3288[3U] = __Vtemp3287[3U];
        }
        tracep->fullWData(oldp+169,(__Vtemp3288),128);
        VL_EXTEND_WQ(128,54, __Vtemp3289, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3290, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
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
        tracep->fullWData(oldp+173,(__Vtemp3291),128);
        tracep->fullBit(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        tracep->fullBit(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
        tracep->fullBit(oldp+179,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        tracep->fullQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        tracep->fullQData(oldp+183,(((1U & (IData)(
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
        tracep->fullBit(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        tracep->fullQData(oldp+186,(((1U & (IData)(
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
        tracep->fullBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        tracep->fullCData(oldp+189,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullWData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        VL_EXTEND_WQ(128,54, __Vtemp3292, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        tracep->fullWData(oldp+194,(__Vtemp3292),128);
        tracep->fullBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        tracep->fullCData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_io_addr),6);
        tracep->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        tracep->fullWData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__Q),128);
        tracep->fullCData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1_io_addr),6);
        tracep->fullWData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q),128);
        tracep->fullCData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2_io_addr),6);
        tracep->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        tracep->fullWData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__Q),128);
        tracep->fullCData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3_io_addr),6);
        tracep->fullWData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q),128);
        tracep->fullQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        tracep->fullBit(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        tracep->fullBit(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullBit(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        tracep->fullQData(oldp+228,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        tracep->fullBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        tracep->fullCData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        tracep->fullBit(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        tracep->fullBit(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        tracep->fullBit(oldp+235,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        tracep->fullBit(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        tracep->fullQData(oldp+238,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+240,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+241,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        VL_EXTEND_WQ(128,54, __Vtemp3293, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3294, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[0U])))));
        tracep->fullQData(oldp+242,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                           ? 
                                                          __Vtemp3293[1U]
                                                           : 
                                                          __Vtemp3294[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                            ? 
                                                           __Vtemp3293[0U]
                                                            : 
                                                           __Vtemp3294[0U])))))),54);
        VL_EXTEND_WQ(128,54, __Vtemp3296, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3297, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[0U])))));
        tracep->fullQData(oldp+244,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                           ? 
                                                          __Vtemp3296[1U]
                                                           : 
                                                          __Vtemp3297[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                            ? 
                                                           __Vtemp3296[0U]
                                                            : 
                                                           __Vtemp3297[0U])))))),54);
        tracep->fullBit(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        tracep->fullBit(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        tracep->fullQData(oldp+248,((0xfffffffffffffff0ULL 
                                     & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        tracep->fullQData(oldp+250,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+252,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        tracep->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        tracep->fullBit(oldp+255,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        tracep->fullQData(oldp+256,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullQData(oldp+258,((~ (1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
        tracep->fullCData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        tracep->fullWData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_0),128);
        tracep->fullWData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_1),128);
        tracep->fullWData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_2),128);
        tracep->fullWData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_3),128);
        tracep->fullWData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_4),128);
        tracep->fullWData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_5),128);
        tracep->fullWData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_6),128);
        tracep->fullWData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_7),128);
        tracep->fullWData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_8),128);
        tracep->fullWData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_9),128);
        tracep->fullWData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_10),128);
        tracep->fullWData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_11),128);
        tracep->fullWData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_12),128);
        tracep->fullWData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_13),128);
        tracep->fullWData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_14),128);
        tracep->fullWData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_15),128);
        tracep->fullWData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_16),128);
        tracep->fullWData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_17),128);
        tracep->fullWData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_18),128);
        tracep->fullWData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_19),128);
        tracep->fullWData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_20),128);
        tracep->fullWData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_21),128);
        tracep->fullWData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_22),128);
        tracep->fullWData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_23),128);
        tracep->fullWData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_24),128);
        tracep->fullWData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_25),128);
        tracep->fullWData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_26),128);
        tracep->fullWData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_27),128);
        tracep->fullWData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_28),128);
        tracep->fullWData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_29),128);
        tracep->fullWData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_30),128);
        tracep->fullWData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_31),128);
        tracep->fullWData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_32),128);
        tracep->fullWData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_33),128);
        tracep->fullWData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_34),128);
        tracep->fullWData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_35),128);
        tracep->fullWData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_36),128);
        tracep->fullWData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_37),128);
        tracep->fullWData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_38),128);
        tracep->fullWData(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_39),128);
        tracep->fullWData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_40),128);
        tracep->fullWData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_41),128);
        tracep->fullWData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_42),128);
        tracep->fullWData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_43),128);
        tracep->fullWData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_44),128);
        tracep->fullWData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_45),128);
        tracep->fullWData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_46),128);
        tracep->fullWData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_47),128);
        tracep->fullWData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_48),128);
        tracep->fullWData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_49),128);
        tracep->fullWData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_50),128);
        tracep->fullWData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_51),128);
        tracep->fullWData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_52),128);
        tracep->fullWData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_53),128);
        tracep->fullWData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_54),128);
        tracep->fullWData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_55),128);
        tracep->fullWData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_56),128);
        tracep->fullWData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_57),128);
        tracep->fullWData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_58),128);
        tracep->fullWData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_59),128);
        tracep->fullWData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_60),128);
        tracep->fullWData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_61),128);
        tracep->fullWData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_62),128);
        tracep->fullWData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_63),128);
        tracep->fullWData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_0),128);
        tracep->fullWData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_1),128);
        tracep->fullWData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_2),128);
        tracep->fullWData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_3),128);
        tracep->fullWData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_4),128);
        tracep->fullWData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_5),128);
        tracep->fullWData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_6),128);
        tracep->fullWData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_7),128);
        tracep->fullWData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_8),128);
        tracep->fullWData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_9),128);
        tracep->fullWData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_10),128);
        tracep->fullWData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_11),128);
        tracep->fullWData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_12),128);
        tracep->fullWData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_13),128);
        tracep->fullWData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_14),128);
        tracep->fullWData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_15),128);
        tracep->fullWData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_16),128);
        tracep->fullWData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_17),128);
        tracep->fullWData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_18),128);
        tracep->fullWData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_19),128);
        tracep->fullWData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_20),128);
        tracep->fullWData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_21),128);
        tracep->fullWData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_22),128);
        tracep->fullWData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_23),128);
        tracep->fullWData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_24),128);
        tracep->fullWData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_25),128);
        tracep->fullWData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_26),128);
        tracep->fullWData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_27),128);
        tracep->fullWData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_28),128);
        tracep->fullWData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_29),128);
        tracep->fullWData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_30),128);
        tracep->fullWData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_31),128);
        tracep->fullWData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_32),128);
        tracep->fullWData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_33),128);
        tracep->fullWData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_34),128);
        tracep->fullWData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_35),128);
        tracep->fullWData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_36),128);
        tracep->fullWData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_37),128);
        tracep->fullWData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_38),128);
        tracep->fullWData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_39),128);
        tracep->fullWData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_40),128);
        tracep->fullWData(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_41),128);
        tracep->fullWData(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_42),128);
        tracep->fullWData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_43),128);
        tracep->fullWData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_44),128);
        tracep->fullWData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_45),128);
        tracep->fullWData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_46),128);
        tracep->fullWData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_47),128);
        tracep->fullWData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_48),128);
        tracep->fullWData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_49),128);
        tracep->fullWData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_50),128);
        tracep->fullWData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_51),128);
        tracep->fullWData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_52),128);
        tracep->fullWData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_53),128);
        tracep->fullWData(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_54),128);
        tracep->fullWData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_55),128);
        tracep->fullWData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_56),128);
        tracep->fullWData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_57),128);
        tracep->fullWData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_58),128);
        tracep->fullWData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_59),128);
        tracep->fullWData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_60),128);
        tracep->fullWData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_61),128);
        tracep->fullWData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_62),128);
        tracep->fullWData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_63),128);
        tracep->fullWData(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_0),128);
        tracep->fullWData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_1),128);
        tracep->fullWData(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_2),128);
        tracep->fullWData(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_3),128);
        tracep->fullWData(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_4),128);
        tracep->fullWData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_5),128);
        tracep->fullWData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_6),128);
        tracep->fullWData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_7),128);
        tracep->fullWData(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_8),128);
        tracep->fullWData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_9),128);
        tracep->fullWData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_10),128);
        tracep->fullWData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_11),128);
        tracep->fullWData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_12),128);
        tracep->fullWData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_13),128);
        tracep->fullWData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_14),128);
        tracep->fullWData(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_15),128);
        tracep->fullWData(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_16),128);
        tracep->fullWData(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_17),128);
        tracep->fullWData(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_18),128);
        tracep->fullWData(oldp+849,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_19),128);
        tracep->fullWData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_20),128);
        tracep->fullWData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_21),128);
        tracep->fullWData(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_22),128);
        tracep->fullWData(oldp+865,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_23),128);
        tracep->fullWData(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_24),128);
        tracep->fullWData(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_25),128);
        tracep->fullWData(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_26),128);
        tracep->fullWData(oldp+881,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_27),128);
        tracep->fullWData(oldp+885,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_28),128);
        tracep->fullWData(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_29),128);
        tracep->fullWData(oldp+893,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_30),128);
        tracep->fullWData(oldp+897,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_31),128);
        tracep->fullWData(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_32),128);
        tracep->fullWData(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_33),128);
        tracep->fullWData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_34),128);
        tracep->fullWData(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_35),128);
        tracep->fullWData(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_36),128);
        tracep->fullWData(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_37),128);
        tracep->fullWData(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_38),128);
        tracep->fullWData(oldp+929,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_39),128);
        tracep->fullWData(oldp+933,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_40),128);
        tracep->fullWData(oldp+937,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_41),128);
        tracep->fullWData(oldp+941,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_42),128);
        tracep->fullWData(oldp+945,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_43),128);
        tracep->fullWData(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_44),128);
        tracep->fullWData(oldp+953,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_45),128);
        tracep->fullWData(oldp+957,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_46),128);
        tracep->fullWData(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_47),128);
        tracep->fullWData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_48),128);
        tracep->fullWData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_49),128);
        tracep->fullWData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_50),128);
        tracep->fullWData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_51),128);
        tracep->fullWData(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_52),128);
        tracep->fullWData(oldp+985,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_53),128);
        tracep->fullWData(oldp+989,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_54),128);
        tracep->fullWData(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_55),128);
        tracep->fullWData(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_56),128);
        tracep->fullWData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_57),128);
        tracep->fullWData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_58),128);
        tracep->fullWData(oldp+1009,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_59),128);
        tracep->fullWData(oldp+1013,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_60),128);
        tracep->fullWData(oldp+1017,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_61),128);
        tracep->fullWData(oldp+1021,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_62),128);
        tracep->fullWData(oldp+1025,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_63),128);
        tracep->fullWData(oldp+1029,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_0),128);
        tracep->fullWData(oldp+1033,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_1),128);
        tracep->fullWData(oldp+1037,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_2),128);
        tracep->fullWData(oldp+1041,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_3),128);
        tracep->fullWData(oldp+1045,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_4),128);
        tracep->fullWData(oldp+1049,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_5),128);
        tracep->fullWData(oldp+1053,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_6),128);
        tracep->fullWData(oldp+1057,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_7),128);
        tracep->fullWData(oldp+1061,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_8),128);
        tracep->fullWData(oldp+1065,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_9),128);
        tracep->fullWData(oldp+1069,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_10),128);
        tracep->fullWData(oldp+1073,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_11),128);
        tracep->fullWData(oldp+1077,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_12),128);
        tracep->fullWData(oldp+1081,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_13),128);
        tracep->fullWData(oldp+1085,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_14),128);
        tracep->fullWData(oldp+1089,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_15),128);
        tracep->fullWData(oldp+1093,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_16),128);
        tracep->fullWData(oldp+1097,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_17),128);
        tracep->fullWData(oldp+1101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_18),128);
        tracep->fullWData(oldp+1105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_19),128);
        tracep->fullWData(oldp+1109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_20),128);
        tracep->fullWData(oldp+1113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_21),128);
        tracep->fullWData(oldp+1117,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_22),128);
        tracep->fullWData(oldp+1121,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_23),128);
        tracep->fullWData(oldp+1125,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_24),128);
        tracep->fullWData(oldp+1129,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_25),128);
        tracep->fullWData(oldp+1133,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_26),128);
        tracep->fullWData(oldp+1137,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_27),128);
        tracep->fullWData(oldp+1141,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_28),128);
        tracep->fullWData(oldp+1145,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_29),128);
        tracep->fullWData(oldp+1149,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_30),128);
        tracep->fullWData(oldp+1153,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_31),128);
        tracep->fullWData(oldp+1157,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_32),128);
        tracep->fullWData(oldp+1161,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_33),128);
        tracep->fullWData(oldp+1165,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_34),128);
        tracep->fullWData(oldp+1169,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_35),128);
        tracep->fullWData(oldp+1173,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_36),128);
        tracep->fullWData(oldp+1177,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_37),128);
        tracep->fullWData(oldp+1181,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_38),128);
        tracep->fullWData(oldp+1185,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_39),128);
        tracep->fullWData(oldp+1189,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_40),128);
        tracep->fullWData(oldp+1193,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_41),128);
        tracep->fullWData(oldp+1197,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_42),128);
        tracep->fullWData(oldp+1201,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_43),128);
        tracep->fullWData(oldp+1205,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_44),128);
        tracep->fullWData(oldp+1209,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_45),128);
        tracep->fullWData(oldp+1213,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_46),128);
        tracep->fullWData(oldp+1217,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_47),128);
        tracep->fullWData(oldp+1221,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_48),128);
        tracep->fullWData(oldp+1225,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_49),128);
        tracep->fullWData(oldp+1229,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_50),128);
        tracep->fullWData(oldp+1233,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_51),128);
        tracep->fullWData(oldp+1237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_52),128);
        tracep->fullWData(oldp+1241,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_53),128);
        tracep->fullWData(oldp+1245,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_54),128);
        tracep->fullWData(oldp+1249,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_55),128);
        tracep->fullWData(oldp+1253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_56),128);
        tracep->fullWData(oldp+1257,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_57),128);
        tracep->fullWData(oldp+1261,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_58),128);
        tracep->fullWData(oldp+1265,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_59),128);
        tracep->fullWData(oldp+1269,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_60),128);
        tracep->fullWData(oldp+1273,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_61),128);
        tracep->fullWData(oldp+1277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_62),128);
        tracep->fullWData(oldp+1281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_63),128);
        tracep->fullCData(oldp+1285,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_io_addr),6);
        tracep->fullBit(oldp+1286,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp3299[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp3299[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp3299[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp3299[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+1287,(__Vtemp3299),128);
        tracep->fullWData(oldp+1291,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+1295,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q),128);
        tracep->fullCData(oldp+1299,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1_io_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp3300, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+1300,(__Vtemp3300),128);
        tracep->fullWData(oldp+1304,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q),128);
        tracep->fullCData(oldp+1308,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2_io_addr),6);
        tracep->fullBit(oldp+1309,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+1310,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q),128);
        tracep->fullCData(oldp+1314,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3_io_addr),6);
        tracep->fullWData(oldp+1315,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q),128);
        tracep->fullQData(oldp+1319,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                      >> 0xaU)),54);
        tracep->fullCData(oldp+1321,((0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                       >> 4U)))),6);
        tracep->fullCData(oldp+1322,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        tracep->fullCData(oldp+1323,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+1324,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+1326,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+1327,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+1328,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+1330,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+1331,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+1332,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+1333,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+1334,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+1335,((((QData)((IData)(
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
        tracep->fullWData(oldp+1337,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+1341,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+1345,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+1346,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+1348,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+1350,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+1352,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+1354,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+1355,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+1357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+1359,((0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q[0U]))))),54);
        tracep->fullQData(oldp+1361,((0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q[0U]))))),54);
        tracep->fullBit(oldp+1363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+1364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+1365,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+1366,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+1367,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+1368,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+1369,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                       ? (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[2U])))
                                       : (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[0U]))))),64);
        tracep->fullQData(oldp+1371,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                       ? (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[2U])))
                                       : (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[0U]))))),64);
        tracep->fullQData(oldp+1373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+1375,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+1376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+1377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+1378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+1379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullWData(oldp+1380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_0),128);
        tracep->fullWData(oldp+1384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_1),128);
        tracep->fullWData(oldp+1388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_2),128);
        tracep->fullWData(oldp+1392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_3),128);
        tracep->fullWData(oldp+1396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_4),128);
        tracep->fullWData(oldp+1400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_5),128);
        tracep->fullWData(oldp+1404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_6),128);
        tracep->fullWData(oldp+1408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_7),128);
        tracep->fullWData(oldp+1412,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_8),128);
        tracep->fullWData(oldp+1416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_9),128);
        tracep->fullWData(oldp+1420,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_10),128);
        tracep->fullWData(oldp+1424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_11),128);
        tracep->fullWData(oldp+1428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_12),128);
        tracep->fullWData(oldp+1432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_13),128);
        tracep->fullWData(oldp+1436,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_14),128);
        tracep->fullWData(oldp+1440,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_15),128);
        tracep->fullWData(oldp+1444,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_16),128);
        tracep->fullWData(oldp+1448,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_17),128);
        tracep->fullWData(oldp+1452,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_18),128);
        tracep->fullWData(oldp+1456,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_19),128);
        tracep->fullWData(oldp+1460,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_20),128);
        tracep->fullWData(oldp+1464,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_21),128);
        tracep->fullWData(oldp+1468,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_22),128);
        tracep->fullWData(oldp+1472,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_23),128);
        tracep->fullWData(oldp+1476,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_24),128);
        tracep->fullWData(oldp+1480,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_25),128);
        tracep->fullWData(oldp+1484,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_26),128);
        tracep->fullWData(oldp+1488,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_27),128);
        tracep->fullWData(oldp+1492,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_28),128);
        tracep->fullWData(oldp+1496,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_29),128);
        tracep->fullWData(oldp+1500,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_30),128);
        tracep->fullWData(oldp+1504,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_31),128);
        tracep->fullWData(oldp+1508,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_32),128);
        tracep->fullWData(oldp+1512,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_33),128);
        tracep->fullWData(oldp+1516,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_34),128);
        tracep->fullWData(oldp+1520,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_35),128);
        tracep->fullWData(oldp+1524,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_36),128);
        tracep->fullWData(oldp+1528,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_37),128);
        tracep->fullWData(oldp+1532,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_38),128);
        tracep->fullWData(oldp+1536,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_39),128);
        tracep->fullWData(oldp+1540,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_40),128);
        tracep->fullWData(oldp+1544,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_41),128);
        tracep->fullWData(oldp+1548,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_42),128);
        tracep->fullWData(oldp+1552,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_43),128);
        tracep->fullWData(oldp+1556,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_44),128);
        tracep->fullWData(oldp+1560,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_45),128);
        tracep->fullWData(oldp+1564,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_46),128);
        tracep->fullWData(oldp+1568,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_47),128);
        tracep->fullWData(oldp+1572,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_48),128);
        tracep->fullWData(oldp+1576,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_49),128);
        tracep->fullWData(oldp+1580,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_50),128);
        tracep->fullWData(oldp+1584,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_51),128);
        tracep->fullWData(oldp+1588,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_52),128);
        tracep->fullWData(oldp+1592,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_53),128);
        tracep->fullWData(oldp+1596,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_54),128);
        tracep->fullWData(oldp+1600,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_55),128);
        tracep->fullWData(oldp+1604,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_56),128);
        tracep->fullWData(oldp+1608,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_57),128);
        tracep->fullWData(oldp+1612,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_58),128);
        tracep->fullWData(oldp+1616,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_59),128);
        tracep->fullWData(oldp+1620,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_60),128);
        tracep->fullWData(oldp+1624,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_61),128);
        tracep->fullWData(oldp+1628,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_62),128);
        tracep->fullWData(oldp+1632,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_63),128);
        tracep->fullWData(oldp+1636,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_0),128);
        tracep->fullWData(oldp+1640,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_1),128);
        tracep->fullWData(oldp+1644,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_2),128);
        tracep->fullWData(oldp+1648,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_3),128);
        tracep->fullWData(oldp+1652,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_4),128);
        tracep->fullWData(oldp+1656,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_5),128);
        tracep->fullWData(oldp+1660,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_6),128);
        tracep->fullWData(oldp+1664,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_7),128);
        tracep->fullWData(oldp+1668,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_8),128);
        tracep->fullWData(oldp+1672,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_9),128);
        tracep->fullWData(oldp+1676,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_10),128);
        tracep->fullWData(oldp+1680,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_11),128);
        tracep->fullWData(oldp+1684,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_12),128);
        tracep->fullWData(oldp+1688,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_13),128);
        tracep->fullWData(oldp+1692,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_14),128);
        tracep->fullWData(oldp+1696,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_15),128);
        tracep->fullWData(oldp+1700,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_16),128);
        tracep->fullWData(oldp+1704,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_17),128);
        tracep->fullWData(oldp+1708,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_18),128);
        tracep->fullWData(oldp+1712,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_19),128);
        tracep->fullWData(oldp+1716,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_20),128);
        tracep->fullWData(oldp+1720,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_21),128);
        tracep->fullWData(oldp+1724,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_22),128);
        tracep->fullWData(oldp+1728,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_23),128);
        tracep->fullWData(oldp+1732,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_24),128);
        tracep->fullWData(oldp+1736,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_25),128);
        tracep->fullWData(oldp+1740,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_26),128);
        tracep->fullWData(oldp+1744,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_27),128);
        tracep->fullWData(oldp+1748,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_28),128);
        tracep->fullWData(oldp+1752,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_29),128);
        tracep->fullWData(oldp+1756,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_30),128);
        tracep->fullWData(oldp+1760,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_31),128);
        tracep->fullWData(oldp+1764,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_32),128);
        tracep->fullWData(oldp+1768,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_33),128);
        tracep->fullWData(oldp+1772,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_34),128);
        tracep->fullWData(oldp+1776,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_35),128);
        tracep->fullWData(oldp+1780,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_36),128);
        tracep->fullWData(oldp+1784,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_37),128);
        tracep->fullWData(oldp+1788,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_38),128);
        tracep->fullWData(oldp+1792,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_39),128);
        tracep->fullWData(oldp+1796,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_40),128);
        tracep->fullWData(oldp+1800,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_41),128);
        tracep->fullWData(oldp+1804,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_42),128);
        tracep->fullWData(oldp+1808,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_43),128);
        tracep->fullWData(oldp+1812,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_44),128);
        tracep->fullWData(oldp+1816,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_45),128);
        tracep->fullWData(oldp+1820,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_46),128);
        tracep->fullWData(oldp+1824,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_47),128);
        tracep->fullWData(oldp+1828,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_48),128);
        tracep->fullWData(oldp+1832,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_49),128);
        tracep->fullWData(oldp+1836,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_50),128);
        tracep->fullWData(oldp+1840,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_51),128);
        tracep->fullWData(oldp+1844,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_52),128);
        tracep->fullWData(oldp+1848,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_53),128);
        tracep->fullWData(oldp+1852,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_54),128);
        tracep->fullWData(oldp+1856,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_55),128);
        tracep->fullWData(oldp+1860,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_56),128);
        tracep->fullWData(oldp+1864,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_57),128);
        tracep->fullWData(oldp+1868,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_58),128);
        tracep->fullWData(oldp+1872,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_59),128);
        tracep->fullWData(oldp+1876,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_60),128);
        tracep->fullWData(oldp+1880,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_61),128);
        tracep->fullWData(oldp+1884,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_62),128);
        tracep->fullWData(oldp+1888,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_63),128);
        tracep->fullWData(oldp+1892,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_0),128);
        tracep->fullWData(oldp+1896,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_1),128);
        tracep->fullWData(oldp+1900,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_2),128);
        tracep->fullWData(oldp+1904,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_3),128);
        tracep->fullWData(oldp+1908,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_4),128);
        tracep->fullWData(oldp+1912,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_5),128);
        tracep->fullWData(oldp+1916,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_6),128);
        tracep->fullWData(oldp+1920,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_7),128);
        tracep->fullWData(oldp+1924,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_8),128);
        tracep->fullWData(oldp+1928,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_9),128);
        tracep->fullWData(oldp+1932,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_10),128);
        tracep->fullWData(oldp+1936,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_11),128);
        tracep->fullWData(oldp+1940,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_12),128);
        tracep->fullWData(oldp+1944,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_13),128);
        tracep->fullWData(oldp+1948,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_14),128);
        tracep->fullWData(oldp+1952,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_15),128);
        tracep->fullWData(oldp+1956,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_16),128);
        tracep->fullWData(oldp+1960,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_17),128);
        tracep->fullWData(oldp+1964,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_18),128);
        tracep->fullWData(oldp+1968,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_19),128);
        tracep->fullWData(oldp+1972,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_20),128);
        tracep->fullWData(oldp+1976,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_21),128);
        tracep->fullWData(oldp+1980,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_22),128);
        tracep->fullWData(oldp+1984,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_23),128);
        tracep->fullWData(oldp+1988,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_24),128);
        tracep->fullWData(oldp+1992,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_25),128);
        tracep->fullWData(oldp+1996,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_26),128);
        tracep->fullWData(oldp+2000,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_27),128);
        tracep->fullWData(oldp+2004,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_28),128);
        tracep->fullWData(oldp+2008,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_29),128);
        tracep->fullWData(oldp+2012,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_30),128);
        tracep->fullWData(oldp+2016,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_31),128);
        tracep->fullWData(oldp+2020,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_32),128);
        tracep->fullWData(oldp+2024,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_33),128);
        tracep->fullWData(oldp+2028,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_34),128);
        tracep->fullWData(oldp+2032,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_35),128);
        tracep->fullWData(oldp+2036,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_36),128);
        tracep->fullWData(oldp+2040,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_37),128);
        tracep->fullWData(oldp+2044,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_38),128);
        tracep->fullWData(oldp+2048,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_39),128);
        tracep->fullWData(oldp+2052,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_40),128);
        tracep->fullWData(oldp+2056,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_41),128);
        tracep->fullWData(oldp+2060,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_42),128);
        tracep->fullWData(oldp+2064,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_43),128);
        tracep->fullWData(oldp+2068,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_44),128);
        tracep->fullWData(oldp+2072,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_45),128);
        tracep->fullWData(oldp+2076,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_46),128);
        tracep->fullWData(oldp+2080,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_47),128);
        tracep->fullWData(oldp+2084,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_48),128);
        tracep->fullWData(oldp+2088,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_49),128);
        tracep->fullWData(oldp+2092,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_50),128);
        tracep->fullWData(oldp+2096,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_51),128);
        tracep->fullWData(oldp+2100,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_52),128);
        tracep->fullWData(oldp+2104,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_53),128);
        tracep->fullWData(oldp+2108,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_54),128);
        tracep->fullWData(oldp+2112,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_55),128);
        tracep->fullWData(oldp+2116,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_56),128);
        tracep->fullWData(oldp+2120,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_57),128);
        tracep->fullWData(oldp+2124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_58),128);
        tracep->fullWData(oldp+2128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_59),128);
        tracep->fullWData(oldp+2132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_60),128);
        tracep->fullWData(oldp+2136,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_61),128);
        tracep->fullWData(oldp+2140,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_62),128);
        tracep->fullWData(oldp+2144,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_63),128);
        tracep->fullWData(oldp+2148,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_0),128);
        tracep->fullWData(oldp+2152,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_1),128);
        tracep->fullWData(oldp+2156,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_2),128);
        tracep->fullWData(oldp+2160,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_3),128);
        tracep->fullWData(oldp+2164,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_4),128);
        tracep->fullWData(oldp+2168,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_5),128);
        tracep->fullWData(oldp+2172,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_6),128);
        tracep->fullWData(oldp+2176,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_7),128);
        tracep->fullWData(oldp+2180,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_8),128);
        tracep->fullWData(oldp+2184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_9),128);
        tracep->fullWData(oldp+2188,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_10),128);
        tracep->fullWData(oldp+2192,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_11),128);
        tracep->fullWData(oldp+2196,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_12),128);
        tracep->fullWData(oldp+2200,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_13),128);
        tracep->fullWData(oldp+2204,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_14),128);
        tracep->fullWData(oldp+2208,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_15),128);
        tracep->fullWData(oldp+2212,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_16),128);
        tracep->fullWData(oldp+2216,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_17),128);
        tracep->fullWData(oldp+2220,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_18),128);
        tracep->fullWData(oldp+2224,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_19),128);
        tracep->fullWData(oldp+2228,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_20),128);
        tracep->fullWData(oldp+2232,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_21),128);
        tracep->fullWData(oldp+2236,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_22),128);
        tracep->fullWData(oldp+2240,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_23),128);
        tracep->fullWData(oldp+2244,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_24),128);
        tracep->fullWData(oldp+2248,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_25),128);
        tracep->fullWData(oldp+2252,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_26),128);
        tracep->fullWData(oldp+2256,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_27),128);
        tracep->fullWData(oldp+2260,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_28),128);
        tracep->fullWData(oldp+2264,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_29),128);
        tracep->fullWData(oldp+2268,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_30),128);
        tracep->fullWData(oldp+2272,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_31),128);
        tracep->fullWData(oldp+2276,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_32),128);
        tracep->fullWData(oldp+2280,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_33),128);
        tracep->fullWData(oldp+2284,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_34),128);
        tracep->fullWData(oldp+2288,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_35),128);
        tracep->fullWData(oldp+2292,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_36),128);
        tracep->fullWData(oldp+2296,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_37),128);
        tracep->fullWData(oldp+2300,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_38),128);
        tracep->fullWData(oldp+2304,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_39),128);
        tracep->fullWData(oldp+2308,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_40),128);
        tracep->fullWData(oldp+2312,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_41),128);
        tracep->fullWData(oldp+2316,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_42),128);
        tracep->fullWData(oldp+2320,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_43),128);
        tracep->fullWData(oldp+2324,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_44),128);
        tracep->fullWData(oldp+2328,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_45),128);
        tracep->fullWData(oldp+2332,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_46),128);
        tracep->fullWData(oldp+2336,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_47),128);
        tracep->fullWData(oldp+2340,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_48),128);
        tracep->fullWData(oldp+2344,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_49),128);
        tracep->fullWData(oldp+2348,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_50),128);
        tracep->fullWData(oldp+2352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_51),128);
        tracep->fullWData(oldp+2356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_52),128);
        tracep->fullWData(oldp+2360,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_53),128);
        tracep->fullWData(oldp+2364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_54),128);
        tracep->fullWData(oldp+2368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_55),128);
        tracep->fullWData(oldp+2372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_56),128);
        tracep->fullWData(oldp+2376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_57),128);
        tracep->fullWData(oldp+2380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_58),128);
        tracep->fullWData(oldp+2384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_59),128);
        tracep->fullWData(oldp+2388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_60),128);
        tracep->fullWData(oldp+2392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_61),128);
        tracep->fullWData(oldp+2396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_62),128);
        tracep->fullWData(oldp+2400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_63),128);
        tracep->fullBit(oldp+2404,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+2405,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+2406,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+2407,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+2408,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+2409,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+2410,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+2411,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+2412,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+2413,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))));
        tracep->fullBit(oldp+2414,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                             >> 0x1fU))));
        tracep->fullBit(oldp+2415,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+2416,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
        tracep->fullIData(oldp+2417,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
        tracep->fullBit(oldp+2418,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
        tracep->fullQData(oldp+2419,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        tracep->fullBit(oldp+2421,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
        tracep->fullBit(oldp+2422,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+2423,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullCData(oldp+2425,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        tracep->fullCData(oldp+2426,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        tracep->fullQData(oldp+2427,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        tracep->fullQData(oldp+2429,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        tracep->fullQData(oldp+2431,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        tracep->fullQData(oldp+2433,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        tracep->fullBit(oldp+2435,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        tracep->fullCData(oldp+2436,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        tracep->fullCData(oldp+2437,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        tracep->fullBit(oldp+2438,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        tracep->fullBit(oldp+2439,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        tracep->fullBit(oldp+2440,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        tracep->fullBit(oldp+2441,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        tracep->fullQData(oldp+2442,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        tracep->fullQData(oldp+2444,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        tracep->fullQData(oldp+2446,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        tracep->fullQData(oldp+2448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        tracep->fullIData(oldp+2450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        tracep->fullIData(oldp+2451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        tracep->fullIData(oldp+2452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        tracep->fullIData(oldp+2453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        tracep->fullBit(oldp+2454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        tracep->fullBit(oldp+2455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        tracep->fullBit(oldp+2456,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        tracep->fullBit(oldp+2457,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        tracep->fullBit(oldp+2458,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+2459,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+2460,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+2461,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullCData(oldp+2462,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullCData(oldp+2463,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+2464,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        tracep->fullBit(oldp+2465,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        tracep->fullBit(oldp+2466,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        tracep->fullCData(oldp+2467,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                             + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                            - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        tracep->fullWData(oldp+2468,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
        tracep->fullWData(oldp+2472,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
        tracep->fullWData(oldp+2476,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
        tracep->fullWData(oldp+2480,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
        tracep->fullWData(oldp+2484,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
        tracep->fullWData(oldp+2488,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
        tracep->fullWData(oldp+2492,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
        tracep->fullWData(oldp+2496,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
        tracep->fullWData(oldp+2500,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
        tracep->fullWData(oldp+2504,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
        tracep->fullWData(oldp+2508,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
        tracep->fullWData(oldp+2512,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
        tracep->fullWData(oldp+2516,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
        tracep->fullWData(oldp+2520,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
        tracep->fullWData(oldp+2524,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
        tracep->fullWData(oldp+2528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
        tracep->fullWData(oldp+2532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
        tracep->fullWData(oldp+2536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
        tracep->fullWData(oldp+2540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
        tracep->fullWData(oldp+2544,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
        tracep->fullWData(oldp+2548,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
        tracep->fullWData(oldp+2552,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
        tracep->fullWData(oldp+2556,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
        tracep->fullWData(oldp+2560,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
        tracep->fullWData(oldp+2564,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
        tracep->fullWData(oldp+2568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
        tracep->fullWData(oldp+2572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
        tracep->fullWData(oldp+2576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
        tracep->fullWData(oldp+2580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
        tracep->fullWData(oldp+2584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
        tracep->fullWData(oldp+2588,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
        tracep->fullWData(oldp+2592,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
        tracep->fullWData(oldp+2596,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
        tracep->fullWData(oldp+2600,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
        tracep->fullWData(oldp+2604,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
        tracep->fullWData(oldp+2608,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
        tracep->fullWData(oldp+2612,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
        tracep->fullWData(oldp+2616,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
        tracep->fullWData(oldp+2620,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
        tracep->fullWData(oldp+2624,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
        tracep->fullWData(oldp+2628,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
        tracep->fullWData(oldp+2632,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
        tracep->fullWData(oldp+2636,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
        tracep->fullWData(oldp+2640,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
        tracep->fullWData(oldp+2644,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
        tracep->fullWData(oldp+2648,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
        tracep->fullWData(oldp+2652,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
        tracep->fullWData(oldp+2656,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
        tracep->fullWData(oldp+2660,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
        tracep->fullWData(oldp+2664,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
        tracep->fullWData(oldp+2668,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
        tracep->fullWData(oldp+2672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
        tracep->fullWData(oldp+2676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
        tracep->fullWData(oldp+2680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
        tracep->fullWData(oldp+2684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
        tracep->fullWData(oldp+2688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
        tracep->fullWData(oldp+2692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
        tracep->fullWData(oldp+2696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
        tracep->fullWData(oldp+2700,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
        tracep->fullWData(oldp+2704,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
        tracep->fullWData(oldp+2708,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
        tracep->fullWData(oldp+2712,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
        tracep->fullWData(oldp+2716,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
        tracep->fullWData(oldp+2720,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
        tracep->fullQData(oldp+2724,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
        tracep->fullQData(oldp+2726,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
        tracep->fullQData(oldp+2728,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
        tracep->fullQData(oldp+2730,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
        tracep->fullQData(oldp+2732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
        tracep->fullQData(oldp+2734,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
        tracep->fullCData(oldp+2736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        tracep->fullCData(oldp+2737,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        tracep->fullCData(oldp+2738,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        tracep->fullCData(oldp+2739,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        tracep->fullCData(oldp+2740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        tracep->fullCData(oldp+2741,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        tracep->fullCData(oldp+2742,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        tracep->fullCData(oldp+2743,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        tracep->fullCData(oldp+2744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        tracep->fullCData(oldp+2745,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        tracep->fullCData(oldp+2746,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        tracep->fullCData(oldp+2747,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        tracep->fullCData(oldp+2748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        tracep->fullCData(oldp+2749,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        tracep->fullCData(oldp+2750,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        tracep->fullCData(oldp+2751,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        tracep->fullCData(oldp+2752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        tracep->fullCData(oldp+2753,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        tracep->fullCData(oldp+2754,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        tracep->fullCData(oldp+2755,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        tracep->fullCData(oldp+2756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        tracep->fullCData(oldp+2757,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        tracep->fullCData(oldp+2758,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        tracep->fullCData(oldp+2759,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        tracep->fullCData(oldp+2760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        tracep->fullCData(oldp+2761,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        tracep->fullCData(oldp+2762,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        tracep->fullCData(oldp+2763,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        tracep->fullCData(oldp+2764,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        tracep->fullCData(oldp+2765,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        tracep->fullCData(oldp+2766,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        tracep->fullCData(oldp+2767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        tracep->fullCData(oldp+2768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        tracep->fullCData(oldp+2769,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        tracep->fullCData(oldp+2770,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        tracep->fullCData(oldp+2771,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        tracep->fullCData(oldp+2772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        tracep->fullCData(oldp+2773,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        tracep->fullCData(oldp+2774,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        tracep->fullCData(oldp+2775,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        tracep->fullCData(oldp+2776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        tracep->fullCData(oldp+2777,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        tracep->fullCData(oldp+2778,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        tracep->fullCData(oldp+2779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        tracep->fullCData(oldp+2780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        tracep->fullCData(oldp+2781,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        tracep->fullCData(oldp+2782,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        tracep->fullCData(oldp+2783,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        tracep->fullCData(oldp+2784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        tracep->fullCData(oldp+2785,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        tracep->fullCData(oldp+2786,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        tracep->fullCData(oldp+2787,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        tracep->fullCData(oldp+2788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        tracep->fullCData(oldp+2789,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        tracep->fullCData(oldp+2790,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        tracep->fullCData(oldp+2791,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        tracep->fullCData(oldp+2792,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        tracep->fullCData(oldp+2793,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        tracep->fullCData(oldp+2794,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        tracep->fullCData(oldp+2795,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        tracep->fullCData(oldp+2796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        tracep->fullCData(oldp+2797,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        tracep->fullCData(oldp+2798,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        tracep->fullCData(oldp+2799,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        tracep->fullCData(oldp+2800,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        tracep->fullCData(oldp+2801,((0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U)))),6);
        tracep->fullWData(oldp+2802,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data),123);
        tracep->fullCData(oldp+2806,((0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U)))),6);
        tracep->fullQData(oldp+2807,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
        tracep->fullBit(oldp+2809,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_447) 
                                          >> 1U))));
        tracep->fullBit(oldp+2810,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                          >> 0x1aU))));
        tracep->fullQData(oldp+2811,((0xffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                            >> 2U)))),56);
        tracep->fullQData(oldp+2813,((((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                        >> 2U)))),64);
        tracep->fullCData(oldp+2815,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
        tracep->fullBit(oldp+2816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        tracep->fullBit(oldp+2817,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullBit(oldp+2818,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
        tracep->fullBit(oldp+2819,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
        tracep->fullQData(oldp+2820,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                       ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                       : 0ULL)),64);
        tracep->fullBit(oldp+2822,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+2823,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                       ? (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                       : 0ULL)),64);
        tracep->fullQData(oldp+2825,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
        tracep->fullQData(oldp+2827,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
        tracep->fullQData(oldp+2829,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
        tracep->fullBit(oldp+2831,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
        tracep->fullQData(oldp+2832,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
        tracep->fullBit(oldp+2834,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        tracep->fullQData(oldp+2835,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                       : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
        tracep->fullQData(oldp+2837,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                       : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
        tracep->fullQData(oldp+2839,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+2841,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+2842,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullBit(oldp+2843,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        tracep->fullQData(oldp+2844,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
        tracep->fullQData(oldp+2846,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+2848,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
                                               (3U 
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
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))),64);
        tracep->fullBit(oldp+2850,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+2851,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
        tracep->fullBit(oldp+2852,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        tracep->fullQData(oldp+2853,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        tracep->fullBit(oldp+2855,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                    & ((0U != (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))) 
                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        tracep->fullQData(oldp+2856,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
                                               (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullSData(oldp+2858,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                       ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+2859,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        tracep->fullCData(oldp+2860,(((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                       ? 0xbU : ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 3U
                                                  : 0U))),6);
        tracep->fullBit(oldp+2861,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        tracep->fullBit(oldp+2862,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        tracep->fullBit(oldp+2863,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        tracep->fullCData(oldp+2864,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullBit(oldp+2865,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        tracep->fullBit(oldp+2866,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                          >> 1U))));
        tracep->fullBit(oldp+2867,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                          >> 2U))));
        tracep->fullBit(oldp+2868,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                          >> 3U))));
        tracep->fullCData(oldp+2869,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+2870,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+2871,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+2873,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+2874,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+2875,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+2876,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+2877,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        tracep->fullBit(oldp+2878,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        tracep->fullBit(oldp+2879,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        tracep->fullBit(oldp+2880,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+2881,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+2882,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+2883,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        tracep->fullQData(oldp+2884,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+2886,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+2888,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
        tracep->fullBit(oldp+2890,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 1U)))));
        tracep->fullQData(oldp+2891,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+2893,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U)))));
        tracep->fullBit(oldp+2894,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U)))));
        tracep->fullQData(oldp+2895,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullQData(oldp+2897,(((1U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                       ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        tracep->fullWData(oldp+2899,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        tracep->fullBit(oldp+2902,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        tracep->fullBit(oldp+2903,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+2904,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp3302, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp3303, __Vtemp3302, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp3304[0U] = __Vtemp3303[0U];
        __Vtemp3304[1U] = __Vtemp3303[1U];
        __Vtemp3304[2U] = __Vtemp3303[2U];
        __Vtemp3304[3U] = (0x7fffffffU & __Vtemp3303[3U]);
        tracep->fullWData(oldp+2905,(__Vtemp3304),127);
        tracep->fullQData(oldp+2909,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                      >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+2911,(VL_SHIFTRS_QQI(64,64,6, 
                                                    ((1U 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+2913,(((1U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        tracep->fullCData(oldp+2915,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))),3);
        tracep->fullQData(oldp+2916,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
        tracep->fullBit(oldp+2918,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        tracep->fullBit(oldp+2919,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        tracep->fullBit(oldp+2920,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        tracep->fullQData(oldp+2921,(((2U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                       : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp3305[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp3305[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 0x20U));
        __Vtemp3305[2U] = 1U;
        tracep->fullWData(oldp+2923,(__Vtemp3305),65);
        tracep->fullQData(oldp+2926,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        tracep->fullWData(oldp+2928,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+2931,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        tracep->fullQData(oldp+2933,((((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+2935,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullBit(oldp+2936,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        tracep->fullBit(oldp+2937,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
        tracep->fullQData(oldp+2938,((((QData)((IData)(
                                                       ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
        tracep->fullQData(oldp+2940,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+2942,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+2944,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+2945,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+2946,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullCData(oldp+2947,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        tracep->fullQData(oldp+2948,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        tracep->fullQData(oldp+2950,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
        tracep->fullQData(oldp+2952,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+2954,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        tracep->fullQData(oldp+2955,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        tracep->fullBit(oldp+2957,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        tracep->fullWData(oldp+2958,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        tracep->fullBit(oldp+2962,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        tracep->fullBit(oldp+2963,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        tracep->fullQData(oldp+2964,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+2966,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+2967,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullBit(oldp+2968,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        tracep->fullQData(oldp+2969,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        tracep->fullBit(oldp+2971,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+2972,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullBit(oldp+2973,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
        tracep->fullWData(oldp+2974,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+2977,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+2980,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+2983,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+2986,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+2989,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+2992,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
        tracep->fullWData(oldp+2995,(__Vtemp3310),65);
        tracep->fullCData(oldp+2998,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+2999,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+3000,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+3001,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+3006,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp3313[0U] = 1U;
        __Vtemp3313[1U] = 0U;
        __Vtemp3313[2U] = 0U;
        __Vtemp3314[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp3314[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp3314[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp3315, __Vtemp3313, __Vtemp3314);
        tracep->fullBit(oldp+3007,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                             ^ __Vtemp3315[0U]) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                               ^ __Vtemp3315[1U])) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              ^ (1U 
                                                 & __Vtemp3315[2U]))))));
        tracep->fullBit(oldp+3008,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+3009,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullBit(oldp+3010,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        tracep->fullBit(oldp+3011,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                          >> 3U))));
        tracep->fullQData(oldp+3012,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullQData(oldp+3014,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        tracep->fullBit(oldp+3016,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))));
        tracep->fullBit(oldp+3017,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 1U))));
        VL_EXTEND_WQ(130,64, __Vtemp3327, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp3331[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            __Vtemp3331[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x1fU)))
                                ? 3U : 0U);
        } else {
            __Vtemp3331[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                                : __Vtemp3327[0U]);
            __Vtemp3331[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                           >> 0x20U))
                                : __Vtemp3327[1U]);
            __Vtemp3331[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x3fU)))
                                    ? 0xffffffffU : 0U)
                                : __Vtemp3327[2U]);
            __Vtemp3331[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x3fU)))
                                    ? 0xffffffffU : 0U)
                                : __Vtemp3327[3U]);
            __Vtemp3331[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x3fU)))
                                    ? 3U : 0U) : __Vtemp3327[4U]);
        }
        tracep->fullWData(oldp+3018,(__Vtemp3331),130);
        tracep->fullWData(oldp+3023,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
        tracep->fullWData(oldp+3026,(__Vtemp3333),67);
        tracep->fullCData(oldp+3029,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+3030,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+3033,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+3038,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+3043,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
        tracep->fullWData(oldp+3044,(__Vtemp3366),131);
        tracep->fullCData(oldp+3049,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullBit(oldp+3050,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+3051,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        tracep->fullQData(oldp+3052,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        tracep->fullBit(oldp+3054,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 4U))));
        tracep->fullQData(oldp+3055,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+3057,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+3059,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullQData(oldp+3061,(((7U == (7U & 
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
        tracep->fullBit(oldp+3063,((0x10U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+3064,((0x18U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+3065,((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullBit(oldp+3066,((8U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullBit(oldp+3067,(((0U == (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))) 
                                    | (8U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))))));
        tracep->fullCData(oldp+3068,(((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                       ? 0xbU : ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 3U
                                                  : 0U))),4);
        tracep->fullBit(oldp+3069,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+3070,(((0xffffffffffffff77ULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                      | (QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                     >> 7U)))
                                                          ? 0x88U
                                                          : 0x80U))))),64);
        tracep->fullCData(oldp+3072,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 7U))),5);
        tracep->fullCData(oldp+3073,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullCData(oldp+3074,(((0x33U == (0xfe00707fU 
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
        tracep->fullCData(oldp+3075,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
        tracep->fullCData(oldp+3076,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
        tracep->fullBit(oldp+3077,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
        tracep->fullBit(oldp+3078,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
        tracep->fullCData(oldp+3079,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullQData(oldp+3080,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
        tracep->fullQData(oldp+3082,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
        tracep->fullQData(oldp+3084,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
        tracep->fullQData(oldp+3086,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
        tracep->fullQData(oldp+3088,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
        tracep->fullQData(oldp+3090,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
        tracep->fullQData(oldp+3092,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
        tracep->fullQData(oldp+3094,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
        tracep->fullQData(oldp+3096,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
        tracep->fullQData(oldp+3098,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
        tracep->fullQData(oldp+3100,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
        tracep->fullQData(oldp+3102,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
        tracep->fullQData(oldp+3104,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
        tracep->fullQData(oldp+3106,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
        tracep->fullQData(oldp+3108,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
        tracep->fullQData(oldp+3110,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
        tracep->fullQData(oldp+3112,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
        tracep->fullQData(oldp+3114,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
        tracep->fullQData(oldp+3116,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
        tracep->fullQData(oldp+3118,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
        tracep->fullQData(oldp+3120,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
        tracep->fullQData(oldp+3122,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
        tracep->fullQData(oldp+3124,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
        tracep->fullQData(oldp+3126,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
        tracep->fullQData(oldp+3128,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
        tracep->fullQData(oldp+3130,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
        tracep->fullQData(oldp+3132,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
        tracep->fullQData(oldp+3134,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
        tracep->fullQData(oldp+3136,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
        tracep->fullQData(oldp+3138,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
        tracep->fullQData(oldp+3140,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
        tracep->fullQData(oldp+3142,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
        tracep->fullBit(oldp+3144,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+3145,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+3147,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+3149,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+3151,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+3153,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+3155,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+3157,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+3159,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+3161,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+3163,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                       : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+3165,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+3167,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+3169,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+3170,((0U == (0xffffU 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullBit(oldp+3171,((0x4000U == (0xffffU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullQData(oldp+3172,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                       ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                       : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+3174,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+3176,((((QData)((IData)(
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
        tracep->fullBit(oldp+3178,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+3179,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+3181,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+3182,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+3183,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+3184,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullIData(oldp+3185,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->fullBit(oldp+3186,(vlSelf->clock));
        tracep->fullBit(oldp+3187,(vlSelf->reset));
        tracep->fullBit(oldp+3188,(1U));
        __Vtemp3367[0U] = 0U;
        __Vtemp3367[1U] = 0U;
        __Vtemp3367[2U] = 0U;
        __Vtemp3367[3U] = 0U;
        tracep->fullWData(oldp+3189,(__Vtemp3367),128);
        __Vtemp3368[0U] = 0xffffffffU;
        __Vtemp3368[1U] = 0xffffffffU;
        __Vtemp3368[2U] = 0xffffffffU;
        __Vtemp3368[3U] = 0xffffffffU;
        tracep->fullWData(oldp+3193,(__Vtemp3368),128);
    }
}
