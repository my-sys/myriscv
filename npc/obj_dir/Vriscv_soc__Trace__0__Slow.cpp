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
    tracep->declBit(c+694,"core_io_axi_bus_aw_valid", false,-1);
    tracep->declQuad(c+695,"core_io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+697,"core_io_axi_bus_w_ready", false,-1);
    tracep->declBit(c+698,"core_io_axi_bus_w_valid", false,-1);
    tracep->declQuad(c+699,"core_io_axi_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+701,"core_io_axi_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+702,"core_io_axi_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+2,"core_io_axi_bus_b_valid", false,-1);
    tracep->declBit(c+3,"core_io_axi_bus_ar_ready", false,-1);
    tracep->declBit(c+703,"core_io_axi_bus_ar_valid", false,-1);
    tracep->declQuad(c+704,"core_io_axi_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+706,"core_io_axi_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+707,"core_io_axi_bus_r_valid", false,-1);
    tracep->declQuad(c+708,"core_io_axi_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+710,"core_io_axi_bus_r_bits_rlast", false,-1);
    tracep->declBus(c+4,"core_io_isram_addr", false,-1, 5,0);
    tracep->declBit(c+5,"core_io_isram_wen_0", false,-1);
    tracep->declBit(c+6,"core_io_isram_wen_1", false,-1);
    tracep->declArray(c+7,"core_io_isram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+11,"core_io_isram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+15,"core_io_isram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+19,"core_io_isram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+23,"core_io_isram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+27,"core_io_isram_rdata_3", false,-1, 127,0);
    tracep->declBus(c+711,"core_io_dsram_addr", false,-1, 5,0);
    tracep->declBit(c+712,"core_io_dsram_wen_0", false,-1);
    tracep->declBit(c+713,"core_io_dsram_wen_1", false,-1);
    tracep->declArray(c+714,"core_io_dsram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+718,"core_io_dsram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+722,"core_io_dsram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+726,"core_io_dsram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+730,"core_io_dsram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+734,"core_io_dsram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+738,"core_io_dsram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+871,"axi_ram_clock", false,-1);
    tracep->declBit(c+872,"axi_ram_reset", false,-1);
    tracep->declBit(c+1,"axi_ram_io_ram_bus_aw_ready", false,-1);
    tracep->declBit(c+694,"axi_ram_io_ram_bus_aw_valid", false,-1);
    tracep->declQuad(c+695,"axi_ram_io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+697,"axi_ram_io_ram_bus_w_ready", false,-1);
    tracep->declBit(c+698,"axi_ram_io_ram_bus_w_valid", false,-1);
    tracep->declQuad(c+699,"axi_ram_io_ram_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+701,"axi_ram_io_ram_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+702,"axi_ram_io_ram_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+2,"axi_ram_io_ram_bus_b_valid", false,-1);
    tracep->declBit(c+3,"axi_ram_io_ram_bus_ar_ready", false,-1);
    tracep->declBit(c+703,"axi_ram_io_ram_bus_ar_valid", false,-1);
    tracep->declQuad(c+704,"axi_ram_io_ram_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+706,"axi_ram_io_ram_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+707,"axi_ram_io_ram_bus_r_valid", false,-1);
    tracep->declQuad(c+708,"axi_ram_io_ram_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+710,"axi_ram_io_ram_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+871,"sram0_clock", false,-1);
    tracep->declBit(c+872,"sram0_reset", false,-1);
    tracep->declBus(c+4,"sram0_io_addr", false,-1, 5,0);
    tracep->declBit(c+5,"sram0_io_wen", false,-1);
    tracep->declArray(c+875,"sram0_io_wmask", false,-1, 127,0);
    tracep->declArray(c+11,"sram0_io_wdata", false,-1, 127,0);
    tracep->declArray(c+15,"sram0_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram1_clock", false,-1);
    tracep->declBit(c+872,"sram1_reset", false,-1);
    tracep->declBus(c+4,"sram1_io_addr", false,-1, 5,0);
    tracep->declBit(c+5,"sram1_io_wen", false,-1);
    tracep->declArray(c+875,"sram1_io_wmask", false,-1, 127,0);
    tracep->declArray(c+7,"sram1_io_wdata", false,-1, 127,0);
    tracep->declArray(c+19,"sram1_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram2_clock", false,-1);
    tracep->declBit(c+872,"sram2_reset", false,-1);
    tracep->declBus(c+4,"sram2_io_addr", false,-1, 5,0);
    tracep->declBit(c+6,"sram2_io_wen", false,-1);
    tracep->declArray(c+875,"sram2_io_wmask", false,-1, 127,0);
    tracep->declArray(c+11,"sram2_io_wdata", false,-1, 127,0);
    tracep->declArray(c+23,"sram2_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram3_clock", false,-1);
    tracep->declBit(c+872,"sram3_reset", false,-1);
    tracep->declBus(c+4,"sram3_io_addr", false,-1, 5,0);
    tracep->declBit(c+6,"sram3_io_wen", false,-1);
    tracep->declArray(c+875,"sram3_io_wmask", false,-1, 127,0);
    tracep->declArray(c+7,"sram3_io_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"sram3_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram4_clock", false,-1);
    tracep->declBit(c+872,"sram4_reset", false,-1);
    tracep->declBus(c+711,"sram4_io_addr", false,-1, 5,0);
    tracep->declBit(c+712,"sram4_io_wen", false,-1);
    tracep->declArray(c+714,"sram4_io_wmask", false,-1, 127,0);
    tracep->declArray(c+722,"sram4_io_wdata", false,-1, 127,0);
    tracep->declArray(c+726,"sram4_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram5_clock", false,-1);
    tracep->declBit(c+872,"sram5_reset", false,-1);
    tracep->declBus(c+711,"sram5_io_addr", false,-1, 5,0);
    tracep->declBit(c+712,"sram5_io_wen", false,-1);
    tracep->declArray(c+875,"sram5_io_wmask", false,-1, 127,0);
    tracep->declArray(c+718,"sram5_io_wdata", false,-1, 127,0);
    tracep->declArray(c+730,"sram5_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram6_clock", false,-1);
    tracep->declBit(c+872,"sram6_reset", false,-1);
    tracep->declBus(c+711,"sram6_io_addr", false,-1, 5,0);
    tracep->declBit(c+713,"sram6_io_wen", false,-1);
    tracep->declArray(c+714,"sram6_io_wmask", false,-1, 127,0);
    tracep->declArray(c+722,"sram6_io_wdata", false,-1, 127,0);
    tracep->declArray(c+734,"sram6_io_rdata", false,-1, 127,0);
    tracep->declBit(c+871,"sram7_clock", false,-1);
    tracep->declBit(c+872,"sram7_reset", false,-1);
    tracep->declBus(c+711,"sram7_io_addr", false,-1, 5,0);
    tracep->declBit(c+713,"sram7_io_wen", false,-1);
    tracep->declArray(c+875,"sram7_io_wmask", false,-1, 127,0);
    tracep->declArray(c+718,"sram7_io_wdata", false,-1, 127,0);
    tracep->declArray(c+738,"sram7_io_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+1,"io_ram_bus_aw_ready", false,-1);
    tracep->declBit(c+694,"io_ram_bus_aw_valid", false,-1);
    tracep->declQuad(c+695,"io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+697,"io_ram_bus_w_ready", false,-1);
    tracep->declBit(c+698,"io_ram_bus_w_valid", false,-1);
    tracep->declQuad(c+699,"io_ram_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+701,"io_ram_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+702,"io_ram_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+2,"io_ram_bus_b_valid", false,-1);
    tracep->declBit(c+3,"io_ram_bus_ar_ready", false,-1);
    tracep->declBit(c+703,"io_ram_bus_ar_valid", false,-1);
    tracep->declQuad(c+704,"io_ram_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+706,"io_ram_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+707,"io_ram_bus_r_valid", false,-1);
    tracep->declQuad(c+708,"io_ram_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+710,"io_ram_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+871,"mem_clock", false,-1);
    tracep->declQuad(c+742,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+873,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+703,"mem_rflag", false,-1);
    tracep->declQuad(c+744,"mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+699,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+746,"mem_wmask", false,-1, 63,0);
    tracep->declBit(c+748,"mem_wen", false,-1);
    tracep->declQuad(c+749,"reg_raddr", false,-1, 63,0);
    tracep->declBus(c+751,"reg_rlen", false,-1, 3,0);
    tracep->declBit(c+3,"reg_ar_ready", false,-1);
    tracep->declBit(c+707,"reg_r_valid", false,-1);
    tracep->declBit(c+752,"reg_r_state", false,-1);
    tracep->declQuad(c+744,"reg_w_addr", false,-1, 63,0);
    tracep->declBit(c+753,"reg_is_w", false,-1);
    tracep->declBit(c+1,"reg_aw_ready", false,-1);
    tracep->declBit(c+697,"reg_w_ready", false,-1);
    tracep->declBit(c+2,"reg_b_valid", false,-1);
    tracep->declBus(c+754,"mem_io_wmask_lo", false,-1, 31,0);
    tracep->declBus(c+755,"mem_io_wmask_hi", false,-1, 31,0);
    tracep->declQuad(c+708,"reg_r_data", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declQuad(c+742,"raddr", false,-1, 63,0);
    tracep->declQuad(c+873,"rdata", false,-1, 63,0);
    tracep->declBit(c+703,"rflag", false,-1);
    tracep->declQuad(c+744,"waddr", false,-1, 63,0);
    tracep->declQuad(c+699,"wdata", false,-1, 63,0);
    tracep->declQuad(c+746,"wmask", false,-1, 63,0);
    tracep->declBit(c+748,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+1,"io_axi_bus_aw_ready", false,-1);
    tracep->declBit(c+694,"io_axi_bus_aw_valid", false,-1);
    tracep->declQuad(c+695,"io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+697,"io_axi_bus_w_ready", false,-1);
    tracep->declBit(c+698,"io_axi_bus_w_valid", false,-1);
    tracep->declQuad(c+699,"io_axi_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+701,"io_axi_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+702,"io_axi_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+2,"io_axi_bus_b_valid", false,-1);
    tracep->declBit(c+3,"io_axi_bus_ar_ready", false,-1);
    tracep->declBit(c+703,"io_axi_bus_ar_valid", false,-1);
    tracep->declQuad(c+704,"io_axi_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+706,"io_axi_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+707,"io_axi_bus_r_valid", false,-1);
    tracep->declQuad(c+708,"io_axi_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+710,"io_axi_bus_r_bits_rlast", false,-1);
    tracep->declBus(c+4,"io_isram_addr", false,-1, 5,0);
    tracep->declBit(c+5,"io_isram_wen_0", false,-1);
    tracep->declBit(c+6,"io_isram_wen_1", false,-1);
    tracep->declArray(c+7,"io_isram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+11,"io_isram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+15,"io_isram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+19,"io_isram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+23,"io_isram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+27,"io_isram_rdata_3", false,-1, 127,0);
    tracep->declBus(c+711,"io_dsram_addr", false,-1, 5,0);
    tracep->declBit(c+712,"io_dsram_wen_0", false,-1);
    tracep->declBit(c+713,"io_dsram_wen_1", false,-1);
    tracep->declArray(c+714,"io_dsram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+718,"io_dsram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+722,"io_dsram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+726,"io_dsram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+730,"io_dsram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+734,"io_dsram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+738,"io_dsram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+871,"i_cache_clock", false,-1);
    tracep->declBit(c+872,"i_cache_reset", false,-1);
    tracep->declBit(c+31,"i_cache_io_flush", false,-1);
    tracep->declBit(c+32,"i_cache_io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+33,"i_cache_io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+34,"i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+36,"i_cache_io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+37,"i_cache_io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+38,"i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+40,"i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+42,"i_cache_io_is_fence_i", false,-1);
    tracep->declBus(c+4,"i_cache_io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+5,"i_cache_io_sram_wen_0", false,-1);
    tracep->declBit(c+6,"i_cache_io_sram_wen_1", false,-1);
    tracep->declArray(c+7,"i_cache_io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+11,"i_cache_io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+15,"i_cache_io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+19,"i_cache_io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+23,"i_cache_io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+27,"i_cache_io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+43,"i_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+44,"i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+756,"i_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+757,"i_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+871,"d_cache_clock", false,-1);
    tracep->declBit(c+872,"d_cache_reset", false,-1);
    tracep->declBit(c+758,"d_cache_io_cpu_valid", false,-1);
    tracep->declQuad(c+759,"d_cache_io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+761,"d_cache_io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"d_cache_io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"d_cache_io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+767,"d_cache_io_cpu_ready", false,-1);
    tracep->declBus(c+711,"d_cache_io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+712,"d_cache_io_sram_wen_0", false,-1);
    tracep->declBit(c+713,"d_cache_io_sram_wen_1", false,-1);
    tracep->declArray(c+714,"d_cache_io_sram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+718,"d_cache_io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+722,"d_cache_io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+726,"d_cache_io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+730,"d_cache_io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+734,"d_cache_io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+738,"d_cache_io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+768,"d_cache_io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+769,"d_cache_io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+770,"d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+772,"d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+774,"d_cache_io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+775,"d_cache_io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+684,"d_cache_io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+776,"d_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+777,"d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+779,"d_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+780,"d_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+871,"cross_bar_clock", false,-1);
    tracep->declBit(c+872,"cross_bar_reset", false,-1);
    tracep->declBit(c+43,"cross_bar_io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+44,"cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+756,"cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+757,"cross_bar_io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+768,"cross_bar_io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+769,"cross_bar_io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+770,"cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+772,"cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+774,"cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+684,"cross_bar_io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+776,"cross_bar_io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+777,"cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+779,"cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+780,"cross_bar_io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+46,"cross_bar_io_bus1_valid", false,-1);
    tracep->declQuad(c+34,"cross_bar_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+708,"cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+781,"cross_bar_io_bus1_ready", false,-1);
    tracep->declBit(c+782,"cross_bar_io_bus2_valid", false,-1);
    tracep->declQuad(c+759,"cross_bar_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+708,"cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"cross_bar_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+783,"cross_bar_io_bus2_ready", false,-1);
    tracep->declBit(c+1,"cross_bar_io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+694,"cross_bar_io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+695,"cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+697,"cross_bar_io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+698,"cross_bar_io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+699,"cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+701,"cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+702,"cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+879,"cross_bar_io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+2,"cross_bar_io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+3,"cross_bar_io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+703,"cross_bar_io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+704,"cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+706,"cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+707,"cross_bar_io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+708,"cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+710,"cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+685,"cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+47,"cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+34,"cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+36,"cross_bar_1_io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+784,"cross_bar_1_io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+785,"cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+48,"cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+787,"cross_bar_1_io_wb_valid", false,-1);
    tracep->declQuad(c+759,"cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+788,"cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"cross_bar_1_io_wb_bits_is_w", false,-1);
    tracep->declBit(c+686,"cross_bar_1_io_wb_ready", false,-1);
    tracep->declBit(c+32,"cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+33,"cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+34,"cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+36,"cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+37,"cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+38,"cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+40,"cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+758,"cross_bar_1_io_DCache_valid", false,-1);
    tracep->declQuad(c+759,"cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+761,"cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"cross_bar_1_io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+767,"cross_bar_1_io_DCache_ready", false,-1);
    tracep->declBit(c+46,"cross_bar_1_io_bus1_valid", false,-1);
    tracep->declQuad(c+34,"cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+708,"cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+781,"cross_bar_1_io_bus1_ready", false,-1);
    tracep->declBit(c+782,"cross_bar_1_io_bus2_valid", false,-1);
    tracep->declQuad(c+759,"cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+708,"cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"cross_bar_1_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+783,"cross_bar_1_io_bus2_ready", false,-1);
    tracep->declBit(c+790,"cross_bar_1_io_clint_bus_valid", false,-1);
    tracep->declQuad(c+759,"cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+50,"cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+766,"cross_bar_1_io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+52,"cross_bar_1_io_clint_bus_ready", false,-1);
    tracep->declBit(c+871,"fetch_clock", false,-1);
    tracep->declBit(c+872,"fetch_reset", false,-1);
    tracep->declBit(c+53,"fetch_io_br_info_valid", false,-1);
    tracep->declBit(c+54,"fetch_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+55,"fetch_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+57,"fetch_io_br_info_taken", false,-1);
    tracep->declQuad(c+58,"fetch_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+60,"fetch_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+61,"fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+63,"fetch_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+65,"fetch_io_flush", false,-1);
    tracep->declBit(c+685,"fetch_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+47,"fetch_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+34,"fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+36,"fetch_io_cpu_data_ready", false,-1);
    tracep->declBit(c+784,"fetch_io_cpu_data_valid", false,-1);
    tracep->declQuad(c+785,"fetch_io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+48,"fetch_io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+66,"fetch_io_put_pc_ready", false,-1);
    tracep->declBit(c+67,"fetch_io_put_pc_valid", false,-1);
    tracep->declBus(c+68,"fetch_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+69,"fetch_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+71,"fetch_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+31,"fetch_io_out_flush", false,-1);
    tracep->declBit(c+871,"execute_clock", false,-1);
    tracep->declBit(c+872,"execute_reset", false,-1);
    tracep->declBit(c+66,"execute_io_op_datas_ready", false,-1);
    tracep->declBit(c+72,"execute_io_op_datas_valid", false,-1);
    tracep->declBus(c+73,"execute_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+74,"execute_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+75,"execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+78,"execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+81,"execute_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+82,"execute_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+84,"execute_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+85,"execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+86,"execute_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+87,"execute_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+88,"execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+89,"execute_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+91,"execute_io_irq_time_irq", false,-1);
    tracep->declBit(c+92,"execute_io_irq_soft_irq", false,-1);
    tracep->declQuad(c+93,"execute_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+95,"execute_io_mie", false,-1, 63,0);
    tracep->declQuad(c+97,"execute_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+99,"execute_io_mtvec", false,-1, 63,0);
    tracep->declBit(c+101,"execute_io_wb_valid", false,-1);
    tracep->declBus(c+102,"execute_io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"execute_io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+105,"execute_io_csr_valid", false,-1);
    tracep->declBus(c+106,"execute_io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+107,"execute_io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+109,"execute_io_csr_except_is_except", false,-1);
    tracep->declBit(c+110,"execute_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+111,"execute_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+112,"execute_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+113,"execute_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+115,"execute_io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+117,"execute_io_commit", false,-1);
    tracep->declBus(c+118,"execute_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+119,"execute_io_difftest_peripheral", false,-1);
    tracep->declQuad(c+63,"execute_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+65,"execute_io_flush", false,-1);
    tracep->declBit(c+42,"execute_io_fence_i", false,-1);
    tracep->declBit(c+53,"execute_io_br_info_valid", false,-1);
    tracep->declBit(c+54,"execute_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+55,"execute_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+57,"execute_io_br_info_taken", false,-1);
    tracep->declQuad(c+58,"execute_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+60,"execute_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+61,"execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+787,"execute_io_bus_valid", false,-1);
    tracep->declQuad(c+759,"execute_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+788,"execute_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"execute_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"execute_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"execute_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+686,"execute_io_bus_ready", false,-1);
    tracep->declBit(c+871,"decode_clock", false,-1);
    tracep->declBit(c+872,"decode_reset", false,-1);
    tracep->declBit(c+66,"decode_io_get_inst_ready", false,-1);
    tracep->declBit(c+67,"decode_io_get_inst_valid", false,-1);
    tracep->declBus(c+68,"decode_io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+69,"decode_io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+71,"decode_io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+120,"decode_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"decode_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+123,"decode_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+124,"decode_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+126,"decode_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+127,"decode_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+66,"decode_io_op_datas_ready", false,-1);
    tracep->declBit(c+72,"decode_io_op_datas_valid", false,-1);
    tracep->declBus(c+73,"decode_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+74,"decode_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+75,"decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+78,"decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+81,"decode_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+82,"decode_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+84,"decode_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+85,"decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+86,"decode_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+87,"decode_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+88,"decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+89,"decode_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+65,"decode_io_flush", false,-1);
    tracep->declBit(c+871,"commit_clock", false,-1);
    tracep->declBit(c+872,"commit_reset", false,-1);
    tracep->declBus(c+120,"commit_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"commit_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+123,"commit_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+124,"commit_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+101,"commit_io_normal_wb_valid", false,-1);
    tracep->declBus(c+102,"commit_io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"commit_io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+126,"commit_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+127,"commit_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+105,"commit_io_csr_wb_valid", false,-1);
    tracep->declBus(c+106,"commit_io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+107,"commit_io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+109,"commit_io_csr_except_is_except", false,-1);
    tracep->declBit(c+110,"commit_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+111,"commit_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+112,"commit_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+113,"commit_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+115,"commit_io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+99,"commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+97,"commit_io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+93,"commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+95,"commit_io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+117,"commit_io_commit", false,-1);
    tracep->declBus(c+118,"commit_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+119,"commit_io_difftest_peripheral", false,-1);
    tracep->declBit(c+871,"clint_de_clock", false,-1);
    tracep->declBit(c+872,"clint_de_reset", false,-1);
    tracep->declBit(c+790,"clint_de_io_valid", false,-1);
    tracep->declQuad(c+759,"clint_de_io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+763,"clint_de_io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+50,"clint_de_io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+766,"clint_de_io_bits_is_w", false,-1);
    tracep->declBit(c+52,"clint_de_io_ready", false,-1);
    tracep->declBit(c+92,"clint_de_io_soft_irq", false,-1);
    tracep->declBit(c+91,"clint_de_io_time_irq", false,-1);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+790,"io_valid", false,-1);
    tracep->declQuad(c+759,"io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+763,"io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+50,"io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+766,"io_bits_is_w", false,-1);
    tracep->declBit(c+52,"io_ready", false,-1);
    tracep->declBit(c+92,"io_soft_irq", false,-1);
    tracep->declBit(c+91,"io_time_irq", false,-1);
    tracep->declBit(c+92,"reg_msip", false,-1);
    tracep->declQuad(c+129,"reg_mtime", false,-1, 63,0);
    tracep->declQuad(c+131,"reg_mtimecmp", false,-1, 63,0);
    tracep->declBit(c+52,"reg_ready", false,-1);
    tracep->declQuad(c+50,"red_rdata", false,-1, 63,0);
    tracep->declBit(c+133,"reg_state", false,-1);
    tracep->declBit(c+791,"is_misp", false,-1);
    tracep->declBit(c+792,"is_mtimecmp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("commit ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+120,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+123,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+124,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+101,"io_normal_wb_valid", false,-1);
    tracep->declBus(c+102,"io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+126,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+127,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+105,"io_csr_wb_valid", false,-1);
    tracep->declBus(c+106,"io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+107,"io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+109,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+110,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+111,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+112,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+113,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+115,"io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+99,"io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+97,"io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+93,"io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+95,"io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+117,"io_commit", false,-1);
    tracep->declBus(c+118,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+119,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+871,"csr_reg_clock", false,-1);
    tracep->declBit(c+872,"csr_reg_reset", false,-1);
    tracep->declBus(c+106,"csr_reg_io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+107,"csr_reg_io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+105,"csr_reg_io_in_w_csr_en", false,-1);
    tracep->declQuad(c+115,"csr_reg_io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+113,"csr_reg_io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+110,"csr_reg_io_in_time_irq", false,-1);
    tracep->declBit(c+111,"csr_reg_io_in_soft_irq", false,-1);
    tracep->declBus(c+134,"csr_reg_io_in_exception", false,-1, 4,0);
    tracep->declBit(c+109,"csr_reg_io_in_is_exception", false,-1);
    tracep->declBit(c+117,"csr_reg_io_in_commit", false,-1);
    tracep->declBus(c+126,"csr_reg_io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+127,"csr_reg_io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+99,"csr_reg_io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+97,"csr_reg_io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+93,"csr_reg_io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+95,"csr_reg_io_r_csr_mie", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+135+i*2,"reg_file", true,(i+0), 63,0);
    }
    tracep->declQuad(c+199,"read_rs1_from_file", false,-1, 63,0);
    tracep->declQuad(c+201,"read_rs2_from_file", false,-1, 63,0);
    tracep->declQuad(c+203,"difftest_commit", false,-1, 63,0);
    tracep->declQuad(c+205,"difftest_inst", false,-1, 63,0);
    tracep->declQuad(c+207,"difftest_pc", false,-1, 63,0);
    tracep->declQuad(c+209,"inst_counter", false,-1, 63,0);
    tracep->declQuad(c+211,"difftest_irq", false,-1, 63,0);
    tracep->declQuad(c+213,"difftest_peripheral", false,-1, 63,0);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+106,"io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+107,"io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+105,"io_in_w_csr_en", false,-1);
    tracep->declQuad(c+115,"io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+113,"io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+110,"io_in_time_irq", false,-1);
    tracep->declBit(c+111,"io_in_soft_irq", false,-1);
    tracep->declBus(c+134,"io_in_exception", false,-1, 4,0);
    tracep->declBit(c+109,"io_in_is_exception", false,-1);
    tracep->declBit(c+117,"io_in_commit", false,-1);
    tracep->declBus(c+126,"io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+127,"io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+99,"io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+97,"io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+93,"io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+95,"io_r_csr_mie", false,-1, 63,0);
    tracep->declBit(c+215,"irq", false,-1);
    tracep->declQuad(c+216,"reg_mstatus", false,-1, 63,0);
    tracep->declQuad(c+218,"reg_mie", false,-1, 63,0);
    tracep->declQuad(c+220,"reg_mtvec", false,-1, 63,0);
    tracep->declQuad(c+222,"reg_mscratch", false,-1, 63,0);
    tracep->declQuad(c+224,"reg_mepc", false,-1, 63,0);
    tracep->declQuad(c+226,"reg_mcause", false,-1, 63,0);
    tracep->declQuad(c+228,"reg_mtval", false,-1, 63,0);
    tracep->declQuad(c+230,"reg_mcycle", false,-1, 63,0);
    tracep->declQuad(c+232,"reg_minstret", false,-1, 63,0);
    tracep->declQuad(c+234,"csr_rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cross_bar ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+43,"io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+44,"io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+756,"io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+757,"io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+768,"io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+769,"io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+770,"io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+772,"io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+774,"io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+684,"io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+776,"io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+777,"io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+779,"io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+780,"io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+46,"io_bus1_valid", false,-1);
    tracep->declQuad(c+34,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+781,"io_bus1_ready", false,-1);
    tracep->declBit(c+782,"io_bus2_valid", false,-1);
    tracep->declQuad(c+759,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+783,"io_bus2_ready", false,-1);
    tracep->declBit(c+1,"io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+694,"io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+695,"io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+697,"io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+698,"io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+699,"io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+701,"io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+702,"io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+879,"io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+2,"io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+3,"io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+703,"io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+704,"io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+706,"io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+707,"io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+708,"io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+710,"io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+236,"w_locked", false,-1);
    tracep->declBus(c+237,"w_lockId", false,-1, 1,0);
    tracep->declBus(c+793,"w_chosen", false,-1, 1,0);
    tracep->declBus(c+238,"reg_r_cnt", false,-1, 1,0);
    tracep->declBit(c+239,"r_locked", false,-1);
    tracep->declBus(c+240,"r_lockId", false,-1, 1,0);
    tracep->declBus(c+794,"r_chosen", false,-1, 1,0);
    tracep->declBit(c+241,"reg_aw_ok", false,-1);
    tracep->declBit(c+242,"reg_ar_ok", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cross_bar_1 ");
    tracep->declBit(c+685,"io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+47,"io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+34,"io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+36,"io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+784,"io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+785,"io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+48,"io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+787,"io_wb_valid", false,-1);
    tracep->declQuad(c+759,"io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+788,"io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"io_wb_bits_is_w", false,-1);
    tracep->declBit(c+686,"io_wb_ready", false,-1);
    tracep->declBit(c+32,"io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+33,"io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+34,"io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+36,"io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+37,"io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+38,"io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+40,"io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+758,"io_DCache_valid", false,-1);
    tracep->declQuad(c+759,"io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+761,"io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+767,"io_DCache_ready", false,-1);
    tracep->declBit(c+46,"io_bus1_valid", false,-1);
    tracep->declQuad(c+34,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+781,"io_bus1_ready", false,-1);
    tracep->declBit(c+782,"io_bus2_valid", false,-1);
    tracep->declQuad(c+759,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+783,"io_bus2_ready", false,-1);
    tracep->declBit(c+790,"io_clint_bus_valid", false,-1);
    tracep->declQuad(c+759,"io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+50,"io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+766,"io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+52,"io_clint_bus_ready", false,-1);
    tracep->declBit(c+243,"fetch_low_address", false,-1);
    tracep->declBit(c+795,"low_address", false,-1);
    tracep->declBit(c+796,"not_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+758,"io_cpu_valid", false,-1);
    tracep->declQuad(c+759,"io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+761,"io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+767,"io_cpu_ready", false,-1);
    tracep->declBus(c+711,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+712,"io_sram_wen_0", false,-1);
    tracep->declBit(c+713,"io_sram_wen_1", false,-1);
    tracep->declArray(c+714,"io_sram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+718,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+722,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+726,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+730,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+734,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+738,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+768,"io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+769,"io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+770,"io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+772,"io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+774,"io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+775,"io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+684,"io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+776,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+777,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+779,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+780,"io_cache_bus_r_ready", false,-1);
    tracep->declQuad(c+797,"Tag", false,-1, 53,0);
    tracep->declBus(c+799,"Index", false,-1, 5,0);
    tracep->declBus(c+800,"Offset", false,-1, 3,0);
    tracep->declQuad(c+763,"wdata", false,-1, 63,0);
    tracep->declBus(c+765,"wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"is_w", false,-1);
    tracep->declBus(c+801,"reg_cache_state", false,-1, 1,0);
    tracep->declQuad(c+802,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+804,"reg_wstrb", false,-1, 7,0);
    tracep->declBit(c+805,"reg_is_w", false,-1);
    tracep->declQuad(c+806,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+808,"reg_index", false,-1, 5,0);
    tracep->declBus(c+809,"reg_offset", false,-1, 3,0);
    tracep->declBit(c+767,"reg_ready", false,-1);
    tracep->declQuad(c+761,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+810,"reg_cache_write", false,-1);
    tracep->declBus(c+811,"reg_cache_wstrb", false,-1, 15,0);
    tracep->declArray(c+722,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+812,"reg_chosen_tag", false,-1);
    tracep->declBus(c+880,"cache_idle", false,-1, 1,0);
    tracep->declBus(c+881,"read_cache", false,-1, 1,0);
    tracep->declBus(c+882,"cache_and_bus", false,-1, 1,0);
    tracep->declBus(c+883,"cache_end", false,-1, 1,0);
    tracep->declArray(c+813,"cache_mask", false,-1, 127,0);
    tracep->declArray(c+817,"cache_wdata", false,-1, 127,0);
    tracep->declBus(c+821,"cache_wstrb", false,-1, 15,0);
    tracep->declBit(c+822,"is_sram0_write", false,-1);
    tracep->declBit(c+823,"is_sram2_write", false,-1);
    tracep->declBit(c+884,"clear_cache", false,-1);
    tracep->declQuad(c+244,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+246,"reg_sram0_dirty", false,-1, 63,0);
    tracep->declQuad(c+824,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+826,"neg_chose_bit", false,-1, 63,0);
    tracep->declQuad(c+248,"reg_sram2_valid", false,-1, 63,0);
    tracep->declQuad(c+250,"reg_sram2_dirty", false,-1, 63,0);
    tracep->declQuad(c+777,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+776,"reg_r_valid", false,-1);
    tracep->declQuad(c+770,"reg_w_waddr", false,-1, 63,0);
    tracep->declQuad(c+772,"reg_w_wdata", false,-1, 63,0);
    tracep->declBit(c+774,"reg_w_wlast", false,-1);
    tracep->declBit(c+769,"reg_w_valid", false,-1);
    tracep->declBit(c+775,"reg_b_ready", false,-1);
    tracep->declQuad(c+828,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+830,"tag_2", false,-1, 53,0);
    tracep->declBit(c+832,"hit_0", false,-1);
    tracep->declBit(c+833,"hit_2", false,-1);
    tracep->declBit(c+834,"tag_valid_0", false,-1);
    tracep->declBit(c+835,"tag_valid_2", false,-1);
    tracep->declBit(c+687,"tag_dirty_0", false,-1);
    tracep->declBit(c+688,"tag_dirty_2", false,-1);
    tracep->declQuad(c+836,"rdata0", false,-1, 63,0);
    tracep->declQuad(c+838,"rdata2", false,-1, 63,0);
    tracep->declArray(c+726,"rdata_0", false,-1, 127,0);
    tracep->declArray(c+734,"rdata_2", false,-1, 127,0);
    tracep->declQuad(c+252,"reg_lru_2", false,-1, 63,0);
    tracep->declBit(c+840,"LRU_2", false,-1);
    tracep->declBit(c+841,"reg_start_operation", false,-1);
    tracep->declBus(c+842,"reg_cnt", false,-1, 1,0);
    tracep->declBit(c+843,"reg_rbus_finish", false,-1);
    tracep->declBit(c+844,"reg_wbus_finish", false,-1);
    tracep->declBit(c+845,"hit_0_and_valid_0", false,-1);
    tracep->declBit(c+846,"hit_2_and_valid_2", false,-1);
    tracep->declQuad(c+847,"temp_addr", false,-1, 63,0);
    tracep->declBit(c+849,"io_cache_bus_r_fire", false,-1);
    tracep->declBit(c+850,"io_cache_bus_b_fire", false,-1);
    tracep->declQuad(c+708,"bus_r_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+66,"io_get_inst_ready", false,-1);
    tracep->declBit(c+67,"io_get_inst_valid", false,-1);
    tracep->declBus(c+68,"io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+69,"io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+71,"io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+120,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+121,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+123,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+124,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+126,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+127,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+66,"io_op_datas_ready", false,-1);
    tracep->declBit(c+72,"io_op_datas_valid", false,-1);
    tracep->declBus(c+73,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+74,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+75,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+78,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+81,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+82,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+84,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+85,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+86,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+87,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+88,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+89,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+65,"io_flush", false,-1);
    tracep->declBit(c+72,"reg_valid", false,-1);
    tracep->declBus(c+73,"reg_opType", false,-1, 2,0);
    tracep->declBus(c+74,"reg_exuType", false,-1, 6,0);
    tracep->declBus(c+75,"reg_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"reg_rs1_data", false,-1, 63,0);
    tracep->declBus(c+78,"reg_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"reg_rs2_data", false,-1, 63,0);
    tracep->declBus(c+81,"reg_imm", false,-1, 31,0);
    tracep->declQuad(c+82,"reg_pc", false,-1, 63,0);
    tracep->declBus(c+84,"reg_inst", false,-1, 31,0);
    tracep->declBus(c+85,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+86,"reg_dest_is_reg", false,-1);
    tracep->declBus(c+88,"reg_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+89,"reg_csr_data", false,-1, 63,0);
    tracep->declBit(c+87,"reg_is_pre", false,-1);
    tracep->declBus(c+123,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+120,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+126,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+254,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+255,"fun", false,-1, 2,0);
    tracep->declBus(c+256,"fun_exuType", false,-1, 4,0);
    tracep->declBus(c+257,"fun_op", false,-1, 2,0);
    tracep->declBit(c+258,"temp_system_is_pri", false,-1);
    tracep->declBit(c+259,"temp_system_is_imm", false,-1);
    tracep->declBit(c+260,"temp_system_rs1", false,-1);
    tracep->declBus(c+261,"temp_system_1", false,-1, 6,0);
    tracep->declBus(c+262,"temp_system_2", false,-1, 2,0);
    tracep->declBit(c+263,"temp_system_3", false,-1);
    tracep->declBit(c+264,"temp_system_4", false,-1);
    tracep->declBus(c+265,"temp_mem_itype", false,-1, 3,0);
    tracep->declBit(c+266,"temp_mem_dest", false,-1);
    tracep->declBit(c+266,"temp_op_is_imm", false,-1);
    tracep->declBit(c+267,"is_sr", false,-1);
    tracep->declBus(c+268,"temp_kk", false,-1, 5,0);
    tracep->declBus(c+269,"temp_op_exuType", false,-1, 5,0);
    tracep->declBus(c+270,"temp_op_itype", false,-1, 3,0);
    tracep->declBit(c+271,"temp_op_rs2", false,-1);
    tracep->declBus(c+272,"temp_op", false,-1, 1,0);
    tracep->declBus(c+273,"temp_jal_jalr_1", false,-1, 6,0);
    tracep->declBus(c+274,"temp_jal_jalr_2", false,-1, 3,0);
    tracep->declBit(c+275,"temp_jal_jalr_4", false,-1);
    tracep->declBus(c+276,"instType", false,-1, 3,0);
    tracep->declBit(c+277,"dest_is_reg", false,-1);
    tracep->declBit(c+278,"rs1_is_reg", false,-1);
    tracep->declBit(c+279,"rs2_is_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+66,"io_op_datas_ready", false,-1);
    tracep->declBit(c+72,"io_op_datas_valid", false,-1);
    tracep->declBus(c+73,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+74,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+75,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+78,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+79,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+81,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+82,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+84,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+85,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+86,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+87,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+88,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+89,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+91,"io_irq_time_irq", false,-1);
    tracep->declBit(c+92,"io_irq_soft_irq", false,-1);
    tracep->declQuad(c+93,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+95,"io_mie", false,-1, 63,0);
    tracep->declQuad(c+97,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+99,"io_mtvec", false,-1, 63,0);
    tracep->declBit(c+101,"io_wb_valid", false,-1);
    tracep->declBus(c+102,"io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+103,"io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+105,"io_csr_valid", false,-1);
    tracep->declBus(c+106,"io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+107,"io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+109,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+110,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+111,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+112,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+113,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+115,"io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+117,"io_commit", false,-1);
    tracep->declBus(c+118,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+119,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+63,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+65,"io_flush", false,-1);
    tracep->declBit(c+42,"io_fence_i", false,-1);
    tracep->declBit(c+53,"io_br_info_valid", false,-1);
    tracep->declBit(c+54,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+55,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+57,"io_br_info_taken", false,-1);
    tracep->declQuad(c+58,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+60,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+61,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+787,"io_bus_valid", false,-1);
    tracep->declQuad(c+759,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+788,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+686,"io_bus_ready", false,-1);
    tracep->declBit(c+280,"alu_exu_io_valid", false,-1);
    tracep->declBit(c+87,"alu_exu_io_is_pre", false,-1);
    tracep->declBit(c+281,"alu_exu_io_br_info_valid", false,-1);
    tracep->declBit(c+282,"alu_exu_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+283,"alu_exu_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+285,"alu_exu_io_br_info_taken", false,-1);
    tracep->declQuad(c+286,"alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+60,"alu_exu_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+61,"alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+73,"alu_exu_io_opType", false,-1, 2,0);
    tracep->declBus(c+74,"alu_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+288,"alu_exu_io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+290,"alu_exu_io_op_data2", false,-1, 63,0);
    tracep->declBus(c+81,"alu_exu_io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+82,"alu_exu_io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+292,"alu_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+282,"alu_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+286,"alu_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+871,"mem_exu_clock", false,-1);
    tracep->declBit(c+872,"mem_exu_reset", false,-1);
    tracep->declBit(c+294,"mem_exu_io_valid", false,-1);
    tracep->declBus(c+74,"mem_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+288,"mem_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+290,"mem_exu_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+81,"mem_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+295,"mem_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+297,"mem_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+298,"mem_exu_io_ready", false,-1);
    tracep->declBit(c+787,"mem_exu_io_bus_valid", false,-1);
    tracep->declQuad(c+759,"mem_exu_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+788,"mem_exu_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"mem_exu_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"mem_exu_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+686,"mem_exu_io_bus_ready", false,-1);
    tracep->declBit(c+119,"mem_exu_io_difftest_peripheral", false,-1);
    tracep->declBit(c+871,"mu_exu_clock", false,-1);
    tracep->declBit(c+872,"mu_exu_reset", false,-1);
    tracep->declBit(c+299,"mu_exu_io_valid", false,-1);
    tracep->declBus(c+74,"mu_exu_io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+288,"mu_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+290,"mu_exu_io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+300,"mu_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+302,"mu_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+303,"mu_exu_io_ready", false,-1);
    tracep->declBit(c+304,"system_exu_io_valid", false,-1);
    tracep->declBus(c+74,"system_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+305,"system_exu_io_csr_data", false,-1, 63,0);
    tracep->declBus(c+88,"system_exu_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+81,"system_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+288,"system_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+97,"system_exu_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+93,"system_exu_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+305,"system_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+307,"system_exu_io_csr_is_w", false,-1);
    tracep->declQuad(c+308,"system_exu_io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+310,"system_exu_io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+311,"system_exu_io_is_except", false,-1);
    tracep->declBus(c+312,"system_exu_io_exception", false,-1, 5,0);
    tracep->declBit(c+313,"system_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+97,"system_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+314,"in_data_valid", false,-1);
    tracep->declBit(c+66,"ready", false,-1);
    tracep->declBus(c+315,"reg_valid", false,-1, 3,0);
    tracep->declBit(c+316,"reg_alu_valid", false,-1);
    tracep->declBit(c+317,"reg_mem_valid", false,-1);
    tracep->declBit(c+318,"reg_mu_valid", false,-1);
    tracep->declBit(c+319,"reg_system_valid", false,-1);
    tracep->declBus(c+320,"valid", false,-1, 3,0);
    tracep->declBit(c+321,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+322,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBus(c+102,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+53,"reg_br_valid", false,-1);
    tracep->declBit(c+54,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+55,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+57,"reg_taken", false,-1);
    tracep->declQuad(c+58,"reg_br_next_pc", false,-1, 63,0);
    tracep->declQuad(c+107,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+106,"reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+324,"reg_csr_is_w", false,-1);
    tracep->declBit(c+325,"reg_is_except", false,-1);
    tracep->declBus(c+112,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+326,"reg_is_time_irq", false,-1);
    tracep->declBit(c+327,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+113,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+115,"reg_except_pc", false,-1, 63,0);
    tracep->declBit(c+328,"time_irq", false,-1);
    tracep->declBit(c+329,"soft_irq", false,-1);
    tracep->declBit(c+330,"irq", false,-1);
    tracep->declQuad(c+63,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+331,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+332,"reg_fence_i", false,-1);
    tracep->declBit(c+333,"reg_commit", false,-1);
    tracep->declBus(c+118,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+280,"io_valid", false,-1);
    tracep->declBit(c+87,"io_is_pre", false,-1);
    tracep->declBit(c+281,"io_br_info_valid", false,-1);
    tracep->declBit(c+282,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+283,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+285,"io_br_info_taken", false,-1);
    tracep->declQuad(c+286,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+60,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+61,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+73,"io_opType", false,-1, 2,0);
    tracep->declBus(c+74,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+288,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+290,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+81,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+82,"io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+292,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+282,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+286,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+334,"is_32", false,-1);
    tracep->declQuad(c+335,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+337,"op_data2", false,-1, 63,0);
    tracep->declQuad(c+339,"op_imm", false,-1, 63,0);
    tracep->declBit(c+341,"rs2_is_imm", false,-1);
    tracep->declQuad(c+342,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+344,"rs1_is_pc", false,-1);
    tracep->declBit(c+345,"is_sra", false,-1);
    tracep->declQuad(c+346,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+348,"temp_rs2_data", false,-1, 63,0);
    tracep->declArray(c+350,"add_sub_result", false,-1, 64,0);
    tracep->declBit(c+353,"u_rs1_l_rs2", false,-1);
    tracep->declBit(c+354,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+355,"shift_rs2_data", false,-1, 5,0);
    tracep->declArray(c+356,"sll_temp", false,-1, 126,0);
    tracep->declQuad(c+360,"srl_temp", false,-1, 63,0);
    tracep->declQuad(c+362,"sra_temp", false,-1, 63,0);
    tracep->declQuad(c+364,"sr_temp", false,-1, 63,0);
    tracep->declQuad(c+366,"result_data", false,-1, 63,0);
    tracep->declBit(c+60,"is_pre", false,-1);
    tracep->declBit(c+368,"is_br", false,-1);
    tracep->declBit(c+369,"is_eq", false,-1);
    tracep->declQuad(c+370,"temp_1", false,-1, 63,0);
    tracep->declArray(c+372,"add_pc", false,-1, 64,0);
    tracep->declQuad(c+375,"op_pc_4", false,-1, 63,0);
    tracep->declArray(c+377,"temp_result_pc", false,-1, 64,0);
    tracep->declQuad(c+380,"dst_data", false,-1, 63,0);
    tracep->declQuad(c+382,"next_pc", false,-1, 63,0);
    tracep->declBit(c+384,"valid_next_pc", false,-1);
    tracep->declBit(c+281,"br_valid", false,-1);
    tracep->declBit(c+385,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+294,"io_valid", false,-1);
    tracep->declBus(c+74,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+288,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+290,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+81,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+295,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+297,"io_dest_is_w", false,-1);
    tracep->declBit(c+298,"io_ready", false,-1);
    tracep->declBit(c+787,"io_bus_valid", false,-1);
    tracep->declQuad(c+759,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+788,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+763,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+765,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+766,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+686,"io_bus_ready", false,-1);
    tracep->declBit(c+119,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+339,"imm", false,-1, 63,0);
    tracep->declBit(c+298,"reg_ready", false,-1);
    tracep->declQuad(c+386,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+388,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+390,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+391,"reg_bus_is_w", false,-1);
    tracep->declBit(c+392,"reg_bus_valid", false,-1);
    tracep->declQuad(c+295,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+297,"reg_w_rs_en", false,-1);
    tracep->declBus(c+393,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+119,"reg_difftest_peripheral", false,-1);
    tracep->declQuad(c+851,"mem_r_data", false,-1, 63,0);
    tracep->declQuad(c+689,"mem_data_result", false,-1, 63,0);
    tracep->declQuad(c+394,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+396,"w_mem_en", false,-1);
    tracep->declQuad(c+397,"mem_wstrb", false,-1, 63,0);
    tracep->declBit(c+399,"reg_ls_state", false,-1);
    tracep->declArray(c+400,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+404,"chose_chancel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+299,"io_valid", false,-1);
    tracep->declBus(c+74,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+288,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+290,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+300,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+302,"io_dest_is_w", false,-1);
    tracep->declBit(c+303,"io_ready", false,-1);
    tracep->declBit(c+871,"div_clock", false,-1);
    tracep->declBit(c+872,"div_reset", false,-1);
    tracep->declBit(c+405,"div_io_valid", false,-1);
    tracep->declQuad(c+288,"div_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+290,"div_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+74,"div_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+406,"div_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+408,"div_io_dest_is_w", false,-1);
    tracep->declBit(c+409,"div_io_ready", false,-1);
    tracep->declBit(c+871,"mul_clock", false,-1);
    tracep->declBit(c+872,"mul_reset", false,-1);
    tracep->declBit(c+410,"mul_io_valid", false,-1);
    tracep->declQuad(c+288,"mul_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+290,"mul_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+74,"mul_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+411,"mul_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+413,"mul_io_dest_is_w", false,-1);
    tracep->declBit(c+414,"mul_io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+405,"io_valid", false,-1);
    tracep->declQuad(c+288,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+290,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+74,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+406,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+408,"io_dest_is_w", false,-1);
    tracep->declBit(c+409,"io_ready", false,-1);
    tracep->declBit(c+334,"is_32", false,-1);
    tracep->declBit(c+415,"is_signed", false,-1);
    tracep->declArray(c+416,"dividend", false,-1, 64,0);
    tracep->declArray(c+419,"divisor", false,-1, 64,0);
    tracep->declArray(c+422,"rem", false,-1, 64,0);
    tracep->declArray(c+425,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+428,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+431,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+434,"reg_q", false,-1, 65,0);
    tracep->declArray(c+437,"neg_divisor", false,-1, 64,0);
    tracep->declBus(c+440,"reg_state", false,-1, 1,0);
    tracep->declBus(c+441,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+442,"reg_exuType", false,-1, 6,0);
    tracep->declArray(c+443,"temp_result", false,-1, 131,0);
    tracep->declBit(c+448,"rem_is_0", false,-1);
    tracep->declBit(c+449,"rem_is_neg_div", false,-1);
    tracep->declBit(c+450,"rem_is_div", false,-1);
    tracep->declBit(c+451,"is_need_correct", false,-1);
    tracep->declBit(c+408,"reg_dest_is_w", false,-1);
    tracep->declBit(c+409,"reg_ready", false,-1);
    tracep->declBit(c+452,"reg_is_32", false,-1);
    tracep->declBit(c+453,"reg_is_rem", false,-1);
    tracep->declQuad(c+454,"rem_adjust", false,-1, 63,0);
    tracep->declQuad(c+456,"q_adjust", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+410,"io_valid", false,-1);
    tracep->declQuad(c+288,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+290,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+74,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+411,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+413,"io_dest_is_w", false,-1);
    tracep->declBit(c+414,"io_ready", false,-1);
    tracep->declBit(c+458,"is_32", false,-1);
    tracep->declBit(c+459,"is_rs1_signed", false,-1);
    tracep->declBit(c+334,"is_rs2_signed", false,-1);
    tracep->declArray(c+460,"mul_data1", false,-1, 129,0);
    tracep->declArray(c+465,"mul_data2", false,-1, 64,0);
    tracep->declArray(c+468,"temp_mul2", false,-1, 66,0);
    tracep->declBit(c+414,"reg_ready", false,-1);
    tracep->declBus(c+471,"reg_state", false,-1, 1,0);
    tracep->declArray(c+472,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+475,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+480,"reg_result", false,-1, 129,0);
    tracep->declBus(c+485,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+413,"reg_dest_is_w", false,-1);
    tracep->declArray(c+486,"pp", false,-1, 130,0);
    tracep->declBus(c+491,"reg_cnt", false,-1, 6,0);
    tracep->declBit(c+492,"reg_not_h", false,-1);
    tracep->declBit(c+493,"reg_is_32", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+304,"io_valid", false,-1);
    tracep->declBus(c+74,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+305,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+88,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+81,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+288,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+97,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+93,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+305,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+307,"io_csr_is_w", false,-1);
    tracep->declQuad(c+308,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+310,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+311,"io_is_except", false,-1);
    tracep->declBus(c+312,"io_exception", false,-1, 5,0);
    tracep->declBit(c+313,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+97,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+339,"imm", false,-1, 63,0);
    tracep->declBit(c+494,"is_imm", false,-1);
    tracep->declQuad(c+495,"op_data", false,-1, 63,0);
    tracep->declQuad(c+497,"or_result", false,-1, 63,0);
    tracep->declQuad(c+499,"and_result", false,-1, 63,0);
    tracep->declQuad(c+501,"temp_csr_result_data", false,-1, 63,0);
    tracep->declBit(c+503,"is_mret", false,-1);
    tracep->declBit(c+504,"is_sret", false,-1);
    tracep->declBit(c+505,"is_ecall", false,-1);
    tracep->declBit(c+506,"is_ebreak", false,-1);
    tracep->declBit(c+507,"is_except", false,-1);
    tracep->declBus(c+508,"exception", false,-1, 3,0);
    tracep->declBit(c+509,"is_ret", false,-1);
    tracep->declQuad(c+510,"result_status", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+53,"io_br_info_valid", false,-1);
    tracep->declBit(c+54,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+55,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+57,"io_br_info_taken", false,-1);
    tracep->declQuad(c+58,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+60,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+61,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+63,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+65,"io_flush", false,-1);
    tracep->declBit(c+685,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+47,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+34,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+36,"io_cpu_data_ready", false,-1);
    tracep->declBit(c+784,"io_cpu_data_valid", false,-1);
    tracep->declQuad(c+785,"io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+48,"io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+66,"io_put_pc_ready", false,-1);
    tracep->declBit(c+67,"io_put_pc_valid", false,-1);
    tracep->declBus(c+68,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+69,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+71,"io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+31,"io_out_flush", false,-1);
    tracep->declBit(c+871,"ibuf_clock", false,-1);
    tracep->declBit(c+872,"ibuf_reset", false,-1);
    tracep->declBit(c+65,"ibuf_io_flush", false,-1);
    tracep->declBit(c+36,"ibuf_io_cache_buf_ready", false,-1);
    tracep->declBit(c+691,"ibuf_io_cache_buf_valid", false,-1);
    tracep->declQuad(c+48,"ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+692,"ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+512,"ibuf_io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+66,"ibuf_io_put_pc_ready", false,-1);
    tracep->declBit(c+67,"ibuf_io_put_pc_valid", false,-1);
    tracep->declBus(c+68,"ibuf_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+69,"ibuf_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+71,"ibuf_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+871,"br_predictor_clock", false,-1);
    tracep->declBit(c+872,"br_predictor_reset", false,-1);
    tracep->declBit(c+53,"br_predictor_io_br_info_valid", false,-1);
    tracep->declBit(c+54,"br_predictor_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+55,"br_predictor_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+57,"br_predictor_io_br_info_taken", false,-1);
    tracep->declQuad(c+58,"br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+34,"br_predictor_io_pc", false,-1, 63,0);
    tracep->declQuad(c+513,"br_predictor_io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+515,"br_predictor_io_pre_valid", false,-1);
    tracep->declQuad(c+34,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+516,"reg_flush", false,-1);
    tracep->declQuad(c+517,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+47,"reg_bus_valid", false,-1);
    tracep->declBus(c+519,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+520,"pre_info_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+521+i*2,"pre_info_fifo", true,(i+0), 63,0);
    }
    tracep->declBit(c+853,"pre_enq", false,-1);
    tracep->declBus(c+529,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+530,"is_pre_tail", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+531+i*1,"is_pre_fifo", true,(i+0));
    }
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+53,"io_br_info_valid", false,-1);
    tracep->declBit(c+54,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+55,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+57,"io_br_info_taken", false,-1);
    tracep->declQuad(c+58,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+34,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+513,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+515,"io_pre_valid", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+535+i*2,"RAS", true,(i+0), 63,0);
    }
    tracep->declBus(c+543,"reg_head", false,-1, 2,0);
    tracep->declBus(c+544,"update_index", false,-1, 5,0);
    tracep->declArray(c+545,"update_btb_data", false,-1, 122,0);
    tracep->declBus(c+549,"update_pht_data", false,-1, 1,0);
    tracep->declBus(c+550,"index", false,-1, 5,0);
    tracep->declQuad(c+551,"tag", false,-1, 55,0);
    tracep->declBus(c+553,"pht_data", false,-1, 1,0);
    tracep->declBit(c+554,"pht_taken", false,-1);
    tracep->declArray(c+555,"btb_data", false,-1, 127,0);
    tracep->declBit(c+559,"btb_valid", false,-1);
    tracep->declQuad(c+560,"btb_tag", false,-1, 55,0);
    tracep->declQuad(c+562,"btb_target_next_pc", false,-1, 63,0);
    tracep->declBus(c+564,"btb_br_type", false,-1, 1,0);
    tracep->declBit(c+515,"pre_valid", false,-1);
    tracep->declBit(c+565,"is_br_return", false,-1);
    tracep->declQuad(c+566,"ras_ready", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+65,"io_flush", false,-1);
    tracep->declBit(c+36,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+691,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+48,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+692,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+512,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+66,"io_put_pc_ready", false,-1);
    tracep->declBit(c+67,"io_put_pc_valid", false,-1);
    tracep->declBus(c+68,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+69,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+71,"io_put_pc_bits_is_pre", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+568+i*2,"ibuf_pc", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+576+i*1,"ibuf_inst", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+580+i*1,"ibuf_is_pre", true,(i+0));
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+584+i*1,"ibuf_valid", true,(i+0));
    }
    tracep->declBus(c+588,"reg_head", false,-1, 1,0);
    tracep->declBus(c+589,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+590,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+854,"enq_size", false,-1);
    tracep->declBit(c+591,"can_deq", false,-1);
    tracep->declBus(c+693,"result_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+31,"io_flush", false,-1);
    tracep->declBit(c+32,"io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+33,"io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+34,"io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+36,"io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+37,"io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+38,"io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+40,"io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+42,"io_is_fence_i", false,-1);
    tracep->declBus(c+4,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+5,"io_sram_wen_0", false,-1);
    tracep->declBit(c+6,"io_sram_wen_1", false,-1);
    tracep->declArray(c+7,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+11,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+15,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+19,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+23,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+27,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+43,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+44,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+756,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+757,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+871,"cache_stage0_clock", false,-1);
    tracep->declBit(c+872,"cache_stage0_reset", false,-1);
    tracep->declBit(c+31,"cache_stage0_io_flush", false,-1);
    tracep->declBit(c+32,"cache_stage0_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+33,"cache_stage0_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+34,"cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+32,"cache_stage0_io_addr_ready", false,-1);
    tracep->declBit(c+592,"cache_stage0_io_addr_valid", false,-1);
    tracep->declQuad(c+593,"cache_stage0_io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+871,"cache_stage1_clock", false,-1);
    tracep->declBit(c+872,"cache_stage1_reset", false,-1);
    tracep->declBit(c+31,"cache_stage1_io_flush", false,-1);
    tracep->declBit(c+32,"cache_stage1_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+592,"cache_stage1_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+593,"cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+595,"cache_stage1_io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+596,"cache_stage1_io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+597,"cache_stage1_io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+598,"cache_stage1_io_sram_valid", false,-1);
    tracep->declArray(c+599,"cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+603,"cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+607,"cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+611,"cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+615,"cache_stage1_io_sram_ready", false,-1);
    tracep->declBit(c+616,"cache_stage1_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+617,"cache_stage1_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+618,"cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+620,"cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+596,"cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+621,"cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+623,"cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+597,"cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+624,"cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+871,"cache_stage2_clock", false,-1);
    tracep->declBit(c+872,"cache_stage2_reset", false,-1);
    tracep->declBit(c+31,"cache_stage2_io_flush", false,-1);
    tracep->declBit(c+616,"cache_stage2_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+617,"cache_stage2_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+618,"cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+620,"cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+596,"cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+621,"cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+623,"cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+597,"cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+624,"cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+43,"cache_stage2_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+44,"cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+756,"cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+757,"cache_stage2_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+626,"cache_stage2_io_sram_w_valid", false,-1);
    tracep->declBus(c+627,"cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+11,"cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+7,"cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+628,"cache_stage2_io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+36,"cache_stage2_io_rdata_ready", false,-1);
    tracep->declBit(c+37,"cache_stage2_io_rdata_valid", false,-1);
    tracep->declQuad(c+38,"cache_stage2_io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+40,"cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+629,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+631,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+633,"is_w_sram", false,-1);
    tracep->declBit(c+634,"is_sram0_write", false,-1);
    tracep->declBit(c+635,"is_sram1_write", false,-1);
    tracep->declQuad(c+636,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+638,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+639,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+640,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+641,"w_r_pass0_val", false,-1);
    tracep->declBit(c+642,"w_r_pass1_val", false,-1);
    tracep->declBit(c+615,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+31,"io_flush", false,-1);
    tracep->declBit(c+32,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+33,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+34,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+32,"io_addr_ready", false,-1);
    tracep->declBit(c+592,"io_addr_valid", false,-1);
    tracep->declQuad(c+593,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+592,"reg_valid", false,-1);
    tracep->declQuad(c+593,"reg_addr", false,-1, 63,0);
    tracep->declBit(c+643,"valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+31,"io_flush", false,-1);
    tracep->declBit(c+32,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+592,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+593,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+595,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+596,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+597,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+598,"io_sram_valid", false,-1);
    tracep->declArray(c+599,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+603,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+607,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+611,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+615,"io_sram_ready", false,-1);
    tracep->declBit(c+616,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+617,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+618,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+620,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+596,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+621,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+623,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+597,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+624,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+598,"valid", false,-1);
    tracep->declBit(c+32,"ready", false,-1);
    tracep->declQuad(c+618,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+644,"reg_valid", false,-1);
    tracep->declQuad(c+645,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+647,"reg_index", false,-1, 5,0);
    tracep->declBus(c+648,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+649,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+651,"tag_1", false,-1, 53,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBit(c+31,"io_flush", false,-1);
    tracep->declBit(c+616,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+617,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+618,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+620,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+596,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+621,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+623,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+597,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+624,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+44,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+708,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+756,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+757,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+626,"io_sram_w_valid", false,-1);
    tracep->declBus(c+627,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+11,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+7,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+628,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+36,"io_rdata_ready", false,-1);
    tracep->declBit(c+37,"io_rdata_valid", false,-1);
    tracep->declQuad(c+38,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+40,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+647,"index", false,-1, 5,0);
    tracep->declBit(c+653,"valid", false,-1);
    tracep->declBit(c+628,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+38,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+37,"reg_valid", false,-1);
    tracep->declBit(c+654,"reg_ready", false,-1);
    tracep->declQuad(c+655,"temp_addr", false,-1, 63,0);
    tracep->declQuad(c+44,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+43,"reg_r_valid", false,-1);
    tracep->declArray(c+11,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+626,"reg_cache_write", false,-1);
    tracep->declQuad(c+40,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+657,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+659,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+660,"reg_lru_1", false,-1, 63,0);
    tracep->declBit(c+662,"LRU_1", false,-1);
    tracep->declQuad(c+663,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+665,"neg_chose_bit", false,-1, 63,0);
    tracep->declBus(c+667,"reg_bus_state", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+4,"io_addr", false,-1, 5,0);
    tracep->declBit(c+5,"io_wen", false,-1);
    tracep->declArray(c+875,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+11,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+15,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+15,"Q", false,-1, 127,0);
    tracep->declArray(c+885,"bwen", false,-1, 127,0);
    tracep->declBit(c+634,"wen", false,-1);
    tracep->declArray(c+668,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+4,"io_addr", false,-1, 5,0);
    tracep->declBit(c+5,"io_wen", false,-1);
    tracep->declArray(c+875,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+7,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+19,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+19,"Q", false,-1, 127,0);
    tracep->declArray(c+885,"bwen", false,-1, 127,0);
    tracep->declBit(c+634,"wen", false,-1);
    tracep->declArray(c+672,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+4,"io_addr", false,-1, 5,0);
    tracep->declBit(c+6,"io_wen", false,-1);
    tracep->declArray(c+875,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+11,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+23,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+23,"Q", false,-1, 127,0);
    tracep->declArray(c+885,"bwen", false,-1, 127,0);
    tracep->declBit(c+635,"wen", false,-1);
    tracep->declArray(c+676,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+4,"io_addr", false,-1, 5,0);
    tracep->declBit(c+6,"io_wen", false,-1);
    tracep->declArray(c+875,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+7,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+27,"Q", false,-1, 127,0);
    tracep->declArray(c+885,"bwen", false,-1, 127,0);
    tracep->declBit(c+635,"wen", false,-1);
    tracep->declArray(c+680,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+711,"io_addr", false,-1, 5,0);
    tracep->declBit(c+712,"io_wen", false,-1);
    tracep->declArray(c+714,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+722,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+726,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+726,"Q", false,-1, 127,0);
    tracep->declArray(c+813,"bwen", false,-1, 127,0);
    tracep->declBit(c+822,"wen", false,-1);
    tracep->declArray(c+855,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+711,"io_addr", false,-1, 5,0);
    tracep->declBit(c+712,"io_wen", false,-1);
    tracep->declArray(c+875,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+718,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+730,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+730,"Q", false,-1, 127,0);
    tracep->declArray(c+885,"bwen", false,-1, 127,0);
    tracep->declBit(c+822,"wen", false,-1);
    tracep->declArray(c+859,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+711,"io_addr", false,-1, 5,0);
    tracep->declBit(c+713,"io_wen", false,-1);
    tracep->declArray(c+714,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+722,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+734,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+734,"Q", false,-1, 127,0);
    tracep->declArray(c+813,"bwen", false,-1, 127,0);
    tracep->declBit(c+823,"wen", false,-1);
    tracep->declArray(c+863,"read_sram", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+871,"clock", false,-1);
    tracep->declBit(c+872,"reset", false,-1);
    tracep->declBus(c+711,"io_addr", false,-1, 5,0);
    tracep->declBit(c+713,"io_wen", false,-1);
    tracep->declArray(c+875,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+718,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+738,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+738,"Q", false,-1, 127,0);
    tracep->declArray(c+885,"bwen", false,-1, 127,0);
    tracep->declBit(c+823,"wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp_haff02ae1__0;
    VlWide<4>/*127:0*/ __Vtemp_h5cafde3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h0490666a__0;
    VlWide<4>/*127:0*/ __Vtemp_hca3bc04b__0;
    VlWide<4>/*127:0*/ __Vtemp_h4060cfc7__0;
    VlWide<4>/*127:0*/ __Vtemp_h09a85685__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__0;
    VlWide<4>/*127:0*/ __Vtemp_hd09821c2__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
    bufp->fullBit(oldp+2,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
    bufp->fullBit(oldp+3,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
    bufp->fullCData(oldp+4,(vlSelf->riscv_soc__DOT__core_io_isram_addr),6);
    bufp->fullBit(oldp+5,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram0__DOT__wen)))));
    bufp->fullBit(oldp+6,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram2__DOT__wen)))));
    __Vtemp_h8800a5e4__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU));
    __Vtemp_h8800a5e4__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                         >> 0xaU) >> 0x20U));
    __Vtemp_h8800a5e4__0[2U] = 0U;
    __Vtemp_h8800a5e4__0[3U] = 0U;
    bufp->fullWData(oldp+7,(__Vtemp_h8800a5e4__0),128);
    bufp->fullWData(oldp+11,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
    bufp->fullWData(oldp+15,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
    bufp->fullWData(oldp+19,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
    bufp->fullWData(oldp+23,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
    bufp->fullWData(oldp+27,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
    bufp->fullBit(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush));
    bufp->fullBit(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready));
    bufp->fullBit(oldp+33,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
    bufp->fullQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
    bufp->fullBit(oldp+36,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    bufp->fullBit(oldp+37,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    bufp->fullQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
    bufp->fullQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
    bufp->fullBit(oldp+43,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    bufp->fullQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
    bufp->fullBit(oldp+47,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    bufp->fullQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
    bufp->fullQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
    bufp->fullBit(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    bufp->fullBit(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
    bufp->fullBit(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
    bufp->fullQData(oldp+55,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
    bufp->fullBit(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
    bufp->fullQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
    bufp->fullBit(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid));
    bufp->fullQData(oldp+61,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                               ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                              [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                               : 0ULL)),64);
    bufp->fullQData(oldp+63,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
    bufp->fullBit(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush));
    bufp->fullBit(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    bufp->fullBit(oldp+67,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid));
    bufp->fullIData(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst),32);
    bufp->fullQData(oldp+69,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                             [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
    bufp->fullBit(oldp+71,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre
                           [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]));
    bufp->fullBit(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    bufp->fullCData(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
    bufp->fullCData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
    bufp->fullCData(oldp+75,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
    bufp->fullQData(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
    bufp->fullCData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
    bufp->fullQData(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
    bufp->fullIData(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
    bufp->fullQData(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
    bufp->fullIData(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
    bufp->fullCData(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
    bufp->fullBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
    bufp->fullBit(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
    bufp->fullSData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+91,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                            <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
    bufp->fullBit(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
    bufp->fullQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
    bufp->fullQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie),64);
    bufp->fullQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
    bufp->fullQData(oldp+99,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                               : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
    bufp->fullBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
    bufp->fullCData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
    bufp->fullQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
    bufp->fullBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
    bufp->fullSData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
    bufp->fullBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
    bufp->fullBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
    bufp->fullCData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
    bufp->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
    bufp->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
    bufp->fullBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
    bufp->fullIData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
    bufp->fullBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    bufp->fullCData(oldp+120,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0xfU))),5);
    bufp->fullQData(oldp+121,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xfU)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                               [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xfU))])),64);
    bufp->fullCData(oldp+123,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+124,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                               [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0x14U))])),64);
    bufp->fullSData(oldp+126,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+127,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
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
    bufp->fullQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
    bufp->fullQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
    bufp->fullBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    bufp->fullCData(oldp+134,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
    bufp->fullQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[0]),64);
    bufp->fullQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[1]),64);
    bufp->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[2]),64);
    bufp->fullQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[3]),64);
    bufp->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[4]),64);
    bufp->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[5]),64);
    bufp->fullQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[6]),64);
    bufp->fullQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[7]),64);
    bufp->fullQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[8]),64);
    bufp->fullQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[9]),64);
    bufp->fullQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[10]),64);
    bufp->fullQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[11]),64);
    bufp->fullQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[12]),64);
    bufp->fullQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[13]),64);
    bufp->fullQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[14]),64);
    bufp->fullQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[15]),64);
    bufp->fullQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[16]),64);
    bufp->fullQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[17]),64);
    bufp->fullQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[18]),64);
    bufp->fullQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[19]),64);
    bufp->fullQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[20]),64);
    bufp->fullQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[21]),64);
    bufp->fullQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[22]),64);
    bufp->fullQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[23]),64);
    bufp->fullQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[24]),64);
    bufp->fullQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[25]),64);
    bufp->fullQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[26]),64);
    bufp->fullQData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[27]),64);
    bufp->fullQData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[28]),64);
    bufp->fullQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[29]),64);
    bufp->fullQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[30]),64);
    bufp->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[31]),64);
    bufp->fullQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                              [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                              [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit),64);
    bufp->fullQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),64);
    bufp->fullQData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
    bufp->fullQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
    bufp->fullQData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq),64);
    bufp->fullQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral),64);
    bufp->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
    bufp->fullQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
    bufp->fullQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
    bufp->fullQData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
    bufp->fullQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
    bufp->fullQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
    bufp->fullQData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
    bufp->fullQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
    bufp->fullQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
    bufp->fullQData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
    bufp->fullQData(oldp+234,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
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
    bufp->fullBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
    bufp->fullCData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
    bufp->fullCData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
    bufp->fullBit(oldp+239,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    bufp->fullCData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
    bufp->fullBit(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
    bufp->fullBit(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
    bufp->fullBit(oldp+243,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU))));
    bufp->fullQData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
    bufp->fullQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
    bufp->fullQData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
    bufp->fullQData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
    bufp->fullCData(oldp+254,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+255,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
    bufp->fullCData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
    bufp->fullBit(oldp+258,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+259,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU))));
    bufp->fullBit(oldp+260,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 0xeU)))));
    bufp->fullCData(oldp+261,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? ((0x60U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xfU)) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))),7);
    bufp->fullCData(oldp+262,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? 0U : 5U)),3);
    bufp->fullBit(oldp+263,((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+264,(((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xcU))) 
                             & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 0xeU)))));
    bufp->fullCData(oldp+265,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 3U : 0xcU)),4);
    bufp->fullBit(oldp+266,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 5U)))));
    bufp->fullBit(oldp+267,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullCData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
    bufp->fullCData(oldp+269,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                : ((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
    bufp->fullCData(oldp+270,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 6U : (((1U == (7U 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0xcU))))
                                         ? 4U : 0xcU))),4);
    bufp->fullBit(oldp+271,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                   >> 5U))));
    bufp->fullCData(oldp+272,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? ((0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                    ? 3U : 2U) : 2U)),2);
    bufp->fullCData(oldp+273,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 0x4eU : 0x4aU)),7);
    bufp->fullCData(oldp+274,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                ? 2U : 0xcU)),4);
    bufp->fullBit(oldp+275,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 3U)))));
    bufp->fullCData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
    bufp->fullBit(oldp+277,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
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
    bufp->fullBit(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
    bufp->fullBit(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
    bufp->fullBit(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    bufp->fullBit(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid));
    bufp->fullBit(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
    bufp->fullQData(oldp+283,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+285,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
    bufp->fullQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
    bufp->fullQData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
    bufp->fullQData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
    bufp->fullQData(oldp+292,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
    bufp->fullBit(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    bufp->fullQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullBit(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    bufp->fullQData(oldp+300,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
    bufp->fullBit(oldp+302,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+303,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    bufp->fullQData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
    bufp->fullBit(oldp+307,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    bufp->fullQData(oldp+308,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
    bufp->fullSData(oldp+310,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    bufp->fullCData(oldp+312,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
    bufp->fullBit(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
    bufp->fullBit(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullCData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullBit(oldp+316,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
    bufp->fullBit(oldp+317,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+318,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+319,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U))));
    bufp->fullCData(oldp+320,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
    bufp->fullBit(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    bufp->fullBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    bufp->fullBit(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
    bufp->fullBit(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+334,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    bufp->fullQData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullQData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
    bufp->fullBit(oldp+341,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U)))));
    bufp->fullQData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+344,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 6U))));
    bufp->fullBit(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
    bufp->fullQData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullQData(oldp+348,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
    bufp->fullWData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
    bufp->fullBit(oldp+353,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
    bufp->fullBit(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
    bufp->fullWData(oldp+356,(__Vtemp_hfddea7ef__0),127);
    bufp->fullQData(oldp+360,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+362,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+364,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                     ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
    bufp->fullQData(oldp+366,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+368,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
    bufp->fullBit(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    bufp->fullQData(oldp+370,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
    __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                        >> 0x20U));
    __Vtemp_h6618c490__0[2U] = 1U;
    bufp->fullWData(oldp+372,(__Vtemp_h6618c490__0),65);
    bufp->fullQData(oldp+375,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        __Vtemp_h4825144c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
        __Vtemp_h4825144c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
        __Vtemp_h4825144c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
    } else {
        __Vtemp_h4825144c__0[0U] = 0U;
        __Vtemp_h4825144c__0[1U] = 0U;
        __Vtemp_h4825144c__0[2U] = 0U;
    }
    bufp->fullWData(oldp+377,(__Vtemp_h4825144c__0),65);
    bufp->fullQData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullQData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
    bufp->fullBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
    bufp->fullBit(oldp+385,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid) 
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
    bufp->fullQData(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullQData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullQData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
    bufp->fullBit(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    bufp->fullWData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
    bufp->fullBit(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullBit(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
    bufp->fullQData(oldp+406,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullBit(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
    bufp->fullQData(oldp+411,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
    bufp->fullBit(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullBit(oldp+415,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U)))));
    bufp->fullWData(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
    bufp->fullWData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
    bufp->fullWData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
    bufp->fullWData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
    bufp->fullWData(oldp+437,(__Vtemp_h28f9f554__0),65);
    bufp->fullCData(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    bufp->fullWData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
    bufp->fullBit(oldp+448,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
    bufp->fullBit(oldp+449,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                      ^ __Vtemp_h2ede82b0__0[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                        ^ __Vtemp_h2ede82b0__0[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                       ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
    bufp->fullBit(oldp+450,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    bufp->fullBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
    bufp->fullBit(oldp+452,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
    bufp->fullBit(oldp+453,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                   >> 3U))));
    bufp->fullQData(oldp+454,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullQData(oldp+456,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+458,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))));
    bufp->fullBit(oldp+459,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullWData(oldp+460,(__Vtemp_h3d72d354__0),130);
    bufp->fullWData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
    bufp->fullWData(oldp+468,(__Vtemp_h3364f91c__0),67);
    bufp->fullCData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
    bufp->fullWData(oldp+486,(__Vtemp_hf484a493__0),131);
    bufp->fullCData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullBit(oldp+492,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                          >> 2U)))));
    bufp->fullBit(oldp+493,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 4U))));
    bufp->fullQData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullQData(oldp+501,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+503,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+504,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+505,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+506,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+507,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))) 
                             | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    bufp->fullCData(oldp+508,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
    bufp->fullBit(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullQData(oldp+510,(((0xffffffffffffff77ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                               | (QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                              >> 7U)))
                                                   ? 0x88U
                                                   : 0x80U))))),64);
    bufp->fullBit(oldp+512,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [3U] : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                             [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail])));
    bufp->fullQData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullBit(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[0]),64);
    bufp->fullQData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[1]),64);
    bufp->fullQData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[2]),64);
    bufp->fullQData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[3]),64);
    bufp->fullCData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[0]));
    bufp->fullBit(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[1]));
    bufp->fullBit(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[2]));
    bufp->fullBit(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[3]));
    bufp->fullQData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
    bufp->fullQData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
    bufp->fullQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
    bufp->fullQData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
    bufp->fullCData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullCData(oldp+544,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
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
    bufp->fullWData(oldp+545,(__Vtemp_h643ad04b__0),123);
    bufp->fullCData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data),2);
    bufp->fullCData(oldp+550,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 3U)))),6);
    bufp->fullQData(oldp+551,(((0xfffffffffffffeULL 
                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 8U)) | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                         >> 2U))))))),56);
    bufp->fullCData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                              [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 3U)))]),2);
    bufp->fullBit(oldp+554,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                   [(0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 3U)))] 
                                   >> 1U))));
    bufp->fullWData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data),128);
    bufp->fullBit(oldp+559,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
                                   >> 0x1aU))));
    bufp->fullQData(oldp+560,((0xffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                                >> 2U)))),56);
    bufp->fullQData(oldp+562,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])) 
                                                >> 2U)))),64);
    bufp->fullCData(oldp+564,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])),2);
    bufp->fullBit(oldp+565,((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U]))));
    bufp->fullQData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                              [(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))]),64);
    bufp->fullQData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
    bufp->fullQData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
    bufp->fullQData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
    bufp->fullQData(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
    bufp->fullIData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
    bufp->fullIData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
    bufp->fullIData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
    bufp->fullIData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
    bufp->fullBit(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[0]));
    bufp->fullBit(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[1]));
    bufp->fullBit(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[2]));
    bufp->fullBit(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[3]));
    bufp->fullBit(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[0]));
    bufp->fullBit(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[1]));
    bufp->fullBit(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[2]));
    bufp->fullBit(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[3]));
    bufp->fullCData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
    bufp->fullBit(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullCData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    bufp->fullBit(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullWData(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
    bufp->fullWData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
    bufp->fullWData(oldp+607,(__Vtemp_h96d8aca3__0),128);
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
    bufp->fullWData(oldp+611,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+616,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullBit(oldp+617,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+621,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+624,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+627,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullBit(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+634,(vlSelf->riscv_soc__DOT__sram0__DOT__wen));
    bufp->fullBit(oldp+635,(vlSelf->riscv_soc__DOT__sram2__DOT__wen));
    bufp->fullQData(oldp+636,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullBit(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+643,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
    bufp->fullBit(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullQData(oldp+645,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+647,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+648,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+649,((0x3fffffffffffffULL 
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
    bufp->fullQData(oldp+651,((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
    bufp->fullBit(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+655,((0xfffffffffffffff0ULL 
                               & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
    bufp->fullQData(oldp+657,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+659,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullBit(oldp+662,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
    bufp->fullQData(oldp+663,((1ULL << (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
    bufp->fullQData(oldp+665,((~ (1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
    bufp->fullCData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
    __Vtemp_h7748dece__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_h7748dece__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_h7748dece__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_h7748dece__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+668,(__Vtemp_h7748dece__0),128);
    __Vtemp_h8b37abc5__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_h8b37abc5__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_h8b37abc5__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_h8b37abc5__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+672,(__Vtemp_h8b37abc5__0),128);
    __Vtemp_he6da4d43__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_he6da4d43__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_he6da4d43__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_he6da4d43__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+676,(__Vtemp_he6da4d43__0),128);
    __Vtemp_ha7b78b5e__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
    __Vtemp_ha7b78b5e__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
    __Vtemp_ha7b78b5e__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
    __Vtemp_ha7b78b5e__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
        [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
    bufp->fullWData(oldp+680,(__Vtemp_ha7b78b5e__0),128);
    bufp->fullBit(oldp+684,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
    bufp->fullBit(oldp+685,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready))));
    bufp->fullBit(oldp+686,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) ? 
                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
    bufp->fullBit(oldp+687,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullBit(oldp+688,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullQData(oldp+689,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
    bufp->fullBit(oldp+691,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+692,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                              >> 2U)))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
                                           >> 0x20U))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data))),32);
    bufp->fullCData(oldp+693,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                      + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                     - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
    bufp->fullBit(oldp+694,(vlSelf->riscv_soc__DOT__core_io_axi_bus_aw_valid));
    bufp->fullQData(oldp+695,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                    : 0ULL))),64);
    bufp->fullBit(oldp+697,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
    bufp->fullBit(oldp+698,(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid));
    bufp->fullQData(oldp+699,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                    : 0ULL))),64);
    bufp->fullCData(oldp+701,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                ? 0xffU : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                            ? (0xffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))
                                            : 0U))),8);
    bufp->fullBit(oldp+702,(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_bits_wlast));
    bufp->fullBit(oldp+703,(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid));
    bufp->fullQData(oldp+704,(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr),64);
    bufp->fullCData(oldp+706,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                               | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
    bufp->fullBit(oldp+707,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    bufp->fullQData(oldp+708,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_data),64);
    bufp->fullBit(oldp+710,(vlSelf->riscv_soc__DOT__core_io_axi_bus_r_bits_rlast));
    bufp->fullCData(oldp+711,(vlSelf->riscv_soc__DOT__core_io_dsram_addr),6);
    bufp->fullBit(oldp+712,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram4__DOT__wen)))));
    bufp->fullBit(oldp+713,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram6__DOT__wen)))));
    __Vtemp_haff02ae1__0[0U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[0U]);
    __Vtemp_haff02ae1__0[1U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[1U]);
    __Vtemp_haff02ae1__0[2U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[2U]);
    __Vtemp_haff02ae1__0[3U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[3U]);
    bufp->fullWData(oldp+714,(__Vtemp_haff02ae1__0),128);
    __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
    __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                        >> 0x20U));
    __Vtemp_h5cafde3d__0[2U] = 0U;
    __Vtemp_h5cafde3d__0[3U] = 0U;
    bufp->fullWData(oldp+718,(__Vtemp_h5cafde3d__0),128);
    bufp->fullWData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
    bufp->fullWData(oldp+726,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
    bufp->fullWData(oldp+730,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
    bufp->fullWData(oldp+734,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
    bufp->fullWData(oldp+738,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
    bufp->fullQData(oldp+742,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                : vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr)),64);
    bufp->fullQData(oldp+744,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
    bufp->fullQData(oldp+746,((((QData)((IData)((((
                                                   ((0U 
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
    bufp->fullBit(oldp+748,(((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
    bufp->fullQData(oldp+749,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
    bufp->fullCData(oldp+751,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
    bufp->fullBit(oldp+752,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    bufp->fullBit(oldp+753,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
    bufp->fullIData(oldp+754,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                  | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                     & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                >> 3U))))
                                  ? 0xffU : 0U) << 0x18U) 
                               | (((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                     | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                        & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                   >> 2U))))
                                     ? 0xffU : 0U) 
                                   << 0x10U) | ((((
                                                   (0U 
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
                                                    : 0U))))),32);
    bufp->fullIData(oldp+755,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                  | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                     & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                >> 7U))))
                                  ? 0xffU : 0U) << 0x18U) 
                               | (((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                     | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                        & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                   >> 6U))))
                                     ? 0xffU : 0U) 
                                   << 0x10U) | ((((
                                                   (0U 
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
                                                    : 0U))))),32);
    bufp->fullBit(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+758,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid))));
    bufp->fullQData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
    bufp->fullQData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
    bufp->fullQData(oldp+763,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
    bufp->fullCData(oldp+765,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
    bufp->fullBit(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
    bufp->fullBit(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    bufp->fullBit(oldp+768,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
    bufp->fullBit(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    bufp->fullQData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
    bufp->fullQData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
    bufp->fullBit(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
    bufp->fullBit(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    bufp->fullBit(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    bufp->fullQData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
    bufp->fullBit(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    bufp->fullBit(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    bufp->fullBit(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
    bufp->fullQData(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
    bufp->fullBit(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    bufp->fullQData(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
    bufp->fullBit(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
    bufp->fullBit(oldp+791,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullBit(oldp+792,((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullCData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
    bufp->fullCData(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
    bufp->fullBit(oldp+795,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
    bufp->fullQData(oldp+797,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+799,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+800,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
    bufp->fullCData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
    bufp->fullQData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
    bufp->fullCData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
    bufp->fullBit(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
    bufp->fullQData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
    bufp->fullCData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
    bufp->fullCData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
    bufp->fullBit(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    bufp->fullSData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
    bufp->fullBit(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    bufp->fullWData(oldp+813,(vlSelf->riscv_soc__DOT__sram4__DOT__bwen),128);
    bufp->fullWData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
    bufp->fullSData(oldp+821,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb) 
                                   << 8U) : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb))),16);
    bufp->fullBit(oldp+822,(vlSelf->riscv_soc__DOT__sram4__DOT__wen));
    bufp->fullBit(oldp+823,(vlSelf->riscv_soc__DOT__sram6__DOT__wen));
    bufp->fullQData(oldp+824,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
    bufp->fullQData(oldp+826,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
    bufp->fullQData(oldp+828,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
    bufp->fullQData(oldp+830,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
    bufp->fullBit(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
    bufp->fullBit(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
    bufp->fullBit(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0));
    bufp->fullBit(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2));
    bufp->fullQData(oldp+836,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))),64);
    bufp->fullQData(oldp+838,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))),64);
    bufp->fullBit(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__LRU_2));
    bufp->fullBit(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    bufp->fullCData(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
    bufp->fullBit(oldp+843,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    bufp->fullBit(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    bufp->fullBit(oldp+845,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0))));
    bufp->fullBit(oldp+846,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2))));
    bufp->fullQData(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__temp_addr),64);
    bufp->fullBit(oldp+849,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))));
    bufp->fullBit(oldp+850,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_b_fire));
    bufp->fullQData(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
    bufp->fullBit(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
    bufp->fullBit(oldp+854,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
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
    bufp->fullQData(oldp+873,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+875,(__Vtemp_hd56bd579__0),128);
    bufp->fullBit(oldp+879,(1U));
    bufp->fullCData(oldp+880,(0U),2);
    bufp->fullCData(oldp+881,(1U),2);
    bufp->fullCData(oldp+882,(2U),2);
    bufp->fullCData(oldp+883,(3U),2);
    bufp->fullBit(oldp+884,(0U));
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+885,(__Vtemp_hd09821c2__0),128);
}
