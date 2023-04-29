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
        tracep->declBit(c+3015,"clock", false,-1);
        tracep->declBit(c+3016,"reset", false,-1);
        tracep->declQuad(c+3017,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+3019,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+3021,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+3023,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+3025,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+3027,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+3029,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+3031,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+3033,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+3035,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+3037,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+3039,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+3041,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+3043,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+3045,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+3047,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+3049,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+3051,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+3053,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+3055,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+3057,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+3059,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+3061,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+3063,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+3065,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+3067,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+3069,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+3071,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+3073,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+3075,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+3077,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+3079,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+3081,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+3083,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+3084,"io_difftest_commit", false,-1);
        tracep->declQuad(c+3085,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3087,"io_difftest_irq", false,-1);
        tracep->declQuad(c+3088,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3090,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+3092,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+3094,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+3096,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+3015,"riscv_soc clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc reset", false,-1);
        tracep->declQuad(c+3017,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+3019,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+3021,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+3023,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+3025,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+3027,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+3029,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+3031,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+3033,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+3035,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+3037,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+3039,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+3041,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+3043,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+3045,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+3047,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+3049,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+3051,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+3053,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+3055,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+3057,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+3059,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+3061,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+3063,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+3065,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+3067,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+3069,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+3071,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+3073,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+3075,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+3077,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+3079,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+3081,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+3083,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+3084,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+3085,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3087,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+3088,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3090,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+3092,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+3094,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+3096,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+3015,"riscv_soc core clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core reset", false,-1);
        tracep->declBit(c+1,"riscv_soc core io_axi_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core io_axi_bus_w_ready", false,-1);
        tracep->declBit(c+3,"riscv_soc core io_axi_bus_b_valid", false,-1);
        tracep->declBit(c+4,"riscv_soc core io_axi_bus_ar_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc core io_axi_bus_r_valid", false,-1);
        tracep->declQuad(c+6,"riscv_soc core io_axi_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+8,"riscv_soc core io_axi_bus_r_bits_rlast", false,-1);
        tracep->declArray(c+9,"riscv_soc core io_sram0_rdata", false,-1, 127,0);
        tracep->declArray(c+13,"riscv_soc core io_sram1_rdata", false,-1, 127,0);
        tracep->declArray(c+17,"riscv_soc core io_sram2_rdata", false,-1, 127,0);
        tracep->declArray(c+21,"riscv_soc core io_sram3_rdata", false,-1, 127,0);
        tracep->declArray(c+25,"riscv_soc core io_sram4_rdata", false,-1, 127,0);
        tracep->declArray(c+29,"riscv_soc core io_sram5_rdata", false,-1, 127,0);
        tracep->declArray(c+33,"riscv_soc core io_sram6_rdata", false,-1, 127,0);
        tracep->declArray(c+37,"riscv_soc core io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+41,"riscv_soc core io_axi_bus_aw_valid", false,-1);
        tracep->declQuad(c+42,"riscv_soc core io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+44,"riscv_soc core io_axi_bus_w_valid", false,-1);
        tracep->declQuad(c+45,"riscv_soc core io_axi_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+47,"riscv_soc core io_axi_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+48,"riscv_soc core io_axi_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+49,"riscv_soc core io_axi_bus_ar_valid", false,-1);
        tracep->declQuad(c+50,"riscv_soc core io_axi_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+52,"riscv_soc core io_axi_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBus(c+53,"riscv_soc core io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+54,"riscv_soc core io_sram0_wen", false,-1);
        tracep->declArray(c+55,"riscv_soc core io_sram0_wdata", false,-1, 127,0);
        tracep->declBus(c+53,"riscv_soc core io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+54,"riscv_soc core io_sram1_wen", false,-1);
        tracep->declArray(c+59,"riscv_soc core io_sram1_wdata", false,-1, 127,0);
        tracep->declBus(c+53,"riscv_soc core io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+63,"riscv_soc core io_sram2_wen", false,-1);
        tracep->declArray(c+55,"riscv_soc core io_sram2_wdata", false,-1, 127,0);
        tracep->declBus(c+53,"riscv_soc core io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+63,"riscv_soc core io_sram3_wen", false,-1);
        tracep->declArray(c+59,"riscv_soc core io_sram3_wdata", false,-1, 127,0);
        tracep->declBus(c+64,"riscv_soc core io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+65,"riscv_soc core io_sram4_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core io_sram4_wdata", false,-1, 127,0);
        tracep->declBus(c+64,"riscv_soc core io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+65,"riscv_soc core io_sram5_wen", false,-1);
        tracep->declArray(c+74,"riscv_soc core io_sram5_wdata", false,-1, 127,0);
        tracep->declBus(c+64,"riscv_soc core io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+78,"riscv_soc core io_sram6_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core io_sram6_wdata", false,-1, 127,0);
        tracep->declBus(c+64,"riscv_soc core io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+78,"riscv_soc core io_sram7_wen", false,-1);
        tracep->declArray(c+74,"riscv_soc core io_sram7_wdata", false,-1, 127,0);
        tracep->declBit(c+3015,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+79,"riscv_soc core i_cache io_flush", false,-1);
        tracep->declBit(c+80,"riscv_soc core i_cache io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+81,"riscv_soc core i_cache io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core i_cache io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+84,"riscv_soc core i_cache io_is_fence_i", false,-1);
        tracep->declArray(c+9,"riscv_soc core i_cache io_sram0_data_rdata", false,-1, 127,0);
        tracep->declArray(c+13,"riscv_soc core i_cache io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declArray(c+17,"riscv_soc core i_cache io_sram2_data_rdata", false,-1, 127,0);
        tracep->declArray(c+21,"riscv_soc core i_cache io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declQuad(c+6,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+86,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+87,"riscv_soc core i_cache io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+88,"riscv_soc core i_cache io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core i_cache io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core i_cache io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBus(c+53,"riscv_soc core i_cache io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+54,"riscv_soc core i_cache io_sram0_data_wen", false,-1);
        tracep->declArray(c+55,"riscv_soc core i_cache io_sram0_data_wdata", false,-1, 127,0);
        tracep->declBus(c+53,"riscv_soc core i_cache io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+54,"riscv_soc core i_cache io_sram0_tag_wen", false,-1);
        tracep->declArray(c+59,"riscv_soc core i_cache io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declBus(c+53,"riscv_soc core i_cache io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+63,"riscv_soc core i_cache io_sram2_data_wen", false,-1);
        tracep->declArray(c+55,"riscv_soc core i_cache io_sram2_data_wdata", false,-1, 127,0);
        tracep->declBus(c+53,"riscv_soc core i_cache io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+63,"riscv_soc core i_cache io_sram2_tag_wen", false,-1);
        tracep->declArray(c+59,"riscv_soc core i_cache io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declBit(c+93,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+94,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core i_cache reg_sram1_valid", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core i_cache is_w_sram", false,-1);
        tracep->declBit(c+101,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declBit(c+102,"riscv_soc core i_cache is_sram1_write", false,-1);
        tracep->declBus(c+53,"riscv_soc core i_cache sram_addr", false,-1, 5,0);
        tracep->declBit(c+103,"riscv_soc core i_cache reg_temp_sram0_valid", false,-1);
        tracep->declBit(c+104,"riscv_soc core i_cache reg_temp_sram1_valid", false,-1);
        tracep->declBus(c+105,"riscv_soc core i_cache reg_temp_r_index", false,-1, 5,0);
        tracep->declBit(c+106,"riscv_soc core i_cache w_r_pass0_val", false,-1);
        tracep->declBit(c+107,"riscv_soc core i_cache w_r_pass1_val", false,-1);
        tracep->declBit(c+108,"riscv_soc core i_cache reg_sram_r_ready", false,-1);
        tracep->declQuad(c+109,"riscv_soc core i_cache unnamedblk1 unnamedblk2 chose_bit", false,-1, 63,0);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage0 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core i_cache cache_stage0 reset", false,-1);
        tracep->declBit(c+79,"riscv_soc core i_cache cache_stage0 io_flush", false,-1);
        tracep->declBit(c+80,"riscv_soc core i_cache cache_stage0 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+81,"riscv_soc core i_cache cache_stage0 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+87,"riscv_soc core i_cache cache_stage0 io_addr_ready", false,-1);
        tracep->declBit(c+87,"riscv_soc core i_cache cache_stage0 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+111,"riscv_soc core i_cache cache_stage0 io_addr_valid", false,-1);
        tracep->declQuad(c+112,"riscv_soc core i_cache cache_stage0 io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+111,"riscv_soc core i_cache cache_stage0 reg_valid", false,-1);
        tracep->declQuad(c+112,"riscv_soc core i_cache cache_stage0 reg_addr", false,-1, 63,0);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage1 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core i_cache cache_stage1 reset", false,-1);
        tracep->declBit(c+79,"riscv_soc core i_cache cache_stage1 io_flush", false,-1);
        tracep->declBit(c+111,"riscv_soc core i_cache cache_stage1 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+112,"riscv_soc core i_cache cache_stage1 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+114,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+115,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_1", false,-1);
        tracep->declArray(c+116,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+120,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+124,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+128,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+108,"riscv_soc core i_cache cache_stage1 io_sram_ready", false,-1);
        tracep->declBit(c+132,"riscv_soc core i_cache cache_stage1 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+87,"riscv_soc core i_cache cache_stage1 io_cpu_addr_ready", false,-1);
        tracep->declBus(c+133,"riscv_soc core i_cache cache_stage1 io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+134,"riscv_soc core i_cache cache_stage1 io_sram_valid", false,-1);
        tracep->declBit(c+135,"riscv_soc core i_cache cache_stage1 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+136,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+138,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+114,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+115,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+142,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+134,"riscv_soc core i_cache cache_stage1 valid", false,-1);
        tracep->declBit(c+87,"riscv_soc core i_cache cache_stage1 ready", false,-1);
        tracep->declQuad(c+136,"riscv_soc core i_cache cache_stage1 reg_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+144,"riscv_soc core i_cache cache_stage1 reg_valid", false,-1);
        tracep->declBit(c+3015,"riscv_soc core i_cache cache_stage2 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core i_cache cache_stage2 reset", false,-1);
        tracep->declBit(c+79,"riscv_soc core i_cache cache_stage2 io_flush", false,-1);
        tracep->declBit(c+135,"riscv_soc core i_cache cache_stage2 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+136,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+138,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+114,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+139,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+115,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+142,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declQuad(c+6,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+86,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+83,"riscv_soc core i_cache cache_stage2 io_rdata_ready", false,-1);
        tracep->declBit(c+132,"riscv_soc core i_cache cache_stage2 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+93,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+94,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declBit(c+145,"riscv_soc core i_cache cache_stage2 io_sram_w_valid", false,-1);
        tracep->declBus(c+146,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+55,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+59,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+147,"riscv_soc core i_cache cache_stage2 io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+88,"riscv_soc core i_cache cache_stage2 io_rdata_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core i_cache cache_stage2 io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core i_cache cache_stage2 io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+147,"riscv_soc core i_cache cache_stage2 reg_chosen_tag", false,-1);
        tracep->declQuad(c+89,"riscv_soc core i_cache cache_stage2 reg_rdata", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core i_cache cache_stage2 reg_valid", false,-1);
        tracep->declBit(c+148,"riscv_soc core i_cache cache_stage2 reg_ready", false,-1);
        tracep->declQuad(c+94,"riscv_soc core i_cache cache_stage2 reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core i_cache cache_stage2 reg_r_valid", false,-1);
        tracep->declArray(c+55,"riscv_soc core i_cache cache_stage2 reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+145,"riscv_soc core i_cache cache_stage2 reg_cache_write", false,-1);
        tracep->declQuad(c+91,"riscv_soc core i_cache cache_stage2 reg_cpu_addr", false,-1, 63,0);
        tracep->declQuad(c+149,"riscv_soc core i_cache cache_stage2 reg_lru_1", false,-1, 63,0);
        tracep->declBus(c+151,"riscv_soc core i_cache cache_stage2 reg_bus_state", false,-1, 1,0);
        tracep->declBit(c+152,"riscv_soc core i_cache cache_stage2 unnamedblk1 valid", false,-1);
        tracep->declQuad(c+153,"riscv_soc core i_cache cache_stage2 unnamedblk1 unnamedblk3 chose_bit", false,-1, 63,0);
        tracep->declBit(c+3015,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+155,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+160,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+161,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declArray(c+25,"riscv_soc core d_cache io_sram0_data_rdata", false,-1, 127,0);
        tracep->declArray(c+29,"riscv_soc core d_cache io_sram0_tag_rdata", false,-1, 127,0);
        tracep->declArray(c+33,"riscv_soc core d_cache io_sram2_data_rdata", false,-1, 127,0);
        tracep->declArray(c+37,"riscv_soc core d_cache io_sram2_tag_rdata", false,-1, 127,0);
        tracep->declBit(c+162,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+163,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declQuad(c+6,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+165,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declQuad(c+166,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core d_cache io_cpu_ready", false,-1);
        tracep->declBus(c+64,"riscv_soc core d_cache io_sram0_data_addr", false,-1, 5,0);
        tracep->declBit(c+65,"riscv_soc core d_cache io_sram0_data_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache io_sram0_data_wmask", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core d_cache io_sram0_data_wdata", false,-1, 127,0);
        tracep->declBus(c+64,"riscv_soc core d_cache io_sram0_tag_addr", false,-1, 5,0);
        tracep->declBit(c+65,"riscv_soc core d_cache io_sram0_tag_wen", false,-1);
        tracep->declArray(c+74,"riscv_soc core d_cache io_sram0_tag_wdata", false,-1, 127,0);
        tracep->declBus(c+64,"riscv_soc core d_cache io_sram2_data_addr", false,-1, 5,0);
        tracep->declBit(c+78,"riscv_soc core d_cache io_sram2_data_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc core d_cache io_sram2_data_wmask", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc core d_cache io_sram2_data_wdata", false,-1, 127,0);
        tracep->declBus(c+64,"riscv_soc core d_cache io_sram2_tag_addr", false,-1, 5,0);
        tracep->declBit(c+78,"riscv_soc core d_cache io_sram2_tag_wen", false,-1);
        tracep->declArray(c+74,"riscv_soc core d_cache io_sram2_tag_wdata", false,-1, 127,0);
        tracep->declBit(c+169,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+172,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+175,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+176,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declBus(c+178,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+179,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+181,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+182,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+183,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+185,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+186,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+168,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+166,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+187,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+188,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+70,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+189,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declArray(c+190,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declBit(c+194,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declBus(c+64,"riscv_soc core d_cache sram0_A", false,-1, 5,0);
        tracep->declQuad(c+195,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declBit(c+199,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+200,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+202,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+176,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+175,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+172,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+169,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+204,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+205,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+208,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+209,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+210,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declQuad(c+211,"riscv_soc core d_cache unnamedblk1 chose_bit", false,-1, 63,0);
        tracep->declBit(c+213,"riscv_soc core d_cache unnamedblk1 hit_0", false,-1);
        tracep->declBit(c+214,"riscv_soc core d_cache unnamedblk1 hit_2", false,-1);
        tracep->declBit(c+3015,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+93,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+94,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declBit(c+169,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+170,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+172,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+174,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+175,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+176,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declBit(c+215,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+81,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declBit(c+216,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+160,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+3,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+4,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+6,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+8,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declQuad(c+6,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+86,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+162,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+163,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declQuad(c+6,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+164,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+165,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declQuad(c+6,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declQuad(c+6,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+41,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+42,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+44,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+45,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+47,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+48,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+49,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+50,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+52,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+219,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+220,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+221,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBus(c+222,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBit(c+223,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+224,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+225,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+81,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core cross_bar_1 io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+226,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+160,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+87,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+88,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+89,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+166,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declQuad(c+6,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+217,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declQuad(c+6,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+218,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declQuad(c+227,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+230,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core cross_bar_1 io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+232,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+234,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declQuad(c+236,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+238,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+80,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+81,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+155,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+160,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+215,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+81,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declBit(c+216,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+160,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+239,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+240,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+241,"riscv_soc core fetch io_br_info_valid", false,-1);
        tracep->declBit(c+242,"riscv_soc core fetch io_br_info_mispredict", false,-1);
        tracep->declQuad(c+243,"riscv_soc core fetch io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+245,"riscv_soc core fetch io_br_info_taken", false,-1);
        tracep->declQuad(c+246,"riscv_soc core fetch io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+248,"riscv_soc core fetch io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+249,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+230,"riscv_soc core fetch io_cpu_addr_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core fetch io_cpu_data_valid", false,-1);
        tracep->declQuad(c+232,"riscv_soc core fetch io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+234,"riscv_soc core fetch io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declQuad(c+253,"riscv_soc core fetch io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core fetch io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+81,"riscv_soc core fetch io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core fetch io_cpu_data_ready", false,-1);
        tracep->declBit(c+255,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+256,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+257,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core fetch io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+79,"riscv_soc core fetch io_out_flush", false,-1);
        tracep->declQuad(c+81,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declBit(c+260,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+261,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+225,"riscv_soc core fetch reg_bus_valid", false,-1);
        tracep->declBus(c+263,"riscv_soc core fetch pre_info_head", false,-1, 1,0);
        tracep->declBus(c+264,"riscv_soc core fetch pre_info_tail", false,-1, 1,0);
        tracep->declQuad(c+265,"riscv_soc core fetch pre_info_fifo_0", false,-1, 63,0);
        tracep->declQuad(c+267,"riscv_soc core fetch pre_info_fifo_1", false,-1, 63,0);
        tracep->declQuad(c+269,"riscv_soc core fetch pre_info_fifo_2", false,-1, 63,0);
        tracep->declQuad(c+271,"riscv_soc core fetch pre_info_fifo_3", false,-1, 63,0);
        tracep->declBus(c+273,"riscv_soc core fetch is_pre_head", false,-1, 1,0);
        tracep->declBus(c+274,"riscv_soc core fetch is_pre_tail", false,-1, 1,0);
        tracep->declBit(c+275,"riscv_soc core fetch is_pre_fifo_0", false,-1);
        tracep->declBit(c+276,"riscv_soc core fetch is_pre_fifo_1", false,-1);
        tracep->declBit(c+277,"riscv_soc core fetch is_pre_fifo_2", false,-1);
        tracep->declBit(c+278,"riscv_soc core fetch is_pre_fifo_3", false,-1);
        tracep->declBit(c+279,"riscv_soc core fetch unnamedblk1 unnamedblk2 pre_enq", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+251,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+280,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+234,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+281,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+282,"riscv_soc core fetch ibuf io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+252,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+83,"riscv_soc core fetch ibuf io_cache_buf_ready", false,-1);
        tracep->declBit(c+255,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+256,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+257,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core fetch ibuf io_put_pc_bits_is_pre", false,-1);
        tracep->declQuad(c+283,"riscv_soc core fetch ibuf ibuf_pc_0", false,-1, 63,0);
        tracep->declQuad(c+285,"riscv_soc core fetch ibuf ibuf_pc_1", false,-1, 63,0);
        tracep->declQuad(c+287,"riscv_soc core fetch ibuf ibuf_pc_2", false,-1, 63,0);
        tracep->declQuad(c+289,"riscv_soc core fetch ibuf ibuf_pc_3", false,-1, 63,0);
        tracep->declBus(c+291,"riscv_soc core fetch ibuf ibuf_inst_0", false,-1, 31,0);
        tracep->declBus(c+292,"riscv_soc core fetch ibuf ibuf_inst_1", false,-1, 31,0);
        tracep->declBus(c+293,"riscv_soc core fetch ibuf ibuf_inst_2", false,-1, 31,0);
        tracep->declBus(c+294,"riscv_soc core fetch ibuf ibuf_inst_3", false,-1, 31,0);
        tracep->declBit(c+295,"riscv_soc core fetch ibuf ibuf_is_pre_0", false,-1);
        tracep->declBit(c+296,"riscv_soc core fetch ibuf ibuf_is_pre_1", false,-1);
        tracep->declBit(c+297,"riscv_soc core fetch ibuf ibuf_is_pre_2", false,-1);
        tracep->declBit(c+298,"riscv_soc core fetch ibuf ibuf_is_pre_3", false,-1);
        tracep->declBit(c+299,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+300,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+301,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+302,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+303,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+304,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBus(c+305,"riscv_soc core fetch ibuf reg_ibuf_size", false,-1, 2,0);
        tracep->declBit(c+83,"riscv_soc core fetch ibuf allow_in", false,-1);
        tracep->declBit(c+306,"riscv_soc core fetch ibuf unnamedblk1 enq_size", false,-1);
        tracep->declBit(c+307,"riscv_soc core fetch ibuf unnamedblk1 can_deq", false,-1);
        tracep->declBit(c+3015,"riscv_soc core fetch br_predictor clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core fetch br_predictor reset", false,-1);
        tracep->declBit(c+241,"riscv_soc core fetch br_predictor io_br_info_valid", false,-1);
        tracep->declBit(c+242,"riscv_soc core fetch br_predictor io_br_info_mispredict", false,-1);
        tracep->declQuad(c+243,"riscv_soc core fetch br_predictor io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+245,"riscv_soc core fetch br_predictor io_br_info_taken", false,-1);
        tracep->declQuad(c+246,"riscv_soc core fetch br_predictor io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_soc core fetch br_predictor io_pc", false,-1, 63,0);
        tracep->declQuad(c+308,"riscv_soc core fetch br_predictor io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+310,"riscv_soc core fetch br_predictor io_pre_valid", false,-1);
        tracep->declArray(c+311,"riscv_soc core fetch br_predictor BTB_0", false,-1, 127,0);
        tracep->declArray(c+315,"riscv_soc core fetch br_predictor BTB_1", false,-1, 127,0);
        tracep->declArray(c+319,"riscv_soc core fetch br_predictor BTB_2", false,-1, 127,0);
        tracep->declArray(c+323,"riscv_soc core fetch br_predictor BTB_3", false,-1, 127,0);
        tracep->declArray(c+327,"riscv_soc core fetch br_predictor BTB_4", false,-1, 127,0);
        tracep->declArray(c+331,"riscv_soc core fetch br_predictor BTB_5", false,-1, 127,0);
        tracep->declArray(c+335,"riscv_soc core fetch br_predictor BTB_6", false,-1, 127,0);
        tracep->declArray(c+339,"riscv_soc core fetch br_predictor BTB_7", false,-1, 127,0);
        tracep->declArray(c+343,"riscv_soc core fetch br_predictor BTB_8", false,-1, 127,0);
        tracep->declArray(c+347,"riscv_soc core fetch br_predictor BTB_9", false,-1, 127,0);
        tracep->declArray(c+351,"riscv_soc core fetch br_predictor BTB_10", false,-1, 127,0);
        tracep->declArray(c+355,"riscv_soc core fetch br_predictor BTB_11", false,-1, 127,0);
        tracep->declArray(c+359,"riscv_soc core fetch br_predictor BTB_12", false,-1, 127,0);
        tracep->declArray(c+363,"riscv_soc core fetch br_predictor BTB_13", false,-1, 127,0);
        tracep->declArray(c+367,"riscv_soc core fetch br_predictor BTB_14", false,-1, 127,0);
        tracep->declArray(c+371,"riscv_soc core fetch br_predictor BTB_15", false,-1, 127,0);
        tracep->declArray(c+375,"riscv_soc core fetch br_predictor BTB_16", false,-1, 127,0);
        tracep->declArray(c+379,"riscv_soc core fetch br_predictor BTB_17", false,-1, 127,0);
        tracep->declArray(c+383,"riscv_soc core fetch br_predictor BTB_18", false,-1, 127,0);
        tracep->declArray(c+387,"riscv_soc core fetch br_predictor BTB_19", false,-1, 127,0);
        tracep->declArray(c+391,"riscv_soc core fetch br_predictor BTB_20", false,-1, 127,0);
        tracep->declArray(c+395,"riscv_soc core fetch br_predictor BTB_21", false,-1, 127,0);
        tracep->declArray(c+399,"riscv_soc core fetch br_predictor BTB_22", false,-1, 127,0);
        tracep->declArray(c+403,"riscv_soc core fetch br_predictor BTB_23", false,-1, 127,0);
        tracep->declArray(c+407,"riscv_soc core fetch br_predictor BTB_24", false,-1, 127,0);
        tracep->declArray(c+411,"riscv_soc core fetch br_predictor BTB_25", false,-1, 127,0);
        tracep->declArray(c+415,"riscv_soc core fetch br_predictor BTB_26", false,-1, 127,0);
        tracep->declArray(c+419,"riscv_soc core fetch br_predictor BTB_27", false,-1, 127,0);
        tracep->declArray(c+423,"riscv_soc core fetch br_predictor BTB_28", false,-1, 127,0);
        tracep->declArray(c+427,"riscv_soc core fetch br_predictor BTB_29", false,-1, 127,0);
        tracep->declArray(c+431,"riscv_soc core fetch br_predictor BTB_30", false,-1, 127,0);
        tracep->declArray(c+435,"riscv_soc core fetch br_predictor BTB_31", false,-1, 127,0);
        tracep->declArray(c+439,"riscv_soc core fetch br_predictor BTB_32", false,-1, 127,0);
        tracep->declArray(c+443,"riscv_soc core fetch br_predictor BTB_33", false,-1, 127,0);
        tracep->declArray(c+447,"riscv_soc core fetch br_predictor BTB_34", false,-1, 127,0);
        tracep->declArray(c+451,"riscv_soc core fetch br_predictor BTB_35", false,-1, 127,0);
        tracep->declArray(c+455,"riscv_soc core fetch br_predictor BTB_36", false,-1, 127,0);
        tracep->declArray(c+459,"riscv_soc core fetch br_predictor BTB_37", false,-1, 127,0);
        tracep->declArray(c+463,"riscv_soc core fetch br_predictor BTB_38", false,-1, 127,0);
        tracep->declArray(c+467,"riscv_soc core fetch br_predictor BTB_39", false,-1, 127,0);
        tracep->declArray(c+471,"riscv_soc core fetch br_predictor BTB_40", false,-1, 127,0);
        tracep->declArray(c+475,"riscv_soc core fetch br_predictor BTB_41", false,-1, 127,0);
        tracep->declArray(c+479,"riscv_soc core fetch br_predictor BTB_42", false,-1, 127,0);
        tracep->declArray(c+483,"riscv_soc core fetch br_predictor BTB_43", false,-1, 127,0);
        tracep->declArray(c+487,"riscv_soc core fetch br_predictor BTB_44", false,-1, 127,0);
        tracep->declArray(c+491,"riscv_soc core fetch br_predictor BTB_45", false,-1, 127,0);
        tracep->declArray(c+495,"riscv_soc core fetch br_predictor BTB_46", false,-1, 127,0);
        tracep->declArray(c+499,"riscv_soc core fetch br_predictor BTB_47", false,-1, 127,0);
        tracep->declArray(c+503,"riscv_soc core fetch br_predictor BTB_48", false,-1, 127,0);
        tracep->declArray(c+507,"riscv_soc core fetch br_predictor BTB_49", false,-1, 127,0);
        tracep->declArray(c+511,"riscv_soc core fetch br_predictor BTB_50", false,-1, 127,0);
        tracep->declArray(c+515,"riscv_soc core fetch br_predictor BTB_51", false,-1, 127,0);
        tracep->declArray(c+519,"riscv_soc core fetch br_predictor BTB_52", false,-1, 127,0);
        tracep->declArray(c+523,"riscv_soc core fetch br_predictor BTB_53", false,-1, 127,0);
        tracep->declArray(c+527,"riscv_soc core fetch br_predictor BTB_54", false,-1, 127,0);
        tracep->declArray(c+531,"riscv_soc core fetch br_predictor BTB_55", false,-1, 127,0);
        tracep->declArray(c+535,"riscv_soc core fetch br_predictor BTB_56", false,-1, 127,0);
        tracep->declArray(c+539,"riscv_soc core fetch br_predictor BTB_57", false,-1, 127,0);
        tracep->declArray(c+543,"riscv_soc core fetch br_predictor BTB_58", false,-1, 127,0);
        tracep->declArray(c+547,"riscv_soc core fetch br_predictor BTB_59", false,-1, 127,0);
        tracep->declArray(c+551,"riscv_soc core fetch br_predictor BTB_60", false,-1, 127,0);
        tracep->declArray(c+555,"riscv_soc core fetch br_predictor BTB_61", false,-1, 127,0);
        tracep->declArray(c+559,"riscv_soc core fetch br_predictor BTB_62", false,-1, 127,0);
        tracep->declArray(c+563,"riscv_soc core fetch br_predictor BTB_63", false,-1, 127,0);
        tracep->declQuad(c+567,"riscv_soc core fetch br_predictor RAS_0", false,-1, 63,0);
        tracep->declQuad(c+569,"riscv_soc core fetch br_predictor RAS_1", false,-1, 63,0);
        tracep->declQuad(c+571,"riscv_soc core fetch br_predictor RAS_2", false,-1, 63,0);
        tracep->declQuad(c+573,"riscv_soc core fetch br_predictor RAS_3", false,-1, 63,0);
        tracep->declQuad(c+575,"riscv_soc core fetch br_predictor RAS_4", false,-1, 63,0);
        tracep->declQuad(c+577,"riscv_soc core fetch br_predictor RAS_5", false,-1, 63,0);
        tracep->declBus(c+579,"riscv_soc core fetch br_predictor PHT_0", false,-1, 1,0);
        tracep->declBus(c+580,"riscv_soc core fetch br_predictor PHT_1", false,-1, 1,0);
        tracep->declBus(c+581,"riscv_soc core fetch br_predictor PHT_2", false,-1, 1,0);
        tracep->declBus(c+582,"riscv_soc core fetch br_predictor PHT_3", false,-1, 1,0);
        tracep->declBus(c+583,"riscv_soc core fetch br_predictor PHT_4", false,-1, 1,0);
        tracep->declBus(c+584,"riscv_soc core fetch br_predictor PHT_5", false,-1, 1,0);
        tracep->declBus(c+585,"riscv_soc core fetch br_predictor PHT_6", false,-1, 1,0);
        tracep->declBus(c+586,"riscv_soc core fetch br_predictor PHT_7", false,-1, 1,0);
        tracep->declBus(c+587,"riscv_soc core fetch br_predictor PHT_8", false,-1, 1,0);
        tracep->declBus(c+588,"riscv_soc core fetch br_predictor PHT_9", false,-1, 1,0);
        tracep->declBus(c+589,"riscv_soc core fetch br_predictor PHT_10", false,-1, 1,0);
        tracep->declBus(c+590,"riscv_soc core fetch br_predictor PHT_11", false,-1, 1,0);
        tracep->declBus(c+591,"riscv_soc core fetch br_predictor PHT_12", false,-1, 1,0);
        tracep->declBus(c+592,"riscv_soc core fetch br_predictor PHT_13", false,-1, 1,0);
        tracep->declBus(c+593,"riscv_soc core fetch br_predictor PHT_14", false,-1, 1,0);
        tracep->declBus(c+594,"riscv_soc core fetch br_predictor PHT_15", false,-1, 1,0);
        tracep->declBus(c+595,"riscv_soc core fetch br_predictor PHT_16", false,-1, 1,0);
        tracep->declBus(c+596,"riscv_soc core fetch br_predictor PHT_17", false,-1, 1,0);
        tracep->declBus(c+597,"riscv_soc core fetch br_predictor PHT_18", false,-1, 1,0);
        tracep->declBus(c+598,"riscv_soc core fetch br_predictor PHT_19", false,-1, 1,0);
        tracep->declBus(c+599,"riscv_soc core fetch br_predictor PHT_20", false,-1, 1,0);
        tracep->declBus(c+600,"riscv_soc core fetch br_predictor PHT_21", false,-1, 1,0);
        tracep->declBus(c+601,"riscv_soc core fetch br_predictor PHT_22", false,-1, 1,0);
        tracep->declBus(c+602,"riscv_soc core fetch br_predictor PHT_23", false,-1, 1,0);
        tracep->declBus(c+603,"riscv_soc core fetch br_predictor PHT_24", false,-1, 1,0);
        tracep->declBus(c+604,"riscv_soc core fetch br_predictor PHT_25", false,-1, 1,0);
        tracep->declBus(c+605,"riscv_soc core fetch br_predictor PHT_26", false,-1, 1,0);
        tracep->declBus(c+606,"riscv_soc core fetch br_predictor PHT_27", false,-1, 1,0);
        tracep->declBus(c+607,"riscv_soc core fetch br_predictor PHT_28", false,-1, 1,0);
        tracep->declBus(c+608,"riscv_soc core fetch br_predictor PHT_29", false,-1, 1,0);
        tracep->declBus(c+609,"riscv_soc core fetch br_predictor PHT_30", false,-1, 1,0);
        tracep->declBus(c+610,"riscv_soc core fetch br_predictor PHT_31", false,-1, 1,0);
        tracep->declBus(c+611,"riscv_soc core fetch br_predictor PHT_32", false,-1, 1,0);
        tracep->declBus(c+612,"riscv_soc core fetch br_predictor PHT_33", false,-1, 1,0);
        tracep->declBus(c+613,"riscv_soc core fetch br_predictor PHT_34", false,-1, 1,0);
        tracep->declBus(c+614,"riscv_soc core fetch br_predictor PHT_35", false,-1, 1,0);
        tracep->declBus(c+615,"riscv_soc core fetch br_predictor PHT_36", false,-1, 1,0);
        tracep->declBus(c+616,"riscv_soc core fetch br_predictor PHT_37", false,-1, 1,0);
        tracep->declBus(c+617,"riscv_soc core fetch br_predictor PHT_38", false,-1, 1,0);
        tracep->declBus(c+618,"riscv_soc core fetch br_predictor PHT_39", false,-1, 1,0);
        tracep->declBus(c+619,"riscv_soc core fetch br_predictor PHT_40", false,-1, 1,0);
        tracep->declBus(c+620,"riscv_soc core fetch br_predictor PHT_41", false,-1, 1,0);
        tracep->declBus(c+621,"riscv_soc core fetch br_predictor PHT_42", false,-1, 1,0);
        tracep->declBus(c+622,"riscv_soc core fetch br_predictor PHT_43", false,-1, 1,0);
        tracep->declBus(c+623,"riscv_soc core fetch br_predictor PHT_44", false,-1, 1,0);
        tracep->declBus(c+624,"riscv_soc core fetch br_predictor PHT_45", false,-1, 1,0);
        tracep->declBus(c+625,"riscv_soc core fetch br_predictor PHT_46", false,-1, 1,0);
        tracep->declBus(c+626,"riscv_soc core fetch br_predictor PHT_47", false,-1, 1,0);
        tracep->declBus(c+627,"riscv_soc core fetch br_predictor PHT_48", false,-1, 1,0);
        tracep->declBus(c+628,"riscv_soc core fetch br_predictor PHT_49", false,-1, 1,0);
        tracep->declBus(c+629,"riscv_soc core fetch br_predictor PHT_50", false,-1, 1,0);
        tracep->declBus(c+630,"riscv_soc core fetch br_predictor PHT_51", false,-1, 1,0);
        tracep->declBus(c+631,"riscv_soc core fetch br_predictor PHT_52", false,-1, 1,0);
        tracep->declBus(c+632,"riscv_soc core fetch br_predictor PHT_53", false,-1, 1,0);
        tracep->declBus(c+633,"riscv_soc core fetch br_predictor PHT_54", false,-1, 1,0);
        tracep->declBus(c+634,"riscv_soc core fetch br_predictor PHT_55", false,-1, 1,0);
        tracep->declBus(c+635,"riscv_soc core fetch br_predictor PHT_56", false,-1, 1,0);
        tracep->declBus(c+636,"riscv_soc core fetch br_predictor PHT_57", false,-1, 1,0);
        tracep->declBus(c+637,"riscv_soc core fetch br_predictor PHT_58", false,-1, 1,0);
        tracep->declBus(c+638,"riscv_soc core fetch br_predictor PHT_59", false,-1, 1,0);
        tracep->declBus(c+639,"riscv_soc core fetch br_predictor PHT_60", false,-1, 1,0);
        tracep->declBus(c+640,"riscv_soc core fetch br_predictor PHT_61", false,-1, 1,0);
        tracep->declBus(c+641,"riscv_soc core fetch br_predictor PHT_62", false,-1, 1,0);
        tracep->declBus(c+642,"riscv_soc core fetch br_predictor PHT_63", false,-1, 1,0);
        tracep->declBus(c+643,"riscv_soc core fetch br_predictor reg_head", false,-1, 2,0);
        tracep->declBit(c+310,"riscv_soc core fetch br_predictor pre_valid", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+644,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+645,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+646,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+647,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+648,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+650,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+651,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+653,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+654,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+656,"riscv_soc core execute io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+657,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+658,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+659,"riscv_soc core execute io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+660,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+661,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+663,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+664,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+665,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+667,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+669,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+671,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declQuad(c+253,"riscv_soc core execute io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+236,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+238,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+252,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+673,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+674,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+675,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+677,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+678,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+679,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+681,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+682,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+683,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+684,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+685,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+687,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+689,"riscv_soc core execute io_commit", false,-1);
        tracep->declBus(c+690,"riscv_soc core execute io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+691,"riscv_soc core execute io_difftest_peripheral", false,-1);
        tracep->declQuad(c+249,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+251,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+84,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+241,"riscv_soc core execute io_br_info_valid", false,-1);
        tracep->declBit(c+242,"riscv_soc core execute io_br_info_mispredict", false,-1);
        tracep->declQuad(c+243,"riscv_soc core execute io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+245,"riscv_soc core execute io_br_info_taken", false,-1);
        tracep->declQuad(c+246,"riscv_soc core execute io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+248,"riscv_soc core execute io_get_pre_info_valid", false,-1);
        tracep->declBit(c+226,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+160,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+161,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBus(c+678,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+679,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+674,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+692,"riscv_soc core execute in_data_valid", false,-1);
        tracep->declQuad(c+693,"riscv_soc core execute rs1_data", false,-1, 63,0);
        tracep->declQuad(c+695,"riscv_soc core execute rs2_data", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+697,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBus(c+698,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+699,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+700,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBit(c+241,"riscv_soc core execute reg_br_valid", false,-1);
        tracep->declBit(c+242,"riscv_soc core execute reg_br_mispredict", false,-1);
        tracep->declQuad(c+243,"riscv_soc core execute reg_br_pc", false,-1, 63,0);
        tracep->declBit(c+245,"riscv_soc core execute reg_taken", false,-1);
        tracep->declQuad(c+246,"riscv_soc core execute reg_br_next_pc", false,-1, 63,0);
        tracep->declBit(c+702,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+703,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+684,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+704,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+705,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+685,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+687,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declQuad(c+249,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+706,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+707,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+708,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBus(c+690,"riscv_soc core execute reg_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+709,"riscv_soc core execute unnamedblk1 time_irq", false,-1);
        tracep->declBit(c+710,"riscv_soc core execute unnamedblk1 soft_irq", false,-1);
        tracep->declBit(c+711,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBit(c+659,"riscv_soc core execute alu_exu io_is_pre", false,-1);
        tracep->declQuad(c+253,"riscv_soc core execute alu_exu io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+645,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+646,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+693,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+695,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+653,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+654,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declBit(c+712,"riscv_soc core execute alu_exu io_br_info_valid", false,-1);
        tracep->declBit(c+713,"riscv_soc core execute alu_exu io_br_info_mispredict", false,-1);
        tracep->declQuad(c+714,"riscv_soc core execute alu_exu io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+716,"riscv_soc core execute alu_exu io_br_info_taken", false,-1);
        tracep->declQuad(c+717,"riscv_soc core execute alu_exu io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+248,"riscv_soc core execute alu_exu io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+719,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+713,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+717,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+721,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+723,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+725,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+727,"riscv_soc core execute alu_exu is_sra", false,-1);
        tracep->declQuad(c+728,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declBit(c+730,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+731,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+732,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declBit(c+248,"riscv_soc core execute alu_exu is_pre", false,-1);
        tracep->declBit(c+736,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declArray(c+737,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declQuad(c+740,"riscv_soc core execute alu_exu op_pc_4", false,-1, 63,0);
        tracep->declQuad(c+742,"riscv_soc core execute alu_exu dst_data", false,-1, 63,0);
        tracep->declBit(c+712,"riscv_soc core execute alu_exu br_valid", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+744,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+646,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+693,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+695,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+653,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+236,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+238,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declQuad(c+745,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+747,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+748,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+226,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+160,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+161,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+691,"riscv_soc core execute mem_exu io_difftest_peripheral", false,-1);
        tracep->declBit(c+748,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+749,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+751,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+753,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+754,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+755,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+745,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+747,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBus(c+756,"riscv_soc core execute mem_exu reg_exuType", false,-1, 6,0);
        tracep->declBit(c+691,"riscv_soc core execute mem_exu reg_difftest_peripheral", false,-1);
        tracep->declQuad(c+757,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+759,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declBit(c+760,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+761,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+765,"riscv_soc core execute mem_exu chose_chancel", false,-1);
        tracep->declQuad(c+766,"riscv_soc core execute mem_exu unnamedblk1 unnamedblk2 unnamedblk3 mem_r_data", false,-1, 63,0);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+768,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+646,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+693,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+695,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+769,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+771,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+772,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+773,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+693,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+695,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+646,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+774,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+776,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+777,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declArray(c+778,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+781,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+784,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+787,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declBus(c+790,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+791,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+792,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declBit(c+776,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+777,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declArray(c+793,"riscv_soc core execute mu_exu div unnamedblk1 dividend", false,-1, 64,0);
        tracep->declArray(c+796,"riscv_soc core execute mu_exu div unnamedblk1 divisor", false,-1, 64,0);
        tracep->declArray(c+799,"riscv_soc core execute mu_exu div unnamedblk1 rem", false,-1, 64,0);
        tracep->declArray(c+802,"riscv_soc core execute mu_exu div unnamedblk1 neg_divisor", false,-1, 64,0);
        tracep->declBit(c+3015,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+805,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+693,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+695,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+646,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+806,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+808,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+809,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+809,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+810,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+811,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+814,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+819,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+824,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+808,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declBus(c+825,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declArray(c+826,"riscv_soc core execute mu_exu mul unnamedblk1 unnamedblk2 mul_data2", false,-1, 64,0);
        tracep->declBit(c+829,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+646,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+830,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+660,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+653,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+693,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+669,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+665,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+830,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+832,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+833,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+835,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+836,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+837,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+838,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+669,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+839,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+841,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+843,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declBit(c+845,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+846,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+847,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declBit(c+3015,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+255,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+256,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+257,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core decode io_get_inst_bits_is_pre", false,-1);
        tracep->declQuad(c+848,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+850,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+852,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+252,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+251,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+252,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBus(c+854,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+855,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+856,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declBit(c+644,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+645,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+646,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+647,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+648,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+650,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+651,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+653,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+654,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+656,"riscv_soc core decode io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+657,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+658,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+659,"riscv_soc core decode io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+660,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+661,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+644,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+645,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+646,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+647,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+648,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+650,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+651,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+653,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+654,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+656,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+657,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+658,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+660,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+661,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+659,"riscv_soc core decode reg_is_pre", false,-1);
        tracep->declBus(c+857,"riscv_soc core decode unnamedblk1 instType", false,-1, 3,0);
        tracep->declBit(c+3015,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+854,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+855,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+673,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+674,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+675,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+856,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declBit(c+677,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+678,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+679,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+681,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+682,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+683,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+684,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+685,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+687,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+689,"riscv_soc core commit io_commit", false,-1);
        tracep->declBus(c+690,"riscv_soc core commit io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+691,"riscv_soc core commit io_difftest_peripheral", false,-1);
        tracep->declQuad(c+848,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+850,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+852,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declQuad(c+671,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+669,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+665,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+667,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declQuad(c+858,"riscv_soc core commit reg_file_0", false,-1, 63,0);
        tracep->declQuad(c+860,"riscv_soc core commit reg_file_1", false,-1, 63,0);
        tracep->declQuad(c+862,"riscv_soc core commit reg_file_2", false,-1, 63,0);
        tracep->declQuad(c+864,"riscv_soc core commit reg_file_3", false,-1, 63,0);
        tracep->declQuad(c+866,"riscv_soc core commit reg_file_4", false,-1, 63,0);
        tracep->declQuad(c+868,"riscv_soc core commit reg_file_5", false,-1, 63,0);
        tracep->declQuad(c+870,"riscv_soc core commit reg_file_6", false,-1, 63,0);
        tracep->declQuad(c+872,"riscv_soc core commit reg_file_7", false,-1, 63,0);
        tracep->declQuad(c+874,"riscv_soc core commit reg_file_8", false,-1, 63,0);
        tracep->declQuad(c+876,"riscv_soc core commit reg_file_9", false,-1, 63,0);
        tracep->declQuad(c+878,"riscv_soc core commit reg_file_10", false,-1, 63,0);
        tracep->declQuad(c+880,"riscv_soc core commit reg_file_11", false,-1, 63,0);
        tracep->declQuad(c+882,"riscv_soc core commit reg_file_12", false,-1, 63,0);
        tracep->declQuad(c+884,"riscv_soc core commit reg_file_13", false,-1, 63,0);
        tracep->declQuad(c+886,"riscv_soc core commit reg_file_14", false,-1, 63,0);
        tracep->declQuad(c+888,"riscv_soc core commit reg_file_15", false,-1, 63,0);
        tracep->declQuad(c+890,"riscv_soc core commit reg_file_16", false,-1, 63,0);
        tracep->declQuad(c+892,"riscv_soc core commit reg_file_17", false,-1, 63,0);
        tracep->declQuad(c+894,"riscv_soc core commit reg_file_18", false,-1, 63,0);
        tracep->declQuad(c+896,"riscv_soc core commit reg_file_19", false,-1, 63,0);
        tracep->declQuad(c+898,"riscv_soc core commit reg_file_20", false,-1, 63,0);
        tracep->declQuad(c+900,"riscv_soc core commit reg_file_21", false,-1, 63,0);
        tracep->declQuad(c+902,"riscv_soc core commit reg_file_22", false,-1, 63,0);
        tracep->declQuad(c+904,"riscv_soc core commit reg_file_23", false,-1, 63,0);
        tracep->declQuad(c+906,"riscv_soc core commit reg_file_24", false,-1, 63,0);
        tracep->declQuad(c+908,"riscv_soc core commit reg_file_25", false,-1, 63,0);
        tracep->declQuad(c+910,"riscv_soc core commit reg_file_26", false,-1, 63,0);
        tracep->declQuad(c+912,"riscv_soc core commit reg_file_27", false,-1, 63,0);
        tracep->declQuad(c+914,"riscv_soc core commit reg_file_28", false,-1, 63,0);
        tracep->declQuad(c+916,"riscv_soc core commit reg_file_29", false,-1, 63,0);
        tracep->declQuad(c+918,"riscv_soc core commit reg_file_30", false,-1, 63,0);
        tracep->declQuad(c+920,"riscv_soc core commit reg_file_31", false,-1, 63,0);
        tracep->declBit(c+922,"riscv_soc core commit difftest_commit", false,-1);
        tracep->declBus(c+923,"riscv_soc core commit difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+924,"riscv_soc core commit difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+926,"riscv_soc core commit inst_counter", false,-1, 63,0);
        tracep->declBit(c+928,"riscv_soc core commit difftest_irq", false,-1);
        tracep->declBit(c+929,"riscv_soc core commit difftest_peripheral", false,-1);
        tracep->declBit(c+3015,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+678,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+679,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+677,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+687,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+685,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+682,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+683,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+930,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+681,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+689,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+856,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+852,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+671,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+669,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+665,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+667,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declQuad(c+931,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+933,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+935,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+937,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+939,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+941,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+943,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+945,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+947,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declBit(c+949,"riscv_soc core commit csr_reg unnamedblk1 irq", false,-1);
        tracep->declBit(c+3015,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+239,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+156,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+161,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declQuad(c+227,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+664,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+663,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+664,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+950,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+952,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+229,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+227,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+954,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+3015,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc axi_ram reset", false,-1);
        tracep->declBit(c+41,"riscv_soc axi_ram io_ram_bus_aw_valid", false,-1);
        tracep->declQuad(c+42,"riscv_soc axi_ram io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+44,"riscv_soc axi_ram io_ram_bus_w_valid", false,-1);
        tracep->declQuad(c+45,"riscv_soc axi_ram io_ram_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+47,"riscv_soc axi_ram io_ram_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+48,"riscv_soc axi_ram io_ram_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+49,"riscv_soc axi_ram io_ram_bus_ar_valid", false,-1);
        tracep->declQuad(c+50,"riscv_soc axi_ram io_ram_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+52,"riscv_soc axi_ram io_ram_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+1,"riscv_soc axi_ram io_ram_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc axi_ram io_ram_bus_w_ready", false,-1);
        tracep->declBit(c+3,"riscv_soc axi_ram io_ram_bus_b_valid", false,-1);
        tracep->declBit(c+4,"riscv_soc axi_ram io_ram_bus_ar_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram io_ram_bus_r_valid", false,-1);
        tracep->declQuad(c+6,"riscv_soc axi_ram io_ram_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+8,"riscv_soc axi_ram io_ram_bus_r_bits_rlast", false,-1);
        tracep->declQuad(c+955,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+957,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+4,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+958,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+959,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+961,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+3,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBit(c+3015,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+962,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+6,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+49,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+959,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+964,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+966,"riscv_soc axi_ram mem wen", false,-1);
        tracep->declBit(c+3015,"riscv_soc sram0 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc sram0 reset", false,-1);
        tracep->declBus(c+53,"riscv_soc sram0 io_addr", false,-1, 5,0);
        tracep->declBit(c+54,"riscv_soc sram0 io_wen", false,-1);
        tracep->declArray(c+3097,"riscv_soc sram0 io_wmask", false,-1, 127,0);
        tracep->declArray(c+55,"riscv_soc sram0 io_wdata", false,-1, 127,0);
        tracep->declArray(c+9,"riscv_soc sram0 io_rdata", false,-1, 127,0);
        tracep->declArray(c+9,"riscv_soc sram0 Q", false,-1, 127,0);
        tracep->declArray(c+967,"riscv_soc sram0 sram_0", false,-1, 127,0);
        tracep->declArray(c+971,"riscv_soc sram0 sram_1", false,-1, 127,0);
        tracep->declArray(c+975,"riscv_soc sram0 sram_2", false,-1, 127,0);
        tracep->declArray(c+979,"riscv_soc sram0 sram_3", false,-1, 127,0);
        tracep->declArray(c+983,"riscv_soc sram0 sram_4", false,-1, 127,0);
        tracep->declArray(c+987,"riscv_soc sram0 sram_5", false,-1, 127,0);
        tracep->declArray(c+991,"riscv_soc sram0 sram_6", false,-1, 127,0);
        tracep->declArray(c+995,"riscv_soc sram0 sram_7", false,-1, 127,0);
        tracep->declArray(c+999,"riscv_soc sram0 sram_8", false,-1, 127,0);
        tracep->declArray(c+1003,"riscv_soc sram0 sram_9", false,-1, 127,0);
        tracep->declArray(c+1007,"riscv_soc sram0 sram_10", false,-1, 127,0);
        tracep->declArray(c+1011,"riscv_soc sram0 sram_11", false,-1, 127,0);
        tracep->declArray(c+1015,"riscv_soc sram0 sram_12", false,-1, 127,0);
        tracep->declArray(c+1019,"riscv_soc sram0 sram_13", false,-1, 127,0);
        tracep->declArray(c+1023,"riscv_soc sram0 sram_14", false,-1, 127,0);
        tracep->declArray(c+1027,"riscv_soc sram0 sram_15", false,-1, 127,0);
        tracep->declArray(c+1031,"riscv_soc sram0 sram_16", false,-1, 127,0);
        tracep->declArray(c+1035,"riscv_soc sram0 sram_17", false,-1, 127,0);
        tracep->declArray(c+1039,"riscv_soc sram0 sram_18", false,-1, 127,0);
        tracep->declArray(c+1043,"riscv_soc sram0 sram_19", false,-1, 127,0);
        tracep->declArray(c+1047,"riscv_soc sram0 sram_20", false,-1, 127,0);
        tracep->declArray(c+1051,"riscv_soc sram0 sram_21", false,-1, 127,0);
        tracep->declArray(c+1055,"riscv_soc sram0 sram_22", false,-1, 127,0);
        tracep->declArray(c+1059,"riscv_soc sram0 sram_23", false,-1, 127,0);
        tracep->declArray(c+1063,"riscv_soc sram0 sram_24", false,-1, 127,0);
        tracep->declArray(c+1067,"riscv_soc sram0 sram_25", false,-1, 127,0);
        tracep->declArray(c+1071,"riscv_soc sram0 sram_26", false,-1, 127,0);
        tracep->declArray(c+1075,"riscv_soc sram0 sram_27", false,-1, 127,0);
        tracep->declArray(c+1079,"riscv_soc sram0 sram_28", false,-1, 127,0);
        tracep->declArray(c+1083,"riscv_soc sram0 sram_29", false,-1, 127,0);
        tracep->declArray(c+1087,"riscv_soc sram0 sram_30", false,-1, 127,0);
        tracep->declArray(c+1091,"riscv_soc sram0 sram_31", false,-1, 127,0);
        tracep->declArray(c+1095,"riscv_soc sram0 sram_32", false,-1, 127,0);
        tracep->declArray(c+1099,"riscv_soc sram0 sram_33", false,-1, 127,0);
        tracep->declArray(c+1103,"riscv_soc sram0 sram_34", false,-1, 127,0);
        tracep->declArray(c+1107,"riscv_soc sram0 sram_35", false,-1, 127,0);
        tracep->declArray(c+1111,"riscv_soc sram0 sram_36", false,-1, 127,0);
        tracep->declArray(c+1115,"riscv_soc sram0 sram_37", false,-1, 127,0);
        tracep->declArray(c+1119,"riscv_soc sram0 sram_38", false,-1, 127,0);
        tracep->declArray(c+1123,"riscv_soc sram0 sram_39", false,-1, 127,0);
        tracep->declArray(c+1127,"riscv_soc sram0 sram_40", false,-1, 127,0);
        tracep->declArray(c+1131,"riscv_soc sram0 sram_41", false,-1, 127,0);
        tracep->declArray(c+1135,"riscv_soc sram0 sram_42", false,-1, 127,0);
        tracep->declArray(c+1139,"riscv_soc sram0 sram_43", false,-1, 127,0);
        tracep->declArray(c+1143,"riscv_soc sram0 sram_44", false,-1, 127,0);
        tracep->declArray(c+1147,"riscv_soc sram0 sram_45", false,-1, 127,0);
        tracep->declArray(c+1151,"riscv_soc sram0 sram_46", false,-1, 127,0);
        tracep->declArray(c+1155,"riscv_soc sram0 sram_47", false,-1, 127,0);
        tracep->declArray(c+1159,"riscv_soc sram0 sram_48", false,-1, 127,0);
        tracep->declArray(c+1163,"riscv_soc sram0 sram_49", false,-1, 127,0);
        tracep->declArray(c+1167,"riscv_soc sram0 sram_50", false,-1, 127,0);
        tracep->declArray(c+1171,"riscv_soc sram0 sram_51", false,-1, 127,0);
        tracep->declArray(c+1175,"riscv_soc sram0 sram_52", false,-1, 127,0);
        tracep->declArray(c+1179,"riscv_soc sram0 sram_53", false,-1, 127,0);
        tracep->declArray(c+1183,"riscv_soc sram0 sram_54", false,-1, 127,0);
        tracep->declArray(c+1187,"riscv_soc sram0 sram_55", false,-1, 127,0);
        tracep->declArray(c+1191,"riscv_soc sram0 sram_56", false,-1, 127,0);
        tracep->declArray(c+1195,"riscv_soc sram0 sram_57", false,-1, 127,0);
        tracep->declArray(c+1199,"riscv_soc sram0 sram_58", false,-1, 127,0);
        tracep->declArray(c+1203,"riscv_soc sram0 sram_59", false,-1, 127,0);
        tracep->declArray(c+1207,"riscv_soc sram0 sram_60", false,-1, 127,0);
        tracep->declArray(c+1211,"riscv_soc sram0 sram_61", false,-1, 127,0);
        tracep->declArray(c+1215,"riscv_soc sram0 sram_62", false,-1, 127,0);
        tracep->declArray(c+1219,"riscv_soc sram0 sram_63", false,-1, 127,0);
        tracep->declBit(c+3015,"riscv_soc sram1 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc sram1 reset", false,-1);
        tracep->declBus(c+53,"riscv_soc sram1 io_addr", false,-1, 5,0);
        tracep->declBit(c+54,"riscv_soc sram1 io_wen", false,-1);
        tracep->declArray(c+3097,"riscv_soc sram1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+59,"riscv_soc sram1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+13,"riscv_soc sram1 io_rdata", false,-1, 127,0);
        tracep->declArray(c+13,"riscv_soc sram1 Q", false,-1, 127,0);
        tracep->declArray(c+1223,"riscv_soc sram1 sram_0", false,-1, 127,0);
        tracep->declArray(c+1227,"riscv_soc sram1 sram_1", false,-1, 127,0);
        tracep->declArray(c+1231,"riscv_soc sram1 sram_2", false,-1, 127,0);
        tracep->declArray(c+1235,"riscv_soc sram1 sram_3", false,-1, 127,0);
        tracep->declArray(c+1239,"riscv_soc sram1 sram_4", false,-1, 127,0);
        tracep->declArray(c+1243,"riscv_soc sram1 sram_5", false,-1, 127,0);
        tracep->declArray(c+1247,"riscv_soc sram1 sram_6", false,-1, 127,0);
        tracep->declArray(c+1251,"riscv_soc sram1 sram_7", false,-1, 127,0);
        tracep->declArray(c+1255,"riscv_soc sram1 sram_8", false,-1, 127,0);
        tracep->declArray(c+1259,"riscv_soc sram1 sram_9", false,-1, 127,0);
        tracep->declArray(c+1263,"riscv_soc sram1 sram_10", false,-1, 127,0);
        tracep->declArray(c+1267,"riscv_soc sram1 sram_11", false,-1, 127,0);
        tracep->declArray(c+1271,"riscv_soc sram1 sram_12", false,-1, 127,0);
        tracep->declArray(c+1275,"riscv_soc sram1 sram_13", false,-1, 127,0);
        tracep->declArray(c+1279,"riscv_soc sram1 sram_14", false,-1, 127,0);
        tracep->declArray(c+1283,"riscv_soc sram1 sram_15", false,-1, 127,0);
        tracep->declArray(c+1287,"riscv_soc sram1 sram_16", false,-1, 127,0);
        tracep->declArray(c+1291,"riscv_soc sram1 sram_17", false,-1, 127,0);
        tracep->declArray(c+1295,"riscv_soc sram1 sram_18", false,-1, 127,0);
        tracep->declArray(c+1299,"riscv_soc sram1 sram_19", false,-1, 127,0);
        tracep->declArray(c+1303,"riscv_soc sram1 sram_20", false,-1, 127,0);
        tracep->declArray(c+1307,"riscv_soc sram1 sram_21", false,-1, 127,0);
        tracep->declArray(c+1311,"riscv_soc sram1 sram_22", false,-1, 127,0);
        tracep->declArray(c+1315,"riscv_soc sram1 sram_23", false,-1, 127,0);
        tracep->declArray(c+1319,"riscv_soc sram1 sram_24", false,-1, 127,0);
        tracep->declArray(c+1323,"riscv_soc sram1 sram_25", false,-1, 127,0);
        tracep->declArray(c+1327,"riscv_soc sram1 sram_26", false,-1, 127,0);
        tracep->declArray(c+1331,"riscv_soc sram1 sram_27", false,-1, 127,0);
        tracep->declArray(c+1335,"riscv_soc sram1 sram_28", false,-1, 127,0);
        tracep->declArray(c+1339,"riscv_soc sram1 sram_29", false,-1, 127,0);
        tracep->declArray(c+1343,"riscv_soc sram1 sram_30", false,-1, 127,0);
        tracep->declArray(c+1347,"riscv_soc sram1 sram_31", false,-1, 127,0);
        tracep->declArray(c+1351,"riscv_soc sram1 sram_32", false,-1, 127,0);
        tracep->declArray(c+1355,"riscv_soc sram1 sram_33", false,-1, 127,0);
        tracep->declArray(c+1359,"riscv_soc sram1 sram_34", false,-1, 127,0);
        tracep->declArray(c+1363,"riscv_soc sram1 sram_35", false,-1, 127,0);
        tracep->declArray(c+1367,"riscv_soc sram1 sram_36", false,-1, 127,0);
        tracep->declArray(c+1371,"riscv_soc sram1 sram_37", false,-1, 127,0);
        tracep->declArray(c+1375,"riscv_soc sram1 sram_38", false,-1, 127,0);
        tracep->declArray(c+1379,"riscv_soc sram1 sram_39", false,-1, 127,0);
        tracep->declArray(c+1383,"riscv_soc sram1 sram_40", false,-1, 127,0);
        tracep->declArray(c+1387,"riscv_soc sram1 sram_41", false,-1, 127,0);
        tracep->declArray(c+1391,"riscv_soc sram1 sram_42", false,-1, 127,0);
        tracep->declArray(c+1395,"riscv_soc sram1 sram_43", false,-1, 127,0);
        tracep->declArray(c+1399,"riscv_soc sram1 sram_44", false,-1, 127,0);
        tracep->declArray(c+1403,"riscv_soc sram1 sram_45", false,-1, 127,0);
        tracep->declArray(c+1407,"riscv_soc sram1 sram_46", false,-1, 127,0);
        tracep->declArray(c+1411,"riscv_soc sram1 sram_47", false,-1, 127,0);
        tracep->declArray(c+1415,"riscv_soc sram1 sram_48", false,-1, 127,0);
        tracep->declArray(c+1419,"riscv_soc sram1 sram_49", false,-1, 127,0);
        tracep->declArray(c+1423,"riscv_soc sram1 sram_50", false,-1, 127,0);
        tracep->declArray(c+1427,"riscv_soc sram1 sram_51", false,-1, 127,0);
        tracep->declArray(c+1431,"riscv_soc sram1 sram_52", false,-1, 127,0);
        tracep->declArray(c+1435,"riscv_soc sram1 sram_53", false,-1, 127,0);
        tracep->declArray(c+1439,"riscv_soc sram1 sram_54", false,-1, 127,0);
        tracep->declArray(c+1443,"riscv_soc sram1 sram_55", false,-1, 127,0);
        tracep->declArray(c+1447,"riscv_soc sram1 sram_56", false,-1, 127,0);
        tracep->declArray(c+1451,"riscv_soc sram1 sram_57", false,-1, 127,0);
        tracep->declArray(c+1455,"riscv_soc sram1 sram_58", false,-1, 127,0);
        tracep->declArray(c+1459,"riscv_soc sram1 sram_59", false,-1, 127,0);
        tracep->declArray(c+1463,"riscv_soc sram1 sram_60", false,-1, 127,0);
        tracep->declArray(c+1467,"riscv_soc sram1 sram_61", false,-1, 127,0);
        tracep->declArray(c+1471,"riscv_soc sram1 sram_62", false,-1, 127,0);
        tracep->declArray(c+1475,"riscv_soc sram1 sram_63", false,-1, 127,0);
        tracep->declBit(c+3015,"riscv_soc sram2 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc sram2 reset", false,-1);
        tracep->declBus(c+53,"riscv_soc sram2 io_addr", false,-1, 5,0);
        tracep->declBit(c+63,"riscv_soc sram2 io_wen", false,-1);
        tracep->declArray(c+3097,"riscv_soc sram2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+55,"riscv_soc sram2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+17,"riscv_soc sram2 io_rdata", false,-1, 127,0);
        tracep->declArray(c+17,"riscv_soc sram2 Q", false,-1, 127,0);
        tracep->declArray(c+1479,"riscv_soc sram2 sram_0", false,-1, 127,0);
        tracep->declArray(c+1483,"riscv_soc sram2 sram_1", false,-1, 127,0);
        tracep->declArray(c+1487,"riscv_soc sram2 sram_2", false,-1, 127,0);
        tracep->declArray(c+1491,"riscv_soc sram2 sram_3", false,-1, 127,0);
        tracep->declArray(c+1495,"riscv_soc sram2 sram_4", false,-1, 127,0);
        tracep->declArray(c+1499,"riscv_soc sram2 sram_5", false,-1, 127,0);
        tracep->declArray(c+1503,"riscv_soc sram2 sram_6", false,-1, 127,0);
        tracep->declArray(c+1507,"riscv_soc sram2 sram_7", false,-1, 127,0);
        tracep->declArray(c+1511,"riscv_soc sram2 sram_8", false,-1, 127,0);
        tracep->declArray(c+1515,"riscv_soc sram2 sram_9", false,-1, 127,0);
        tracep->declArray(c+1519,"riscv_soc sram2 sram_10", false,-1, 127,0);
        tracep->declArray(c+1523,"riscv_soc sram2 sram_11", false,-1, 127,0);
        tracep->declArray(c+1527,"riscv_soc sram2 sram_12", false,-1, 127,0);
        tracep->declArray(c+1531,"riscv_soc sram2 sram_13", false,-1, 127,0);
        tracep->declArray(c+1535,"riscv_soc sram2 sram_14", false,-1, 127,0);
        tracep->declArray(c+1539,"riscv_soc sram2 sram_15", false,-1, 127,0);
        tracep->declArray(c+1543,"riscv_soc sram2 sram_16", false,-1, 127,0);
        tracep->declArray(c+1547,"riscv_soc sram2 sram_17", false,-1, 127,0);
        tracep->declArray(c+1551,"riscv_soc sram2 sram_18", false,-1, 127,0);
        tracep->declArray(c+1555,"riscv_soc sram2 sram_19", false,-1, 127,0);
        tracep->declArray(c+1559,"riscv_soc sram2 sram_20", false,-1, 127,0);
        tracep->declArray(c+1563,"riscv_soc sram2 sram_21", false,-1, 127,0);
        tracep->declArray(c+1567,"riscv_soc sram2 sram_22", false,-1, 127,0);
        tracep->declArray(c+1571,"riscv_soc sram2 sram_23", false,-1, 127,0);
        tracep->declArray(c+1575,"riscv_soc sram2 sram_24", false,-1, 127,0);
        tracep->declArray(c+1579,"riscv_soc sram2 sram_25", false,-1, 127,0);
        tracep->declArray(c+1583,"riscv_soc sram2 sram_26", false,-1, 127,0);
        tracep->declArray(c+1587,"riscv_soc sram2 sram_27", false,-1, 127,0);
        tracep->declArray(c+1591,"riscv_soc sram2 sram_28", false,-1, 127,0);
        tracep->declArray(c+1595,"riscv_soc sram2 sram_29", false,-1, 127,0);
        tracep->declArray(c+1599,"riscv_soc sram2 sram_30", false,-1, 127,0);
        tracep->declArray(c+1603,"riscv_soc sram2 sram_31", false,-1, 127,0);
        tracep->declArray(c+1607,"riscv_soc sram2 sram_32", false,-1, 127,0);
        tracep->declArray(c+1611,"riscv_soc sram2 sram_33", false,-1, 127,0);
        tracep->declArray(c+1615,"riscv_soc sram2 sram_34", false,-1, 127,0);
        tracep->declArray(c+1619,"riscv_soc sram2 sram_35", false,-1, 127,0);
        tracep->declArray(c+1623,"riscv_soc sram2 sram_36", false,-1, 127,0);
        tracep->declArray(c+1627,"riscv_soc sram2 sram_37", false,-1, 127,0);
        tracep->declArray(c+1631,"riscv_soc sram2 sram_38", false,-1, 127,0);
        tracep->declArray(c+1635,"riscv_soc sram2 sram_39", false,-1, 127,0);
        tracep->declArray(c+1639,"riscv_soc sram2 sram_40", false,-1, 127,0);
        tracep->declArray(c+1643,"riscv_soc sram2 sram_41", false,-1, 127,0);
        tracep->declArray(c+1647,"riscv_soc sram2 sram_42", false,-1, 127,0);
        tracep->declArray(c+1651,"riscv_soc sram2 sram_43", false,-1, 127,0);
        tracep->declArray(c+1655,"riscv_soc sram2 sram_44", false,-1, 127,0);
        tracep->declArray(c+1659,"riscv_soc sram2 sram_45", false,-1, 127,0);
        tracep->declArray(c+1663,"riscv_soc sram2 sram_46", false,-1, 127,0);
        tracep->declArray(c+1667,"riscv_soc sram2 sram_47", false,-1, 127,0);
        tracep->declArray(c+1671,"riscv_soc sram2 sram_48", false,-1, 127,0);
        tracep->declArray(c+1675,"riscv_soc sram2 sram_49", false,-1, 127,0);
        tracep->declArray(c+1679,"riscv_soc sram2 sram_50", false,-1, 127,0);
        tracep->declArray(c+1683,"riscv_soc sram2 sram_51", false,-1, 127,0);
        tracep->declArray(c+1687,"riscv_soc sram2 sram_52", false,-1, 127,0);
        tracep->declArray(c+1691,"riscv_soc sram2 sram_53", false,-1, 127,0);
        tracep->declArray(c+1695,"riscv_soc sram2 sram_54", false,-1, 127,0);
        tracep->declArray(c+1699,"riscv_soc sram2 sram_55", false,-1, 127,0);
        tracep->declArray(c+1703,"riscv_soc sram2 sram_56", false,-1, 127,0);
        tracep->declArray(c+1707,"riscv_soc sram2 sram_57", false,-1, 127,0);
        tracep->declArray(c+1711,"riscv_soc sram2 sram_58", false,-1, 127,0);
        tracep->declArray(c+1715,"riscv_soc sram2 sram_59", false,-1, 127,0);
        tracep->declArray(c+1719,"riscv_soc sram2 sram_60", false,-1, 127,0);
        tracep->declArray(c+1723,"riscv_soc sram2 sram_61", false,-1, 127,0);
        tracep->declArray(c+1727,"riscv_soc sram2 sram_62", false,-1, 127,0);
        tracep->declArray(c+1731,"riscv_soc sram2 sram_63", false,-1, 127,0);
        tracep->declBit(c+3015,"riscv_soc sram3 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc sram3 reset", false,-1);
        tracep->declBus(c+53,"riscv_soc sram3 io_addr", false,-1, 5,0);
        tracep->declBit(c+63,"riscv_soc sram3 io_wen", false,-1);
        tracep->declArray(c+3097,"riscv_soc sram3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+59,"riscv_soc sram3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+21,"riscv_soc sram3 io_rdata", false,-1, 127,0);
        tracep->declArray(c+21,"riscv_soc sram3 Q", false,-1, 127,0);
        tracep->declArray(c+1735,"riscv_soc sram3 sram_0", false,-1, 127,0);
        tracep->declArray(c+1739,"riscv_soc sram3 sram_1", false,-1, 127,0);
        tracep->declArray(c+1743,"riscv_soc sram3 sram_2", false,-1, 127,0);
        tracep->declArray(c+1747,"riscv_soc sram3 sram_3", false,-1, 127,0);
        tracep->declArray(c+1751,"riscv_soc sram3 sram_4", false,-1, 127,0);
        tracep->declArray(c+1755,"riscv_soc sram3 sram_5", false,-1, 127,0);
        tracep->declArray(c+1759,"riscv_soc sram3 sram_6", false,-1, 127,0);
        tracep->declArray(c+1763,"riscv_soc sram3 sram_7", false,-1, 127,0);
        tracep->declArray(c+1767,"riscv_soc sram3 sram_8", false,-1, 127,0);
        tracep->declArray(c+1771,"riscv_soc sram3 sram_9", false,-1, 127,0);
        tracep->declArray(c+1775,"riscv_soc sram3 sram_10", false,-1, 127,0);
        tracep->declArray(c+1779,"riscv_soc sram3 sram_11", false,-1, 127,0);
        tracep->declArray(c+1783,"riscv_soc sram3 sram_12", false,-1, 127,0);
        tracep->declArray(c+1787,"riscv_soc sram3 sram_13", false,-1, 127,0);
        tracep->declArray(c+1791,"riscv_soc sram3 sram_14", false,-1, 127,0);
        tracep->declArray(c+1795,"riscv_soc sram3 sram_15", false,-1, 127,0);
        tracep->declArray(c+1799,"riscv_soc sram3 sram_16", false,-1, 127,0);
        tracep->declArray(c+1803,"riscv_soc sram3 sram_17", false,-1, 127,0);
        tracep->declArray(c+1807,"riscv_soc sram3 sram_18", false,-1, 127,0);
        tracep->declArray(c+1811,"riscv_soc sram3 sram_19", false,-1, 127,0);
        tracep->declArray(c+1815,"riscv_soc sram3 sram_20", false,-1, 127,0);
        tracep->declArray(c+1819,"riscv_soc sram3 sram_21", false,-1, 127,0);
        tracep->declArray(c+1823,"riscv_soc sram3 sram_22", false,-1, 127,0);
        tracep->declArray(c+1827,"riscv_soc sram3 sram_23", false,-1, 127,0);
        tracep->declArray(c+1831,"riscv_soc sram3 sram_24", false,-1, 127,0);
        tracep->declArray(c+1835,"riscv_soc sram3 sram_25", false,-1, 127,0);
        tracep->declArray(c+1839,"riscv_soc sram3 sram_26", false,-1, 127,0);
        tracep->declArray(c+1843,"riscv_soc sram3 sram_27", false,-1, 127,0);
        tracep->declArray(c+1847,"riscv_soc sram3 sram_28", false,-1, 127,0);
        tracep->declArray(c+1851,"riscv_soc sram3 sram_29", false,-1, 127,0);
        tracep->declArray(c+1855,"riscv_soc sram3 sram_30", false,-1, 127,0);
        tracep->declArray(c+1859,"riscv_soc sram3 sram_31", false,-1, 127,0);
        tracep->declArray(c+1863,"riscv_soc sram3 sram_32", false,-1, 127,0);
        tracep->declArray(c+1867,"riscv_soc sram3 sram_33", false,-1, 127,0);
        tracep->declArray(c+1871,"riscv_soc sram3 sram_34", false,-1, 127,0);
        tracep->declArray(c+1875,"riscv_soc sram3 sram_35", false,-1, 127,0);
        tracep->declArray(c+1879,"riscv_soc sram3 sram_36", false,-1, 127,0);
        tracep->declArray(c+1883,"riscv_soc sram3 sram_37", false,-1, 127,0);
        tracep->declArray(c+1887,"riscv_soc sram3 sram_38", false,-1, 127,0);
        tracep->declArray(c+1891,"riscv_soc sram3 sram_39", false,-1, 127,0);
        tracep->declArray(c+1895,"riscv_soc sram3 sram_40", false,-1, 127,0);
        tracep->declArray(c+1899,"riscv_soc sram3 sram_41", false,-1, 127,0);
        tracep->declArray(c+1903,"riscv_soc sram3 sram_42", false,-1, 127,0);
        tracep->declArray(c+1907,"riscv_soc sram3 sram_43", false,-1, 127,0);
        tracep->declArray(c+1911,"riscv_soc sram3 sram_44", false,-1, 127,0);
        tracep->declArray(c+1915,"riscv_soc sram3 sram_45", false,-1, 127,0);
        tracep->declArray(c+1919,"riscv_soc sram3 sram_46", false,-1, 127,0);
        tracep->declArray(c+1923,"riscv_soc sram3 sram_47", false,-1, 127,0);
        tracep->declArray(c+1927,"riscv_soc sram3 sram_48", false,-1, 127,0);
        tracep->declArray(c+1931,"riscv_soc sram3 sram_49", false,-1, 127,0);
        tracep->declArray(c+1935,"riscv_soc sram3 sram_50", false,-1, 127,0);
        tracep->declArray(c+1939,"riscv_soc sram3 sram_51", false,-1, 127,0);
        tracep->declArray(c+1943,"riscv_soc sram3 sram_52", false,-1, 127,0);
        tracep->declArray(c+1947,"riscv_soc sram3 sram_53", false,-1, 127,0);
        tracep->declArray(c+1951,"riscv_soc sram3 sram_54", false,-1, 127,0);
        tracep->declArray(c+1955,"riscv_soc sram3 sram_55", false,-1, 127,0);
        tracep->declArray(c+1959,"riscv_soc sram3 sram_56", false,-1, 127,0);
        tracep->declArray(c+1963,"riscv_soc sram3 sram_57", false,-1, 127,0);
        tracep->declArray(c+1967,"riscv_soc sram3 sram_58", false,-1, 127,0);
        tracep->declArray(c+1971,"riscv_soc sram3 sram_59", false,-1, 127,0);
        tracep->declArray(c+1975,"riscv_soc sram3 sram_60", false,-1, 127,0);
        tracep->declArray(c+1979,"riscv_soc sram3 sram_61", false,-1, 127,0);
        tracep->declArray(c+1983,"riscv_soc sram3 sram_62", false,-1, 127,0);
        tracep->declArray(c+1987,"riscv_soc sram3 sram_63", false,-1, 127,0);
        tracep->declBit(c+3015,"riscv_soc sram4 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc sram4 reset", false,-1);
        tracep->declBus(c+64,"riscv_soc sram4 io_addr", false,-1, 5,0);
        tracep->declBit(c+65,"riscv_soc sram4 io_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc sram4 io_wmask", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram4 io_wdata", false,-1, 127,0);
        tracep->declArray(c+25,"riscv_soc sram4 io_rdata", false,-1, 127,0);
        tracep->declArray(c+25,"riscv_soc sram4 Q", false,-1, 127,0);
        tracep->declArray(c+1991,"riscv_soc sram4 sram_0", false,-1, 127,0);
        tracep->declArray(c+1995,"riscv_soc sram4 sram_1", false,-1, 127,0);
        tracep->declArray(c+1999,"riscv_soc sram4 sram_2", false,-1, 127,0);
        tracep->declArray(c+2003,"riscv_soc sram4 sram_3", false,-1, 127,0);
        tracep->declArray(c+2007,"riscv_soc sram4 sram_4", false,-1, 127,0);
        tracep->declArray(c+2011,"riscv_soc sram4 sram_5", false,-1, 127,0);
        tracep->declArray(c+2015,"riscv_soc sram4 sram_6", false,-1, 127,0);
        tracep->declArray(c+2019,"riscv_soc sram4 sram_7", false,-1, 127,0);
        tracep->declArray(c+2023,"riscv_soc sram4 sram_8", false,-1, 127,0);
        tracep->declArray(c+2027,"riscv_soc sram4 sram_9", false,-1, 127,0);
        tracep->declArray(c+2031,"riscv_soc sram4 sram_10", false,-1, 127,0);
        tracep->declArray(c+2035,"riscv_soc sram4 sram_11", false,-1, 127,0);
        tracep->declArray(c+2039,"riscv_soc sram4 sram_12", false,-1, 127,0);
        tracep->declArray(c+2043,"riscv_soc sram4 sram_13", false,-1, 127,0);
        tracep->declArray(c+2047,"riscv_soc sram4 sram_14", false,-1, 127,0);
        tracep->declArray(c+2051,"riscv_soc sram4 sram_15", false,-1, 127,0);
        tracep->declArray(c+2055,"riscv_soc sram4 sram_16", false,-1, 127,0);
        tracep->declArray(c+2059,"riscv_soc sram4 sram_17", false,-1, 127,0);
        tracep->declArray(c+2063,"riscv_soc sram4 sram_18", false,-1, 127,0);
        tracep->declArray(c+2067,"riscv_soc sram4 sram_19", false,-1, 127,0);
        tracep->declArray(c+2071,"riscv_soc sram4 sram_20", false,-1, 127,0);
        tracep->declArray(c+2075,"riscv_soc sram4 sram_21", false,-1, 127,0);
        tracep->declArray(c+2079,"riscv_soc sram4 sram_22", false,-1, 127,0);
        tracep->declArray(c+2083,"riscv_soc sram4 sram_23", false,-1, 127,0);
        tracep->declArray(c+2087,"riscv_soc sram4 sram_24", false,-1, 127,0);
        tracep->declArray(c+2091,"riscv_soc sram4 sram_25", false,-1, 127,0);
        tracep->declArray(c+2095,"riscv_soc sram4 sram_26", false,-1, 127,0);
        tracep->declArray(c+2099,"riscv_soc sram4 sram_27", false,-1, 127,0);
        tracep->declArray(c+2103,"riscv_soc sram4 sram_28", false,-1, 127,0);
        tracep->declArray(c+2107,"riscv_soc sram4 sram_29", false,-1, 127,0);
        tracep->declArray(c+2111,"riscv_soc sram4 sram_30", false,-1, 127,0);
        tracep->declArray(c+2115,"riscv_soc sram4 sram_31", false,-1, 127,0);
        tracep->declArray(c+2119,"riscv_soc sram4 sram_32", false,-1, 127,0);
        tracep->declArray(c+2123,"riscv_soc sram4 sram_33", false,-1, 127,0);
        tracep->declArray(c+2127,"riscv_soc sram4 sram_34", false,-1, 127,0);
        tracep->declArray(c+2131,"riscv_soc sram4 sram_35", false,-1, 127,0);
        tracep->declArray(c+2135,"riscv_soc sram4 sram_36", false,-1, 127,0);
        tracep->declArray(c+2139,"riscv_soc sram4 sram_37", false,-1, 127,0);
        tracep->declArray(c+2143,"riscv_soc sram4 sram_38", false,-1, 127,0);
        tracep->declArray(c+2147,"riscv_soc sram4 sram_39", false,-1, 127,0);
        tracep->declArray(c+2151,"riscv_soc sram4 sram_40", false,-1, 127,0);
        tracep->declArray(c+2155,"riscv_soc sram4 sram_41", false,-1, 127,0);
        tracep->declArray(c+2159,"riscv_soc sram4 sram_42", false,-1, 127,0);
        tracep->declArray(c+2163,"riscv_soc sram4 sram_43", false,-1, 127,0);
        tracep->declArray(c+2167,"riscv_soc sram4 sram_44", false,-1, 127,0);
        tracep->declArray(c+2171,"riscv_soc sram4 sram_45", false,-1, 127,0);
        tracep->declArray(c+2175,"riscv_soc sram4 sram_46", false,-1, 127,0);
        tracep->declArray(c+2179,"riscv_soc sram4 sram_47", false,-1, 127,0);
        tracep->declArray(c+2183,"riscv_soc sram4 sram_48", false,-1, 127,0);
        tracep->declArray(c+2187,"riscv_soc sram4 sram_49", false,-1, 127,0);
        tracep->declArray(c+2191,"riscv_soc sram4 sram_50", false,-1, 127,0);
        tracep->declArray(c+2195,"riscv_soc sram4 sram_51", false,-1, 127,0);
        tracep->declArray(c+2199,"riscv_soc sram4 sram_52", false,-1, 127,0);
        tracep->declArray(c+2203,"riscv_soc sram4 sram_53", false,-1, 127,0);
        tracep->declArray(c+2207,"riscv_soc sram4 sram_54", false,-1, 127,0);
        tracep->declArray(c+2211,"riscv_soc sram4 sram_55", false,-1, 127,0);
        tracep->declArray(c+2215,"riscv_soc sram4 sram_56", false,-1, 127,0);
        tracep->declArray(c+2219,"riscv_soc sram4 sram_57", false,-1, 127,0);
        tracep->declArray(c+2223,"riscv_soc sram4 sram_58", false,-1, 127,0);
        tracep->declArray(c+2227,"riscv_soc sram4 sram_59", false,-1, 127,0);
        tracep->declArray(c+2231,"riscv_soc sram4 sram_60", false,-1, 127,0);
        tracep->declArray(c+2235,"riscv_soc sram4 sram_61", false,-1, 127,0);
        tracep->declArray(c+2239,"riscv_soc sram4 sram_62", false,-1, 127,0);
        tracep->declArray(c+2243,"riscv_soc sram4 sram_63", false,-1, 127,0);
        tracep->declBit(c+3015,"riscv_soc sram5 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc sram5 reset", false,-1);
        tracep->declBus(c+64,"riscv_soc sram5 io_addr", false,-1, 5,0);
        tracep->declBit(c+65,"riscv_soc sram5 io_wen", false,-1);
        tracep->declArray(c+3097,"riscv_soc sram5 io_wmask", false,-1, 127,0);
        tracep->declArray(c+74,"riscv_soc sram5 io_wdata", false,-1, 127,0);
        tracep->declArray(c+29,"riscv_soc sram5 io_rdata", false,-1, 127,0);
        tracep->declArray(c+29,"riscv_soc sram5 Q", false,-1, 127,0);
        tracep->declArray(c+2247,"riscv_soc sram5 sram_0", false,-1, 127,0);
        tracep->declArray(c+2251,"riscv_soc sram5 sram_1", false,-1, 127,0);
        tracep->declArray(c+2255,"riscv_soc sram5 sram_2", false,-1, 127,0);
        tracep->declArray(c+2259,"riscv_soc sram5 sram_3", false,-1, 127,0);
        tracep->declArray(c+2263,"riscv_soc sram5 sram_4", false,-1, 127,0);
        tracep->declArray(c+2267,"riscv_soc sram5 sram_5", false,-1, 127,0);
        tracep->declArray(c+2271,"riscv_soc sram5 sram_6", false,-1, 127,0);
        tracep->declArray(c+2275,"riscv_soc sram5 sram_7", false,-1, 127,0);
        tracep->declArray(c+2279,"riscv_soc sram5 sram_8", false,-1, 127,0);
        tracep->declArray(c+2283,"riscv_soc sram5 sram_9", false,-1, 127,0);
        tracep->declArray(c+2287,"riscv_soc sram5 sram_10", false,-1, 127,0);
        tracep->declArray(c+2291,"riscv_soc sram5 sram_11", false,-1, 127,0);
        tracep->declArray(c+2295,"riscv_soc sram5 sram_12", false,-1, 127,0);
        tracep->declArray(c+2299,"riscv_soc sram5 sram_13", false,-1, 127,0);
        tracep->declArray(c+2303,"riscv_soc sram5 sram_14", false,-1, 127,0);
        tracep->declArray(c+2307,"riscv_soc sram5 sram_15", false,-1, 127,0);
        tracep->declArray(c+2311,"riscv_soc sram5 sram_16", false,-1, 127,0);
        tracep->declArray(c+2315,"riscv_soc sram5 sram_17", false,-1, 127,0);
        tracep->declArray(c+2319,"riscv_soc sram5 sram_18", false,-1, 127,0);
        tracep->declArray(c+2323,"riscv_soc sram5 sram_19", false,-1, 127,0);
        tracep->declArray(c+2327,"riscv_soc sram5 sram_20", false,-1, 127,0);
        tracep->declArray(c+2331,"riscv_soc sram5 sram_21", false,-1, 127,0);
        tracep->declArray(c+2335,"riscv_soc sram5 sram_22", false,-1, 127,0);
        tracep->declArray(c+2339,"riscv_soc sram5 sram_23", false,-1, 127,0);
        tracep->declArray(c+2343,"riscv_soc sram5 sram_24", false,-1, 127,0);
        tracep->declArray(c+2347,"riscv_soc sram5 sram_25", false,-1, 127,0);
        tracep->declArray(c+2351,"riscv_soc sram5 sram_26", false,-1, 127,0);
        tracep->declArray(c+2355,"riscv_soc sram5 sram_27", false,-1, 127,0);
        tracep->declArray(c+2359,"riscv_soc sram5 sram_28", false,-1, 127,0);
        tracep->declArray(c+2363,"riscv_soc sram5 sram_29", false,-1, 127,0);
        tracep->declArray(c+2367,"riscv_soc sram5 sram_30", false,-1, 127,0);
        tracep->declArray(c+2371,"riscv_soc sram5 sram_31", false,-1, 127,0);
        tracep->declArray(c+2375,"riscv_soc sram5 sram_32", false,-1, 127,0);
        tracep->declArray(c+2379,"riscv_soc sram5 sram_33", false,-1, 127,0);
        tracep->declArray(c+2383,"riscv_soc sram5 sram_34", false,-1, 127,0);
        tracep->declArray(c+2387,"riscv_soc sram5 sram_35", false,-1, 127,0);
        tracep->declArray(c+2391,"riscv_soc sram5 sram_36", false,-1, 127,0);
        tracep->declArray(c+2395,"riscv_soc sram5 sram_37", false,-1, 127,0);
        tracep->declArray(c+2399,"riscv_soc sram5 sram_38", false,-1, 127,0);
        tracep->declArray(c+2403,"riscv_soc sram5 sram_39", false,-1, 127,0);
        tracep->declArray(c+2407,"riscv_soc sram5 sram_40", false,-1, 127,0);
        tracep->declArray(c+2411,"riscv_soc sram5 sram_41", false,-1, 127,0);
        tracep->declArray(c+2415,"riscv_soc sram5 sram_42", false,-1, 127,0);
        tracep->declArray(c+2419,"riscv_soc sram5 sram_43", false,-1, 127,0);
        tracep->declArray(c+2423,"riscv_soc sram5 sram_44", false,-1, 127,0);
        tracep->declArray(c+2427,"riscv_soc sram5 sram_45", false,-1, 127,0);
        tracep->declArray(c+2431,"riscv_soc sram5 sram_46", false,-1, 127,0);
        tracep->declArray(c+2435,"riscv_soc sram5 sram_47", false,-1, 127,0);
        tracep->declArray(c+2439,"riscv_soc sram5 sram_48", false,-1, 127,0);
        tracep->declArray(c+2443,"riscv_soc sram5 sram_49", false,-1, 127,0);
        tracep->declArray(c+2447,"riscv_soc sram5 sram_50", false,-1, 127,0);
        tracep->declArray(c+2451,"riscv_soc sram5 sram_51", false,-1, 127,0);
        tracep->declArray(c+2455,"riscv_soc sram5 sram_52", false,-1, 127,0);
        tracep->declArray(c+2459,"riscv_soc sram5 sram_53", false,-1, 127,0);
        tracep->declArray(c+2463,"riscv_soc sram5 sram_54", false,-1, 127,0);
        tracep->declArray(c+2467,"riscv_soc sram5 sram_55", false,-1, 127,0);
        tracep->declArray(c+2471,"riscv_soc sram5 sram_56", false,-1, 127,0);
        tracep->declArray(c+2475,"riscv_soc sram5 sram_57", false,-1, 127,0);
        tracep->declArray(c+2479,"riscv_soc sram5 sram_58", false,-1, 127,0);
        tracep->declArray(c+2483,"riscv_soc sram5 sram_59", false,-1, 127,0);
        tracep->declArray(c+2487,"riscv_soc sram5 sram_60", false,-1, 127,0);
        tracep->declArray(c+2491,"riscv_soc sram5 sram_61", false,-1, 127,0);
        tracep->declArray(c+2495,"riscv_soc sram5 sram_62", false,-1, 127,0);
        tracep->declArray(c+2499,"riscv_soc sram5 sram_63", false,-1, 127,0);
        tracep->declBit(c+3015,"riscv_soc sram6 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc sram6 reset", false,-1);
        tracep->declBus(c+64,"riscv_soc sram6 io_addr", false,-1, 5,0);
        tracep->declBit(c+78,"riscv_soc sram6 io_wen", false,-1);
        tracep->declArray(c+66,"riscv_soc sram6 io_wmask", false,-1, 127,0);
        tracep->declArray(c+70,"riscv_soc sram6 io_wdata", false,-1, 127,0);
        tracep->declArray(c+33,"riscv_soc sram6 io_rdata", false,-1, 127,0);
        tracep->declArray(c+33,"riscv_soc sram6 Q", false,-1, 127,0);
        tracep->declArray(c+2503,"riscv_soc sram6 sram_0", false,-1, 127,0);
        tracep->declArray(c+2507,"riscv_soc sram6 sram_1", false,-1, 127,0);
        tracep->declArray(c+2511,"riscv_soc sram6 sram_2", false,-1, 127,0);
        tracep->declArray(c+2515,"riscv_soc sram6 sram_3", false,-1, 127,0);
        tracep->declArray(c+2519,"riscv_soc sram6 sram_4", false,-1, 127,0);
        tracep->declArray(c+2523,"riscv_soc sram6 sram_5", false,-1, 127,0);
        tracep->declArray(c+2527,"riscv_soc sram6 sram_6", false,-1, 127,0);
        tracep->declArray(c+2531,"riscv_soc sram6 sram_7", false,-1, 127,0);
        tracep->declArray(c+2535,"riscv_soc sram6 sram_8", false,-1, 127,0);
        tracep->declArray(c+2539,"riscv_soc sram6 sram_9", false,-1, 127,0);
        tracep->declArray(c+2543,"riscv_soc sram6 sram_10", false,-1, 127,0);
        tracep->declArray(c+2547,"riscv_soc sram6 sram_11", false,-1, 127,0);
        tracep->declArray(c+2551,"riscv_soc sram6 sram_12", false,-1, 127,0);
        tracep->declArray(c+2555,"riscv_soc sram6 sram_13", false,-1, 127,0);
        tracep->declArray(c+2559,"riscv_soc sram6 sram_14", false,-1, 127,0);
        tracep->declArray(c+2563,"riscv_soc sram6 sram_15", false,-1, 127,0);
        tracep->declArray(c+2567,"riscv_soc sram6 sram_16", false,-1, 127,0);
        tracep->declArray(c+2571,"riscv_soc sram6 sram_17", false,-1, 127,0);
        tracep->declArray(c+2575,"riscv_soc sram6 sram_18", false,-1, 127,0);
        tracep->declArray(c+2579,"riscv_soc sram6 sram_19", false,-1, 127,0);
        tracep->declArray(c+2583,"riscv_soc sram6 sram_20", false,-1, 127,0);
        tracep->declArray(c+2587,"riscv_soc sram6 sram_21", false,-1, 127,0);
        tracep->declArray(c+2591,"riscv_soc sram6 sram_22", false,-1, 127,0);
        tracep->declArray(c+2595,"riscv_soc sram6 sram_23", false,-1, 127,0);
        tracep->declArray(c+2599,"riscv_soc sram6 sram_24", false,-1, 127,0);
        tracep->declArray(c+2603,"riscv_soc sram6 sram_25", false,-1, 127,0);
        tracep->declArray(c+2607,"riscv_soc sram6 sram_26", false,-1, 127,0);
        tracep->declArray(c+2611,"riscv_soc sram6 sram_27", false,-1, 127,0);
        tracep->declArray(c+2615,"riscv_soc sram6 sram_28", false,-1, 127,0);
        tracep->declArray(c+2619,"riscv_soc sram6 sram_29", false,-1, 127,0);
        tracep->declArray(c+2623,"riscv_soc sram6 sram_30", false,-1, 127,0);
        tracep->declArray(c+2627,"riscv_soc sram6 sram_31", false,-1, 127,0);
        tracep->declArray(c+2631,"riscv_soc sram6 sram_32", false,-1, 127,0);
        tracep->declArray(c+2635,"riscv_soc sram6 sram_33", false,-1, 127,0);
        tracep->declArray(c+2639,"riscv_soc sram6 sram_34", false,-1, 127,0);
        tracep->declArray(c+2643,"riscv_soc sram6 sram_35", false,-1, 127,0);
        tracep->declArray(c+2647,"riscv_soc sram6 sram_36", false,-1, 127,0);
        tracep->declArray(c+2651,"riscv_soc sram6 sram_37", false,-1, 127,0);
        tracep->declArray(c+2655,"riscv_soc sram6 sram_38", false,-1, 127,0);
        tracep->declArray(c+2659,"riscv_soc sram6 sram_39", false,-1, 127,0);
        tracep->declArray(c+2663,"riscv_soc sram6 sram_40", false,-1, 127,0);
        tracep->declArray(c+2667,"riscv_soc sram6 sram_41", false,-1, 127,0);
        tracep->declArray(c+2671,"riscv_soc sram6 sram_42", false,-1, 127,0);
        tracep->declArray(c+2675,"riscv_soc sram6 sram_43", false,-1, 127,0);
        tracep->declArray(c+2679,"riscv_soc sram6 sram_44", false,-1, 127,0);
        tracep->declArray(c+2683,"riscv_soc sram6 sram_45", false,-1, 127,0);
        tracep->declArray(c+2687,"riscv_soc sram6 sram_46", false,-1, 127,0);
        tracep->declArray(c+2691,"riscv_soc sram6 sram_47", false,-1, 127,0);
        tracep->declArray(c+2695,"riscv_soc sram6 sram_48", false,-1, 127,0);
        tracep->declArray(c+2699,"riscv_soc sram6 sram_49", false,-1, 127,0);
        tracep->declArray(c+2703,"riscv_soc sram6 sram_50", false,-1, 127,0);
        tracep->declArray(c+2707,"riscv_soc sram6 sram_51", false,-1, 127,0);
        tracep->declArray(c+2711,"riscv_soc sram6 sram_52", false,-1, 127,0);
        tracep->declArray(c+2715,"riscv_soc sram6 sram_53", false,-1, 127,0);
        tracep->declArray(c+2719,"riscv_soc sram6 sram_54", false,-1, 127,0);
        tracep->declArray(c+2723,"riscv_soc sram6 sram_55", false,-1, 127,0);
        tracep->declArray(c+2727,"riscv_soc sram6 sram_56", false,-1, 127,0);
        tracep->declArray(c+2731,"riscv_soc sram6 sram_57", false,-1, 127,0);
        tracep->declArray(c+2735,"riscv_soc sram6 sram_58", false,-1, 127,0);
        tracep->declArray(c+2739,"riscv_soc sram6 sram_59", false,-1, 127,0);
        tracep->declArray(c+2743,"riscv_soc sram6 sram_60", false,-1, 127,0);
        tracep->declArray(c+2747,"riscv_soc sram6 sram_61", false,-1, 127,0);
        tracep->declArray(c+2751,"riscv_soc sram6 sram_62", false,-1, 127,0);
        tracep->declArray(c+2755,"riscv_soc sram6 sram_63", false,-1, 127,0);
        tracep->declBit(c+3015,"riscv_soc sram7 clock", false,-1);
        tracep->declBit(c+3016,"riscv_soc sram7 reset", false,-1);
        tracep->declBus(c+64,"riscv_soc sram7 io_addr", false,-1, 5,0);
        tracep->declBit(c+78,"riscv_soc sram7 io_wen", false,-1);
        tracep->declArray(c+3097,"riscv_soc sram7 io_wmask", false,-1, 127,0);
        tracep->declArray(c+74,"riscv_soc sram7 io_wdata", false,-1, 127,0);
        tracep->declArray(c+37,"riscv_soc sram7 io_rdata", false,-1, 127,0);
        tracep->declArray(c+37,"riscv_soc sram7 Q", false,-1, 127,0);
        tracep->declArray(c+2759,"riscv_soc sram7 sram_0", false,-1, 127,0);
        tracep->declArray(c+2763,"riscv_soc sram7 sram_1", false,-1, 127,0);
        tracep->declArray(c+2767,"riscv_soc sram7 sram_2", false,-1, 127,0);
        tracep->declArray(c+2771,"riscv_soc sram7 sram_3", false,-1, 127,0);
        tracep->declArray(c+2775,"riscv_soc sram7 sram_4", false,-1, 127,0);
        tracep->declArray(c+2779,"riscv_soc sram7 sram_5", false,-1, 127,0);
        tracep->declArray(c+2783,"riscv_soc sram7 sram_6", false,-1, 127,0);
        tracep->declArray(c+2787,"riscv_soc sram7 sram_7", false,-1, 127,0);
        tracep->declArray(c+2791,"riscv_soc sram7 sram_8", false,-1, 127,0);
        tracep->declArray(c+2795,"riscv_soc sram7 sram_9", false,-1, 127,0);
        tracep->declArray(c+2799,"riscv_soc sram7 sram_10", false,-1, 127,0);
        tracep->declArray(c+2803,"riscv_soc sram7 sram_11", false,-1, 127,0);
        tracep->declArray(c+2807,"riscv_soc sram7 sram_12", false,-1, 127,0);
        tracep->declArray(c+2811,"riscv_soc sram7 sram_13", false,-1, 127,0);
        tracep->declArray(c+2815,"riscv_soc sram7 sram_14", false,-1, 127,0);
        tracep->declArray(c+2819,"riscv_soc sram7 sram_15", false,-1, 127,0);
        tracep->declArray(c+2823,"riscv_soc sram7 sram_16", false,-1, 127,0);
        tracep->declArray(c+2827,"riscv_soc sram7 sram_17", false,-1, 127,0);
        tracep->declArray(c+2831,"riscv_soc sram7 sram_18", false,-1, 127,0);
        tracep->declArray(c+2835,"riscv_soc sram7 sram_19", false,-1, 127,0);
        tracep->declArray(c+2839,"riscv_soc sram7 sram_20", false,-1, 127,0);
        tracep->declArray(c+2843,"riscv_soc sram7 sram_21", false,-1, 127,0);
        tracep->declArray(c+2847,"riscv_soc sram7 sram_22", false,-1, 127,0);
        tracep->declArray(c+2851,"riscv_soc sram7 sram_23", false,-1, 127,0);
        tracep->declArray(c+2855,"riscv_soc sram7 sram_24", false,-1, 127,0);
        tracep->declArray(c+2859,"riscv_soc sram7 sram_25", false,-1, 127,0);
        tracep->declArray(c+2863,"riscv_soc sram7 sram_26", false,-1, 127,0);
        tracep->declArray(c+2867,"riscv_soc sram7 sram_27", false,-1, 127,0);
        tracep->declArray(c+2871,"riscv_soc sram7 sram_28", false,-1, 127,0);
        tracep->declArray(c+2875,"riscv_soc sram7 sram_29", false,-1, 127,0);
        tracep->declArray(c+2879,"riscv_soc sram7 sram_30", false,-1, 127,0);
        tracep->declArray(c+2883,"riscv_soc sram7 sram_31", false,-1, 127,0);
        tracep->declArray(c+2887,"riscv_soc sram7 sram_32", false,-1, 127,0);
        tracep->declArray(c+2891,"riscv_soc sram7 sram_33", false,-1, 127,0);
        tracep->declArray(c+2895,"riscv_soc sram7 sram_34", false,-1, 127,0);
        tracep->declArray(c+2899,"riscv_soc sram7 sram_35", false,-1, 127,0);
        tracep->declArray(c+2903,"riscv_soc sram7 sram_36", false,-1, 127,0);
        tracep->declArray(c+2907,"riscv_soc sram7 sram_37", false,-1, 127,0);
        tracep->declArray(c+2911,"riscv_soc sram7 sram_38", false,-1, 127,0);
        tracep->declArray(c+2915,"riscv_soc sram7 sram_39", false,-1, 127,0);
        tracep->declArray(c+2919,"riscv_soc sram7 sram_40", false,-1, 127,0);
        tracep->declArray(c+2923,"riscv_soc sram7 sram_41", false,-1, 127,0);
        tracep->declArray(c+2927,"riscv_soc sram7 sram_42", false,-1, 127,0);
        tracep->declArray(c+2931,"riscv_soc sram7 sram_43", false,-1, 127,0);
        tracep->declArray(c+2935,"riscv_soc sram7 sram_44", false,-1, 127,0);
        tracep->declArray(c+2939,"riscv_soc sram7 sram_45", false,-1, 127,0);
        tracep->declArray(c+2943,"riscv_soc sram7 sram_46", false,-1, 127,0);
        tracep->declArray(c+2947,"riscv_soc sram7 sram_47", false,-1, 127,0);
        tracep->declArray(c+2951,"riscv_soc sram7 sram_48", false,-1, 127,0);
        tracep->declArray(c+2955,"riscv_soc sram7 sram_49", false,-1, 127,0);
        tracep->declArray(c+2959,"riscv_soc sram7 sram_50", false,-1, 127,0);
        tracep->declArray(c+2963,"riscv_soc sram7 sram_51", false,-1, 127,0);
        tracep->declArray(c+2967,"riscv_soc sram7 sram_52", false,-1, 127,0);
        tracep->declArray(c+2971,"riscv_soc sram7 sram_53", false,-1, 127,0);
        tracep->declArray(c+2975,"riscv_soc sram7 sram_54", false,-1, 127,0);
        tracep->declArray(c+2979,"riscv_soc sram7 sram_55", false,-1, 127,0);
        tracep->declArray(c+2983,"riscv_soc sram7 sram_56", false,-1, 127,0);
        tracep->declArray(c+2987,"riscv_soc sram7 sram_57", false,-1, 127,0);
        tracep->declArray(c+2991,"riscv_soc sram7 sram_58", false,-1, 127,0);
        tracep->declArray(c+2995,"riscv_soc sram7 sram_59", false,-1, 127,0);
        tracep->declArray(c+2999,"riscv_soc sram7 sram_60", false,-1, 127,0);
        tracep->declArray(c+3003,"riscv_soc sram7 sram_61", false,-1, 127,0);
        tracep->declArray(c+3007,"riscv_soc sram7 sram_62", false,-1, 127,0);
        tracep->declArray(c+3011,"riscv_soc sram7 sram_63", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp1646;
    VlWide<4>/*127:0*/ __Vtemp1647;
    VlWide<4>/*127:0*/ __Vtemp1648;
    VlWide<4>/*127:0*/ __Vtemp1649;
    VlWide<4>/*127:0*/ __Vtemp1650;
    VlWide<4>/*127:0*/ __Vtemp1651;
    VlWide<4>/*127:0*/ __Vtemp1652;
    VlWide<4>/*127:0*/ __Vtemp1653;
    VlWide<4>/*127:0*/ __Vtemp1654;
    VlWide<8>/*255:0*/ __Vtemp1657;
    VlWide<8>/*255:0*/ __Vtemp1660;
    VlWide<4>/*127:0*/ __Vtemp1662;
    VlWide<4>/*127:0*/ __Vtemp1663;
    VlWide<4>/*127:0*/ __Vtemp1664;
    VlWide<3>/*95:0*/ __Vtemp1665;
    VlWide<16>/*511:0*/ __Vtemp1672;
    VlWide<4>/*127:0*/ __Vtemp1673;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
        tracep->fullBit(oldp+2,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
        tracep->fullBit(oldp+3,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
        tracep->fullBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
        tracep->fullBit(oldp+5,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
        tracep->fullQData(oldp+6,(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata),64);
        tracep->fullBit(oldp+8,(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
        tracep->fullWData(oldp+9,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
        tracep->fullWData(oldp+13,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
        tracep->fullWData(oldp+17,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
        tracep->fullWData(oldp+21,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
        tracep->fullWData(oldp+25,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
        tracep->fullWData(oldp+29,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
        tracep->fullWData(oldp+33,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
        tracep->fullWData(oldp+37,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
        tracep->fullBit(oldp+41,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9));
        tracep->fullQData(oldp+42,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                     ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                     : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                         ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr
                                         : 0ULL))),64);
        tracep->fullBit(oldp+44,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid));
        tracep->fullQData(oldp+45,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                     ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                     : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                         ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata
                                         : 0ULL))),64);
        tracep->fullCData(oldp+47,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb),8);
        tracep->fullBit(oldp+48,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast));
        tracep->fullBit(oldp+49,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2));
        tracep->fullQData(oldp+50,(vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr),64);
        tracep->fullCData(oldp+52,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0))
                                     ? 1U : (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)))),8);
        tracep->fullCData(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr),6);
        tracep->fullBit(oldp+54,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        tracep->fullWData(oldp+55,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        VL_EXTEND_WQ(128,54, __Vtemp1646, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        tracep->fullWData(oldp+59,(__Vtemp1646),128);
        tracep->fullBit(oldp+63,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        tracep->fullCData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A),6);
        tracep->fullBit(oldp+65,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp1647[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp1647[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp1647[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp1647[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+66,(__Vtemp1647),128);
        tracep->fullWData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        VL_EXTEND_WQ(128,54, __Vtemp1648, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+74,(__Vtemp1648),128);
        tracep->fullBit(oldp+78,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        tracep->fullBit(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T));
        tracep->fullBit(oldp+80,(((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU)) 
                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        tracep->fullQData(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullBit(oldp+83,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        tracep->fullBit(oldp+84,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i) 
                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))));
        tracep->fullBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1));
        tracep->fullBit(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        tracep->fullBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        tracep->fullQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        tracep->fullQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        tracep->fullQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        tracep->fullQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        tracep->fullBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        tracep->fullBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullBit(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        tracep->fullBit(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        tracep->fullBit(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        tracep->fullCData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        tracep->fullBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        tracep->fullBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        tracep->fullBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        tracep->fullQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit),64);
        tracep->fullBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        tracep->fullQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        tracep->fullBit(oldp+114,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid))));
        tracep->fullBit(oldp+115,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid))));
        tracep->fullWData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0),128);
        tracep->fullWData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1),128);
        VL_EXTEND_WQ(128,54, __Vtemp1649, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp1650, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp1651[0U] = __Vtemp1649[0U];
            __Vtemp1651[1U] = __Vtemp1649[1U];
            __Vtemp1651[2U] = __Vtemp1649[2U];
            __Vtemp1651[3U] = __Vtemp1649[3U];
        } else {
            __Vtemp1651[0U] = __Vtemp1650[0U];
            __Vtemp1651[1U] = __Vtemp1650[1U];
            __Vtemp1651[2U] = __Vtemp1650[2U];
            __Vtemp1651[3U] = __Vtemp1650[3U];
        }
        tracep->fullWData(oldp+124,(__Vtemp1651),128);
        VL_EXTEND_WQ(128,54, __Vtemp1652, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp1653, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
            __Vtemp1654[0U] = __Vtemp1652[0U];
            __Vtemp1654[1U] = __Vtemp1652[1U];
            __Vtemp1654[2U] = __Vtemp1652[2U];
            __Vtemp1654[3U] = __Vtemp1652[3U];
        } else {
            __Vtemp1654[0U] = __Vtemp1653[0U];
            __Vtemp1654[1U] = __Vtemp1653[1U];
            __Vtemp1654[2U] = __Vtemp1653[2U];
            __Vtemp1654[3U] = __Vtemp1653[3U];
        }
        tracep->fullWData(oldp+128,(__Vtemp1654),128);
        tracep->fullBit(oldp+132,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready) 
                                   & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)))));
        tracep->fullCData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index),6);
        tracep->fullBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
        tracep->fullBit(oldp+135,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        tracep->fullQData(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit));
        tracep->fullQData(oldp+139,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 3U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U]))))),64);
        tracep->fullBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit));
        tracep->fullQData(oldp+142,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 3U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U]))))),64);
        tracep->fullBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        tracep->fullBit(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        tracep->fullCData(oldp+146,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        tracep->fullBit(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        tracep->fullQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        tracep->fullCData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        tracep->fullBit(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid));
        tracep->fullQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit),64);
        tracep->fullBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr),64);
        tracep->fullQData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata),64);
        tracep->fullCData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb),8);
        tracep->fullBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
        tracep->fullBit(oldp+162,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+163,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1));
        tracep->fullQData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullCData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullWData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullBit(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullQData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit),64);
        tracep->fullBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0));
        tracep->fullBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2));
        tracep->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1));
        tracep->fullBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4));
        tracep->fullBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullCData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        tracep->fullBit(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
        tracep->fullQData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+230,(((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1))));
        tracep->fullBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid));
        tracep->fullQData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data),64);
        tracep->fullQData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        tracep->fullQData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+238,(((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                           >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid));
        tracep->fullBit(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        tracep->fullBit(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        tracep->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        tracep->fullBit(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        tracep->fullQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        tracep->fullBit(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        tracep->fullQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T));
        tracep->fullBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        __Vtemp1657[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
        __Vtemp1657[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                                   >> 0x20U));
        __Vtemp1657[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
        __Vtemp1657[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                                   >> 0x20U));
        __Vtemp1657[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
        __Vtemp1657[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                                   >> 0x20U));
        __Vtemp1657[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
        __Vtemp1657[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                                   >> 0x20U));
        tracep->fullQData(oldp+253,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                      ? (((QData)((IData)(
                                                          __Vtemp1657[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 __Vtemp1657[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               __Vtemp1657[
                                                               (6U 
                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                      << 6U)))))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0));
        tracep->fullIData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4),32);
        __Vtemp1660[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0);
        __Vtemp1660[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 
                                   >> 0x20U));
        __Vtemp1660[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1);
        __Vtemp1660[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 
                                   >> 0x20U));
        __Vtemp1660[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2);
        __Vtemp1660[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 
                                   >> 0x20U));
        __Vtemp1660[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3);
        __Vtemp1660[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 
                                   >> 0x20U));
        tracep->fullQData(oldp+257,((((QData)((IData)(
                                                      __Vtemp1660[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                            << 6U))) 
                                                       >> 5U)])) 
                                      << ((0U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                     << 6U)))
                                           ? 0x20U : 
                                          ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                 << 6U))))) 
                                     | (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                    << 6U)))
                                          ? 0ULL : 
                                         ((QData)((IData)(
                                                          __Vtemp1660[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                    << 6U))))) 
                                        | ((QData)((IData)(
                                                           __Vtemp1660[
                                                           (6U 
                                                            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                               << 1U))])) 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                  << 6U)))))),64);
        tracep->fullBit(oldp+259,((1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3) 
                                           << 3U) | 
                                          (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2) 
                                            << 2U) 
                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1) 
                                               << 1U) 
                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0)))) 
                                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)))));
        tracep->fullBit(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullCData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        tracep->fullCData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        tracep->fullQData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        tracep->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        tracep->fullQData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        tracep->fullQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        tracep->fullCData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        tracep->fullCData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        tracep->fullBit(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        tracep->fullBit(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        tracep->fullBit(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        tracep->fullBit(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        tracep->fullBit(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq));
        tracep->fullBit(oldp+280,((((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid) 
                                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)))));
        tracep->fullIData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst),32);
        tracep->fullBit(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2));
        tracep->fullQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        tracep->fullQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        tracep->fullQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        tracep->fullQData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        tracep->fullIData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        tracep->fullIData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        tracep->fullIData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        tracep->fullIData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        tracep->fullBit(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        tracep->fullBit(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        tracep->fullBit(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        tracep->fullBit(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        tracep->fullBit(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullCData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullCData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        tracep->fullBit(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size));
        tracep->fullBit(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq));
        tracep->fullQData(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc),64);
        tracep->fullBit(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        tracep->fullWData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
        tracep->fullWData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
        tracep->fullWData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
        tracep->fullWData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
        tracep->fullWData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
        tracep->fullWData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
        tracep->fullWData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
        tracep->fullWData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
        tracep->fullWData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
        tracep->fullWData(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
        tracep->fullWData(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
        tracep->fullWData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
        tracep->fullWData(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
        tracep->fullWData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
        tracep->fullWData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
        tracep->fullWData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
        tracep->fullWData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
        tracep->fullWData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
        tracep->fullWData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
        tracep->fullWData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
        tracep->fullWData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
        tracep->fullWData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
        tracep->fullWData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
        tracep->fullWData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
        tracep->fullWData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
        tracep->fullWData(oldp+411,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
        tracep->fullWData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
        tracep->fullWData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
        tracep->fullWData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
        tracep->fullWData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
        tracep->fullWData(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
        tracep->fullWData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
        tracep->fullWData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
        tracep->fullWData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
        tracep->fullWData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
        tracep->fullWData(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
        tracep->fullWData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
        tracep->fullWData(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
        tracep->fullWData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
        tracep->fullWData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
        tracep->fullWData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
        tracep->fullWData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
        tracep->fullWData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
        tracep->fullWData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
        tracep->fullWData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
        tracep->fullWData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
        tracep->fullWData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
        tracep->fullWData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
        tracep->fullWData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
        tracep->fullWData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
        tracep->fullWData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
        tracep->fullWData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
        tracep->fullWData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
        tracep->fullWData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
        tracep->fullWData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
        tracep->fullWData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
        tracep->fullWData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
        tracep->fullWData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
        tracep->fullWData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
        tracep->fullWData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
        tracep->fullWData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
        tracep->fullWData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
        tracep->fullWData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
        tracep->fullWData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
        tracep->fullQData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
        tracep->fullQData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
        tracep->fullQData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
        tracep->fullQData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
        tracep->fullQData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
        tracep->fullQData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
        tracep->fullCData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        tracep->fullCData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        tracep->fullCData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        tracep->fullCData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        tracep->fullCData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        tracep->fullCData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        tracep->fullCData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        tracep->fullCData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        tracep->fullCData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        tracep->fullCData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        tracep->fullCData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        tracep->fullCData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        tracep->fullCData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        tracep->fullCData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        tracep->fullCData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        tracep->fullCData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        tracep->fullCData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        tracep->fullCData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        tracep->fullCData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        tracep->fullCData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        tracep->fullCData(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        tracep->fullCData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        tracep->fullCData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        tracep->fullCData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        tracep->fullCData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        tracep->fullCData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        tracep->fullCData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        tracep->fullCData(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        tracep->fullCData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        tracep->fullCData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        tracep->fullCData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        tracep->fullCData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        tracep->fullCData(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        tracep->fullCData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        tracep->fullCData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        tracep->fullCData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        tracep->fullCData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        tracep->fullCData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        tracep->fullCData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        tracep->fullCData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        tracep->fullCData(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        tracep->fullCData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        tracep->fullCData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        tracep->fullCData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        tracep->fullCData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        tracep->fullCData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        tracep->fullCData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        tracep->fullCData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        tracep->fullCData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        tracep->fullCData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        tracep->fullCData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        tracep->fullCData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        tracep->fullCData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        tracep->fullCData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        tracep->fullCData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        tracep->fullCData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        tracep->fullCData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        tracep->fullCData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        tracep->fullCData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        tracep->fullCData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        tracep->fullCData(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        tracep->fullCData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        tracep->fullCData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        tracep->fullCData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        tracep->fullCData(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        tracep->fullBit(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullCData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullBit(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        tracep->fullSData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+663,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus),64);
        tracep->fullQData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie),64);
        tracep->fullQData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc),64);
        tracep->fullQData(oldp+671,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2));
        tracep->fullCData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3),64);
        tracep->fullBit(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T));
        tracep->fullSData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except));
        tracep->fullBit(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq));
        tracep->fullCData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit));
        tracep->fullIData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        tracep->fullBit(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        tracep->fullBit(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        tracep->fullQData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data),64);
        tracep->fullQData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data),64);
        tracep->fullCData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullCData(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq));
        tracep->fullBit(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq));
        tracep->fullBit(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
        tracep->fullBit(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        tracep->fullBit(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T));
        tracep->fullQData(oldp+714,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                      : 0ULL)),64);
        tracep->fullBit(oldp+716,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U])));
        tracep->fullQData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T),64);
        tracep->fullQData(oldp+719,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2)
                                      ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                      : 0ULL)),64);
        tracep->fullQData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+727,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))));
        tracep->fullQData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullBit(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp1662, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp1663, __Vtemp1662, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp1664[0U] = __Vtemp1663[0U];
        __Vtemp1664[1U] = __Vtemp1663[1U];
        __Vtemp1664[2U] = __Vtemp1663[2U];
        __Vtemp1664[3U] = (0x7fffffffU & __Vtemp1663[3U]);
        tracep->fullWData(oldp+732,(__Vtemp1664),127);
        tracep->fullBit(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        __Vtemp1665[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp1665[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 0x20U));
        __Vtemp1665[2U] = 1U;
        tracep->fullWData(oldp+737,(__Vtemp1665),65);
        tracep->fullQData(oldp+740,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        tracep->fullQData(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        tracep->fullBit(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid));
        tracep->fullQData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullQData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullCData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        tracep->fullQData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        tracep->fullBit(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        tracep->fullWData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        tracep->fullBit(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        tracep->fullQData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data),64);
        tracep->fullBit(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid));
        tracep->fullQData(oldp+769,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                                      ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                          ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                              >> 0x1fU))))) 
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
                                                                  (- (IData)(
                                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                              >> 0x1fU))))) 
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
                                                              (- (IData)(
                                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                          >> 0x1fU))))) 
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
        tracep->fullBit(oldp+771,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+772,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
        tracep->fullBit(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid));
        tracep->fullQData(oldp+774,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                      ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                          >> 0x1fU))))) 
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
                                                              (- (IData)(
                                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))),64);
        tracep->fullBit(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullWData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        tracep->fullCData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend),65);
        tracep->fullWData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor),65);
        tracep->fullWData(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem),65);
        tracep->fullWData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor),65);
        tracep->fullBit(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid));
        tracep->fullQData(oldp+806,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                      >> 0x1fU))))) 
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
        tracep->fullBit(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullCData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        tracep->fullCData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullWData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2),65);
        tracep->fullBit(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
        tracep->fullQData(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data),64);
        tracep->fullBit(oldp+832,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2) 
                                   & ((0U != (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        __Vtemp1672[0U] = 0U;
        __Vtemp1672[1U] = 0U;
        __Vtemp1672[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
        __Vtemp1672[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
                                   >> 0x20U));
        __Vtemp1672[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
        __Vtemp1672[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                   >> 0x20U));
        __Vtemp1672[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
        __Vtemp1672[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                   >> 0x20U));
        __Vtemp1672[8U] = 0U;
        __Vtemp1672[9U] = 0U;
        __Vtemp1672[0xaU] = (IData)(((0xffffffffffffffe0ULL 
                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                     | (QData)((IData)(
                                                       (0x1fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))));
        __Vtemp1672[0xbU] = (IData)((((0xffffffffffffffe0ULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                      | (QData)((IData)(
                                                        (0x1fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))) 
                                     >> 0x20U));
        __Vtemp1672[0xcU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
        __Vtemp1672[0xdU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                     >> 0x20U));
        __Vtemp1672[0xeU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
        __Vtemp1672[0xfU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                     >> 0x20U));
        tracep->fullQData(oldp+833,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? (0x80ULL | 
                                         ((0xffffffffffffff77ULL 
                                           & vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus) 
                                          | (QData)((IData)(
                                                            (8U 
                                                             & ((IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
                                                                         >> 7U)) 
                                                                << 3U))))))
                                      : (((QData)((IData)(
                                                          __Vtemp1672[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x1c0U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                << 4U))) 
                                                           >> 5U)])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp1672[
                                                           (0xeU 
                                                            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                               >> 1U))]))))),64);
        tracep->fullSData(oldp+835,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                      ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except));
        tracep->fullCData(oldp+837,(((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                      ? 0xbU : (3U 
                                                & (- (IData)(
                                                             (8U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                  >> 2U)))))))),6);
        tracep->fullBit(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc));
        tracep->fullQData(oldp+839,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+843,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullBit(oldp+845,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+846,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+848,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                            >> 0xfU))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x7c0U 
                                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                >> 9U))) 
                                                           >> 5U)])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                           (0x3eU 
                                                            & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                               >> 0xeU))]))))),64);
        tracep->fullQData(oldp+850,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                            >> 0x14U))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x7c0U 
                                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                >> 0xeU))) 
                                                           >> 5U)])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                           (0x3eU 
                                                            & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                               >> 0x13U))]))))),64);
        tracep->fullQData(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data),64);
        tracep->fullCData(oldp+854,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+855,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+856,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType),4);
        tracep->fullQData(oldp+858,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
        tracep->fullQData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
        tracep->fullQData(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
        tracep->fullQData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
        tracep->fullQData(oldp+866,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
        tracep->fullQData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
        tracep->fullQData(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
        tracep->fullQData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
        tracep->fullQData(oldp+874,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
        tracep->fullQData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
        tracep->fullQData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
        tracep->fullQData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
        tracep->fullQData(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
        tracep->fullQData(oldp+884,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
        tracep->fullQData(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
        tracep->fullQData(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
        tracep->fullQData(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
        tracep->fullQData(oldp+892,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
        tracep->fullQData(oldp+894,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
        tracep->fullQData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
        tracep->fullQData(oldp+898,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
        tracep->fullQData(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
        tracep->fullQData(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
        tracep->fullQData(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
        tracep->fullQData(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
        tracep->fullQData(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
        tracep->fullQData(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
        tracep->fullQData(oldp+912,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
        tracep->fullQData(oldp+914,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
        tracep->fullQData(oldp+916,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
        tracep->fullQData(oldp+918,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
        tracep->fullQData(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
        tracep->fullBit(oldp+922,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        tracep->fullIData(oldp+923,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        tracep->fullQData(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        tracep->fullQData(oldp+926,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        tracep->fullBit(oldp+928,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        tracep->fullBit(oldp+929,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        tracep->fullCData(oldp+930,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullQData(oldp+931,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+933,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+935,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+937,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+939,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+941,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+943,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+945,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+947,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullBit(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq));
        tracep->fullQData(oldp+950,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+952,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+954,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullQData(oldp+955,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+957,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+958,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullQData(oldp+959,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullBit(oldp+961,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullQData(oldp+962,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                      ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                      : vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+964,((((QData)((IData)(
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                       >> 7U)))) 
                                                        << 0x18U) 
                                                       | ((0xff0000U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                             >> 6U)))) 
                                                              << 0x10U)) 
                                                          | ((0xff00U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 5U)))) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 4U)))))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 3U)))) 
                                                                    << 0x18U) 
                                                                   | ((0xff0000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 2U)))) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 1U)))) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb)))))))))))),64);
        tracep->fullBit(oldp+966,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                   & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid))));
        tracep->fullWData(oldp+967,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
        tracep->fullWData(oldp+971,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
        tracep->fullWData(oldp+975,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
        tracep->fullWData(oldp+979,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
        tracep->fullWData(oldp+983,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
        tracep->fullWData(oldp+987,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
        tracep->fullWData(oldp+991,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
        tracep->fullWData(oldp+995,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
        tracep->fullWData(oldp+999,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
        tracep->fullWData(oldp+1003,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
        tracep->fullWData(oldp+1007,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
        tracep->fullWData(oldp+1011,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
        tracep->fullWData(oldp+1015,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
        tracep->fullWData(oldp+1019,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
        tracep->fullWData(oldp+1023,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
        tracep->fullWData(oldp+1027,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
        tracep->fullWData(oldp+1031,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
        tracep->fullWData(oldp+1035,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
        tracep->fullWData(oldp+1039,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
        tracep->fullWData(oldp+1043,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
        tracep->fullWData(oldp+1047,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
        tracep->fullWData(oldp+1051,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
        tracep->fullWData(oldp+1055,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
        tracep->fullWData(oldp+1059,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
        tracep->fullWData(oldp+1063,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
        tracep->fullWData(oldp+1067,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
        tracep->fullWData(oldp+1071,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
        tracep->fullWData(oldp+1075,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
        tracep->fullWData(oldp+1079,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
        tracep->fullWData(oldp+1083,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
        tracep->fullWData(oldp+1087,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
        tracep->fullWData(oldp+1091,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
        tracep->fullWData(oldp+1095,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
        tracep->fullWData(oldp+1099,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
        tracep->fullWData(oldp+1103,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
        tracep->fullWData(oldp+1107,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
        tracep->fullWData(oldp+1111,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
        tracep->fullWData(oldp+1115,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
        tracep->fullWData(oldp+1119,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
        tracep->fullWData(oldp+1123,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
        tracep->fullWData(oldp+1127,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
        tracep->fullWData(oldp+1131,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
        tracep->fullWData(oldp+1135,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
        tracep->fullWData(oldp+1139,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
        tracep->fullWData(oldp+1143,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
        tracep->fullWData(oldp+1147,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
        tracep->fullWData(oldp+1151,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
        tracep->fullWData(oldp+1155,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
        tracep->fullWData(oldp+1159,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
        tracep->fullWData(oldp+1163,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
        tracep->fullWData(oldp+1167,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
        tracep->fullWData(oldp+1171,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
        tracep->fullWData(oldp+1175,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
        tracep->fullWData(oldp+1179,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
        tracep->fullWData(oldp+1183,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
        tracep->fullWData(oldp+1187,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
        tracep->fullWData(oldp+1191,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
        tracep->fullWData(oldp+1195,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
        tracep->fullWData(oldp+1199,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
        tracep->fullWData(oldp+1203,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
        tracep->fullWData(oldp+1207,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
        tracep->fullWData(oldp+1211,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
        tracep->fullWData(oldp+1215,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
        tracep->fullWData(oldp+1219,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
        tracep->fullWData(oldp+1223,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
        tracep->fullWData(oldp+1227,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
        tracep->fullWData(oldp+1231,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
        tracep->fullWData(oldp+1235,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
        tracep->fullWData(oldp+1239,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
        tracep->fullWData(oldp+1243,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
        tracep->fullWData(oldp+1247,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
        tracep->fullWData(oldp+1251,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
        tracep->fullWData(oldp+1255,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
        tracep->fullWData(oldp+1259,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
        tracep->fullWData(oldp+1263,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
        tracep->fullWData(oldp+1267,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
        tracep->fullWData(oldp+1271,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
        tracep->fullWData(oldp+1275,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
        tracep->fullWData(oldp+1279,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
        tracep->fullWData(oldp+1283,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
        tracep->fullWData(oldp+1287,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
        tracep->fullWData(oldp+1291,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
        tracep->fullWData(oldp+1295,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
        tracep->fullWData(oldp+1299,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
        tracep->fullWData(oldp+1303,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
        tracep->fullWData(oldp+1307,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
        tracep->fullWData(oldp+1311,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
        tracep->fullWData(oldp+1315,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
        tracep->fullWData(oldp+1319,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
        tracep->fullWData(oldp+1323,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
        tracep->fullWData(oldp+1327,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
        tracep->fullWData(oldp+1331,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
        tracep->fullWData(oldp+1335,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
        tracep->fullWData(oldp+1339,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
        tracep->fullWData(oldp+1343,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
        tracep->fullWData(oldp+1347,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
        tracep->fullWData(oldp+1351,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
        tracep->fullWData(oldp+1355,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
        tracep->fullWData(oldp+1359,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
        tracep->fullWData(oldp+1363,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
        tracep->fullWData(oldp+1367,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
        tracep->fullWData(oldp+1371,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
        tracep->fullWData(oldp+1375,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
        tracep->fullWData(oldp+1379,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
        tracep->fullWData(oldp+1383,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
        tracep->fullWData(oldp+1387,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
        tracep->fullWData(oldp+1391,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
        tracep->fullWData(oldp+1395,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
        tracep->fullWData(oldp+1399,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
        tracep->fullWData(oldp+1403,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
        tracep->fullWData(oldp+1407,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
        tracep->fullWData(oldp+1411,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
        tracep->fullWData(oldp+1415,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
        tracep->fullWData(oldp+1419,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
        tracep->fullWData(oldp+1423,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
        tracep->fullWData(oldp+1427,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
        tracep->fullWData(oldp+1431,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
        tracep->fullWData(oldp+1435,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
        tracep->fullWData(oldp+1439,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
        tracep->fullWData(oldp+1443,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
        tracep->fullWData(oldp+1447,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
        tracep->fullWData(oldp+1451,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
        tracep->fullWData(oldp+1455,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
        tracep->fullWData(oldp+1459,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
        tracep->fullWData(oldp+1463,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
        tracep->fullWData(oldp+1467,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
        tracep->fullWData(oldp+1471,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
        tracep->fullWData(oldp+1475,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
        tracep->fullWData(oldp+1479,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
        tracep->fullWData(oldp+1483,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
        tracep->fullWData(oldp+1487,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
        tracep->fullWData(oldp+1491,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
        tracep->fullWData(oldp+1495,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
        tracep->fullWData(oldp+1499,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
        tracep->fullWData(oldp+1503,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
        tracep->fullWData(oldp+1507,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
        tracep->fullWData(oldp+1511,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
        tracep->fullWData(oldp+1515,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
        tracep->fullWData(oldp+1519,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
        tracep->fullWData(oldp+1523,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
        tracep->fullWData(oldp+1527,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
        tracep->fullWData(oldp+1531,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
        tracep->fullWData(oldp+1535,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
        tracep->fullWData(oldp+1539,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
        tracep->fullWData(oldp+1543,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
        tracep->fullWData(oldp+1547,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
        tracep->fullWData(oldp+1551,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
        tracep->fullWData(oldp+1555,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
        tracep->fullWData(oldp+1559,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
        tracep->fullWData(oldp+1563,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
        tracep->fullWData(oldp+1567,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
        tracep->fullWData(oldp+1571,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
        tracep->fullWData(oldp+1575,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
        tracep->fullWData(oldp+1579,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
        tracep->fullWData(oldp+1583,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
        tracep->fullWData(oldp+1587,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
        tracep->fullWData(oldp+1591,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
        tracep->fullWData(oldp+1595,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
        tracep->fullWData(oldp+1599,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
        tracep->fullWData(oldp+1603,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
        tracep->fullWData(oldp+1607,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
        tracep->fullWData(oldp+1611,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
        tracep->fullWData(oldp+1615,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
        tracep->fullWData(oldp+1619,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
        tracep->fullWData(oldp+1623,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
        tracep->fullWData(oldp+1627,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
        tracep->fullWData(oldp+1631,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
        tracep->fullWData(oldp+1635,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
        tracep->fullWData(oldp+1639,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
        tracep->fullWData(oldp+1643,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
        tracep->fullWData(oldp+1647,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
        tracep->fullWData(oldp+1651,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
        tracep->fullWData(oldp+1655,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
        tracep->fullWData(oldp+1659,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
        tracep->fullWData(oldp+1663,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
        tracep->fullWData(oldp+1667,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
        tracep->fullWData(oldp+1671,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
        tracep->fullWData(oldp+1675,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
        tracep->fullWData(oldp+1679,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
        tracep->fullWData(oldp+1683,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
        tracep->fullWData(oldp+1687,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
        tracep->fullWData(oldp+1691,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
        tracep->fullWData(oldp+1695,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
        tracep->fullWData(oldp+1699,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
        tracep->fullWData(oldp+1703,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
        tracep->fullWData(oldp+1707,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
        tracep->fullWData(oldp+1711,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
        tracep->fullWData(oldp+1715,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
        tracep->fullWData(oldp+1719,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
        tracep->fullWData(oldp+1723,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
        tracep->fullWData(oldp+1727,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
        tracep->fullWData(oldp+1731,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
        tracep->fullWData(oldp+1735,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
        tracep->fullWData(oldp+1739,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
        tracep->fullWData(oldp+1743,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
        tracep->fullWData(oldp+1747,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
        tracep->fullWData(oldp+1751,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
        tracep->fullWData(oldp+1755,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
        tracep->fullWData(oldp+1759,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
        tracep->fullWData(oldp+1763,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
        tracep->fullWData(oldp+1767,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
        tracep->fullWData(oldp+1771,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
        tracep->fullWData(oldp+1775,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
        tracep->fullWData(oldp+1779,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
        tracep->fullWData(oldp+1783,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
        tracep->fullWData(oldp+1787,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
        tracep->fullWData(oldp+1791,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
        tracep->fullWData(oldp+1795,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
        tracep->fullWData(oldp+1799,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
        tracep->fullWData(oldp+1803,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
        tracep->fullWData(oldp+1807,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
        tracep->fullWData(oldp+1811,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
        tracep->fullWData(oldp+1815,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
        tracep->fullWData(oldp+1819,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
        tracep->fullWData(oldp+1823,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
        tracep->fullWData(oldp+1827,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
        tracep->fullWData(oldp+1831,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
        tracep->fullWData(oldp+1835,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
        tracep->fullWData(oldp+1839,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
        tracep->fullWData(oldp+1843,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
        tracep->fullWData(oldp+1847,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
        tracep->fullWData(oldp+1851,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
        tracep->fullWData(oldp+1855,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
        tracep->fullWData(oldp+1859,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
        tracep->fullWData(oldp+1863,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
        tracep->fullWData(oldp+1867,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
        tracep->fullWData(oldp+1871,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
        tracep->fullWData(oldp+1875,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
        tracep->fullWData(oldp+1879,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
        tracep->fullWData(oldp+1883,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
        tracep->fullWData(oldp+1887,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
        tracep->fullWData(oldp+1891,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
        tracep->fullWData(oldp+1895,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
        tracep->fullWData(oldp+1899,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
        tracep->fullWData(oldp+1903,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
        tracep->fullWData(oldp+1907,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
        tracep->fullWData(oldp+1911,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
        tracep->fullWData(oldp+1915,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
        tracep->fullWData(oldp+1919,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
        tracep->fullWData(oldp+1923,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
        tracep->fullWData(oldp+1927,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
        tracep->fullWData(oldp+1931,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
        tracep->fullWData(oldp+1935,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
        tracep->fullWData(oldp+1939,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
        tracep->fullWData(oldp+1943,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
        tracep->fullWData(oldp+1947,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
        tracep->fullWData(oldp+1951,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
        tracep->fullWData(oldp+1955,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
        tracep->fullWData(oldp+1959,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
        tracep->fullWData(oldp+1963,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
        tracep->fullWData(oldp+1967,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
        tracep->fullWData(oldp+1971,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
        tracep->fullWData(oldp+1975,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
        tracep->fullWData(oldp+1979,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
        tracep->fullWData(oldp+1983,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
        tracep->fullWData(oldp+1987,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
        tracep->fullWData(oldp+1991,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
        tracep->fullWData(oldp+1995,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
        tracep->fullWData(oldp+1999,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
        tracep->fullWData(oldp+2003,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
        tracep->fullWData(oldp+2007,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
        tracep->fullWData(oldp+2011,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
        tracep->fullWData(oldp+2015,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
        tracep->fullWData(oldp+2019,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
        tracep->fullWData(oldp+2023,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
        tracep->fullWData(oldp+2027,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
        tracep->fullWData(oldp+2031,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
        tracep->fullWData(oldp+2035,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
        tracep->fullWData(oldp+2039,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
        tracep->fullWData(oldp+2043,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
        tracep->fullWData(oldp+2047,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
        tracep->fullWData(oldp+2051,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
        tracep->fullWData(oldp+2055,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
        tracep->fullWData(oldp+2059,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
        tracep->fullWData(oldp+2063,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
        tracep->fullWData(oldp+2067,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
        tracep->fullWData(oldp+2071,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
        tracep->fullWData(oldp+2075,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
        tracep->fullWData(oldp+2079,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
        tracep->fullWData(oldp+2083,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
        tracep->fullWData(oldp+2087,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
        tracep->fullWData(oldp+2091,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
        tracep->fullWData(oldp+2095,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
        tracep->fullWData(oldp+2099,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
        tracep->fullWData(oldp+2103,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
        tracep->fullWData(oldp+2107,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
        tracep->fullWData(oldp+2111,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
        tracep->fullWData(oldp+2115,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
        tracep->fullWData(oldp+2119,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
        tracep->fullWData(oldp+2123,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
        tracep->fullWData(oldp+2127,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
        tracep->fullWData(oldp+2131,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
        tracep->fullWData(oldp+2135,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
        tracep->fullWData(oldp+2139,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
        tracep->fullWData(oldp+2143,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
        tracep->fullWData(oldp+2147,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
        tracep->fullWData(oldp+2151,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
        tracep->fullWData(oldp+2155,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
        tracep->fullWData(oldp+2159,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
        tracep->fullWData(oldp+2163,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
        tracep->fullWData(oldp+2167,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
        tracep->fullWData(oldp+2171,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
        tracep->fullWData(oldp+2175,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
        tracep->fullWData(oldp+2179,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
        tracep->fullWData(oldp+2183,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
        tracep->fullWData(oldp+2187,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
        tracep->fullWData(oldp+2191,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
        tracep->fullWData(oldp+2195,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
        tracep->fullWData(oldp+2199,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
        tracep->fullWData(oldp+2203,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
        tracep->fullWData(oldp+2207,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
        tracep->fullWData(oldp+2211,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
        tracep->fullWData(oldp+2215,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
        tracep->fullWData(oldp+2219,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
        tracep->fullWData(oldp+2223,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
        tracep->fullWData(oldp+2227,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
        tracep->fullWData(oldp+2231,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
        tracep->fullWData(oldp+2235,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
        tracep->fullWData(oldp+2239,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
        tracep->fullWData(oldp+2243,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
        tracep->fullWData(oldp+2247,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
        tracep->fullWData(oldp+2251,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
        tracep->fullWData(oldp+2255,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
        tracep->fullWData(oldp+2259,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
        tracep->fullWData(oldp+2263,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
        tracep->fullWData(oldp+2267,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
        tracep->fullWData(oldp+2271,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
        tracep->fullWData(oldp+2275,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
        tracep->fullWData(oldp+2279,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
        tracep->fullWData(oldp+2283,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
        tracep->fullWData(oldp+2287,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
        tracep->fullWData(oldp+2291,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
        tracep->fullWData(oldp+2295,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
        tracep->fullWData(oldp+2299,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
        tracep->fullWData(oldp+2303,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
        tracep->fullWData(oldp+2307,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
        tracep->fullWData(oldp+2311,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
        tracep->fullWData(oldp+2315,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
        tracep->fullWData(oldp+2319,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
        tracep->fullWData(oldp+2323,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
        tracep->fullWData(oldp+2327,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
        tracep->fullWData(oldp+2331,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
        tracep->fullWData(oldp+2335,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
        tracep->fullWData(oldp+2339,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
        tracep->fullWData(oldp+2343,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
        tracep->fullWData(oldp+2347,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
        tracep->fullWData(oldp+2351,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
        tracep->fullWData(oldp+2355,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
        tracep->fullWData(oldp+2359,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
        tracep->fullWData(oldp+2363,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
        tracep->fullWData(oldp+2367,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
        tracep->fullWData(oldp+2371,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
        tracep->fullWData(oldp+2375,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
        tracep->fullWData(oldp+2379,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
        tracep->fullWData(oldp+2383,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
        tracep->fullWData(oldp+2387,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
        tracep->fullWData(oldp+2391,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
        tracep->fullWData(oldp+2395,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
        tracep->fullWData(oldp+2399,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
        tracep->fullWData(oldp+2403,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
        tracep->fullWData(oldp+2407,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
        tracep->fullWData(oldp+2411,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
        tracep->fullWData(oldp+2415,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
        tracep->fullWData(oldp+2419,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
        tracep->fullWData(oldp+2423,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
        tracep->fullWData(oldp+2427,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
        tracep->fullWData(oldp+2431,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
        tracep->fullWData(oldp+2435,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
        tracep->fullWData(oldp+2439,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
        tracep->fullWData(oldp+2443,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
        tracep->fullWData(oldp+2447,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
        tracep->fullWData(oldp+2451,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
        tracep->fullWData(oldp+2455,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
        tracep->fullWData(oldp+2459,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
        tracep->fullWData(oldp+2463,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
        tracep->fullWData(oldp+2467,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
        tracep->fullWData(oldp+2471,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
        tracep->fullWData(oldp+2475,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
        tracep->fullWData(oldp+2479,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
        tracep->fullWData(oldp+2483,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
        tracep->fullWData(oldp+2487,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
        tracep->fullWData(oldp+2491,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
        tracep->fullWData(oldp+2495,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
        tracep->fullWData(oldp+2499,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
        tracep->fullWData(oldp+2503,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
        tracep->fullWData(oldp+2507,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
        tracep->fullWData(oldp+2511,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
        tracep->fullWData(oldp+2515,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
        tracep->fullWData(oldp+2519,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
        tracep->fullWData(oldp+2523,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
        tracep->fullWData(oldp+2527,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
        tracep->fullWData(oldp+2531,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
        tracep->fullWData(oldp+2535,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
        tracep->fullWData(oldp+2539,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
        tracep->fullWData(oldp+2543,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
        tracep->fullWData(oldp+2547,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
        tracep->fullWData(oldp+2551,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
        tracep->fullWData(oldp+2555,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
        tracep->fullWData(oldp+2559,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
        tracep->fullWData(oldp+2563,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
        tracep->fullWData(oldp+2567,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
        tracep->fullWData(oldp+2571,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
        tracep->fullWData(oldp+2575,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
        tracep->fullWData(oldp+2579,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
        tracep->fullWData(oldp+2583,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
        tracep->fullWData(oldp+2587,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
        tracep->fullWData(oldp+2591,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
        tracep->fullWData(oldp+2595,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
        tracep->fullWData(oldp+2599,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
        tracep->fullWData(oldp+2603,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
        tracep->fullWData(oldp+2607,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
        tracep->fullWData(oldp+2611,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
        tracep->fullWData(oldp+2615,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
        tracep->fullWData(oldp+2619,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
        tracep->fullWData(oldp+2623,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
        tracep->fullWData(oldp+2627,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
        tracep->fullWData(oldp+2631,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
        tracep->fullWData(oldp+2635,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
        tracep->fullWData(oldp+2639,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
        tracep->fullWData(oldp+2643,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
        tracep->fullWData(oldp+2647,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
        tracep->fullWData(oldp+2651,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
        tracep->fullWData(oldp+2655,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
        tracep->fullWData(oldp+2659,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
        tracep->fullWData(oldp+2663,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
        tracep->fullWData(oldp+2667,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
        tracep->fullWData(oldp+2671,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
        tracep->fullWData(oldp+2675,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
        tracep->fullWData(oldp+2679,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
        tracep->fullWData(oldp+2683,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
        tracep->fullWData(oldp+2687,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
        tracep->fullWData(oldp+2691,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
        tracep->fullWData(oldp+2695,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
        tracep->fullWData(oldp+2699,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
        tracep->fullWData(oldp+2703,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
        tracep->fullWData(oldp+2707,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
        tracep->fullWData(oldp+2711,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
        tracep->fullWData(oldp+2715,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
        tracep->fullWData(oldp+2719,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
        tracep->fullWData(oldp+2723,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
        tracep->fullWData(oldp+2727,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
        tracep->fullWData(oldp+2731,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
        tracep->fullWData(oldp+2735,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
        tracep->fullWData(oldp+2739,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
        tracep->fullWData(oldp+2743,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
        tracep->fullWData(oldp+2747,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
        tracep->fullWData(oldp+2751,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
        tracep->fullWData(oldp+2755,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
        tracep->fullWData(oldp+2759,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
        tracep->fullWData(oldp+2763,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
        tracep->fullWData(oldp+2767,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
        tracep->fullWData(oldp+2771,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
        tracep->fullWData(oldp+2775,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
        tracep->fullWData(oldp+2779,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
        tracep->fullWData(oldp+2783,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
        tracep->fullWData(oldp+2787,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
        tracep->fullWData(oldp+2791,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
        tracep->fullWData(oldp+2795,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
        tracep->fullWData(oldp+2799,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
        tracep->fullWData(oldp+2803,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
        tracep->fullWData(oldp+2807,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
        tracep->fullWData(oldp+2811,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
        tracep->fullWData(oldp+2815,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
        tracep->fullWData(oldp+2819,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
        tracep->fullWData(oldp+2823,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
        tracep->fullWData(oldp+2827,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
        tracep->fullWData(oldp+2831,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
        tracep->fullWData(oldp+2835,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
        tracep->fullWData(oldp+2839,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
        tracep->fullWData(oldp+2843,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
        tracep->fullWData(oldp+2847,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
        tracep->fullWData(oldp+2851,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
        tracep->fullWData(oldp+2855,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
        tracep->fullWData(oldp+2859,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
        tracep->fullWData(oldp+2863,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
        tracep->fullWData(oldp+2867,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
        tracep->fullWData(oldp+2871,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
        tracep->fullWData(oldp+2875,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
        tracep->fullWData(oldp+2879,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
        tracep->fullWData(oldp+2883,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
        tracep->fullWData(oldp+2887,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
        tracep->fullWData(oldp+2891,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
        tracep->fullWData(oldp+2895,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
        tracep->fullWData(oldp+2899,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
        tracep->fullWData(oldp+2903,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
        tracep->fullWData(oldp+2907,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
        tracep->fullWData(oldp+2911,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
        tracep->fullWData(oldp+2915,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
        tracep->fullWData(oldp+2919,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
        tracep->fullWData(oldp+2923,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
        tracep->fullWData(oldp+2927,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
        tracep->fullWData(oldp+2931,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
        tracep->fullWData(oldp+2935,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
        tracep->fullWData(oldp+2939,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
        tracep->fullWData(oldp+2943,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
        tracep->fullWData(oldp+2947,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
        tracep->fullWData(oldp+2951,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
        tracep->fullWData(oldp+2955,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
        tracep->fullWData(oldp+2959,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
        tracep->fullWData(oldp+2963,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
        tracep->fullWData(oldp+2967,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
        tracep->fullWData(oldp+2971,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
        tracep->fullWData(oldp+2975,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
        tracep->fullWData(oldp+2979,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
        tracep->fullWData(oldp+2983,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
        tracep->fullWData(oldp+2987,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
        tracep->fullWData(oldp+2991,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
        tracep->fullWData(oldp+2995,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
        tracep->fullWData(oldp+2999,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
        tracep->fullWData(oldp+3003,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
        tracep->fullWData(oldp+3007,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
        tracep->fullWData(oldp+3011,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
        tracep->fullBit(oldp+3015,(vlSelf->clock));
        tracep->fullBit(oldp+3016,(vlSelf->reset));
        tracep->fullQData(oldp+3017,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+3019,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+3021,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+3023,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+3025,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+3027,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+3029,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+3031,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+3033,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+3035,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+3037,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+3039,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+3041,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+3043,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+3045,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+3047,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+3049,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+3051,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+3053,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+3055,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+3057,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+3059,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+3061,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+3063,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+3065,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+3067,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+3069,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+3071,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+3073,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+3075,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+3077,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+3079,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+3081,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+3083,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+3084,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+3085,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+3087,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+3088,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+3090,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+3092,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+3094,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+3096,(vlSelf->io_difftest_peripheral));
        __Vtemp1673[0U] = 0U;
        __Vtemp1673[1U] = 0U;
        __Vtemp1673[2U] = 0U;
        __Vtemp1673[3U] = 0U;
        tracep->fullWData(oldp+3097,(__Vtemp1673),128);
    }
}
