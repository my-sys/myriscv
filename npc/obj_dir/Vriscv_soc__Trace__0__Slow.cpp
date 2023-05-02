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
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->pushNamePrefix("riscv_soc ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+864,"core_clock", false,-1);
    tracep->declBit(c+865,"core_reset", false,-1);
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
    tracep->declBus(c+21,"core_io_sram0_addr", false,-1, 5,0);
    tracep->declBit(c+22,"core_io_sram0_wen", false,-1);
    tracep->declArray(c+23,"core_io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"core_io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"core_io_sram1_addr", false,-1, 5,0);
    tracep->declBit(c+22,"core_io_sram1_wen", false,-1);
    tracep->declArray(c+31,"core_io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"core_io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"core_io_sram2_addr", false,-1, 5,0);
    tracep->declBit(c+39,"core_io_sram2_wen", false,-1);
    tracep->declArray(c+23,"core_io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"core_io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"core_io_sram3_addr", false,-1, 5,0);
    tracep->declBit(c+39,"core_io_sram3_wen", false,-1);
    tracep->declArray(c+31,"core_io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"core_io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"core_io_sram4_addr", false,-1, 5,0);
    tracep->declBit(c+49,"core_io_sram4_wen", false,-1);
    tracep->declArray(c+50,"core_io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"core_io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"core_io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"core_io_sram5_addr", false,-1, 5,0);
    tracep->declBit(c+49,"core_io_sram5_wen", false,-1);
    tracep->declArray(c+62,"core_io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"core_io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"core_io_sram6_addr", false,-1, 5,0);
    tracep->declBit(c+70,"core_io_sram6_wen", false,-1);
    tracep->declArray(c+50,"core_io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"core_io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"core_io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"core_io_sram7_addr", false,-1, 5,0);
    tracep->declBit(c+70,"core_io_sram7_wen", false,-1);
    tracep->declArray(c+62,"core_io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"core_io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBit(c+862,"mem_clock", false,-1);
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
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declQuad(c+79,"raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"rdata", false,-1, 63,0);
    tracep->declBit(c+13,"rflag", false,-1);
    tracep->declQuad(c+81,"waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"wdata", false,-1, 63,0);
    tracep->declQuad(c+83,"wmask", false,-1, 63,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBus(c+21,"io_sram0_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_sram0_wen", false,-1);
    tracep->declArray(c+23,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"io_sram1_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_sram1_wen", false,-1);
    tracep->declArray(c+31,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"io_sram2_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_sram2_wen", false,-1);
    tracep->declArray(c+23,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"io_sram3_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_sram3_wen", false,-1);
    tracep->declArray(c+31,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"io_sram4_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_sram4_wen", false,-1);
    tracep->declArray(c+50,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"io_sram5_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_sram5_wen", false,-1);
    tracep->declArray(c+62,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"io_sram6_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_sram6_wen", false,-1);
    tracep->declArray(c+50,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"io_sram7_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_sram7_wen", false,-1);
    tracep->declArray(c+62,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+862,"i_cache_clock", false,-1);
    tracep->declBit(c+863,"i_cache_reset", false,-1);
    tracep->declBit(c+93,"i_cache_io_flush", false,-1);
    tracep->declBit(c+94,"i_cache_io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+95,"i_cache_io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+96,"i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"i_cache_io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+99,"i_cache_io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+100,"i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+104,"i_cache_io_is_fence_i", false,-1);
    tracep->declBus(c+21,"i_cache_io_sram0_data_addr", false,-1, 5,0);
    tracep->declBit(c+22,"i_cache_io_sram0_data_wen", false,-1);
    tracep->declArray(c+23,"i_cache_io_sram0_data_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"i_cache_io_sram0_data_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"i_cache_io_sram0_tag_addr", false,-1, 5,0);
    tracep->declBit(c+22,"i_cache_io_sram0_tag_wen", false,-1);
    tracep->declArray(c+31,"i_cache_io_sram0_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"i_cache_io_sram0_tag_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"i_cache_io_sram2_data_addr", false,-1, 5,0);
    tracep->declBit(c+39,"i_cache_io_sram2_data_wen", false,-1);
    tracep->declArray(c+23,"i_cache_io_sram2_data_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"i_cache_io_sram2_data_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"i_cache_io_sram2_tag_addr", false,-1, 5,0);
    tracep->declBit(c+39,"i_cache_io_sram2_tag_wen", false,-1);
    tracep->declArray(c+31,"i_cache_io_sram2_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"i_cache_io_sram2_tag_rdata", false,-1, 127,0);
    tracep->declBit(c+105,"i_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"i_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"i_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+862,"d_cache_clock", false,-1);
    tracep->declBit(c+863,"d_cache_reset", false,-1);
    tracep->declBit(c+110,"d_cache_io_cpu_valid", false,-1);
    tracep->declQuad(c+111,"d_cache_io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+113,"d_cache_io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"d_cache_io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"d_cache_io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+119,"d_cache_io_cpu_ready", false,-1);
    tracep->declBus(c+48,"d_cache_io_sram0_data_addr", false,-1, 5,0);
    tracep->declBit(c+49,"d_cache_io_sram0_data_wen", false,-1);
    tracep->declArray(c+50,"d_cache_io_sram0_data_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"d_cache_io_sram0_data_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"d_cache_io_sram0_data_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"d_cache_io_sram0_tag_addr", false,-1, 5,0);
    tracep->declBit(c+49,"d_cache_io_sram0_tag_wen", false,-1);
    tracep->declArray(c+62,"d_cache_io_sram0_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"d_cache_io_sram0_tag_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"d_cache_io_sram2_data_addr", false,-1, 5,0);
    tracep->declBit(c+70,"d_cache_io_sram2_data_wen", false,-1);
    tracep->declArray(c+50,"d_cache_io_sram2_data_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"d_cache_io_sram2_data_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"d_cache_io_sram2_data_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"d_cache_io_sram2_tag_addr", false,-1, 5,0);
    tracep->declBit(c+70,"d_cache_io_sram2_tag_wen", false,-1);
    tracep->declArray(c+62,"d_cache_io_sram2_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"d_cache_io_sram2_tag_rdata", false,-1, 127,0);
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
    tracep->declBit(c+862,"cross_bar_clock", false,-1);
    tracep->declBit(c+863,"cross_bar_reset", false,-1);
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
    tracep->declBit(c+866,"cross_bar_io_AXI_Bus_b_ready", false,-1);
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
    tracep->declBit(c+862,"fetch_clock", false,-1);
    tracep->declBit(c+863,"fetch_reset", false,-1);
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
    tracep->declBit(c+862,"execute_clock", false,-1);
    tracep->declBit(c+863,"execute_reset", false,-1);
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
    tracep->declBit(c+862,"decode_clock", false,-1);
    tracep->declBit(c+863,"decode_reset", false,-1);
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
    tracep->declBit(c+862,"commit_clock", false,-1);
    tracep->declBit(c+863,"commit_reset", false,-1);
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
    tracep->declBit(c+862,"clint_de_clock", false,-1);
    tracep->declBit(c+863,"clint_de_reset", false,-1);
    tracep->declBit(c+149,"clint_de_io_valid", false,-1);
    tracep->declQuad(c+111,"clint_de_io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"clint_de_io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+150,"clint_de_io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+118,"clint_de_io_bits_is_w", false,-1);
    tracep->declBit(c+152,"clint_de_io_ready", false,-1);
    tracep->declBit(c+192,"clint_de_io_soft_irq", false,-1);
    tracep->declBit(c+191,"clint_de_io_time_irq", false,-1);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBit(c+862,"csr_reg_clock", false,-1);
    tracep->declBit(c+863,"csr_reg_reset", false,-1);
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
    tracep->declBit(c+305,"difftest_commit", false,-1);
    tracep->declBus(c+306,"difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+307,"difftest_pc", false,-1, 63,0);
    tracep->declQuad(c+309,"inst_counter", false,-1, 63,0);
    tracep->declBit(c+311,"difftest_irq", false,-1);
    tracep->declBit(c+312,"difftest_peripheral", false,-1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBit(c+313,"irq", false,-1);
    tracep->declQuad(c+314,"reg_mstatus", false,-1, 63,0);
    tracep->declQuad(c+316,"reg_mie", false,-1, 63,0);
    tracep->declQuad(c+318,"reg_mtvec", false,-1, 63,0);
    tracep->declQuad(c+320,"reg_mscratch", false,-1, 63,0);
    tracep->declQuad(c+322,"reg_mepc", false,-1, 63,0);
    tracep->declQuad(c+324,"reg_mcause", false,-1, 63,0);
    tracep->declQuad(c+326,"reg_mtval", false,-1, 63,0);
    tracep->declQuad(c+328,"reg_mcycle", false,-1, 63,0);
    tracep->declQuad(c+330,"reg_minstret", false,-1, 63,0);
    tracep->declQuad(c+332,"csr_rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cross_bar ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBit(c+866,"io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+334,"w_locked", false,-1);
    tracep->declBus(c+335,"w_lockId", false,-1, 1,0);
    tracep->declBus(c+336,"w_chosen", false,-1, 1,0);
    tracep->declBus(c+337,"reg_r_cnt", false,-1, 1,0);
    tracep->declBit(c+338,"r_locked", false,-1);
    tracep->declBus(c+339,"r_lockId", false,-1, 1,0);
    tracep->declBus(c+340,"r_chosen", false,-1, 1,0);
    tracep->declBit(c+341,"reg_aw_ok", false,-1);
    tracep->declBit(c+342,"reg_ar_ok", false,-1);
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
    tracep->declBit(c+343,"fetch_low_address", false,-1);
    tracep->declBit(c+344,"low_address", false,-1);
    tracep->declBit(c+345,"not_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+110,"io_cpu_valid", false,-1);
    tracep->declQuad(c+111,"io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+113,"io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+119,"io_cpu_ready", false,-1);
    tracep->declBus(c+48,"io_sram0_data_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_sram0_data_wen", false,-1);
    tracep->declArray(c+50,"io_sram0_data_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_sram0_data_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"io_sram0_data_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"io_sram0_tag_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_sram0_tag_wen", false,-1);
    tracep->declArray(c+62,"io_sram0_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"io_sram0_tag_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"io_sram2_data_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_sram2_data_wen", false,-1);
    tracep->declArray(c+50,"io_sram2_data_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_sram2_data_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_sram2_data_rdata", false,-1, 127,0);
    tracep->declBus(c+48,"io_sram2_tag_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_sram2_tag_wen", false,-1);
    tracep->declArray(c+62,"io_sram2_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_sram2_tag_rdata", false,-1, 127,0);
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
    tracep->declQuad(c+346,"Tag", false,-1, 53,0);
    tracep->declBus(c+348,"Index", false,-1, 5,0);
    tracep->declBus(c+349,"Offset", false,-1, 3,0);
    tracep->declBus(c+350,"reg_cache_state", false,-1, 1,0);
    tracep->declQuad(c+351,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+353,"reg_wstrb", false,-1, 7,0);
    tracep->declBit(c+354,"reg_is_w", false,-1);
    tracep->declQuad(c+355,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+357,"reg_index", false,-1, 5,0);
    tracep->declBus(c+358,"reg_offset", false,-1, 3,0);
    tracep->declBit(c+119,"reg_ready", false,-1);
    tracep->declQuad(c+113,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+359,"reg_cache_write", false,-1);
    tracep->declBus(c+360,"reg_cache_wstrb", false,-1, 15,0);
    tracep->declArray(c+54,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+361,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+362,"cache_mask_lo", false,-1, 63,0);
    tracep->declArray(c+364,"cache_mask", false,-1, 127,0);
    tracep->declArray(c+368,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+372,"is_sram0_write", false,-1);
    tracep->declQuad(c+373,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+375,"reg_sram0_dirty", false,-1, 63,0);
    tracep->declQuad(c+377,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+379,"neg_chose_bit", false,-1, 63,0);
    tracep->declBit(c+381,"is_sram2_write", false,-1);
    tracep->declQuad(c+382,"reg_sram2_valid", false,-1, 63,0);
    tracep->declQuad(c+384,"reg_sram2_dirty", false,-1, 63,0);
    tracep->declQuad(c+130,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+129,"reg_r_valid", false,-1);
    tracep->declQuad(c+122,"reg_w_waddr", false,-1, 63,0);
    tracep->declQuad(c+124,"reg_w_wdata", false,-1, 63,0);
    tracep->declBit(c+126,"reg_w_wlast", false,-1);
    tracep->declBit(c+121,"reg_w_valid", false,-1);
    tracep->declBit(c+127,"reg_b_ready", false,-1);
    tracep->declQuad(c+386,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+388,"tag_2", false,-1, 53,0);
    tracep->declBit(c+390,"hit_0", false,-1);
    tracep->declBit(c+391,"hit_2", false,-1);
    tracep->declBit(c+392,"tag_valid_0", false,-1);
    tracep->declBit(c+393,"tag_valid_2", false,-1);
    tracep->declBit(c+394,"tag_dirty_0", false,-1);
    tracep->declBit(c+395,"tag_dirty_2", false,-1);
    tracep->declQuad(c+396,"rdata0", false,-1, 63,0);
    tracep->declQuad(c+398,"rdata2", false,-1, 63,0);
    tracep->declQuad(c+400,"reg_lru_2", false,-1, 63,0);
    tracep->declBit(c+402,"LRU_2", false,-1);
    tracep->declBit(c+403,"reg_start_operation", false,-1);
    tracep->declBus(c+404,"reg_cnt", false,-1, 1,0);
    tracep->declBit(c+405,"reg_rbus_finish", false,-1);
    tracep->declBit(c+406,"reg_wbus_finish", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBus(c+407,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+408,"fun", false,-1, 2,0);
    tracep->declBus(c+409,"fun_exuType", false,-1, 4,0);
    tracep->declBus(c+410,"fun_op", false,-1, 2,0);
    tracep->declBit(c+411,"temp_system_is_pri", false,-1);
    tracep->declBit(c+412,"temp_system_is_imm", false,-1);
    tracep->declBit(c+413,"temp_system_rs1", false,-1);
    tracep->declBus(c+414,"temp_system_1", false,-1, 6,0);
    tracep->declBus(c+415,"temp_system_2", false,-1, 2,0);
    tracep->declBit(c+416,"temp_system_3", false,-1);
    tracep->declBit(c+417,"temp_system_4", false,-1);
    tracep->declBus(c+418,"temp_mem_itype", false,-1, 3,0);
    tracep->declBit(c+419,"temp_mem_dest", false,-1);
    tracep->declBit(c+419,"temp_op_is_imm", false,-1);
    tracep->declBit(c+420,"is_sr", false,-1);
    tracep->declBus(c+421,"temp_kk", false,-1, 5,0);
    tracep->declBus(c+422,"temp_op_exuType", false,-1, 5,0);
    tracep->declBus(c+423,"temp_op_itype", false,-1, 3,0);
    tracep->declBit(c+424,"temp_op_rs2", false,-1);
    tracep->declBus(c+425,"temp_op", false,-1, 1,0);
    tracep->declBus(c+426,"temp_jal_jalr_1", false,-1, 6,0);
    tracep->declBus(c+427,"temp_jal_jalr_2", false,-1, 3,0);
    tracep->declBit(c+428,"temp_jal_jalr_4", false,-1);
    tracep->declBus(c+429,"instType", false,-1, 3,0);
    tracep->declBit(c+430,"dest_is_reg", false,-1);
    tracep->declBit(c+431,"rs1_is_reg", false,-1);
    tracep->declBit(c+432,"rs2_is_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBit(c+433,"alu_exu_io_valid", false,-1);
    tracep->declBit(c+187,"alu_exu_io_is_pre", false,-1);
    tracep->declBit(c+434,"alu_exu_io_br_info_valid", false,-1);
    tracep->declBit(c+435,"alu_exu_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+436,"alu_exu_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+438,"alu_exu_io_br_info_taken", false,-1);
    tracep->declQuad(c+439,"alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+160,"alu_exu_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+161,"alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+173,"alu_exu_io_opType", false,-1, 2,0);
    tracep->declBus(c+174,"alu_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+441,"alu_exu_io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+443,"alu_exu_io_op_data2", false,-1, 63,0);
    tracep->declBus(c+181,"alu_exu_io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"alu_exu_io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+445,"alu_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+435,"alu_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+439,"alu_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+862,"mem_exu_clock", false,-1);
    tracep->declBit(c+863,"mem_exu_reset", false,-1);
    tracep->declBit(c+447,"mem_exu_io_valid", false,-1);
    tracep->declBus(c+174,"mem_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+441,"mem_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+443,"mem_exu_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"mem_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+448,"mem_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+450,"mem_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+451,"mem_exu_io_ready", false,-1);
    tracep->declBit(c+145,"mem_exu_io_bus_valid", false,-1);
    tracep->declQuad(c+111,"mem_exu_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+146,"mem_exu_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"mem_exu_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"mem_exu_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+148,"mem_exu_io_bus_ready", false,-1);
    tracep->declBit(c+219,"mem_exu_io_difftest_peripheral", false,-1);
    tracep->declBit(c+862,"mu_exu_clock", false,-1);
    tracep->declBit(c+863,"mu_exu_reset", false,-1);
    tracep->declBit(c+452,"mu_exu_io_valid", false,-1);
    tracep->declBus(c+174,"mu_exu_io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+441,"mu_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+443,"mu_exu_io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+453,"mu_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+455,"mu_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+456,"mu_exu_io_ready", false,-1);
    tracep->declBit(c+457,"system_exu_io_valid", false,-1);
    tracep->declBus(c+174,"system_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+458,"system_exu_io_csr_data", false,-1, 63,0);
    tracep->declBus(c+188,"system_exu_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+181,"system_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+441,"system_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+197,"system_exu_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+193,"system_exu_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+458,"system_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+460,"system_exu_io_csr_is_w", false,-1);
    tracep->declQuad(c+461,"system_exu_io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+463,"system_exu_io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+464,"system_exu_io_is_except", false,-1);
    tracep->declBus(c+465,"system_exu_io_exception", false,-1, 5,0);
    tracep->declBit(c+466,"system_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+197,"system_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+467,"in_data_valid", false,-1);
    tracep->declBit(c+166,"ready", false,-1);
    tracep->declBus(c+468,"reg_valid", false,-1, 3,0);
    tracep->declBit(c+469,"reg_alu_valid", false,-1);
    tracep->declBit(c+470,"reg_mem_valid", false,-1);
    tracep->declBit(c+471,"reg_mu_valid", false,-1);
    tracep->declBit(c+472,"reg_system_valid", false,-1);
    tracep->declBus(c+473,"valid", false,-1, 3,0);
    tracep->declBit(c+474,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+475,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBus(c+202,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+153,"reg_br_valid", false,-1);
    tracep->declBit(c+154,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+155,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"reg_taken", false,-1);
    tracep->declQuad(c+158,"reg_br_next_pc", false,-1, 63,0);
    tracep->declQuad(c+207,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+206,"reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+477,"reg_csr_is_w", false,-1);
    tracep->declBit(c+478,"reg_is_except", false,-1);
    tracep->declBus(c+212,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+479,"reg_is_time_irq", false,-1);
    tracep->declBit(c+480,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+213,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+215,"reg_except_pc", false,-1, 63,0);
    tracep->declBit(c+481,"time_irq", false,-1);
    tracep->declBit(c+482,"soft_irq", false,-1);
    tracep->declBit(c+483,"irq", false,-1);
    tracep->declQuad(c+163,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+484,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+485,"reg_fence_i", false,-1);
    tracep->declBit(c+486,"reg_commit", false,-1);
    tracep->declBus(c+218,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+433,"io_valid", false,-1);
    tracep->declBit(c+187,"io_is_pre", false,-1);
    tracep->declBit(c+434,"io_br_info_valid", false,-1);
    tracep->declBit(c+435,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+436,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+438,"io_br_info_taken", false,-1);
    tracep->declQuad(c+439,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+160,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+161,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+173,"io_opType", false,-1, 2,0);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+441,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+443,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+181,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+182,"io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+445,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+435,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+439,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+487,"is_32", false,-1);
    tracep->declQuad(c+488,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+490,"op_data2", false,-1, 63,0);
    tracep->declQuad(c+492,"op_imm", false,-1, 63,0);
    tracep->declBit(c+494,"rs2_is_imm", false,-1);
    tracep->declQuad(c+495,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+497,"rs1_is_pc", false,-1);
    tracep->declBit(c+498,"is_sra", false,-1);
    tracep->declQuad(c+499,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+501,"temp_rs2_data", false,-1, 63,0);
    tracep->declArray(c+503,"add_sub_result", false,-1, 64,0);
    tracep->declBit(c+506,"u_rs1_l_rs2", false,-1);
    tracep->declBit(c+507,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+508,"shift_rs2_data", false,-1, 5,0);
    tracep->declArray(c+509,"sll_temp", false,-1, 126,0);
    tracep->declQuad(c+513,"srl_temp", false,-1, 63,0);
    tracep->declQuad(c+515,"sra_temp", false,-1, 63,0);
    tracep->declQuad(c+517,"sr_temp", false,-1, 63,0);
    tracep->declQuad(c+519,"result_data", false,-1, 63,0);
    tracep->declBit(c+160,"is_pre", false,-1);
    tracep->declBit(c+521,"is_br", false,-1);
    tracep->declBit(c+522,"is_eq", false,-1);
    tracep->declQuad(c+523,"temp_1", false,-1, 63,0);
    tracep->declArray(c+525,"add_pc", false,-1, 64,0);
    tracep->declQuad(c+528,"op_pc_4", false,-1, 63,0);
    tracep->declArray(c+530,"temp_result_pc", false,-1, 64,0);
    tracep->declQuad(c+533,"dst_data", false,-1, 63,0);
    tracep->declQuad(c+535,"next_pc", false,-1, 63,0);
    tracep->declBit(c+537,"valid_next_pc", false,-1);
    tracep->declBit(c+434,"br_valid", false,-1);
    tracep->declBit(c+538,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+447,"io_valid", false,-1);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+441,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+443,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+181,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+448,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+450,"io_dest_is_w", false,-1);
    tracep->declBit(c+451,"io_ready", false,-1);
    tracep->declBit(c+145,"io_bus_valid", false,-1);
    tracep->declQuad(c+111,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+146,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+115,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+117,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+118,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+148,"io_bus_ready", false,-1);
    tracep->declBit(c+219,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+492,"imm", false,-1, 63,0);
    tracep->declBit(c+451,"reg_ready", false,-1);
    tracep->declQuad(c+539,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+541,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+543,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+544,"reg_bus_is_w", false,-1);
    tracep->declBit(c+545,"reg_bus_valid", false,-1);
    tracep->declQuad(c+448,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+450,"reg_w_rs_en", false,-1);
    tracep->declBus(c+546,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+219,"reg_difftest_peripheral", false,-1);
    tracep->declQuad(c+547,"mem_r_data", false,-1, 63,0);
    tracep->declQuad(c+549,"mem_data_result", false,-1, 63,0);
    tracep->declQuad(c+551,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+553,"w_mem_en", false,-1);
    tracep->declQuad(c+554,"mem_wstrb", false,-1, 63,0);
    tracep->declBit(c+556,"reg_ls_state", false,-1);
    tracep->declArray(c+557,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+561,"chose_chancel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+452,"io_valid", false,-1);
    tracep->declBus(c+174,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+441,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+443,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+453,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+455,"io_dest_is_w", false,-1);
    tracep->declBit(c+456,"io_ready", false,-1);
    tracep->declBit(c+862,"div_clock", false,-1);
    tracep->declBit(c+863,"div_reset", false,-1);
    tracep->declBit(c+562,"div_io_valid", false,-1);
    tracep->declQuad(c+441,"div_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+443,"div_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+174,"div_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+563,"div_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+565,"div_io_dest_is_w", false,-1);
    tracep->declBit(c+566,"div_io_ready", false,-1);
    tracep->declBit(c+862,"mul_clock", false,-1);
    tracep->declBit(c+863,"mul_reset", false,-1);
    tracep->declBit(c+567,"mul_io_valid", false,-1);
    tracep->declQuad(c+441,"mul_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+443,"mul_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+174,"mul_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+568,"mul_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+570,"mul_io_dest_is_w", false,-1);
    tracep->declBit(c+571,"mul_io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+562,"io_valid", false,-1);
    tracep->declQuad(c+441,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+443,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+563,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+565,"io_dest_is_w", false,-1);
    tracep->declBit(c+566,"io_ready", false,-1);
    tracep->declBit(c+487,"is_32", false,-1);
    tracep->declBit(c+572,"is_signed", false,-1);
    tracep->declArray(c+573,"dividend", false,-1, 64,0);
    tracep->declArray(c+576,"divisor", false,-1, 64,0);
    tracep->declArray(c+579,"rem", false,-1, 64,0);
    tracep->declArray(c+582,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+585,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+588,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+591,"reg_q", false,-1, 65,0);
    tracep->declArray(c+594,"neg_divisor", false,-1, 64,0);
    tracep->declBus(c+597,"reg_state", false,-1, 1,0);
    tracep->declBus(c+598,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+599,"reg_exuType", false,-1, 6,0);
    tracep->declArray(c+600,"temp_result", false,-1, 131,0);
    tracep->declBit(c+605,"rem_is_0", false,-1);
    tracep->declBit(c+606,"rem_is_neg_div", false,-1);
    tracep->declBit(c+607,"rem_is_div", false,-1);
    tracep->declBit(c+608,"is_need_correct", false,-1);
    tracep->declBit(c+565,"reg_dest_is_w", false,-1);
    tracep->declBit(c+566,"reg_ready", false,-1);
    tracep->declBit(c+609,"reg_is_32", false,-1);
    tracep->declBit(c+610,"reg_is_rem", false,-1);
    tracep->declQuad(c+611,"rem_adjust", false,-1, 63,0);
    tracep->declQuad(c+613,"q_adjust", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+567,"io_valid", false,-1);
    tracep->declQuad(c+441,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+443,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+568,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+570,"io_dest_is_w", false,-1);
    tracep->declBit(c+571,"io_ready", false,-1);
    tracep->declBit(c+615,"is_32", false,-1);
    tracep->declBit(c+616,"is_rs1_signed", false,-1);
    tracep->declBit(c+487,"is_rs2_signed", false,-1);
    tracep->declArray(c+617,"mul_data1", false,-1, 129,0);
    tracep->declArray(c+622,"mul_data2", false,-1, 64,0);
    tracep->declArray(c+625,"temp_mul2", false,-1, 66,0);
    tracep->declBit(c+571,"reg_ready", false,-1);
    tracep->declBus(c+628,"reg_state", false,-1, 1,0);
    tracep->declArray(c+629,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+632,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+637,"reg_result", false,-1, 129,0);
    tracep->declBus(c+642,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+570,"reg_dest_is_w", false,-1);
    tracep->declArray(c+643,"pp", false,-1, 130,0);
    tracep->declBus(c+648,"reg_cnt", false,-1, 6,0);
    tracep->declBit(c+649,"reg_not_h", false,-1);
    tracep->declBit(c+650,"reg_is_32", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+457,"io_valid", false,-1);
    tracep->declBus(c+174,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+458,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+188,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+181,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+441,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+197,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+193,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+458,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+460,"io_csr_is_w", false,-1);
    tracep->declQuad(c+461,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+463,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+464,"io_is_except", false,-1);
    tracep->declBus(c+465,"io_exception", false,-1, 5,0);
    tracep->declBit(c+466,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+197,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+492,"imm", false,-1, 63,0);
    tracep->declBit(c+651,"is_imm", false,-1);
    tracep->declQuad(c+652,"op_data", false,-1, 63,0);
    tracep->declQuad(c+654,"or_result", false,-1, 63,0);
    tracep->declQuad(c+656,"and_result", false,-1, 63,0);
    tracep->declQuad(c+658,"temp_csr_result_data", false,-1, 63,0);
    tracep->declBit(c+660,"is_mret", false,-1);
    tracep->declBit(c+661,"is_sret", false,-1);
    tracep->declBit(c+662,"is_ecall", false,-1);
    tracep->declBit(c+663,"is_ebreak", false,-1);
    tracep->declBit(c+664,"is_except", false,-1);
    tracep->declBus(c+665,"exception", false,-1, 3,0);
    tracep->declBit(c+666,"is_ret", false,-1);
    tracep->declQuad(c+667,"result_status", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
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
    tracep->declBit(c+862,"ibuf_clock", false,-1);
    tracep->declBit(c+863,"ibuf_reset", false,-1);
    tracep->declBit(c+165,"ibuf_io_flush", false,-1);
    tracep->declBit(c+98,"ibuf_io_cache_buf_ready", false,-1);
    tracep->declBit(c+669,"ibuf_io_cache_buf_valid", false,-1);
    tracep->declQuad(c+143,"ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+670,"ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+671,"ibuf_io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+166,"ibuf_io_put_pc_ready", false,-1);
    tracep->declBit(c+167,"ibuf_io_put_pc_valid", false,-1);
    tracep->declBus(c+168,"ibuf_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+169,"ibuf_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"ibuf_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+862,"br_predictor_clock", false,-1);
    tracep->declBit(c+863,"br_predictor_reset", false,-1);
    tracep->declBit(c+153,"br_predictor_io_br_info_valid", false,-1);
    tracep->declBit(c+154,"br_predictor_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+155,"br_predictor_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"br_predictor_io_br_info_taken", false,-1);
    tracep->declQuad(c+158,"br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+96,"br_predictor_io_pc", false,-1, 63,0);
    tracep->declQuad(c+672,"br_predictor_io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+674,"br_predictor_io_pre_valid", false,-1);
    tracep->declQuad(c+96,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+675,"reg_flush", false,-1);
    tracep->declQuad(c+676,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+139,"reg_bus_valid", false,-1);
    tracep->declBus(c+678,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+679,"pre_info_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+680+i*2,"pre_info_fifo", true,(i+0), 63,0);
    }
    tracep->declBit(c+688,"pre_enq", false,-1);
    tracep->declBus(c+689,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+690,"is_pre_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+691+i*1,"is_pre_fifo", true,(i+0));
    }
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+153,"io_br_info_valid", false,-1);
    tracep->declBit(c+154,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+155,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+157,"io_br_info_taken", false,-1);
    tracep->declQuad(c+158,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+96,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+672,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+674,"io_pre_valid", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+695+i*2,"RAS", true,(i+0), 63,0);
    }
    tracep->declBus(c+703,"reg_head", false,-1, 2,0);
    tracep->declBus(c+704,"update_index", false,-1, 5,0);
    tracep->declArray(c+705,"update_btb_data", false,-1, 122,0);
    tracep->declBus(c+709,"update_pht_data", false,-1, 1,0);
    tracep->declBus(c+710,"index", false,-1, 5,0);
    tracep->declQuad(c+711,"tag", false,-1, 55,0);
    tracep->declBus(c+713,"pht_data", false,-1, 1,0);
    tracep->declBit(c+714,"pht_taken", false,-1);
    tracep->declArray(c+715,"btb_data", false,-1, 127,0);
    tracep->declBit(c+719,"btb_valid", false,-1);
    tracep->declQuad(c+720,"btb_tag", false,-1, 55,0);
    tracep->declQuad(c+722,"btb_target_next_pc", false,-1, 63,0);
    tracep->declBus(c+724,"btb_br_type", false,-1, 1,0);
    tracep->declBit(c+674,"pre_valid", false,-1);
    tracep->declBit(c+725,"is_br_return", false,-1);
    tracep->declQuad(c+726,"ras_ready", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+165,"io_flush", false,-1);
    tracep->declBit(c+98,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+669,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+143,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+670,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+671,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+166,"io_put_pc_ready", false,-1);
    tracep->declBit(c+167,"io_put_pc_valid", false,-1);
    tracep->declBus(c+168,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+169,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+171,"io_put_pc_bits_is_pre", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+728+i*2,"ibuf_pc", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+736+i*1,"ibuf_inst", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+740+i*1,"ibuf_is_pre", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+744+i*1,"ibuf_valid", true,(i+0));
    }
    tracep->declBus(c+748,"reg_head", false,-1, 1,0);
    tracep->declBus(c+749,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+750,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+751,"enq_size", false,-1);
    tracep->declBit(c+752,"can_deq", false,-1);
    tracep->declBus(c+753,"result_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+93,"io_flush", false,-1);
    tracep->declBit(c+94,"io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+95,"io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+96,"io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+99,"io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+100,"io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+104,"io_is_fence_i", false,-1);
    tracep->declBus(c+21,"io_sram0_data_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_sram0_data_wen", false,-1);
    tracep->declArray(c+23,"io_sram0_data_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"io_sram0_data_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"io_sram0_tag_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_sram0_tag_wen", false,-1);
    tracep->declArray(c+31,"io_sram0_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"io_sram0_tag_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"io_sram2_data_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_sram2_data_wen", false,-1);
    tracep->declArray(c+23,"io_sram2_data_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_sram2_data_rdata", false,-1, 127,0);
    tracep->declBus(c+21,"io_sram2_tag_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_sram2_tag_wen", false,-1);
    tracep->declArray(c+31,"io_sram2_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_sram2_tag_rdata", false,-1, 127,0);
    tracep->declBit(c+105,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+862,"cache_stage0_clock", false,-1);
    tracep->declBit(c+863,"cache_stage0_reset", false,-1);
    tracep->declBit(c+93,"cache_stage0_io_flush", false,-1);
    tracep->declBit(c+94,"cache_stage0_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+95,"cache_stage0_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+96,"cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+94,"cache_stage0_io_addr_ready", false,-1);
    tracep->declBit(c+754,"cache_stage0_io_addr_valid", false,-1);
    tracep->declQuad(c+755,"cache_stage0_io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+862,"cache_stage1_clock", false,-1);
    tracep->declBit(c+863,"cache_stage1_reset", false,-1);
    tracep->declBit(c+93,"cache_stage1_io_flush", false,-1);
    tracep->declBit(c+94,"cache_stage1_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+754,"cache_stage1_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+755,"cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+757,"cache_stage1_io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+758,"cache_stage1_io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+759,"cache_stage1_io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+760,"cache_stage1_io_sram_valid", false,-1);
    tracep->declArray(c+761,"cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+765,"cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+769,"cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+773,"cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+777,"cache_stage1_io_sram_ready", false,-1);
    tracep->declBit(c+778,"cache_stage1_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+779,"cache_stage1_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+780,"cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+782,"cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+758,"cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+783,"cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+785,"cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+759,"cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+786,"cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+862,"cache_stage2_clock", false,-1);
    tracep->declBit(c+863,"cache_stage2_reset", false,-1);
    tracep->declBit(c+93,"cache_stage2_io_flush", false,-1);
    tracep->declBit(c+778,"cache_stage2_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+779,"cache_stage2_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+780,"cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+782,"cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+758,"cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+783,"cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+785,"cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+759,"cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+786,"cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+105,"cache_stage2_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"cache_stage2_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+788,"cache_stage2_io_sram_w_valid", false,-1);
    tracep->declBus(c+789,"cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+23,"cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+31,"cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+790,"cache_stage2_io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+98,"cache_stage2_io_rdata_ready", false,-1);
    tracep->declBit(c+99,"cache_stage2_io_rdata_valid", false,-1);
    tracep->declQuad(c+100,"cache_stage2_io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+791,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+793,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+795,"is_w_sram", false,-1);
    tracep->declBit(c+796,"is_sram0_write", false,-1);
    tracep->declBit(c+797,"is_sram1_write", false,-1);
    tracep->declQuad(c+798,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+800,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+801,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+802,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+803,"w_r_pass0_val", false,-1);
    tracep->declBit(c+804,"w_r_pass1_val", false,-1);
    tracep->declBit(c+777,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+93,"io_flush", false,-1);
    tracep->declBit(c+94,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+95,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+96,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+94,"io_addr_ready", false,-1);
    tracep->declBit(c+754,"io_addr_valid", false,-1);
    tracep->declQuad(c+755,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+754,"reg_valid", false,-1);
    tracep->declQuad(c+755,"reg_addr", false,-1, 63,0);
    tracep->declBit(c+805,"valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+93,"io_flush", false,-1);
    tracep->declBit(c+94,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+754,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+755,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+757,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+758,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+759,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+760,"io_sram_valid", false,-1);
    tracep->declArray(c+761,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+765,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+769,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+773,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+777,"io_sram_ready", false,-1);
    tracep->declBit(c+778,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+779,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+780,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+782,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+758,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+783,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+785,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+759,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+786,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+760,"valid", false,-1);
    tracep->declBit(c+94,"ready", false,-1);
    tracep->declQuad(c+780,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+806,"reg_valid", false,-1);
    tracep->declQuad(c+807,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+809,"reg_index", false,-1, 5,0);
    tracep->declBus(c+810,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+811,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+813,"tag_1", false,-1, 53,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBit(c+93,"io_flush", false,-1);
    tracep->declBit(c+778,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+779,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+780,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+782,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+758,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+783,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+785,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+759,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+786,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+105,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+106,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+109,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+788,"io_sram_w_valid", false,-1);
    tracep->declBus(c+789,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+23,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+31,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+790,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+98,"io_rdata_ready", false,-1);
    tracep->declBit(c+99,"io_rdata_valid", false,-1);
    tracep->declQuad(c+100,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+102,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+809,"index", false,-1, 5,0);
    tracep->declBit(c+815,"valid", false,-1);
    tracep->declBit(c+790,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+100,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+99,"reg_valid", false,-1);
    tracep->declBit(c+816,"reg_ready", false,-1);
    tracep->declQuad(c+817,"temp_addr", false,-1, 63,0);
    tracep->declQuad(c+106,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+105,"reg_r_valid", false,-1);
    tracep->declArray(c+23,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+788,"reg_cache_write", false,-1);
    tracep->declQuad(c+102,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+819,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+821,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+822,"reg_lru_1", false,-1, 63,0);
    tracep->declBit(c+824,"LRU_1", false,-1);
    tracep->declQuad(c+825,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+827,"neg_chose_bit", false,-1, 63,0);
    tracep->declBus(c+829,"reg_bus_state", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+867,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+27,"Q", false,-1, 127,0);
    tracep->declArray(c+871,"bwen", false,-1, 127,0);
    tracep->declBit(c+796,"wen", false,-1);
    tracep->declArray(c+830,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+867,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+35,"Q", false,-1, 127,0);
    tracep->declArray(c+871,"bwen", false,-1, 127,0);
    tracep->declBit(c+796,"wen", false,-1);
    tracep->declArray(c+834,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_wen", false,-1);
    tracep->declArray(c+867,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+40,"Q", false,-1, 127,0);
    tracep->declArray(c+871,"bwen", false,-1, 127,0);
    tracep->declBit(c+797,"wen", false,-1);
    tracep->declArray(c+838,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_wen", false,-1);
    tracep->declArray(c+867,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+44,"Q", false,-1, 127,0);
    tracep->declArray(c+871,"bwen", false,-1, 127,0);
    tracep->declBit(c+797,"wen", false,-1);
    tracep->declArray(c+842,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+50,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+58,"Q", false,-1, 127,0);
    tracep->declArray(c+364,"bwen", false,-1, 127,0);
    tracep->declBit(c+372,"wen", false,-1);
    tracep->declArray(c+846,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+867,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+66,"Q", false,-1, 127,0);
    tracep->declArray(c+871,"bwen", false,-1, 127,0);
    tracep->declBit(c+372,"wen", false,-1);
    tracep->declArray(c+850,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_wen", false,-1);
    tracep->declArray(c+50,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+71,"Q", false,-1, 127,0);
    tracep->declArray(c+364,"bwen", false,-1, 127,0);
    tracep->declBit(c+381,"wen", false,-1);
    tracep->declArray(c+854,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+863,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_wen", false,-1);
    tracep->declArray(c+867,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+75,"Q", false,-1, 127,0);
    tracep->declArray(c+871,"bwen", false,-1, 127,0);
    tracep->declBit(c+381,"wen", false,-1);
    tracep->declArray(c+858,"read_sram", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h7019c01e__0;
    VlWide<4>/*127:0*/ __Vtemp_h93e89695__0;
    VlWide<4>/*127:0*/ __Vtemp_h4e6b78b3__0;
    VlWide<4>/*127:0*/ __Vtemp_haf68b62e__0;
    VlWide<4>/*127:0*/ __Vtemp_hf3981781__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b93e364__0;
    VlWide<4>/*127:0*/ __Vtemp_h33a8e0ea__0;
    VlWide<4>/*127:0*/ __Vtemp_hd7e049ac__0;
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
    bufp->fullCData(oldp+21,(vlSelf->riscv_soc__DOT__core_io_sram0_addr),6);
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram0__DOT__wen)))));
    bufp->fullWData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
    bufp->fullWData(oldp+27,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
    __Vtemp_h8800a5e4__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU));
    __Vtemp_h8800a5e4__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                         >> 0xaU) >> 0x20U));
    __Vtemp_h8800a5e4__0[2U] = 0U;
    __Vtemp_h8800a5e4__0[3U] = 0U;
    bufp->fullWData(oldp+31,(__Vtemp_h8800a5e4__0),128);
    bufp->fullWData(oldp+35,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram2__DOT__wen)))));
    bufp->fullWData(oldp+40,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
    bufp->fullWData(oldp+44,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
    bufp->fullCData(oldp+48,(vlSelf->riscv_soc__DOT__core_io_sram4_addr),6);
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram4__DOT__wen)))));
    __Vtemp_haff02ae1__0[0U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[0U]);
    __Vtemp_haff02ae1__0[1U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[1U]);
    __Vtemp_haff02ae1__0[2U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[2U]);
    __Vtemp_haff02ae1__0[3U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[3U]);
    bufp->fullWData(oldp+50,(__Vtemp_haff02ae1__0),128);
    bufp->fullWData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
    bufp->fullWData(oldp+58,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
    __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
    __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                        >> 0x20U));
    __Vtemp_h5cafde3d__0[2U] = 0U;
    __Vtemp_h5cafde3d__0[3U] = 0U;
    bufp->fullWData(oldp+62,(__Vtemp_h5cafde3d__0),128);
    bufp->fullWData(oldp+66,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
    bufp->fullBit(oldp+70,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram6__DOT__wen)))));
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
    bufp->fullBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid));
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
    bufp->fullBit(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
    bufp->fullIData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
    bufp->fullQData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
    bufp->fullQData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
    bufp->fullBit(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
    bufp->fullBit(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
    bufp->fullBit(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
    bufp->fullQData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
    bufp->fullQData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
    bufp->fullQData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
    bufp->fullQData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
    bufp->fullQData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
    bufp->fullQData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
    bufp->fullQData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
    bufp->fullQData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
    bufp->fullQData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
    bufp->fullQData(oldp+332,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
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
    bufp->fullBit(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
    bufp->fullCData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
    bufp->fullCData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
    bufp->fullCData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
    bufp->fullBit(oldp+338,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    bufp->fullCData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
    bufp->fullCData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
    bufp->fullBit(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
    bufp->fullBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
    bufp->fullBit(oldp+343,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+344,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
    bufp->fullQData(oldp+346,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+348,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+349,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
    bufp->fullCData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
    bufp->fullQData(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
    bufp->fullCData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
    bufp->fullBit(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
    bufp->fullQData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
    bufp->fullCData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
    bufp->fullCData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
    bufp->fullBit(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    bufp->fullSData(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
    bufp->fullBit(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+362,((((QData)((IData)(((0x80U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                  ? 0xffU
                                                  : 0U))) 
                                << 0x38U) | (((QData)((IData)(
                                                              ((0x40U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                ? 0xffU
                                                                : 0U))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((0x20U 
                                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                   ? 0xffU
                                                                   : 0U))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((0x10U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
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
                                                                                : 0U))))))))))),64);
    bufp->fullWData(oldp+364,(vlSelf->riscv_soc__DOT__sram4__DOT__bwen),128);
    bufp->fullWData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
    bufp->fullBit(oldp+372,(vlSelf->riscv_soc__DOT__sram4__DOT__wen));
    bufp->fullQData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
    bufp->fullQData(oldp+377,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
    bufp->fullQData(oldp+379,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
    bufp->fullBit(oldp+381,(vlSelf->riscv_soc__DOT__sram6__DOT__wen));
    bufp->fullQData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
    bufp->fullQData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
    bufp->fullQData(oldp+386,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
    bufp->fullQData(oldp+388,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
    bufp->fullBit(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
    bufp->fullBit(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
    bufp->fullBit(oldp+392,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
    bufp->fullBit(oldp+393,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
    bufp->fullBit(oldp+394,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullBit(oldp+395,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullQData(oldp+396,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))),64);
    bufp->fullQData(oldp+398,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))),64);
    bufp->fullQData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
    bufp->fullBit(oldp+402,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
    bufp->fullBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    bufp->fullCData(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
    bufp->fullBit(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    bufp->fullBit(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    bufp->fullCData(oldp+407,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+408,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
    bufp->fullCData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
    bufp->fullBit(oldp+411,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+412,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU))));
    bufp->fullBit(oldp+413,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 0xeU)))));
    bufp->fullCData(oldp+414,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? ((0x60U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xfU)) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))),7);
    bufp->fullCData(oldp+415,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? 0U : 5U)),3);
    bufp->fullBit(oldp+416,((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+417,(((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xcU))) 
                             & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU)))));
    bufp->fullCData(oldp+418,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 3U : 0xcU)),4);
    bufp->fullBit(oldp+419,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 5U)))));
    bufp->fullBit(oldp+420,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullCData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
    bufp->fullCData(oldp+422,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                : ((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
    bufp->fullCData(oldp+423,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 6U : (((1U == (7U 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0xcU))))
                                         ? 4U : 0xcU))),4);
    bufp->fullBit(oldp+424,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 5U))));
    bufp->fullCData(oldp+425,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? ((0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                    ? 3U : 2U) : 2U)),2);
    bufp->fullCData(oldp+426,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 0x4eU : 0x4aU)),7);
    bufp->fullCData(oldp+427,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 2U : 0xcU)),4);
    bufp->fullBit(oldp+428,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 3U)))));
    bufp->fullCData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
    bufp->fullBit(oldp+430,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
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
    bufp->fullBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
    bufp->fullBit(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
    bufp->fullBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    bufp->fullBit(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid));
    bufp->fullBit(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
    bufp->fullQData(oldp+436,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+438,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
    bufp->fullQData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
    bufp->fullQData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
    bufp->fullQData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
    bufp->fullQData(oldp+445,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
    bufp->fullBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    bufp->fullQData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    bufp->fullQData(oldp+453,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
    bufp->fullBit(oldp+455,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+456,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    bufp->fullQData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
    bufp->fullBit(oldp+460,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    bufp->fullQData(oldp+461,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
    bufp->fullSData(oldp+463,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    bufp->fullCData(oldp+465,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
    bufp->fullBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
    bufp->fullBit(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullCData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullBit(oldp+469,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
    bufp->fullBit(oldp+470,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+471,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+472,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U))));
    bufp->fullCData(oldp+473,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
    bufp->fullBit(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    bufp->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    bufp->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
    bufp->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+487,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    bufp->fullQData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullQData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
    bufp->fullBit(oldp+494,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U)))));
    bufp->fullQData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+497,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 6U))));
    bufp->fullBit(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
    bufp->fullQData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullQData(oldp+501,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
    bufp->fullWData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
    bufp->fullBit(oldp+506,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
    bufp->fullBit(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
    bufp->fullWData(oldp+509,(__Vtemp_hfddea7ef__0),127);
    bufp->fullQData(oldp+513,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+515,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+517,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                     ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
    bufp->fullQData(oldp+519,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+521,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
    bufp->fullBit(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    bufp->fullQData(oldp+523,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
    __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                        >> 0x20U));
    __Vtemp_h6618c490__0[2U] = 1U;
    bufp->fullWData(oldp+525,(__Vtemp_h6618c490__0),65);
    bufp->fullQData(oldp+528,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        __Vtemp_h4825144c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
        __Vtemp_h4825144c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
        __Vtemp_h4825144c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
    } else {
        __Vtemp_h4825144c__0[0U] = 0U;
        __Vtemp_h4825144c__0[1U] = 0U;
        __Vtemp_h4825144c__0[2U] = 0U;
    }
    bufp->fullWData(oldp+530,(__Vtemp_h4825144c__0),65);
    bufp->fullQData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullQData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
    bufp->fullBit(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
    bufp->fullBit(oldp+538,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid) 
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
    bufp->fullQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullQData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
    bufp->fullQData(oldp+549,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
    bufp->fullQData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullQData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
    bufp->fullBit(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    bufp->fullWData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
    bufp->fullBit(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullBit(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
    bufp->fullQData(oldp+563,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullBit(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
    bufp->fullQData(oldp+568,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
    bufp->fullBit(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullBit(oldp+572,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U)))));
    bufp->fullWData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
    bufp->fullWData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
    bufp->fullWData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
    bufp->fullWData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
    bufp->fullWData(oldp+594,(__Vtemp_h28f9f554__0),65);
    bufp->fullCData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    bufp->fullWData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
    bufp->fullBit(oldp+605,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
    bufp->fullBit(oldp+606,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                      ^ __Vtemp_h2ede82b0__0[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                        ^ __Vtemp_h2ede82b0__0[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                       ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
    bufp->fullBit(oldp+607,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    bufp->fullBit(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
    bufp->fullBit(oldp+609,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
    bufp->fullBit(oldp+610,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                   >> 3U))));
    bufp->fullQData(oldp+611,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullQData(oldp+613,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+615,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))));
    bufp->fullBit(oldp+616,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullWData(oldp+617,(__Vtemp_h3d72d354__0),130);
    bufp->fullWData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
    bufp->fullWData(oldp+625,(__Vtemp_h3364f91c__0),67);
    bufp->fullCData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
    bufp->fullWData(oldp+643,(__Vtemp_hf484a493__0),131);
    bufp->fullCData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullBit(oldp+649,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                          >> 2U)))));
    bufp->fullBit(oldp+650,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
    bufp->fullBit(oldp+651,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 4U))));
    bufp->fullQData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullQData(oldp+658,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+660,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+661,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+662,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+663,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+664,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))) 
                             | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    bufp->fullCData(oldp+665,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
    bufp->fullBit(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullQData(oldp+667,(((0xffffffffffffff77ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                               | (QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                              >> 7U)))
                                                   ? 0x88U
                                                   : 0x80U))))),64);
    bufp->fullBit(oldp+669,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+670,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                              >> 2U)))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
                                           >> 0x20U))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data))),32);
    bufp->fullBit(oldp+671,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [3U] : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail])));
    bufp->fullQData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullBit(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[0]),64);
    bufp->fullQData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[1]),64);
    bufp->fullQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[2]),64);
    bufp->fullQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[3]),64);
    bufp->fullBit(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
    bufp->fullCData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[0]));
    bufp->fullBit(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[1]));
    bufp->fullBit(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[2]));
    bufp->fullBit(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[3]));
    bufp->fullQData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
    bufp->fullQData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
    bufp->fullQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
    bufp->fullQData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
    bufp->fullCData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullCData(oldp+704,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
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
    bufp->fullWData(oldp+705,(__Vtemp_h643ad04b__0),123);
    bufp->fullCData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data),2);
    bufp->fullCData(oldp+710,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 3U)))),6);
    bufp->fullQData(oldp+711,(((0xfffffffffffffeULL 
                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 8U)) | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                         >> 2U))))))),56);
    bufp->fullCData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                              [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 3U)))]),2);
    bufp->fullBit(oldp+714,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                   [(0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))] 
                                   >> 1U))));
    bufp->fullWData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data),128);
    bufp->fullBit(oldp+719,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
                                   >> 0x1aU))));
    bufp->fullQData(oldp+720,((0xffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                                >> 2U)))),56);
    bufp->fullQData(oldp+722,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])) 
                                                >> 2U)))),64);
    bufp->fullCData(oldp+724,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])),2);
    bufp->fullBit(oldp+725,((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U]))));
    bufp->fullQData(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                              [(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))]),64);
    bufp->fullQData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
    bufp->fullQData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
    bufp->fullQData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
    bufp->fullQData(oldp+734,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
    bufp->fullIData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
    bufp->fullIData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
    bufp->fullIData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
    bufp->fullIData(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
    bufp->fullBit(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[0]));
    bufp->fullBit(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[1]));
    bufp->fullBit(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[2]));
    bufp->fullBit(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[3]));
    bufp->fullBit(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[0]));
    bufp->fullBit(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[1]));
    bufp->fullBit(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[2]));
    bufp->fullBit(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[3]));
    bufp->fullCData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
    bufp->fullBit(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
    bufp->fullCData(oldp+753,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                      + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                     - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
    bufp->fullBit(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullCData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    bufp->fullBit(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullWData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
    bufp->fullWData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
    bufp->fullWData(oldp+769,(__Vtemp_h96d8aca3__0),128);
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
    bufp->fullWData(oldp+773,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+778,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullBit(oldp+779,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+783,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+786,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+789,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullBit(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+796,(vlSelf->riscv_soc__DOT__sram0__DOT__wen));
    bufp->fullBit(oldp+797,(vlSelf->riscv_soc__DOT__sram2__DOT__wen));
    bufp->fullQData(oldp+798,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullBit(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+805,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
    bufp->fullBit(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullQData(oldp+807,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+809,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+810,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+811,((0x3fffffffffffffULL 
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
    bufp->fullQData(oldp+813,((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
    bufp->fullBit(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+817,((0xfffffffffffffff0ULL 
                               & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
    bufp->fullQData(oldp+819,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+821,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullBit(oldp+824,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
    bufp->fullQData(oldp+825,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullQData(oldp+827,((~ (1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
    bufp->fullCData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
    __Vtemp_h7019c01e__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][0U];
    __Vtemp_h7019c01e__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][1U];
    __Vtemp_h7019c01e__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][2U];
    __Vtemp_h7019c01e__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][3U];
    bufp->fullWData(oldp+830,(__Vtemp_h7019c01e__0),128);
    __Vtemp_h93e89695__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][0U];
    __Vtemp_h93e89695__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][1U];
    __Vtemp_h93e89695__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][2U];
    __Vtemp_h93e89695__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][3U];
    bufp->fullWData(oldp+834,(__Vtemp_h93e89695__0),128);
    __Vtemp_h4e6b78b3__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][0U];
    __Vtemp_h4e6b78b3__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][1U];
    __Vtemp_h4e6b78b3__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][2U];
    __Vtemp_h4e6b78b3__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][3U];
    bufp->fullWData(oldp+838,(__Vtemp_h4e6b78b3__0),128);
    __Vtemp_haf68b62e__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][0U];
    __Vtemp_haf68b62e__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][1U];
    __Vtemp_haf68b62e__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][2U];
    __Vtemp_haf68b62e__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram0_addr][3U];
    bufp->fullWData(oldp+842,(__Vtemp_haf68b62e__0),128);
    __Vtemp_hf3981781__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][0U];
    __Vtemp_hf3981781__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][1U];
    __Vtemp_hf3981781__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][2U];
    __Vtemp_hf3981781__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][3U];
    bufp->fullWData(oldp+846,(__Vtemp_hf3981781__0),128);
    __Vtemp_h9b93e364__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][0U];
    __Vtemp_h9b93e364__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][1U];
    __Vtemp_h9b93e364__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][2U];
    __Vtemp_h9b93e364__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][3U];
    bufp->fullWData(oldp+850,(__Vtemp_h9b93e364__0),128);
    __Vtemp_h33a8e0ea__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][0U];
    __Vtemp_h33a8e0ea__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][1U];
    __Vtemp_h33a8e0ea__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][2U];
    __Vtemp_h33a8e0ea__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][3U];
    bufp->fullWData(oldp+854,(__Vtemp_h33a8e0ea__0),128);
    __Vtemp_hd7e049ac__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][0U];
    __Vtemp_hd7e049ac__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][1U];
    __Vtemp_hd7e049ac__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][2U];
    __Vtemp_hd7e049ac__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_sram4_addr][3U];
    bufp->fullWData(oldp+858,(__Vtemp_hd7e049ac__0),128);
    bufp->fullBit(oldp+862,(vlSelf->clock));
    bufp->fullBit(oldp+863,(vlSelf->reset));
    bufp->fullBit(oldp+864,(vlSelf->riscv_soc__DOT__core_clock));
    bufp->fullBit(oldp+865,(vlSelf->riscv_soc__DOT__core_reset));
    bufp->fullBit(oldp+866,(1U));
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+867,(__Vtemp_hd56bd579__0),128);
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+871,(__Vtemp_hd09821c2__0),128);
}
