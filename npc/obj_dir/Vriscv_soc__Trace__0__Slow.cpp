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
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->pushNamePrefix("riscv_soc ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+871,"core_clock", false,-1);
    tracep->declBit(c+872,"core_reset", false,-1);
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
    tracep->declBit(c+871,"axi_ram_clock", false,-1);
    tracep->declBit(c+872,"axi_ram_reset", false,-1);
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
    tracep->declBit(c+871,"sram0_clock", false,-1);
    tracep->declBit(c+872,"sram0_reset", false,-1);
    tracep->declBus(c+21,"sram0_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram0_io_wen", false,-1);
    tracep->declArray(c+873,"sram0_io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"sram0_io_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"sram0_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram1_clock", false,-1);
    tracep->declBit(c+872,"sram1_reset", false,-1);
    tracep->declBus(c+21,"sram1_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram1_io_wen", false,-1);
    tracep->declArray(c+873,"sram1_io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"sram1_io_wdata", false,-1, 127,0);
    tracep->declArray(c+36,"sram1_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram2_clock", false,-1);
    tracep->declBit(c+872,"sram2_reset", false,-1);
    tracep->declBus(c+21,"sram2_io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"sram2_io_wen", false,-1);
    tracep->declArray(c+873,"sram2_io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"sram2_io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"sram2_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram3_clock", false,-1);
    tracep->declBit(c+872,"sram3_reset", false,-1);
    tracep->declBus(c+21,"sram3_io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"sram3_io_wen", false,-1);
    tracep->declArray(c+873,"sram3_io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"sram3_io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"sram3_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram4_clock", false,-1);
    tracep->declBit(c+872,"sram4_reset", false,-1);
    tracep->declBus(c+48,"sram4_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram4_io_wen", false,-1);
    tracep->declArray(c+51,"sram4_io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"sram4_io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"sram4_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram5_clock", false,-1);
    tracep->declBit(c+872,"sram5_reset", false,-1);
    tracep->declBus(c+48,"sram5_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram5_io_wen", false,-1);
    tracep->declArray(c+873,"sram5_io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"sram5_io_wdata", false,-1, 127,0);
    tracep->declArray(c+67,"sram5_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram6_clock", false,-1);
    tracep->declBit(c+872,"sram6_reset", false,-1);
    tracep->declBus(c+48,"sram6_io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"sram6_io_wen", false,-1);
    tracep->declArray(c+51,"sram6_io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"sram6_io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"sram6_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram7_clock", false,-1);
    tracep->declBit(c+872,"sram7_reset", false,-1);
    tracep->declBus(c+48,"sram7_io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"sram7_io_wen", false,-1);
    tracep->declArray(c+873,"sram7_io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"sram7_io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"sram7_io_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
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
    tracep->declBit(c+871,"mem_clock", false,-1);
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
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declQuad(c+79,"raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"rdata", false,-1, 63,0);
    tracep->declBit(c+13,"rflag", false,-1);
    tracep->declQuad(c+81,"waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"wdata", false,-1, 63,0);
    tracep->declQuad(c+83,"wmask", false,-1, 63,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
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
    tracep->declBit(c+871,"i_cache_clock", false,-1);
    tracep->declBit(c+872,"i_cache_reset", false,-1);
    tracep->declBit(c+93,"i_cache_io_flush", false,-1);
    tracep->declBit(c+94,"i_cache_io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+95,"i_cache_io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+96,"i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"i_cache_io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+99,"i_cache_io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+100,"i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+104,"i_cache_io_is_fence_i", false,-1);
    tracep->declBus(c+21,"i_cache_io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"i_cache_io_sram_wen_0", false,-1);
    tracep->declBit(c+23,"i_cache_io_sram_wen_1", false,-1);
    tracep->declArray(c+24,"i_cache_io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"i_cache_io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"i_cache_io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"i_cache_io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"i_cache_io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"i_cache_io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+105,"i_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"i_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"i_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+871,"d_cache_clock", false,-1);
    tracep->declBit(c+872,"d_cache_reset", false,-1);
    tracep->declBit(c+110,"d_cache_io_cpu_valid", false,-1);
    tracep->declQuad(c+111,"d_cache_io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+113,"d_cache_io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"d_cache_io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"d_cache_io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+119,"d_cache_io_cpu_ready", false,-1);
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
    tracep->declBit(c+120,"d_cache_io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+121,"d_cache_io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+122,"d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+124,"d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+126,"d_cache_io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+127,"d_cache_io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+128,"d_cache_io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+129,"d_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+130,"d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+132,"d_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+133,"d_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+871,"cross_bar_clock", false,-1);
    tracep->declBit(c+872,"cross_bar_reset", false,-1);
    tracep->declBit(c+105,"cross_bar_io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"cross_bar_io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+120,"cross_bar_io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+121,"cross_bar_io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+122,"cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+124,"cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+126,"cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+128,"cross_bar_io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+129,"cross_bar_io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+130,"cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+132,"cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+133,"cross_bar_io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+134,"cross_bar_io_bus1_valid", false,-1);
    tracep->declQuad(c+96,"cross_bar_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+135,"cross_bar_io_bus1_ready", false,-1);
    tracep->declBit(c+136,"cross_bar_io_bus2_valid", false,-1);
    tracep->declQuad(c+111,"cross_bar_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"cross_bar_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+137,"cross_bar_io_bus2_ready", false,-1);
    tracep->declBit(c+1,"cross_bar_io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+2,"cross_bar_io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"cross_bar_io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+6,"cross_bar_io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+7,"cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+877,"cross_bar_io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"cross_bar_io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"cross_bar_io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"cross_bar_io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"cross_bar_io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+138,"cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+139,"cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+96,"cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"cross_bar_1_io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+140,"cross_bar_1_io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+141,"cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+143,"cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+145,"cross_bar_1_io_wb_valid", false,-1);
    tracep->declQuad(c+111,"cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+146,"cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"cross_bar_1_io_wb_bits_is_w", false,-1);
    tracep->declBit(c+148,"cross_bar_1_io_wb_ready", false,-1);
    tracep->declBit(c+94,"cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+95,"cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+96,"cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+99,"cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+100,"cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+110,"cross_bar_1_io_DCache_valid", false,-1);
    tracep->declQuad(c+111,"cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+113,"cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"cross_bar_1_io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+119,"cross_bar_1_io_DCache_ready", false,-1);
    tracep->declBit(c+134,"cross_bar_1_io_bus1_valid", false,-1);
    tracep->declQuad(c+96,"cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+135,"cross_bar_1_io_bus1_ready", false,-1);
    tracep->declBit(c+136,"cross_bar_1_io_bus2_valid", false,-1);
    tracep->declQuad(c+111,"cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"cross_bar_1_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+137,"cross_bar_1_io_bus2_ready", false,-1);
    tracep->declBit(c+149,"cross_bar_1_io_clint_bus_valid", false,-1);
    tracep->declQuad(c+111,"cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+150,"cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+118,"cross_bar_1_io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+152,"cross_bar_1_io_clint_bus_ready", false,-1);
    tracep->declBit(c+871,"fetch_clock", false,-1);
    tracep->declBit(c+872,"fetch_reset", false,-1);
    tracep->declBit(c+153,"fetch_io_br_info_valid", false,-1);
    tracep->declBit(c+154,"fetch_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+155,"fetch_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"fetch_io_br_info_taken", false,-1);
    tracep->declQuad(c+158,"fetch_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+160,"fetch_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+161,"fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+163,"fetch_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"fetch_io_flush", false,-1);
    tracep->declBit(c+138,"fetch_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+139,"fetch_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+96,"fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"fetch_io_cpu_data_ready", false,-1);
    tracep->declBit(c+140,"fetch_io_cpu_data_valid", false,-1);
    tracep->declQuad(c+141,"fetch_io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+143,"fetch_io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+166,"fetch_io_put_pc_ready", false,-1);
    tracep->declBit(c+167,"fetch_io_put_pc_valid", false,-1);
    tracep->declBus(c+168,"fetch_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+169,"fetch_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"fetch_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+93,"fetch_io_out_flush", false,-1);
    tracep->declBit(c+871,"execute_clock", false,-1);
    tracep->declBit(c+872,"execute_reset", false,-1);
    tracep->declBit(c+166,"execute_io_op_datas_ready", false,-1);
    tracep->declBit(c+172,"execute_io_op_datas_valid", false,-1);
    tracep->declBus(c+173,"execute_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+174,"execute_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+175,"execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+176,"execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+178,"execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+179,"execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"execute_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"execute_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+184,"execute_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+185,"execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+186,"execute_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+187,"execute_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+188,"execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+189,"execute_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+191,"execute_io_irq_time_irq", false,-1);
    tracep->declBit(c+192,"execute_io_irq_soft_irq", false,-1);
    tracep->declQuad(c+193,"execute_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+195,"execute_io_mie", false,-1, 63,0);
    tracep->declQuad(c+197,"execute_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+199,"execute_io_mtvec", false,-1, 63,0);
    tracep->declBit(c+201,"execute_io_wb_valid", false,-1);
    tracep->declBus(c+202,"execute_io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+203,"execute_io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+205,"execute_io_csr_valid", false,-1);
    tracep->declBus(c+206,"execute_io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+207,"execute_io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+209,"execute_io_csr_except_is_except", false,-1);
    tracep->declBit(c+210,"execute_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+211,"execute_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+212,"execute_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+213,"execute_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+215,"execute_io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+217,"execute_io_commit", false,-1);
    tracep->declBus(c+218,"execute_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+219,"execute_io_difftest_peripheral", false,-1);
    tracep->declQuad(c+163,"execute_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"execute_io_flush", false,-1);
    tracep->declBit(c+104,"execute_io_fence_i", false,-1);
    tracep->declBit(c+153,"execute_io_br_info_valid", false,-1);
    tracep->declBit(c+154,"execute_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+155,"execute_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"execute_io_br_info_taken", false,-1);
    tracep->declQuad(c+158,"execute_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+160,"execute_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+161,"execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+145,"execute_io_bus_valid", false,-1);
    tracep->declQuad(c+111,"execute_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+146,"execute_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"execute_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"execute_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"execute_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+148,"execute_io_bus_ready", false,-1);
    tracep->declBit(c+871,"decode_clock", false,-1);
    tracep->declBit(c+872,"decode_reset", false,-1);
    tracep->declBit(c+166,"decode_io_get_inst_ready", false,-1);
    tracep->declBit(c+167,"decode_io_get_inst_valid", false,-1);
    tracep->declBus(c+168,"decode_io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+169,"decode_io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"decode_io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+220,"decode_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+221,"decode_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+223,"decode_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+224,"decode_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+226,"decode_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+227,"decode_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+166,"decode_io_op_datas_ready", false,-1);
    tracep->declBit(c+172,"decode_io_op_datas_valid", false,-1);
    tracep->declBus(c+173,"decode_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+174,"decode_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+175,"decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+176,"decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+178,"decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+179,"decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"decode_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"decode_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+184,"decode_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+185,"decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+186,"decode_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+187,"decode_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+188,"decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+189,"decode_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+165,"decode_io_flush", false,-1);
    tracep->declBit(c+871,"commit_clock", false,-1);
    tracep->declBit(c+872,"commit_reset", false,-1);
    tracep->declBus(c+220,"commit_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+221,"commit_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+223,"commit_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+224,"commit_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+201,"commit_io_normal_wb_valid", false,-1);
    tracep->declBus(c+202,"commit_io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+203,"commit_io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+226,"commit_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+227,"commit_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+205,"commit_io_csr_wb_valid", false,-1);
    tracep->declBus(c+206,"commit_io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+207,"commit_io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+209,"commit_io_csr_except_is_except", false,-1);
    tracep->declBit(c+210,"commit_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+211,"commit_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+212,"commit_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+213,"commit_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+215,"commit_io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+199,"commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+197,"commit_io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+193,"commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+195,"commit_io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+217,"commit_io_commit", false,-1);
    tracep->declBus(c+218,"commit_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+219,"commit_io_difftest_peripheral", false,-1);
    tracep->declBit(c+871,"clint_de_clock", false,-1);
    tracep->declBit(c+872,"clint_de_reset", false,-1);
    tracep->declBit(c+149,"clint_de_io_valid", false,-1);
    tracep->declQuad(c+111,"clint_de_io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"clint_de_io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+150,"clint_de_io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+118,"clint_de_io_bits_is_w", false,-1);
    tracep->declBit(c+152,"clint_de_io_ready", false,-1);
    tracep->declBit(c+192,"clint_de_io_soft_irq", false,-1);
    tracep->declBit(c+191,"clint_de_io_time_irq", false,-1);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+149,"io_valid", false,-1);
    tracep->declQuad(c+111,"io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+150,"io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+118,"io_bits_is_w", false,-1);
    tracep->declBit(c+152,"io_ready", false,-1);
    tracep->declBit(c+192,"io_soft_irq", false,-1);
    tracep->declBit(c+191,"io_time_irq", false,-1);
    tracep->declBit(c+192,"reg_msip", false,-1);
    tracep->declQuad(c+229,"reg_mtime", false,-1, 63,0);
    tracep->declQuad(c+231,"reg_mtimecmp", false,-1, 63,0);
    tracep->declBit(c+152,"reg_ready", false,-1);
    tracep->declQuad(c+150,"red_rdata", false,-1, 63,0);
    tracep->declBit(c+233,"reg_state", false,-1);
    tracep->declBit(c+234,"is_misp", false,-1);
    tracep->declBit(c+235,"is_mtimecmp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("commit ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+220,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+221,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+223,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+224,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+201,"io_normal_wb_valid", false,-1);
    tracep->declBus(c+202,"io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+203,"io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+226,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+227,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+205,"io_csr_wb_valid", false,-1);
    tracep->declBus(c+206,"io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+207,"io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+209,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+210,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+211,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+212,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+213,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+215,"io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+199,"io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+197,"io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+193,"io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+195,"io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+217,"io_commit", false,-1);
    tracep->declBus(c+218,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+219,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+871,"csr_reg_clock", false,-1);
    tracep->declBit(c+872,"csr_reg_reset", false,-1);
    tracep->declBus(c+206,"csr_reg_io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+207,"csr_reg_io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+205,"csr_reg_io_in_w_csr_en", false,-1);
    tracep->declQuad(c+215,"csr_reg_io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+213,"csr_reg_io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+210,"csr_reg_io_in_time_irq", false,-1);
    tracep->declBit(c+211,"csr_reg_io_in_soft_irq", false,-1);
    tracep->declBus(c+236,"csr_reg_io_in_exception", false,-1, 4,0);
    tracep->declBit(c+209,"csr_reg_io_in_is_exception", false,-1);
    tracep->declBit(c+217,"csr_reg_io_in_commit", false,-1);
    tracep->declBus(c+226,"csr_reg_io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+227,"csr_reg_io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+199,"csr_reg_io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+197,"csr_reg_io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+193,"csr_reg_io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+195,"csr_reg_io_r_csr_mie", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+237+i*2,"reg_file", true,(i+0), 63,0);
    }
    tracep->declQuad(c+301,"read_rs1_from_file", false,-1, 63,0);
    tracep->declQuad(c+303,"read_rs2_from_file", false,-1, 63,0);
    tracep->declQuad(c+305,"difftest_commit", false,-1, 63,0);
    tracep->declQuad(c+307,"difftest_inst", false,-1, 63,0);
    tracep->declQuad(c+309,"difftest_pc", false,-1, 63,0);
    tracep->declQuad(c+311,"inst_counter", false,-1, 63,0);
    tracep->declQuad(c+313,"difftest_irq", false,-1, 63,0);
    tracep->declQuad(c+315,"difftest_peripheral", false,-1, 63,0);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+206,"io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+207,"io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+205,"io_in_w_csr_en", false,-1);
    tracep->declQuad(c+215,"io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+213,"io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+210,"io_in_time_irq", false,-1);
    tracep->declBit(c+211,"io_in_soft_irq", false,-1);
    tracep->declBus(c+236,"io_in_exception", false,-1, 4,0);
    tracep->declBit(c+209,"io_in_is_exception", false,-1);
    tracep->declBit(c+217,"io_in_commit", false,-1);
    tracep->declBus(c+226,"io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+227,"io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+199,"io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+197,"io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+193,"io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+195,"io_r_csr_mie", false,-1, 63,0);
    tracep->declBit(c+317,"irq", false,-1);
    tracep->declQuad(c+318,"reg_mstatus", false,-1, 63,0);
    tracep->declQuad(c+320,"reg_mie", false,-1, 63,0);
    tracep->declQuad(c+322,"reg_mtvec", false,-1, 63,0);
    tracep->declQuad(c+324,"reg_mscratch", false,-1, 63,0);
    tracep->declQuad(c+326,"reg_mepc", false,-1, 63,0);
    tracep->declQuad(c+328,"reg_mcause", false,-1, 63,0);
    tracep->declQuad(c+330,"reg_mtval", false,-1, 63,0);
    tracep->declQuad(c+332,"reg_mcycle", false,-1, 63,0);
    tracep->declQuad(c+334,"reg_minstret", false,-1, 63,0);
    tracep->declQuad(c+336,"csr_rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cross_bar ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+105,"io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+120,"io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+121,"io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+122,"io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+124,"io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+126,"io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+128,"io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+129,"io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+130,"io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+132,"io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+133,"io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+134,"io_bus1_valid", false,-1);
    tracep->declQuad(c+96,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+135,"io_bus1_ready", false,-1);
    tracep->declBit(c+136,"io_bus2_valid", false,-1);
    tracep->declQuad(c+111,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+137,"io_bus2_ready", false,-1);
    tracep->declBit(c+1,"io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+2,"io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+6,"io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+7,"io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+877,"io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+338,"w_locked", false,-1);
    tracep->declBus(c+339,"w_lockId", false,-1, 1,0);
    tracep->declBus(c+340,"w_chosen", false,-1, 1,0);
    tracep->declBus(c+341,"reg_r_cnt", false,-1, 1,0);
    tracep->declBit(c+342,"r_locked", false,-1);
    tracep->declBus(c+343,"r_lockId", false,-1, 1,0);
    tracep->declBus(c+344,"r_chosen", false,-1, 1,0);
    tracep->declBit(c+345,"reg_aw_ok", false,-1);
    tracep->declBit(c+346,"reg_ar_ok", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cross_bar_1 ");
    tracep->declBit(c+138,"io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+139,"io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+96,"io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+140,"io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+141,"io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+143,"io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+145,"io_wb_valid", false,-1);
    tracep->declQuad(c+111,"io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+146,"io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_wb_bits_is_w", false,-1);
    tracep->declBit(c+148,"io_wb_ready", false,-1);
    tracep->declBit(c+94,"io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+95,"io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+96,"io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+99,"io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+100,"io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+110,"io_DCache_valid", false,-1);
    tracep->declQuad(c+111,"io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+113,"io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+119,"io_DCache_ready", false,-1);
    tracep->declBit(c+134,"io_bus1_valid", false,-1);
    tracep->declQuad(c+96,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+135,"io_bus1_ready", false,-1);
    tracep->declBit(c+136,"io_bus2_valid", false,-1);
    tracep->declQuad(c+111,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+137,"io_bus2_ready", false,-1);
    tracep->declBit(c+149,"io_clint_bus_valid", false,-1);
    tracep->declQuad(c+111,"io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+150,"io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+118,"io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+152,"io_clint_bus_ready", false,-1);
    tracep->declBit(c+347,"fetch_low_address", false,-1);
    tracep->declBit(c+348,"low_address", false,-1);
    tracep->declBit(c+349,"not_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+110,"io_cpu_valid", false,-1);
    tracep->declQuad(c+111,"io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+113,"io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+119,"io_cpu_ready", false,-1);
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
    tracep->declBit(c+120,"io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+121,"io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+122,"io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+124,"io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+126,"io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+127,"io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+128,"io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+129,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+130,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+132,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+133,"io_cache_bus_r_ready", false,-1);
    tracep->declQuad(c+350,"Tag", false,-1, 53,0);
    tracep->declBus(c+352,"Index", false,-1, 5,0);
    tracep->declBus(c+353,"Offset", false,-1, 3,0);
    tracep->declQuad(c+115,"wdata", false,-1, 63,0);
    tracep->declBus(c+117,"wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"is_w", false,-1);
    tracep->declBus(c+354,"reg_cache_state", false,-1, 1,0);
    tracep->declQuad(c+355,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+357,"reg_wstrb", false,-1, 7,0);
    tracep->declBit(c+358,"reg_is_w", false,-1);
    tracep->declQuad(c+359,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+361,"reg_index", false,-1, 5,0);
    tracep->declBus(c+362,"reg_offset", false,-1, 3,0);
    tracep->declBit(c+119,"reg_ready", false,-1);
    tracep->declQuad(c+113,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+363,"reg_cache_write", false,-1);
    tracep->declBus(c+364,"reg_cache_wstrb", false,-1, 15,0);
    tracep->declArray(c+59,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+365,"reg_chosen_tag", false,-1);
    tracep->declBus(c+878,"cache_idle", false,-1, 1,0);
    tracep->declBus(c+879,"read_cache", false,-1, 1,0);
    tracep->declBus(c+880,"cache_and_bus", false,-1, 1,0);
    tracep->declBus(c+881,"cache_end", false,-1, 1,0);
    tracep->declArray(c+366,"cache_mask", false,-1, 127,0);
    tracep->declArray(c+370,"cache_wdata", false,-1, 127,0);
    tracep->declBus(c+374,"cache_wstrb", false,-1, 15,0);
    tracep->declBit(c+375,"is_sram0_write", false,-1);
    tracep->declBit(c+376,"is_sram2_write", false,-1);
    tracep->declBit(c+882,"clear_cache", false,-1);
    tracep->declQuad(c+377,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+379,"reg_sram0_dirty", false,-1, 63,0);
    tracep->declQuad(c+381,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+383,"neg_chose_bit", false,-1, 63,0);
    tracep->declQuad(c+385,"reg_sram2_valid", false,-1, 63,0);
    tracep->declQuad(c+387,"reg_sram2_dirty", false,-1, 63,0);
    tracep->declQuad(c+130,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+129,"reg_r_valid", false,-1);
    tracep->declQuad(c+122,"reg_w_waddr", false,-1, 63,0);
    tracep->declQuad(c+124,"reg_w_wdata", false,-1, 63,0);
    tracep->declBit(c+126,"reg_w_wlast", false,-1);
    tracep->declBit(c+121,"reg_w_valid", false,-1);
    tracep->declBit(c+127,"reg_b_ready", false,-1);
    tracep->declQuad(c+389,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+391,"tag_2", false,-1, 53,0);
    tracep->declBit(c+393,"hit_0", false,-1);
    tracep->declBit(c+394,"hit_2", false,-1);
    tracep->declBit(c+395,"tag_valid_0", false,-1);
    tracep->declBit(c+396,"tag_valid_2", false,-1);
    tracep->declBit(c+397,"tag_dirty_0", false,-1);
    tracep->declBit(c+398,"tag_dirty_2", false,-1);
    tracep->declQuad(c+399,"rdata0", false,-1, 63,0);
    tracep->declQuad(c+401,"rdata2", false,-1, 63,0);
    tracep->declArray(c+63,"rdata_0", false,-1, 127,0);
    tracep->declArray(c+71,"rdata_2", false,-1, 127,0);
    tracep->declQuad(c+403,"reg_lru_2", false,-1, 63,0);
    tracep->declBit(c+405,"LRU_2", false,-1);
    tracep->declBit(c+406,"reg_start_operation", false,-1);
    tracep->declBus(c+407,"reg_cnt", false,-1, 1,0);
    tracep->declBit(c+408,"reg_rbus_finish", false,-1);
    tracep->declBit(c+409,"reg_wbus_finish", false,-1);
    tracep->declBit(c+410,"hit_0_and_valid_0", false,-1);
    tracep->declBit(c+411,"hit_2_and_valid_2", false,-1);
    tracep->declQuad(c+412,"temp_addr", false,-1, 63,0);
    tracep->declBit(c+414,"io_cache_bus_r_fire", false,-1);
    tracep->declBit(c+415,"io_cache_bus_b_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+166,"io_get_inst_ready", false,-1);
    tracep->declBit(c+167,"io_get_inst_valid", false,-1);
    tracep->declBus(c+168,"io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+169,"io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+220,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+221,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+223,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+224,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+226,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+227,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+166,"io_op_datas_ready", false,-1);
    tracep->declBit(c+172,"io_op_datas_valid", false,-1);
    tracep->declBus(c+173,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+174,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+175,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+176,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+178,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+179,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+184,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+185,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+186,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+187,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+188,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+189,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+165,"io_flush", false,-1);
    tracep->declBit(c+172,"reg_valid", false,-1);
    tracep->declBus(c+173,"reg_opType", false,-1, 2,0);
    tracep->declBus(c+174,"reg_exuType", false,-1, 6,0);
    tracep->declBus(c+175,"reg_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+176,"reg_rs1_data", false,-1, 63,0);
    tracep->declBus(c+178,"reg_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+179,"reg_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"reg_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"reg_pc", false,-1, 63,0);
    tracep->declBus(c+184,"reg_inst", false,-1, 31,0);
    tracep->declBus(c+185,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+186,"reg_dest_is_reg", false,-1);
    tracep->declBus(c+188,"reg_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+189,"reg_csr_data", false,-1, 63,0);
    tracep->declBit(c+187,"reg_is_pre", false,-1);
    tracep->declBus(c+223,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+220,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+226,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+416,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+417,"fun", false,-1, 2,0);
    tracep->declBus(c+418,"fun_exuType", false,-1, 4,0);
    tracep->declBus(c+419,"fun_op", false,-1, 2,0);
    tracep->declBit(c+420,"temp_system_is_pri", false,-1);
    tracep->declBit(c+421,"temp_system_is_imm", false,-1);
    tracep->declBit(c+422,"temp_system_rs1", false,-1);
    tracep->declBus(c+423,"temp_system_1", false,-1, 6,0);
    tracep->declBus(c+424,"temp_system_2", false,-1, 2,0);
    tracep->declBit(c+425,"temp_system_3", false,-1);
    tracep->declBit(c+426,"temp_system_4", false,-1);
    tracep->declBus(c+427,"temp_mem_itype", false,-1, 3,0);
    tracep->declBit(c+428,"temp_mem_dest", false,-1);
    tracep->declBit(c+428,"temp_op_is_imm", false,-1);
    tracep->declBit(c+429,"is_sr", false,-1);
    tracep->declBus(c+430,"temp_kk", false,-1, 5,0);
    tracep->declBus(c+431,"temp_op_exuType", false,-1, 5,0);
    tracep->declBus(c+432,"temp_op_itype", false,-1, 3,0);
    tracep->declBit(c+433,"temp_op_rs2", false,-1);
    tracep->declBus(c+434,"temp_op", false,-1, 1,0);
    tracep->declBus(c+435,"temp_jal_jalr_1", false,-1, 6,0);
    tracep->declBus(c+436,"temp_jal_jalr_2", false,-1, 3,0);
    tracep->declBit(c+437,"temp_jal_jalr_4", false,-1);
    tracep->declBus(c+438,"instType", false,-1, 3,0);
    tracep->declBit(c+439,"dest_is_reg", false,-1);
    tracep->declBit(c+440,"rs1_is_reg", false,-1);
    tracep->declBit(c+441,"rs2_is_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+166,"io_op_datas_ready", false,-1);
    tracep->declBit(c+172,"io_op_datas_valid", false,-1);
    tracep->declBus(c+173,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+174,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+175,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+176,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+178,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+179,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+184,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+185,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+186,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+187,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+188,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+189,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+191,"io_irq_time_irq", false,-1);
    tracep->declBit(c+192,"io_irq_soft_irq", false,-1);
    tracep->declQuad(c+193,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+195,"io_mie", false,-1, 63,0);
    tracep->declQuad(c+197,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+199,"io_mtvec", false,-1, 63,0);
    tracep->declBit(c+201,"io_wb_valid", false,-1);
    tracep->declBus(c+202,"io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+203,"io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+205,"io_csr_valid", false,-1);
    tracep->declBus(c+206,"io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+207,"io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+209,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+210,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+211,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+212,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+213,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+215,"io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+217,"io_commit", false,-1);
    tracep->declBus(c+218,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+219,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+163,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"io_flush", false,-1);
    tracep->declBit(c+104,"io_fence_i", false,-1);
    tracep->declBit(c+153,"io_br_info_valid", false,-1);
    tracep->declBit(c+154,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+155,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"io_br_info_taken", false,-1);
    tracep->declQuad(c+158,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+160,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+161,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+145,"io_bus_valid", false,-1);
    tracep->declQuad(c+111,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+146,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+148,"io_bus_ready", false,-1);
    tracep->declBit(c+442,"alu_exu_io_valid", false,-1);
    tracep->declBit(c+187,"alu_exu_io_is_pre", false,-1);
    tracep->declBit(c+443,"alu_exu_io_br_info_valid", false,-1);
    tracep->declBit(c+444,"alu_exu_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+445,"alu_exu_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+447,"alu_exu_io_br_info_taken", false,-1);
    tracep->declQuad(c+448,"alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+160,"alu_exu_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+161,"alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+173,"alu_exu_io_opType", false,-1, 2,0);
    tracep->declBus(c+174,"alu_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+450,"alu_exu_io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+452,"alu_exu_io_op_data2", false,-1, 63,0);
    tracep->declBus(c+181,"alu_exu_io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"alu_exu_io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+454,"alu_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+444,"alu_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+448,"alu_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+871,"mem_exu_clock", false,-1);
    tracep->declBit(c+872,"mem_exu_reset", false,-1);
    tracep->declBit(c+456,"mem_exu_io_valid", false,-1);
    tracep->declBus(c+174,"mem_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+450,"mem_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+452,"mem_exu_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"mem_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+457,"mem_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+459,"mem_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+460,"mem_exu_io_ready", false,-1);
    tracep->declBit(c+145,"mem_exu_io_bus_valid", false,-1);
    tracep->declQuad(c+111,"mem_exu_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+146,"mem_exu_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"mem_exu_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"mem_exu_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+148,"mem_exu_io_bus_ready", false,-1);
    tracep->declBit(c+219,"mem_exu_io_difftest_peripheral", false,-1);
    tracep->declBit(c+871,"mu_exu_clock", false,-1);
    tracep->declBit(c+872,"mu_exu_reset", false,-1);
    tracep->declBit(c+461,"mu_exu_io_valid", false,-1);
    tracep->declBus(c+174,"mu_exu_io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+450,"mu_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+452,"mu_exu_io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+462,"mu_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+464,"mu_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+465,"mu_exu_io_ready", false,-1);
    tracep->declBit(c+466,"system_exu_io_valid", false,-1);
    tracep->declBus(c+174,"system_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+467,"system_exu_io_csr_data", false,-1, 63,0);
    tracep->declBus(c+188,"system_exu_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+181,"system_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+450,"system_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+197,"system_exu_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+193,"system_exu_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+467,"system_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+469,"system_exu_io_csr_is_w", false,-1);
    tracep->declQuad(c+470,"system_exu_io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+472,"system_exu_io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+473,"system_exu_io_is_except", false,-1);
    tracep->declBus(c+474,"system_exu_io_exception", false,-1, 5,0);
    tracep->declBit(c+475,"system_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+197,"system_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+476,"in_data_valid", false,-1);
    tracep->declBit(c+166,"ready", false,-1);
    tracep->declBus(c+477,"reg_valid", false,-1, 3,0);
    tracep->declBit(c+478,"reg_alu_valid", false,-1);
    tracep->declBit(c+479,"reg_mem_valid", false,-1);
    tracep->declBit(c+480,"reg_mu_valid", false,-1);
    tracep->declBit(c+481,"reg_system_valid", false,-1);
    tracep->declBus(c+482,"valid", false,-1, 3,0);
    tracep->declBit(c+483,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+484,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBus(c+202,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+153,"reg_br_valid", false,-1);
    tracep->declBit(c+154,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+155,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"reg_taken", false,-1);
    tracep->declQuad(c+158,"reg_br_next_pc", false,-1, 63,0);
    tracep->declQuad(c+207,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+206,"reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+486,"reg_csr_is_w", false,-1);
    tracep->declBit(c+487,"reg_is_except", false,-1);
    tracep->declBus(c+212,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+488,"reg_is_time_irq", false,-1);
    tracep->declBit(c+489,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+213,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+215,"reg_except_pc", false,-1, 63,0);
    tracep->declBit(c+490,"time_irq", false,-1);
    tracep->declBit(c+491,"soft_irq", false,-1);
    tracep->declBit(c+492,"irq", false,-1);
    tracep->declQuad(c+163,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+493,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+494,"reg_fence_i", false,-1);
    tracep->declBit(c+495,"reg_commit", false,-1);
    tracep->declBus(c+218,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+442,"io_valid", false,-1);
    tracep->declBit(c+187,"io_is_pre", false,-1);
    tracep->declBit(c+443,"io_br_info_valid", false,-1);
    tracep->declBit(c+444,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+445,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+447,"io_br_info_taken", false,-1);
    tracep->declQuad(c+448,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+160,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+161,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+173,"io_opType", false,-1, 2,0);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+450,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+452,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+181,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+454,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+444,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+448,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+496,"is_32", false,-1);
    tracep->declQuad(c+497,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+499,"op_data2", false,-1, 63,0);
    tracep->declQuad(c+501,"op_imm", false,-1, 63,0);
    tracep->declBit(c+503,"rs2_is_imm", false,-1);
    tracep->declQuad(c+504,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+506,"rs1_is_pc", false,-1);
    tracep->declBit(c+507,"is_sra", false,-1);
    tracep->declQuad(c+508,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+510,"temp_rs2_data", false,-1, 63,0);
    tracep->declArray(c+512,"add_sub_result", false,-1, 64,0);
    tracep->declBit(c+515,"u_rs1_l_rs2", false,-1);
    tracep->declBit(c+516,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+517,"shift_rs2_data", false,-1, 5,0);
    tracep->declArray(c+518,"sll_temp", false,-1, 126,0);
    tracep->declQuad(c+522,"srl_temp", false,-1, 63,0);
    tracep->declQuad(c+524,"sra_temp", false,-1, 63,0);
    tracep->declQuad(c+526,"sr_temp", false,-1, 63,0);
    tracep->declQuad(c+528,"result_data", false,-1, 63,0);
    tracep->declBit(c+160,"is_pre", false,-1);
    tracep->declBit(c+530,"is_br", false,-1);
    tracep->declBit(c+531,"is_eq", false,-1);
    tracep->declQuad(c+532,"temp_1", false,-1, 63,0);
    tracep->declArray(c+534,"add_pc", false,-1, 64,0);
    tracep->declQuad(c+537,"op_pc_4", false,-1, 63,0);
    tracep->declArray(c+539,"temp_result_pc", false,-1, 64,0);
    tracep->declQuad(c+542,"dst_data", false,-1, 63,0);
    tracep->declQuad(c+544,"next_pc", false,-1, 63,0);
    tracep->declBit(c+546,"valid_next_pc", false,-1);
    tracep->declBit(c+443,"br_valid", false,-1);
    tracep->declBit(c+547,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+456,"io_valid", false,-1);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+450,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+452,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+457,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+459,"io_dest_is_w", false,-1);
    tracep->declBit(c+460,"io_ready", false,-1);
    tracep->declBit(c+145,"io_bus_valid", false,-1);
    tracep->declQuad(c+111,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+146,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+148,"io_bus_ready", false,-1);
    tracep->declBit(c+219,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+501,"imm", false,-1, 63,0);
    tracep->declBit(c+460,"reg_ready", false,-1);
    tracep->declQuad(c+548,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+550,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+552,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+553,"reg_bus_is_w", false,-1);
    tracep->declBit(c+554,"reg_bus_valid", false,-1);
    tracep->declQuad(c+457,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+459,"reg_w_rs_en", false,-1);
    tracep->declBus(c+555,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+219,"reg_difftest_peripheral", false,-1);
    tracep->declQuad(c+556,"mem_r_data", false,-1, 63,0);
    tracep->declQuad(c+558,"mem_data_result", false,-1, 63,0);
    tracep->declQuad(c+560,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+562,"w_mem_en", false,-1);
    tracep->declQuad(c+563,"mem_wstrb", false,-1, 63,0);
    tracep->declBit(c+565,"reg_ls_state", false,-1);
    tracep->declArray(c+566,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+570,"chose_chancel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+461,"io_valid", false,-1);
    tracep->declBus(c+174,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+450,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+452,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+462,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+464,"io_dest_is_w", false,-1);
    tracep->declBit(c+465,"io_ready", false,-1);
    tracep->declBit(c+871,"div_clock", false,-1);
    tracep->declBit(c+872,"div_reset", false,-1);
    tracep->declBit(c+571,"div_io_valid", false,-1);
    tracep->declQuad(c+450,"div_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+452,"div_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+174,"div_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+572,"div_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+574,"div_io_dest_is_w", false,-1);
    tracep->declBit(c+575,"div_io_ready", false,-1);
    tracep->declBit(c+871,"mul_clock", false,-1);
    tracep->declBit(c+872,"mul_reset", false,-1);
    tracep->declBit(c+576,"mul_io_valid", false,-1);
    tracep->declQuad(c+450,"mul_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+452,"mul_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+174,"mul_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+577,"mul_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+579,"mul_io_dest_is_w", false,-1);
    tracep->declBit(c+580,"mul_io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+571,"io_valid", false,-1);
    tracep->declQuad(c+450,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+452,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+572,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+574,"io_dest_is_w", false,-1);
    tracep->declBit(c+575,"io_ready", false,-1);
    tracep->declBit(c+496,"is_32", false,-1);
    tracep->declBit(c+581,"is_signed", false,-1);
    tracep->declArray(c+582,"dividend", false,-1, 64,0);
    tracep->declArray(c+585,"divisor", false,-1, 64,0);
    tracep->declArray(c+588,"rem", false,-1, 64,0);
    tracep->declArray(c+591,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+594,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+597,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+600,"reg_q", false,-1, 65,0);
    tracep->declArray(c+603,"neg_divisor", false,-1, 64,0);
    tracep->declBus(c+606,"reg_state", false,-1, 1,0);
    tracep->declBus(c+607,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+608,"reg_exuType", false,-1, 6,0);
    tracep->declArray(c+609,"temp_result", false,-1, 131,0);
    tracep->declBit(c+614,"rem_is_0", false,-1);
    tracep->declBit(c+615,"rem_is_neg_div", false,-1);
    tracep->declBit(c+616,"rem_is_div", false,-1);
    tracep->declBit(c+617,"is_need_correct", false,-1);
    tracep->declBit(c+574,"reg_dest_is_w", false,-1);
    tracep->declBit(c+575,"reg_ready", false,-1);
    tracep->declBit(c+618,"reg_is_32", false,-1);
    tracep->declBit(c+619,"reg_is_rem", false,-1);
    tracep->declQuad(c+620,"rem_adjust", false,-1, 63,0);
    tracep->declQuad(c+622,"q_adjust", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+576,"io_valid", false,-1);
    tracep->declQuad(c+450,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+452,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+577,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+579,"io_dest_is_w", false,-1);
    tracep->declBit(c+580,"io_ready", false,-1);
    tracep->declBit(c+624,"is_32", false,-1);
    tracep->declBit(c+625,"is_rs1_signed", false,-1);
    tracep->declBit(c+496,"is_rs2_signed", false,-1);
    tracep->declArray(c+626,"mul_data1", false,-1, 129,0);
    tracep->declArray(c+631,"mul_data2", false,-1, 64,0);
    tracep->declArray(c+634,"temp_mul2", false,-1, 66,0);
    tracep->declBit(c+580,"reg_ready", false,-1);
    tracep->declBus(c+637,"reg_state", false,-1, 1,0);
    tracep->declArray(c+638,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+641,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+646,"reg_result", false,-1, 129,0);
    tracep->declBus(c+651,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+579,"reg_dest_is_w", false,-1);
    tracep->declArray(c+652,"pp", false,-1, 130,0);
    tracep->declBus(c+657,"reg_cnt", false,-1, 6,0);
    tracep->declBit(c+658,"reg_not_h", false,-1);
    tracep->declBit(c+659,"reg_is_32", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+466,"io_valid", false,-1);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+467,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+188,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+181,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+450,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+197,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+193,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+467,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+469,"io_csr_is_w", false,-1);
    tracep->declQuad(c+470,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+472,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+473,"io_is_except", false,-1);
    tracep->declBus(c+474,"io_exception", false,-1, 5,0);
    tracep->declBit(c+475,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+197,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+501,"imm", false,-1, 63,0);
    tracep->declBit(c+660,"is_imm", false,-1);
    tracep->declQuad(c+661,"op_data", false,-1, 63,0);
    tracep->declQuad(c+663,"or_result", false,-1, 63,0);
    tracep->declQuad(c+665,"and_result", false,-1, 63,0);
    tracep->declQuad(c+667,"temp_csr_result_data", false,-1, 63,0);
    tracep->declBit(c+669,"is_mret", false,-1);
    tracep->declBit(c+670,"is_sret", false,-1);
    tracep->declBit(c+671,"is_ecall", false,-1);
    tracep->declBit(c+672,"is_ebreak", false,-1);
    tracep->declBit(c+673,"is_except", false,-1);
    tracep->declBus(c+674,"exception", false,-1, 3,0);
    tracep->declBit(c+675,"is_ret", false,-1);
    tracep->declQuad(c+676,"result_status", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+153,"io_br_info_valid", false,-1);
    tracep->declBit(c+154,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+155,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"io_br_info_taken", false,-1);
    tracep->declQuad(c+158,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+160,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+161,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+163,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"io_flush", false,-1);
    tracep->declBit(c+138,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+139,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+96,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"io_cpu_data_ready", false,-1);
    tracep->declBit(c+140,"io_cpu_data_valid", false,-1);
    tracep->declQuad(c+141,"io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+143,"io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+166,"io_put_pc_ready", false,-1);
    tracep->declBit(c+167,"io_put_pc_valid", false,-1);
    tracep->declBus(c+168,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+169,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+93,"io_out_flush", false,-1);
    tracep->declBit(c+871,"ibuf_clock", false,-1);
    tracep->declBit(c+872,"ibuf_reset", false,-1);
    tracep->declBit(c+165,"ibuf_io_flush", false,-1);
    tracep->declBit(c+98,"ibuf_io_cache_buf_ready", false,-1);
    tracep->declBit(c+678,"ibuf_io_cache_buf_valid", false,-1);
    tracep->declQuad(c+143,"ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+679,"ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+680,"ibuf_io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+166,"ibuf_io_put_pc_ready", false,-1);
    tracep->declBit(c+167,"ibuf_io_put_pc_valid", false,-1);
    tracep->declBus(c+168,"ibuf_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+169,"ibuf_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"ibuf_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+871,"br_predictor_clock", false,-1);
    tracep->declBit(c+872,"br_predictor_reset", false,-1);
    tracep->declBit(c+153,"br_predictor_io_br_info_valid", false,-1);
    tracep->declBit(c+154,"br_predictor_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+155,"br_predictor_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"br_predictor_io_br_info_taken", false,-1);
    tracep->declQuad(c+158,"br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+96,"br_predictor_io_pc", false,-1, 63,0);
    tracep->declQuad(c+681,"br_predictor_io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+683,"br_predictor_io_pre_valid", false,-1);
    tracep->declQuad(c+96,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+684,"reg_flush", false,-1);
    tracep->declQuad(c+685,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+139,"reg_bus_valid", false,-1);
    tracep->declBus(c+687,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+688,"pre_info_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+689+i*2,"pre_info_fifo", true,(i+0), 63,0);
    }
    tracep->declBit(c+697,"pre_enq", false,-1);
    tracep->declBus(c+698,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+699,"is_pre_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+700+i*1,"is_pre_fifo", true,(i+0));
    }
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+153,"io_br_info_valid", false,-1);
    tracep->declBit(c+154,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+155,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"io_br_info_taken", false,-1);
    tracep->declQuad(c+158,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+96,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+681,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+683,"io_pre_valid", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+704+i*2,"RAS", true,(i+0), 63,0);
    }
    tracep->declBus(c+712,"reg_head", false,-1, 2,0);
    tracep->declBus(c+713,"update_index", false,-1, 5,0);
    tracep->declArray(c+714,"update_btb_data", false,-1, 122,0);
    tracep->declBus(c+718,"update_pht_data", false,-1, 1,0);
    tracep->declBus(c+719,"index", false,-1, 5,0);
    tracep->declQuad(c+720,"tag", false,-1, 55,0);
    tracep->declBus(c+722,"pht_data", false,-1, 1,0);
    tracep->declBit(c+723,"pht_taken", false,-1);
    tracep->declArray(c+724,"btb_data", false,-1, 127,0);
    tracep->declBit(c+728,"btb_valid", false,-1);
    tracep->declQuad(c+729,"btb_tag", false,-1, 55,0);
    tracep->declQuad(c+731,"btb_target_next_pc", false,-1, 63,0);
    tracep->declBus(c+733,"btb_br_type", false,-1, 1,0);
    tracep->declBit(c+683,"pre_valid", false,-1);
    tracep->declBit(c+734,"is_br_return", false,-1);
    tracep->declQuad(c+735,"ras_ready", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+165,"io_flush", false,-1);
    tracep->declBit(c+98,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+678,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+143,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+679,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+680,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+166,"io_put_pc_ready", false,-1);
    tracep->declBit(c+167,"io_put_pc_valid", false,-1);
    tracep->declBus(c+168,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+169,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"io_put_pc_bits_is_pre", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+737+i*2,"ibuf_pc", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+745+i*1,"ibuf_inst", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+749+i*1,"ibuf_is_pre", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+753+i*1,"ibuf_valid", true,(i+0));
    }
    tracep->declBus(c+757,"reg_head", false,-1, 1,0);
    tracep->declBus(c+758,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+759,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+760,"enq_size", false,-1);
    tracep->declBit(c+761,"can_deq", false,-1);
    tracep->declBus(c+762,"result_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+93,"io_flush", false,-1);
    tracep->declBit(c+94,"io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+95,"io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+96,"io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+99,"io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+100,"io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+104,"io_is_fence_i", false,-1);
    tracep->declBus(c+21,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_sram_wen_0", false,-1);
    tracep->declBit(c+23,"io_sram_wen_1", false,-1);
    tracep->declArray(c+24,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+105,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+871,"cache_stage0_clock", false,-1);
    tracep->declBit(c+872,"cache_stage0_reset", false,-1);
    tracep->declBit(c+93,"cache_stage0_io_flush", false,-1);
    tracep->declBit(c+94,"cache_stage0_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+95,"cache_stage0_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+96,"cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+94,"cache_stage0_io_addr_ready", false,-1);
    tracep->declBit(c+763,"cache_stage0_io_addr_valid", false,-1);
    tracep->declQuad(c+764,"cache_stage0_io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+871,"cache_stage1_clock", false,-1);
    tracep->declBit(c+872,"cache_stage1_reset", false,-1);
    tracep->declBit(c+93,"cache_stage1_io_flush", false,-1);
    tracep->declBit(c+94,"cache_stage1_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+763,"cache_stage1_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+764,"cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+766,"cache_stage1_io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+767,"cache_stage1_io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+768,"cache_stage1_io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+769,"cache_stage1_io_sram_valid", false,-1);
    tracep->declArray(c+770,"cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+774,"cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+778,"cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+782,"cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+786,"cache_stage1_io_sram_ready", false,-1);
    tracep->declBit(c+787,"cache_stage1_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+788,"cache_stage1_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+789,"cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+791,"cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+767,"cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+792,"cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+794,"cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+768,"cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+795,"cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+871,"cache_stage2_clock", false,-1);
    tracep->declBit(c+872,"cache_stage2_reset", false,-1);
    tracep->declBit(c+93,"cache_stage2_io_flush", false,-1);
    tracep->declBit(c+787,"cache_stage2_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+788,"cache_stage2_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+789,"cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+791,"cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+767,"cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+792,"cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+794,"cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+768,"cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+795,"cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+105,"cache_stage2_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"cache_stage2_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+797,"cache_stage2_io_sram_w_valid", false,-1);
    tracep->declBus(c+798,"cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+28,"cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+24,"cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+799,"cache_stage2_io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+98,"cache_stage2_io_rdata_ready", false,-1);
    tracep->declBit(c+99,"cache_stage2_io_rdata_valid", false,-1);
    tracep->declQuad(c+100,"cache_stage2_io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+800,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+802,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+804,"is_w_sram", false,-1);
    tracep->declBit(c+805,"is_sram0_write", false,-1);
    tracep->declBit(c+806,"is_sram1_write", false,-1);
    tracep->declQuad(c+807,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+809,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+810,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+811,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+812,"w_r_pass0_val", false,-1);
    tracep->declBit(c+813,"w_r_pass1_val", false,-1);
    tracep->declBit(c+786,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+93,"io_flush", false,-1);
    tracep->declBit(c+94,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+95,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+96,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+94,"io_addr_ready", false,-1);
    tracep->declBit(c+763,"io_addr_valid", false,-1);
    tracep->declQuad(c+764,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+763,"reg_valid", false,-1);
    tracep->declQuad(c+764,"reg_addr", false,-1, 63,0);
    tracep->declBit(c+814,"valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+93,"io_flush", false,-1);
    tracep->declBit(c+94,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+763,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+764,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+766,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+767,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+768,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+769,"io_sram_valid", false,-1);
    tracep->declArray(c+770,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+774,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+778,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+782,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+786,"io_sram_ready", false,-1);
    tracep->declBit(c+787,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+788,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+789,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+791,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+767,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+792,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+794,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+768,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+795,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+769,"valid", false,-1);
    tracep->declBit(c+94,"ready", false,-1);
    tracep->declQuad(c+789,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+815,"reg_valid", false,-1);
    tracep->declQuad(c+816,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+818,"reg_index", false,-1, 5,0);
    tracep->declBus(c+819,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+820,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+822,"tag_1", false,-1, 53,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+93,"io_flush", false,-1);
    tracep->declBit(c+787,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+788,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+789,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+791,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+767,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+792,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+794,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+768,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+795,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+105,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+797,"io_sram_w_valid", false,-1);
    tracep->declBus(c+798,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+28,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+24,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+799,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+98,"io_rdata_ready", false,-1);
    tracep->declBit(c+99,"io_rdata_valid", false,-1);
    tracep->declQuad(c+100,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+818,"index", false,-1, 5,0);
    tracep->declBit(c+824,"valid", false,-1);
    tracep->declBit(c+799,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+100,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+99,"reg_valid", false,-1);
    tracep->declBit(c+825,"reg_ready", false,-1);
    tracep->declQuad(c+826,"temp_addr", false,-1, 63,0);
    tracep->declQuad(c+106,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+105,"reg_r_valid", false,-1);
    tracep->declArray(c+28,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+797,"reg_cache_write", false,-1);
    tracep->declQuad(c+102,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+828,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+830,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+831,"reg_lru_1", false,-1, 63,0);
    tracep->declBit(c+833,"LRU_1", false,-1);
    tracep->declQuad(c+834,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+836,"neg_chose_bit", false,-1, 63,0);
    tracep->declBus(c+838,"reg_bus_state", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+873,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+32,"Q", false,-1, 127,0);
    tracep->declArray(c+883,"bwen", false,-1, 127,0);
    tracep->declBit(c+805,"wen", false,-1);
    tracep->declArray(c+839,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+873,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+36,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+36,"Q", false,-1, 127,0);
    tracep->declArray(c+883,"bwen", false,-1, 127,0);
    tracep->declBit(c+805,"wen", false,-1);
    tracep->declArray(c+843,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"io_wen", false,-1);
    tracep->declArray(c+873,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+40,"Q", false,-1, 127,0);
    tracep->declArray(c+883,"bwen", false,-1, 127,0);
    tracep->declBit(c+806,"wen", false,-1);
    tracep->declArray(c+847,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"io_wen", false,-1);
    tracep->declArray(c+873,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+44,"Q", false,-1, 127,0);
    tracep->declArray(c+883,"bwen", false,-1, 127,0);
    tracep->declBit(c+806,"wen", false,-1);
    tracep->declArray(c+851,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+51,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+63,"Q", false,-1, 127,0);
    tracep->declArray(c+366,"bwen", false,-1, 127,0);
    tracep->declBit(c+375,"wen", false,-1);
    tracep->declArray(c+855,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+873,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+67,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+67,"Q", false,-1, 127,0);
    tracep->declArray(c+883,"bwen", false,-1, 127,0);
    tracep->declBit(c+375,"wen", false,-1);
    tracep->declArray(c+859,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"io_wen", false,-1);
    tracep->declArray(c+51,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+71,"Q", false,-1, 127,0);
    tracep->declArray(c+366,"bwen", false,-1, 127,0);
    tracep->declBit(c+376,"wen", false,-1);
    tracep->declArray(c+863,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"io_wen", false,-1);
    tracep->declArray(c+873,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+75,"Q", false,-1, 127,0);
    tracep->declArray(c+883,"bwen", false,-1, 127,0);
    tracep->declBit(c+376,"wen", false,-1);
    tracep->declArray(c+867,"read_sram", false,-1, 127,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h2ede82b0__0;
    VlWide<5>/*159:0*/ __Vtemp_h3d72d354__0;
    VlWide<3>/*95:0*/ __Vtemp_h3364f91c__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__0;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__0;
    VlWide<5>/*159:0*/ __Vtemp_h83a42262__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__1;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__1;
    VlWide<5>/*159:0*/ __Vtemp_h00d757e1__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__2;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__2;
    VlWide<5>/*159:0*/ __Vtemp_hcd0c4155__0;
    VlWide<5>/*159:0*/ __Vtemp_hf484a493__0;
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
    bufp->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
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
    bufp->fullBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush));
    bufp->fullBit(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready));
    bufp->fullBit(oldp+95,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
    bufp->fullQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
    bufp->fullBit(oldp+98,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    bufp->fullBit(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    bufp->fullQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
    bufp->fullQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
    bufp->fullBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    bufp->fullQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+110,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid))));
    bufp->fullQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
    bufp->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
    bufp->fullQData(oldp+115,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
    bufp->fullCData(oldp+117,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
    bufp->fullBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
    bufp->fullBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    bufp->fullBit(oldp+120,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
    bufp->fullBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    bufp->fullQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
    bufp->fullQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
    bufp->fullBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
    bufp->fullBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    bufp->fullBit(oldp+128,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
    bufp->fullBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    bufp->fullQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
    bufp->fullBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
    bufp->fullBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    bufp->fullBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    bufp->fullBit(oldp+138,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready))));
    bufp->fullBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    bufp->fullBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
    bufp->fullQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
    bufp->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
    bufp->fullBit(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    bufp->fullQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
    bufp->fullBit(oldp+148,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) ? 
                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
    bufp->fullBit(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
    bufp->fullQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
    bufp->fullBit(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    bufp->fullBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
    bufp->fullBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
    bufp->fullQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
    bufp->fullBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
    bufp->fullQData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
    bufp->fullBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid));
    bufp->fullQData(oldp+161,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                               [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                                : 0ULL)),64);
    bufp->fullQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
    bufp->fullBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush));
    bufp->fullBit(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    bufp->fullBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid));
    bufp->fullIData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst),32);
    bufp->fullQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                              [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
    bufp->fullBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre
                            [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]));
    bufp->fullBit(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    bufp->fullCData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
    bufp->fullCData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
    bufp->fullCData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
    bufp->fullQData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
    bufp->fullCData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
    bufp->fullQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
    bufp->fullIData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
    bufp->fullQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
    bufp->fullIData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
    bufp->fullCData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
    bufp->fullBit(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
    bufp->fullBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
    bufp->fullSData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+191,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                             <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
    bufp->fullBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
    bufp->fullQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
    bufp->fullQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie),64);
    bufp->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
    bufp->fullQData(oldp+199,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
    bufp->fullBit(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
    bufp->fullCData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
    bufp->fullQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
    bufp->fullBit(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
    bufp->fullSData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
    bufp->fullBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
    bufp->fullBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
    bufp->fullCData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
    bufp->fullQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
    bufp->fullQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
    bufp->fullBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
    bufp->fullIData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
    bufp->fullBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    bufp->fullCData(oldp+220,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0xfU))),5);
    bufp->fullQData(oldp+221,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xfU)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                               [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xfU))])),64);
    bufp->fullCData(oldp+223,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+224,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                               [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0x14U))])),64);
    bufp->fullSData(oldp+226,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+227,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
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
    bufp->fullQData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
    bufp->fullQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
    bufp->fullBit(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    bufp->fullBit(oldp+234,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullBit(oldp+235,((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullCData(oldp+236,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
    bufp->fullQData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[0]),64);
    bufp->fullQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[1]),64);
    bufp->fullQData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[2]),64);
    bufp->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[3]),64);
    bufp->fullQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[4]),64);
    bufp->fullQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[5]),64);
    bufp->fullQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[6]),64);
    bufp->fullQData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[7]),64);
    bufp->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[8]),64);
    bufp->fullQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[9]),64);
    bufp->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[10]),64);
    bufp->fullQData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[11]),64);
    bufp->fullQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[12]),64);
    bufp->fullQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[13]),64);
    bufp->fullQData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[14]),64);
    bufp->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[15]),64);
    bufp->fullQData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[16]),64);
    bufp->fullQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[17]),64);
    bufp->fullQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[18]),64);
    bufp->fullQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[19]),64);
    bufp->fullQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[20]),64);
    bufp->fullQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[21]),64);
    bufp->fullQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[22]),64);
    bufp->fullQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[23]),64);
    bufp->fullQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[24]),64);
    bufp->fullQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[25]),64);
    bufp->fullQData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[26]),64);
    bufp->fullQData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[27]),64);
    bufp->fullQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[28]),64);
    bufp->fullQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[29]),64);
    bufp->fullQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[30]),64);
    bufp->fullQData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[31]),64);
    bufp->fullQData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                              [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                              [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit),64);
    bufp->fullQData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),64);
    bufp->fullQData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
    bufp->fullQData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
    bufp->fullQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq),64);
    bufp->fullQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral),64);
    bufp->fullBit(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
    bufp->fullQData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
    bufp->fullQData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
    bufp->fullQData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
    bufp->fullQData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
    bufp->fullQData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
    bufp->fullQData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
    bufp->fullQData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
    bufp->fullQData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
    bufp->fullQData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
    bufp->fullQData(oldp+336,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
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
    bufp->fullBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
    bufp->fullCData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
    bufp->fullCData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
    bufp->fullCData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
    bufp->fullBit(oldp+342,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    bufp->fullCData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
    bufp->fullCData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
    bufp->fullBit(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
    bufp->fullBit(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
    bufp->fullBit(oldp+347,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+348,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
    bufp->fullQData(oldp+350,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+352,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+353,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
    bufp->fullCData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
    bufp->fullQData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
    bufp->fullCData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
    bufp->fullBit(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
    bufp->fullQData(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
    bufp->fullCData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
    bufp->fullCData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
    bufp->fullBit(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    bufp->fullSData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
    bufp->fullBit(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    bufp->fullWData(oldp+366,(vlSelf->riscv_soc__DOT__sram4__DOT__bwen),128);
    bufp->fullWData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
    bufp->fullSData(oldp+374,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb) 
                                   << 8U) : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb))),16);
    bufp->fullBit(oldp+375,(vlSelf->riscv_soc__DOT__sram4__DOT__wen));
    bufp->fullBit(oldp+376,(vlSelf->riscv_soc__DOT__sram6__DOT__wen));
    bufp->fullQData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
    bufp->fullQData(oldp+381,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
    bufp->fullQData(oldp+383,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
    bufp->fullQData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
    bufp->fullQData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
    bufp->fullQData(oldp+389,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
    bufp->fullQData(oldp+391,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
    bufp->fullBit(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
    bufp->fullBit(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
    bufp->fullBit(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0));
    bufp->fullBit(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2));
    bufp->fullBit(oldp+397,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullBit(oldp+398,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullQData(oldp+399,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))),64);
    bufp->fullQData(oldp+401,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))),64);
    bufp->fullQData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
    bufp->fullBit(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__LRU_2));
    bufp->fullBit(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    bufp->fullCData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
    bufp->fullBit(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    bufp->fullBit(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    bufp->fullBit(oldp+410,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0))));
    bufp->fullBit(oldp+411,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2))));
    bufp->fullQData(oldp+412,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__temp_addr),64);
    bufp->fullBit(oldp+414,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))));
    bufp->fullBit(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_b_fire));
    bufp->fullCData(oldp+416,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+417,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
    bufp->fullCData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
    bufp->fullBit(oldp+420,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+421,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU))));
    bufp->fullBit(oldp+422,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 0xeU)))));
    bufp->fullCData(oldp+423,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? ((0x60U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xfU)) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))),7);
    bufp->fullCData(oldp+424,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? 0U : 5U)),3);
    bufp->fullBit(oldp+425,((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+426,(((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xcU))) 
                             & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU)))));
    bufp->fullCData(oldp+427,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 3U : 0xcU)),4);
    bufp->fullBit(oldp+428,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 5U)))));
    bufp->fullBit(oldp+429,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullCData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
    bufp->fullCData(oldp+431,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                : ((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
    bufp->fullCData(oldp+432,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 6U : (((1U == (7U 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0xcU))))
                                         ? 4U : 0xcU))),4);
    bufp->fullBit(oldp+433,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 5U))));
    bufp->fullCData(oldp+434,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? ((0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                    ? 3U : 2U) : 2U)),2);
    bufp->fullCData(oldp+435,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 0x4eU : 0x4aU)),7);
    bufp->fullCData(oldp+436,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 2U : 0xcU)),4);
    bufp->fullBit(oldp+437,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 3U)))));
    bufp->fullCData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
    bufp->fullBit(oldp+439,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
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
    bufp->fullBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
    bufp->fullBit(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
    bufp->fullBit(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    bufp->fullBit(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid));
    bufp->fullBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
    bufp->fullQData(oldp+445,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+447,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
    bufp->fullQData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
    bufp->fullQData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
    bufp->fullQData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
    bufp->fullQData(oldp+454,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
    bufp->fullBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    bufp->fullQData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    bufp->fullQData(oldp+462,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
    bufp->fullBit(oldp+464,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+465,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    bufp->fullQData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
    bufp->fullBit(oldp+469,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    bufp->fullQData(oldp+470,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
    bufp->fullSData(oldp+472,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    bufp->fullCData(oldp+474,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
    bufp->fullBit(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
    bufp->fullBit(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullCData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullBit(oldp+478,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+480,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+481,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U))));
    bufp->fullCData(oldp+482,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
    bufp->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    bufp->fullBit(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    bufp->fullBit(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
    bufp->fullBit(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+496,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    bufp->fullQData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullQData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
    bufp->fullBit(oldp+503,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U)))));
    bufp->fullQData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+506,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 6U))));
    bufp->fullBit(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
    bufp->fullQData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullQData(oldp+510,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
    bufp->fullWData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
    bufp->fullBit(oldp+515,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
    bufp->fullBit(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
    bufp->fullWData(oldp+518,(__Vtemp_hfddea7ef__0),127);
    bufp->fullQData(oldp+522,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+524,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+526,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                     ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
    bufp->fullQData(oldp+528,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+530,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
    bufp->fullBit(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    bufp->fullQData(oldp+532,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
    __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                        >> 0x20U));
    __Vtemp_h6618c490__0[2U] = 1U;
    bufp->fullWData(oldp+534,(__Vtemp_h6618c490__0),65);
    bufp->fullQData(oldp+537,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        __Vtemp_h4825144c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
        __Vtemp_h4825144c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
        __Vtemp_h4825144c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
    } else {
        __Vtemp_h4825144c__0[0U] = 0U;
        __Vtemp_h4825144c__0[1U] = 0U;
        __Vtemp_h4825144c__0[2U] = 0U;
    }
    bufp->fullWData(oldp+539,(__Vtemp_h4825144c__0),65);
    bufp->fullQData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullQData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
    bufp->fullBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
    bufp->fullBit(oldp+547,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid) 
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
    bufp->fullQData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullQData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
    bufp->fullQData(oldp+558,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
    bufp->fullQData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullQData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
    bufp->fullBit(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    bufp->fullWData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
    bufp->fullBit(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullBit(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
    bufp->fullQData(oldp+572,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullBit(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
    bufp->fullQData(oldp+577,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
    bufp->fullBit(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullBit(oldp+581,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U)))));
    bufp->fullWData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
    bufp->fullWData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
    bufp->fullWData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
    bufp->fullWData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
    bufp->fullWData(oldp+603,(__Vtemp_h28f9f554__0),65);
    bufp->fullCData(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    bufp->fullWData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
    bufp->fullBit(oldp+614,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
    bufp->fullBit(oldp+615,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                      ^ __Vtemp_h2ede82b0__0[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                        ^ __Vtemp_h2ede82b0__0[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                       ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
    bufp->fullBit(oldp+616,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    bufp->fullBit(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
    bufp->fullBit(oldp+618,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
    bufp->fullBit(oldp+619,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                   >> 3U))));
    bufp->fullQData(oldp+620,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullQData(oldp+622,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+624,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))));
    bufp->fullBit(oldp+625,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 1U))));
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        __Vtemp_h3d72d354__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                           >> 0x1fU)))) {
            __Vtemp_h3d72d354__0[1U] = 0xffffffffU;
            __Vtemp_h3d72d354__0[2U] = 0xffffffffU;
            __Vtemp_h3d72d354__0[3U] = 0xffffffffU;
            __Vtemp_h3d72d354__0[4U] = 3U;
        } else {
            __Vtemp_h3d72d354__0[1U] = 0U;
            __Vtemp_h3d72d354__0[2U] = 0U;
            __Vtemp_h3d72d354__0[3U] = 0U;
            __Vtemp_h3d72d354__0[4U] = 0U;
        }
    } else if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        __Vtemp_h3d72d354__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        __Vtemp_h3d72d354__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                            >> 0x20U));
        if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                           >> 0x3fU)))) {
            __Vtemp_h3d72d354__0[2U] = 0xffffffffU;
            __Vtemp_h3d72d354__0[3U] = 0xffffffffU;
            __Vtemp_h3d72d354__0[4U] = 3U;
        } else {
            __Vtemp_h3d72d354__0[2U] = 0U;
            __Vtemp_h3d72d354__0[3U] = 0U;
            __Vtemp_h3d72d354__0[4U] = 0U;
        }
    } else {
        __Vtemp_h3d72d354__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        __Vtemp_h3d72d354__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                            >> 0x20U));
        __Vtemp_h3d72d354__0[2U] = 0U;
        __Vtemp_h3d72d354__0[3U] = 0U;
        __Vtemp_h3d72d354__0[4U] = 0U;
    }
    bufp->fullWData(oldp+626,(__Vtemp_h3d72d354__0),130);
    bufp->fullWData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
    __Vtemp_h3364f91c__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                                << 1U);
    __Vtemp_h3364f91c__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                              << 1U));
    __Vtemp_h3364f91c__0[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                       << 2U)) | ((
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                                   >> 0x1fU) 
                                                  | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                     << 1U)));
    bufp->fullWData(oldp+634,(__Vtemp_h3364f91c__0),67);
    bufp->fullCData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
        __Vtemp_hf484a493__0[0U] = __Vtemp_h83a42262__0[0U];
        __Vtemp_hf484a493__0[1U] = __Vtemp_h83a42262__0[1U];
        __Vtemp_hf484a493__0[2U] = __Vtemp_h83a42262__0[2U];
        __Vtemp_hf484a493__0[3U] = __Vtemp_h83a42262__0[3U];
        __Vtemp_hf484a493__0[4U] = (3U & __Vtemp_h83a42262__0[4U]);
    } else if ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = __Vtemp_h00d757e1__0[0U];
        __Vtemp_hf484a493__0[1U] = __Vtemp_h00d757e1__0[1U];
        __Vtemp_hf484a493__0[2U] = __Vtemp_h00d757e1__0[2U];
        __Vtemp_hf484a493__0[3U] = __Vtemp_h00d757e1__0[3U];
        __Vtemp_hf484a493__0[4U] = (3U & __Vtemp_h00d757e1__0[4U]);
    } else if ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = (__Vtemp_hcd0c4155__0[0U] 
                                    << 1U);
        __Vtemp_hf484a493__0[1U] = ((__Vtemp_hcd0c4155__0[0U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[1U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[2U] = ((__Vtemp_hcd0c4155__0[1U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[2U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[3U] = ((__Vtemp_hcd0c4155__0[2U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[3U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[4U] = ((__Vtemp_hcd0c4155__0[3U] 
                                     >> 0x1fU) | (6U 
                                                  & (__Vtemp_hcd0c4155__0[4U] 
                                                     << 1U)));
    } else if ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                    << 1U);
        __Vtemp_hf484a493__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                  << 1U));
    } else if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp_hf484a493__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp_hf484a493__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp_hf484a493__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp_hf484a493__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else if ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp_hf484a493__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp_hf484a493__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp_hf484a493__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp_hf484a493__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp_hf484a493__0[0U] = 0U;
        __Vtemp_hf484a493__0[1U] = 0U;
        __Vtemp_hf484a493__0[2U] = 0U;
        __Vtemp_hf484a493__0[3U] = 0U;
        __Vtemp_hf484a493__0[4U] = 0U;
    }
    bufp->fullWData(oldp+652,(__Vtemp_hf484a493__0),131);
    bufp->fullCData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullBit(oldp+658,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                          >> 2U)))));
    bufp->fullBit(oldp+659,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
    bufp->fullBit(oldp+660,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 4U))));
    bufp->fullQData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullQData(oldp+667,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+669,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+670,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+671,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+672,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+673,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))) 
                             | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    bufp->fullCData(oldp+674,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
    bufp->fullBit(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullQData(oldp+676,(((0xffffffffffffff77ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                               | (QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                              >> 7U)))
                                                   ? 0x88U
                                                   : 0x80U))))),64);
    bufp->fullBit(oldp+678,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+679,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                              >> 2U)))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
                                           >> 0x20U))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data))),32);
    bufp->fullBit(oldp+680,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [3U] : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail])));
    bufp->fullQData(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullBit(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[0]),64);
    bufp->fullQData(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[1]),64);
    bufp->fullQData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[2]),64);
    bufp->fullQData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[3]),64);
    bufp->fullBit(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
    bufp->fullCData(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[0]));
    bufp->fullBit(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[1]));
    bufp->fullBit(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[2]));
    bufp->fullBit(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[3]));
    bufp->fullQData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
    bufp->fullQData(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
    bufp->fullQData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
    bufp->fullQData(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
    bufp->fullCData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullCData(oldp+713,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
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
    bufp->fullWData(oldp+714,(__Vtemp_h643ad04b__0),123);
    bufp->fullCData(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data),2);
    bufp->fullCData(oldp+719,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 3U)))),6);
    bufp->fullQData(oldp+720,(((0xfffffffffffffeULL 
                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 8U)) | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                         >> 2U))))))),56);
    bufp->fullCData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                              [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 3U)))]),2);
    bufp->fullBit(oldp+723,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                   [(0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))] 
                                   >> 1U))));
    bufp->fullWData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data),128);
    bufp->fullBit(oldp+728,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
                                   >> 0x1aU))));
    bufp->fullQData(oldp+729,((0xffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                                >> 2U)))),56);
    bufp->fullQData(oldp+731,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])) 
                                                >> 2U)))),64);
    bufp->fullCData(oldp+733,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])),2);
    bufp->fullBit(oldp+734,((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U]))));
    bufp->fullQData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                              [(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))]),64);
    bufp->fullQData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
    bufp->fullQData(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
    bufp->fullQData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
    bufp->fullQData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
    bufp->fullIData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
    bufp->fullIData(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
    bufp->fullIData(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
    bufp->fullIData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
    bufp->fullBit(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[0]));
    bufp->fullBit(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[1]));
    bufp->fullBit(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[2]));
    bufp->fullBit(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[3]));
    bufp->fullBit(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[0]));
    bufp->fullBit(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[1]));
    bufp->fullBit(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[2]));
    bufp->fullBit(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[3]));
    bufp->fullCData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
    bufp->fullBit(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
    bufp->fullCData(oldp+762,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                      + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                     - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
    bufp->fullBit(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullCData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    bufp->fullBit(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullWData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
    bufp->fullWData(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
    bufp->fullWData(oldp+778,(__Vtemp_h96d8aca3__0),128);
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
    bufp->fullWData(oldp+782,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+787,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullBit(oldp+788,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+792,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+795,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+798,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullBit(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+805,(vlSelf->riscv_soc__DOT__sram0__DOT__wen));
    bufp->fullBit(oldp+806,(vlSelf->riscv_soc__DOT__sram2__DOT__wen));
    bufp->fullQData(oldp+807,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullBit(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+814,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
    bufp->fullBit(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullQData(oldp+816,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+818,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+819,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+820,((0x3fffffffffffffULL 
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
    bufp->fullQData(oldp+822,((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
    bufp->fullBit(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+826,((0xfffffffffffffff0ULL 
                               & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
    bufp->fullQData(oldp+828,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+830,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullBit(oldp+833,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
    bufp->fullQData(oldp+834,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullQData(oldp+836,((~ (1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
    bufp->fullCData(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
    __Vtemp_h7748dece__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_h7748dece__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_h7748dece__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_h7748dece__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+839,(__Vtemp_h7748dece__0),128);
    __Vtemp_h8b37abc5__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_h8b37abc5__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_h8b37abc5__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_h8b37abc5__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+843,(__Vtemp_h8b37abc5__0),128);
    __Vtemp_he6da4d43__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_he6da4d43__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_he6da4d43__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_he6da4d43__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+847,(__Vtemp_he6da4d43__0),128);
    __Vtemp_ha7b78b5e__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_ha7b78b5e__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_ha7b78b5e__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_ha7b78b5e__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+851,(__Vtemp_ha7b78b5e__0),128);
    __Vtemp_h0490666a__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h0490666a__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h0490666a__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h0490666a__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+855,(__Vtemp_h0490666a__0),128);
    __Vtemp_hca3bc04b__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_hca3bc04b__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_hca3bc04b__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_hca3bc04b__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+859,(__Vtemp_hca3bc04b__0),128);
    __Vtemp_h4060cfc7__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h4060cfc7__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h4060cfc7__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h4060cfc7__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+863,(__Vtemp_h4060cfc7__0),128);
    __Vtemp_h09a85685__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h09a85685__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h09a85685__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h09a85685__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+867,(__Vtemp_h09a85685__0),128);
    bufp->fullBit(oldp+871,(vlSelf->clock));
    bufp->fullBit(oldp+872,(vlSelf->reset));
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+873,(__Vtemp_hd56bd579__0),128);
    bufp->fullBit(oldp+877,(1U));
    bufp->fullCData(oldp+878,(0U),2);
    bufp->fullCData(oldp+879,(1U),2);
    bufp->fullCData(oldp+880,(2U),2);
    bufp->fullCData(oldp+881,(3U),2);
    bufp->fullBit(oldp+882,(0U));
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+883,(__Vtemp_hd09821c2__0),128);
}
