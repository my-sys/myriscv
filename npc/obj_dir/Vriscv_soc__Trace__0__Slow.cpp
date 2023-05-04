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
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declQuad(c+3208,"io_difftest_reg_0", false,-1, 63,0);
    tracep->declQuad(c+3210,"io_difftest_reg_1", false,-1, 63,0);
    tracep->declQuad(c+3212,"io_difftest_reg_2", false,-1, 63,0);
    tracep->declQuad(c+3214,"io_difftest_reg_3", false,-1, 63,0);
    tracep->declQuad(c+3216,"io_difftest_reg_4", false,-1, 63,0);
    tracep->declQuad(c+3218,"io_difftest_reg_5", false,-1, 63,0);
    tracep->declQuad(c+3220,"io_difftest_reg_6", false,-1, 63,0);
    tracep->declQuad(c+3222,"io_difftest_reg_7", false,-1, 63,0);
    tracep->declQuad(c+3224,"io_difftest_reg_8", false,-1, 63,0);
    tracep->declQuad(c+3226,"io_difftest_reg_9", false,-1, 63,0);
    tracep->declQuad(c+3228,"io_difftest_reg_10", false,-1, 63,0);
    tracep->declQuad(c+3230,"io_difftest_reg_11", false,-1, 63,0);
    tracep->declQuad(c+3232,"io_difftest_reg_12", false,-1, 63,0);
    tracep->declQuad(c+3234,"io_difftest_reg_13", false,-1, 63,0);
    tracep->declQuad(c+3236,"io_difftest_reg_14", false,-1, 63,0);
    tracep->declQuad(c+3238,"io_difftest_reg_15", false,-1, 63,0);
    tracep->declQuad(c+3240,"io_difftest_reg_16", false,-1, 63,0);
    tracep->declQuad(c+3242,"io_difftest_reg_17", false,-1, 63,0);
    tracep->declQuad(c+3244,"io_difftest_reg_18", false,-1, 63,0);
    tracep->declQuad(c+3246,"io_difftest_reg_19", false,-1, 63,0);
    tracep->declQuad(c+3248,"io_difftest_reg_20", false,-1, 63,0);
    tracep->declQuad(c+3250,"io_difftest_reg_21", false,-1, 63,0);
    tracep->declQuad(c+3252,"io_difftest_reg_22", false,-1, 63,0);
    tracep->declQuad(c+3254,"io_difftest_reg_23", false,-1, 63,0);
    tracep->declQuad(c+3256,"io_difftest_reg_24", false,-1, 63,0);
    tracep->declQuad(c+3258,"io_difftest_reg_25", false,-1, 63,0);
    tracep->declQuad(c+3260,"io_difftest_reg_26", false,-1, 63,0);
    tracep->declQuad(c+3262,"io_difftest_reg_27", false,-1, 63,0);
    tracep->declQuad(c+3264,"io_difftest_reg_28", false,-1, 63,0);
    tracep->declQuad(c+3266,"io_difftest_reg_29", false,-1, 63,0);
    tracep->declQuad(c+3268,"io_difftest_reg_30", false,-1, 63,0);
    tracep->declQuad(c+3270,"io_difftest_reg_31", false,-1, 63,0);
    tracep->declQuad(c+3272,"io_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3274,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+3275,"io_difftest_commit", false,-1);
    tracep->declQuad(c+3276,"io_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3278,"io_difftest_irq", false,-1);
    tracep->declQuad(c+3279,"io_difftest_mstatus", false,-1, 63,0);
    tracep->declQuad(c+3281,"io_difftest_mcause", false,-1, 63,0);
    tracep->declQuad(c+3283,"io_difftest_mepc", false,-1, 63,0);
    tracep->declQuad(c+3285,"io_difftest_mtvec", false,-1, 63,0);
    tracep->declBit(c+3287,"io_difftest_peripheral", false,-1);
    tracep->pushNamePrefix("riscv_soc ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declQuad(c+3208,"io_difftest_reg_0", false,-1, 63,0);
    tracep->declQuad(c+3210,"io_difftest_reg_1", false,-1, 63,0);
    tracep->declQuad(c+3212,"io_difftest_reg_2", false,-1, 63,0);
    tracep->declQuad(c+3214,"io_difftest_reg_3", false,-1, 63,0);
    tracep->declQuad(c+3216,"io_difftest_reg_4", false,-1, 63,0);
    tracep->declQuad(c+3218,"io_difftest_reg_5", false,-1, 63,0);
    tracep->declQuad(c+3220,"io_difftest_reg_6", false,-1, 63,0);
    tracep->declQuad(c+3222,"io_difftest_reg_7", false,-1, 63,0);
    tracep->declQuad(c+3224,"io_difftest_reg_8", false,-1, 63,0);
    tracep->declQuad(c+3226,"io_difftest_reg_9", false,-1, 63,0);
    tracep->declQuad(c+3228,"io_difftest_reg_10", false,-1, 63,0);
    tracep->declQuad(c+3230,"io_difftest_reg_11", false,-1, 63,0);
    tracep->declQuad(c+3232,"io_difftest_reg_12", false,-1, 63,0);
    tracep->declQuad(c+3234,"io_difftest_reg_13", false,-1, 63,0);
    tracep->declQuad(c+3236,"io_difftest_reg_14", false,-1, 63,0);
    tracep->declQuad(c+3238,"io_difftest_reg_15", false,-1, 63,0);
    tracep->declQuad(c+3240,"io_difftest_reg_16", false,-1, 63,0);
    tracep->declQuad(c+3242,"io_difftest_reg_17", false,-1, 63,0);
    tracep->declQuad(c+3244,"io_difftest_reg_18", false,-1, 63,0);
    tracep->declQuad(c+3246,"io_difftest_reg_19", false,-1, 63,0);
    tracep->declQuad(c+3248,"io_difftest_reg_20", false,-1, 63,0);
    tracep->declQuad(c+3250,"io_difftest_reg_21", false,-1, 63,0);
    tracep->declQuad(c+3252,"io_difftest_reg_22", false,-1, 63,0);
    tracep->declQuad(c+3254,"io_difftest_reg_23", false,-1, 63,0);
    tracep->declQuad(c+3256,"io_difftest_reg_24", false,-1, 63,0);
    tracep->declQuad(c+3258,"io_difftest_reg_25", false,-1, 63,0);
    tracep->declQuad(c+3260,"io_difftest_reg_26", false,-1, 63,0);
    tracep->declQuad(c+3262,"io_difftest_reg_27", false,-1, 63,0);
    tracep->declQuad(c+3264,"io_difftest_reg_28", false,-1, 63,0);
    tracep->declQuad(c+3266,"io_difftest_reg_29", false,-1, 63,0);
    tracep->declQuad(c+3268,"io_difftest_reg_30", false,-1, 63,0);
    tracep->declQuad(c+3270,"io_difftest_reg_31", false,-1, 63,0);
    tracep->declQuad(c+3272,"io_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3274,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+3275,"io_difftest_commit", false,-1);
    tracep->declQuad(c+3276,"io_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3278,"io_difftest_irq", false,-1);
    tracep->declQuad(c+3279,"io_difftest_mstatus", false,-1, 63,0);
    tracep->declQuad(c+3281,"io_difftest_mcause", false,-1, 63,0);
    tracep->declQuad(c+3283,"io_difftest_mepc", false,-1, 63,0);
    tracep->declQuad(c+3285,"io_difftest_mtvec", false,-1, 63,0);
    tracep->declBit(c+3287,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+3206,"core_clock", false,-1);
    tracep->declBit(c+3207,"core_reset", false,-1);
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
    tracep->declBit(c+3278,"core_difftest_irq", false,-1);
    tracep->declBit(c+3287,"core_difftest_peripheral", false,-1);
    tracep->declBit(c+3275,"core_difftest_commit", false,-1);
    tracep->declQuad(c+3272,"core_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3274,"core_difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+3208,"core__WIRE_0", false,-1, 63,0);
    tracep->declQuad(c+3210,"core__WIRE_1", false,-1, 63,0);
    tracep->declQuad(c+3212,"core__WIRE_2", false,-1, 63,0);
    tracep->declQuad(c+3214,"core__WIRE_3", false,-1, 63,0);
    tracep->declQuad(c+3216,"core__WIRE_4", false,-1, 63,0);
    tracep->declQuad(c+3218,"core__WIRE_5", false,-1, 63,0);
    tracep->declQuad(c+3220,"core__WIRE_6", false,-1, 63,0);
    tracep->declQuad(c+3222,"core__WIRE_7", false,-1, 63,0);
    tracep->declQuad(c+3224,"core__WIRE_8", false,-1, 63,0);
    tracep->declQuad(c+3226,"core__WIRE_9", false,-1, 63,0);
    tracep->declQuad(c+3228,"core__WIRE_10", false,-1, 63,0);
    tracep->declQuad(c+3230,"core__WIRE_11", false,-1, 63,0);
    tracep->declQuad(c+3232,"core__WIRE_12", false,-1, 63,0);
    tracep->declQuad(c+3234,"core__WIRE_13", false,-1, 63,0);
    tracep->declQuad(c+3236,"core__WIRE_14", false,-1, 63,0);
    tracep->declQuad(c+3238,"core__WIRE_15", false,-1, 63,0);
    tracep->declQuad(c+3240,"core__WIRE_16", false,-1, 63,0);
    tracep->declQuad(c+3242,"core__WIRE_17", false,-1, 63,0);
    tracep->declQuad(c+3244,"core__WIRE_18", false,-1, 63,0);
    tracep->declQuad(c+3246,"core__WIRE_19", false,-1, 63,0);
    tracep->declQuad(c+3248,"core__WIRE_20", false,-1, 63,0);
    tracep->declQuad(c+3250,"core__WIRE_21", false,-1, 63,0);
    tracep->declQuad(c+3252,"core__WIRE_22", false,-1, 63,0);
    tracep->declQuad(c+3254,"core__WIRE_23", false,-1, 63,0);
    tracep->declQuad(c+3256,"core__WIRE_24", false,-1, 63,0);
    tracep->declQuad(c+3258,"core__WIRE_25", false,-1, 63,0);
    tracep->declQuad(c+3260,"core__WIRE_26", false,-1, 63,0);
    tracep->declQuad(c+3262,"core__WIRE_27", false,-1, 63,0);
    tracep->declQuad(c+3264,"core__WIRE_28", false,-1, 63,0);
    tracep->declQuad(c+3266,"core__WIRE_29", false,-1, 63,0);
    tracep->declQuad(c+3268,"core__WIRE_30", false,-1, 63,0);
    tracep->declQuad(c+3270,"core__WIRE_31", false,-1, 63,0);
    tracep->declQuad(c+3276,"core_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3206,"axi_ram_clock", false,-1);
    tracep->declBit(c+3207,"axi_ram_reset", false,-1);
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
    tracep->declBit(c+3206,"sram0_clock", false,-1);
    tracep->declBit(c+3207,"sram0_reset", false,-1);
    tracep->declBus(c+21,"sram0_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram0_io_wen", false,-1);
    tracep->declArray(c+3288,"sram0_io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"sram0_io_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"sram0_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3206,"sram1_clock", false,-1);
    tracep->declBit(c+3207,"sram1_reset", false,-1);
    tracep->declBus(c+21,"sram1_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram1_io_wen", false,-1);
    tracep->declArray(c+3288,"sram1_io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"sram1_io_wdata", false,-1, 127,0);
    tracep->declArray(c+36,"sram1_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3206,"sram2_clock", false,-1);
    tracep->declBit(c+3207,"sram2_reset", false,-1);
    tracep->declBus(c+21,"sram2_io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"sram2_io_wen", false,-1);
    tracep->declArray(c+3288,"sram2_io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"sram2_io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"sram2_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3206,"sram3_clock", false,-1);
    tracep->declBit(c+3207,"sram3_reset", false,-1);
    tracep->declBus(c+21,"sram3_io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"sram3_io_wen", false,-1);
    tracep->declArray(c+3288,"sram3_io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"sram3_io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"sram3_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3206,"sram4_clock", false,-1);
    tracep->declBit(c+3207,"sram4_reset", false,-1);
    tracep->declBus(c+48,"sram4_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram4_io_wen", false,-1);
    tracep->declArray(c+51,"sram4_io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"sram4_io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"sram4_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3206,"sram5_clock", false,-1);
    tracep->declBit(c+3207,"sram5_reset", false,-1);
    tracep->declBus(c+48,"sram5_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram5_io_wen", false,-1);
    tracep->declArray(c+3288,"sram5_io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"sram5_io_wdata", false,-1, 127,0);
    tracep->declArray(c+67,"sram5_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3206,"sram6_clock", false,-1);
    tracep->declBit(c+3207,"sram6_reset", false,-1);
    tracep->declBus(c+48,"sram6_io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"sram6_io_wen", false,-1);
    tracep->declArray(c+51,"sram6_io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"sram6_io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"sram6_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3206,"sram7_clock", false,-1);
    tracep->declBit(c+3207,"sram7_reset", false,-1);
    tracep->declBus(c+48,"sram7_io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"sram7_io_wen", false,-1);
    tracep->declArray(c+3288,"sram7_io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"sram7_io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"sram7_io_rdata", false,-1, 127,0);
    tracep->declBus(c+3274,"DIFFTEST_INST", false,-1, 31,0);
    tracep->declQuad(c+79,"difftest_inst", false,-1, 63,0);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
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
    tracep->declBit(c+3206,"mem_clock", false,-1);
    tracep->declQuad(c+81,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+83,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+13,"mem_rflag", false,-1);
    tracep->declQuad(c+85,"mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+87,"mem_wmask", false,-1, 63,0);
    tracep->declBit(c+89,"mem_wen", false,-1);
    tracep->declQuad(c+90,"reg_raddr", false,-1, 63,0);
    tracep->declBus(c+92,"reg_rlen", false,-1, 3,0);
    tracep->declBit(c+12,"reg_ar_ready", false,-1);
    tracep->declBit(c+17,"reg_r_valid", false,-1);
    tracep->declBit(c+93,"reg_r_state", false,-1);
    tracep->declQuad(c+85,"reg_w_addr", false,-1, 63,0);
    tracep->declBit(c+94,"reg_is_w", false,-1);
    tracep->declBit(c+1,"reg_aw_ready", false,-1);
    tracep->declBit(c+5,"reg_w_ready", false,-1);
    tracep->declBit(c+11,"reg_b_valid", false,-1);
    tracep->declBus(c+95,"mem_io_wmask_lo", false,-1, 31,0);
    tracep->declBus(c+96,"mem_io_wmask_hi", false,-1, 31,0);
    tracep->declQuad(c+18,"reg_r_data", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declQuad(c+81,"raddr", false,-1, 63,0);
    tracep->declQuad(c+83,"rdata", false,-1, 63,0);
    tracep->declBit(c+13,"rflag", false,-1);
    tracep->declQuad(c+85,"waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"wdata", false,-1, 63,0);
    tracep->declQuad(c+87,"wmask", false,-1, 63,0);
    tracep->declBit(c+89,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
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
    tracep->declBit(c+3278,"difftest_irq", false,-1);
    tracep->declBit(c+3287,"difftest_peripheral", false,-1);
    tracep->declBit(c+3275,"difftest_commit", false,-1);
    tracep->declQuad(c+3272,"difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3274,"difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+3276,"inst_counter", false,-1, 63,0);
    tracep->declBit(c+3206,"i_cache_clock", false,-1);
    tracep->declBit(c+3207,"i_cache_reset", false,-1);
    tracep->declBit(c+97,"i_cache_io_flush", false,-1);
    tracep->declBit(c+98,"i_cache_io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+99,"i_cache_io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+100,"i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+102,"i_cache_io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+103,"i_cache_io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+104,"i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+106,"i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+108,"i_cache_io_is_fence_i", false,-1);
    tracep->declBus(c+21,"i_cache_io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"i_cache_io_sram_wen_0", false,-1);
    tracep->declBit(c+23,"i_cache_io_sram_wen_1", false,-1);
    tracep->declArray(c+24,"i_cache_io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"i_cache_io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"i_cache_io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"i_cache_io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"i_cache_io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"i_cache_io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+109,"i_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+110,"i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+112,"i_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+113,"i_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+3206,"d_cache_clock", false,-1);
    tracep->declBit(c+3207,"d_cache_reset", false,-1);
    tracep->declBit(c+114,"d_cache_io_cpu_valid", false,-1);
    tracep->declQuad(c+115,"d_cache_io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"d_cache_io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"d_cache_io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"d_cache_io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+123,"d_cache_io_cpu_ready", false,-1);
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
    tracep->declBit(c+124,"d_cache_io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+125,"d_cache_io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+126,"d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+128,"d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+130,"d_cache_io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+131,"d_cache_io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+132,"d_cache_io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+133,"d_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+134,"d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+136,"d_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+137,"d_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+3206,"cross_bar_clock", false,-1);
    tracep->declBit(c+3207,"cross_bar_reset", false,-1);
    tracep->declBit(c+109,"cross_bar_io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+110,"cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+112,"cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+113,"cross_bar_io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+124,"cross_bar_io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+125,"cross_bar_io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+126,"cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+128,"cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+130,"cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+132,"cross_bar_io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+133,"cross_bar_io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+134,"cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+136,"cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+137,"cross_bar_io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+138,"cross_bar_io_bus1_valid", false,-1);
    tracep->declQuad(c+100,"cross_bar_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+139,"cross_bar_io_bus1_ready", false,-1);
    tracep->declBit(c+140,"cross_bar_io_bus2_valid", false,-1);
    tracep->declQuad(c+115,"cross_bar_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"cross_bar_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+141,"cross_bar_io_bus2_ready", false,-1);
    tracep->declBit(c+1,"cross_bar_io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+2,"cross_bar_io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"cross_bar_io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+6,"cross_bar_io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+7,"cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+3292,"cross_bar_io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"cross_bar_io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"cross_bar_io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"cross_bar_io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"cross_bar_io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+142,"cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+143,"cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+100,"cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+102,"cross_bar_1_io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+144,"cross_bar_1_io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+145,"cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+147,"cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+149,"cross_bar_1_io_wb_valid", false,-1);
    tracep->declQuad(c+115,"cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+150,"cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"cross_bar_1_io_wb_bits_is_w", false,-1);
    tracep->declBit(c+152,"cross_bar_1_io_wb_ready", false,-1);
    tracep->declBit(c+98,"cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+99,"cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+100,"cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+102,"cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+103,"cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+104,"cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+106,"cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+114,"cross_bar_1_io_DCache_valid", false,-1);
    tracep->declQuad(c+115,"cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"cross_bar_1_io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+123,"cross_bar_1_io_DCache_ready", false,-1);
    tracep->declBit(c+138,"cross_bar_1_io_bus1_valid", false,-1);
    tracep->declQuad(c+100,"cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+139,"cross_bar_1_io_bus1_ready", false,-1);
    tracep->declBit(c+140,"cross_bar_1_io_bus2_valid", false,-1);
    tracep->declQuad(c+115,"cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"cross_bar_1_io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+141,"cross_bar_1_io_bus2_ready", false,-1);
    tracep->declBit(c+153,"cross_bar_1_io_clint_bus_valid", false,-1);
    tracep->declQuad(c+115,"cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+154,"cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+122,"cross_bar_1_io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+156,"cross_bar_1_io_clint_bus_ready", false,-1);
    tracep->declBit(c+3206,"fetch_clock", false,-1);
    tracep->declBit(c+3207,"fetch_reset", false,-1);
    tracep->declBit(c+157,"fetch_io_br_info_valid", false,-1);
    tracep->declBit(c+158,"fetch_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+159,"fetch_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+161,"fetch_io_br_info_taken", false,-1);
    tracep->declQuad(c+162,"fetch_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+164,"fetch_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+165,"fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+167,"fetch_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+169,"fetch_io_flush", false,-1);
    tracep->declBit(c+142,"fetch_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+143,"fetch_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+100,"fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+102,"fetch_io_cpu_data_ready", false,-1);
    tracep->declBit(c+144,"fetch_io_cpu_data_valid", false,-1);
    tracep->declQuad(c+145,"fetch_io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+147,"fetch_io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+170,"fetch_io_put_pc_ready", false,-1);
    tracep->declBit(c+171,"fetch_io_put_pc_valid", false,-1);
    tracep->declBus(c+172,"fetch_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+173,"fetch_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+175,"fetch_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+97,"fetch_io_out_flush", false,-1);
    tracep->declBit(c+3206,"execute_clock", false,-1);
    tracep->declBit(c+3207,"execute_reset", false,-1);
    tracep->declBit(c+170,"execute_io_op_datas_ready", false,-1);
    tracep->declBit(c+176,"execute_io_op_datas_valid", false,-1);
    tracep->declBus(c+177,"execute_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+178,"execute_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+179,"execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+182,"execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+183,"execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+185,"execute_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+186,"execute_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+188,"execute_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+189,"execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+190,"execute_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+191,"execute_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+192,"execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+193,"execute_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+195,"execute_io_irq_time_irq", false,-1);
    tracep->declBit(c+196,"execute_io_irq_soft_irq", false,-1);
    tracep->declQuad(c+197,"execute_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+199,"execute_io_mie", false,-1, 63,0);
    tracep->declQuad(c+201,"execute_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+203,"execute_io_mtvec", false,-1, 63,0);
    tracep->declBit(c+205,"execute_io_wb_valid", false,-1);
    tracep->declBus(c+206,"execute_io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+207,"execute_io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+209,"execute_io_csr_valid", false,-1);
    tracep->declBus(c+210,"execute_io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+211,"execute_io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+213,"execute_io_csr_except_is_except", false,-1);
    tracep->declBit(c+214,"execute_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+215,"execute_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+216,"execute_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+217,"execute_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+219,"execute_io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+221,"execute_io_commit", false,-1);
    tracep->declBus(c+222,"execute_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+223,"execute_io_difftest_peripheral", false,-1);
    tracep->declQuad(c+167,"execute_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+169,"execute_io_flush", false,-1);
    tracep->declBit(c+108,"execute_io_fence_i", false,-1);
    tracep->declBit(c+157,"execute_io_br_info_valid", false,-1);
    tracep->declBit(c+158,"execute_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+159,"execute_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+161,"execute_io_br_info_taken", false,-1);
    tracep->declQuad(c+162,"execute_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+164,"execute_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+165,"execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+149,"execute_io_bus_valid", false,-1);
    tracep->declQuad(c+115,"execute_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+150,"execute_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"execute_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"execute_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"execute_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+152,"execute_io_bus_ready", false,-1);
    tracep->declBit(c+3206,"decode_clock", false,-1);
    tracep->declBit(c+3207,"decode_reset", false,-1);
    tracep->declBit(c+170,"decode_io_get_inst_ready", false,-1);
    tracep->declBit(c+171,"decode_io_get_inst_valid", false,-1);
    tracep->declBus(c+172,"decode_io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+173,"decode_io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+175,"decode_io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+224,"decode_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+225,"decode_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+227,"decode_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+228,"decode_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+230,"decode_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+231,"decode_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+170,"decode_io_op_datas_ready", false,-1);
    tracep->declBit(c+176,"decode_io_op_datas_valid", false,-1);
    tracep->declBus(c+177,"decode_io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+178,"decode_io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+179,"decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+182,"decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+183,"decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+185,"decode_io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+186,"decode_io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+188,"decode_io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+189,"decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+190,"decode_io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+191,"decode_io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+192,"decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+193,"decode_io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+169,"decode_io_flush", false,-1);
    tracep->declBit(c+3206,"commit_clock", false,-1);
    tracep->declBit(c+3207,"commit_reset", false,-1);
    tracep->declBus(c+224,"commit_io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+225,"commit_io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+227,"commit_io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+228,"commit_io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+205,"commit_io_normal_wb_valid", false,-1);
    tracep->declBus(c+206,"commit_io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+207,"commit_io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+230,"commit_io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+231,"commit_io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+209,"commit_io_csr_wb_valid", false,-1);
    tracep->declBus(c+210,"commit_io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+211,"commit_io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+213,"commit_io_csr_except_is_except", false,-1);
    tracep->declBit(c+214,"commit_io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+215,"commit_io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+216,"commit_io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+217,"commit_io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+219,"commit_io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+203,"commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+201,"commit_io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+197,"commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+199,"commit_io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+221,"commit_io_commit", false,-1);
    tracep->declBus(c+222,"commit_io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+223,"commit_io_difftest_peripheral", false,-1);
    tracep->declBit(c+3278,"commit_difftest_irq_0", false,-1);
    tracep->declBit(c+3287,"commit_difftest_peripheral_0", false,-1);
    tracep->declBit(c+3275,"commit_difftest_commit_0", false,-1);
    tracep->declQuad(c+3272,"commit_difftest_pc_0", false,-1, 63,0);
    tracep->declBus(c+3274,"commit_difftest_inst_0", false,-1, 31,0);
    tracep->declQuad(c+3208,"commit__WIRE_0_0", false,-1, 63,0);
    tracep->declQuad(c+3210,"commit__WIRE_0_1", false,-1, 63,0);
    tracep->declQuad(c+3212,"commit__WIRE_0_2", false,-1, 63,0);
    tracep->declQuad(c+3214,"commit__WIRE_0_3", false,-1, 63,0);
    tracep->declQuad(c+3216,"commit__WIRE_0_4", false,-1, 63,0);
    tracep->declQuad(c+3218,"commit__WIRE_0_5", false,-1, 63,0);
    tracep->declQuad(c+3220,"commit__WIRE_0_6", false,-1, 63,0);
    tracep->declQuad(c+3222,"commit__WIRE_0_7", false,-1, 63,0);
    tracep->declQuad(c+3224,"commit__WIRE_0_8", false,-1, 63,0);
    tracep->declQuad(c+3226,"commit__WIRE_0_9", false,-1, 63,0);
    tracep->declQuad(c+3228,"commit__WIRE_0_10", false,-1, 63,0);
    tracep->declQuad(c+3230,"commit__WIRE_0_11", false,-1, 63,0);
    tracep->declQuad(c+3232,"commit__WIRE_0_12", false,-1, 63,0);
    tracep->declQuad(c+3234,"commit__WIRE_0_13", false,-1, 63,0);
    tracep->declQuad(c+3236,"commit__WIRE_0_14", false,-1, 63,0);
    tracep->declQuad(c+3238,"commit__WIRE_0_15", false,-1, 63,0);
    tracep->declQuad(c+3240,"commit__WIRE_0_16", false,-1, 63,0);
    tracep->declQuad(c+3242,"commit__WIRE_0_17", false,-1, 63,0);
    tracep->declQuad(c+3244,"commit__WIRE_0_18", false,-1, 63,0);
    tracep->declQuad(c+3246,"commit__WIRE_0_19", false,-1, 63,0);
    tracep->declQuad(c+3248,"commit__WIRE_0_20", false,-1, 63,0);
    tracep->declQuad(c+3250,"commit__WIRE_0_21", false,-1, 63,0);
    tracep->declQuad(c+3252,"commit__WIRE_0_22", false,-1, 63,0);
    tracep->declQuad(c+3254,"commit__WIRE_0_23", false,-1, 63,0);
    tracep->declQuad(c+3256,"commit__WIRE_0_24", false,-1, 63,0);
    tracep->declQuad(c+3258,"commit__WIRE_0_25", false,-1, 63,0);
    tracep->declQuad(c+3260,"commit__WIRE_0_26", false,-1, 63,0);
    tracep->declQuad(c+3262,"commit__WIRE_0_27", false,-1, 63,0);
    tracep->declQuad(c+3264,"commit__WIRE_0_28", false,-1, 63,0);
    tracep->declQuad(c+3266,"commit__WIRE_0_29", false,-1, 63,0);
    tracep->declQuad(c+3268,"commit__WIRE_0_30", false,-1, 63,0);
    tracep->declQuad(c+3270,"commit__WIRE_0_31", false,-1, 63,0);
    tracep->declQuad(c+3276,"commit_inst_counter_0", false,-1, 63,0);
    tracep->declBit(c+3206,"clint_de_clock", false,-1);
    tracep->declBit(c+3207,"clint_de_reset", false,-1);
    tracep->declBit(c+153,"clint_de_io_valid", false,-1);
    tracep->declQuad(c+115,"clint_de_io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+119,"clint_de_io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+154,"clint_de_io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+122,"clint_de_io_bits_is_w", false,-1);
    tracep->declBit(c+156,"clint_de_io_ready", false,-1);
    tracep->declBit(c+196,"clint_de_io_soft_irq", false,-1);
    tracep->declBit(c+195,"clint_de_io_time_irq", false,-1);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+153,"io_valid", false,-1);
    tracep->declQuad(c+115,"io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+119,"io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+154,"io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+122,"io_bits_is_w", false,-1);
    tracep->declBit(c+156,"io_ready", false,-1);
    tracep->declBit(c+196,"io_soft_irq", false,-1);
    tracep->declBit(c+195,"io_time_irq", false,-1);
    tracep->declBit(c+196,"reg_msip", false,-1);
    tracep->declQuad(c+233,"reg_mtime", false,-1, 63,0);
    tracep->declQuad(c+235,"reg_mtimecmp", false,-1, 63,0);
    tracep->declBit(c+156,"reg_ready", false,-1);
    tracep->declQuad(c+154,"red_rdata", false,-1, 63,0);
    tracep->declBit(c+237,"reg_state", false,-1);
    tracep->declBit(c+238,"is_misp", false,-1);
    tracep->declBit(c+239,"is_mtimecmp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("commit ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+224,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+225,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+227,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+228,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBit(c+205,"io_normal_wb_valid", false,-1);
    tracep->declBus(c+206,"io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+207,"io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+230,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+231,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+209,"io_csr_wb_valid", false,-1);
    tracep->declBus(c+210,"io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+211,"io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+213,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+214,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+215,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+216,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+217,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+219,"io_csr_except_pc", false,-1, 63,0);
    tracep->declQuad(c+203,"io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+201,"io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+197,"io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+199,"io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declBit(c+221,"io_commit", false,-1);
    tracep->declBus(c+222,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+223,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+3278,"difftest_irq_0", false,-1);
    tracep->declBit(c+3287,"difftest_peripheral_0", false,-1);
    tracep->declBit(c+3275,"difftest_commit_0", false,-1);
    tracep->declQuad(c+3272,"difftest_pc_0", false,-1, 63,0);
    tracep->declBus(c+3274,"difftest_inst_0", false,-1, 31,0);
    tracep->declQuad(c+3276,"inst_counter_0", false,-1, 63,0);
    tracep->declBit(c+3206,"csr_reg_clock", false,-1);
    tracep->declBit(c+3207,"csr_reg_reset", false,-1);
    tracep->declBus(c+210,"csr_reg_io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+211,"csr_reg_io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+209,"csr_reg_io_in_w_csr_en", false,-1);
    tracep->declQuad(c+219,"csr_reg_io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"csr_reg_io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+214,"csr_reg_io_in_time_irq", false,-1);
    tracep->declBit(c+215,"csr_reg_io_in_soft_irq", false,-1);
    tracep->declBus(c+240,"csr_reg_io_in_exception", false,-1, 4,0);
    tracep->declBit(c+213,"csr_reg_io_in_is_exception", false,-1);
    tracep->declBit(c+221,"csr_reg_io_in_commit", false,-1);
    tracep->declBus(c+230,"csr_reg_io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+231,"csr_reg_io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+203,"csr_reg_io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+201,"csr_reg_io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+197,"csr_reg_io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+199,"csr_reg_io_r_csr_mie", false,-1, 63,0);
    tracep->declQuad(c+241,"reg_file_0", false,-1, 63,0);
    tracep->declQuad(c+243,"reg_file_1", false,-1, 63,0);
    tracep->declQuad(c+245,"reg_file_2", false,-1, 63,0);
    tracep->declQuad(c+247,"reg_file_3", false,-1, 63,0);
    tracep->declQuad(c+249,"reg_file_4", false,-1, 63,0);
    tracep->declQuad(c+251,"reg_file_5", false,-1, 63,0);
    tracep->declQuad(c+253,"reg_file_6", false,-1, 63,0);
    tracep->declQuad(c+255,"reg_file_7", false,-1, 63,0);
    tracep->declQuad(c+257,"reg_file_8", false,-1, 63,0);
    tracep->declQuad(c+259,"reg_file_9", false,-1, 63,0);
    tracep->declQuad(c+261,"reg_file_10", false,-1, 63,0);
    tracep->declQuad(c+263,"reg_file_11", false,-1, 63,0);
    tracep->declQuad(c+265,"reg_file_12", false,-1, 63,0);
    tracep->declQuad(c+267,"reg_file_13", false,-1, 63,0);
    tracep->declQuad(c+269,"reg_file_14", false,-1, 63,0);
    tracep->declQuad(c+271,"reg_file_15", false,-1, 63,0);
    tracep->declQuad(c+273,"reg_file_16", false,-1, 63,0);
    tracep->declQuad(c+275,"reg_file_17", false,-1, 63,0);
    tracep->declQuad(c+277,"reg_file_18", false,-1, 63,0);
    tracep->declQuad(c+279,"reg_file_19", false,-1, 63,0);
    tracep->declQuad(c+281,"reg_file_20", false,-1, 63,0);
    tracep->declQuad(c+283,"reg_file_21", false,-1, 63,0);
    tracep->declQuad(c+285,"reg_file_22", false,-1, 63,0);
    tracep->declQuad(c+287,"reg_file_23", false,-1, 63,0);
    tracep->declQuad(c+289,"reg_file_24", false,-1, 63,0);
    tracep->declQuad(c+291,"reg_file_25", false,-1, 63,0);
    tracep->declQuad(c+293,"reg_file_26", false,-1, 63,0);
    tracep->declQuad(c+295,"reg_file_27", false,-1, 63,0);
    tracep->declQuad(c+297,"reg_file_28", false,-1, 63,0);
    tracep->declQuad(c+299,"reg_file_29", false,-1, 63,0);
    tracep->declQuad(c+301,"reg_file_30", false,-1, 63,0);
    tracep->declQuad(c+303,"reg_file_31", false,-1, 63,0);
    tracep->declBit(c+305,"difftest_commit", false,-1);
    tracep->declBus(c+306,"difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+307,"difftest_pc", false,-1, 63,0);
    tracep->declQuad(c+309,"inst_counter", false,-1, 63,0);
    tracep->declBit(c+311,"difftest_irq", false,-1);
    tracep->declBit(c+312,"difftest_peripheral", false,-1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+210,"io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+211,"io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+209,"io_in_w_csr_en", false,-1);
    tracep->declQuad(c+219,"io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+214,"io_in_time_irq", false,-1);
    tracep->declBit(c+215,"io_in_soft_irq", false,-1);
    tracep->declBus(c+240,"io_in_exception", false,-1, 4,0);
    tracep->declBit(c+213,"io_in_is_exception", false,-1);
    tracep->declBit(c+221,"io_in_commit", false,-1);
    tracep->declBus(c+230,"io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+231,"io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+203,"io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+201,"io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+197,"io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+199,"io_r_csr_mie", false,-1, 63,0);
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
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+109,"io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+110,"io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+112,"io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+113,"io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+124,"io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+125,"io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+126,"io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+128,"io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+130,"io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+132,"io_DCache_bus_b_valid", false,-1);
    tracep->declBit(c+133,"io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+134,"io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+136,"io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+137,"io_DCache_bus_r_ready", false,-1);
    tracep->declBit(c+138,"io_bus1_valid", false,-1);
    tracep->declQuad(c+100,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+139,"io_bus1_ready", false,-1);
    tracep->declBit(c+140,"io_bus2_valid", false,-1);
    tracep->declQuad(c+115,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+141,"io_bus2_ready", false,-1);
    tracep->declBit(c+1,"io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+2,"io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+3,"io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+5,"io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+6,"io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+7,"io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+10,"io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+3292,"io_AXI_Bus_b_ready", false,-1);
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
    tracep->declBit(c+142,"io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+143,"io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+100,"io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+102,"io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+144,"io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+145,"io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+147,"io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+149,"io_wb_valid", false,-1);
    tracep->declQuad(c+115,"io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+150,"io_wb_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"io_wb_bits_is_w", false,-1);
    tracep->declBit(c+152,"io_wb_ready", false,-1);
    tracep->declBit(c+98,"io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+99,"io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+100,"io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+102,"io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+103,"io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+104,"io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+106,"io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+114,"io_DCache_valid", false,-1);
    tracep->declQuad(c+115,"io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+123,"io_DCache_ready", false,-1);
    tracep->declBit(c+138,"io_bus1_valid", false,-1);
    tracep->declQuad(c+100,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+139,"io_bus1_ready", false,-1);
    tracep->declBit(c+140,"io_bus2_valid", false,-1);
    tracep->declQuad(c+115,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+141,"io_bus2_ready", false,-1);
    tracep->declBit(c+153,"io_clint_bus_valid", false,-1);
    tracep->declQuad(c+115,"io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+154,"io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+122,"io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+156,"io_clint_bus_ready", false,-1);
    tracep->declBit(c+343,"fetch_low_address", false,-1);
    tracep->declBit(c+344,"low_address", false,-1);
    tracep->declBit(c+345,"not_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+114,"io_cpu_valid", false,-1);
    tracep->declQuad(c+115,"io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+123,"io_cpu_ready", false,-1);
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
    tracep->declBit(c+124,"io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+125,"io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+126,"io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+128,"io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+130,"io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+131,"io_cache_bus_b_ready", false,-1);
    tracep->declBit(c+132,"io_cache_bus_b_valid", false,-1);
    tracep->declBit(c+133,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+134,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+136,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+137,"io_cache_bus_r_ready", false,-1);
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
    tracep->declBit(c+123,"reg_ready", false,-1);
    tracep->declQuad(c+117,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+359,"reg_cache_write", false,-1);
    tracep->declBus(c+360,"reg_cache_wstrb", false,-1, 15,0);
    tracep->declArray(c+59,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+361,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+362,"cache_mask_lo", false,-1, 63,0);
    tracep->declArray(c+364,"cache_mask", false,-1, 127,0);
    tracep->declArray(c+368,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+372,"is_sram0_write", false,-1);
    tracep->declBit(c+373,"is_sram2_write", false,-1);
    tracep->declQuad(c+374,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+376,"reg_sram0_dirty", false,-1, 63,0);
    tracep->declQuad(c+378,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+380,"neg_chose_bit", false,-1, 63,0);
    tracep->declQuad(c+382,"reg_sram2_valid", false,-1, 63,0);
    tracep->declQuad(c+384,"reg_sram2_dirty", false,-1, 63,0);
    tracep->declQuad(c+134,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+133,"reg_r_valid", false,-1);
    tracep->declQuad(c+126,"reg_w_waddr", false,-1, 63,0);
    tracep->declQuad(c+128,"reg_w_wdata", false,-1, 63,0);
    tracep->declBit(c+130,"reg_w_wlast", false,-1);
    tracep->declBit(c+125,"reg_w_valid", false,-1);
    tracep->declBit(c+131,"reg_b_ready", false,-1);
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
    tracep->declBit(c+407,"hit_0_and_valid_0", false,-1);
    tracep->declBit(c+408,"hit_2_and_valid_2", false,-1);
    tracep->declBit(c+409,"or_hit", false,-1);
    tracep->declArray(c+410,"temp_addr", false,-1, 66,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+170,"io_get_inst_ready", false,-1);
    tracep->declBit(c+171,"io_get_inst_valid", false,-1);
    tracep->declBus(c+172,"io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+173,"io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+175,"io_get_inst_bits_is_pre", false,-1);
    tracep->declBus(c+224,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+225,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declBus(c+227,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+228,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declBus(c+230,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+231,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+170,"io_op_datas_ready", false,-1);
    tracep->declBit(c+176,"io_op_datas_valid", false,-1);
    tracep->declBus(c+177,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+178,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+179,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+182,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+183,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+185,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+186,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+188,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+189,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+190,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+191,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+192,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+193,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+169,"io_flush", false,-1);
    tracep->declBit(c+176,"reg_valid", false,-1);
    tracep->declBus(c+177,"reg_opType", false,-1, 2,0);
    tracep->declBus(c+178,"reg_exuType", false,-1, 6,0);
    tracep->declBus(c+179,"reg_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"reg_rs1_data", false,-1, 63,0);
    tracep->declBus(c+182,"reg_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+183,"reg_rs2_data", false,-1, 63,0);
    tracep->declBus(c+185,"reg_imm", false,-1, 31,0);
    tracep->declQuad(c+186,"reg_pc", false,-1, 63,0);
    tracep->declBus(c+188,"reg_inst", false,-1, 31,0);
    tracep->declBus(c+189,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+190,"reg_dest_is_reg", false,-1);
    tracep->declBus(c+192,"reg_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+193,"reg_csr_data", false,-1, 63,0);
    tracep->declBit(c+191,"reg_is_pre", false,-1);
    tracep->declBus(c+227,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+224,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+230,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+413,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+414,"fun", false,-1, 2,0);
    tracep->declBus(c+415,"fun_exuType", false,-1, 4,0);
    tracep->declBus(c+416,"fun_op", false,-1, 2,0);
    tracep->declBit(c+417,"temp_system_is_pri", false,-1);
    tracep->declBit(c+418,"temp_system_is_imm", false,-1);
    tracep->declBit(c+419,"temp_system_rs1", false,-1);
    tracep->declBus(c+420,"temp_system_1", false,-1, 6,0);
    tracep->declBus(c+421,"temp_system_2", false,-1, 2,0);
    tracep->declBit(c+422,"temp_system_3", false,-1);
    tracep->declBit(c+423,"temp_system_4", false,-1);
    tracep->declBus(c+424,"temp_mem_itype", false,-1, 3,0);
    tracep->declBit(c+425,"temp_mem_dest", false,-1);
    tracep->declBit(c+425,"temp_op_is_imm", false,-1);
    tracep->declBit(c+426,"is_sr", false,-1);
    tracep->declBus(c+427,"temp_kk", false,-1, 5,0);
    tracep->declBus(c+428,"temp_op_exuType", false,-1, 5,0);
    tracep->declBus(c+429,"temp_op_itype", false,-1, 3,0);
    tracep->declBit(c+430,"temp_op_rs2", false,-1);
    tracep->declBus(c+431,"temp_jal_jalr_1", false,-1, 6,0);
    tracep->declBus(c+432,"temp_jal_jalr_2", false,-1, 3,0);
    tracep->declBit(c+433,"temp_jal_jalr_4", false,-1);
    tracep->declBus(c+434,"instType", false,-1, 3,0);
    tracep->declBit(c+435,"dest_is_reg", false,-1);
    tracep->declBit(c+436,"rs1_is_reg", false,-1);
    tracep->declBit(c+437,"rs2_is_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+170,"io_op_datas_ready", false,-1);
    tracep->declBit(c+176,"io_op_datas_valid", false,-1);
    tracep->declBus(c+177,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+178,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+179,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+180,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+182,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+183,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+185,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+186,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+188,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+189,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+190,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+191,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+192,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+193,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+195,"io_irq_time_irq", false,-1);
    tracep->declBit(c+196,"io_irq_soft_irq", false,-1);
    tracep->declQuad(c+197,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+199,"io_mie", false,-1, 63,0);
    tracep->declQuad(c+201,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+203,"io_mtvec", false,-1, 63,0);
    tracep->declBit(c+205,"io_wb_valid", false,-1);
    tracep->declBus(c+206,"io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+207,"io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+209,"io_csr_valid", false,-1);
    tracep->declBus(c+210,"io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+211,"io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+213,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+214,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+215,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+216,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+217,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+219,"io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+221,"io_commit", false,-1);
    tracep->declBus(c+222,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+223,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+167,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+169,"io_flush", false,-1);
    tracep->declBit(c+108,"io_fence_i", false,-1);
    tracep->declBit(c+157,"io_br_info_valid", false,-1);
    tracep->declBit(c+158,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+159,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+161,"io_br_info_taken", false,-1);
    tracep->declQuad(c+162,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+164,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+165,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+149,"io_bus_valid", false,-1);
    tracep->declQuad(c+115,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+150,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+152,"io_bus_ready", false,-1);
    tracep->declBit(c+438,"alu_exu_io_valid", false,-1);
    tracep->declBit(c+191,"alu_exu_io_is_pre", false,-1);
    tracep->declBit(c+439,"alu_exu_io_br_info_valid", false,-1);
    tracep->declBit(c+440,"alu_exu_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+441,"alu_exu_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+443,"alu_exu_io_br_info_taken", false,-1);
    tracep->declQuad(c+444,"alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+164,"alu_exu_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+165,"alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+177,"alu_exu_io_opType", false,-1, 2,0);
    tracep->declBus(c+178,"alu_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+446,"alu_exu_io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+448,"alu_exu_io_op_data2", false,-1, 63,0);
    tracep->declBus(c+185,"alu_exu_io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+186,"alu_exu_io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+450,"alu_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+440,"alu_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+444,"alu_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+3206,"mem_exu_clock", false,-1);
    tracep->declBit(c+3207,"mem_exu_reset", false,-1);
    tracep->declBit(c+452,"mem_exu_io_valid", false,-1);
    tracep->declBus(c+178,"mem_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+446,"mem_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+448,"mem_exu_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+185,"mem_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+453,"mem_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+455,"mem_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+456,"mem_exu_io_ready", false,-1);
    tracep->declBit(c+149,"mem_exu_io_bus_valid", false,-1);
    tracep->declQuad(c+115,"mem_exu_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+150,"mem_exu_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"mem_exu_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"mem_exu_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+152,"mem_exu_io_bus_ready", false,-1);
    tracep->declBit(c+223,"mem_exu_io_difftest_peripheral", false,-1);
    tracep->declBit(c+3206,"mu_exu_clock", false,-1);
    tracep->declBit(c+3207,"mu_exu_reset", false,-1);
    tracep->declBit(c+457,"mu_exu_io_valid", false,-1);
    tracep->declBus(c+178,"mu_exu_io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+446,"mu_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+448,"mu_exu_io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+458,"mu_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+460,"mu_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+461,"mu_exu_io_ready", false,-1);
    tracep->declBit(c+462,"system_exu_io_valid", false,-1);
    tracep->declBus(c+178,"system_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+463,"system_exu_io_csr_data", false,-1, 63,0);
    tracep->declBus(c+192,"system_exu_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+185,"system_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+446,"system_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+201,"system_exu_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+197,"system_exu_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+463,"system_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+465,"system_exu_io_csr_is_w", false,-1);
    tracep->declQuad(c+466,"system_exu_io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+468,"system_exu_io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+469,"system_exu_io_is_except", false,-1);
    tracep->declBus(c+470,"system_exu_io_exception", false,-1, 5,0);
    tracep->declBit(c+471,"system_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+201,"system_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+472,"in_data_valid", false,-1);
    tracep->declBit(c+170,"ready", false,-1);
    tracep->declBus(c+473,"reg_valid", false,-1, 3,0);
    tracep->declBit(c+474,"reg_alu_valid", false,-1);
    tracep->declBit(c+475,"reg_mem_valid", false,-1);
    tracep->declBit(c+476,"reg_mu_valid", false,-1);
    tracep->declBit(c+477,"reg_system_valid", false,-1);
    tracep->declBus(c+478,"valid", false,-1, 3,0);
    tracep->declBit(c+479,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+480,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBus(c+206,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+157,"reg_br_valid", false,-1);
    tracep->declBit(c+158,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+159,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+161,"reg_taken", false,-1);
    tracep->declQuad(c+162,"reg_br_next_pc", false,-1, 63,0);
    tracep->declQuad(c+211,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+210,"reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+482,"reg_csr_is_w", false,-1);
    tracep->declBit(c+483,"reg_is_except", false,-1);
    tracep->declBus(c+216,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+484,"reg_is_time_irq", false,-1);
    tracep->declBit(c+485,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+217,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+219,"reg_except_pc", false,-1, 63,0);
    tracep->declBit(c+486,"time_irq", false,-1);
    tracep->declBit(c+487,"soft_irq", false,-1);
    tracep->declBit(c+488,"irq", false,-1);
    tracep->declQuad(c+167,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+489,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+490,"reg_fence_i", false,-1);
    tracep->declBit(c+491,"reg_commit", false,-1);
    tracep->declBus(c+222,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+438,"io_valid", false,-1);
    tracep->declBit(c+191,"io_is_pre", false,-1);
    tracep->declBit(c+439,"io_br_info_valid", false,-1);
    tracep->declBit(c+440,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+441,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+443,"io_br_info_taken", false,-1);
    tracep->declQuad(c+444,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+164,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+165,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+177,"io_opType", false,-1, 2,0);
    tracep->declBus(c+178,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+446,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+448,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+185,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+186,"io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+450,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+440,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+444,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+492,"is_32", false,-1);
    tracep->declQuad(c+493,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+495,"op_data2", false,-1, 63,0);
    tracep->declQuad(c+497,"op_imm", false,-1, 63,0);
    tracep->declBit(c+499,"rs2_is_imm", false,-1);
    tracep->declQuad(c+500,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+502,"rs1_is_pc", false,-1);
    tracep->declBit(c+503,"is_sra", false,-1);
    tracep->declQuad(c+504,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+506,"temp_rs2_data", false,-1, 63,0);
    tracep->declArray(c+508,"add_sub_result", false,-1, 64,0);
    tracep->declBit(c+511,"u_rs1_l_rs2", false,-1);
    tracep->declBit(c+512,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+513,"shift_rs2_data", false,-1, 5,0);
    tracep->declArray(c+514,"sll_temp", false,-1, 126,0);
    tracep->declQuad(c+518,"srl_temp", false,-1, 63,0);
    tracep->declQuad(c+520,"sra_temp", false,-1, 63,0);
    tracep->declQuad(c+522,"sr_temp", false,-1, 63,0);
    tracep->declQuad(c+524,"result_data", false,-1, 63,0);
    tracep->declBit(c+164,"is_pre", false,-1);
    tracep->declBit(c+526,"is_br", false,-1);
    tracep->declBit(c+527,"is_eq", false,-1);
    tracep->declQuad(c+528,"temp_1", false,-1, 63,0);
    tracep->declArray(c+530,"add_pc", false,-1, 64,0);
    tracep->declQuad(c+533,"op_pc_4", false,-1, 63,0);
    tracep->declArray(c+535,"temp_result_pc", false,-1, 64,0);
    tracep->declQuad(c+538,"dst_data", false,-1, 63,0);
    tracep->declQuad(c+540,"next_pc", false,-1, 63,0);
    tracep->declBit(c+542,"valid_next_pc", false,-1);
    tracep->declBit(c+439,"br_valid", false,-1);
    tracep->declBit(c+543,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+452,"io_valid", false,-1);
    tracep->declBus(c+178,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+446,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+448,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+185,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+453,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+455,"io_dest_is_w", false,-1);
    tracep->declBit(c+456,"io_ready", false,-1);
    tracep->declBit(c+149,"io_bus_valid", false,-1);
    tracep->declQuad(c+115,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+150,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+119,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+121,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+122,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+152,"io_bus_ready", false,-1);
    tracep->declBit(c+223,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+497,"imm", false,-1, 63,0);
    tracep->declBit(c+456,"reg_ready", false,-1);
    tracep->declQuad(c+544,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+546,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+548,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+549,"reg_bus_is_w", false,-1);
    tracep->declBit(c+550,"reg_bus_valid", false,-1);
    tracep->declQuad(c+453,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+455,"reg_w_rs_en", false,-1);
    tracep->declBus(c+551,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+223,"reg_difftest_peripheral", false,-1);
    tracep->declQuad(c+552,"mem_r_data", false,-1, 63,0);
    tracep->declQuad(c+554,"mem_data_result", false,-1, 63,0);
    tracep->declQuad(c+556,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+558,"w_mem_en", false,-1);
    tracep->declQuad(c+559,"mem_wstrb", false,-1, 63,0);
    tracep->declBit(c+561,"reg_ls_state", false,-1);
    tracep->declArray(c+562,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+566,"chose_chancel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+457,"io_valid", false,-1);
    tracep->declBus(c+178,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+446,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+448,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+458,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+460,"io_dest_is_w", false,-1);
    tracep->declBit(c+461,"io_ready", false,-1);
    tracep->declBit(c+3206,"div_clock", false,-1);
    tracep->declBit(c+3207,"div_reset", false,-1);
    tracep->declBit(c+567,"div_io_valid", false,-1);
    tracep->declQuad(c+446,"div_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+448,"div_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+178,"div_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+568,"div_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+570,"div_io_dest_is_w", false,-1);
    tracep->declBit(c+571,"div_io_ready", false,-1);
    tracep->declBit(c+3206,"mul_clock", false,-1);
    tracep->declBit(c+3207,"mul_reset", false,-1);
    tracep->declBit(c+572,"mul_io_valid", false,-1);
    tracep->declQuad(c+446,"mul_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+448,"mul_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+178,"mul_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+573,"mul_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+575,"mul_io_dest_is_w", false,-1);
    tracep->declBit(c+576,"mul_io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+567,"io_valid", false,-1);
    tracep->declQuad(c+446,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+448,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+178,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+568,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+570,"io_dest_is_w", false,-1);
    tracep->declBit(c+571,"io_ready", false,-1);
    tracep->declBit(c+492,"is_32", false,-1);
    tracep->declBit(c+577,"is_signed", false,-1);
    tracep->declArray(c+578,"dividend", false,-1, 64,0);
    tracep->declArray(c+581,"divisor", false,-1, 64,0);
    tracep->declArray(c+584,"rem", false,-1, 64,0);
    tracep->declArray(c+587,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+590,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+593,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+596,"reg_q", false,-1, 65,0);
    tracep->declArray(c+599,"neg_divisor", false,-1, 64,0);
    tracep->declBus(c+602,"reg_state", false,-1, 1,0);
    tracep->declBus(c+603,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+604,"reg_exuType", false,-1, 6,0);
    tracep->declArray(c+605,"temp_result", false,-1, 131,0);
    tracep->declBit(c+610,"rem_is_0", false,-1);
    tracep->declBit(c+611,"rem_is_neg_div", false,-1);
    tracep->declBit(c+612,"rem_is_div", false,-1);
    tracep->declBit(c+613,"is_need_correct", false,-1);
    tracep->declBit(c+570,"reg_dest_is_w", false,-1);
    tracep->declBit(c+571,"reg_ready", false,-1);
    tracep->declBit(c+614,"reg_is_32", false,-1);
    tracep->declBit(c+615,"reg_is_rem", false,-1);
    tracep->declQuad(c+616,"rem_adjust", false,-1, 63,0);
    tracep->declQuad(c+618,"q_adjust", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+572,"io_valid", false,-1);
    tracep->declQuad(c+446,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+448,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+178,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+573,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+575,"io_dest_is_w", false,-1);
    tracep->declBit(c+576,"io_ready", false,-1);
    tracep->declBit(c+620,"is_32", false,-1);
    tracep->declBit(c+621,"is_rs1_signed", false,-1);
    tracep->declBit(c+492,"is_rs2_signed", false,-1);
    tracep->declArray(c+622,"mul_data1", false,-1, 129,0);
    tracep->declArray(c+627,"mul_data2", false,-1, 64,0);
    tracep->declArray(c+630,"temp_mul2", false,-1, 66,0);
    tracep->declBit(c+576,"reg_ready", false,-1);
    tracep->declBus(c+633,"reg_state", false,-1, 1,0);
    tracep->declArray(c+634,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+637,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+642,"reg_result", false,-1, 129,0);
    tracep->declBus(c+647,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+575,"reg_dest_is_w", false,-1);
    tracep->declArray(c+648,"pp", false,-1, 130,0);
    tracep->declBus(c+653,"reg_cnt", false,-1, 6,0);
    tracep->declBit(c+654,"reg_not_h", false,-1);
    tracep->declBit(c+655,"reg_is_32", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+462,"io_valid", false,-1);
    tracep->declBus(c+178,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+463,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+192,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+185,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+446,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+201,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+197,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+463,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+465,"io_csr_is_w", false,-1);
    tracep->declQuad(c+466,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+468,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+469,"io_is_except", false,-1);
    tracep->declBus(c+470,"io_exception", false,-1, 5,0);
    tracep->declBit(c+471,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+201,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+497,"imm", false,-1, 63,0);
    tracep->declBit(c+656,"is_imm", false,-1);
    tracep->declQuad(c+657,"op_data", false,-1, 63,0);
    tracep->declQuad(c+659,"or_result", false,-1, 63,0);
    tracep->declQuad(c+661,"and_result", false,-1, 63,0);
    tracep->declQuad(c+663,"temp_csr_result_data", false,-1, 63,0);
    tracep->declBit(c+665,"is_mret", false,-1);
    tracep->declBit(c+666,"is_sret", false,-1);
    tracep->declBit(c+667,"is_ecall", false,-1);
    tracep->declBit(c+668,"is_ebreak", false,-1);
    tracep->declBit(c+669,"is_except", false,-1);
    tracep->declBus(c+670,"exception", false,-1, 3,0);
    tracep->declBit(c+671,"is_ret", false,-1);
    tracep->declQuad(c+672,"result_status", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+157,"io_br_info_valid", false,-1);
    tracep->declBit(c+158,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+159,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+161,"io_br_info_taken", false,-1);
    tracep->declQuad(c+162,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+164,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+165,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+167,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+169,"io_flush", false,-1);
    tracep->declBit(c+142,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+143,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+100,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+102,"io_cpu_data_ready", false,-1);
    tracep->declBit(c+144,"io_cpu_data_valid", false,-1);
    tracep->declQuad(c+145,"io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+147,"io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+170,"io_put_pc_ready", false,-1);
    tracep->declBit(c+171,"io_put_pc_valid", false,-1);
    tracep->declBus(c+172,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+173,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+175,"io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+97,"io_out_flush", false,-1);
    tracep->declBit(c+3206,"ibuf_clock", false,-1);
    tracep->declBit(c+3207,"ibuf_reset", false,-1);
    tracep->declBit(c+169,"ibuf_io_flush", false,-1);
    tracep->declBit(c+102,"ibuf_io_cache_buf_ready", false,-1);
    tracep->declBit(c+674,"ibuf_io_cache_buf_valid", false,-1);
    tracep->declQuad(c+147,"ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+675,"ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+676,"ibuf_io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+170,"ibuf_io_put_pc_ready", false,-1);
    tracep->declBit(c+171,"ibuf_io_put_pc_valid", false,-1);
    tracep->declBus(c+172,"ibuf_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+173,"ibuf_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+175,"ibuf_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+3206,"br_predictor_clock", false,-1);
    tracep->declBit(c+3207,"br_predictor_reset", false,-1);
    tracep->declBit(c+157,"br_predictor_io_br_info_valid", false,-1);
    tracep->declBit(c+158,"br_predictor_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+159,"br_predictor_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+161,"br_predictor_io_br_info_taken", false,-1);
    tracep->declQuad(c+162,"br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+100,"br_predictor_io_pc", false,-1, 63,0);
    tracep->declQuad(c+677,"br_predictor_io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+679,"br_predictor_io_pre_valid", false,-1);
    tracep->declQuad(c+100,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+680,"reg_flush", false,-1);
    tracep->declQuad(c+681,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+143,"reg_bus_valid", false,-1);
    tracep->declBus(c+683,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+684,"pre_info_tail", false,-1, 1,0);
    tracep->declQuad(c+685,"pre_info_fifo_0", false,-1, 63,0);
    tracep->declQuad(c+687,"pre_info_fifo_1", false,-1, 63,0);
    tracep->declQuad(c+689,"pre_info_fifo_2", false,-1, 63,0);
    tracep->declQuad(c+691,"pre_info_fifo_3", false,-1, 63,0);
    tracep->declBit(c+693,"pre_enq", false,-1);
    tracep->declBus(c+694,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+695,"is_pre_tail", false,-1, 1,0);
    tracep->declBit(c+696,"is_pre_fifo_0", false,-1);
    tracep->declBit(c+697,"is_pre_fifo_1", false,-1);
    tracep->declBit(c+698,"is_pre_fifo_2", false,-1);
    tracep->declBit(c+699,"is_pre_fifo_3", false,-1);
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+157,"io_br_info_valid", false,-1);
    tracep->declBit(c+158,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+159,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+161,"io_br_info_taken", false,-1);
    tracep->declQuad(c+162,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+100,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+677,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+679,"io_pre_valid", false,-1);
    tracep->declArray(c+700,"BTB_0", false,-1, 127,0);
    tracep->declArray(c+704,"BTB_1", false,-1, 127,0);
    tracep->declArray(c+708,"BTB_2", false,-1, 127,0);
    tracep->declArray(c+712,"BTB_3", false,-1, 127,0);
    tracep->declArray(c+716,"BTB_4", false,-1, 127,0);
    tracep->declArray(c+720,"BTB_5", false,-1, 127,0);
    tracep->declArray(c+724,"BTB_6", false,-1, 127,0);
    tracep->declArray(c+728,"BTB_7", false,-1, 127,0);
    tracep->declArray(c+732,"BTB_8", false,-1, 127,0);
    tracep->declArray(c+736,"BTB_9", false,-1, 127,0);
    tracep->declArray(c+740,"BTB_10", false,-1, 127,0);
    tracep->declArray(c+744,"BTB_11", false,-1, 127,0);
    tracep->declArray(c+748,"BTB_12", false,-1, 127,0);
    tracep->declArray(c+752,"BTB_13", false,-1, 127,0);
    tracep->declArray(c+756,"BTB_14", false,-1, 127,0);
    tracep->declArray(c+760,"BTB_15", false,-1, 127,0);
    tracep->declArray(c+764,"BTB_16", false,-1, 127,0);
    tracep->declArray(c+768,"BTB_17", false,-1, 127,0);
    tracep->declArray(c+772,"BTB_18", false,-1, 127,0);
    tracep->declArray(c+776,"BTB_19", false,-1, 127,0);
    tracep->declArray(c+780,"BTB_20", false,-1, 127,0);
    tracep->declArray(c+784,"BTB_21", false,-1, 127,0);
    tracep->declArray(c+788,"BTB_22", false,-1, 127,0);
    tracep->declArray(c+792,"BTB_23", false,-1, 127,0);
    tracep->declArray(c+796,"BTB_24", false,-1, 127,0);
    tracep->declArray(c+800,"BTB_25", false,-1, 127,0);
    tracep->declArray(c+804,"BTB_26", false,-1, 127,0);
    tracep->declArray(c+808,"BTB_27", false,-1, 127,0);
    tracep->declArray(c+812,"BTB_28", false,-1, 127,0);
    tracep->declArray(c+816,"BTB_29", false,-1, 127,0);
    tracep->declArray(c+820,"BTB_30", false,-1, 127,0);
    tracep->declArray(c+824,"BTB_31", false,-1, 127,0);
    tracep->declArray(c+828,"BTB_32", false,-1, 127,0);
    tracep->declArray(c+832,"BTB_33", false,-1, 127,0);
    tracep->declArray(c+836,"BTB_34", false,-1, 127,0);
    tracep->declArray(c+840,"BTB_35", false,-1, 127,0);
    tracep->declArray(c+844,"BTB_36", false,-1, 127,0);
    tracep->declArray(c+848,"BTB_37", false,-1, 127,0);
    tracep->declArray(c+852,"BTB_38", false,-1, 127,0);
    tracep->declArray(c+856,"BTB_39", false,-1, 127,0);
    tracep->declArray(c+860,"BTB_40", false,-1, 127,0);
    tracep->declArray(c+864,"BTB_41", false,-1, 127,0);
    tracep->declArray(c+868,"BTB_42", false,-1, 127,0);
    tracep->declArray(c+872,"BTB_43", false,-1, 127,0);
    tracep->declArray(c+876,"BTB_44", false,-1, 127,0);
    tracep->declArray(c+880,"BTB_45", false,-1, 127,0);
    tracep->declArray(c+884,"BTB_46", false,-1, 127,0);
    tracep->declArray(c+888,"BTB_47", false,-1, 127,0);
    tracep->declArray(c+892,"BTB_48", false,-1, 127,0);
    tracep->declArray(c+896,"BTB_49", false,-1, 127,0);
    tracep->declArray(c+900,"BTB_50", false,-1, 127,0);
    tracep->declArray(c+904,"BTB_51", false,-1, 127,0);
    tracep->declArray(c+908,"BTB_52", false,-1, 127,0);
    tracep->declArray(c+912,"BTB_53", false,-1, 127,0);
    tracep->declArray(c+916,"BTB_54", false,-1, 127,0);
    tracep->declArray(c+920,"BTB_55", false,-1, 127,0);
    tracep->declArray(c+924,"BTB_56", false,-1, 127,0);
    tracep->declArray(c+928,"BTB_57", false,-1, 127,0);
    tracep->declArray(c+932,"BTB_58", false,-1, 127,0);
    tracep->declArray(c+936,"BTB_59", false,-1, 127,0);
    tracep->declArray(c+940,"BTB_60", false,-1, 127,0);
    tracep->declArray(c+944,"BTB_61", false,-1, 127,0);
    tracep->declArray(c+948,"BTB_62", false,-1, 127,0);
    tracep->declArray(c+952,"BTB_63", false,-1, 127,0);
    tracep->declQuad(c+956,"RAS_0", false,-1, 63,0);
    tracep->declQuad(c+958,"RAS_1", false,-1, 63,0);
    tracep->declQuad(c+960,"RAS_2", false,-1, 63,0);
    tracep->declQuad(c+962,"RAS_3", false,-1, 63,0);
    tracep->declQuad(c+964,"RAS_4", false,-1, 63,0);
    tracep->declQuad(c+966,"RAS_5", false,-1, 63,0);
    tracep->declBus(c+968,"PHT_0", false,-1, 1,0);
    tracep->declBus(c+969,"PHT_1", false,-1, 1,0);
    tracep->declBus(c+970,"PHT_2", false,-1, 1,0);
    tracep->declBus(c+971,"PHT_3", false,-1, 1,0);
    tracep->declBus(c+972,"PHT_4", false,-1, 1,0);
    tracep->declBus(c+973,"PHT_5", false,-1, 1,0);
    tracep->declBus(c+974,"PHT_6", false,-1, 1,0);
    tracep->declBus(c+975,"PHT_7", false,-1, 1,0);
    tracep->declBus(c+976,"PHT_8", false,-1, 1,0);
    tracep->declBus(c+977,"PHT_9", false,-1, 1,0);
    tracep->declBus(c+978,"PHT_10", false,-1, 1,0);
    tracep->declBus(c+979,"PHT_11", false,-1, 1,0);
    tracep->declBus(c+980,"PHT_12", false,-1, 1,0);
    tracep->declBus(c+981,"PHT_13", false,-1, 1,0);
    tracep->declBus(c+982,"PHT_14", false,-1, 1,0);
    tracep->declBus(c+983,"PHT_15", false,-1, 1,0);
    tracep->declBus(c+984,"PHT_16", false,-1, 1,0);
    tracep->declBus(c+985,"PHT_17", false,-1, 1,0);
    tracep->declBus(c+986,"PHT_18", false,-1, 1,0);
    tracep->declBus(c+987,"PHT_19", false,-1, 1,0);
    tracep->declBus(c+988,"PHT_20", false,-1, 1,0);
    tracep->declBus(c+989,"PHT_21", false,-1, 1,0);
    tracep->declBus(c+990,"PHT_22", false,-1, 1,0);
    tracep->declBus(c+991,"PHT_23", false,-1, 1,0);
    tracep->declBus(c+992,"PHT_24", false,-1, 1,0);
    tracep->declBus(c+993,"PHT_25", false,-1, 1,0);
    tracep->declBus(c+994,"PHT_26", false,-1, 1,0);
    tracep->declBus(c+995,"PHT_27", false,-1, 1,0);
    tracep->declBus(c+996,"PHT_28", false,-1, 1,0);
    tracep->declBus(c+997,"PHT_29", false,-1, 1,0);
    tracep->declBus(c+998,"PHT_30", false,-1, 1,0);
    tracep->declBus(c+999,"PHT_31", false,-1, 1,0);
    tracep->declBus(c+1000,"PHT_32", false,-1, 1,0);
    tracep->declBus(c+1001,"PHT_33", false,-1, 1,0);
    tracep->declBus(c+1002,"PHT_34", false,-1, 1,0);
    tracep->declBus(c+1003,"PHT_35", false,-1, 1,0);
    tracep->declBus(c+1004,"PHT_36", false,-1, 1,0);
    tracep->declBus(c+1005,"PHT_37", false,-1, 1,0);
    tracep->declBus(c+1006,"PHT_38", false,-1, 1,0);
    tracep->declBus(c+1007,"PHT_39", false,-1, 1,0);
    tracep->declBus(c+1008,"PHT_40", false,-1, 1,0);
    tracep->declBus(c+1009,"PHT_41", false,-1, 1,0);
    tracep->declBus(c+1010,"PHT_42", false,-1, 1,0);
    tracep->declBus(c+1011,"PHT_43", false,-1, 1,0);
    tracep->declBus(c+1012,"PHT_44", false,-1, 1,0);
    tracep->declBus(c+1013,"PHT_45", false,-1, 1,0);
    tracep->declBus(c+1014,"PHT_46", false,-1, 1,0);
    tracep->declBus(c+1015,"PHT_47", false,-1, 1,0);
    tracep->declBus(c+1016,"PHT_48", false,-1, 1,0);
    tracep->declBus(c+1017,"PHT_49", false,-1, 1,0);
    tracep->declBus(c+1018,"PHT_50", false,-1, 1,0);
    tracep->declBus(c+1019,"PHT_51", false,-1, 1,0);
    tracep->declBus(c+1020,"PHT_52", false,-1, 1,0);
    tracep->declBus(c+1021,"PHT_53", false,-1, 1,0);
    tracep->declBus(c+1022,"PHT_54", false,-1, 1,0);
    tracep->declBus(c+1023,"PHT_55", false,-1, 1,0);
    tracep->declBus(c+1024,"PHT_56", false,-1, 1,0);
    tracep->declBus(c+1025,"PHT_57", false,-1, 1,0);
    tracep->declBus(c+1026,"PHT_58", false,-1, 1,0);
    tracep->declBus(c+1027,"PHT_59", false,-1, 1,0);
    tracep->declBus(c+1028,"PHT_60", false,-1, 1,0);
    tracep->declBus(c+1029,"PHT_61", false,-1, 1,0);
    tracep->declBus(c+1030,"PHT_62", false,-1, 1,0);
    tracep->declBus(c+1031,"PHT_63", false,-1, 1,0);
    tracep->declBus(c+1032,"reg_head", false,-1, 2,0);
    tracep->declBus(c+1033,"update_index", false,-1, 5,0);
    tracep->declArray(c+1034,"update_btb_data", false,-1, 122,0);
    tracep->declBus(c+1038,"index", false,-1, 5,0);
    tracep->declQuad(c+1039,"tag", false,-1, 55,0);
    tracep->declBit(c+1041,"pht_taken", false,-1);
    tracep->declBit(c+1042,"btb_valid", false,-1);
    tracep->declQuad(c+1043,"btb_tag", false,-1, 55,0);
    tracep->declQuad(c+1045,"btb_target_next_pc", false,-1, 63,0);
    tracep->declBus(c+1047,"btb_br_type", false,-1, 1,0);
    tracep->declBit(c+679,"pre_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+169,"io_flush", false,-1);
    tracep->declBit(c+102,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+674,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+147,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+675,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+676,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+170,"io_put_pc_ready", false,-1);
    tracep->declBit(c+171,"io_put_pc_valid", false,-1);
    tracep->declBus(c+172,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+173,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+175,"io_put_pc_bits_is_pre", false,-1);
    tracep->declQuad(c+1048,"ibuf_pc_0", false,-1, 63,0);
    tracep->declQuad(c+1050,"ibuf_pc_1", false,-1, 63,0);
    tracep->declQuad(c+1052,"ibuf_pc_2", false,-1, 63,0);
    tracep->declQuad(c+1054,"ibuf_pc_3", false,-1, 63,0);
    tracep->declBus(c+1056,"ibuf_inst_0", false,-1, 31,0);
    tracep->declBus(c+1057,"ibuf_inst_1", false,-1, 31,0);
    tracep->declBus(c+1058,"ibuf_inst_2", false,-1, 31,0);
    tracep->declBus(c+1059,"ibuf_inst_3", false,-1, 31,0);
    tracep->declBit(c+1060,"ibuf_is_pre_0", false,-1);
    tracep->declBit(c+1061,"ibuf_is_pre_1", false,-1);
    tracep->declBit(c+1062,"ibuf_is_pre_2", false,-1);
    tracep->declBit(c+1063,"ibuf_is_pre_3", false,-1);
    tracep->declBit(c+1064,"ibuf_valid_0", false,-1);
    tracep->declBit(c+1065,"ibuf_valid_1", false,-1);
    tracep->declBit(c+1066,"ibuf_valid_2", false,-1);
    tracep->declBit(c+1067,"ibuf_valid_3", false,-1);
    tracep->declBus(c+1068,"reg_head", false,-1, 1,0);
    tracep->declBus(c+1069,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+1070,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+1071,"enq_size", false,-1);
    tracep->declBit(c+1072,"can_deq", false,-1);
    tracep->declBus(c+1073,"result_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+97,"io_flush", false,-1);
    tracep->declBit(c+98,"io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+99,"io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+100,"io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+102,"io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+103,"io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+104,"io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+106,"io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+108,"io_is_fence_i", false,-1);
    tracep->declBus(c+21,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_sram_wen_0", false,-1);
    tracep->declBit(c+23,"io_sram_wen_1", false,-1);
    tracep->declArray(c+24,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+28,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+36,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+40,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+44,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+109,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+110,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+112,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+113,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+3206,"cache_stage0_clock", false,-1);
    tracep->declBit(c+3207,"cache_stage0_reset", false,-1);
    tracep->declBit(c+97,"cache_stage0_io_flush", false,-1);
    tracep->declBit(c+98,"cache_stage0_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+99,"cache_stage0_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+100,"cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"cache_stage0_io_addr_ready", false,-1);
    tracep->declBit(c+1074,"cache_stage0_io_addr_valid", false,-1);
    tracep->declQuad(c+1075,"cache_stage0_io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+3206,"cache_stage1_clock", false,-1);
    tracep->declBit(c+3207,"cache_stage1_reset", false,-1);
    tracep->declBit(c+97,"cache_stage1_io_flush", false,-1);
    tracep->declBit(c+98,"cache_stage1_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+1074,"cache_stage1_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+1075,"cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+1077,"cache_stage1_io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+1078,"cache_stage1_io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+1079,"cache_stage1_io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+1080,"cache_stage1_io_sram_valid", false,-1);
    tracep->declArray(c+1081,"cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+1085,"cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+1089,"cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+1093,"cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+1097,"cache_stage1_io_sram_ready", false,-1);
    tracep->declBit(c+1098,"cache_stage1_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1099,"cache_stage1_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1100,"cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1102,"cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1078,"cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1103,"cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1105,"cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1079,"cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1106,"cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+3206,"cache_stage2_clock", false,-1);
    tracep->declBit(c+3207,"cache_stage2_reset", false,-1);
    tracep->declBit(c+97,"cache_stage2_io_flush", false,-1);
    tracep->declBit(c+1098,"cache_stage2_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1099,"cache_stage2_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1100,"cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1102,"cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1078,"cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1103,"cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1105,"cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1079,"cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1106,"cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+109,"cache_stage2_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+110,"cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+112,"cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+113,"cache_stage2_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+1108,"cache_stage2_io_sram_w_valid", false,-1);
    tracep->declBus(c+1109,"cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+28,"cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+24,"cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+1110,"cache_stage2_io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+102,"cache_stage2_io_rdata_ready", false,-1);
    tracep->declBit(c+103,"cache_stage2_io_rdata_valid", false,-1);
    tracep->declQuad(c+104,"cache_stage2_io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+106,"cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+1111,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+1113,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+1115,"is_w_sram", false,-1);
    tracep->declBit(c+1116,"is_sram0_write", false,-1);
    tracep->declBit(c+1117,"is_sram1_write", false,-1);
    tracep->declQuad(c+1118,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+1120,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+1121,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+1122,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+1123,"w_r_pass0_val", false,-1);
    tracep->declBit(c+1124,"w_r_pass1_val", false,-1);
    tracep->declBit(c+1097,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+97,"io_flush", false,-1);
    tracep->declBit(c+98,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+99,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+100,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+98,"io_addr_ready", false,-1);
    tracep->declBit(c+1074,"io_addr_valid", false,-1);
    tracep->declQuad(c+1075,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1074,"reg_valid", false,-1);
    tracep->declQuad(c+1075,"reg_addr", false,-1, 63,0);
    tracep->declBit(c+1125,"valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+97,"io_flush", false,-1);
    tracep->declBit(c+98,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+1074,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+1075,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+1077,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+1078,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+1079,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+1080,"io_sram_valid", false,-1);
    tracep->declArray(c+1081,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+1085,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+1089,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+1093,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+1097,"io_sram_ready", false,-1);
    tracep->declBit(c+1098,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1099,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1100,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1102,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1078,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1103,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1105,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1079,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1106,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+1080,"valid", false,-1);
    tracep->declBit(c+98,"ready", false,-1);
    tracep->declQuad(c+1100,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1126,"reg_valid", false,-1);
    tracep->declQuad(c+1127,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+1129,"reg_index", false,-1, 5,0);
    tracep->declBus(c+1130,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+1131,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+1133,"tag_1", false,-1, 53,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBit(c+97,"io_flush", false,-1);
    tracep->declBit(c+1098,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1099,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1100,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1102,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1078,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1103,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1105,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1079,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1106,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+109,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+110,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+112,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+113,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+1108,"io_sram_w_valid", false,-1);
    tracep->declBus(c+1109,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+28,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+24,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+1110,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+102,"io_rdata_ready", false,-1);
    tracep->declBit(c+103,"io_rdata_valid", false,-1);
    tracep->declQuad(c+104,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+106,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+1129,"index", false,-1, 5,0);
    tracep->declBit(c+1135,"valid", false,-1);
    tracep->declBit(c+1110,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+104,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+103,"reg_valid", false,-1);
    tracep->declBit(c+1136,"reg_ready", false,-1);
    tracep->declQuad(c+1137,"temp_addr", false,-1, 63,0);
    tracep->declQuad(c+110,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+109,"reg_r_valid", false,-1);
    tracep->declArray(c+28,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+1108,"reg_cache_write", false,-1);
    tracep->declQuad(c+106,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+1139,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+1141,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+1142,"reg_lru_1", false,-1, 63,0);
    tracep->declBit(c+1144,"LRU_1", false,-1);
    tracep->declQuad(c+1145,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+1147,"neg_chose_bit", false,-1, 63,0);
    tracep->declBus(c+1149,"reg_bus_state", false,-1, 1,0);
    tracep->declQuad(c+1150,"lru_1_and_neg_chose", false,-1, 63,0);
    tracep->declQuad(c+1152,"lru_1_or_chose", false,-1, 63,0);
    tracep->declBit(c+1154,"hit_0_and_valid_0", false,-1);
    tracep->declBit(c+1155,"hit_1_and_valid_1", false,-1);
    tracep->declBit(c+1156,"hit_valid", false,-1);
    tracep->declBit(c+1157,"is_hit", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+3288,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+32,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+32,"Q", false,-1, 127,0);
    tracep->declArray(c+1158,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1162,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1166,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1170,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1174,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1178,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1182,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1186,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1190,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1194,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1198,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1202,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1206,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1210,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1214,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1218,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1222,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1226,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1230,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1234,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1238,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1242,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1246,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1250,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1254,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1258,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1262,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1266,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1270,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1274,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1278,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1282,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1286,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1290,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1294,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1298,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1302,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1306,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1310,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1314,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1318,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1322,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1326,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1330,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1334,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1338,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1342,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1346,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1350,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1354,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1358,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1362,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1366,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1370,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1374,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1378,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1382,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1386,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1390,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1394,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1398,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1402,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1406,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1410,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3293,"bwen", false,-1, 127,0);
    tracep->declBit(c+1116,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+3288,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+36,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+36,"Q", false,-1, 127,0);
    tracep->declArray(c+1414,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1418,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1422,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1426,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1430,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1434,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1438,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1442,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1446,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1450,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1454,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1458,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1462,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1466,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1470,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1474,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1478,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1482,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1486,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1490,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1494,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1498,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1502,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1506,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1510,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1514,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1518,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1522,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1526,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1530,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1534,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1538,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1542,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1546,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1550,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1554,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1558,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1562,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1566,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1570,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1574,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1578,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1582,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1586,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1590,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1594,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1598,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1602,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1606,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1610,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1614,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1618,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1622,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1626,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1630,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1634,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1638,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1642,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1646,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1650,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1654,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1658,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1662,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1666,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3293,"bwen", false,-1, 127,0);
    tracep->declBit(c+1116,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"io_wen", false,-1);
    tracep->declArray(c+3288,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+28,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+40,"Q", false,-1, 127,0);
    tracep->declArray(c+1670,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1674,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1678,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1682,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1686,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1690,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1694,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1698,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1702,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1706,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1710,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1714,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1718,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1722,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1726,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1730,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1734,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1738,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1742,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1746,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1750,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1754,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1758,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1762,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1766,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1770,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1774,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1778,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1782,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1786,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1790,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1794,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1798,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1802,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1806,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1810,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1814,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1818,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1822,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1826,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1830,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1834,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1838,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1842,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1846,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1850,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1854,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1858,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1862,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1866,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1870,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1874,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1878,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1882,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1886,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1890,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1894,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1898,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1902,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1906,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1910,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1914,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1918,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1922,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3293,"bwen", false,-1, 127,0);
    tracep->declBit(c+1117,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+23,"io_wen", false,-1);
    tracep->declArray(c+3288,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+24,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+44,"Q", false,-1, 127,0);
    tracep->declArray(c+1926,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1930,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1934,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1938,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1942,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1946,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1950,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1954,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1958,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1962,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1966,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1970,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1974,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1978,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1982,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1986,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1990,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1994,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1998,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2002,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2006,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2010,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2014,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2018,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2022,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2026,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2030,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2034,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2038,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2042,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2046,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2050,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2054,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2058,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2062,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2066,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2070,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2074,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2078,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2082,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2086,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2090,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2094,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2098,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2102,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2106,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2110,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2114,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2118,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2122,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2126,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2130,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2134,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2138,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2142,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2146,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2150,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2154,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2158,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2162,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2166,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2170,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2174,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2178,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3293,"bwen", false,-1, 127,0);
    tracep->declBit(c+1117,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+51,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+63,"Q", false,-1, 127,0);
    tracep->declArray(c+2182,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2186,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2190,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2194,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2198,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2202,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2206,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2210,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2214,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2218,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2222,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2226,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2230,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2234,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2238,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2242,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2246,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2250,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2254,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2258,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2262,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2266,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2270,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2274,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2278,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2282,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2286,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2290,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2294,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2298,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2302,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2306,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2310,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2314,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2318,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2322,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2326,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2330,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2334,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2338,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2342,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2346,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2350,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2354,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2358,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2362,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2366,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2370,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2374,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2378,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2382,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2386,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2390,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2394,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2398,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2402,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2406,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2410,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2414,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2418,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2422,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2426,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2430,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2434,"sram_63", false,-1, 127,0);
    tracep->declArray(c+364,"bwen", false,-1, 127,0);
    tracep->declBit(c+372,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+3288,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+67,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+67,"Q", false,-1, 127,0);
    tracep->declArray(c+2438,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2442,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2446,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2450,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2454,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2458,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2462,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2466,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2470,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2474,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2478,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2482,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2486,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2490,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2494,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2498,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2502,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2506,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2510,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2514,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2518,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2522,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2526,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2530,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2534,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2538,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2542,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2546,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2550,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2554,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2558,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2562,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2566,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2570,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2574,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2578,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2582,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2586,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2590,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2594,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2598,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2602,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2606,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2610,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2614,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2618,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2622,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2626,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2630,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2634,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2638,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2642,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2646,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2650,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2654,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2658,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2662,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2666,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2670,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2674,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2678,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2682,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2686,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2690,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3293,"bwen", false,-1, 127,0);
    tracep->declBit(c+372,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"io_wen", false,-1);
    tracep->declArray(c+51,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+59,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+71,"Q", false,-1, 127,0);
    tracep->declArray(c+2694,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2698,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2702,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2706,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2710,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2714,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2718,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2722,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2726,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2730,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2734,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2738,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2742,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2746,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2750,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2754,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2758,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2762,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2766,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2770,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2774,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2778,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2782,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2786,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2790,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2794,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2798,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2802,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2806,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2810,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2814,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2818,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2822,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2826,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2830,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2834,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2838,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2842,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2846,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2850,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2854,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2858,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2862,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2866,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2870,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2874,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2878,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2882,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2886,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2890,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2894,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2898,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2902,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2906,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2910,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2914,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2918,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2922,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2926,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2930,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2934,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2938,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2942,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2946,"sram_63", false,-1, 127,0);
    tracep->declArray(c+364,"bwen", false,-1, 127,0);
    tracep->declBit(c+373,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+3206,"clock", false,-1);
    tracep->declBit(c+3207,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+50,"io_wen", false,-1);
    tracep->declArray(c+3288,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+55,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+75,"Q", false,-1, 127,0);
    tracep->declArray(c+2950,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2954,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2958,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2962,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2966,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2970,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2974,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2978,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2982,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2986,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2990,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2994,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2998,"sram_12", false,-1, 127,0);
    tracep->declArray(c+3002,"sram_13", false,-1, 127,0);
    tracep->declArray(c+3006,"sram_14", false,-1, 127,0);
    tracep->declArray(c+3010,"sram_15", false,-1, 127,0);
    tracep->declArray(c+3014,"sram_16", false,-1, 127,0);
    tracep->declArray(c+3018,"sram_17", false,-1, 127,0);
    tracep->declArray(c+3022,"sram_18", false,-1, 127,0);
    tracep->declArray(c+3026,"sram_19", false,-1, 127,0);
    tracep->declArray(c+3030,"sram_20", false,-1, 127,0);
    tracep->declArray(c+3034,"sram_21", false,-1, 127,0);
    tracep->declArray(c+3038,"sram_22", false,-1, 127,0);
    tracep->declArray(c+3042,"sram_23", false,-1, 127,0);
    tracep->declArray(c+3046,"sram_24", false,-1, 127,0);
    tracep->declArray(c+3050,"sram_25", false,-1, 127,0);
    tracep->declArray(c+3054,"sram_26", false,-1, 127,0);
    tracep->declArray(c+3058,"sram_27", false,-1, 127,0);
    tracep->declArray(c+3062,"sram_28", false,-1, 127,0);
    tracep->declArray(c+3066,"sram_29", false,-1, 127,0);
    tracep->declArray(c+3070,"sram_30", false,-1, 127,0);
    tracep->declArray(c+3074,"sram_31", false,-1, 127,0);
    tracep->declArray(c+3078,"sram_32", false,-1, 127,0);
    tracep->declArray(c+3082,"sram_33", false,-1, 127,0);
    tracep->declArray(c+3086,"sram_34", false,-1, 127,0);
    tracep->declArray(c+3090,"sram_35", false,-1, 127,0);
    tracep->declArray(c+3094,"sram_36", false,-1, 127,0);
    tracep->declArray(c+3098,"sram_37", false,-1, 127,0);
    tracep->declArray(c+3102,"sram_38", false,-1, 127,0);
    tracep->declArray(c+3106,"sram_39", false,-1, 127,0);
    tracep->declArray(c+3110,"sram_40", false,-1, 127,0);
    tracep->declArray(c+3114,"sram_41", false,-1, 127,0);
    tracep->declArray(c+3118,"sram_42", false,-1, 127,0);
    tracep->declArray(c+3122,"sram_43", false,-1, 127,0);
    tracep->declArray(c+3126,"sram_44", false,-1, 127,0);
    tracep->declArray(c+3130,"sram_45", false,-1, 127,0);
    tracep->declArray(c+3134,"sram_46", false,-1, 127,0);
    tracep->declArray(c+3138,"sram_47", false,-1, 127,0);
    tracep->declArray(c+3142,"sram_48", false,-1, 127,0);
    tracep->declArray(c+3146,"sram_49", false,-1, 127,0);
    tracep->declArray(c+3150,"sram_50", false,-1, 127,0);
    tracep->declArray(c+3154,"sram_51", false,-1, 127,0);
    tracep->declArray(c+3158,"sram_52", false,-1, 127,0);
    tracep->declArray(c+3162,"sram_53", false,-1, 127,0);
    tracep->declArray(c+3166,"sram_54", false,-1, 127,0);
    tracep->declArray(c+3170,"sram_55", false,-1, 127,0);
    tracep->declArray(c+3174,"sram_56", false,-1, 127,0);
    tracep->declArray(c+3178,"sram_57", false,-1, 127,0);
    tracep->declArray(c+3182,"sram_58", false,-1, 127,0);
    tracep->declArray(c+3186,"sram_59", false,-1, 127,0);
    tracep->declArray(c+3190,"sram_60", false,-1, 127,0);
    tracep->declArray(c+3194,"sram_61", false,-1, 127,0);
    tracep->declArray(c+3198,"sram_62", false,-1, 127,0);
    tracep->declArray(c+3202,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3293,"bwen", false,-1, 127,0);
    tracep->declBit(c+373,"wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp_he557d9cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h5cafde3d__0;
    VlWide<3>/*95:0*/ __Vtemp_h7850518b__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b945697__0;
    VlWide<4>/*127:0*/ __Vtemp_h83563b0d__0;
    VlWide<4>/*127:0*/ __Vtemp_hfddea7ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h6618c490__0;
    VlWide<3>/*95:0*/ __Vtemp_hf4336b3f__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__0;
    VlWide<3>/*95:0*/ __Vtemp_h346bf577__0;
    VlWide<3>/*95:0*/ __Vtemp_h28f9f554__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h2ede82b0__0;
    VlWide<5>/*159:0*/ __Vtemp_h4bcec608__0;
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
    VlWide<4>/*127:0*/ __Vtemp_hc91b162c__0;
    VlWide<4>/*127:0*/ __Vtemp_h96d8aca3__0;
    VlWide<4>/*127:0*/ __Vtemp_h0fce6913__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__0;
    VlWide<4>/*127:0*/ __Vtemp_hd09821c2__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
    bufp->fullBit(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
    bufp->fullQData(oldp+3,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                              ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                              : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                  : 0ULL))),64);
    bufp->fullBit(oldp+5,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
    bufp->fullBit(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
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
    bufp->fullBit(oldp+10,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
    bufp->fullBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
    bufp->fullBit(oldp+12,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
    bufp->fullBit(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
    bufp->fullQData(oldp+14,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
    bufp->fullCData(oldp+16,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                              | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
    bufp->fullBit(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    bufp->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_data),64);
    bufp->fullBit(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_bits_rlast));
    bufp->fullCData(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram_addr),6);
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
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
    bufp->fullCData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram_addr),6);
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
    bufp->fullBit(oldp+50,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
    __Vtemp_he557d9cd__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
    __Vtemp_he557d9cd__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
    __Vtemp_he557d9cd__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
    __Vtemp_he557d9cd__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
    bufp->fullWData(oldp+51,(__Vtemp_he557d9cd__0),128);
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
    bufp->fullQData(oldp+79,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
    bufp->fullQData(oldp+81,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                               ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                               : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
    bufp->fullQData(oldp+83,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
    bufp->fullQData(oldp+85,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
    bufp->fullQData(oldp+87,((((QData)((IData)(((((
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
    bufp->fullBit(oldp+89,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid) 
                            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
    bufp->fullQData(oldp+90,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
    bufp->fullCData(oldp+92,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
    bufp->fullBit(oldp+93,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    bufp->fullBit(oldp+94,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
    bufp->fullIData(oldp+95,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
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
    bufp->fullIData(oldp+96,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
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
    bufp->fullBit(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush));
    bufp->fullBit(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
    bufp->fullBit(oldp+99,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
    bufp->fullQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
    bufp->fullBit(oldp+102,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    bufp->fullBit(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    bufp->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
    bufp->fullQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
    bufp->fullBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    bufp->fullQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready));
    bufp->fullBit(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid));
    bufp->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
    bufp->fullQData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
    bufp->fullQData(oldp+119,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
    bufp->fullCData(oldp+121,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
    bufp->fullBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
    bufp->fullBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    bufp->fullBit(oldp+124,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
    bufp->fullBit(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    bufp->fullQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
    bufp->fullQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
    bufp->fullBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
    bufp->fullBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    bufp->fullBit(oldp+132,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
    bufp->fullBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    bufp->fullQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
    bufp->fullBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
    bufp->fullBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
    bufp->fullBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    bufp->fullBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    bufp->fullBit(oldp+142,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready))));
    bufp->fullBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    bufp->fullBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
    bufp->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
    bufp->fullQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_pc),64);
    bufp->fullBit(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    bufp->fullQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
    bufp->fullBit(oldp+152,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                       >> 0x1fU)) ? 
                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
    bufp->fullBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
    bufp->fullQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
    bufp->fullBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    bufp->fullBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
    bufp->fullBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
    bufp->fullQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
    bufp->fullBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
    bufp->fullQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
    bufp->fullBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
    bufp->fullQData(oldp+165,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                : 0ULL)),64);
    bufp->fullQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
    bufp->fullBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_flush));
    bufp->fullBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    bufp->fullBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3));
    bufp->fullIData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
    bufp->fullQData(oldp+173,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                        : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
    bufp->fullBit(oldp+175,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                              : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
    bufp->fullBit(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    bufp->fullCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
    bufp->fullCData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
    bufp->fullCData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
    bufp->fullQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
    bufp->fullCData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
    bufp->fullQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
    bufp->fullIData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
    bufp->fullQData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
    bufp->fullIData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
    bufp->fullCData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
    bufp->fullBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
    bufp->fullBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
    bufp->fullSData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+195,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                             <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
    bufp->fullBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
    bufp->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
    bufp->fullQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
    bufp->fullQData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
    bufp->fullQData(oldp+203,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
    bufp->fullBit(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
    bufp->fullCData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
    bufp->fullQData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
    bufp->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en));
    bufp->fullSData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_is_exception));
    bufp->fullBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_time_irq));
    bufp->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_soft_irq));
    bufp->fullCData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
    bufp->fullQData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
    bufp->fullQData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
    bufp->fullBit(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_commit));
    bufp->fullIData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
    bufp->fullBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    bufp->fullCData(oldp+224,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0xfU))),5);
    bufp->fullQData(oldp+225,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0xfU)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : ((0x1fU == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                    : ((0x1eU == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                        : ((0x1dU == 
                                            (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xfU)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                            : ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0xfU)))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26))))))),64);
    bufp->fullCData(oldp+227,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+228,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                : ((0x1fU == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                    : ((0x1eU == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                        : ((0x1dU == 
                                            (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0x14U)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                            : ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U)))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58))))))),64);
    bufp->fullSData(oldp+230,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+231,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
                                 == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                     >> 0x14U)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0x14U))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                    : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                                        : ((0x344U 
                                            == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0x14U))
                                            ? 0ULL : 
                                           ((0x343U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                             : ((0x342U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                 : 
                                                ((0x341U 
                                                  == 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                  : 
                                                 ((0x340U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                   : 
                                                  ((0x306U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? 0ULL
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                     : 
                                                    ((0x304U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? 0ULL
                                                       : 
                                                      ((0x302U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? 0ULL
                                                        : 
                                                       ((0x301U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? 0ULL
                                                         : 
                                                        ((0x300U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                          : 0ULL)))))))))))))))),64);
    bufp->fullQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
    bufp->fullQData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
    bufp->fullBit(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    bufp->fullBit(oldp+238,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullBit(oldp+239,((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullCData(oldp+240,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
    bufp->fullQData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
    bufp->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
    bufp->fullQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
    bufp->fullQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
    bufp->fullQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
    bufp->fullQData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
    bufp->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
    bufp->fullQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
    bufp->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
    bufp->fullQData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
    bufp->fullQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
    bufp->fullQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
    bufp->fullQData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
    bufp->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
    bufp->fullQData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
    bufp->fullQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
    bufp->fullQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
    bufp->fullQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
    bufp->fullQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
    bufp->fullQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
    bufp->fullQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
    bufp->fullQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
    bufp->fullQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
    bufp->fullQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
    bufp->fullQData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
    bufp->fullQData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
    bufp->fullQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
    bufp->fullQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
    bufp->fullQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
    bufp->fullQData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
    bufp->fullQData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
    bufp->fullQData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
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
    bufp->fullQData(oldp+332,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0x14U))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                                    : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                        ? 0ULL : ((0x343U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                     : 
                                                    ((0x340U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? 0ULL
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                        : 
                                                       ((0x304U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                         : 
                                                        ((0x303U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x302U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                            >> 0x14U))
                                                           ? 0ULL
                                                           : 
                                                          ((0x301U 
                                                            == 
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                             >> 0x14U))
                                                            ? 0ULL
                                                            : 
                                                           ((0x300U 
                                                             == 
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
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
    bufp->fullWData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
    bufp->fullWData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
    bufp->fullBit(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
    bufp->fullBit(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
    bufp->fullQData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
    bufp->fullQData(oldp+378,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
    bufp->fullQData(oldp+380,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
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
    bufp->fullBit(oldp+407,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
    bufp->fullBit(oldp+408,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
    bufp->fullBit(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__or_hit));
    __Vtemp_h7850518b__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___temp_addr_T 
                                        << 4U));
    __Vtemp_h7850518b__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___temp_addr_T 
                                         << 4U) >> 0x20U));
    __Vtemp_h7850518b__0[2U] = 0U;
    bufp->fullWData(oldp+410,(__Vtemp_h7850518b__0),67);
    bufp->fullCData(oldp+413,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+414,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
    bufp->fullCData(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
    bufp->fullBit(oldp+417,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+418,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0xeU))));
    bufp->fullBit(oldp+419,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 0xeU)))));
    bufp->fullCData(oldp+420,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? ((0x60U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xfU)) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))),7);
    bufp->fullCData(oldp+421,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? 0U : 5U)),3);
    bufp->fullBit(oldp+422,((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+423,(((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0xcU))) 
                             & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0xeU)))));
    bufp->fullCData(oldp+424,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? 3U : 0xcU)),4);
    bufp->fullBit(oldp+425,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 5U)))));
    bufp->fullBit(oldp+426,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullCData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
    bufp->fullCData(oldp+428,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                : ((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
    bufp->fullCData(oldp+429,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? 6U : (((1U == (7U 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0xcU))))
                                         ? 4U : 0xcU))),4);
    bufp->fullBit(oldp+430,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 5U))));
    bufp->fullCData(oldp+431,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? 0x4eU : 0x4aU)),7);
    bufp->fullCData(oldp+432,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? 2U : 0xcU)),4);
    bufp->fullBit(oldp+433,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 3U)))));
    bufp->fullCData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
    bufp->fullBit(oldp+435,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                             | ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                | ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                   | ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                      & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                          ? (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 5U))
                                          : ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                             & ((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xcU))) 
                                                & (6U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)))))))))));
    bufp->fullBit(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
    bufp->fullBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
    bufp->fullBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    bufp->fullBit(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
    bufp->fullBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
    bufp->fullQData(oldp+441,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+443,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
    bufp->fullQData(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
    bufp->fullQData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data),64);
    bufp->fullQData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data),64);
    bufp->fullQData(oldp+450,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
    bufp->fullBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    bufp->fullQData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullBit(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    bufp->fullQData(oldp+458,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
    bufp->fullBit(oldp+460,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+461,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    bufp->fullQData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
    bufp->fullBit(oldp+465,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    bufp->fullQData(oldp+466,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
    bufp->fullSData(oldp+468,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    bufp->fullCData(oldp+470,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
    bufp->fullBit(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
    bufp->fullBit(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullCData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullBit(oldp+474,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
    bufp->fullBit(oldp+475,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+476,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+477,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U))));
    bufp->fullCData(oldp+478,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
    bufp->fullBit(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    bufp->fullBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    bufp->fullBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
    bufp->fullBit(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+492,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    bufp->fullQData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullQData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
    bufp->fullBit(oldp+499,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U)))));
    bufp->fullQData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+502,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 6U))));
    bufp->fullBit(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
    bufp->fullQData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullQData(oldp+506,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
    bufp->fullWData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
    bufp->fullBit(oldp+511,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
    bufp->fullBit(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
    bufp->fullWData(oldp+514,(__Vtemp_hfddea7ef__0),127);
    bufp->fullQData(oldp+518,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+520,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+522,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                     ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
    bufp->fullQData(oldp+524,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+526,((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
    bufp->fullBit(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    bufp->fullQData(oldp+528,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data
                                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
    __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                        >> 0x20U));
    __Vtemp_h6618c490__0[2U] = 1U;
    bufp->fullWData(oldp+530,(__Vtemp_h6618c490__0),65);
    bufp->fullQData(oldp+533,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        __Vtemp_hf4336b3f__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
        __Vtemp_hf4336b3f__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
        __Vtemp_hf4336b3f__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
    } else {
        __Vtemp_hf4336b3f__0[0U] = 0U;
        __Vtemp_hf4336b3f__0[1U] = 0U;
        __Vtemp_hf4336b3f__0[2U] = 0U;
    }
    bufp->fullWData(oldp+535,(__Vtemp_hf4336b3f__0),65);
    bufp->fullQData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullQData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
    bufp->fullBit(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
    bufp->fullBit(oldp+543,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc) 
                                 & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc 
                                    != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                         ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                             : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                  : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                         : 0ULL)))) 
                             | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre))))));
    bufp->fullQData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullQData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
    bufp->fullQData(oldp+554,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
    bufp->fullQData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullQData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
    bufp->fullBit(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    bufp->fullWData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
    bufp->fullBit(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullBit(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
    bufp->fullQData(oldp+568,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullBit(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
    bufp->fullQData(oldp+573,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
    bufp->fullBit(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullBit(oldp+577,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U)))));
    bufp->fullWData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
    bufp->fullWData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
    bufp->fullWData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
    bufp->fullWData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
    bufp->fullWData(oldp+599,(__Vtemp_h28f9f554__0),65);
    bufp->fullCData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    bufp->fullWData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
    bufp->fullBit(oldp+610,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
    bufp->fullBit(oldp+611,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                      ^ __Vtemp_h2ede82b0__0[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                        ^ __Vtemp_h2ede82b0__0[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                       ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
    bufp->fullBit(oldp+612,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    bufp->fullBit(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
    bufp->fullBit(oldp+614,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
    bufp->fullBit(oldp+615,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                   >> 3U))));
    bufp->fullQData(oldp+616,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullQData(oldp+618,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))));
    bufp->fullBit(oldp+621,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 1U))));
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        __Vtemp_h4bcec608__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
        if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                           >> 0x1fU)))) {
            __Vtemp_h4bcec608__0[1U] = 0xffffffffU;
            __Vtemp_h4bcec608__0[2U] = 0xffffffffU;
            __Vtemp_h4bcec608__0[3U] = 0xffffffffU;
            __Vtemp_h4bcec608__0[4U] = 3U;
        } else {
            __Vtemp_h4bcec608__0[1U] = 0U;
            __Vtemp_h4bcec608__0[2U] = 0U;
            __Vtemp_h4bcec608__0[3U] = 0U;
            __Vtemp_h4bcec608__0[4U] = 0U;
        }
    } else if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        __Vtemp_h4bcec608__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
        __Vtemp_h4bcec608__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                            >> 0x20U));
        if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                           >> 0x3fU)))) {
            __Vtemp_h4bcec608__0[2U] = 0xffffffffU;
            __Vtemp_h4bcec608__0[3U] = 0xffffffffU;
            __Vtemp_h4bcec608__0[4U] = 3U;
        } else {
            __Vtemp_h4bcec608__0[2U] = 0U;
            __Vtemp_h4bcec608__0[3U] = 0U;
            __Vtemp_h4bcec608__0[4U] = 0U;
        }
    } else {
        __Vtemp_h4bcec608__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
        __Vtemp_h4bcec608__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                            >> 0x20U));
        __Vtemp_h4bcec608__0[2U] = 0U;
        __Vtemp_h4bcec608__0[3U] = 0U;
        __Vtemp_h4bcec608__0[4U] = 0U;
    }
    bufp->fullWData(oldp+622,(__Vtemp_h4bcec608__0),130);
    bufp->fullWData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
    bufp->fullWData(oldp+630,(__Vtemp_h3364f91c__0),67);
    bufp->fullCData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
    bufp->fullWData(oldp+648,(__Vtemp_hf484a493__0),131);
    bufp->fullCData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullBit(oldp+654,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                          >> 2U)))));
    bufp->fullBit(oldp+655,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
    bufp->fullBit(oldp+656,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 4U))));
    bufp->fullQData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullQData(oldp+663,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+665,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+666,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+667,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+668,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+669,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))) 
                             | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    bufp->fullCData(oldp+670,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
    bufp->fullBit(oldp+671,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullQData(oldp+672,(((0xffffffffffffff77ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                               | (QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                              >> 7U)))
                                                   ? 0x88U
                                                   : 0x80U))))),64);
    bufp->fullBit(oldp+674,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
    bufp->fullBit(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
    bufp->fullQData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullBit(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
    bufp->fullQData(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
    bufp->fullQData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
    bufp->fullQData(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
    bufp->fullBit(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
    bufp->fullCData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
    bufp->fullBit(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
    bufp->fullBit(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
    bufp->fullBit(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
    bufp->fullWData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
    bufp->fullWData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
    bufp->fullWData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
    bufp->fullWData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
    bufp->fullWData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
    bufp->fullWData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
    bufp->fullWData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
    bufp->fullWData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
    bufp->fullWData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
    bufp->fullWData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
    bufp->fullWData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
    bufp->fullWData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
    bufp->fullWData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
    bufp->fullWData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
    bufp->fullWData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
    bufp->fullWData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
    bufp->fullWData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
    bufp->fullWData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
    bufp->fullWData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
    bufp->fullWData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
    bufp->fullWData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
    bufp->fullWData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
    bufp->fullWData(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
    bufp->fullWData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
    bufp->fullWData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
    bufp->fullWData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
    bufp->fullWData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
    bufp->fullWData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
    bufp->fullWData(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
    bufp->fullWData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
    bufp->fullWData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
    bufp->fullWData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
    bufp->fullWData(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
    bufp->fullWData(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
    bufp->fullWData(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
    bufp->fullWData(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
    bufp->fullWData(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
    bufp->fullWData(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
    bufp->fullWData(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
    bufp->fullWData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
    bufp->fullWData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
    bufp->fullWData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
    bufp->fullWData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
    bufp->fullWData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
    bufp->fullWData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
    bufp->fullWData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
    bufp->fullWData(oldp+884,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
    bufp->fullWData(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
    bufp->fullWData(oldp+892,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
    bufp->fullWData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
    bufp->fullWData(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
    bufp->fullWData(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
    bufp->fullWData(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
    bufp->fullWData(oldp+912,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
    bufp->fullWData(oldp+916,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
    bufp->fullWData(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
    bufp->fullWData(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
    bufp->fullWData(oldp+928,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
    bufp->fullWData(oldp+932,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
    bufp->fullWData(oldp+936,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
    bufp->fullWData(oldp+940,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
    bufp->fullWData(oldp+944,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
    bufp->fullWData(oldp+948,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
    bufp->fullWData(oldp+952,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
    bufp->fullQData(oldp+956,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
    bufp->fullQData(oldp+958,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
    bufp->fullQData(oldp+960,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
    bufp->fullQData(oldp+962,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
    bufp->fullQData(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
    bufp->fullQData(oldp+966,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
    bufp->fullCData(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
    bufp->fullCData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
    bufp->fullCData(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
    bufp->fullCData(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
    bufp->fullCData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
    bufp->fullCData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
    bufp->fullCData(oldp+974,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
    bufp->fullCData(oldp+975,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
    bufp->fullCData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
    bufp->fullCData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
    bufp->fullCData(oldp+978,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
    bufp->fullCData(oldp+979,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
    bufp->fullCData(oldp+980,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
    bufp->fullCData(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
    bufp->fullCData(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
    bufp->fullCData(oldp+983,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
    bufp->fullCData(oldp+984,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
    bufp->fullCData(oldp+985,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
    bufp->fullCData(oldp+986,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
    bufp->fullCData(oldp+987,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
    bufp->fullCData(oldp+988,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
    bufp->fullCData(oldp+989,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
    bufp->fullCData(oldp+990,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
    bufp->fullCData(oldp+991,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
    bufp->fullCData(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
    bufp->fullCData(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
    bufp->fullCData(oldp+994,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
    bufp->fullCData(oldp+995,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
    bufp->fullCData(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
    bufp->fullCData(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
    bufp->fullCData(oldp+998,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
    bufp->fullCData(oldp+999,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
    bufp->fullCData(oldp+1000,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
    bufp->fullCData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
    bufp->fullCData(oldp+1002,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
    bufp->fullCData(oldp+1003,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
    bufp->fullCData(oldp+1004,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
    bufp->fullCData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
    bufp->fullCData(oldp+1006,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
    bufp->fullCData(oldp+1007,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
    bufp->fullCData(oldp+1008,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
    bufp->fullCData(oldp+1009,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
    bufp->fullCData(oldp+1010,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
    bufp->fullCData(oldp+1011,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
    bufp->fullCData(oldp+1012,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
    bufp->fullCData(oldp+1013,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
    bufp->fullCData(oldp+1014,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
    bufp->fullCData(oldp+1015,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
    bufp->fullCData(oldp+1016,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
    bufp->fullCData(oldp+1017,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
    bufp->fullCData(oldp+1018,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
    bufp->fullCData(oldp+1019,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
    bufp->fullCData(oldp+1020,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
    bufp->fullCData(oldp+1021,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
    bufp->fullCData(oldp+1022,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
    bufp->fullCData(oldp+1023,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
    bufp->fullCData(oldp+1024,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
    bufp->fullCData(oldp+1025,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
    bufp->fullCData(oldp+1026,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
    bufp->fullCData(oldp+1027,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
    bufp->fullCData(oldp+1028,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
    bufp->fullCData(oldp+1029,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
    bufp->fullCData(oldp+1030,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
    bufp->fullCData(oldp+1031,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
    bufp->fullCData(oldp+1032,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullCData(oldp+1033,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                 >> 3U)))),6);
    __Vtemp_hc91b162c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
    __Vtemp_hc91b162c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
    __Vtemp_hc91b162c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
    __Vtemp_hc91b162c__0[3U] = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
    bufp->fullWData(oldp+1034,(__Vtemp_hc91b162c__0),123);
    bufp->fullCData(oldp+1038,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 3U)))),6);
    bufp->fullQData(oldp+1039,(((0xfffffffffffffeULL 
                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 8U)) | (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                          >> 2U))))))),56);
    bufp->fullBit(oldp+1041,((1U & (((0x3fU == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63)
                                      : ((0x3eU == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62)
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61)
                                              : ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60)
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59)
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58)
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57)
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56)
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55)
                                                       : 
                                                      ((0x36U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54)
                                                        : 
                                                       ((0x35U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53)
                                                         : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436)))))))))))) 
                                    >> 1U))));
    bufp->fullBit(oldp+1042,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                    >> 0x1aU))));
    bufp->fullQData(oldp+1043,((0xffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                                 >> 2U)))),56);
    bufp->fullQData(oldp+1045,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                                 >> 2U)))),64);
    bufp->fullCData(oldp+1047,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
    bufp->fullQData(oldp+1048,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
    bufp->fullQData(oldp+1050,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
    bufp->fullQData(oldp+1052,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
    bufp->fullQData(oldp+1054,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
    bufp->fullIData(oldp+1056,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
    bufp->fullIData(oldp+1057,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
    bufp->fullIData(oldp+1058,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
    bufp->fullIData(oldp+1059,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
    bufp->fullBit(oldp+1060,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
    bufp->fullBit(oldp+1061,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
    bufp->fullBit(oldp+1062,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
    bufp->fullBit(oldp+1063,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
    bufp->fullBit(oldp+1064,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
    bufp->fullBit(oldp+1065,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
    bufp->fullBit(oldp+1066,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
    bufp->fullBit(oldp+1067,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
    bufp->fullCData(oldp+1068,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+1069,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+1070,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+1071,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
    bufp->fullBit(oldp+1072,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
    bufp->fullCData(oldp+1073,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                       + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                      - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
    bufp->fullBit(oldp+1074,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+1075,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullCData(oldp+1077,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+1078,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+1079,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    bufp->fullBit(oldp+1080,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullWData(oldp+1081,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
    bufp->fullWData(oldp+1085,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
    bufp->fullWData(oldp+1089,(__Vtemp_h96d8aca3__0),128);
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
    bufp->fullWData(oldp+1093,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+1097,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+1098,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullBit(oldp+1099,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+1100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+1102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+1103,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                               >> 3U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                 : (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+1105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+1106,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                               >> 3U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                 : (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+1108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+1109,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                 >> 4U)))),6);
    bufp->fullBit(oldp+1110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+1111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+1113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+1115,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+1116,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
    bufp->fullBit(oldp+1117,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
    bufp->fullQData(oldp+1118,((1ULL << (0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                          >> 4U))))),64);
    bufp->fullBit(oldp+1120,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+1121,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+1122,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+1123,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+1124,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+1125,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                              & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 0x1fU)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
    bufp->fullBit(oldp+1126,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullQData(oldp+1127,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                >> 0xaU)),54);
    bufp->fullCData(oldp+1129,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 4U)))),6);
    bufp->fullCData(oldp+1130,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+1131,((0x3fffffffffffffULL 
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
    bufp->fullQData(oldp+1133,((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+1135,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
    bufp->fullBit(oldp+1136,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+1137,((0xfffffffffffffff0ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
    bufp->fullQData(oldp+1139,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU)),54);
    bufp->fullCData(oldp+1141,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+1142,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullBit(oldp+1144,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
    bufp->fullQData(oldp+1145,((1ULL << (0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                          >> 4U))))),64);
    bufp->fullQData(oldp+1147,((~ (1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U)))))),64);
    bufp->fullCData(oldp+1149,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
    bufp->fullQData(oldp+1150,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_and_neg_chose),64);
    bufp->fullQData(oldp+1152,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_or_chose),64);
    bufp->fullBit(oldp+1154,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0))));
    bufp->fullBit(oldp+1155,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))));
    bufp->fullBit(oldp+1156,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__hit_valid));
    bufp->fullBit(oldp+1157,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__is_hit));
    bufp->fullWData(oldp+1158,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
    bufp->fullWData(oldp+1162,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
    bufp->fullWData(oldp+1166,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
    bufp->fullWData(oldp+1170,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
    bufp->fullWData(oldp+1174,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
    bufp->fullWData(oldp+1178,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
    bufp->fullWData(oldp+1182,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
    bufp->fullWData(oldp+1186,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
    bufp->fullWData(oldp+1190,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
    bufp->fullWData(oldp+1194,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
    bufp->fullWData(oldp+1198,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
    bufp->fullWData(oldp+1202,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
    bufp->fullWData(oldp+1206,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
    bufp->fullWData(oldp+1210,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
    bufp->fullWData(oldp+1214,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
    bufp->fullWData(oldp+1218,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
    bufp->fullWData(oldp+1222,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
    bufp->fullWData(oldp+1226,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
    bufp->fullWData(oldp+1230,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
    bufp->fullWData(oldp+1234,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
    bufp->fullWData(oldp+1238,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
    bufp->fullWData(oldp+1242,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
    bufp->fullWData(oldp+1246,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
    bufp->fullWData(oldp+1250,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
    bufp->fullWData(oldp+1254,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
    bufp->fullWData(oldp+1258,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
    bufp->fullWData(oldp+1262,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
    bufp->fullWData(oldp+1266,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
    bufp->fullWData(oldp+1270,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
    bufp->fullWData(oldp+1274,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
    bufp->fullWData(oldp+1278,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
    bufp->fullWData(oldp+1282,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
    bufp->fullWData(oldp+1286,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
    bufp->fullWData(oldp+1290,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
    bufp->fullWData(oldp+1294,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
    bufp->fullWData(oldp+1298,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
    bufp->fullWData(oldp+1302,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
    bufp->fullWData(oldp+1306,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
    bufp->fullWData(oldp+1310,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
    bufp->fullWData(oldp+1314,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
    bufp->fullWData(oldp+1318,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
    bufp->fullWData(oldp+1322,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
    bufp->fullWData(oldp+1326,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
    bufp->fullWData(oldp+1330,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
    bufp->fullWData(oldp+1334,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
    bufp->fullWData(oldp+1338,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
    bufp->fullWData(oldp+1342,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
    bufp->fullWData(oldp+1346,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
    bufp->fullWData(oldp+1350,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
    bufp->fullWData(oldp+1354,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
    bufp->fullWData(oldp+1358,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
    bufp->fullWData(oldp+1362,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
    bufp->fullWData(oldp+1366,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
    bufp->fullWData(oldp+1370,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
    bufp->fullWData(oldp+1374,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
    bufp->fullWData(oldp+1378,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
    bufp->fullWData(oldp+1382,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
    bufp->fullWData(oldp+1386,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
    bufp->fullWData(oldp+1390,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
    bufp->fullWData(oldp+1394,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
    bufp->fullWData(oldp+1398,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
    bufp->fullWData(oldp+1402,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
    bufp->fullWData(oldp+1406,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
    bufp->fullWData(oldp+1410,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
    bufp->fullWData(oldp+1414,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
    bufp->fullWData(oldp+1418,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
    bufp->fullWData(oldp+1422,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
    bufp->fullWData(oldp+1426,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
    bufp->fullWData(oldp+1430,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
    bufp->fullWData(oldp+1434,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
    bufp->fullWData(oldp+1438,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
    bufp->fullWData(oldp+1442,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
    bufp->fullWData(oldp+1446,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
    bufp->fullWData(oldp+1450,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
    bufp->fullWData(oldp+1454,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
    bufp->fullWData(oldp+1458,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
    bufp->fullWData(oldp+1462,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
    bufp->fullWData(oldp+1466,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
    bufp->fullWData(oldp+1470,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
    bufp->fullWData(oldp+1474,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
    bufp->fullWData(oldp+1478,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
    bufp->fullWData(oldp+1482,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
    bufp->fullWData(oldp+1486,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
    bufp->fullWData(oldp+1490,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
    bufp->fullWData(oldp+1494,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
    bufp->fullWData(oldp+1498,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
    bufp->fullWData(oldp+1502,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
    bufp->fullWData(oldp+1506,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
    bufp->fullWData(oldp+1510,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
    bufp->fullWData(oldp+1514,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
    bufp->fullWData(oldp+1518,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
    bufp->fullWData(oldp+1522,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
    bufp->fullWData(oldp+1526,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
    bufp->fullWData(oldp+1530,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
    bufp->fullWData(oldp+1534,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
    bufp->fullWData(oldp+1538,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
    bufp->fullWData(oldp+1542,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
    bufp->fullWData(oldp+1546,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
    bufp->fullWData(oldp+1550,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
    bufp->fullWData(oldp+1554,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
    bufp->fullWData(oldp+1558,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
    bufp->fullWData(oldp+1562,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
    bufp->fullWData(oldp+1566,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
    bufp->fullWData(oldp+1570,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
    bufp->fullWData(oldp+1574,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
    bufp->fullWData(oldp+1578,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
    bufp->fullWData(oldp+1582,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
    bufp->fullWData(oldp+1586,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
    bufp->fullWData(oldp+1590,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
    bufp->fullWData(oldp+1594,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
    bufp->fullWData(oldp+1598,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
    bufp->fullWData(oldp+1602,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
    bufp->fullWData(oldp+1606,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
    bufp->fullWData(oldp+1610,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
    bufp->fullWData(oldp+1614,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
    bufp->fullWData(oldp+1618,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
    bufp->fullWData(oldp+1622,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
    bufp->fullWData(oldp+1626,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
    bufp->fullWData(oldp+1630,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
    bufp->fullWData(oldp+1634,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
    bufp->fullWData(oldp+1638,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
    bufp->fullWData(oldp+1642,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
    bufp->fullWData(oldp+1646,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
    bufp->fullWData(oldp+1650,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
    bufp->fullWData(oldp+1654,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
    bufp->fullWData(oldp+1658,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
    bufp->fullWData(oldp+1662,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
    bufp->fullWData(oldp+1666,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
    bufp->fullWData(oldp+1670,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
    bufp->fullWData(oldp+1674,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
    bufp->fullWData(oldp+1678,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
    bufp->fullWData(oldp+1682,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
    bufp->fullWData(oldp+1686,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
    bufp->fullWData(oldp+1690,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
    bufp->fullWData(oldp+1694,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
    bufp->fullWData(oldp+1698,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
    bufp->fullWData(oldp+1702,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
    bufp->fullWData(oldp+1706,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
    bufp->fullWData(oldp+1710,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
    bufp->fullWData(oldp+1714,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
    bufp->fullWData(oldp+1718,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
    bufp->fullWData(oldp+1722,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
    bufp->fullWData(oldp+1726,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
    bufp->fullWData(oldp+1730,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
    bufp->fullWData(oldp+1734,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
    bufp->fullWData(oldp+1738,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
    bufp->fullWData(oldp+1742,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
    bufp->fullWData(oldp+1746,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
    bufp->fullWData(oldp+1750,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
    bufp->fullWData(oldp+1754,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
    bufp->fullWData(oldp+1758,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
    bufp->fullWData(oldp+1762,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
    bufp->fullWData(oldp+1766,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
    bufp->fullWData(oldp+1770,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
    bufp->fullWData(oldp+1774,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
    bufp->fullWData(oldp+1778,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
    bufp->fullWData(oldp+1782,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
    bufp->fullWData(oldp+1786,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
    bufp->fullWData(oldp+1790,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
    bufp->fullWData(oldp+1794,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
    bufp->fullWData(oldp+1798,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
    bufp->fullWData(oldp+1802,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
    bufp->fullWData(oldp+1806,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
    bufp->fullWData(oldp+1810,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
    bufp->fullWData(oldp+1814,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
    bufp->fullWData(oldp+1818,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
    bufp->fullWData(oldp+1822,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
    bufp->fullWData(oldp+1826,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
    bufp->fullWData(oldp+1830,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
    bufp->fullWData(oldp+1834,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
    bufp->fullWData(oldp+1838,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
    bufp->fullWData(oldp+1842,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
    bufp->fullWData(oldp+1846,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
    bufp->fullWData(oldp+1850,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
    bufp->fullWData(oldp+1854,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
    bufp->fullWData(oldp+1858,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
    bufp->fullWData(oldp+1862,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
    bufp->fullWData(oldp+1866,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
    bufp->fullWData(oldp+1870,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
    bufp->fullWData(oldp+1874,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
    bufp->fullWData(oldp+1878,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
    bufp->fullWData(oldp+1882,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
    bufp->fullWData(oldp+1886,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
    bufp->fullWData(oldp+1890,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
    bufp->fullWData(oldp+1894,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
    bufp->fullWData(oldp+1898,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
    bufp->fullWData(oldp+1902,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
    bufp->fullWData(oldp+1906,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
    bufp->fullWData(oldp+1910,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
    bufp->fullWData(oldp+1914,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
    bufp->fullWData(oldp+1918,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
    bufp->fullWData(oldp+1922,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
    bufp->fullWData(oldp+1926,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
    bufp->fullWData(oldp+1930,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
    bufp->fullWData(oldp+1934,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
    bufp->fullWData(oldp+1938,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
    bufp->fullWData(oldp+1942,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
    bufp->fullWData(oldp+1946,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
    bufp->fullWData(oldp+1950,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
    bufp->fullWData(oldp+1954,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
    bufp->fullWData(oldp+1958,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
    bufp->fullWData(oldp+1962,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
    bufp->fullWData(oldp+1966,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
    bufp->fullWData(oldp+1970,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
    bufp->fullWData(oldp+1974,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
    bufp->fullWData(oldp+1978,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
    bufp->fullWData(oldp+1982,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
    bufp->fullWData(oldp+1986,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
    bufp->fullWData(oldp+1990,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
    bufp->fullWData(oldp+1994,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
    bufp->fullWData(oldp+1998,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
    bufp->fullWData(oldp+2002,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
    bufp->fullWData(oldp+2006,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
    bufp->fullWData(oldp+2010,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
    bufp->fullWData(oldp+2014,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
    bufp->fullWData(oldp+2018,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
    bufp->fullWData(oldp+2022,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
    bufp->fullWData(oldp+2026,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
    bufp->fullWData(oldp+2030,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
    bufp->fullWData(oldp+2034,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
    bufp->fullWData(oldp+2038,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
    bufp->fullWData(oldp+2042,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
    bufp->fullWData(oldp+2046,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
    bufp->fullWData(oldp+2050,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
    bufp->fullWData(oldp+2054,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
    bufp->fullWData(oldp+2058,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
    bufp->fullWData(oldp+2062,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
    bufp->fullWData(oldp+2066,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
    bufp->fullWData(oldp+2070,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
    bufp->fullWData(oldp+2074,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
    bufp->fullWData(oldp+2078,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
    bufp->fullWData(oldp+2082,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
    bufp->fullWData(oldp+2086,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
    bufp->fullWData(oldp+2090,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
    bufp->fullWData(oldp+2094,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
    bufp->fullWData(oldp+2098,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
    bufp->fullWData(oldp+2102,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
    bufp->fullWData(oldp+2106,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
    bufp->fullWData(oldp+2110,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
    bufp->fullWData(oldp+2114,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
    bufp->fullWData(oldp+2118,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
    bufp->fullWData(oldp+2122,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
    bufp->fullWData(oldp+2126,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
    bufp->fullWData(oldp+2130,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
    bufp->fullWData(oldp+2134,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
    bufp->fullWData(oldp+2138,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
    bufp->fullWData(oldp+2142,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
    bufp->fullWData(oldp+2146,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
    bufp->fullWData(oldp+2150,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
    bufp->fullWData(oldp+2154,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
    bufp->fullWData(oldp+2158,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
    bufp->fullWData(oldp+2162,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
    bufp->fullWData(oldp+2166,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
    bufp->fullWData(oldp+2170,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
    bufp->fullWData(oldp+2174,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
    bufp->fullWData(oldp+2178,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
    bufp->fullWData(oldp+2182,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
    bufp->fullWData(oldp+2186,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
    bufp->fullWData(oldp+2190,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
    bufp->fullWData(oldp+2194,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
    bufp->fullWData(oldp+2198,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
    bufp->fullWData(oldp+2202,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
    bufp->fullWData(oldp+2206,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
    bufp->fullWData(oldp+2210,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
    bufp->fullWData(oldp+2214,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
    bufp->fullWData(oldp+2218,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
    bufp->fullWData(oldp+2222,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
    bufp->fullWData(oldp+2226,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
    bufp->fullWData(oldp+2230,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
    bufp->fullWData(oldp+2234,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
    bufp->fullWData(oldp+2238,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
    bufp->fullWData(oldp+2242,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
    bufp->fullWData(oldp+2246,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
    bufp->fullWData(oldp+2250,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
    bufp->fullWData(oldp+2254,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
    bufp->fullWData(oldp+2258,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
    bufp->fullWData(oldp+2262,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
    bufp->fullWData(oldp+2266,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
    bufp->fullWData(oldp+2270,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
    bufp->fullWData(oldp+2274,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
    bufp->fullWData(oldp+2278,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
    bufp->fullWData(oldp+2282,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
    bufp->fullWData(oldp+2286,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
    bufp->fullWData(oldp+2290,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
    bufp->fullWData(oldp+2294,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
    bufp->fullWData(oldp+2298,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
    bufp->fullWData(oldp+2302,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
    bufp->fullWData(oldp+2306,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
    bufp->fullWData(oldp+2310,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
    bufp->fullWData(oldp+2314,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
    bufp->fullWData(oldp+2318,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
    bufp->fullWData(oldp+2322,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
    bufp->fullWData(oldp+2326,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
    bufp->fullWData(oldp+2330,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
    bufp->fullWData(oldp+2334,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
    bufp->fullWData(oldp+2338,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
    bufp->fullWData(oldp+2342,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
    bufp->fullWData(oldp+2346,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
    bufp->fullWData(oldp+2350,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
    bufp->fullWData(oldp+2354,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
    bufp->fullWData(oldp+2358,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
    bufp->fullWData(oldp+2362,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
    bufp->fullWData(oldp+2366,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
    bufp->fullWData(oldp+2370,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
    bufp->fullWData(oldp+2374,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
    bufp->fullWData(oldp+2378,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
    bufp->fullWData(oldp+2382,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
    bufp->fullWData(oldp+2386,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
    bufp->fullWData(oldp+2390,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
    bufp->fullWData(oldp+2394,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
    bufp->fullWData(oldp+2398,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
    bufp->fullWData(oldp+2402,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
    bufp->fullWData(oldp+2406,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
    bufp->fullWData(oldp+2410,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
    bufp->fullWData(oldp+2414,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
    bufp->fullWData(oldp+2418,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
    bufp->fullWData(oldp+2422,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
    bufp->fullWData(oldp+2426,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
    bufp->fullWData(oldp+2430,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
    bufp->fullWData(oldp+2434,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
    bufp->fullWData(oldp+2438,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
    bufp->fullWData(oldp+2442,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
    bufp->fullWData(oldp+2446,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
    bufp->fullWData(oldp+2450,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
    bufp->fullWData(oldp+2454,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
    bufp->fullWData(oldp+2458,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
    bufp->fullWData(oldp+2462,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
    bufp->fullWData(oldp+2466,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
    bufp->fullWData(oldp+2470,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
    bufp->fullWData(oldp+2474,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
    bufp->fullWData(oldp+2478,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
    bufp->fullWData(oldp+2482,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
    bufp->fullWData(oldp+2486,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
    bufp->fullWData(oldp+2490,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
    bufp->fullWData(oldp+2494,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
    bufp->fullWData(oldp+2498,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
    bufp->fullWData(oldp+2502,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
    bufp->fullWData(oldp+2506,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
    bufp->fullWData(oldp+2510,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
    bufp->fullWData(oldp+2514,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
    bufp->fullWData(oldp+2518,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
    bufp->fullWData(oldp+2522,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
    bufp->fullWData(oldp+2526,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
    bufp->fullWData(oldp+2530,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
    bufp->fullWData(oldp+2534,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
    bufp->fullWData(oldp+2538,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
    bufp->fullWData(oldp+2542,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
    bufp->fullWData(oldp+2546,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
    bufp->fullWData(oldp+2550,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
    bufp->fullWData(oldp+2554,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
    bufp->fullWData(oldp+2558,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
    bufp->fullWData(oldp+2562,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
    bufp->fullWData(oldp+2566,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
    bufp->fullWData(oldp+2570,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
    bufp->fullWData(oldp+2574,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
    bufp->fullWData(oldp+2578,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
    bufp->fullWData(oldp+2582,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
    bufp->fullWData(oldp+2586,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
    bufp->fullWData(oldp+2590,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
    bufp->fullWData(oldp+2594,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
    bufp->fullWData(oldp+2598,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
    bufp->fullWData(oldp+2602,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
    bufp->fullWData(oldp+2606,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
    bufp->fullWData(oldp+2610,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
    bufp->fullWData(oldp+2614,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
    bufp->fullWData(oldp+2618,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
    bufp->fullWData(oldp+2622,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
    bufp->fullWData(oldp+2626,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
    bufp->fullWData(oldp+2630,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
    bufp->fullWData(oldp+2634,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
    bufp->fullWData(oldp+2638,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
    bufp->fullWData(oldp+2642,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
    bufp->fullWData(oldp+2646,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
    bufp->fullWData(oldp+2650,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
    bufp->fullWData(oldp+2654,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
    bufp->fullWData(oldp+2658,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
    bufp->fullWData(oldp+2662,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
    bufp->fullWData(oldp+2666,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
    bufp->fullWData(oldp+2670,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
    bufp->fullWData(oldp+2674,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
    bufp->fullWData(oldp+2678,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
    bufp->fullWData(oldp+2682,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
    bufp->fullWData(oldp+2686,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
    bufp->fullWData(oldp+2690,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
    bufp->fullWData(oldp+2694,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
    bufp->fullWData(oldp+2698,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
    bufp->fullWData(oldp+2702,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
    bufp->fullWData(oldp+2706,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
    bufp->fullWData(oldp+2710,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
    bufp->fullWData(oldp+2714,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
    bufp->fullWData(oldp+2718,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
    bufp->fullWData(oldp+2722,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
    bufp->fullWData(oldp+2726,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
    bufp->fullWData(oldp+2730,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
    bufp->fullWData(oldp+2734,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
    bufp->fullWData(oldp+2738,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
    bufp->fullWData(oldp+2742,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
    bufp->fullWData(oldp+2746,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
    bufp->fullWData(oldp+2750,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
    bufp->fullWData(oldp+2754,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
    bufp->fullWData(oldp+2758,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
    bufp->fullWData(oldp+2762,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
    bufp->fullWData(oldp+2766,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
    bufp->fullWData(oldp+2770,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
    bufp->fullWData(oldp+2774,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
    bufp->fullWData(oldp+2778,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
    bufp->fullWData(oldp+2782,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
    bufp->fullWData(oldp+2786,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
    bufp->fullWData(oldp+2790,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
    bufp->fullWData(oldp+2794,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
    bufp->fullWData(oldp+2798,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
    bufp->fullWData(oldp+2802,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
    bufp->fullWData(oldp+2806,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
    bufp->fullWData(oldp+2810,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
    bufp->fullWData(oldp+2814,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
    bufp->fullWData(oldp+2818,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
    bufp->fullWData(oldp+2822,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
    bufp->fullWData(oldp+2826,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
    bufp->fullWData(oldp+2830,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
    bufp->fullWData(oldp+2834,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
    bufp->fullWData(oldp+2838,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
    bufp->fullWData(oldp+2842,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
    bufp->fullWData(oldp+2846,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
    bufp->fullWData(oldp+2850,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
    bufp->fullWData(oldp+2854,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
    bufp->fullWData(oldp+2858,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
    bufp->fullWData(oldp+2862,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
    bufp->fullWData(oldp+2866,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
    bufp->fullWData(oldp+2870,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
    bufp->fullWData(oldp+2874,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
    bufp->fullWData(oldp+2878,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
    bufp->fullWData(oldp+2882,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
    bufp->fullWData(oldp+2886,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
    bufp->fullWData(oldp+2890,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
    bufp->fullWData(oldp+2894,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
    bufp->fullWData(oldp+2898,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
    bufp->fullWData(oldp+2902,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
    bufp->fullWData(oldp+2906,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
    bufp->fullWData(oldp+2910,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
    bufp->fullWData(oldp+2914,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
    bufp->fullWData(oldp+2918,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
    bufp->fullWData(oldp+2922,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
    bufp->fullWData(oldp+2926,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
    bufp->fullWData(oldp+2930,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
    bufp->fullWData(oldp+2934,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
    bufp->fullWData(oldp+2938,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
    bufp->fullWData(oldp+2942,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
    bufp->fullWData(oldp+2946,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
    bufp->fullWData(oldp+2950,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
    bufp->fullWData(oldp+2954,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
    bufp->fullWData(oldp+2958,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
    bufp->fullWData(oldp+2962,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
    bufp->fullWData(oldp+2966,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
    bufp->fullWData(oldp+2970,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
    bufp->fullWData(oldp+2974,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
    bufp->fullWData(oldp+2978,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
    bufp->fullWData(oldp+2982,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
    bufp->fullWData(oldp+2986,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
    bufp->fullWData(oldp+2990,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
    bufp->fullWData(oldp+2994,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
    bufp->fullWData(oldp+2998,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
    bufp->fullWData(oldp+3002,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
    bufp->fullWData(oldp+3006,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
    bufp->fullWData(oldp+3010,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
    bufp->fullWData(oldp+3014,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
    bufp->fullWData(oldp+3018,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
    bufp->fullWData(oldp+3022,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
    bufp->fullWData(oldp+3026,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
    bufp->fullWData(oldp+3030,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
    bufp->fullWData(oldp+3034,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
    bufp->fullWData(oldp+3038,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
    bufp->fullWData(oldp+3042,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
    bufp->fullWData(oldp+3046,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
    bufp->fullWData(oldp+3050,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
    bufp->fullWData(oldp+3054,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
    bufp->fullWData(oldp+3058,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
    bufp->fullWData(oldp+3062,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
    bufp->fullWData(oldp+3066,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
    bufp->fullWData(oldp+3070,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
    bufp->fullWData(oldp+3074,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
    bufp->fullWData(oldp+3078,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
    bufp->fullWData(oldp+3082,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
    bufp->fullWData(oldp+3086,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
    bufp->fullWData(oldp+3090,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
    bufp->fullWData(oldp+3094,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
    bufp->fullWData(oldp+3098,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
    bufp->fullWData(oldp+3102,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
    bufp->fullWData(oldp+3106,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
    bufp->fullWData(oldp+3110,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
    bufp->fullWData(oldp+3114,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
    bufp->fullWData(oldp+3118,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
    bufp->fullWData(oldp+3122,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
    bufp->fullWData(oldp+3126,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
    bufp->fullWData(oldp+3130,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
    bufp->fullWData(oldp+3134,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
    bufp->fullWData(oldp+3138,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
    bufp->fullWData(oldp+3142,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
    bufp->fullWData(oldp+3146,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
    bufp->fullWData(oldp+3150,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
    bufp->fullWData(oldp+3154,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
    bufp->fullWData(oldp+3158,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
    bufp->fullWData(oldp+3162,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
    bufp->fullWData(oldp+3166,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
    bufp->fullWData(oldp+3170,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
    bufp->fullWData(oldp+3174,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
    bufp->fullWData(oldp+3178,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
    bufp->fullWData(oldp+3182,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
    bufp->fullWData(oldp+3186,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
    bufp->fullWData(oldp+3190,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
    bufp->fullWData(oldp+3194,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
    bufp->fullWData(oldp+3198,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
    bufp->fullWData(oldp+3202,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
    bufp->fullBit(oldp+3206,(vlSelf->clock));
    bufp->fullBit(oldp+3207,(vlSelf->reset));
    bufp->fullQData(oldp+3208,(vlSelf->io_difftest_reg_0),64);
    bufp->fullQData(oldp+3210,(vlSelf->io_difftest_reg_1),64);
    bufp->fullQData(oldp+3212,(vlSelf->io_difftest_reg_2),64);
    bufp->fullQData(oldp+3214,(vlSelf->io_difftest_reg_3),64);
    bufp->fullQData(oldp+3216,(vlSelf->io_difftest_reg_4),64);
    bufp->fullQData(oldp+3218,(vlSelf->io_difftest_reg_5),64);
    bufp->fullQData(oldp+3220,(vlSelf->io_difftest_reg_6),64);
    bufp->fullQData(oldp+3222,(vlSelf->io_difftest_reg_7),64);
    bufp->fullQData(oldp+3224,(vlSelf->io_difftest_reg_8),64);
    bufp->fullQData(oldp+3226,(vlSelf->io_difftest_reg_9),64);
    bufp->fullQData(oldp+3228,(vlSelf->io_difftest_reg_10),64);
    bufp->fullQData(oldp+3230,(vlSelf->io_difftest_reg_11),64);
    bufp->fullQData(oldp+3232,(vlSelf->io_difftest_reg_12),64);
    bufp->fullQData(oldp+3234,(vlSelf->io_difftest_reg_13),64);
    bufp->fullQData(oldp+3236,(vlSelf->io_difftest_reg_14),64);
    bufp->fullQData(oldp+3238,(vlSelf->io_difftest_reg_15),64);
    bufp->fullQData(oldp+3240,(vlSelf->io_difftest_reg_16),64);
    bufp->fullQData(oldp+3242,(vlSelf->io_difftest_reg_17),64);
    bufp->fullQData(oldp+3244,(vlSelf->io_difftest_reg_18),64);
    bufp->fullQData(oldp+3246,(vlSelf->io_difftest_reg_19),64);
    bufp->fullQData(oldp+3248,(vlSelf->io_difftest_reg_20),64);
    bufp->fullQData(oldp+3250,(vlSelf->io_difftest_reg_21),64);
    bufp->fullQData(oldp+3252,(vlSelf->io_difftest_reg_22),64);
    bufp->fullQData(oldp+3254,(vlSelf->io_difftest_reg_23),64);
    bufp->fullQData(oldp+3256,(vlSelf->io_difftest_reg_24),64);
    bufp->fullQData(oldp+3258,(vlSelf->io_difftest_reg_25),64);
    bufp->fullQData(oldp+3260,(vlSelf->io_difftest_reg_26),64);
    bufp->fullQData(oldp+3262,(vlSelf->io_difftest_reg_27),64);
    bufp->fullQData(oldp+3264,(vlSelf->io_difftest_reg_28),64);
    bufp->fullQData(oldp+3266,(vlSelf->io_difftest_reg_29),64);
    bufp->fullQData(oldp+3268,(vlSelf->io_difftest_reg_30),64);
    bufp->fullQData(oldp+3270,(vlSelf->io_difftest_reg_31),64);
    bufp->fullQData(oldp+3272,(vlSelf->io_difftest_pc),64);
    bufp->fullIData(oldp+3274,(vlSelf->io_difftest_inst),32);
    bufp->fullBit(oldp+3275,(vlSelf->io_difftest_commit));
    bufp->fullQData(oldp+3276,(vlSelf->io_inst_counter),64);
    bufp->fullBit(oldp+3278,(vlSelf->io_difftest_irq));
    bufp->fullQData(oldp+3279,(vlSelf->io_difftest_mstatus),64);
    bufp->fullQData(oldp+3281,(vlSelf->io_difftest_mcause),64);
    bufp->fullQData(oldp+3283,(vlSelf->io_difftest_mepc),64);
    bufp->fullQData(oldp+3285,(vlSelf->io_difftest_mtvec),64);
    bufp->fullBit(oldp+3287,(vlSelf->io_difftest_peripheral));
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+3288,(__Vtemp_hd56bd579__0),128);
    bufp->fullBit(oldp+3292,(1U));
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+3293,(__Vtemp_hd09821c2__0),128);
}
