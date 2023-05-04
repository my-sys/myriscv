// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_soc__Syms.h"


VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->pushNamePrefix("riscv_soc ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+866,"core_clock", false,-1);
    tracep->declBit(c+867,"core_reset", false,-1);
    tracep->declBit(c+1,"core_io_axi_bus_aw_ready", false,-1);
    tracep->declBit(c+2,"core_io_axi_bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"core_io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"core_io_axi_bus_w_ready", false,-1);
    tracep->declBit(c+6,"core_io_axi_bus_w_valid", false,-1);
    tracep->declQuad(c+7,"core_io_axi_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"core_io_axi_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"core_io_axi_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+11,"core_io_axi_bus_b_valid", false,-1);
    tracep->declBit(c+12,"core_io_axi_bus_ar_ready", false,-1);
    tracep->declBit(c+13,"core_io_axi_bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"core_io_axi_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"core_io_axi_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"core_io_axi_bus_r_valid", false,-1);
    tracep->declQuad(c+18,"core_io_axi_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"core_io_axi_bus_r_bits_rlast", false,-1);
    tracep->declBus(c+21,"core_io_isram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"core_io_isram_wen_0", false,-1);
    tracep->declBit(c+23,"core_io_isram_wen_1", false,-1);
    tracep->declArray(c+24,"core_io_isram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"core_io_isram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"core_io_isram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"core_io_isram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"core_io_isram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"core_io_isram_rdata_3", false,-1, 127,0);
    tracep->declBus(c+48,"core_io_dsram_addr", false,-1, 5,0);
    tracep->declBit(c+49,"core_io_dsram_wen_0", false,-1);
    tracep->declBit(c+50,"core_io_dsram_wen_1", false,-1);
    tracep->declArray(c+51,"core_io_dsram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"core_io_dsram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+59,"core_io_dsram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"core_io_dsram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+67,"core_io_dsram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+71,"core_io_dsram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+75,"core_io_dsram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+866,"axi_ram_clock", false,-1);
    tracep->declBit(c+867,"axi_ram_reset", false,-1);
    tracep->declBit(c+1,"axi_ram_io_ram_bus_aw_ready", false,-1);
    tracep->declBit(c+2,"axi_ram_io_ram_bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"axi_ram_io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"axi_ram_io_ram_bus_w_ready", false,-1);
    tracep->declBit(c+6,"axi_ram_io_ram_bus_w_valid", false,-1);
    tracep->declQuad(c+7,"axi_ram_io_ram_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"axi_ram_io_ram_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"axi_ram_io_ram_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+11,"axi_ram_io_ram_bus_b_valid", false,-1);
    tracep->declBit(c+12,"axi_ram_io_ram_bus_ar_ready", false,-1);
    tracep->declBit(c+13,"axi_ram_io_ram_bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"axi_ram_io_ram_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"axi_ram_io_ram_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"axi_ram_io_ram_bus_r_valid", false,-1);
    tracep->declQuad(c+18,"axi_ram_io_ram_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"axi_ram_io_ram_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+866,"sram0_clock", false,-1);
    tracep->declBit(c+867,"sram0_reset", false,-1);
    tracep->declBus(c+21,"sram0_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram0_io_wen", false,-1);
    tracep->declArray(c+868,"sram0_io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"sram0_io_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"sram0_io_rdata", false,-1, 127,0);
    tracep->declBit(c+866,"sram1_clock", false,-1);
    tracep->declBit(c+867,"sram1_reset", false,-1);
    tracep->declBus(c+21,"sram1_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram1_io_wen", false,-1);
    tracep->declArray(c+868,"sram1_io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"sram1_io_wdata", false,-1, 127,0);
    tracep->declArray(c+36,"sram1_io_rdata", false,-1, 127,0);
    tracep->declBit(c+866,"sram2_clock", false,-1);
    tracep->declBit(c+867,"sram2_reset", false,-1);
    tracep->declBus(c+21,"sram2_io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"sram2_io_wen", false,-1);
    tracep->declArray(c+868,"sram2_io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"sram2_io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"sram2_io_rdata", false,-1, 127,0);
    tracep->declBit(c+866,"sram3_clock", false,-1);
    tracep->declBit(c+867,"sram3_reset", false,-1);
    tracep->declBus(c+21,"sram3_io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"sram3_io_wen", false,-1);
    tracep->declArray(c+868,"sram3_io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"sram3_io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"sram3_io_rdata", false,-1, 127,0);
    tracep->declBit(c+866,"sram4_clock", false,-1);
    tracep->declBit(c+867,"sram4_reset", false,-1);
    tracep->declBus(c+48,"sram4_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram4_io_wen", false,-1);
    tracep->declArray(c+51,"sram4_io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"sram4_io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"sram4_io_rdata", false,-1, 127,0);
    tracep->declBit(c+866,"sram5_clock", false,-1);
    tracep->declBit(c+867,"sram5_reset", false,-1);
    tracep->declBus(c+48,"sram5_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram5_io_wen", false,-1);
    tracep->declArray(c+868,"sram5_io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"sram5_io_wdata", false,-1, 127,0);
    tracep->declArray(c+67,"sram5_io_rdata", false,-1, 127,0);
    tracep->declBit(c+866,"sram6_clock", false,-1);
    tracep->declBit(c+867,"sram6_reset", false,-1);
    tracep->declBus(c+48,"sram6_io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"sram6_io_wen", false,-1);
    tracep->declArray(c+51,"sram6_io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"sram6_io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"sram6_io_rdata", false,-1, 127,0);
    tracep->declBit(c+866,"sram7_clock", false,-1);
    tracep->declBit(c+867,"sram7_reset", false,-1);
    tracep->declBus(c+48,"sram7_io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"sram7_io_wen", false,-1);
    tracep->declArray(c+868,"sram7_io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"sram7_io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"sram7_io_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+1,"io_ram_bus_aw_ready", false,-1);
    tracep->declBit(c+2,"io_ram_bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"io_ram_bus_w_ready", false,-1);
    tracep->declBit(c+6,"io_ram_bus_w_valid", false,-1);
    tracep->declQuad(c+7,"io_ram_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_ram_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"io_ram_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+11,"io_ram_bus_b_valid", false,-1);
    tracep->declBit(c+12,"io_ram_bus_ar_ready", false,-1);
    tracep->declBit(c+13,"io_ram_bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"io_ram_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"io_ram_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"io_ram_bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_ram_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_ram_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+866,"mem_clock", false,-1);
    tracep->declQuad(c+79,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+13,"mem_rflag", false,-1);
    tracep->declQuad(c+81,"mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+83,"mem_wmask", false,-1, 63,0);
    tracep->declBit(c+85,"mem_wen", false,-1);
    tracep->declQuad(c+86,"reg_raddr", false,-1, 63,0);
    tracep->declBus(c+88,"reg_rlen", false,-1, 3,0);
    tracep->declBit(c+12,"reg_ar_ready", false,-1);
    tracep->declBit(c+17,"reg_r_valid", false,-1);
    tracep->declBit(c+89,"reg_r_state", false,-1);
    tracep->declQuad(c+81,"reg_w_addr", false,-1, 63,0);
    tracep->declBit(c+90,"reg_is_w", false,-1);
    tracep->declBit(c+1,"reg_aw_ready", false,-1);
    tracep->declBit(c+5,"reg_w_ready", false,-1);
    tracep->declBit(c+11,"reg_b_valid", false,-1);
    tracep->declBus(c+91,"mem_io_wmask_lo", false,-1, 31,0);
    tracep->declBus(c+92,"mem_io_wmask_hi", false,-1, 31,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declQuad(c+79,"raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"rdata", false,-1, 63,0);
    tracep->declBit(c+13,"rflag", false,-1);
    tracep->declQuad(c+81,"waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"wdata", false,-1, 63,0);
    tracep->declQuad(c+83,"wmask", false,-1, 63,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->declQuad(c+93,"t_rdata", false,-1, 63,0);
    tracep->declQuad(c+18,"tem_data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+1,"io_axi_bus_aw_ready", false,-1);
    tracep->declBit(c+2,"io_axi_bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"io_axi_bus_w_ready", false,-1);
    tracep->declBit(c+6,"io_axi_bus_w_valid", false,-1);
    tracep->declQuad(c+7,"io_axi_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_axi_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"io_axi_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+11,"io_axi_bus_b_valid", false,-1);
    tracep->declBit(c+12,"io_axi_bus_ar_ready", false,-1);
    tracep->declBit(c+13,"io_axi_bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"io_axi_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"io_axi_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"io_axi_bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_axi_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_axi_bus_r_bits_rlast", false,-1);
    tracep->declBus(c+21,"io_isram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_isram_wen_0", false,-1);
    tracep->declBit(c+23,"io_isram_wen_1", false,-1);
    tracep->declArray(c+24,"io_isram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"io_isram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_isram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"io_isram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"io_isram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"io_isram_rdata_3", false,-1, 127,0);
    tracep->declBus(c+48,"io_dsram_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_dsram_wen_0", false,-1);
    tracep->declBit(c+50,"io_dsram_wen_1", false,-1);
    tracep->declArray(c+51,"io_dsram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_dsram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+59,"io_dsram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"io_dsram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+67,"io_dsram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+71,"io_dsram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+75,"io_dsram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+866,"i_cache_clock", false,-1);
    tracep->declBit(c+867,"i_cache_reset", false,-1);
    tracep->declBit(c+95,"i_cache_io_flush", false,-1);
    tracep->declBit(c+96,"i_cache_io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+97,"i_cache_io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+98,"i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"i_cache_io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+101,"i_cache_io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+102,"i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+106,"i_cache_io_is_fence_i", false,-1);
    tracep->declBus(c+21,"i_cache_io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"i_cache_io_sram_wen_0", false,-1);
    tracep->declBit(c+23,"i_cache_io_sram_wen_1", false,-1);
    tracep->declArray(c+24,"i_cache_io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"i_cache_io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"i_cache_io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"i_cache_io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"i_cache_io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"i_cache_io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+107,"i_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"i_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"i_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+866,"d_cache_clock", false,-1);
    tracep->declBit(c+867,"d_cache_reset", false,-1);
    tracep->declBit(c+112,"d_cache_io_cpu_valid", false,-1);
    tracep->declQuad(c+113,"d_cache_io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"d_cache_io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"d_cache_io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"d_cache_io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+121,"d_cache_io_cpu_ready", false,-1);
    tracep->declBus(c+48,"d_cache_io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+49,"d_cache_io_sram_wen_0", false,-1);
    tracep->declBit(c+50,"d_cache_io_sram_wen_1", false,-1);
    tracep->declArray(c+51,"d_cache_io_sram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"d_cache_io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+59,"d_cache_io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"d_cache_io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+67,"d_cache_io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+71,"d_cache_io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+75,"d_cache_io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+122,"d_cache_io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+123,"d_cache_io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+124,"d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+126,"d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+128,"d_cache_io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+129,"d_cache_io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+130,"d_cache_io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+131,"d_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+132,"d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+134,"d_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+135,"d_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+866,"cross_bar_clock", false,-1);
    tracep->declBit(c+867,"cross_bar_reset", false,-1);
    tracep->declBit(c+107,"cross_bar_io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"cross_bar_io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+122,"cross_bar_io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+123,"cross_bar_io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+124,"cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+126,"cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+128,"cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+130,"cross_bar_io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+131,"cross_bar_io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+132,"cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+134,"cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+135,"cross_bar_io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+136,"cross_bar_io_bus1_valid", false,-1);
    tracep->declQuad(c+98,"cross_bar_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"cross_bar_io_bus1_ready", false,-1);
    tracep->declBit(c+138,"cross_bar_io_bus2_valid", false,-1);
    tracep->declQuad(c+113,"cross_bar_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"cross_bar_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+139,"cross_bar_io_bus2_ready", false,-1);
    tracep->declBit(c+1,"cross_bar_io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+2,"cross_bar_io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"cross_bar_io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+6,"cross_bar_io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+7,"cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+872,"cross_bar_io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"cross_bar_io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"cross_bar_io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"cross_bar_io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"cross_bar_io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+140,"cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+141,"cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"cross_bar_1_io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+142,"cross_bar_1_io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+143,"cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+145,"cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+147,"cross_bar_1_io_wb_valid", false,-1);
    tracep->declQuad(c+113,"cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"cross_bar_1_io_wb_bits_is_w", false,-1);
    tracep->declBit(c+150,"cross_bar_1_io_wb_ready", false,-1);
    tracep->declBit(c+96,"cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+97,"cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+98,"cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+101,"cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+102,"cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+112,"cross_bar_1_io_DCache_valid", false,-1);
    tracep->declQuad(c+113,"cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"cross_bar_1_io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+121,"cross_bar_1_io_DCache_ready", false,-1);
    tracep->declBit(c+136,"cross_bar_1_io_bus1_valid", false,-1);
    tracep->declQuad(c+98,"cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"cross_bar_1_io_bus1_ready", false,-1);
    tracep->declBit(c+138,"cross_bar_1_io_bus2_valid", false,-1);
    tracep->declQuad(c+113,"cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"cross_bar_1_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+139,"cross_bar_1_io_bus2_ready", false,-1);
    tracep->declBit(c+151,"cross_bar_1_io_clint_bus_valid", false,-1);
    tracep->declQuad(c+113,"cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+152,"cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+120,"cross_bar_1_io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+154,"cross_bar_1_io_clint_bus_ready", false,-1);
    tracep->declBit(c+866,"fetch_clock", false,-1);
    tracep->declBit(c+867,"fetch_reset", false,-1);
    tracep->declBit(c+155,"fetch_io_br_info_valid", false,-1);
    tracep->declBit(c+156,"fetch_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"fetch_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"fetch_io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"fetch_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"fetch_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+165,"fetch_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+167,"fetch_io_flush", false,-1);
    tracep->declBit(c+140,"fetch_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+141,"fetch_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"fetch_io_cpu_data_ready", false,-1);
    tracep->declBit(c+142,"fetch_io_cpu_data_valid", false,-1);
    tracep->declQuad(c+143,"fetch_io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+145,"fetch_io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+168,"fetch_io_put_pc_ready", false,-1);
    tracep->declBit(c+169,"fetch_io_put_pc_valid", false,-1);
    tracep->declBus(c+170,"fetch_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"fetch_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"fetch_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+95,"fetch_io_out_flush", false,-1);
    tracep->declBit(c+866,"execute_clock", false,-1);
    tracep->declBit(c+867,"execute_reset", false,-1);
    tracep->declBit(c+168,"execute_io_op_datas_ready", false,-1);
    tracep->declBit(c+174,"execute_io_op_datas_valid", false,-1);
    tracep->declBus(c+175,"execute_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+176,"execute_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+177,"execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+178,"execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+180,"execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"execute_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"execute_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+186,"execute_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+187,"execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+188,"execute_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+189,"execute_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+190,"execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+191,"execute_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+193,"execute_io_irq_time_irq", false,-1);
    tracep->declBit(c+194,"execute_io_irq_soft_irq", false,-1);
    tracep->declQuad(c+195,"execute_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+197,"execute_io_mie", false,-1, 63,0);
    tracep->declQuad(c+199,"execute_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+201,"execute_io_mtvec", false,-1, 63,0);
    tracep->declBit(c+203,"execute_io_wb_valid", false,-1);
    tracep->declBus(c+204,"execute_io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+205,"execute_io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+207,"execute_io_csr_valid", false,-1);
    tracep->declBus(c+208,"execute_io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+209,"execute_io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+211,"execute_io_csr_except_is_except", false,-1);
    tracep->declBit(c+212,"execute_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+213,"execute_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+214,"execute_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+215,"execute_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"execute_io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+219,"execute_io_commit", false,-1);
    tracep->declBus(c+220,"execute_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+221,"execute_io_difftest_peripheral", false,-1);
    tracep->declQuad(c+165,"execute_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+167,"execute_io_flush", false,-1);
    tracep->declBit(c+106,"execute_io_fence_i", false,-1);
    tracep->declBit(c+155,"execute_io_br_info_valid", false,-1);
    tracep->declBit(c+156,"execute_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"execute_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"execute_io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"execute_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"execute_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+147,"execute_io_bus_valid", false,-1);
    tracep->declQuad(c+113,"execute_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"execute_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"execute_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"execute_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"execute_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+150,"execute_io_bus_ready", false,-1);
    tracep->declBit(c+866,"decode_clock", false,-1);
    tracep->declBit(c+867,"decode_reset", false,-1);
    tracep->declBit(c+168,"decode_io_get_inst_ready", false,-1);
    tracep->declBit(c+169,"decode_io_get_inst_valid", false,-1);
    tracep->declBus(c+170,"decode_io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"decode_io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"decode_io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+222,"decode_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+223,"decode_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+225,"decode_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"decode_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+228,"decode_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+229,"decode_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+168,"decode_io_op_datas_ready", false,-1);
    tracep->declBit(c+174,"decode_io_op_datas_valid", false,-1);
    tracep->declBus(c+175,"decode_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+176,"decode_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+177,"decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+178,"decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+180,"decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"decode_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"decode_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+186,"decode_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+187,"decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+188,"decode_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+189,"decode_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+190,"decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+191,"decode_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+167,"decode_io_flush", false,-1);
    tracep->declBit(c+866,"commit_clock", false,-1);
    tracep->declBit(c+867,"commit_reset", false,-1);
    tracep->declBus(c+222,"commit_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+223,"commit_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+225,"commit_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"commit_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+203,"commit_io_normal_wb_valid", false,-1);
    tracep->declBus(c+204,"commit_io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+205,"commit_io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+228,"commit_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+229,"commit_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+207,"commit_io_csr_wb_valid", false,-1);
    tracep->declBus(c+208,"commit_io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+209,"commit_io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+211,"commit_io_csr_except_is_except", false,-1);
    tracep->declBit(c+212,"commit_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+213,"commit_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+214,"commit_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+215,"commit_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"commit_io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+201,"commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+199,"commit_io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+197,"commit_io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+219,"commit_io_commit", false,-1);
    tracep->declBus(c+220,"commit_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+221,"commit_io_difftest_peripheral", false,-1);
    tracep->declBit(c+866,"clint_de_clock", false,-1);
    tracep->declBit(c+867,"clint_de_reset", false,-1);
    tracep->declBit(c+151,"clint_de_io_valid", false,-1);
    tracep->declQuad(c+113,"clint_de_io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"clint_de_io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+152,"clint_de_io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+120,"clint_de_io_bits_is_w", false,-1);
    tracep->declBit(c+154,"clint_de_io_ready", false,-1);
    tracep->declBit(c+194,"clint_de_io_soft_irq", false,-1);
    tracep->declBit(c+193,"clint_de_io_time_irq", false,-1);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+151,"io_valid", false,-1);
    tracep->declQuad(c+113,"io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+152,"io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+120,"io_bits_is_w", false,-1);
    tracep->declBit(c+154,"io_ready", false,-1);
    tracep->declBit(c+194,"io_soft_irq", false,-1);
    tracep->declBit(c+193,"io_time_irq", false,-1);
    tracep->declBit(c+194,"reg_msip", false,-1);
    tracep->declQuad(c+231,"reg_mtime", false,-1, 63,0);
    tracep->declQuad(c+233,"reg_mtimecmp", false,-1, 63,0);
    tracep->declBit(c+154,"reg_ready", false,-1);
    tracep->declQuad(c+152,"red_rdata", false,-1, 63,0);
    tracep->declBit(c+235,"reg_state", false,-1);
    tracep->declBit(c+236,"is_misp", false,-1);
    tracep->declBit(c+237,"is_mtimecmp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("commit ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+222,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+223,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+225,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+203,"io_normal_wb_valid", false,-1);
    tracep->declBus(c+204,"io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+205,"io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+228,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+229,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+207,"io_csr_wb_valid", false,-1);
    tracep->declBus(c+208,"io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+209,"io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+211,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+212,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+213,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+214,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+215,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+201,"io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+199,"io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+197,"io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+219,"io_commit", false,-1);
    tracep->declBus(c+220,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+221,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+866,"csr_reg_clock", false,-1);
    tracep->declBit(c+867,"csr_reg_reset", false,-1);
    tracep->declBus(c+208,"csr_reg_io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+209,"csr_reg_io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+207,"csr_reg_io_in_w_csr_en", false,-1);
    tracep->declQuad(c+217,"csr_reg_io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+215,"csr_reg_io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+212,"csr_reg_io_in_time_irq", false,-1);
    tracep->declBit(c+213,"csr_reg_io_in_soft_irq", false,-1);
    tracep->declBus(c+238,"csr_reg_io_in_exception", false,-1, 4,0);
    tracep->declBit(c+211,"csr_reg_io_in_is_exception", false,-1);
    tracep->declBit(c+219,"csr_reg_io_in_commit", false,-1);
    tracep->declBus(c+228,"csr_reg_io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+229,"csr_reg_io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+201,"csr_reg_io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+199,"csr_reg_io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"csr_reg_io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+197,"csr_reg_io_r_csr_mie", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+239+i*2,"reg_file", true,(i+0), 63,0);
    }
    tracep->declQuad(c+303,"read_rs1_from_file", false,-1, 63,0);
    tracep->declQuad(c+305,"read_rs2_from_file", false,-1, 63,0);
    tracep->declQuad(c+307,"difftest_commit", false,-1, 63,0);
    tracep->declQuad(c+309,"difftest_inst", false,-1, 63,0);
    tracep->declQuad(c+311,"difftest_pc", false,-1, 63,0);
    tracep->declQuad(c+313,"inst_counter", false,-1, 63,0);
    tracep->declQuad(c+315,"difftest_irq", false,-1, 63,0);
    tracep->declQuad(c+317,"difftest_peripheral", false,-1, 63,0);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+208,"io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+209,"io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+207,"io_in_w_csr_en", false,-1);
    tracep->declQuad(c+217,"io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+215,"io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+212,"io_in_time_irq", false,-1);
    tracep->declBit(c+213,"io_in_soft_irq", false,-1);
    tracep->declBus(c+238,"io_in_exception", false,-1, 4,0);
    tracep->declBit(c+211,"io_in_is_exception", false,-1);
    tracep->declBit(c+219,"io_in_commit", false,-1);
    tracep->declBus(c+228,"io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+229,"io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+201,"io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+199,"io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+197,"io_r_csr_mie", false,-1, 63,0);
    tracep->declBit(c+319,"irq", false,-1);
    tracep->declQuad(c+320,"reg_mstatus", false,-1, 63,0);
    tracep->declQuad(c+322,"reg_mie", false,-1, 63,0);
    tracep->declQuad(c+324,"reg_mtvec", false,-1, 63,0);
    tracep->declQuad(c+326,"reg_mscratch", false,-1, 63,0);
    tracep->declQuad(c+328,"reg_mepc", false,-1, 63,0);
    tracep->declQuad(c+330,"reg_mcause", false,-1, 63,0);
    tracep->declQuad(c+332,"reg_mtval", false,-1, 63,0);
    tracep->declQuad(c+334,"reg_mcycle", false,-1, 63,0);
    tracep->declQuad(c+336,"reg_minstret", false,-1, 63,0);
    tracep->declQuad(c+338,"csr_rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cross_bar ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+107,"io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+122,"io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+123,"io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+124,"io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+126,"io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+128,"io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+130,"io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+131,"io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+132,"io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+134,"io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+135,"io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+136,"io_bus1_valid", false,-1);
    tracep->declQuad(c+98,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"io_bus1_ready", false,-1);
    tracep->declBit(c+138,"io_bus2_valid", false,-1);
    tracep->declQuad(c+113,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+139,"io_bus2_ready", false,-1);
    tracep->declBit(c+1,"io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+2,"io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+6,"io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+7,"io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+872,"io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+340,"w_locked", false,-1);
    tracep->declBus(c+341,"w_lockId", false,-1, 1,0);
    tracep->declBus(c+342,"w_chosen", false,-1, 1,0);
    tracep->declBus(c+343,"reg_r_cnt", false,-1, 1,0);
    tracep->declBit(c+344,"r_locked", false,-1);
    tracep->declBus(c+345,"r_lockId", false,-1, 1,0);
    tracep->declBus(c+346,"r_chosen", false,-1, 1,0);
    tracep->declBit(c+347,"reg_aw_ok", false,-1);
    tracep->declBit(c+348,"reg_ar_ok", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cross_bar_1 ");
    tracep->declBit(c+140,"io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+141,"io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+142,"io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+143,"io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+145,"io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+147,"io_wb_valid", false,-1);
    tracep->declQuad(c+113,"io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_wb_bits_is_w", false,-1);
    tracep->declBit(c+150,"io_wb_ready", false,-1);
    tracep->declBit(c+96,"io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+97,"io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+98,"io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+101,"io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+102,"io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+112,"io_DCache_valid", false,-1);
    tracep->declQuad(c+113,"io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+121,"io_DCache_ready", false,-1);
    tracep->declBit(c+136,"io_bus1_valid", false,-1);
    tracep->declQuad(c+98,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"io_bus1_ready", false,-1);
    tracep->declBit(c+138,"io_bus2_valid", false,-1);
    tracep->declQuad(c+113,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+139,"io_bus2_ready", false,-1);
    tracep->declBit(c+151,"io_clint_bus_valid", false,-1);
    tracep->declQuad(c+113,"io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+152,"io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+120,"io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+154,"io_clint_bus_ready", false,-1);
    tracep->declBit(c+349,"fetch_low_address", false,-1);
    tracep->declBit(c+350,"low_address", false,-1);
    tracep->declBit(c+351,"not_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+112,"io_cpu_valid", false,-1);
    tracep->declQuad(c+113,"io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+121,"io_cpu_ready", false,-1);
    tracep->declBus(c+48,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_sram_wen_0", false,-1);
    tracep->declBit(c+50,"io_sram_wen_1", false,-1);
    tracep->declArray(c+51,"io_sram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+59,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+67,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+71,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+75,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+122,"io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+123,"io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+124,"io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+126,"io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+128,"io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+129,"io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+130,"io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+131,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+132,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+134,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+135,"io_cache_bus_r_ready", false,-1);
    tracep->declQuad(c+352,"Tag", false,-1, 53,0);
    tracep->declBus(c+354,"Index", false,-1, 5,0);
    tracep->declBus(c+355,"Offset", false,-1, 3,0);
    tracep->declQuad(c+117,"wdata", false,-1, 63,0);
    tracep->declBus(c+119,"wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"is_w", false,-1);
    tracep->declBus(c+356,"reg_cache_state", false,-1, 1,0);
    tracep->declQuad(c+357,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+359,"reg_wstrb", false,-1, 7,0);
    tracep->declBit(c+360,"reg_is_w", false,-1);
    tracep->declQuad(c+361,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+363,"reg_index", false,-1, 5,0);
    tracep->declBus(c+364,"reg_offset", false,-1, 3,0);
    tracep->declBit(c+121,"reg_ready", false,-1);
    tracep->declQuad(c+115,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+365,"reg_cache_write", false,-1);
    tracep->declBus(c+366,"reg_cache_wstrb", false,-1, 15,0);
    tracep->declArray(c+59,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+367,"reg_chosen_tag", false,-1);
    tracep->declBus(c+873,"cache_idle", false,-1, 1,0);
    tracep->declBus(c+874,"read_cache", false,-1, 1,0);
    tracep->declBus(c+875,"cache_and_bus", false,-1, 1,0);
    tracep->declBus(c+876,"cache_end", false,-1, 1,0);
    tracep->declArray(c+368,"cache_mask", false,-1, 127,0);
    tracep->declArray(c+372,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+376,"is_sram0_write", false,-1);
    tracep->declBit(c+377,"is_sram2_write", false,-1);
    tracep->declBit(c+877,"clear_cache", false,-1);
    tracep->declQuad(c+378,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+380,"reg_sram0_dirty", false,-1, 63,0);
    tracep->declQuad(c+382,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+384,"neg_chose_bit", false,-1, 63,0);
    tracep->declQuad(c+386,"reg_sram2_valid", false,-1, 63,0);
    tracep->declQuad(c+388,"reg_sram2_dirty", false,-1, 63,0);
    tracep->declQuad(c+132,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+131,"reg_r_valid", false,-1);
    tracep->declQuad(c+124,"reg_w_waddr", false,-1, 63,0);
    tracep->declQuad(c+126,"reg_w_wdata", false,-1, 63,0);
    tracep->declBit(c+128,"reg_w_wlast", false,-1);
    tracep->declBit(c+123,"reg_w_valid", false,-1);
    tracep->declBit(c+129,"reg_b_ready", false,-1);
    tracep->declQuad(c+390,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+392,"tag_2", false,-1, 53,0);
    tracep->declBit(c+394,"hit_0", false,-1);
    tracep->declBit(c+395,"hit_2", false,-1);
    tracep->declBit(c+396,"tag_valid_0", false,-1);
    tracep->declBit(c+397,"tag_valid_2", false,-1);
    tracep->declBit(c+398,"tag_dirty_0", false,-1);
    tracep->declBit(c+399,"tag_dirty_2", false,-1);
    tracep->declArray(c+63,"rdata_0", false,-1, 127,0);
    tracep->declArray(c+71,"rdata_2", false,-1, 127,0);
    tracep->declQuad(c+400,"reg_lru_2", false,-1, 63,0);
    tracep->declBit(c+402,"LRU_2", false,-1);
    tracep->declBit(c+403,"reg_start_operation", false,-1);
    tracep->declBus(c+404,"reg_cnt", false,-1, 1,0);
    tracep->declBit(c+405,"reg_rbus_finish", false,-1);
    tracep->declBit(c+406,"reg_wbus_finish", false,-1);
    tracep->declQuad(c+407,"temp_addr", false,-1, 63,0);
    tracep->declBit(c+409,"io_cache_bus_r_fire", false,-1);
    tracep->declBit(c+410,"io_cache_bus_b_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+168,"io_get_inst_ready", false,-1);
    tracep->declBit(c+169,"io_get_inst_valid", false,-1);
    tracep->declBus(c+170,"io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+222,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+223,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+225,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+228,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+229,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+168,"io_op_datas_ready", false,-1);
    tracep->declBit(c+174,"io_op_datas_valid", false,-1);
    tracep->declBus(c+175,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+176,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+177,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+178,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+180,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+186,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+187,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+188,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+189,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+190,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+191,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+167,"io_flush", false,-1);
    tracep->declBit(c+174,"reg_valid", false,-1);
    tracep->declBus(c+175,"reg_opType", false,-1, 2,0);
    tracep->declBus(c+176,"reg_exuType", false,-1, 6,0);
    tracep->declBus(c+177,"reg_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+178,"reg_rs1_data", false,-1, 63,0);
    tracep->declBus(c+180,"reg_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"reg_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"reg_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"reg_pc", false,-1, 63,0);
    tracep->declBus(c+186,"reg_inst", false,-1, 31,0);
    tracep->declBus(c+187,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+188,"reg_dest_is_reg", false,-1);
    tracep->declBus(c+190,"reg_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+191,"reg_csr_data", false,-1, 63,0);
    tracep->declBit(c+189,"reg_is_pre", false,-1);
    tracep->declBus(c+225,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+222,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+228,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+411,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+412,"fun", false,-1, 2,0);
    tracep->declBus(c+413,"fun_exuType", false,-1, 4,0);
    tracep->declBus(c+414,"fun_op", false,-1, 2,0);
    tracep->declBit(c+415,"temp_system_is_pri", false,-1);
    tracep->declBit(c+416,"temp_system_is_imm", false,-1);
    tracep->declBit(c+417,"temp_system_rs1", false,-1);
    tracep->declBus(c+418,"temp_system_1", false,-1, 6,0);
    tracep->declBus(c+419,"temp_system_2", false,-1, 2,0);
    tracep->declBit(c+420,"temp_system_3", false,-1);
    tracep->declBit(c+421,"temp_system_4", false,-1);
    tracep->declBus(c+422,"temp_mem_itype", false,-1, 3,0);
    tracep->declBit(c+423,"temp_mem_dest", false,-1);
    tracep->declBit(c+423,"temp_op_is_imm", false,-1);
    tracep->declBit(c+424,"is_sr", false,-1);
    tracep->declBus(c+425,"temp_kk", false,-1, 5,0);
    tracep->declBus(c+426,"temp_op_exuType", false,-1, 5,0);
    tracep->declBus(c+427,"temp_op_itype", false,-1, 3,0);
    tracep->declBit(c+428,"temp_op_rs2", false,-1);
    tracep->declBus(c+429,"temp_op", false,-1, 1,0);
    tracep->declBus(c+430,"temp_jal_jalr_1", false,-1, 6,0);
    tracep->declBus(c+431,"temp_jal_jalr_2", false,-1, 3,0);
    tracep->declBit(c+432,"temp_jal_jalr_4", false,-1);
    tracep->declBus(c+433,"instType", false,-1, 3,0);
    tracep->declBit(c+434,"dest_is_reg", false,-1);
    tracep->declBit(c+435,"rs1_is_reg", false,-1);
    tracep->declBit(c+436,"rs2_is_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+168,"io_op_datas_ready", false,-1);
    tracep->declBit(c+174,"io_op_datas_valid", false,-1);
    tracep->declBus(c+175,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+176,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+177,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+178,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+180,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+186,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+187,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+188,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+189,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+190,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+191,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+193,"io_irq_time_irq", false,-1);
    tracep->declBit(c+194,"io_irq_soft_irq", false,-1);
    tracep->declQuad(c+195,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+197,"io_mie", false,-1, 63,0);
    tracep->declQuad(c+199,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+201,"io_mtvec", false,-1, 63,0);
    tracep->declBit(c+203,"io_wb_valid", false,-1);
    tracep->declBus(c+204,"io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+205,"io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+207,"io_csr_valid", false,-1);
    tracep->declBus(c+208,"io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+209,"io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+211,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+212,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+213,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+214,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+215,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+219,"io_commit", false,-1);
    tracep->declBus(c+220,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+221,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+165,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+167,"io_flush", false,-1);
    tracep->declBit(c+106,"io_fence_i", false,-1);
    tracep->declBit(c+155,"io_br_info_valid", false,-1);
    tracep->declBit(c+156,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+147,"io_bus_valid", false,-1);
    tracep->declQuad(c+113,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+150,"io_bus_ready", false,-1);
    tracep->declBit(c+437,"alu_exu_io_valid", false,-1);
    tracep->declBit(c+189,"alu_exu_io_is_pre", false,-1);
    tracep->declBit(c+438,"alu_exu_io_br_info_valid", false,-1);
    tracep->declBit(c+439,"alu_exu_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+440,"alu_exu_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+442,"alu_exu_io_br_info_taken", false,-1);
    tracep->declQuad(c+443,"alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"alu_exu_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+175,"alu_exu_io_opType", false,-1, 2,0);
    tracep->declBus(c+176,"alu_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+445,"alu_exu_io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+447,"alu_exu_io_op_data2", false,-1, 63,0);
    tracep->declBus(c+183,"alu_exu_io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"alu_exu_io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+449,"alu_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+439,"alu_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+443,"alu_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+866,"mem_exu_clock", false,-1);
    tracep->declBit(c+867,"mem_exu_reset", false,-1);
    tracep->declBit(c+451,"mem_exu_io_valid", false,-1);
    tracep->declBus(c+176,"mem_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+445,"mem_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+447,"mem_exu_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"mem_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+452,"mem_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+454,"mem_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+455,"mem_exu_io_ready", false,-1);
    tracep->declBit(c+147,"mem_exu_io_bus_valid", false,-1);
    tracep->declQuad(c+113,"mem_exu_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"mem_exu_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"mem_exu_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"mem_exu_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+150,"mem_exu_io_bus_ready", false,-1);
    tracep->declBit(c+221,"mem_exu_io_difftest_peripheral", false,-1);
    tracep->declBit(c+866,"mu_exu_clock", false,-1);
    tracep->declBit(c+867,"mu_exu_reset", false,-1);
    tracep->declBit(c+456,"mu_exu_io_valid", false,-1);
    tracep->declBus(c+176,"mu_exu_io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+445,"mu_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+447,"mu_exu_io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+457,"mu_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+459,"mu_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+460,"mu_exu_io_ready", false,-1);
    tracep->declBit(c+461,"system_exu_io_valid", false,-1);
    tracep->declBus(c+176,"system_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+462,"system_exu_io_csr_data", false,-1, 63,0);
    tracep->declBus(c+190,"system_exu_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+183,"system_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+445,"system_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+199,"system_exu_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"system_exu_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+462,"system_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+464,"system_exu_io_csr_is_w", false,-1);
    tracep->declQuad(c+465,"system_exu_io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+467,"system_exu_io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+468,"system_exu_io_is_except", false,-1);
    tracep->declBus(c+469,"system_exu_io_exception", false,-1, 5,0);
    tracep->declBit(c+470,"system_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+199,"system_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+471,"in_data_valid", false,-1);
    tracep->declBit(c+168,"ready", false,-1);
    tracep->declBus(c+472,"reg_valid", false,-1, 3,0);
    tracep->declBit(c+473,"reg_alu_valid", false,-1);
    tracep->declBit(c+474,"reg_mem_valid", false,-1);
    tracep->declBit(c+475,"reg_mu_valid", false,-1);
    tracep->declBit(c+476,"reg_system_valid", false,-1);
    tracep->declBus(c+477,"valid", false,-1, 3,0);
    tracep->declBit(c+478,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+479,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+155,"reg_br_valid", false,-1);
    tracep->declBit(c+156,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+157,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"reg_taken", false,-1);
    tracep->declQuad(c+160,"reg_br_next_pc", false,-1, 63,0);
    tracep->declQuad(c+209,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+208,"reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+481,"reg_csr_is_w", false,-1);
    tracep->declBit(c+482,"reg_is_except", false,-1);
    tracep->declBus(c+214,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+483,"reg_is_time_irq", false,-1);
    tracep->declBit(c+484,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+215,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"reg_except_pc", false,-1, 63,0);
    tracep->declBit(c+485,"time_irq", false,-1);
    tracep->declBit(c+486,"soft_irq", false,-1);
    tracep->declBit(c+487,"irq", false,-1);
    tracep->declQuad(c+165,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+488,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+489,"reg_fence_i", false,-1);
    tracep->declBit(c+490,"reg_commit", false,-1);
    tracep->declBus(c+220,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+437,"io_valid", false,-1);
    tracep->declBit(c+189,"io_is_pre", false,-1);
    tracep->declBit(c+438,"io_br_info_valid", false,-1);
    tracep->declBit(c+439,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+440,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+442,"io_br_info_taken", false,-1);
    tracep->declQuad(c+443,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+175,"io_opType", false,-1, 2,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+445,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+447,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+183,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+449,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+439,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+443,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+491,"is_32", false,-1);
    tracep->declQuad(c+492,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+494,"op_data2", false,-1, 63,0);
    tracep->declQuad(c+496,"op_imm", false,-1, 63,0);
    tracep->declBit(c+498,"rs2_is_imm", false,-1);
    tracep->declQuad(c+499,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+501,"rs1_is_pc", false,-1);
    tracep->declBit(c+502,"is_sra", false,-1);
    tracep->declQuad(c+503,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+505,"temp_rs2_data", false,-1, 63,0);
    tracep->declArray(c+507,"add_sub_result", false,-1, 64,0);
    tracep->declBit(c+510,"u_rs1_l_rs2", false,-1);
    tracep->declBit(c+511,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+512,"shift_rs2_data", false,-1, 5,0);
    tracep->declArray(c+513,"sll_temp", false,-1, 126,0);
    tracep->declQuad(c+517,"srl_temp", false,-1, 63,0);
    tracep->declQuad(c+519,"sra_temp", false,-1, 63,0);
    tracep->declQuad(c+521,"sr_temp", false,-1, 63,0);
    tracep->declQuad(c+523,"result_data", false,-1, 63,0);
    tracep->declBit(c+162,"is_pre", false,-1);
    tracep->declBit(c+525,"is_br", false,-1);
    tracep->declBit(c+526,"is_eq", false,-1);
    tracep->declQuad(c+527,"temp_1", false,-1, 63,0);
    tracep->declArray(c+529,"add_pc", false,-1, 64,0);
    tracep->declQuad(c+532,"op_pc_4", false,-1, 63,0);
    tracep->declArray(c+534,"temp_result_pc", false,-1, 64,0);
    tracep->declQuad(c+537,"dst_data", false,-1, 63,0);
    tracep->declQuad(c+539,"next_pc", false,-1, 63,0);
    tracep->declBit(c+541,"valid_next_pc", false,-1);
    tracep->declBit(c+438,"br_valid", false,-1);
    tracep->declBit(c+542,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+451,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+445,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+447,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+452,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+454,"io_dest_is_w", false,-1);
    tracep->declBit(c+455,"io_ready", false,-1);
    tracep->declBit(c+147,"io_bus_valid", false,-1);
    tracep->declQuad(c+113,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+150,"io_bus_ready", false,-1);
    tracep->declBit(c+221,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+496,"imm", false,-1, 63,0);
    tracep->declBit(c+455,"reg_ready", false,-1);
    tracep->declQuad(c+543,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+545,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+547,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+548,"reg_bus_is_w", false,-1);
    tracep->declBit(c+549,"reg_bus_valid", false,-1);
    tracep->declQuad(c+452,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+454,"reg_w_rs_en", false,-1);
    tracep->declBus(c+550,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+221,"reg_difftest_peripheral", false,-1);
    tracep->declQuad(c+551,"mem_r_data", false,-1, 63,0);
    tracep->declQuad(c+553,"mem_data_result", false,-1, 63,0);
    tracep->declQuad(c+555,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+557,"w_mem_en", false,-1);
    tracep->declQuad(c+558,"mem_wstrb", false,-1, 63,0);
    tracep->declBit(c+560,"reg_ls_state", false,-1);
    tracep->declArray(c+561,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+565,"chose_chancel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+456,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+445,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+447,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+457,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+459,"io_dest_is_w", false,-1);
    tracep->declBit(c+460,"io_ready", false,-1);
    tracep->declBit(c+866,"div_clock", false,-1);
    tracep->declBit(c+867,"div_reset", false,-1);
    tracep->declBit(c+566,"div_io_valid", false,-1);
    tracep->declQuad(c+445,"div_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+447,"div_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"div_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+567,"div_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+569,"div_io_dest_is_w", false,-1);
    tracep->declBit(c+570,"div_io_ready", false,-1);
    tracep->declBit(c+866,"mul_clock", false,-1);
    tracep->declBit(c+867,"mul_reset", false,-1);
    tracep->declBit(c+571,"mul_io_valid", false,-1);
    tracep->declQuad(c+445,"mul_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+447,"mul_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"mul_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+572,"mul_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+574,"mul_io_dest_is_w", false,-1);
    tracep->declBit(c+575,"mul_io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+566,"io_valid", false,-1);
    tracep->declQuad(c+445,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+447,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+567,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+569,"io_dest_is_w", false,-1);
    tracep->declBit(c+570,"io_ready", false,-1);
    tracep->declBit(c+491,"is_32", false,-1);
    tracep->declBit(c+576,"is_signed", false,-1);
    tracep->declArray(c+577,"dividend", false,-1, 64,0);
    tracep->declArray(c+580,"divisor", false,-1, 64,0);
    tracep->declArray(c+583,"rem", false,-1, 64,0);
    tracep->declArray(c+586,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+589,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+592,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+595,"reg_q", false,-1, 65,0);
    tracep->declArray(c+598,"neg_divisor", false,-1, 64,0);
    tracep->declBus(c+601,"reg_state", false,-1, 1,0);
    tracep->declBus(c+602,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+603,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+570,"reg_ready", false,-1);
    tracep->declArray(c+604,"temp_result", false,-1, 131,0);
    tracep->declBit(c+609,"rem_is_0", false,-1);
    tracep->declBit(c+610,"rem_is_neg_div", false,-1);
    tracep->declBit(c+611,"rem_is_div", false,-1);
    tracep->declBit(c+612,"is_need_correct", false,-1);
    tracep->declBit(c+569,"reg_dest_is_w", false,-1);
    tracep->declBit(c+613,"reg_is_32", false,-1);
    tracep->declBit(c+614,"reg_is_rem", false,-1);
    tracep->declQuad(c+615,"rem_adjust", false,-1, 63,0);
    tracep->declQuad(c+617,"q_adjust", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+571,"io_valid", false,-1);
    tracep->declQuad(c+445,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+447,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+572,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+574,"io_dest_is_w", false,-1);
    tracep->declBit(c+575,"io_ready", false,-1);
    tracep->declBit(c+619,"is_32", false,-1);
    tracep->declBit(c+620,"is_rs1_signed", false,-1);
    tracep->declBit(c+491,"is_rs2_signed", false,-1);
    tracep->declArray(c+621,"mul_data1", false,-1, 129,0);
    tracep->declArray(c+626,"mul_data2", false,-1, 64,0);
    tracep->declArray(c+629,"temp_mul2", false,-1, 66,0);
    tracep->declBit(c+575,"reg_ready", false,-1);
    tracep->declBus(c+632,"reg_state", false,-1, 1,0);
    tracep->declArray(c+633,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+636,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+641,"reg_result", false,-1, 129,0);
    tracep->declBus(c+646,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+574,"reg_dest_is_w", false,-1);
    tracep->declArray(c+647,"pp", false,-1, 130,0);
    tracep->declBus(c+652,"reg_cnt", false,-1, 6,0);
    tracep->declBit(c+653,"reg_not_h", false,-1);
    tracep->declBit(c+654,"reg_is_32", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+461,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+462,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+190,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+183,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+445,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+199,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+462,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+464,"io_csr_is_w", false,-1);
    tracep->declQuad(c+465,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+467,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+468,"io_is_except", false,-1);
    tracep->declBus(c+469,"io_exception", false,-1, 5,0);
    tracep->declBit(c+470,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+199,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+496,"imm", false,-1, 63,0);
    tracep->declBit(c+655,"is_imm", false,-1);
    tracep->declQuad(c+656,"op_data", false,-1, 63,0);
    tracep->declQuad(c+658,"or_result", false,-1, 63,0);
    tracep->declQuad(c+660,"and_result", false,-1, 63,0);
    tracep->declQuad(c+662,"temp_csr_result_data", false,-1, 63,0);
    tracep->declBit(c+664,"is_mret", false,-1);
    tracep->declBit(c+665,"is_sret", false,-1);
    tracep->declBit(c+666,"is_ecall", false,-1);
    tracep->declBit(c+667,"is_ebreak", false,-1);
    tracep->declBit(c+668,"is_except", false,-1);
    tracep->declBus(c+669,"exception", false,-1, 3,0);
    tracep->declBit(c+670,"is_ret", false,-1);
    tracep->declQuad(c+671,"result_status", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+155,"io_br_info_valid", false,-1);
    tracep->declBit(c+156,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+165,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+167,"io_flush", false,-1);
    tracep->declBit(c+140,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+141,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"io_cpu_data_ready", false,-1);
    tracep->declBit(c+142,"io_cpu_data_valid", false,-1);
    tracep->declQuad(c+143,"io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+145,"io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+168,"io_put_pc_ready", false,-1);
    tracep->declBit(c+169,"io_put_pc_valid", false,-1);
    tracep->declBus(c+170,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+95,"io_out_flush", false,-1);
    tracep->declBit(c+866,"ibuf_clock", false,-1);
    tracep->declBit(c+867,"ibuf_reset", false,-1);
    tracep->declBit(c+167,"ibuf_io_flush", false,-1);
    tracep->declBit(c+100,"ibuf_io_cache_buf_ready", false,-1);
    tracep->declBit(c+673,"ibuf_io_cache_buf_valid", false,-1);
    tracep->declQuad(c+145,"ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+674,"ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+675,"ibuf_io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+168,"ibuf_io_put_pc_ready", false,-1);
    tracep->declBit(c+169,"ibuf_io_put_pc_valid", false,-1);
    tracep->declBus(c+170,"ibuf_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"ibuf_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"ibuf_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+866,"br_predictor_clock", false,-1);
    tracep->declBit(c+867,"br_predictor_reset", false,-1);
    tracep->declBit(c+155,"br_predictor_io_br_info_valid", false,-1);
    tracep->declBit(c+156,"br_predictor_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"br_predictor_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"br_predictor_io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+98,"br_predictor_io_pc", false,-1, 63,0);
    tracep->declQuad(c+676,"br_predictor_io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+678,"br_predictor_io_pre_valid", false,-1);
    tracep->declQuad(c+98,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+679,"reg_flush", false,-1);
    tracep->declQuad(c+680,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+141,"reg_bus_valid", false,-1);
    tracep->declBus(c+682,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+683,"pre_info_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+684+i*2,"pre_info_fifo", true,(i+0), 63,0);
    }
    tracep->declBit(c+692,"pre_enq", false,-1);
    tracep->declBus(c+693,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+694,"is_pre_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+695+i*1,"is_pre_fifo", true,(i+0));
    }
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+155,"io_br_info_valid", false,-1);
    tracep->declBit(c+156,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+98,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+676,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+678,"io_pre_valid", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+699+i*2,"RAS", true,(i+0), 63,0);
    }
    tracep->declBus(c+707,"reg_head", false,-1, 2,0);
    tracep->declBus(c+708,"update_index", false,-1, 5,0);
    tracep->declArray(c+709,"update_btb_data", false,-1, 122,0);
    tracep->declBus(c+713,"update_pht_data", false,-1, 1,0);
    tracep->declBus(c+714,"index", false,-1, 5,0);
    tracep->declQuad(c+715,"tag", false,-1, 55,0);
    tracep->declBus(c+717,"pht_data", false,-1, 1,0);
    tracep->declBit(c+718,"pht_taken", false,-1);
    tracep->declArray(c+719,"btb_data", false,-1, 127,0);
    tracep->declBit(c+723,"btb_valid", false,-1);
    tracep->declQuad(c+724,"btb_tag", false,-1, 55,0);
    tracep->declQuad(c+726,"btb_target_next_pc", false,-1, 63,0);
    tracep->declBus(c+728,"btb_br_type", false,-1, 1,0);
    tracep->declBit(c+678,"pre_valid", false,-1);
    tracep->declBit(c+729,"is_br_return", false,-1);
    tracep->declQuad(c+730,"ras_ready", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+167,"io_flush", false,-1);
    tracep->declBit(c+100,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+673,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+145,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+674,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+675,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+168,"io_put_pc_ready", false,-1);
    tracep->declBit(c+169,"io_put_pc_valid", false,-1);
    tracep->declBus(c+170,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"io_put_pc_bits_is_pre", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+732+i*2,"ibuf_pc", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+740+i*1,"ibuf_inst", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+744+i*1,"ibuf_is_pre", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+748+i*1,"ibuf_valid", true,(i+0));
    }
    tracep->declBus(c+752,"reg_head", false,-1, 1,0);
    tracep->declBus(c+753,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+754,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+755,"enq_size", false,-1);
    tracep->declBit(c+756,"can_deq", false,-1);
    tracep->declBus(c+757,"result_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+96,"io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+97,"io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+98,"io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+101,"io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+102,"io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+106,"io_is_fence_i", false,-1);
    tracep->declBus(c+21,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_sram_wen_0", false,-1);
    tracep->declBit(c+23,"io_sram_wen_1", false,-1);
    tracep->declArray(c+24,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+107,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+866,"cache_stage0_clock", false,-1);
    tracep->declBit(c+867,"cache_stage0_reset", false,-1);
    tracep->declBit(c+95,"cache_stage0_io_flush", false,-1);
    tracep->declBit(c+96,"cache_stage0_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+97,"cache_stage0_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+96,"cache_stage0_io_addr_ready", false,-1);
    tracep->declBit(c+758,"cache_stage0_io_addr_valid", false,-1);
    tracep->declQuad(c+759,"cache_stage0_io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+866,"cache_stage1_clock", false,-1);
    tracep->declBit(c+867,"cache_stage1_reset", false,-1);
    tracep->declBit(c+95,"cache_stage1_io_flush", false,-1);
    tracep->declBit(c+96,"cache_stage1_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+758,"cache_stage1_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+759,"cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+761,"cache_stage1_io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+762,"cache_stage1_io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+763,"cache_stage1_io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+764,"cache_stage1_io_sram_valid", false,-1);
    tracep->declArray(c+765,"cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+769,"cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+773,"cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+777,"cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+781,"cache_stage1_io_sram_ready", false,-1);
    tracep->declBit(c+782,"cache_stage1_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+783,"cache_stage1_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+784,"cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+786,"cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+762,"cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+787,"cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+789,"cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+763,"cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+790,"cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+866,"cache_stage2_clock", false,-1);
    tracep->declBit(c+867,"cache_stage2_reset", false,-1);
    tracep->declBit(c+95,"cache_stage2_io_flush", false,-1);
    tracep->declBit(c+782,"cache_stage2_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+783,"cache_stage2_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+784,"cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+786,"cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+762,"cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+787,"cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+789,"cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+763,"cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+790,"cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+107,"cache_stage2_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"cache_stage2_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+792,"cache_stage2_io_sram_w_valid", false,-1);
    tracep->declBus(c+793,"cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+28,"cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+24,"cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+794,"cache_stage2_io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+100,"cache_stage2_io_rdata_ready", false,-1);
    tracep->declBit(c+101,"cache_stage2_io_rdata_valid", false,-1);
    tracep->declQuad(c+102,"cache_stage2_io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+795,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+797,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+799,"is_w_sram", false,-1);
    tracep->declBit(c+800,"is_sram0_write", false,-1);
    tracep->declBit(c+801,"is_sram1_write", false,-1);
    tracep->declQuad(c+802,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+804,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+805,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+806,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+807,"w_r_pass0_val", false,-1);
    tracep->declBit(c+808,"w_r_pass1_val", false,-1);
    tracep->declBit(c+781,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+96,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+97,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+96,"io_addr_ready", false,-1);
    tracep->declBit(c+758,"io_addr_valid", false,-1);
    tracep->declQuad(c+759,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+758,"reg_valid", false,-1);
    tracep->declQuad(c+759,"reg_addr", false,-1, 63,0);
    tracep->declBit(c+809,"valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+96,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+758,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+759,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+761,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+762,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+763,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+764,"io_sram_valid", false,-1);
    tracep->declArray(c+765,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+769,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+773,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+777,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+781,"io_sram_ready", false,-1);
    tracep->declBit(c+782,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+783,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+784,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+786,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+762,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+787,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+789,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+763,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+790,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+764,"valid", false,-1);
    tracep->declBit(c+96,"ready", false,-1);
    tracep->declQuad(c+784,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+810,"reg_valid", false,-1);
    tracep->declQuad(c+811,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+813,"reg_index", false,-1, 5,0);
    tracep->declBus(c+814,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+815,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+817,"tag_1", false,-1, 53,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+782,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+783,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+784,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+786,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+762,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+787,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+789,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+763,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+790,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+107,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+792,"io_sram_w_valid", false,-1);
    tracep->declBus(c+793,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+28,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+24,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+794,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+100,"io_rdata_ready", false,-1);
    tracep->declBit(c+101,"io_rdata_valid", false,-1);
    tracep->declQuad(c+102,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+813,"index", false,-1, 5,0);
    tracep->declBit(c+819,"valid", false,-1);
    tracep->declBit(c+794,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+102,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+101,"reg_valid", false,-1);
    tracep->declBit(c+820,"reg_ready", false,-1);
    tracep->declQuad(c+821,"temp_addr", false,-1, 63,0);
    tracep->declQuad(c+108,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+107,"reg_r_valid", false,-1);
    tracep->declArray(c+28,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+792,"reg_cache_write", false,-1);
    tracep->declQuad(c+104,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+823,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+825,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+826,"reg_lru_1", false,-1, 63,0);
    tracep->declBit(c+828,"LRU_1", false,-1);
    tracep->declQuad(c+829,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+831,"neg_chose_bit", false,-1, 63,0);
    tracep->declBus(c+833,"reg_bus_state", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+868,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+32,"Q", false,-1, 127,0);
    tracep->declArray(c+878,"bwen", false,-1, 127,0);
    tracep->declBit(c+800,"wen", false,-1);
    tracep->declArray(c+834,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+868,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+36,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+36,"Q", false,-1, 127,0);
    tracep->declArray(c+878,"bwen", false,-1, 127,0);
    tracep->declBit(c+800,"wen", false,-1);
    tracep->declArray(c+838,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"io_wen", false,-1);
    tracep->declArray(c+868,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+40,"Q", false,-1, 127,0);
    tracep->declArray(c+878,"bwen", false,-1, 127,0);
    tracep->declBit(c+801,"wen", false,-1);
    tracep->declArray(c+842,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"io_wen", false,-1);
    tracep->declArray(c+868,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+44,"Q", false,-1, 127,0);
    tracep->declArray(c+878,"bwen", false,-1, 127,0);
    tracep->declBit(c+801,"wen", false,-1);
    tracep->declArray(c+846,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+51,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+63,"Q", false,-1, 127,0);
    tracep->declArray(c+368,"bwen", false,-1, 127,0);
    tracep->declBit(c+376,"wen", false,-1);
    tracep->declArray(c+850,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+868,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+67,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+67,"Q", false,-1, 127,0);
    tracep->declArray(c+878,"bwen", false,-1, 127,0);
    tracep->declBit(c+376,"wen", false,-1);
    tracep->declArray(c+854,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"io_wen", false,-1);
    tracep->declArray(c+51,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+71,"Q", false,-1, 127,0);
    tracep->declArray(c+368,"bwen", false,-1, 127,0);
    tracep->declBit(c+377,"wen", false,-1);
    tracep->declArray(c+858,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+866,"clock", false,-1);
    tracep->declBit(c+867,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"io_wen", false,-1);
    tracep->declArray(c+868,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+75,"Q", false,-1, 127,0);
    tracep->declArray(c+878,"bwen", false,-1, 127,0);
    tracep->declBit(c+377,"wen", false,-1);
    tracep->declArray(c+862,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_top(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_top\n"); );
    // Body
    Vriscv_soc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_soc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_soc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv_soc___024root__trace_register(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vriscv_soc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vriscv_soc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vriscv_soc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_top_0\n"); );
    // Init
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_soc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h8800a5e4__0;
    VlWide<4>/*127:0*/ __Vtemp_haff02ae1__0;
    VlWide<4>/*127:0*/ __Vtemp_h5cafde3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b945697__0;
    VlWide<4>/*127:0*/ __Vtemp_h83563b0d__0;
    VlWide<4>/*127:0*/ __Vtemp_hfddea7ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h6618c490__0;
    VlWide<3>/*95:0*/ __Vtemp_h4825144c__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__0;
    VlWide<3>/*95:0*/ __Vtemp_h346bf577__0;
    VlWide<3>/*95:0*/ __Vtemp_h28f9f554__0;
    VlWide<5>/*159:0*/ __Vtemp_h2b09eb2b__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h2ede82b0__0;
    VlWide<5>/*159:0*/ __Vtemp_h61a83971__0;
    VlWide<3>/*95:0*/ __Vtemp_h96ce2ff4__0;
    VlWide<3>/*95:0*/ __Vtemp_hee601f10__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__0;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__0;
    VlWide<5>/*159:0*/ __Vtemp_h83a42262__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__1;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__1;
    VlWide<5>/*159:0*/ __Vtemp_h00d757e1__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__2;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__2;
    VlWide<5>/*159:0*/ __Vtemp_hcd0c4155__0;
    VlWide<5>/*159:0*/ __Vtemp_h52802c7d__0;
    VlWide<4>/*127:0*/ __Vtemp_h643ad04b__0;
    VlWide<4>/*127:0*/ __Vtemp_h96d8aca3__0;
    VlWide<4>/*127:0*/ __Vtemp_h0fce6913__0;
    VlWide<4>/*127:0*/ __Vtemp_h7748dece__0;
    VlWide<4>/*127:0*/ __Vtemp_h8b37abc5__0;
    VlWide<4>/*127:0*/ __Vtemp_he6da4d43__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7b78b5e__0;
    VlWide<4>/*127:0*/ __Vtemp_h0490666a__0;
    VlWide<4>/*127:0*/ __Vtemp_hca3bc04b__0;
    VlWide<4>/*127:0*/ __Vtemp_h4060cfc7__0;
    VlWide<4>/*127:0*/ __Vtemp_h09a85685__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__0;
    VlWide<4>/*127:0*/ __Vtemp_hd09821c2__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
    bufp->fullBit(oldp+2,(vlSelf->riscv_soc__DOT__core_io_axi_bus_aw_valid));
    bufp->fullQData(oldp+3,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                              ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                              : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                  : 0ULL))),64);
    bufp->fullBit(oldp+5,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
    bufp->fullBit(oldp+6,(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid));
    bufp->fullQData(oldp+7,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                              ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                              : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                  ? (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                  : 0ULL))),64);
    bufp->fullCData(oldp+9,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                              ? 0xffU : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                          ? (0xffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))
                                          : 0U))),8);
    bufp->fullBit(oldp+10,(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_bits_wlast));
    bufp->fullBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
    bufp->fullBit(oldp+12,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
    bufp->fullBit(oldp+13,(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid));
    bufp->fullQData(oldp+14,(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr),64);
    bufp->fullCData(oldp+16,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                              | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
    bufp->fullBit(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    bufp->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__tem_data),64);
    bufp->fullBit(oldp+20,(vlSelf->riscv_soc__DOT__core_io_axi_bus_r_bits_rlast));
    bufp->fullCData(oldp+21,(vlSelf->riscv_soc__DOT__core_io_isram_addr),6);
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram0__DOT__wen)))));
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram2__DOT__wen)))));
    __Vtemp_h8800a5e4__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU));
    __Vtemp_h8800a5e4__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                         >> 0xaU) >> 0x20U));
    __Vtemp_h8800a5e4__0[2U] = 0U;
    __Vtemp_h8800a5e4__0[3U] = 0U;
    bufp->fullWData(oldp+24,(__Vtemp_h8800a5e4__0),128);
    bufp->fullWData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
    bufp->fullWData(oldp+32,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
    bufp->fullWData(oldp+36,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
    bufp->fullWData(oldp+40,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
    bufp->fullWData(oldp+44,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
    bufp->fullCData(oldp+48,(vlSelf->riscv_soc__DOT__core_io_dsram_addr),6);
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram4__DOT__wen)))));
    bufp->fullBit(oldp+50,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram6__DOT__wen)))));
    __Vtemp_haff02ae1__0[0U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[0U]);
    __Vtemp_haff02ae1__0[1U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[1U]);
    __Vtemp_haff02ae1__0[2U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[2U]);
    __Vtemp_haff02ae1__0[3U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[3U]);
    bufp->fullWData(oldp+51,(__Vtemp_haff02ae1__0),128);
    __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
    __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                        >> 0x20U));
    __Vtemp_h5cafde3d__0[2U] = 0U;
    __Vtemp_h5cafde3d__0[3U] = 0U;
    bufp->fullWData(oldp+55,(__Vtemp_h5cafde3d__0),128);
    bufp->fullWData(oldp+59,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
    bufp->fullWData(oldp+63,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
    bufp->fullWData(oldp+67,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
    bufp->fullWData(oldp+71,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
    bufp->fullWData(oldp+75,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
    bufp->fullQData(oldp+79,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                               ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                               : vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr)),64);
    bufp->fullQData(oldp+81,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
    bufp->fullQData(oldp+83,((((QData)((IData)(((((
                                                   (0U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                 >> 7U))))
                                                   ? 0xffU
                                                   : 0U) 
                                                 << 0x18U) 
                                                | (((((0U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                    >> 6U))))
                                                      ? 0xffU
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | (((((0U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                       >> 5U))))
                                                         ? 0xffU
                                                         : 0U) 
                                                       << 8U) 
                                                      | (((0U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                        >> 4U))))
                                                          ? 0xffU
                                                          : 0U)))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((((0U 
                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                  & (IData)(
                                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                             >> 3U))))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | (((((0U 
                                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                     & (IData)(
                                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                                >> 2U))))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | (((((0U 
                                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                        & (IData)(
                                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                                >> 1U))))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | (((0U 
                                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                      | ((1U 
                                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T)))
                                                                      ? 0xffU
                                                                      : 0U)))))))),64);
    bufp->fullBit(oldp+85,(((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid) 
                            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
    bufp->fullQData(oldp+86,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
    bufp->fullCData(oldp+88,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
    bufp->fullBit(oldp+89,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    bufp->fullBit(oldp+90,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
    bufp->fullIData(oldp+91,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                 | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                    & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                               >> 3U))))
                                 ? 0xffU : 0U) << 0x18U) 
                              | (((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                    | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                       & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                  >> 2U))))
                                    ? 0xffU : 0U) << 0x10U) 
                                 | (((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                       | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                          & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                     >> 1U))))
                                       ? 0xffU : 0U) 
                                     << 8U) | (((0U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                | ((1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T)))
                                                ? 0xffU
                                                : 0U))))),32);
    bufp->fullIData(oldp+92,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                 | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                    & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                               >> 7U))))
                                 ? 0xffU : 0U) << 0x18U) 
                              | (((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                    | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                       & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                  >> 6U))))
                                    ? 0xffU : 0U) << 0x10U) 
                                 | (((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                       | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                          & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                     >> 5U))))
                                       ? 0xffU : 0U) 
                                     << 8U) | (((0U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                | ((1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                              >> 4U))))
                                                ? 0xffU
                                                : 0U))))),32);
    bufp->fullQData(oldp+93,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__t_rdata),64);
    bufp->fullBit(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush));
    bufp->fullBit(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready));
    bufp->fullBit(oldp+97,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
    bufp->fullQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
    bufp->fullBit(oldp+100,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    bufp->fullBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    bufp->fullQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
    bufp->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
    bufp->fullBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    bufp->fullQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+112,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid))));
    bufp->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
    bufp->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
    bufp->fullQData(oldp+117,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
    bufp->fullCData(oldp+119,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
    bufp->fullBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
    bufp->fullBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    bufp->fullBit(oldp+122,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
    bufp->fullBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    bufp->fullQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
    bufp->fullQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
    bufp->fullBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
    bufp->fullBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    bufp->fullBit(oldp+130,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
    bufp->fullBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    bufp->fullQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
    bufp->fullBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
    bufp->fullBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    bufp->fullBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    bufp->fullBit(oldp+140,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready))));
    bufp->fullBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    bufp->fullBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
    bufp->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
    bufp->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
    bufp->fullBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    bufp->fullQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
    bufp->fullBit(oldp+150,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) ? 
                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
    bufp->fullBit(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
    bufp->fullQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
    bufp->fullBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    bufp->fullBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
    bufp->fullBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
    bufp->fullQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
    bufp->fullBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
    bufp->fullQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
    bufp->fullBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid));
    bufp->fullQData(oldp+163,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                               [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                                : 0ULL)),64);
    bufp->fullQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
    bufp->fullBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush));
    bufp->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    bufp->fullBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid));
    bufp->fullIData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst),32);
    bufp->fullQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                              [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
    bufp->fullBit(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre
                            [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]));
    bufp->fullBit(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    bufp->fullCData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
    bufp->fullCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
    bufp->fullCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
    bufp->fullQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
    bufp->fullCData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
    bufp->fullQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
    bufp->fullIData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
    bufp->fullQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
    bufp->fullIData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
    bufp->fullCData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
    bufp->fullBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
    bufp->fullBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
    bufp->fullSData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+193,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                             <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
    bufp->fullBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
    bufp->fullQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
    bufp->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie),64);
    bufp->fullQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
    bufp->fullQData(oldp+201,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
    bufp->fullBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
    bufp->fullCData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
    bufp->fullQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
    bufp->fullBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
    bufp->fullSData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
    bufp->fullBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
    bufp->fullBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
    bufp->fullCData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
    bufp->fullQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
    bufp->fullQData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
    bufp->fullBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
    bufp->fullIData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
    bufp->fullBit(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    bufp->fullCData(oldp+222,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0xfU))),5);
    bufp->fullQData(oldp+223,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xfU)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                               [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xfU))])),64);
    bufp->fullCData(oldp+225,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+226,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                               [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0x14U))])),64);
    bufp->fullSData(oldp+228,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+229,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
                                 == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0x14U)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                               >> 0x14U))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                    : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                                        : ((0x344U 
                                            == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                >> 0x14U))
                                            ? 0ULL : 
                                           ((0x343U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                             : ((0x342U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                 : 
                                                ((0x341U 
                                                  == 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                  : 
                                                 ((0x340U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                   : 
                                                  ((0x306U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? 0ULL
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                     : 
                                                    ((0x304U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? 0ULL
                                                       : 
                                                      ((0x302U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? 0ULL
                                                        : 
                                                       ((0x301U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? 0ULL
                                                         : 
                                                        ((0x300U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                          : 0ULL)))))))))))))))),64);
    bufp->fullQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
    bufp->fullQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
    bufp->fullBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    bufp->fullBit(oldp+236,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullBit(oldp+237,((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullCData(oldp+238,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
    bufp->fullQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[0]),64);
    bufp->fullQData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[1]),64);
    bufp->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[2]),64);
    bufp->fullQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[3]),64);
    bufp->fullQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[4]),64);
    bufp->fullQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[5]),64);
    bufp->fullQData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[6]),64);
    bufp->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[7]),64);
    bufp->fullQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[8]),64);
    bufp->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[9]),64);
    bufp->fullQData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[10]),64);
    bufp->fullQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[11]),64);
    bufp->fullQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[12]),64);
    bufp->fullQData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[13]),64);
    bufp->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[14]),64);
    bufp->fullQData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[15]),64);
    bufp->fullQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[16]),64);
    bufp->fullQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[17]),64);
    bufp->fullQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[18]),64);
    bufp->fullQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[19]),64);
    bufp->fullQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[20]),64);
    bufp->fullQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[21]),64);
    bufp->fullQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[22]),64);
    bufp->fullQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[23]),64);
    bufp->fullQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[24]),64);
    bufp->fullQData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[25]),64);
    bufp->fullQData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[26]),64);
    bufp->fullQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[27]),64);
    bufp->fullQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[28]),64);
    bufp->fullQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[29]),64);
    bufp->fullQData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[30]),64);
    bufp->fullQData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[31]),64);
    bufp->fullQData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                              [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                              [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit),64);
    bufp->fullQData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),64);
    bufp->fullQData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
    bufp->fullQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
    bufp->fullQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq),64);
    bufp->fullQData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral),64);
    bufp->fullBit(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
    bufp->fullQData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
    bufp->fullQData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
    bufp->fullQData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
    bufp->fullQData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
    bufp->fullQData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
    bufp->fullQData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
    bufp->fullQData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
    bufp->fullQData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
    bufp->fullQData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
    bufp->fullQData(oldp+338,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                               >> 0x14U))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                                    : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                        ? 0ULL : ((0x343U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                     : 
                                                    ((0x340U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? 0ULL
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                        : 
                                                       ((0x304U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                         : 
                                                        ((0x303U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x302U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                            >> 0x14U))
                                                           ? 0ULL
                                                           : 
                                                          ((0x301U 
                                                            == 
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                             >> 0x14U))
                                                            ? 0ULL
                                                            : 
                                                           ((0x300U 
                                                             == 
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                              >> 0x14U))
                                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                             : 0ULL))))))))))))))),64);
    bufp->fullBit(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
    bufp->fullCData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
    bufp->fullCData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
    bufp->fullCData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
    bufp->fullBit(oldp+344,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    bufp->fullCData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
    bufp->fullCData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
    bufp->fullBit(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
    bufp->fullBit(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
    bufp->fullBit(oldp+349,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+350,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
    bufp->fullQData(oldp+352,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+354,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+355,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
    bufp->fullCData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
    bufp->fullQData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
    bufp->fullCData(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
    bufp->fullBit(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
    bufp->fullQData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
    bufp->fullCData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
    bufp->fullCData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
    bufp->fullBit(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    bufp->fullSData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
    bufp->fullBit(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    bufp->fullWData(oldp+368,(vlSelf->riscv_soc__DOT__sram4__DOT__bwen),128);
    bufp->fullWData(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
    bufp->fullBit(oldp+376,(vlSelf->riscv_soc__DOT__sram4__DOT__wen));
    bufp->fullBit(oldp+377,(vlSelf->riscv_soc__DOT__sram6__DOT__wen));
    bufp->fullQData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
    bufp->fullQData(oldp+382,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
    bufp->fullQData(oldp+384,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
    bufp->fullQData(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
    bufp->fullQData(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
    bufp->fullQData(oldp+390,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
    bufp->fullQData(oldp+392,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
    bufp->fullBit(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
    bufp->fullBit(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
    bufp->fullBit(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0));
    bufp->fullBit(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2));
    bufp->fullBit(oldp+398,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullBit(oldp+399,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullQData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
    bufp->fullBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__LRU_2));
    bufp->fullBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    bufp->fullCData(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
    bufp->fullBit(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    bufp->fullBit(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    bufp->fullQData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__temp_addr),64);
    bufp->fullBit(oldp+409,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))));
    bufp->fullBit(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_b_fire));
    bufp->fullCData(oldp+411,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+412,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
    bufp->fullCData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
    bufp->fullBit(oldp+415,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+416,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU))));
    bufp->fullBit(oldp+417,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 0xeU)))));
    bufp->fullCData(oldp+418,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? ((0x60U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xfU)) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))),7);
    bufp->fullCData(oldp+419,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? 0U : 5U)),3);
    bufp->fullBit(oldp+420,((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+421,(((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xcU))) 
                             & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU)))));
    bufp->fullCData(oldp+422,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 3U : 0xcU)),4);
    bufp->fullBit(oldp+423,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 5U)))));
    bufp->fullBit(oldp+424,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullCData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
    bufp->fullCData(oldp+426,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                : ((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
    bufp->fullCData(oldp+427,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 6U : (((1U == (7U 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0xcU))))
                                         ? 4U : 0xcU))),4);
    bufp->fullBit(oldp+428,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 5U))));
    bufp->fullCData(oldp+429,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? ((0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                    ? 3U : 2U) : 2U)),2);
    bufp->fullCData(oldp+430,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 0x4eU : 0x4aU)),7);
    bufp->fullCData(oldp+431,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 2U : 0xcU)),4);
    bufp->fullBit(oldp+432,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 3U)))));
    bufp->fullCData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
    bufp->fullBit(oldp+434,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                             | ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                | ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                   | ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                      & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                          ? (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                >> 5U))
                                          : ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                             & ((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                     >> 0xcU))) 
                                                & (6U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)))))))))));
    bufp->fullBit(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
    bufp->fullBit(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
    bufp->fullBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    bufp->fullBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid));
    bufp->fullBit(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
    bufp->fullQData(oldp+440,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+442,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
    bufp->fullQData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
    bufp->fullQData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
    bufp->fullQData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
    bufp->fullQData(oldp+449,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (((QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                     >> 0x1fU)))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                : 0ULL)),64);
    bufp->fullBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    bufp->fullQData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    bufp->fullQData(oldp+457,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                    : ((0U == (3U & 
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
    bufp->fullBit(oldp+459,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+460,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    bufp->fullQData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
    bufp->fullBit(oldp+464,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    bufp->fullQData(oldp+465,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? ((0xffffffffffffff77ULL 
                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                                   | (QData)((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                                  >> 7U)))
                                                       ? 0x88U
                                                       : 0x80U))))
                                : ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                    : ((3U == (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                        : ((5U == (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                            ? ((0xffffffffffffffe0ULL 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))))
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                                : (
                                                   (6U 
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
    bufp->fullSData(oldp+467,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    bufp->fullCData(oldp+469,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
    bufp->fullBit(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
    bufp->fullBit(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullCData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullBit(oldp+473,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
    bufp->fullBit(oldp+474,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+475,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+476,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U))));
    bufp->fullCData(oldp+477,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
    bufp->fullBit(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    bufp->fullBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    bufp->fullBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
    bufp->fullBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+491,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    bufp->fullQData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullQData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
    bufp->fullBit(oldp+498,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U)))));
    bufp->fullQData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+501,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 6U))));
    bufp->fullBit(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
    bufp->fullQData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullQData(oldp+505,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
    bufp->fullWData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
    bufp->fullBit(oldp+510,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
    bufp->fullBit(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
    __Vtemp_h6b945697__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    __Vtemp_h6b945697__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                        >> 0x20U));
    __Vtemp_h6b945697__0[2U] = 0U;
    __Vtemp_h6b945697__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h83563b0d__0, __Vtemp_h6b945697__0, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
    __Vtemp_hfddea7ef__0[0U] = __Vtemp_h83563b0d__0[0U];
    __Vtemp_hfddea7ef__0[1U] = __Vtemp_h83563b0d__0[1U];
    __Vtemp_hfddea7ef__0[2U] = __Vtemp_h83563b0d__0[2U];
    __Vtemp_hfddea7ef__0[3U] = (0x7fffffffU & __Vtemp_h83563b0d__0[3U]);
    bufp->fullWData(oldp+513,(__Vtemp_hfddea7ef__0),127);
    bufp->fullQData(oldp+517,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+519,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+521,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                     ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
    bufp->fullQData(oldp+523,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                    ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                    : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                         ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                : ((1U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                       << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                    : ((4U == (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                        ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                        : ((6U == (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                            ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                               | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                                ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                : (
                                                   (3U 
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
                                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U]))))))))))),64);
    bufp->fullBit(oldp+525,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
    bufp->fullBit(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    bufp->fullQData(oldp+527,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
    __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                        >> 0x20U));
    __Vtemp_h6618c490__0[2U] = 1U;
    bufp->fullWData(oldp+529,(__Vtemp_h6618c490__0),65);
    bufp->fullQData(oldp+532,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        __Vtemp_h4825144c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
        __Vtemp_h4825144c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
        __Vtemp_h4825144c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
    } else {
        __Vtemp_h4825144c__0[0U] = 0U;
        __Vtemp_h4825144c__0[1U] = 0U;
        __Vtemp_h4825144c__0[2U] = 0U;
    }
    bufp->fullWData(oldp+534,(__Vtemp_h4825144c__0),65);
    bufp->fullQData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
    bufp->fullBit(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
    bufp->fullBit(oldp+542,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid) 
                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc) 
                                 & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc 
                                    != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                         ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                                        [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                                         : 0ULL)))) 
                             | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid))))));
    bufp->fullQData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullQData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
    bufp->fullQData(oldp+553,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))
                                : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                    ? (((QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                     >> 0x1fU)))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))
                                    : ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                        ? (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                        : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                            ? ((((1U 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                             >> 0xfU)))
                                                  ? 0xffffffffffffULL
                                                  : 0ULL) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                            : ((0x10U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                ? (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                                : (
                                                   (0U 
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
    bufp->fullQData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullQData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
    bufp->fullBit(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    bufp->fullWData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
    bufp->fullBit(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullBit(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
    bufp->fullQData(oldp+567,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                    ? (((QData)((IData)(
                                                        ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                          >> 0x1fU)
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                                : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                    ? (((QData)((IData)(
                                                        ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                          >> 0x1fU)
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))),64);
    bufp->fullBit(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullBit(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
    bufp->fullQData(oldp+572,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                      >> 0x1fU)
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                : ((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))))),64);
    bufp->fullBit(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullBit(oldp+576,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U)))));
    bufp->fullWData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
    bufp->fullWData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
    bufp->fullWData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
    bufp->fullWData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
    __Vtemp_h639dda77__0[0U] = 1U;
    __Vtemp_h639dda77__0[1U] = 0U;
    __Vtemp_h639dda77__0[2U] = 0U;
    __Vtemp_h3fef5ac1__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h346bf577__0, __Vtemp_h639dda77__0, __Vtemp_h3fef5ac1__0);
    __Vtemp_h28f9f554__0[0U] = __Vtemp_h346bf577__0[0U];
    __Vtemp_h28f9f554__0[1U] = __Vtemp_h346bf577__0[1U];
    __Vtemp_h28f9f554__0[2U] = (1U & __Vtemp_h346bf577__0[2U]);
    bufp->fullWData(oldp+598,(__Vtemp_h28f9f554__0),65);
    bufp->fullCData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) {
        __Vtemp_h2b09eb2b__0[0U] = 0U;
        __Vtemp_h2b09eb2b__0[1U] = 0U;
        __Vtemp_h2b09eb2b__0[2U] = 0U;
        __Vtemp_h2b09eb2b__0[3U] = 0U;
        __Vtemp_h2b09eb2b__0[4U] = 0U;
    } else {
        __Vtemp_h2b09eb2b__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[0U];
        __Vtemp_h2b09eb2b__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[1U];
        __Vtemp_h2b09eb2b__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[2U];
        __Vtemp_h2b09eb2b__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[3U];
        __Vtemp_h2b09eb2b__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[4U];
    }
    bufp->fullWData(oldp+604,(__Vtemp_h2b09eb2b__0),132);
    bufp->fullBit(oldp+609,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
    bufp->fullBit(oldp+610,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                      ^ __Vtemp_h2ede82b0__0[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                        ^ __Vtemp_h2ede82b0__0[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                       ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
    bufp->fullBit(oldp+611,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    bufp->fullBit(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
    bufp->fullBit(oldp+613,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
    bufp->fullBit(oldp+614,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                   >> 3U))));
    bufp->fullQData(oldp+615,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                      >> 0x1fU)
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))),64);
    bufp->fullQData(oldp+617,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                      >> 0x1fU)
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]))))),64);
    bufp->fullBit(oldp+619,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))));
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 1U))));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp_h61a83971__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               >> 0x1fU)))) {
                __Vtemp_h61a83971__0[1U] = 0xffffffffU;
                __Vtemp_h61a83971__0[2U] = 0xffffffffU;
                __Vtemp_h61a83971__0[3U] = 0xffffffffU;
                __Vtemp_h61a83971__0[4U] = 3U;
            } else {
                __Vtemp_h61a83971__0[1U] = 0U;
                __Vtemp_h61a83971__0[2U] = 0U;
                __Vtemp_h61a83971__0[3U] = 0U;
                __Vtemp_h61a83971__0[4U] = 0U;
            }
        } else if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp_h61a83971__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            __Vtemp_h61a83971__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                >> 0x20U));
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               >> 0x3fU)))) {
                __Vtemp_h61a83971__0[2U] = 0xffffffffU;
                __Vtemp_h61a83971__0[3U] = 0xffffffffU;
                __Vtemp_h61a83971__0[4U] = 3U;
            } else {
                __Vtemp_h61a83971__0[2U] = 0U;
                __Vtemp_h61a83971__0[3U] = 0U;
                __Vtemp_h61a83971__0[4U] = 0U;
            }
        } else {
            __Vtemp_h61a83971__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            __Vtemp_h61a83971__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                >> 0x20U));
            __Vtemp_h61a83971__0[2U] = 0U;
            __Vtemp_h61a83971__0[3U] = 0U;
            __Vtemp_h61a83971__0[4U] = 0U;
        }
    } else {
        __Vtemp_h61a83971__0[0U] = 0U;
        __Vtemp_h61a83971__0[1U] = 0U;
        __Vtemp_h61a83971__0[2U] = 0U;
        __Vtemp_h61a83971__0[3U] = 0U;
        __Vtemp_h61a83971__0[4U] = 0U;
    }
    bufp->fullWData(oldp+621,(__Vtemp_h61a83971__0),130);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
        __Vtemp_h96ce2ff4__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U];
        __Vtemp_h96ce2ff4__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U];
        __Vtemp_h96ce2ff4__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U];
    } else {
        __Vtemp_h96ce2ff4__0[0U] = 0U;
        __Vtemp_h96ce2ff4__0[1U] = 0U;
        __Vtemp_h96ce2ff4__0[2U] = 0U;
    }
    bufp->fullWData(oldp+626,(__Vtemp_h96ce2ff4__0),65);
    __Vtemp_hee601f10__0[0U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U]
                                  : 0U) << 1U);
    __Vtemp_hee601f10__0[1U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U]
                                   : 0U) >> 0x1fU) 
                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U]
                                     : 0U) << 1U));
    __Vtemp_hee601f10__0[2U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) 
                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U]) 
                                 << 2U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                              ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U]
                                              : 0U) 
                                            >> 0x1fU) 
                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U]
                                                : 0U) 
                                              << 1U)));
    bufp->fullWData(oldp+629,(__Vtemp_hee601f10__0),67);
    bufp->fullCData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
    __Vtemp_hd904ae33__0[0U] = 1U;
    __Vtemp_hd904ae33__0[1U] = 0U;
    __Vtemp_hd904ae33__0[2U] = 0U;
    __Vtemp_hd904ae33__0[3U] = 0U;
    __Vtemp_hd904ae33__0[4U] = 0U;
    __Vtemp_h7688b7a5__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp_h7688b7a5__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp_h7688b7a5__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp_h7688b7a5__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp_h7688b7a5__0[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp_h83a42262__0, __Vtemp_hd904ae33__0, __Vtemp_h7688b7a5__0);
    __Vtemp_hd904ae33__1[0U] = 1U;
    __Vtemp_hd904ae33__1[1U] = 0U;
    __Vtemp_hd904ae33__1[2U] = 0U;
    __Vtemp_hd904ae33__1[3U] = 0U;
    __Vtemp_hd904ae33__1[4U] = 0U;
    __Vtemp_h7688b7a5__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp_h7688b7a5__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp_h7688b7a5__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp_h7688b7a5__1[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp_h7688b7a5__1[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp_h00d757e1__0, __Vtemp_hd904ae33__1, __Vtemp_h7688b7a5__1);
    __Vtemp_hd904ae33__2[0U] = 1U;
    __Vtemp_hd904ae33__2[1U] = 0U;
    __Vtemp_hd904ae33__2[2U] = 0U;
    __Vtemp_hd904ae33__2[3U] = 0U;
    __Vtemp_hd904ae33__2[4U] = 0U;
    __Vtemp_h7688b7a5__2[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp_h7688b7a5__2[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp_h7688b7a5__2[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp_h7688b7a5__2[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp_h7688b7a5__2[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp_hcd0c4155__0, __Vtemp_hd904ae33__2, __Vtemp_h7688b7a5__2);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_h52802c7d__0[0U] = __Vtemp_h83a42262__0[0U];
        __Vtemp_h52802c7d__0[1U] = __Vtemp_h83a42262__0[1U];
        __Vtemp_h52802c7d__0[2U] = __Vtemp_h83a42262__0[2U];
        __Vtemp_h52802c7d__0[3U] = __Vtemp_h83a42262__0[3U];
        __Vtemp_h52802c7d__0[4U] = (3U & __Vtemp_h83a42262__0[4U]);
    } else if ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_h52802c7d__0[0U] = __Vtemp_h00d757e1__0[0U];
        __Vtemp_h52802c7d__0[1U] = __Vtemp_h00d757e1__0[1U];
        __Vtemp_h52802c7d__0[2U] = __Vtemp_h00d757e1__0[2U];
        __Vtemp_h52802c7d__0[3U] = __Vtemp_h00d757e1__0[3U];
        __Vtemp_h52802c7d__0[4U] = (3U & __Vtemp_h00d757e1__0[4U]);
    } else if ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_h52802c7d__0[0U] = (__Vtemp_hcd0c4155__0[0U] 
                                    << 1U);
        __Vtemp_h52802c7d__0[1U] = ((__Vtemp_hcd0c4155__0[0U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[1U] 
                                                  << 1U));
        __Vtemp_h52802c7d__0[2U] = ((__Vtemp_hcd0c4155__0[1U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[2U] 
                                                  << 1U));
        __Vtemp_h52802c7d__0[3U] = ((__Vtemp_hcd0c4155__0[2U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[3U] 
                                                  << 1U));
        __Vtemp_h52802c7d__0[4U] = ((__Vtemp_hcd0c4155__0[3U] 
                                     >> 0x1fU) | (6U 
                                                  & (__Vtemp_hcd0c4155__0[4U] 
                                                     << 1U)));
    } else if ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_h52802c7d__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                    << 1U);
        __Vtemp_h52802c7d__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                  << 1U));
        __Vtemp_h52802c7d__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                  << 1U));
        __Vtemp_h52802c7d__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                  << 1U));
        __Vtemp_h52802c7d__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                  << 1U));
    } else if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_h52802c7d__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp_h52802c7d__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp_h52802c7d__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp_h52802c7d__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp_h52802c7d__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else if ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_h52802c7d__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp_h52802c7d__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp_h52802c7d__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp_h52802c7d__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp_h52802c7d__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp_h52802c7d__0[0U] = 0U;
        __Vtemp_h52802c7d__0[1U] = 0U;
        __Vtemp_h52802c7d__0[2U] = 0U;
        __Vtemp_h52802c7d__0[3U] = 0U;
        __Vtemp_h52802c7d__0[4U] = 0U;
    }
    bufp->fullWData(oldp+647,(__Vtemp_h52802c7d__0),131);
    bufp->fullCData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullBit(oldp+653,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                          >> 2U)))));
    bufp->fullBit(oldp+654,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
    bufp->fullBit(oldp+655,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 4U))));
    bufp->fullQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullQData(oldp+662,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                : ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                    : ((5U == (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                        ? ((0xffffffffffffffe0ULL 
                                            & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                           | (QData)((IData)(
                                                             (0x1fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))))
                                        : ((1U == (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                            : ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                    : 0ULL))))))),64);
    bufp->fullBit(oldp+664,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+665,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+666,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+667,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+668,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))) 
                             | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    bufp->fullCData(oldp+669,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
    bufp->fullBit(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullQData(oldp+671,(((0xffffffffffffff77ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                               | (QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                              >> 7U)))
                                                   ? 0x88U
                                                   : 0x80U))))),64);
    bufp->fullBit(oldp+673,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+674,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                              >> 2U)))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
                                           >> 0x20U))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data))),32);
    bufp->fullBit(oldp+675,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [3U] : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail])));
    bufp->fullQData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullBit(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[0]),64);
    bufp->fullQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[1]),64);
    bufp->fullQData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[2]),64);
    bufp->fullQData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[3]),64);
    bufp->fullBit(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
    bufp->fullCData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[0]));
    bufp->fullBit(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[1]));
    bufp->fullBit(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[2]));
    bufp->fullBit(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[3]));
    bufp->fullQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
    bufp->fullQData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
    bufp->fullQData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
    bufp->fullQData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
    bufp->fullCData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullCData(oldp+708,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U)))),6);
    __Vtemp_h643ad04b__0[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                                << 2U);
    __Vtemp_h643ad04b__0[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h643ad04b__0[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                          >> 9U)) << 3U) 
                                | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 2U)) 
                                          << 2U)) | 
                                   ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                             >> 0x20U)) 
                                    >> 0x1eU)));
    __Vtemp_h643ad04b__0[3U] = (0x4000000U | (((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 9U)) 
                                               >> 0x1dU) 
                                              | ((IData)(
                                                         ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 9U) 
                                                          >> 0x20U)) 
                                                 << 3U)));
    bufp->fullWData(oldp+709,(__Vtemp_h643ad04b__0),123);
    bufp->fullCData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data),2);
    bufp->fullCData(oldp+714,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 3U)))),6);
    bufp->fullQData(oldp+715,(((0xfffffffffffffeULL 
                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 8U)) | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                         >> 2U))))))),56);
    bufp->fullCData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                              [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 3U)))]),2);
    bufp->fullBit(oldp+718,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                   [(0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))] 
                                   >> 1U))));
    bufp->fullWData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data),128);
    bufp->fullBit(oldp+723,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
                                   >> 0x1aU))));
    bufp->fullQData(oldp+724,((0xffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                                >> 2U)))),56);
    bufp->fullQData(oldp+726,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])) 
                                                >> 2U)))),64);
    bufp->fullCData(oldp+728,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])),2);
    bufp->fullBit(oldp+729,((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U]))));
    bufp->fullQData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                              [(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))]),64);
    bufp->fullQData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
    bufp->fullQData(oldp+734,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
    bufp->fullQData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
    bufp->fullQData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
    bufp->fullIData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
    bufp->fullIData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
    bufp->fullIData(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
    bufp->fullIData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
    bufp->fullBit(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[0]));
    bufp->fullBit(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[1]));
    bufp->fullBit(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[2]));
    bufp->fullBit(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[3]));
    bufp->fullBit(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[0]));
    bufp->fullBit(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[1]));
    bufp->fullBit(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[2]));
    bufp->fullBit(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[3]));
    bufp->fullCData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
    bufp->fullBit(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
    bufp->fullCData(oldp+757,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                      + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                     - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
    bufp->fullBit(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullCData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+762,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    bufp->fullBit(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullWData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
    bufp->fullWData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
        __Vtemp_h96d8aca3__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                            >> 0xaU));
        __Vtemp_h96d8aca3__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                             >> 0xaU) 
                                            >> 0x20U));
    } else {
        __Vtemp_h96d8aca3__0[0U] = (IData)((0x3fffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
        __Vtemp_h96d8aca3__0[1U] = (IData)(((0x3fffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))) 
                                            >> 0x20U));
    }
    __Vtemp_h96d8aca3__0[2U] = 0U;
    __Vtemp_h96d8aca3__0[3U] = 0U;
    bufp->fullWData(oldp+773,(__Vtemp_h96d8aca3__0),128);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
        __Vtemp_h0fce6913__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                            >> 0xaU));
        __Vtemp_h0fce6913__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                             >> 0xaU) 
                                            >> 0x20U));
    } else {
        __Vtemp_h0fce6913__0[0U] = (IData)((0x3fffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
        __Vtemp_h0fce6913__0[1U] = (IData)(((0x3fffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))) 
                                            >> 0x20U));
    }
    __Vtemp_h0fce6913__0[2U] = 0U;
    __Vtemp_h0fce6913__0[3U] = 0U;
    bufp->fullWData(oldp+777,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+782,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullBit(oldp+783,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+787,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+790,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+793,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullBit(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+800,(vlSelf->riscv_soc__DOT__sram0__DOT__wen));
    bufp->fullBit(oldp+801,(vlSelf->riscv_soc__DOT__sram2__DOT__wen));
    bufp->fullQData(oldp+802,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullBit(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+809,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
    bufp->fullBit(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullQData(oldp+811,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+813,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+814,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+815,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                     ? (IData)(
                                                               ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                 >> 0xaU) 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               ((0x3fffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))) 
                                                                >> 0x20U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                 ? (IData)(
                                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                            >> 0xaU))
                                                                 : (IData)(
                                                                           (0x3fffffffffffffULL 
                                                                            & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U]))))))))))),54);
    bufp->fullQData(oldp+817,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                     ? (IData)(
                                                               ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                 >> 0xaU) 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               ((0x3fffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))) 
                                                                >> 0x20U))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                 ? (IData)(
                                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                            >> 0xaU))
                                                                 : (IData)(
                                                                           (0x3fffffffffffffULL 
                                                                            & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U]))))))))))),54);
    bufp->fullBit(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
    bufp->fullBit(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+821,((0xfffffffffffffff0ULL 
                               & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
    bufp->fullQData(oldp+823,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+825,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullBit(oldp+828,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
    bufp->fullQData(oldp+829,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullQData(oldp+831,((~ (1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
    bufp->fullCData(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
    __Vtemp_h7748dece__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_h7748dece__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_h7748dece__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_h7748dece__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+834,(__Vtemp_h7748dece__0),128);
    __Vtemp_h8b37abc5__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_h8b37abc5__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_h8b37abc5__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_h8b37abc5__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+838,(__Vtemp_h8b37abc5__0),128);
    __Vtemp_he6da4d43__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_he6da4d43__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_he6da4d43__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_he6da4d43__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+842,(__Vtemp_he6da4d43__0),128);
    __Vtemp_ha7b78b5e__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_ha7b78b5e__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_ha7b78b5e__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_ha7b78b5e__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+846,(__Vtemp_ha7b78b5e__0),128);
    __Vtemp_h0490666a__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h0490666a__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h0490666a__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h0490666a__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+850,(__Vtemp_h0490666a__0),128);
    __Vtemp_hca3bc04b__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_hca3bc04b__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_hca3bc04b__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_hca3bc04b__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+854,(__Vtemp_hca3bc04b__0),128);
    __Vtemp_h4060cfc7__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h4060cfc7__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h4060cfc7__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h4060cfc7__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+858,(__Vtemp_h4060cfc7__0),128);
    __Vtemp_h09a85685__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h09a85685__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h09a85685__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h09a85685__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+862,(__Vtemp_h09a85685__0),128);
    bufp->fullBit(oldp+866,(vlSelf->clock));
    bufp->fullBit(oldp+867,(vlSelf->reset));
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+868,(__Vtemp_hd56bd579__0),128);
    bufp->fullBit(oldp+872,(1U));
    bufp->fullCData(oldp+873,(0U),2);
    bufp->fullCData(oldp+874,(1U),2);
    bufp->fullCData(oldp+875,(2U),2);
    bufp->fullCData(oldp+876,(3U),2);
    bufp->fullBit(oldp+877,(0U));
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+878,(__Vtemp_hd09821c2__0),128);
}
