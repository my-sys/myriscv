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
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->pushNamePrefix("riscv_soc ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+955,"core_clock", false,-1);
    tracep->declBit(c+956,"core_reset", false,-1);
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
    tracep->declBit(c+955,"axi_ram_clock", false,-1);
    tracep->declBit(c+956,"axi_ram_reset", false,-1);
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
    tracep->declBit(c+955,"sram0_clock", false,-1);
    tracep->declBit(c+956,"sram0_reset", false,-1);
    tracep->declBus(c+21,"sram0_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram0_io_wen", false,-1);
    tracep->declArray(c+963,"sram0_io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"sram0_io_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"sram0_io_rdata", false,-1, 127,0);
    tracep->declBit(c+955,"sram1_clock", false,-1);
    tracep->declBit(c+956,"sram1_reset", false,-1);
    tracep->declBus(c+21,"sram1_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram1_io_wen", false,-1);
    tracep->declArray(c+963,"sram1_io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"sram1_io_wdata", false,-1, 127,0);
    tracep->declArray(c+36,"sram1_io_rdata", false,-1, 127,0);
    tracep->declBit(c+955,"sram2_clock", false,-1);
    tracep->declBit(c+956,"sram2_reset", false,-1);
    tracep->declBus(c+21,"sram2_io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"sram2_io_wen", false,-1);
    tracep->declArray(c+963,"sram2_io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"sram2_io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"sram2_io_rdata", false,-1, 127,0);
    tracep->declBit(c+955,"sram3_clock", false,-1);
    tracep->declBit(c+956,"sram3_reset", false,-1);
    tracep->declBus(c+21,"sram3_io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"sram3_io_wen", false,-1);
    tracep->declArray(c+963,"sram3_io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"sram3_io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"sram3_io_rdata", false,-1, 127,0);
    tracep->declBit(c+955,"sram4_clock", false,-1);
    tracep->declBit(c+956,"sram4_reset", false,-1);
    tracep->declBus(c+48,"sram4_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram4_io_wen", false,-1);
    tracep->declArray(c+51,"sram4_io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"sram4_io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"sram4_io_rdata", false,-1, 127,0);
    tracep->declBit(c+955,"sram5_clock", false,-1);
    tracep->declBit(c+956,"sram5_reset", false,-1);
    tracep->declBus(c+48,"sram5_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram5_io_wen", false,-1);
    tracep->declArray(c+963,"sram5_io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"sram5_io_wdata", false,-1, 127,0);
    tracep->declArray(c+67,"sram5_io_rdata", false,-1, 127,0);
    tracep->declBit(c+955,"sram6_clock", false,-1);
    tracep->declBit(c+956,"sram6_reset", false,-1);
    tracep->declBus(c+48,"sram6_io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"sram6_io_wen", false,-1);
    tracep->declArray(c+51,"sram6_io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"sram6_io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"sram6_io_rdata", false,-1, 127,0);
    tracep->declBit(c+955,"sram7_clock", false,-1);
    tracep->declBit(c+956,"sram7_reset", false,-1);
    tracep->declBus(c+48,"sram7_io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"sram7_io_wen", false,-1);
    tracep->declArray(c+963,"sram7_io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"sram7_io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"sram7_io_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
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
    tracep->declBit(c+955,"mem_clock", false,-1);
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
    tracep->declBus(c+967,"r_idle", false,-1, 0,0);
    tracep->declBus(c+968,"r_busy", false,-1, 0,0);
    tracep->declBit(c+93,"io_ram_bus_ar_fire", false,-1);
    tracep->declBit(c+17,"io_ram_bus_r_fire", false,-1);
    tracep->declBit(c+94,"io_ram_bus_aw_fire", false,-1);
    tracep->declBit(c+95,"io_ram_bus_w_fire", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declQuad(c+79,"raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"rdata", false,-1, 63,0);
    tracep->declBit(c+13,"rflag", false,-1);
    tracep->declQuad(c+81,"waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"wdata", false,-1, 63,0);
    tracep->declQuad(c+83,"wmask", false,-1, 63,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->declQuad(c+18,"tem_data", false,-1, 63,0);
    tracep->declQuad(c+96,"t_rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
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
    tracep->declBit(c+955,"i_cache_clock", false,-1);
    tracep->declBit(c+956,"i_cache_reset", false,-1);
    tracep->declBit(c+98,"i_cache_io_flush", false,-1);
    tracep->declBit(c+99,"i_cache_io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+100,"i_cache_io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+101,"i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+103,"i_cache_io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+104,"i_cache_io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+105,"i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+107,"i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+109,"i_cache_io_is_fence_i", false,-1);
    tracep->declBus(c+21,"i_cache_io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"i_cache_io_sram_wen_0", false,-1);
    tracep->declBit(c+23,"i_cache_io_sram_wen_1", false,-1);
    tracep->declArray(c+24,"i_cache_io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"i_cache_io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"i_cache_io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"i_cache_io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"i_cache_io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"i_cache_io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+110,"i_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+111,"i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+113,"i_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+114,"i_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+955,"d_cache_clock", false,-1);
    tracep->declBit(c+956,"d_cache_reset", false,-1);
    tracep->declBit(c+115,"d_cache_io_cpu_valid", false,-1);
    tracep->declQuad(c+116,"d_cache_io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+118,"d_cache_io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"d_cache_io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"d_cache_io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+124,"d_cache_io_cpu_ready", false,-1);
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
    tracep->declBit(c+125,"d_cache_io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+126,"d_cache_io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+127,"d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+129,"d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+131,"d_cache_io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+132,"d_cache_io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+133,"d_cache_io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+134,"d_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+135,"d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"d_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+138,"d_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+955,"cross_bar_clock", false,-1);
    tracep->declBit(c+956,"cross_bar_reset", false,-1);
    tracep->declBit(c+110,"cross_bar_io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+111,"cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+113,"cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+114,"cross_bar_io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+125,"cross_bar_io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+126,"cross_bar_io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+127,"cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+129,"cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+131,"cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+133,"cross_bar_io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+134,"cross_bar_io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+135,"cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+138,"cross_bar_io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+139,"cross_bar_io_bus1_valid", false,-1);
    tracep->declQuad(c+101,"cross_bar_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+140,"cross_bar_io_bus1_ready", false,-1);
    tracep->declBit(c+141,"cross_bar_io_bus2_valid", false,-1);
    tracep->declQuad(c+116,"cross_bar_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"cross_bar_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+142,"cross_bar_io_bus2_ready", false,-1);
    tracep->declBit(c+1,"cross_bar_io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+2,"cross_bar_io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"cross_bar_io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+6,"cross_bar_io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+7,"cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+969,"cross_bar_io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"cross_bar_io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"cross_bar_io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"cross_bar_io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"cross_bar_io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+143,"cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+144,"cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+101,"cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+103,"cross_bar_1_io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+145,"cross_bar_1_io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+146,"cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+148,"cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+150,"cross_bar_1_io_wb_valid", false,-1);
    tracep->declQuad(c+116,"cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+151,"cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"cross_bar_1_io_wb_bits_is_w", false,-1);
    tracep->declBit(c+153,"cross_bar_1_io_wb_ready", false,-1);
    tracep->declBit(c+99,"cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+100,"cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+101,"cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+103,"cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+104,"cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+105,"cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+107,"cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+115,"cross_bar_1_io_DCache_valid", false,-1);
    tracep->declQuad(c+116,"cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+118,"cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"cross_bar_1_io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+124,"cross_bar_1_io_DCache_ready", false,-1);
    tracep->declBit(c+139,"cross_bar_1_io_bus1_valid", false,-1);
    tracep->declQuad(c+101,"cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+140,"cross_bar_1_io_bus1_ready", false,-1);
    tracep->declBit(c+141,"cross_bar_1_io_bus2_valid", false,-1);
    tracep->declQuad(c+116,"cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"cross_bar_1_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+142,"cross_bar_1_io_bus2_ready", false,-1);
    tracep->declBit(c+154,"cross_bar_1_io_clint_bus_valid", false,-1);
    tracep->declQuad(c+116,"cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+155,"cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+123,"cross_bar_1_io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+157,"cross_bar_1_io_clint_bus_ready", false,-1);
    tracep->declBit(c+955,"fetch_clock", false,-1);
    tracep->declBit(c+956,"fetch_reset", false,-1);
    tracep->declBit(c+158,"fetch_io_br_info_valid", false,-1);
    tracep->declBit(c+159,"fetch_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+160,"fetch_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+162,"fetch_io_br_info_taken", false,-1);
    tracep->declQuad(c+163,"fetch_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"fetch_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+166,"fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+168,"fetch_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+170,"fetch_io_flush", false,-1);
    tracep->declBit(c+143,"fetch_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+144,"fetch_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+101,"fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+103,"fetch_io_cpu_data_ready", false,-1);
    tracep->declBit(c+145,"fetch_io_cpu_data_valid", false,-1);
    tracep->declQuad(c+146,"fetch_io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+148,"fetch_io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"fetch_io_put_pc_ready", false,-1);
    tracep->declBit(c+172,"fetch_io_put_pc_valid", false,-1);
    tracep->declBus(c+173,"fetch_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+174,"fetch_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+176,"fetch_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+98,"fetch_io_out_flush", false,-1);
    tracep->declBit(c+955,"execute_clock", false,-1);
    tracep->declBit(c+956,"execute_reset", false,-1);
    tracep->declBit(c+171,"execute_io_op_datas_ready", false,-1);
    tracep->declBit(c+177,"execute_io_op_datas_valid", false,-1);
    tracep->declBus(c+178,"execute_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+179,"execute_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+180,"execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+183,"execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+184,"execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+186,"execute_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+187,"execute_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+189,"execute_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+190,"execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+191,"execute_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+192,"execute_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+193,"execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+194,"execute_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+196,"execute_io_irq_time_irq", false,-1);
    tracep->declBit(c+197,"execute_io_irq_soft_irq", false,-1);
    tracep->declQuad(c+198,"execute_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+200,"execute_io_mie", false,-1, 63,0);
    tracep->declQuad(c+202,"execute_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+204,"execute_io_mtvec", false,-1, 63,0);
    tracep->declBit(c+206,"execute_io_wb_valid", false,-1);
    tracep->declBus(c+207,"execute_io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+208,"execute_io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+210,"execute_io_csr_valid", false,-1);
    tracep->declBus(c+211,"execute_io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+212,"execute_io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+214,"execute_io_csr_except_is_except", false,-1);
    tracep->declBit(c+215,"execute_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+216,"execute_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+217,"execute_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+218,"execute_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+220,"execute_io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+222,"execute_io_commit", false,-1);
    tracep->declBus(c+223,"execute_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+224,"execute_io_difftest_peripheral", false,-1);
    tracep->declQuad(c+168,"execute_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+170,"execute_io_flush", false,-1);
    tracep->declBit(c+109,"execute_io_fence_i", false,-1);
    tracep->declBit(c+158,"execute_io_br_info_valid", false,-1);
    tracep->declBit(c+159,"execute_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+160,"execute_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+162,"execute_io_br_info_taken", false,-1);
    tracep->declQuad(c+163,"execute_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"execute_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+166,"execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+150,"execute_io_bus_valid", false,-1);
    tracep->declQuad(c+116,"execute_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+151,"execute_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"execute_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"execute_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"execute_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+153,"execute_io_bus_ready", false,-1);
    tracep->declBit(c+955,"decode_clock", false,-1);
    tracep->declBit(c+956,"decode_reset", false,-1);
    tracep->declBit(c+171,"decode_io_get_inst_ready", false,-1);
    tracep->declBit(c+172,"decode_io_get_inst_valid", false,-1);
    tracep->declBus(c+173,"decode_io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+174,"decode_io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+176,"decode_io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+225,"decode_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"decode_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+228,"decode_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+229,"decode_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+231,"decode_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+232,"decode_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+171,"decode_io_op_datas_ready", false,-1);
    tracep->declBit(c+177,"decode_io_op_datas_valid", false,-1);
    tracep->declBus(c+178,"decode_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+179,"decode_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+180,"decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+183,"decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+184,"decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+186,"decode_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+187,"decode_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+189,"decode_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+190,"decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+191,"decode_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+192,"decode_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+193,"decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+194,"decode_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+170,"decode_io_flush", false,-1);
    tracep->declBit(c+955,"commit_clock", false,-1);
    tracep->declBit(c+956,"commit_reset", false,-1);
    tracep->declBus(c+225,"commit_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"commit_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+228,"commit_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+229,"commit_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+206,"commit_io_normal_wb_valid", false,-1);
    tracep->declBus(c+207,"commit_io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+208,"commit_io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+231,"commit_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+232,"commit_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+210,"commit_io_csr_wb_valid", false,-1);
    tracep->declBus(c+211,"commit_io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+212,"commit_io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+214,"commit_io_csr_except_is_except", false,-1);
    tracep->declBit(c+215,"commit_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+216,"commit_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+217,"commit_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+218,"commit_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+220,"commit_io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+204,"commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+202,"commit_io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+198,"commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+200,"commit_io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+222,"commit_io_commit", false,-1);
    tracep->declBus(c+223,"commit_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+224,"commit_io_difftest_peripheral", false,-1);
    tracep->declBit(c+955,"clint_de_clock", false,-1);
    tracep->declBit(c+956,"clint_de_reset", false,-1);
    tracep->declBit(c+154,"clint_de_io_valid", false,-1);
    tracep->declQuad(c+116,"clint_de_io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+120,"clint_de_io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+155,"clint_de_io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+123,"clint_de_io_bits_is_w", false,-1);
    tracep->declBit(c+157,"clint_de_io_ready", false,-1);
    tracep->declBit(c+197,"clint_de_io_soft_irq", false,-1);
    tracep->declBit(c+196,"clint_de_io_time_irq", false,-1);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+154,"io_valid", false,-1);
    tracep->declQuad(c+116,"io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+120,"io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+155,"io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+123,"io_bits_is_w", false,-1);
    tracep->declBit(c+157,"io_ready", false,-1);
    tracep->declBit(c+197,"io_soft_irq", false,-1);
    tracep->declBit(c+196,"io_time_irq", false,-1);
    tracep->declBit(c+197,"reg_msip", false,-1);
    tracep->declQuad(c+234,"reg_mtime", false,-1, 63,0);
    tracep->declQuad(c+236,"reg_mtimecmp", false,-1, 63,0);
    tracep->declBit(c+157,"reg_ready", false,-1);
    tracep->declQuad(c+155,"red_rdata", false,-1, 63,0);
    tracep->declBit(c+238,"reg_state", false,-1);
    tracep->declBit(c+239,"is_misp", false,-1);
    tracep->declBit(c+240,"is_mtimecmp", false,-1);
    tracep->declBit(c+241,"io_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("commit ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+225,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+228,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+229,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+206,"io_normal_wb_valid", false,-1);
    tracep->declBus(c+207,"io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+208,"io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+231,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+232,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+210,"io_csr_wb_valid", false,-1);
    tracep->declBus(c+211,"io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+212,"io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+214,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+215,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+216,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+217,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+218,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+220,"io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+204,"io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+202,"io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+198,"io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+200,"io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+222,"io_commit", false,-1);
    tracep->declBus(c+223,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+224,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+955,"csr_reg_clock", false,-1);
    tracep->declBit(c+956,"csr_reg_reset", false,-1);
    tracep->declBus(c+211,"csr_reg_io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+212,"csr_reg_io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+210,"csr_reg_io_in_w_csr_en", false,-1);
    tracep->declQuad(c+220,"csr_reg_io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+218,"csr_reg_io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+215,"csr_reg_io_in_time_irq", false,-1);
    tracep->declBit(c+216,"csr_reg_io_in_soft_irq", false,-1);
    tracep->declBus(c+242,"csr_reg_io_in_exception", false,-1, 4,0);
    tracep->declBit(c+214,"csr_reg_io_in_is_exception", false,-1);
    tracep->declBit(c+222,"csr_reg_io_in_commit", false,-1);
    tracep->declBus(c+231,"csr_reg_io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+232,"csr_reg_io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+204,"csr_reg_io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+202,"csr_reg_io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+198,"csr_reg_io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+200,"csr_reg_io_r_csr_mie", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+243+i*2,"reg_file", true,(i+0), 63,0);
    }
    tracep->declQuad(c+307,"read_rs1_from_file", false,-1, 63,0);
    tracep->declQuad(c+309,"read_rs2_from_file", false,-1, 63,0);
    tracep->declQuad(c+311,"difftest_commit", false,-1, 63,0);
    tracep->declQuad(c+313,"difftest_inst", false,-1, 63,0);
    tracep->declQuad(c+315,"difftest_pc", false,-1, 63,0);
    tracep->declQuad(c+317,"inst_counter", false,-1, 63,0);
    tracep->declQuad(c+319,"difftest_irq", false,-1, 63,0);
    tracep->declQuad(c+321,"difftest_peripheral", false,-1, 63,0);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+211,"io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+212,"io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+210,"io_in_w_csr_en", false,-1);
    tracep->declQuad(c+220,"io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+218,"io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+215,"io_in_time_irq", false,-1);
    tracep->declBit(c+216,"io_in_soft_irq", false,-1);
    tracep->declBus(c+242,"io_in_exception", false,-1, 4,0);
    tracep->declBit(c+214,"io_in_is_exception", false,-1);
    tracep->declBit(c+222,"io_in_commit", false,-1);
    tracep->declBus(c+231,"io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+232,"io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+204,"io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+202,"io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+198,"io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+200,"io_r_csr_mie", false,-1, 63,0);
    tracep->declBit(c+323,"irq", false,-1);
    tracep->declQuad(c+324,"reg_mstatus", false,-1, 63,0);
    tracep->declQuad(c+326,"reg_mie", false,-1, 63,0);
    tracep->declQuad(c+328,"reg_mtvec", false,-1, 63,0);
    tracep->declQuad(c+330,"reg_mscratch", false,-1, 63,0);
    tracep->declQuad(c+332,"reg_mepc", false,-1, 63,0);
    tracep->declQuad(c+334,"reg_mcause", false,-1, 63,0);
    tracep->declQuad(c+336,"reg_mtval", false,-1, 63,0);
    tracep->declQuad(c+338,"reg_mcycle", false,-1, 63,0);
    tracep->declQuad(c+340,"reg_minstret", false,-1, 63,0);
    tracep->declQuad(c+342,"csr_rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cross_bar ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+110,"io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+111,"io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+113,"io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+114,"io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+125,"io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+126,"io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+127,"io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+129,"io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+131,"io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+133,"io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+134,"io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+135,"io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+138,"io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+139,"io_bus1_valid", false,-1);
    tracep->declQuad(c+101,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+140,"io_bus1_ready", false,-1);
    tracep->declBit(c+141,"io_bus2_valid", false,-1);
    tracep->declQuad(c+116,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+142,"io_bus2_ready", false,-1);
    tracep->declBit(c+1,"io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+2,"io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+6,"io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+7,"io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+969,"io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+344,"w_locked", false,-1);
    tracep->declBus(c+345,"w_lockId", false,-1, 1,0);
    tracep->declBit(c+346,"un_w_locked", false,-1);
    tracep->declBit(c+347,"bus2_w_is_valid", false,-1);
    tracep->declBus(c+348,"w_chosen", false,-1, 1,0);
    tracep->declBus(c+349,"reg_r_cnt", false,-1, 1,0);
    tracep->declBit(c+350,"r_locked", false,-1);
    tracep->declBus(c+351,"r_lockId", false,-1, 1,0);
    tracep->declBit(c+352,"un_r_locked", false,-1);
    tracep->declBit(c+353,"io_bus2_is_r", false,-1);
    tracep->declBit(c+354,"bus2_r_is_valid", false,-1);
    tracep->declBus(c+355,"r_chosen", false,-1, 1,0);
    tracep->declBit(c+356,"io_ICache_bus_r_fire", false,-1);
    tracep->declBus(c+357,"r_cnt_sub_1", false,-1, 1,0);
    tracep->declBit(c+358,"io_DCache_bus_r_fire", false,-1);
    tracep->declBit(c+359,"io_bus1_fire", false,-1);
    tracep->declBit(c+360,"io_bus2_fire", false,-1);
    tracep->declBit(c+361,"chose_ICache_bus_r", false,-1);
    tracep->declBit(c+362,"chose_DCache_bus_w", false,-1);
    tracep->declBit(c+363,"chose_DCache_bus_r", false,-1);
    tracep->declBit(c+364,"chose_bus1_r", false,-1);
    tracep->declBit(c+365,"chose_bus2_r", false,-1);
    tracep->declBit(c+366,"chose_bus2_w", false,-1);
    tracep->declBit(c+367,"reg_aw_ok", false,-1);
    tracep->declQuad(c+368,"bus2_w_addr", false,-1, 63,0);
    tracep->declBit(c+370,"bus2_chose_w_T_valid", false,-1);
    tracep->declQuad(c+371,"bus2_chose_w_T_wdata", false,-1, 63,0);
    tracep->declBus(c+373,"bus2_chose_w_T_wstrb", false,-1, 7,0);
    tracep->declBit(c+374,"reg_ar_ok", false,-1);
    tracep->declBit(c+375,"chose_bus2_r_valid", false,-1);
    tracep->declQuad(c+376,"chose_bus2_r_addr", false,-1, 63,0);
    tracep->declBit(c+378,"chose_bus1_r_valid", false,-1);
    tracep->declQuad(c+379,"chose_bus1_r_addr", false,-1, 63,0);
    tracep->declBit(c+381,"chose_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+382,"chose_DCache_bus_r_addr", false,-1, 63,0);
    tracep->declBit(c+384,"chose_arlen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cross_bar_1 ");
    tracep->declBit(c+143,"io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+144,"io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+101,"io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+103,"io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+145,"io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+146,"io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+148,"io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+150,"io_wb_valid", false,-1);
    tracep->declQuad(c+116,"io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+151,"io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"io_wb_bits_is_w", false,-1);
    tracep->declBit(c+153,"io_wb_ready", false,-1);
    tracep->declBit(c+99,"io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+100,"io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+101,"io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+103,"io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+104,"io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+105,"io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+107,"io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+115,"io_DCache_valid", false,-1);
    tracep->declQuad(c+116,"io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+118,"io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+124,"io_DCache_ready", false,-1);
    tracep->declBit(c+139,"io_bus1_valid", false,-1);
    tracep->declQuad(c+101,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+140,"io_bus1_ready", false,-1);
    tracep->declBit(c+141,"io_bus2_valid", false,-1);
    tracep->declQuad(c+116,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+142,"io_bus2_ready", false,-1);
    tracep->declBit(c+154,"io_clint_bus_valid", false,-1);
    tracep->declQuad(c+116,"io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+155,"io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+123,"io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+157,"io_clint_bus_ready", false,-1);
    tracep->declBit(c+385,"fetch_low_address", false,-1);
    tracep->declBit(c+386,"low_address", false,-1);
    tracep->declBit(c+387,"not_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+115,"io_cpu_valid", false,-1);
    tracep->declQuad(c+116,"io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+118,"io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+124,"io_cpu_ready", false,-1);
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
    tracep->declBit(c+125,"io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+126,"io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+127,"io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+129,"io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+131,"io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+132,"io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+133,"io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+134,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+135,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+138,"io_cache_bus_r_ready", false,-1);
    tracep->declQuad(c+388,"Tag", false,-1, 53,0);
    tracep->declBus(c+390,"Index", false,-1, 5,0);
    tracep->declBus(c+391,"Offset", false,-1, 3,0);
    tracep->declQuad(c+120,"wdata", false,-1, 63,0);
    tracep->declBus(c+122,"wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"is_w", false,-1);
    tracep->declBus(c+392,"reg_cache_state", false,-1, 1,0);
    tracep->declQuad(c+393,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+395,"reg_wstrb", false,-1, 7,0);
    tracep->declBit(c+396,"reg_is_w", false,-1);
    tracep->declQuad(c+397,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+399,"reg_index", false,-1, 5,0);
    tracep->declBus(c+400,"reg_offset", false,-1, 3,0);
    tracep->declBit(c+124,"reg_ready", false,-1);
    tracep->declQuad(c+118,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+401,"reg_cache_write", false,-1);
    tracep->declBus(c+402,"reg_cache_wstrb", false,-1, 15,0);
    tracep->declArray(c+59,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+403,"reg_chosen_tag", false,-1);
    tracep->declBus(c+970,"cache_idle", false,-1, 1,0);
    tracep->declBus(c+971,"read_cache", false,-1, 1,0);
    tracep->declBus(c+972,"cache_and_bus", false,-1, 1,0);
    tracep->declBus(c+973,"cache_end", false,-1, 1,0);
    tracep->declArray(c+404,"cache_mask", false,-1, 127,0);
    tracep->declArray(c+408,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+412,"is_sram0_write", false,-1);
    tracep->declBit(c+413,"is_sram2_write", false,-1);
    tracep->declBit(c+974,"clear_cache", false,-1);
    tracep->declQuad(c+414,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+416,"reg_sram0_dirty", false,-1, 63,0);
    tracep->declQuad(c+418,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+420,"neg_chose_bit", false,-1, 63,0);
    tracep->declQuad(c+422,"reg_sram2_valid", false,-1, 63,0);
    tracep->declQuad(c+424,"reg_sram2_dirty", false,-1, 63,0);
    tracep->declQuad(c+135,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+134,"reg_r_valid", false,-1);
    tracep->declQuad(c+127,"reg_w_waddr", false,-1, 63,0);
    tracep->declQuad(c+129,"reg_w_wdata", false,-1, 63,0);
    tracep->declBit(c+131,"reg_w_wlast", false,-1);
    tracep->declBit(c+126,"reg_w_valid", false,-1);
    tracep->declBit(c+132,"reg_b_ready", false,-1);
    tracep->declQuad(c+426,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+428,"tag_2", false,-1, 53,0);
    tracep->declBit(c+430,"hit_0", false,-1);
    tracep->declBit(c+431,"hit_2", false,-1);
    tracep->declBit(c+432,"tag_valid_0", false,-1);
    tracep->declBit(c+433,"tag_valid_2", false,-1);
    tracep->declBit(c+434,"tag_dirty_0", false,-1);
    tracep->declBit(c+435,"tag_dirty_2", false,-1);
    tracep->declArray(c+63,"rdata_0", false,-1, 127,0);
    tracep->declArray(c+71,"rdata_2", false,-1, 127,0);
    tracep->declQuad(c+436,"reg_lru_2", false,-1, 63,0);
    tracep->declBit(c+438,"LRU_2", false,-1);
    tracep->declBit(c+439,"reg_start_operation", false,-1);
    tracep->declBus(c+440,"reg_cnt", false,-1, 1,0);
    tracep->declBit(c+441,"reg_rbus_finish", false,-1);
    tracep->declBit(c+442,"reg_wbus_finish", false,-1);
    tracep->declQuad(c+443,"temp_addr", false,-1, 63,0);
    tracep->declBit(c+445,"io_cache_bus_r_fire", false,-1);
    tracep->declBit(c+446,"io_cache_bus_b_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+171,"io_get_inst_ready", false,-1);
    tracep->declBit(c+172,"io_get_inst_valid", false,-1);
    tracep->declBus(c+173,"io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+174,"io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+176,"io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+225,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+228,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+229,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+231,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+232,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+171,"io_op_datas_ready", false,-1);
    tracep->declBit(c+177,"io_op_datas_valid", false,-1);
    tracep->declBus(c+178,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+179,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+180,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+183,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+184,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+186,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+187,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+189,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+190,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+191,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+192,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+193,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+194,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+170,"io_flush", false,-1);
    tracep->declBus(c+975,"ALUType_alu_sll_4_2", false,-1, 2,0);
    tracep->declBus(c+976,"op_mem", false,-1, 2,0);
    tracep->declBus(c+977,"op_fence", false,-1, 2,0);
    tracep->declBus(c+978,"op_alu", false,-1, 2,0);
    tracep->declBus(c+979,"op_mu", false,-1, 2,0);
    tracep->declBus(c+975,"op_bru", false,-1, 2,0);
    tracep->declBus(c+980,"op_system", false,-1, 2,0);
    tracep->declBus(c+981,"Type_N", false,-1, 3,0);
    tracep->declBus(c+982,"Type_U", false,-1, 3,0);
    tracep->declBus(c+983,"Type_S", false,-1, 3,0);
    tracep->declBus(c+984,"Type_J", false,-1, 3,0);
    tracep->declBus(c+985,"Type_R", false,-1, 3,0);
    tracep->declBus(c+986,"Type_B", false,-1, 3,0);
    tracep->declBus(c+987,"Type_CSR", false,-1, 3,0);
    tracep->declBus(c+988,"Type_IR", false,-1, 3,0);
    tracep->declBus(c+989,"Type_I", false,-1, 3,0);
    tracep->declBus(c+990,"alu_lui", false,-1, 6,0);
    tracep->declBus(c+991,"alu_auipc", false,-1, 6,0);
    tracep->declBus(c+992,"bru_jal", false,-1, 6,0);
    tracep->declBus(c+993,"bru_jalr", false,-1, 6,0);
    tracep->declBit(c+177,"reg_valid", false,-1);
    tracep->declBus(c+178,"reg_opType", false,-1, 2,0);
    tracep->declBus(c+179,"reg_exuType", false,-1, 6,0);
    tracep->declBus(c+180,"reg_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"reg_rs1_data", false,-1, 63,0);
    tracep->declBus(c+183,"reg_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+184,"reg_rs2_data", false,-1, 63,0);
    tracep->declBus(c+186,"reg_imm", false,-1, 31,0);
    tracep->declQuad(c+187,"reg_pc", false,-1, 63,0);
    tracep->declBus(c+189,"reg_inst", false,-1, 31,0);
    tracep->declBus(c+190,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+191,"reg_dest_is_reg", false,-1);
    tracep->declBus(c+193,"reg_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+194,"reg_csr_data", false,-1, 63,0);
    tracep->declBit(c+192,"reg_is_pre", false,-1);
    tracep->declBus(c+228,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+225,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+231,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+447,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+448,"fun", false,-1, 2,0);
    tracep->declBus(c+449,"fun_exuType", false,-1, 4,0);
    tracep->declBus(c+450,"fun_op", false,-1, 2,0);
    tracep->declBit(c+451,"temp_system_is_pri", false,-1);
    tracep->declBit(c+452,"temp_system_is_imm", false,-1);
    tracep->declBit(c+453,"temp_system_rs1", false,-1);
    tracep->declBus(c+454,"temp_mem_itype", false,-1, 3,0);
    tracep->declBit(c+455,"temp_mem_dest", false,-1);
    tracep->declBit(c+455,"temp_op_is_imm", false,-1);
    tracep->declBit(c+456,"temp_mem_rs2", false,-1);
    tracep->declBit(c+457,"is_sr", false,-1);
    tracep->declBus(c+458,"temp_kk", false,-1, 5,0);
    tracep->declBus(c+459,"temp_op_exuType", false,-1, 5,0);
    tracep->declBus(c+460,"temp_op_itype", false,-1, 3,0);
    tracep->declBit(c+456,"temp_op_rs2", false,-1);
    tracep->declBus(c+461,"temp_op", false,-1, 2,0);
    tracep->declBit(c+462,"is_op_system", false,-1);
    tracep->declBit(c+463,"is_op_fence", false,-1);
    tracep->declBit(c+464,"is_op_mem", false,-1);
    tracep->declBit(c+465,"is_op_bru_b", false,-1);
    tracep->declBit(c+466,"is_op_bru_j", false,-1);
    tracep->declBit(c+467,"is_op_op_0", false,-1);
    tracep->declBit(c+468,"is_op_op_1", false,-1);
    tracep->declBus(c+469,"opType", false,-1, 2,0);
    tracep->declBus(c+470,"exuType", false,-1, 6,0);
    tracep->declBus(c+471,"instType", false,-1, 3,0);
    tracep->declBit(c+472,"dest_is_reg", false,-1);
    tracep->declBit(c+473,"rs1_is_reg", false,-1);
    tracep->declBit(c+474,"rs2_is_reg", false,-1);
    tracep->declBus(c+475,"imm_data_I", false,-1, 31,0);
    tracep->declBus(c+476,"imm_data_U", false,-1, 31,0);
    tracep->declBus(c+477,"imm_data_S", false,-1, 31,0);
    tracep->declBus(c+478,"imm_data_J", false,-1, 31,0);
    tracep->declBus(c+479,"imm_data_B", false,-1, 31,0);
    tracep->declBus(c+480,"imm_data_CSR", false,-1, 31,0);
    tracep->declBus(c+481,"imm_data_IR", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+171,"io_op_datas_ready", false,-1);
    tracep->declBit(c+177,"io_op_datas_valid", false,-1);
    tracep->declBus(c+178,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+179,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+180,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+181,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+183,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+184,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+186,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+187,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+189,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+190,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+191,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+192,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+193,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+194,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+196,"io_irq_time_irq", false,-1);
    tracep->declBit(c+197,"io_irq_soft_irq", false,-1);
    tracep->declQuad(c+198,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+200,"io_mie", false,-1, 63,0);
    tracep->declQuad(c+202,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+204,"io_mtvec", false,-1, 63,0);
    tracep->declBit(c+206,"io_wb_valid", false,-1);
    tracep->declBus(c+207,"io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+208,"io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+210,"io_csr_valid", false,-1);
    tracep->declBus(c+211,"io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+212,"io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+214,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+215,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+216,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+217,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+218,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+220,"io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+222,"io_commit", false,-1);
    tracep->declBus(c+223,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+224,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+168,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+170,"io_flush", false,-1);
    tracep->declBit(c+109,"io_fence_i", false,-1);
    tracep->declBit(c+158,"io_br_info_valid", false,-1);
    tracep->declBit(c+159,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+160,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+162,"io_br_info_taken", false,-1);
    tracep->declQuad(c+163,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+166,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+150,"io_bus_valid", false,-1);
    tracep->declQuad(c+116,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+151,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+153,"io_bus_ready", false,-1);
    tracep->declBit(c+482,"alu_exu_io_valid", false,-1);
    tracep->declBit(c+192,"alu_exu_io_is_pre", false,-1);
    tracep->declBit(c+483,"alu_exu_io_br_info_valid", false,-1);
    tracep->declBit(c+484,"alu_exu_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+485,"alu_exu_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+487,"alu_exu_io_br_info_taken", false,-1);
    tracep->declQuad(c+488,"alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"alu_exu_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+166,"alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+178,"alu_exu_io_opType", false,-1, 2,0);
    tracep->declBus(c+179,"alu_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+490,"alu_exu_io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+492,"alu_exu_io_op_data2", false,-1, 63,0);
    tracep->declBus(c+186,"alu_exu_io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+187,"alu_exu_io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+494,"alu_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+484,"alu_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+488,"alu_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+955,"mem_exu_clock", false,-1);
    tracep->declBit(c+956,"mem_exu_reset", false,-1);
    tracep->declBit(c+496,"mem_exu_io_valid", false,-1);
    tracep->declBus(c+179,"mem_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+490,"mem_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+492,"mem_exu_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+186,"mem_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+497,"mem_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+499,"mem_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+500,"mem_exu_io_ready", false,-1);
    tracep->declBit(c+150,"mem_exu_io_bus_valid", false,-1);
    tracep->declQuad(c+116,"mem_exu_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+151,"mem_exu_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"mem_exu_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"mem_exu_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+153,"mem_exu_io_bus_ready", false,-1);
    tracep->declBit(c+224,"mem_exu_io_difftest_peripheral", false,-1);
    tracep->declBit(c+955,"mu_exu_clock", false,-1);
    tracep->declBit(c+956,"mu_exu_reset", false,-1);
    tracep->declBit(c+501,"mu_exu_io_valid", false,-1);
    tracep->declBus(c+179,"mu_exu_io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+490,"mu_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+492,"mu_exu_io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+502,"mu_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+504,"mu_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+505,"mu_exu_io_ready", false,-1);
    tracep->declBit(c+506,"system_exu_io_valid", false,-1);
    tracep->declBus(c+179,"system_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+507,"system_exu_io_csr_data", false,-1, 63,0);
    tracep->declBus(c+193,"system_exu_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+186,"system_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+490,"system_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+202,"system_exu_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+198,"system_exu_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+507,"system_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+509,"system_exu_io_csr_is_w", false,-1);
    tracep->declQuad(c+510,"system_exu_io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+512,"system_exu_io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+513,"system_exu_io_is_except", false,-1);
    tracep->declBus(c+514,"system_exu_io_exception", false,-1, 5,0);
    tracep->declBit(c+515,"system_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+202,"system_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+516,"in_data_valid", false,-1);
    tracep->declBit(c+171,"ready", false,-1);
    tracep->declBus(c+517,"reg_valid", false,-1, 3,0);
    tracep->declBit(c+518,"reg_alu_valid", false,-1);
    tracep->declBit(c+519,"reg_mem_valid", false,-1);
    tracep->declBit(c+520,"reg_mu_valid", false,-1);
    tracep->declBit(c+521,"reg_system_valid", false,-1);
    tracep->declBus(c+522,"valid", false,-1, 3,0);
    tracep->declBit(c+523,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+524,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBus(c+207,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+158,"reg_br_valid", false,-1);
    tracep->declBit(c+159,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+160,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+162,"reg_taken", false,-1);
    tracep->declQuad(c+163,"reg_br_next_pc", false,-1, 63,0);
    tracep->declQuad(c+212,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+211,"reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+526,"reg_csr_is_w", false,-1);
    tracep->declBit(c+527,"reg_is_except", false,-1);
    tracep->declBus(c+217,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+528,"reg_is_time_irq", false,-1);
    tracep->declBit(c+529,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+218,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+220,"reg_except_pc", false,-1, 63,0);
    tracep->declBit(c+530,"time_irq", false,-1);
    tracep->declBit(c+531,"soft_irq", false,-1);
    tracep->declBit(c+532,"irq", false,-1);
    tracep->declQuad(c+168,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+533,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+534,"reg_fence_i", false,-1);
    tracep->declBit(c+535,"reg_commit", false,-1);
    tracep->declBus(c+223,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+482,"io_valid", false,-1);
    tracep->declBit(c+192,"io_is_pre", false,-1);
    tracep->declBit(c+483,"io_br_info_valid", false,-1);
    tracep->declBit(c+484,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+485,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+487,"io_br_info_taken", false,-1);
    tracep->declQuad(c+488,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+166,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+178,"io_opType", false,-1, 2,0);
    tracep->declBus(c+179,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+490,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+492,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+186,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+187,"io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+494,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+484,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+488,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+536,"is_32", false,-1);
    tracep->declBus(c+537,"op_data1_T", false,-1, 31,0);
    tracep->declBus(c+538,"op_data2_T", false,-1, 31,0);
    tracep->declQuad(c+539,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+541,"op_data2", false,-1, 63,0);
    tracep->declBus(c+543,"op_imm_T", false,-1, 31,0);
    tracep->declQuad(c+544,"op_imm", false,-1, 63,0);
    tracep->declBit(c+546,"rs2_is_imm", false,-1);
    tracep->declQuad(c+547,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+549,"rs1_is_pc", false,-1);
    tracep->declBit(c+550,"is_sub", false,-1);
    tracep->declQuad(c+551,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+553,"temp_rs2_data", false,-1, 63,0);
    tracep->declArray(c+555,"add_sub_result", false,-1, 64,0);
    tracep->declBit(c+558,"u_rs1_l_rs2", false,-1);
    tracep->declBit(c+559,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+560,"shift_rs2_data", false,-1, 5,0);
    tracep->declQuad(c+561,"sll_temp", false,-1, 63,0);
    tracep->declQuad(c+563,"srl_temp", false,-1, 63,0);
    tracep->declQuad(c+565,"sra_temp", false,-1, 63,0);
    tracep->declBit(c+550,"is_sra", false,-1);
    tracep->declQuad(c+567,"sr_temp", false,-1, 63,0);
    tracep->declBus(c+569,"func", false,-1, 2,0);
    tracep->declQuad(c+570,"result_data", false,-1, 63,0);
    tracep->declBit(c+165,"is_pre", false,-1);
    tracep->declBit(c+572,"is_br", false,-1);
    tracep->declBit(c+573,"is_eq", false,-1);
    tracep->declQuad(c+574,"temp_1", false,-1, 63,0);
    tracep->declArray(c+576,"add_pc", false,-1, 64,0);
    tracep->declArray(c+579,"op_pc_4", false,-1, 64,0);
    tracep->declArray(c+582,"temp_result_pc", false,-1, 64,0);
    tracep->declQuad(c+585,"dst_data", false,-1, 63,0);
    tracep->declQuad(c+587,"next_pc", false,-1, 63,0);
    tracep->declBit(c+589,"valid_next_pc", false,-1);
    tracep->declBit(c+483,"br_valid", false,-1);
    tracep->declBit(c+590,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+496,"io_valid", false,-1);
    tracep->declBus(c+179,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+490,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+492,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+186,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+497,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+499,"io_dest_is_w", false,-1);
    tracep->declBit(c+500,"io_ready", false,-1);
    tracep->declBit(c+150,"io_bus_valid", false,-1);
    tracep->declQuad(c+116,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+151,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+120,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+122,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+123,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+153,"io_bus_ready", false,-1);
    tracep->declBit(c+224,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+544,"imm", false,-1, 63,0);
    tracep->declBit(c+500,"reg_ready", false,-1);
    tracep->declQuad(c+591,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+593,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+595,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+596,"reg_bus_is_w", false,-1);
    tracep->declBit(c+597,"reg_bus_valid", false,-1);
    tracep->declQuad(c+497,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+499,"reg_w_rs_en", false,-1);
    tracep->declBus(c+598,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+224,"reg_difftest_peripheral", false,-1);
    tracep->declBit(c+599,"reg_ls_state", false,-1);
    tracep->declQuad(c+600,"mem_r_data", false,-1, 63,0);
    tracep->declQuad(c+602,"mem_data_result", false,-1, 63,0);
    tracep->declQuad(c+604,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+606,"w_mem_en", false,-1);
    tracep->declQuad(c+607,"mem_wstrb", false,-1, 63,0);
    tracep->declArray(c+609,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+613,"chose_chancel", false,-1);
    tracep->declBit(c+614,"bus_is_w_valid", false,-1);
    tracep->declBit(c+615,"is_peripheral", false,-1);
    tracep->declBit(c+616,"io_bus_fire", false,-1);
    tracep->declBit(c+617,"ready_valid", false,-1);
    tracep->declBit(c+618,"ready_state1", false,-1);
    tracep->declBit(c+619,"ready_state0", false,-1);
    tracep->declArray(c+620,"bus_wdata_valid", false,-1, 126,0);
    tracep->declArray(c+624,"bus_wdata_state0", false,-1, 126,0);
    tracep->declArray(c+957,"bus_wdata_reset", false,-1, 126,0);
    tracep->declQuad(c+628,"bus_wstrb_valid", false,-1, 63,0);
    tracep->declQuad(c+630,"bus_wstrb_state0", false,-1, 63,0);
    tracep->declQuad(c+961,"bus_wstrb_reset", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+501,"io_valid", false,-1);
    tracep->declBus(c+179,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+490,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+492,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+502,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+504,"io_dest_is_w", false,-1);
    tracep->declBit(c+505,"io_ready", false,-1);
    tracep->declBit(c+955,"div_clock", false,-1);
    tracep->declBit(c+956,"div_reset", false,-1);
    tracep->declBit(c+632,"div_io_valid", false,-1);
    tracep->declQuad(c+490,"div_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+492,"div_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+179,"div_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+633,"div_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+635,"div_io_dest_is_w", false,-1);
    tracep->declBit(c+636,"div_io_ready", false,-1);
    tracep->declBit(c+955,"mul_clock", false,-1);
    tracep->declBit(c+956,"mul_reset", false,-1);
    tracep->declBit(c+637,"mul_io_valid", false,-1);
    tracep->declQuad(c+490,"mul_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+492,"mul_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+179,"mul_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+638,"mul_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+640,"mul_io_dest_is_w", false,-1);
    tracep->declBit(c+641,"mul_io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+632,"io_valid", false,-1);
    tracep->declQuad(c+490,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+492,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+179,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+633,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+635,"io_dest_is_w", false,-1);
    tracep->declBit(c+636,"io_ready", false,-1);
    tracep->declBit(c+536,"is_32", false,-1);
    tracep->declBit(c+642,"is_signed", false,-1);
    tracep->declArray(c+643,"dividend", false,-1, 64,0);
    tracep->declArray(c+646,"divisor", false,-1, 64,0);
    tracep->declArray(c+649,"rem", false,-1, 64,0);
    tracep->declArray(c+652,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+655,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+658,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+661,"reg_q", false,-1, 65,0);
    tracep->declArray(c+664,"neg_divisor", false,-1, 64,0);
    tracep->declBus(c+667,"reg_state", false,-1, 1,0);
    tracep->declBus(c+668,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+669,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+636,"reg_ready", false,-1);
    tracep->declArray(c+670,"rem_q", false,-1, 130,0);
    tracep->declArray(c+675,"rem_q_lshift_1", false,-1, 131,0);
    tracep->declArray(c+680,"temp_result", false,-1, 131,0);
    tracep->declBit(c+685,"rem_is_0", false,-1);
    tracep->declBit(c+686,"rem_is_neg_div", false,-1);
    tracep->declBit(c+687,"rem_is_div", false,-1);
    tracep->declBit(c+688,"is_need_correct", false,-1);
    tracep->declBit(c+635,"reg_dest_is_w", false,-1);
    tracep->declArray(c+689,"rem_correct", false,-1, 64,0);
    tracep->declArray(c+692,"rem_state3", false,-1, 64,0);
    tracep->declBus(c+695,"state_state3", false,-1, 1,0);
    tracep->declBus(c+696,"cnt_state3", false,-1, 6,0);
    tracep->declBit(c+697,"reg_is_32", false,-1);
    tracep->declBit(c+698,"reg_is_rem", false,-1);
    tracep->declQuad(c+699,"rem_adjust", false,-1, 63,0);
    tracep->declQuad(c+701,"q_adjust", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+637,"io_valid", false,-1);
    tracep->declQuad(c+490,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+492,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+179,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+638,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+640,"io_dest_is_w", false,-1);
    tracep->declBit(c+641,"io_ready", false,-1);
    tracep->declBit(c+703,"is_32", false,-1);
    tracep->declBit(c+704,"is_rs1_signed", false,-1);
    tracep->declBit(c+536,"is_rs2_signed", false,-1);
    tracep->declArray(c+705,"mul_data1", false,-1, 129,0);
    tracep->declArray(c+710,"mul_data2", false,-1, 64,0);
    tracep->declArray(c+713,"temp_mul2", false,-1, 66,0);
    tracep->declBit(c+641,"reg_ready", false,-1);
    tracep->declBus(c+716,"reg_state", false,-1, 1,0);
    tracep->declArray(c+717,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+720,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+725,"reg_result", false,-1, 129,0);
    tracep->declBus(c+730,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+640,"reg_dest_is_w", false,-1);
    tracep->declArray(c+731,"pp", false,-1, 130,0);
    tracep->declBus(c+736,"reg_cnt", false,-1, 6,0);
    tracep->declBit(c+737,"reg_not_h", false,-1);
    tracep->declBit(c+738,"reg_is_32", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+506,"io_valid", false,-1);
    tracep->declBus(c+179,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+507,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+193,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+186,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+490,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+202,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+198,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+507,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+509,"io_csr_is_w", false,-1);
    tracep->declQuad(c+510,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+512,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+513,"io_is_except", false,-1);
    tracep->declBus(c+514,"io_exception", false,-1, 5,0);
    tracep->declBit(c+515,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+202,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+544,"imm", false,-1, 63,0);
    tracep->declBit(c+739,"is_imm", false,-1);
    tracep->declQuad(c+740,"op_data", false,-1, 63,0);
    tracep->declQuad(c+742,"or_result", false,-1, 63,0);
    tracep->declQuad(c+744,"and_result", false,-1, 63,0);
    tracep->declQuad(c+746,"temp_csr_result_data", false,-1, 63,0);
    tracep->declBit(c+748,"is_mret", false,-1);
    tracep->declBit(c+749,"is_sret", false,-1);
    tracep->declBit(c+750,"is_ecall", false,-1);
    tracep->declBit(c+751,"is_ebreak", false,-1);
    tracep->declBit(c+752,"is_except", false,-1);
    tracep->declBus(c+753,"exception", false,-1, 3,0);
    tracep->declBit(c+754,"is_ret", false,-1);
    tracep->declQuad(c+755,"result_status", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+158,"io_br_info_valid", false,-1);
    tracep->declBit(c+159,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+160,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+162,"io_br_info_taken", false,-1);
    tracep->declQuad(c+163,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+165,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+166,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+168,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+170,"io_flush", false,-1);
    tracep->declBit(c+143,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+144,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+101,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+103,"io_cpu_data_ready", false,-1);
    tracep->declBit(c+145,"io_cpu_data_valid", false,-1);
    tracep->declQuad(c+146,"io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+148,"io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"io_put_pc_ready", false,-1);
    tracep->declBit(c+172,"io_put_pc_valid", false,-1);
    tracep->declBus(c+173,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+174,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+176,"io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+98,"io_out_flush", false,-1);
    tracep->declBit(c+955,"ibuf_clock", false,-1);
    tracep->declBit(c+956,"ibuf_reset", false,-1);
    tracep->declBit(c+170,"ibuf_io_flush", false,-1);
    tracep->declBit(c+103,"ibuf_io_cache_buf_ready", false,-1);
    tracep->declBit(c+757,"ibuf_io_cache_buf_valid", false,-1);
    tracep->declQuad(c+148,"ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+758,"ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+759,"ibuf_io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+171,"ibuf_io_put_pc_ready", false,-1);
    tracep->declBit(c+172,"ibuf_io_put_pc_valid", false,-1);
    tracep->declBus(c+173,"ibuf_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+174,"ibuf_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+176,"ibuf_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+955,"br_predictor_clock", false,-1);
    tracep->declBit(c+956,"br_predictor_reset", false,-1);
    tracep->declBit(c+158,"br_predictor_io_br_info_valid", false,-1);
    tracep->declBit(c+159,"br_predictor_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+160,"br_predictor_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+162,"br_predictor_io_br_info_taken", false,-1);
    tracep->declQuad(c+163,"br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+101,"br_predictor_io_pc", false,-1, 63,0);
    tracep->declQuad(c+760,"br_predictor_io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+762,"br_predictor_io_pre_valid", false,-1);
    tracep->declQuad(c+101,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+763,"reg_flush", false,-1);
    tracep->declQuad(c+764,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+144,"reg_bus_valid", false,-1);
    tracep->declBus(c+766,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+767,"pre_info_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+768+i*2,"pre_info_fifo", true,(i+0), 63,0);
    }
    tracep->declBit(c+776,"pre_enq", false,-1);
    tracep->declBus(c+777,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+778,"is_pre_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+779+i*1,"is_pre_fifo", true,(i+0));
    }
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+158,"io_br_info_valid", false,-1);
    tracep->declBit(c+159,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+160,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+162,"io_br_info_taken", false,-1);
    tracep->declQuad(c+163,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+101,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+760,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+762,"io_pre_valid", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+783+i*2,"RAS", true,(i+0), 63,0);
    }
    tracep->declBus(c+791,"reg_head", false,-1, 2,0);
    tracep->declBus(c+792,"update_index", false,-1, 5,0);
    tracep->declArray(c+793,"update_btb_data", false,-1, 122,0);
    tracep->declBus(c+797,"update_pht_data", false,-1, 1,0);
    tracep->declBus(c+798,"index", false,-1, 5,0);
    tracep->declQuad(c+799,"tag", false,-1, 55,0);
    tracep->declBus(c+801,"pht_data", false,-1, 1,0);
    tracep->declBit(c+802,"pht_taken", false,-1);
    tracep->declArray(c+803,"btb_data", false,-1, 127,0);
    tracep->declBit(c+807,"btb_valid", false,-1);
    tracep->declQuad(c+808,"btb_tag", false,-1, 55,0);
    tracep->declQuad(c+810,"btb_target_next_pc", false,-1, 63,0);
    tracep->declBus(c+812,"btb_br_type", false,-1, 1,0);
    tracep->declBit(c+762,"pre_valid", false,-1);
    tracep->declBit(c+813,"is_br_return", false,-1);
    tracep->declQuad(c+814,"ras_ready", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+170,"io_flush", false,-1);
    tracep->declBit(c+103,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+757,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+148,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+758,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+759,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+171,"io_put_pc_ready", false,-1);
    tracep->declBit(c+172,"io_put_pc_valid", false,-1);
    tracep->declBus(c+173,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+174,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+176,"io_put_pc_bits_is_pre", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+816+i*2,"ibuf_pc", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+824+i*1,"ibuf_inst", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+828+i*1,"ibuf_is_pre", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+832+i*1,"ibuf_valid", true,(i+0));
    }
    tracep->declBus(c+836,"reg_head", false,-1, 1,0);
    tracep->declBus(c+837,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+838,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+839,"enq_size", false,-1);
    tracep->declBit(c+840,"can_deq", false,-1);
    tracep->declBus(c+841,"result_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+98,"io_flush", false,-1);
    tracep->declBit(c+99,"io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+100,"io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+101,"io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+103,"io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+104,"io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+105,"io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+107,"io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+109,"io_is_fence_i", false,-1);
    tracep->declBus(c+21,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_sram_wen_0", false,-1);
    tracep->declBit(c+23,"io_sram_wen_1", false,-1);
    tracep->declArray(c+24,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+110,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+111,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+113,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+114,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+955,"cache_stage0_clock", false,-1);
    tracep->declBit(c+956,"cache_stage0_reset", false,-1);
    tracep->declBit(c+98,"cache_stage0_io_flush", false,-1);
    tracep->declBit(c+99,"cache_stage0_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+100,"cache_stage0_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+101,"cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+99,"cache_stage0_io_addr_ready", false,-1);
    tracep->declBit(c+842,"cache_stage0_io_addr_valid", false,-1);
    tracep->declQuad(c+843,"cache_stage0_io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+955,"cache_stage1_clock", false,-1);
    tracep->declBit(c+956,"cache_stage1_reset", false,-1);
    tracep->declBit(c+98,"cache_stage1_io_flush", false,-1);
    tracep->declBit(c+99,"cache_stage1_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+842,"cache_stage1_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+843,"cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+845,"cache_stage1_io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+846,"cache_stage1_io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+847,"cache_stage1_io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+848,"cache_stage1_io_sram_valid", false,-1);
    tracep->declArray(c+849,"cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+853,"cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+857,"cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+861,"cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+865,"cache_stage1_io_sram_ready", false,-1);
    tracep->declBit(c+866,"cache_stage1_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+867,"cache_stage1_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+868,"cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+870,"cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+846,"cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+871,"cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+873,"cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+847,"cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+874,"cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+955,"cache_stage2_clock", false,-1);
    tracep->declBit(c+956,"cache_stage2_reset", false,-1);
    tracep->declBit(c+98,"cache_stage2_io_flush", false,-1);
    tracep->declBit(c+866,"cache_stage2_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+867,"cache_stage2_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+868,"cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+870,"cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+846,"cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+871,"cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+873,"cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+847,"cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+874,"cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"cache_stage2_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+111,"cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+113,"cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+114,"cache_stage2_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+876,"cache_stage2_io_sram_w_valid", false,-1);
    tracep->declBus(c+877,"cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+28,"cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+24,"cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+878,"cache_stage2_io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+103,"cache_stage2_io_rdata_ready", false,-1);
    tracep->declBit(c+104,"cache_stage2_io_rdata_valid", false,-1);
    tracep->declQuad(c+105,"cache_stage2_io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+107,"cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+879,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+881,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+883,"is_w_sram", false,-1);
    tracep->declBit(c+884,"is_sram0_write", false,-1);
    tracep->declBit(c+885,"is_sram1_write", false,-1);
    tracep->declQuad(c+886,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+888,"w_r_pass0_val", false,-1);
    tracep->declBit(c+889,"w_r_pass1_val", false,-1);
    tracep->declBit(c+890,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+891,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+892,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+865,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+98,"io_flush", false,-1);
    tracep->declBit(c+99,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+100,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+101,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+99,"io_addr_ready", false,-1);
    tracep->declBit(c+842,"io_addr_valid", false,-1);
    tracep->declQuad(c+843,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+842,"reg_valid", false,-1);
    tracep->declQuad(c+843,"reg_addr", false,-1, 63,0);
    tracep->declBit(c+893,"valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+98,"io_flush", false,-1);
    tracep->declBit(c+99,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+842,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+843,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+845,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+846,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+847,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+848,"io_sram_valid", false,-1);
    tracep->declArray(c+849,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+853,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+857,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+861,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+865,"io_sram_ready", false,-1);
    tracep->declBit(c+866,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+867,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+868,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+870,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+846,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+871,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+873,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+847,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+874,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+848,"valid", false,-1);
    tracep->declBit(c+99,"ready", false,-1);
    tracep->declQuad(c+868,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+894,"reg_valid", false,-1);
    tracep->declQuad(c+895,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+897,"reg_index", false,-1, 5,0);
    tracep->declBus(c+898,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+899,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+901,"tag_1", false,-1, 53,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBit(c+98,"io_flush", false,-1);
    tracep->declBit(c+866,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+867,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+868,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+870,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+846,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+871,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+873,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+847,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+874,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+111,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+113,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+114,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+876,"io_sram_w_valid", false,-1);
    tracep->declBus(c+877,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+28,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+24,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+878,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+103,"io_rdata_ready", false,-1);
    tracep->declBit(c+104,"io_rdata_valid", false,-1);
    tracep->declQuad(c+105,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+107,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+897,"index", false,-1, 5,0);
    tracep->declBit(c+903,"valid", false,-1);
    tracep->declBit(c+878,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+105,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+104,"reg_valid", false,-1);
    tracep->declBit(c+904,"reg_ready", false,-1);
    tracep->declQuad(c+905,"temp_addr", false,-1, 63,0);
    tracep->declQuad(c+111,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+110,"reg_r_valid", false,-1);
    tracep->declArray(c+28,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+876,"reg_cache_write", false,-1);
    tracep->declQuad(c+107,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+907,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+909,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+910,"reg_lru_1", false,-1, 63,0);
    tracep->declBit(c+912,"LRU_1", false,-1);
    tracep->declQuad(c+913,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+915,"neg_chose_bit", false,-1, 63,0);
    tracep->declBus(c+967,"bus_idle", false,-1, 0,0);
    tracep->declBus(c+968,"bus_busy", false,-1, 0,0);
    tracep->declBit(c+917,"reg_bus_state", false,-1);
    tracep->declQuad(c+918,"lru_1_and_neg_chose", false,-1, 63,0);
    tracep->declQuad(c+920,"lru_1_or_chose", false,-1, 63,0);
    tracep->declBit(c+922,"io_cache_bus_r_fire", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+963,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+32,"Q", false,-1, 127,0);
    tracep->declArray(c+994,"bwen", false,-1, 127,0);
    tracep->declBit(c+884,"wen", false,-1);
    tracep->declArray(c+923,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+963,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+36,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+36,"Q", false,-1, 127,0);
    tracep->declArray(c+994,"bwen", false,-1, 127,0);
    tracep->declBit(c+884,"wen", false,-1);
    tracep->declArray(c+927,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"io_wen", false,-1);
    tracep->declArray(c+963,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+40,"Q", false,-1, 127,0);
    tracep->declArray(c+994,"bwen", false,-1, 127,0);
    tracep->declBit(c+885,"wen", false,-1);
    tracep->declArray(c+931,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"io_wen", false,-1);
    tracep->declArray(c+963,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+44,"Q", false,-1, 127,0);
    tracep->declArray(c+994,"bwen", false,-1, 127,0);
    tracep->declBit(c+885,"wen", false,-1);
    tracep->declArray(c+935,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+51,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+63,"Q", false,-1, 127,0);
    tracep->declArray(c+404,"bwen", false,-1, 127,0);
    tracep->declBit(c+412,"wen", false,-1);
    tracep->declArray(c+939,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+963,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+67,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+67,"Q", false,-1, 127,0);
    tracep->declArray(c+994,"bwen", false,-1, 127,0);
    tracep->declBit(c+412,"wen", false,-1);
    tracep->declArray(c+943,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"io_wen", false,-1);
    tracep->declArray(c+51,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+71,"Q", false,-1, 127,0);
    tracep->declArray(c+404,"bwen", false,-1, 127,0);
    tracep->declBit(c+413,"wen", false,-1);
    tracep->declArray(c+947,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+955,"clock", false,-1);
    tracep->declBit(c+956,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"io_wen", false,-1);
    tracep->declArray(c+963,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+75,"Q", false,-1, 127,0);
    tracep->declArray(c+994,"bwen", false,-1, 127,0);
    tracep->declBit(c+413,"wen", false,-1);
    tracep->declArray(c+951,"read_sram", false,-1, 127,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h2d76ce9a__0;
    VlWide<3>/*95:0*/ __Vtemp_h114c2dcb__0;
    VlWide<3>/*95:0*/ __Vtemp_hd47e848f__0;
    VlWide<4>/*127:0*/ __Vtemp_h53b1a3f5__0;
    VlWide<4>/*127:0*/ __Vtemp_h08263223__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__0;
    VlWide<3>/*95:0*/ __Vtemp_h346bf577__0;
    VlWide<3>/*95:0*/ __Vtemp_h28f9f554__0;
    VlWide<5>/*159:0*/ __Vtemp_h63eaff34__0;
    VlWide<5>/*159:0*/ __Vtemp_he5b4b165__0;
    VlWide<5>/*159:0*/ __Vtemp_h1b763563__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h2ede82b0__0;
    VlWide<3>/*95:0*/ __Vtemp_h7cbb49d7__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__2;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__2;
    VlWide<3>/*95:0*/ __Vtemp_h256c5cfa__0;
    VlWide<3>/*95:0*/ __Vtemp_h8d9e640e__0;
    VlWide<3>/*95:0*/ __Vtemp_h99ba1d40__0;
    VlWide<3>/*95:0*/ __Vtemp_h7cbb49d7__1;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__3;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__3;
    VlWide<3>/*95:0*/ __Vtemp_h042ab437__0;
    VlWide<3>/*95:0*/ __Vtemp_h2756cbfa__0;
    VlWide<3>/*95:0*/ __Vtemp_ha5ea0fb5__0;
    VlWide<5>/*159:0*/ __Vtemp_h61a83971__0;
    VlWide<3>/*95:0*/ __Vtemp_h6cec51a8__0;
    VlWide<3>/*95:0*/ __Vtemp_hc0d44b95__0;
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
    VlWide<4>/*127:0*/ __Vtemp_h2421319e__0;
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
    bufp->fullBit(oldp+93,(((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid) 
                            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))));
    bufp->fullBit(oldp+94,(vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_aw_fire));
    bufp->fullBit(oldp+95,(vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_w_fire));
    bufp->fullQData(oldp+96,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__t_rdata),64);
    bufp->fullBit(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush));
    bufp->fullBit(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready));
    bufp->fullBit(oldp+100,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
    bufp->fullQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
    bufp->fullBit(oldp+103,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    bufp->fullBit(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    bufp->fullQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
    bufp->fullQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
    bufp->fullBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    bufp->fullQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+115,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid))));
    bufp->fullQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
    bufp->fullQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
    bufp->fullQData(oldp+120,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
    bufp->fullCData(oldp+122,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
    bufp->fullBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
    bufp->fullBit(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    bufp->fullBit(oldp+125,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
    bufp->fullBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    bufp->fullQData(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
    bufp->fullQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
    bufp->fullBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
    bufp->fullBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    bufp->fullBit(oldp+133,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
    bufp->fullBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    bufp->fullQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
    bufp->fullBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
    bufp->fullBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    bufp->fullBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    bufp->fullBit(oldp+143,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready))));
    bufp->fullBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    bufp->fullBit(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
    bufp->fullQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
    bufp->fullQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
    bufp->fullBit(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    bufp->fullQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
    bufp->fullBit(oldp+153,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) ? 
                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
    bufp->fullBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
    bufp->fullQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
    bufp->fullBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    bufp->fullBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
    bufp->fullBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
    bufp->fullQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
    bufp->fullBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
    bufp->fullQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
    bufp->fullBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid));
    bufp->fullQData(oldp+166,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                               [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                                : 0ULL)),64);
    bufp->fullQData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
    bufp->fullBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush));
    bufp->fullBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    bufp->fullBit(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid));
    bufp->fullIData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst),32);
    bufp->fullQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                              [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
    bufp->fullBit(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre
                            [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]));
    bufp->fullBit(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    bufp->fullCData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
    bufp->fullCData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
    bufp->fullCData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
    bufp->fullQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
    bufp->fullCData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
    bufp->fullQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
    bufp->fullIData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
    bufp->fullQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
    bufp->fullIData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
    bufp->fullCData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
    bufp->fullBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
    bufp->fullBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
    bufp->fullSData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+196,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                             <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
    bufp->fullBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
    bufp->fullQData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
    bufp->fullQData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie),64);
    bufp->fullQData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
    bufp->fullQData(oldp+204,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
    bufp->fullBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
    bufp->fullCData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
    bufp->fullQData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
    bufp->fullBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
    bufp->fullSData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
    bufp->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
    bufp->fullBit(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
    bufp->fullCData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
    bufp->fullQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
    bufp->fullQData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
    bufp->fullBit(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
    bufp->fullIData(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
    bufp->fullBit(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    bufp->fullCData(oldp+225,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0xfU))),5);
    bufp->fullQData(oldp+226,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xfU)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                               [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xfU))])),64);
    bufp->fullCData(oldp+228,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+229,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                               [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0x14U))])),64);
    bufp->fullSData(oldp+231,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+232,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
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
    bufp->fullQData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
    bufp->fullQData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
    bufp->fullBit(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    bufp->fullBit(oldp+239,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullBit(oldp+240,((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))));
    bufp->fullCData(oldp+242,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
    bufp->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[0]),64);
    bufp->fullQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[1]),64);
    bufp->fullQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[2]),64);
    bufp->fullQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[3]),64);
    bufp->fullQData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[4]),64);
    bufp->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[5]),64);
    bufp->fullQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[6]),64);
    bufp->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[7]),64);
    bufp->fullQData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[8]),64);
    bufp->fullQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[9]),64);
    bufp->fullQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[10]),64);
    bufp->fullQData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[11]),64);
    bufp->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[12]),64);
    bufp->fullQData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[13]),64);
    bufp->fullQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[14]),64);
    bufp->fullQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[15]),64);
    bufp->fullQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[16]),64);
    bufp->fullQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[17]),64);
    bufp->fullQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[18]),64);
    bufp->fullQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[19]),64);
    bufp->fullQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[20]),64);
    bufp->fullQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[21]),64);
    bufp->fullQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[22]),64);
    bufp->fullQData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[23]),64);
    bufp->fullQData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[24]),64);
    bufp->fullQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[25]),64);
    bufp->fullQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[26]),64);
    bufp->fullQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[27]),64);
    bufp->fullQData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[28]),64);
    bufp->fullQData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[29]),64);
    bufp->fullQData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[30]),64);
    bufp->fullQData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[31]),64);
    bufp->fullQData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                              [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                              [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit),64);
    bufp->fullQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),64);
    bufp->fullQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
    bufp->fullQData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
    bufp->fullQData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq),64);
    bufp->fullQData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral),64);
    bufp->fullBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
    bufp->fullQData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
    bufp->fullQData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
    bufp->fullQData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
    bufp->fullQData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
    bufp->fullQData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
    bufp->fullQData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
    bufp->fullQData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
    bufp->fullQData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
    bufp->fullQData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
    bufp->fullQData(oldp+342,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
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
    bufp->fullBit(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
    bufp->fullCData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
    bufp->fullBit(oldp+346,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)))));
    bufp->fullBit(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__bus2_w_is_valid));
    bufp->fullCData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
    bufp->fullCData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
    bufp->fullBit(oldp+350,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    bufp->fullCData(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
    bufp->fullBit(oldp+352,((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    bufp->fullBit(oldp+353,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)))));
    bufp->fullBit(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__bus2_r_is_valid));
    bufp->fullCData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
    bufp->fullBit(oldp+356,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready))));
    bufp->fullCData(oldp+357,((3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                                     - (IData)(1U)))),2);
    bufp->fullBit(oldp+358,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready))));
    bufp->fullBit(oldp+359,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
    bufp->fullBit(oldp+360,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready))));
    bufp->fullBit(oldp+361,((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))));
    bufp->fullBit(oldp+362,((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))));
    bufp->fullBit(oldp+363,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))));
    bufp->fullBit(oldp+364,((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))));
    bufp->fullBit(oldp+365,((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))));
    bufp->fullBit(oldp+366,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))));
    bufp->fullBit(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
    bufp->fullQData(oldp+368,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                : 0ULL)),64);
    bufp->fullBit(oldp+370,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__bus2_w_is_valid))));
    bufp->fullQData(oldp+371,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                : 0ULL)),64);
    bufp->fullCData(oldp+373,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                ? (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))
                                : 0U)),8);
    bufp->fullBit(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
    bufp->fullBit(oldp+375,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                             & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid)))));
    bufp->fullQData(oldp+376,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                : 0ULL)),64);
    bufp->fullBit(oldp+378,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                              ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid))
                              : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                 & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid))))));
    bufp->fullQData(oldp+379,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
                                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                    : 0ULL))),64);
    bufp->fullBit(oldp+381,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                              ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))
                              : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                  ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid))
                                  : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                     & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid)))))));
    bufp->fullQData(oldp+382,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr
                                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
                                    : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                        : 0ULL)))),64);
    bufp->fullBit(oldp+384,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                             | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))));
    bufp->fullBit(oldp+385,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+386,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
    bufp->fullQData(oldp+388,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+390,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+391,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
    bufp->fullCData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
    bufp->fullQData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
    bufp->fullCData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
    bufp->fullBit(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
    bufp->fullQData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
    bufp->fullCData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
    bufp->fullCData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
    bufp->fullBit(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    bufp->fullSData(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
    bufp->fullBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    bufp->fullWData(oldp+404,(vlSelf->riscv_soc__DOT__sram4__DOT__bwen),128);
    bufp->fullWData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
    bufp->fullBit(oldp+412,(vlSelf->riscv_soc__DOT__sram4__DOT__wen));
    bufp->fullBit(oldp+413,(vlSelf->riscv_soc__DOT__sram6__DOT__wen));
    bufp->fullQData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
    bufp->fullQData(oldp+418,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
    bufp->fullQData(oldp+420,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
    bufp->fullQData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
    bufp->fullQData(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
    bufp->fullQData(oldp+426,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
    bufp->fullQData(oldp+428,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
    bufp->fullBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
    bufp->fullBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
    bufp->fullBit(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0));
    bufp->fullBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2));
    bufp->fullBit(oldp+434,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullBit(oldp+435,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullQData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
    bufp->fullBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__LRU_2));
    bufp->fullBit(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    bufp->fullCData(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
    bufp->fullBit(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    bufp->fullBit(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    bufp->fullQData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__temp_addr),64);
    bufp->fullBit(oldp+445,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))));
    bufp->fullBit(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_b_fire));
    bufp->fullCData(oldp+447,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+448,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
    bufp->fullCData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
    bufp->fullBit(oldp+451,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+452,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU))));
    bufp->fullBit(oldp+453,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 0xeU)))));
    bufp->fullCData(oldp+454,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 3U : 0xcU)),4);
    bufp->fullBit(oldp+455,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 5U)))));
    bufp->fullBit(oldp+456,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 5U))));
    bufp->fullBit(oldp+457,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullCData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
    bufp->fullCData(oldp+459,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                : ((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
    bufp->fullCData(oldp+460,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 6U : (((1U == (7U 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0xcU))))
                                         ? 4U : 0xcU))),4);
    bufp->fullCData(oldp+461,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? ((0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                    ? 3U : 2U) : 2U)),3);
    bufp->fullBit(oldp+462,((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
    bufp->fullBit(oldp+463,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
    bufp->fullBit(oldp+464,((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
    bufp->fullBit(oldp+465,((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
    bufp->fullBit(oldp+466,((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
    bufp->fullBit(oldp+467,((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
    bufp->fullBit(oldp+468,((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
    bufp->fullCData(oldp+469,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                ? ((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                    ? ((0x2000000U 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                        ? 3U : 2U) : 2U)
                                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                    ? 2U : (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                             | (4U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)))
                                             ? 1U : 
                                            ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                              ? 5U : 
                                             ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                               ? 6U
                                               : ((6U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                   ? 4U
                                                   : 0U))))))),3);
    bufp->fullCData(oldp+470,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                ? ((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                    : ((5U == (7U & 
                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                >> 0xcU)))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))
                                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                    ? ((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                        ? 0U : 0x40U)
                                    : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                        ? ((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                            ? 0x4eU
                                            : 0x4aU)
                                        : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                            ? (0x20U 
                                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                            : ((0U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                    ? 
                                                   (0x40U 
                                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((0x60U 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                          >> 0xfU)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                                     : 0U)))))))),7);
    bufp->fullCData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
    bufp->fullBit(oldp+472,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
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
    bufp->fullBit(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
    bufp->fullBit(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
    bufp->fullIData(oldp+475,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                >> 0x14U))),32);
    bufp->fullIData(oldp+476,((0xfffff000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)),32);
    bufp->fullIData(oldp+477,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               ((0xfe0U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 7U))))),32);
    bufp->fullIData(oldp+478,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                  >> 0x1fU) ? 0xfffU
                                  : 0U) << 0x14U) | 
                               ((0xff000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst) 
                                | ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                              >> 9U)) 
                                   | (0x7feU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                >> 0x14U)))))),32);
    bufp->fullIData(oldp+479,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           << 4U)) 
                                | ((0x7e0U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                               >> 7U)))))),32);
    bufp->fullIData(oldp+480,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0xfU))),32);
    bufp->fullIData(oldp+481,((0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0x14U))),32);
    bufp->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    bufp->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid));
    bufp->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
    bufp->fullQData(oldp+485,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+487,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
    bufp->fullQData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
    bufp->fullQData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
    bufp->fullQData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
    bufp->fullQData(oldp+494,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                      >> 0x1fU)))
                                        ? (0xffffffff00000000ULL 
                                           | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                        : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                : 0ULL)),64);
    bufp->fullBit(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    bufp->fullQData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullBit(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    bufp->fullQData(oldp+502,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
    bufp->fullBit(oldp+504,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+505,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    bufp->fullQData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
    bufp->fullBit(oldp+509,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    bufp->fullQData(oldp+510,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
    bufp->fullSData(oldp+512,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    bufp->fullCData(oldp+514,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
    bufp->fullBit(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
    bufp->fullBit(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullCData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullBit(oldp+518,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
    bufp->fullBit(oldp+519,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+520,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+521,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U))));
    bufp->fullCData(oldp+522,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
    bufp->fullBit(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    bufp->fullBit(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    bufp->fullBit(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
    bufp->fullBit(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+536,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    bufp->fullIData(oldp+537,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U)),32);
    bufp->fullIData(oldp+538,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U)),32);
    bufp->fullQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullIData(oldp+543,(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                >> 0x1fU) ? 0xffffffffU
                                : 0U)),32);
    bufp->fullQData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
    bufp->fullBit(oldp+546,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U)))));
    bufp->fullQData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+549,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 6U))));
    bufp->fullBit(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sub));
    bufp->fullQData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullQData(oldp+553,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sub)
                                ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
    bufp->fullWData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
    bufp->fullBit(oldp+558,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
    bufp->fullBit(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
    bufp->fullQData(oldp+561,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                               << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+563,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+565,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+567,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sub)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                     ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
    bufp->fullCData(oldp+569,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))),3);
    bufp->fullQData(oldp+570,(((0U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U])))
                                : ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                    : ((3U == (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                        ? (QData)((IData)(
                                                          (1U 
                                                           & (~ 
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                        : ((7U == (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                            ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                               & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                            : ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                                ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                     << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U)))
                                                      ? 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sub)
                                                       ? 
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                                       : 
                                                      (((1U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                         ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                                      : 0ULL))))))))),64);
    bufp->fullBit(oldp+572,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
    bufp->fullBit(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    bufp->fullQData(oldp+574,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    __Vtemp_h2d76ce9a__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h922ce6c5__0);
    __Vtemp_h2d76ce9a__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h922ce6c5__0 
                                        >> 0x20U));
    __Vtemp_h2d76ce9a__0[2U] = 1U;
    bufp->fullWData(oldp+576,(__Vtemp_h2d76ce9a__0),65);
    __Vtemp_h114c2dcb__0[0U] = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    __Vtemp_h114c2dcb__0[1U] = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                        >> 0x20U));
    __Vtemp_h114c2dcb__0[2U] = 0U;
    bufp->fullWData(oldp+579,(__Vtemp_h114c2dcb__0),65);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        __Vtemp_hd47e848f__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_hf728dcb9__0[0U];
        __Vtemp_hd47e848f__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_hf728dcb9__0[1U];
        __Vtemp_hd47e848f__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_hf728dcb9__0[2U];
    } else {
        __Vtemp_hd47e848f__0[0U] = 0U;
        __Vtemp_hd47e848f__0[1U] = 0U;
        __Vtemp_hd47e848f__0[2U] = 0U;
    }
    bufp->fullWData(oldp+582,(__Vtemp_hd47e848f__0),65);
    bufp->fullQData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullQData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
    bufp->fullBit(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
    bufp->fullBit(oldp+590,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid) 
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
    bufp->fullQData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullBit(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    bufp->fullQData(oldp+600,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7
                                : 0ULL)),64);
    bufp->fullQData(oldp+602,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                ? ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0))
                                    : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                        ? (((QData)((IData)(
                                                            (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7 
                                                                         >> 0x1fU)))
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0)))
                                        : ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                            ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0))
                                            : ((4U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                ? (
                                                   ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0)))
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                     ? 
                                                    (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                                        & (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7 
                                                                   >> 7U)))
                                                        ? 0xffffffffffffffULL
                                                        : 0ULL) 
                                                      << 8U) 
                                                     | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0)))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                      ? 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7
                                                       : 0ULL)
                                                      : 0ULL)))))))
                                : 0ULL)),64);
    bufp->fullQData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullQData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
    bufp->fullWData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
    bufp->fullBit(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullBit(oldp+614,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en))));
    bufp->fullBit(oldp+615,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
                             & (0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
                                         >> 0x1fU)))));
    bufp->fullBit(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__io_bus_fire));
    bufp->fullBit(oldp+617,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)))));
    bufp->fullBit(oldp+618,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                              ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__io_bus_fire) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))));
    bufp->fullBit(oldp+619,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__io_bus_fire) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                                    : (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid))))));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
        __Vtemp_h53b1a3f5__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
        __Vtemp_h53b1a3f5__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
        __Vtemp_h53b1a3f5__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
        __Vtemp_h53b1a3f5__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
    } else {
        __Vtemp_h53b1a3f5__0[0U] = 0U;
        __Vtemp_h53b1a3f5__0[1U] = 0U;
        __Vtemp_h53b1a3f5__0[2U] = 0U;
        __Vtemp_h53b1a3f5__0[3U] = 0U;
    }
    bufp->fullWData(oldp+620,(__Vtemp_h53b1a3f5__0),127);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        __Vtemp_h08263223__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
        __Vtemp_h08263223__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
                                            >> 0x20U));
        __Vtemp_h08263223__0[2U] = 0U;
        __Vtemp_h08263223__0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
        __Vtemp_h08263223__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
        __Vtemp_h08263223__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
        __Vtemp_h08263223__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
        __Vtemp_h08263223__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
    } else {
        __Vtemp_h08263223__0[0U] = 0U;
        __Vtemp_h08263223__0[1U] = 0U;
        __Vtemp_h08263223__0[2U] = 0U;
        __Vtemp_h08263223__0[3U] = 0U;
    }
    bufp->fullWData(oldp+624,(__Vtemp_h08263223__0),127);
    bufp->fullQData(oldp+628,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
                                : 0ULL)),64);
    bufp->fullQData(oldp+630,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb))
                                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
                                    : 0ULL))),64);
    bufp->fullBit(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
    bufp->fullQData(oldp+633,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullBit(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
    bufp->fullQData(oldp+638,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
    bufp->fullBit(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullBit(oldp+642,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U)))));
    bufp->fullWData(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
    bufp->fullWData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
    bufp->fullWData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
    bufp->fullWData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
    bufp->fullWData(oldp+664,(__Vtemp_h28f9f554__0),65);
    bufp->fullCData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    __Vtemp_h63eaff34__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
    __Vtemp_h63eaff34__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
    __Vtemp_h63eaff34__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                 << 2U) | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    __Vtemp_h63eaff34__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                 >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              << 2U));
    __Vtemp_h63eaff34__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                 >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              << 2U));
    bufp->fullWData(oldp+670,(__Vtemp_h63eaff34__0),131);
    __Vtemp_he5b4b165__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                << 1U);
    __Vtemp_he5b4b165__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                              << 1U));
    __Vtemp_he5b4b165__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                 << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                              << 1U)));
    __Vtemp_he5b4b165__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                 >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              << 3U));
    __Vtemp_he5b4b165__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                 >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              << 3U));
    bufp->fullWData(oldp+675,(__Vtemp_he5b4b165__0),132);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) {
        __Vtemp_h1b763563__0[0U] = 0U;
        __Vtemp_h1b763563__0[1U] = 0U;
        __Vtemp_h1b763563__0[2U] = 0U;
        __Vtemp_h1b763563__0[3U] = 0U;
        __Vtemp_h1b763563__0[4U] = 0U;
    } else {
        __Vtemp_h1b763563__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[0U];
        __Vtemp_h1b763563__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[1U];
        __Vtemp_h1b763563__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[2U];
        __Vtemp_h1b763563__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[3U];
        __Vtemp_h1b763563__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[4U];
    }
    bufp->fullWData(oldp+680,(__Vtemp_h1b763563__0),132);
    bufp->fullBit(oldp+685,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
    bufp->fullBit(oldp+686,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                      ^ __Vtemp_h2ede82b0__0[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                        ^ __Vtemp_h2ede82b0__0[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                       ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
    bufp->fullBit(oldp+687,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    bufp->fullBit(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
    VL_ADD_W(3, __Vtemp_h7cbb49d7__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
    __Vtemp_h639dda77__2[0U] = 1U;
    __Vtemp_h639dda77__2[1U] = 0U;
    __Vtemp_h639dda77__2[2U] = 0U;
    __Vtemp_h3fef5ac1__2[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__2[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__2[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h256c5cfa__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp_h3fef5ac1__2);
    VL_ADD_W(3, __Vtemp_h8d9e640e__0, __Vtemp_h639dda77__2, __Vtemp_h256c5cfa__0);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
            __Vtemp_h99ba1d40__0[0U] = __Vtemp_h7cbb49d7__0[0U];
            __Vtemp_h99ba1d40__0[1U] = __Vtemp_h7cbb49d7__0[1U];
            __Vtemp_h99ba1d40__0[2U] = (1U & __Vtemp_h7cbb49d7__0[2U]);
        } else {
            __Vtemp_h99ba1d40__0[0U] = __Vtemp_h8d9e640e__0[0U];
            __Vtemp_h99ba1d40__0[1U] = __Vtemp_h8d9e640e__0[1U];
            __Vtemp_h99ba1d40__0[2U] = (1U & __Vtemp_h8d9e640e__0[2U]);
        }
    } else {
        __Vtemp_h99ba1d40__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        __Vtemp_h99ba1d40__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        __Vtemp_h99ba1d40__0[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    bufp->fullWData(oldp+689,(__Vtemp_h99ba1d40__0),65);
    VL_ADD_W(3, __Vtemp_h7cbb49d7__1, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
    __Vtemp_h639dda77__3[0U] = 1U;
    __Vtemp_h639dda77__3[1U] = 0U;
    __Vtemp_h639dda77__3[2U] = 0U;
    __Vtemp_h3fef5ac1__3[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__3[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__3[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h042ab437__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp_h3fef5ac1__3);
    VL_ADD_W(3, __Vtemp_h2756cbfa__0, __Vtemp_h639dda77__3, __Vtemp_h042ab437__0);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
                __Vtemp_ha5ea0fb5__0[0U] = __Vtemp_h7cbb49d7__1[0U];
                __Vtemp_ha5ea0fb5__0[1U] = __Vtemp_h7cbb49d7__1[1U];
                __Vtemp_ha5ea0fb5__0[2U] = (1U & __Vtemp_h7cbb49d7__1[2U]);
            } else {
                __Vtemp_ha5ea0fb5__0[0U] = __Vtemp_h2756cbfa__0[0U];
                __Vtemp_ha5ea0fb5__0[1U] = __Vtemp_h2756cbfa__0[1U];
                __Vtemp_ha5ea0fb5__0[2U] = (1U & __Vtemp_h2756cbfa__0[2U]);
            }
        } else {
            __Vtemp_ha5ea0fb5__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
            __Vtemp_ha5ea0fb5__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
            __Vtemp_ha5ea0fb5__0[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
        }
    } else {
        __Vtemp_ha5ea0fb5__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        __Vtemp_ha5ea0fb5__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        __Vtemp_ha5ea0fb5__0[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    bufp->fullWData(oldp+692,(__Vtemp_ha5ea0fb5__0),65);
    bufp->fullCData(oldp+695,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))),2);
    bufp->fullCData(oldp+696,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))),7);
    bufp->fullBit(oldp+697,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
    bufp->fullBit(oldp+698,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                   >> 3U))));
    bufp->fullQData(oldp+699,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullQData(oldp+701,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+703,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))));
    bufp->fullBit(oldp+704,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullWData(oldp+705,(__Vtemp_h61a83971__0),130);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
        __Vtemp_h6cec51a8__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[0U];
        __Vtemp_h6cec51a8__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[1U];
        __Vtemp_h6cec51a8__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[2U];
    } else {
        __Vtemp_h6cec51a8__0[0U] = 0U;
        __Vtemp_h6cec51a8__0[1U] = 0U;
        __Vtemp_h6cec51a8__0[2U] = 0U;
    }
    bufp->fullWData(oldp+710,(__Vtemp_h6cec51a8__0),65);
    __Vtemp_hc0d44b95__0[0U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[0U]
                                  : 0U) << 1U);
    __Vtemp_hc0d44b95__0[1U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[0U]
                                   : 0U) >> 0x1fU) 
                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[1U]
                                     : 0U) << 1U));
    __Vtemp_hc0d44b95__0[2U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) 
                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[2U]) 
                                 << 2U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                              ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[1U]
                                              : 0U) 
                                            >> 0x1fU) 
                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[2U]
                                                : 0U) 
                                              << 1U)));
    bufp->fullWData(oldp+713,(__Vtemp_hc0d44b95__0),67);
    bufp->fullCData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
    bufp->fullWData(oldp+731,(__Vtemp_h52802c7d__0),131);
    bufp->fullCData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullBit(oldp+737,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                          >> 2U)))));
    bufp->fullBit(oldp+738,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
    bufp->fullBit(oldp+739,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 4U))));
    bufp->fullQData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullQData(oldp+746,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+748,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+749,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+750,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+751,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+752,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))) 
                             | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    bufp->fullCData(oldp+753,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
    bufp->fullBit(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullQData(oldp+755,(((0xffffffffffffff77ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                               | (QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                              >> 7U)))
                                                   ? 0x88U
                                                   : 0x80U))))),64);
    bufp->fullBit(oldp+757,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+758,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                              >> 2U)))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
                                           >> 0x20U))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data))),32);
    bufp->fullBit(oldp+759,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [3U] : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail])));
    bufp->fullQData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+762,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullBit(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[0]),64);
    bufp->fullQData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[1]),64);
    bufp->fullQData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[2]),64);
    bufp->fullQData(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[3]),64);
    bufp->fullBit(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
    bufp->fullCData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[0]));
    bufp->fullBit(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[1]));
    bufp->fullBit(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[2]));
    bufp->fullBit(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[3]));
    bufp->fullQData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
    bufp->fullQData(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
    bufp->fullQData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
    bufp->fullQData(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
    bufp->fullCData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullCData(oldp+792,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
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
    bufp->fullWData(oldp+793,(__Vtemp_h643ad04b__0),123);
    bufp->fullCData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data),2);
    bufp->fullCData(oldp+798,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 3U)))),6);
    bufp->fullQData(oldp+799,(((0xfffffffffffffeULL 
                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 8U)) | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                         >> 2U))))))),56);
    bufp->fullCData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                              [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 3U)))]),2);
    bufp->fullBit(oldp+802,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                   [(0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))] 
                                   >> 1U))));
    bufp->fullWData(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data),128);
    bufp->fullBit(oldp+807,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
                                   >> 0x1aU))));
    bufp->fullQData(oldp+808,((0xffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                                >> 2U)))),56);
    bufp->fullQData(oldp+810,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])) 
                                                >> 2U)))),64);
    bufp->fullCData(oldp+812,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])),2);
    bufp->fullBit(oldp+813,((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U]))));
    bufp->fullQData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                              [(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))]),64);
    bufp->fullQData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
    bufp->fullQData(oldp+818,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
    bufp->fullQData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
    bufp->fullQData(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
    bufp->fullIData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
    bufp->fullIData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
    bufp->fullIData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
    bufp->fullIData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
    bufp->fullBit(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[0]));
    bufp->fullBit(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[1]));
    bufp->fullBit(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[2]));
    bufp->fullBit(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[3]));
    bufp->fullBit(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[0]));
    bufp->fullBit(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[1]));
    bufp->fullBit(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[2]));
    bufp->fullBit(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[3]));
    bufp->fullCData(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+839,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
    bufp->fullBit(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
    bufp->fullCData(oldp+841,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                      + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                     - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
    bufp->fullBit(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+843,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullCData(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    bufp->fullBit(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullWData(oldp+849,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
    bufp->fullWData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
    bufp->fullWData(oldp+857,(__Vtemp_h96d8aca3__0),128);
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
    bufp->fullWData(oldp+861,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+865,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+866,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullBit(oldp+867,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+871,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+874,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+877,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullBit(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+881,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+883,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+884,(vlSelf->riscv_soc__DOT__sram0__DOT__wen));
    bufp->fullBit(oldp+885,(vlSelf->riscv_soc__DOT__sram2__DOT__wen));
    bufp->fullQData(oldp+886,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullBit(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+891,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+892,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+893,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
    bufp->fullBit(oldp+894,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullQData(oldp+895,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+897,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+898,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+899,((0x3fffffffffffffULL 
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
    bufp->fullQData(oldp+901,((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
    bufp->fullBit(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+905,((0xfffffffffffffff0ULL 
                               & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
    bufp->fullQData(oldp+907,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+909,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullBit(oldp+912,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
    bufp->fullQData(oldp+913,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullQData(oldp+915,((~ (1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
    bufp->fullBit(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state));
    bufp->fullQData(oldp+918,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_and_neg_chose),64);
    bufp->fullQData(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_or_chose),64);
    bufp->fullBit(oldp+922,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid))));
    __Vtemp_h7748dece__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_h7748dece__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_h7748dece__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_h7748dece__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+923,(__Vtemp_h7748dece__0),128);
    __Vtemp_h8b37abc5__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_h8b37abc5__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_h8b37abc5__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_h8b37abc5__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+927,(__Vtemp_h8b37abc5__0),128);
    __Vtemp_he6da4d43__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_he6da4d43__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_he6da4d43__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_he6da4d43__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+931,(__Vtemp_he6da4d43__0),128);
    __Vtemp_ha7b78b5e__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_ha7b78b5e__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_ha7b78b5e__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_ha7b78b5e__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+935,(__Vtemp_ha7b78b5e__0),128);
    __Vtemp_h0490666a__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h0490666a__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h0490666a__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h0490666a__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+939,(__Vtemp_h0490666a__0),128);
    __Vtemp_hca3bc04b__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_hca3bc04b__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_hca3bc04b__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_hca3bc04b__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+943,(__Vtemp_hca3bc04b__0),128);
    __Vtemp_h4060cfc7__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h4060cfc7__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h4060cfc7__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h4060cfc7__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+947,(__Vtemp_h4060cfc7__0),128);
    __Vtemp_h09a85685__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    __Vtemp_h09a85685__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    __Vtemp_h09a85685__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    __Vtemp_h09a85685__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    bufp->fullWData(oldp+951,(__Vtemp_h09a85685__0),128);
    bufp->fullBit(oldp+955,(vlSelf->clock));
    bufp->fullBit(oldp+956,(vlSelf->reset));
    if (vlSelf->reset) {
        __Vtemp_h2421319e__0[0U] = 0U;
        __Vtemp_h2421319e__0[1U] = 0U;
        __Vtemp_h2421319e__0[2U] = 0U;
        __Vtemp_h2421319e__0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        __Vtemp_h2421319e__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
        __Vtemp_h2421319e__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
                                            >> 0x20U));
        __Vtemp_h2421319e__0[2U] = 0U;
        __Vtemp_h2421319e__0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
        __Vtemp_h2421319e__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
        __Vtemp_h2421319e__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
        __Vtemp_h2421319e__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
        __Vtemp_h2421319e__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
    } else {
        __Vtemp_h2421319e__0[0U] = 0U;
        __Vtemp_h2421319e__0[1U] = 0U;
        __Vtemp_h2421319e__0[2U] = 0U;
        __Vtemp_h2421319e__0[3U] = 0U;
    }
    bufp->fullWData(oldp+957,(__Vtemp_h2421319e__0),127);
    bufp->fullQData(oldp+961,(((IData)(vlSelf->reset)
                                ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                           ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb))
                                           : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
                                               : 0ULL)))),64);
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+963,(__Vtemp_hd56bd579__0),128);
    bufp->fullBit(oldp+967,(0U));
    bufp->fullBit(oldp+968,(1U));
    bufp->fullBit(oldp+969,(1U));
    bufp->fullCData(oldp+970,(0U),2);
    bufp->fullCData(oldp+971,(1U),2);
    bufp->fullCData(oldp+972,(2U),2);
    bufp->fullCData(oldp+973,(3U),2);
    bufp->fullBit(oldp+974,(0U));
    bufp->fullCData(oldp+975,(1U),3);
    bufp->fullCData(oldp+976,(5U),3);
    bufp->fullCData(oldp+977,(6U),3);
    bufp->fullCData(oldp+978,(2U),3);
    bufp->fullCData(oldp+979,(3U),3);
    bufp->fullCData(oldp+980,(4U),3);
    bufp->fullCData(oldp+981,(0U),4);
    bufp->fullCData(oldp+982,(1U),4);
    bufp->fullCData(oldp+983,(3U),4);
    bufp->fullCData(oldp+984,(2U),4);
    bufp->fullCData(oldp+985,(6U),4);
    bufp->fullCData(oldp+986,(7U),4);
    bufp->fullCData(oldp+987,(5U),4);
    bufp->fullCData(oldp+988,(4U),4);
    bufp->fullCData(oldp+989,(0xcU),4);
    bufp->fullCData(oldp+990,(0U),7);
    bufp->fullCData(oldp+991,(0x40U),7);
    bufp->fullCData(oldp+992,(0x4eU),7);
    bufp->fullCData(oldp+993,(0x4aU),7);
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+994,(__Vtemp_hd09821c2__0),128);
}
