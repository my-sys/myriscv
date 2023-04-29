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
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declQuad(c+3175,"io_difftest_reg_0", false,-1, 63,0);
    tracep->declQuad(c+3177,"io_difftest_reg_1", false,-1, 63,0);
    tracep->declQuad(c+3179,"io_difftest_reg_2", false,-1, 63,0);
    tracep->declQuad(c+3181,"io_difftest_reg_3", false,-1, 63,0);
    tracep->declQuad(c+3183,"io_difftest_reg_4", false,-1, 63,0);
    tracep->declQuad(c+3185,"io_difftest_reg_5", false,-1, 63,0);
    tracep->declQuad(c+3187,"io_difftest_reg_6", false,-1, 63,0);
    tracep->declQuad(c+3189,"io_difftest_reg_7", false,-1, 63,0);
    tracep->declQuad(c+3191,"io_difftest_reg_8", false,-1, 63,0);
    tracep->declQuad(c+3193,"io_difftest_reg_9", false,-1, 63,0);
    tracep->declQuad(c+3195,"io_difftest_reg_10", false,-1, 63,0);
    tracep->declQuad(c+3197,"io_difftest_reg_11", false,-1, 63,0);
    tracep->declQuad(c+3199,"io_difftest_reg_12", false,-1, 63,0);
    tracep->declQuad(c+3201,"io_difftest_reg_13", false,-1, 63,0);
    tracep->declQuad(c+3203,"io_difftest_reg_14", false,-1, 63,0);
    tracep->declQuad(c+3205,"io_difftest_reg_15", false,-1, 63,0);
    tracep->declQuad(c+3207,"io_difftest_reg_16", false,-1, 63,0);
    tracep->declQuad(c+3209,"io_difftest_reg_17", false,-1, 63,0);
    tracep->declQuad(c+3211,"io_difftest_reg_18", false,-1, 63,0);
    tracep->declQuad(c+3213,"io_difftest_reg_19", false,-1, 63,0);
    tracep->declQuad(c+3215,"io_difftest_reg_20", false,-1, 63,0);
    tracep->declQuad(c+3217,"io_difftest_reg_21", false,-1, 63,0);
    tracep->declQuad(c+3219,"io_difftest_reg_22", false,-1, 63,0);
    tracep->declQuad(c+3221,"io_difftest_reg_23", false,-1, 63,0);
    tracep->declQuad(c+3223,"io_difftest_reg_24", false,-1, 63,0);
    tracep->declQuad(c+3225,"io_difftest_reg_25", false,-1, 63,0);
    tracep->declQuad(c+3227,"io_difftest_reg_26", false,-1, 63,0);
    tracep->declQuad(c+3229,"io_difftest_reg_27", false,-1, 63,0);
    tracep->declQuad(c+3231,"io_difftest_reg_28", false,-1, 63,0);
    tracep->declQuad(c+3233,"io_difftest_reg_29", false,-1, 63,0);
    tracep->declQuad(c+3235,"io_difftest_reg_30", false,-1, 63,0);
    tracep->declQuad(c+3237,"io_difftest_reg_31", false,-1, 63,0);
    tracep->declQuad(c+3239,"io_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3241,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+3242,"io_difftest_commit", false,-1);
    tracep->declQuad(c+3243,"io_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3245,"io_difftest_irq", false,-1);
    tracep->declQuad(c+3246,"io_difftest_mstatus", false,-1, 63,0);
    tracep->declQuad(c+3248,"io_difftest_mcause", false,-1, 63,0);
    tracep->declQuad(c+3250,"io_difftest_mepc", false,-1, 63,0);
    tracep->declQuad(c+3252,"io_difftest_mtvec", false,-1, 63,0);
    tracep->declBit(c+3254,"io_difftest_peripheral", false,-1);
    tracep->pushNamePrefix("riscv_soc ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declQuad(c+3175,"io_difftest_reg_0", false,-1, 63,0);
    tracep->declQuad(c+3177,"io_difftest_reg_1", false,-1, 63,0);
    tracep->declQuad(c+3179,"io_difftest_reg_2", false,-1, 63,0);
    tracep->declQuad(c+3181,"io_difftest_reg_3", false,-1, 63,0);
    tracep->declQuad(c+3183,"io_difftest_reg_4", false,-1, 63,0);
    tracep->declQuad(c+3185,"io_difftest_reg_5", false,-1, 63,0);
    tracep->declQuad(c+3187,"io_difftest_reg_6", false,-1, 63,0);
    tracep->declQuad(c+3189,"io_difftest_reg_7", false,-1, 63,0);
    tracep->declQuad(c+3191,"io_difftest_reg_8", false,-1, 63,0);
    tracep->declQuad(c+3193,"io_difftest_reg_9", false,-1, 63,0);
    tracep->declQuad(c+3195,"io_difftest_reg_10", false,-1, 63,0);
    tracep->declQuad(c+3197,"io_difftest_reg_11", false,-1, 63,0);
    tracep->declQuad(c+3199,"io_difftest_reg_12", false,-1, 63,0);
    tracep->declQuad(c+3201,"io_difftest_reg_13", false,-1, 63,0);
    tracep->declQuad(c+3203,"io_difftest_reg_14", false,-1, 63,0);
    tracep->declQuad(c+3205,"io_difftest_reg_15", false,-1, 63,0);
    tracep->declQuad(c+3207,"io_difftest_reg_16", false,-1, 63,0);
    tracep->declQuad(c+3209,"io_difftest_reg_17", false,-1, 63,0);
    tracep->declQuad(c+3211,"io_difftest_reg_18", false,-1, 63,0);
    tracep->declQuad(c+3213,"io_difftest_reg_19", false,-1, 63,0);
    tracep->declQuad(c+3215,"io_difftest_reg_20", false,-1, 63,0);
    tracep->declQuad(c+3217,"io_difftest_reg_21", false,-1, 63,0);
    tracep->declQuad(c+3219,"io_difftest_reg_22", false,-1, 63,0);
    tracep->declQuad(c+3221,"io_difftest_reg_23", false,-1, 63,0);
    tracep->declQuad(c+3223,"io_difftest_reg_24", false,-1, 63,0);
    tracep->declQuad(c+3225,"io_difftest_reg_25", false,-1, 63,0);
    tracep->declQuad(c+3227,"io_difftest_reg_26", false,-1, 63,0);
    tracep->declQuad(c+3229,"io_difftest_reg_27", false,-1, 63,0);
    tracep->declQuad(c+3231,"io_difftest_reg_28", false,-1, 63,0);
    tracep->declQuad(c+3233,"io_difftest_reg_29", false,-1, 63,0);
    tracep->declQuad(c+3235,"io_difftest_reg_30", false,-1, 63,0);
    tracep->declQuad(c+3237,"io_difftest_reg_31", false,-1, 63,0);
    tracep->declQuad(c+3239,"io_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3241,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+3242,"io_difftest_commit", false,-1);
    tracep->declQuad(c+3243,"io_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3245,"io_difftest_irq", false,-1);
    tracep->declQuad(c+3246,"io_difftest_mstatus", false,-1, 63,0);
    tracep->declQuad(c+3248,"io_difftest_mcause", false,-1, 63,0);
    tracep->declQuad(c+3250,"io_difftest_mepc", false,-1, 63,0);
    tracep->declQuad(c+3252,"io_difftest_mtvec", false,-1, 63,0);
    tracep->declBit(c+3254,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+3173,"core_clock", false,-1);
    tracep->declBit(c+3174,"core_reset", false,-1);
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
    tracep->declBit(c+3245,"core_difftest_irq", false,-1);
    tracep->declBit(c+3254,"core_difftest_peripheral", false,-1);
    tracep->declBit(c+3242,"core_difftest_commit", false,-1);
    tracep->declQuad(c+3239,"core_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3241,"core_difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+3175,"core__WIRE_0", false,-1, 63,0);
    tracep->declQuad(c+3177,"core__WIRE_1", false,-1, 63,0);
    tracep->declQuad(c+3179,"core__WIRE_2", false,-1, 63,0);
    tracep->declQuad(c+3181,"core__WIRE_3", false,-1, 63,0);
    tracep->declQuad(c+3183,"core__WIRE_4", false,-1, 63,0);
    tracep->declQuad(c+3185,"core__WIRE_5", false,-1, 63,0);
    tracep->declQuad(c+3187,"core__WIRE_6", false,-1, 63,0);
    tracep->declQuad(c+3189,"core__WIRE_7", false,-1, 63,0);
    tracep->declQuad(c+3191,"core__WIRE_8", false,-1, 63,0);
    tracep->declQuad(c+3193,"core__WIRE_9", false,-1, 63,0);
    tracep->declQuad(c+3195,"core__WIRE_10", false,-1, 63,0);
    tracep->declQuad(c+3197,"core__WIRE_11", false,-1, 63,0);
    tracep->declQuad(c+3199,"core__WIRE_12", false,-1, 63,0);
    tracep->declQuad(c+3201,"core__WIRE_13", false,-1, 63,0);
    tracep->declQuad(c+3203,"core__WIRE_14", false,-1, 63,0);
    tracep->declQuad(c+3205,"core__WIRE_15", false,-1, 63,0);
    tracep->declQuad(c+3207,"core__WIRE_16", false,-1, 63,0);
    tracep->declQuad(c+3209,"core__WIRE_17", false,-1, 63,0);
    tracep->declQuad(c+3211,"core__WIRE_18", false,-1, 63,0);
    tracep->declQuad(c+3213,"core__WIRE_19", false,-1, 63,0);
    tracep->declQuad(c+3215,"core__WIRE_20", false,-1, 63,0);
    tracep->declQuad(c+3217,"core__WIRE_21", false,-1, 63,0);
    tracep->declQuad(c+3219,"core__WIRE_22", false,-1, 63,0);
    tracep->declQuad(c+3221,"core__WIRE_23", false,-1, 63,0);
    tracep->declQuad(c+3223,"core__WIRE_24", false,-1, 63,0);
    tracep->declQuad(c+3225,"core__WIRE_25", false,-1, 63,0);
    tracep->declQuad(c+3227,"core__WIRE_26", false,-1, 63,0);
    tracep->declQuad(c+3229,"core__WIRE_27", false,-1, 63,0);
    tracep->declQuad(c+3231,"core__WIRE_28", false,-1, 63,0);
    tracep->declQuad(c+3233,"core__WIRE_29", false,-1, 63,0);
    tracep->declQuad(c+3235,"core__WIRE_30", false,-1, 63,0);
    tracep->declQuad(c+3237,"core__WIRE_31", false,-1, 63,0);
    tracep->declQuad(c+3243,"core_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3173,"axi_ram_clock", false,-1);
    tracep->declBit(c+3174,"axi_ram_reset", false,-1);
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
    tracep->declBit(c+3173,"sram0_clock", false,-1);
    tracep->declBit(c+3174,"sram0_reset", false,-1);
    tracep->declBus(c+21,"sram0_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram0_io_wen", false,-1);
    tracep->declArray(c+3255,"sram0_io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"sram0_io_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"sram0_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3173,"sram1_clock", false,-1);
    tracep->declBit(c+3174,"sram1_reset", false,-1);
    tracep->declBus(c+21,"sram1_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram1_io_wen", false,-1);
    tracep->declArray(c+3255,"sram1_io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"sram1_io_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"sram1_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3173,"sram2_clock", false,-1);
    tracep->declBit(c+3174,"sram2_reset", false,-1);
    tracep->declBus(c+21,"sram2_io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"sram2_io_wen", false,-1);
    tracep->declArray(c+3255,"sram2_io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"sram2_io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"sram2_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3173,"sram3_clock", false,-1);
    tracep->declBit(c+3174,"sram3_reset", false,-1);
    tracep->declBus(c+21,"sram3_io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"sram3_io_wen", false,-1);
    tracep->declArray(c+3255,"sram3_io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"sram3_io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"sram3_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3173,"sram4_clock", false,-1);
    tracep->declBit(c+3174,"sram4_reset", false,-1);
    tracep->declBus(c+48,"sram4_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram4_io_wen", false,-1);
    tracep->declArray(c+50,"sram4_io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"sram4_io_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"sram4_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3173,"sram5_clock", false,-1);
    tracep->declBit(c+3174,"sram5_reset", false,-1);
    tracep->declBus(c+48,"sram5_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram5_io_wen", false,-1);
    tracep->declArray(c+3255,"sram5_io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"sram5_io_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"sram5_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3173,"sram6_clock", false,-1);
    tracep->declBit(c+3174,"sram6_reset", false,-1);
    tracep->declBus(c+48,"sram6_io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"sram6_io_wen", false,-1);
    tracep->declArray(c+50,"sram6_io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"sram6_io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"sram6_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3173,"sram7_clock", false,-1);
    tracep->declBit(c+3174,"sram7_reset", false,-1);
    tracep->declBus(c+48,"sram7_io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"sram7_io_wen", false,-1);
    tracep->declArray(c+3255,"sram7_io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"sram7_io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"sram7_io_rdata", false,-1, 127,0);
    tracep->declBus(c+3241,"DIFFTEST_INST", false,-1, 31,0);
    tracep->declQuad(c+79,"difftest_inst", false,-1, 63,0);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBit(c+3173,"mem_clock", false,-1);
    tracep->declQuad(c+81,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+13,"mem_rflag", false,-1);
    tracep->declQuad(c+83,"mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+85,"mem_wmask", false,-1, 63,0);
    tracep->declBit(c+87,"mem_wen", false,-1);
    tracep->declQuad(c+88,"reg_raddr", false,-1, 63,0);
    tracep->declBus(c+90,"reg_rlen", false,-1, 3,0);
    tracep->declBit(c+12,"reg_ar_ready", false,-1);
    tracep->declBit(c+17,"reg_r_valid", false,-1);
    tracep->declBit(c+91,"reg_r_state", false,-1);
    tracep->declQuad(c+83,"reg_w_addr", false,-1, 63,0);
    tracep->declBit(c+92,"reg_is_w", false,-1);
    tracep->declBit(c+1,"reg_aw_ready", false,-1);
    tracep->declBit(c+5,"reg_w_ready", false,-1);
    tracep->declBit(c+11,"reg_b_valid", false,-1);
    tracep->declBus(c+93,"mem_io_wmask_lo", false,-1, 31,0);
    tracep->declBus(c+94,"mem_io_wmask_hi", false,-1, 31,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declQuad(c+81,"raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"rdata", false,-1, 63,0);
    tracep->declBit(c+13,"rflag", false,-1);
    tracep->declQuad(c+83,"waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"wdata", false,-1, 63,0);
    tracep->declQuad(c+85,"wmask", false,-1, 63,0);
    tracep->declBit(c+87,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBit(c+3245,"difftest_irq", false,-1);
    tracep->declBit(c+3254,"difftest_peripheral", false,-1);
    tracep->declBit(c+3242,"difftest_commit", false,-1);
    tracep->declQuad(c+3239,"difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3241,"difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+3243,"inst_counter", false,-1, 63,0);
    tracep->declBit(c+3173,"i_cache_clock", false,-1);
    tracep->declBit(c+3174,"i_cache_reset", false,-1);
    tracep->declBit(c+95,"i_cache_io_flush", false,-1);
    tracep->declBit(c+96,"i_cache_io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+97,"i_cache_io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+98,"i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"i_cache_io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+101,"i_cache_io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+102,"i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+106,"i_cache_io_is_fence_i", false,-1);
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
    tracep->declBit(c+107,"i_cache_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"i_cache_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"i_cache_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+3173,"d_cache_clock", false,-1);
    tracep->declBit(c+3174,"d_cache_reset", false,-1);
    tracep->declBit(c+112,"d_cache_io_cpu_valid", false,-1);
    tracep->declQuad(c+113,"d_cache_io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"d_cache_io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"d_cache_io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"d_cache_io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+121,"d_cache_io_cpu_ready", false,-1);
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
    tracep->declBit(c+3173,"cross_bar_clock", false,-1);
    tracep->declBit(c+3174,"cross_bar_reset", false,-1);
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
    tracep->declBit(c+3259,"cross_bar_io_AXI_Bus_b_ready", false,-1);
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
    tracep->declBit(c+3173,"fetch_clock", false,-1);
    tracep->declBit(c+3174,"fetch_reset", false,-1);
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
    tracep->declBit(c+3173,"execute_clock", false,-1);
    tracep->declBit(c+3174,"execute_reset", false,-1);
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
    tracep->declBit(c+3173,"decode_clock", false,-1);
    tracep->declBit(c+3174,"decode_reset", false,-1);
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
    tracep->declBit(c+3173,"commit_clock", false,-1);
    tracep->declBit(c+3174,"commit_reset", false,-1);
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
    tracep->declBit(c+3245,"commit_difftest_irq_0", false,-1);
    tracep->declBit(c+3254,"commit_difftest_peripheral_0", false,-1);
    tracep->declBit(c+3242,"commit_difftest_commit_0", false,-1);
    tracep->declQuad(c+3239,"commit_difftest_pc_0", false,-1, 63,0);
    tracep->declBus(c+3241,"commit_difftest_inst_0", false,-1, 31,0);
    tracep->declQuad(c+3175,"commit__WIRE_0_0", false,-1, 63,0);
    tracep->declQuad(c+3177,"commit__WIRE_0_1", false,-1, 63,0);
    tracep->declQuad(c+3179,"commit__WIRE_0_2", false,-1, 63,0);
    tracep->declQuad(c+3181,"commit__WIRE_0_3", false,-1, 63,0);
    tracep->declQuad(c+3183,"commit__WIRE_0_4", false,-1, 63,0);
    tracep->declQuad(c+3185,"commit__WIRE_0_5", false,-1, 63,0);
    tracep->declQuad(c+3187,"commit__WIRE_0_6", false,-1, 63,0);
    tracep->declQuad(c+3189,"commit__WIRE_0_7", false,-1, 63,0);
    tracep->declQuad(c+3191,"commit__WIRE_0_8", false,-1, 63,0);
    tracep->declQuad(c+3193,"commit__WIRE_0_9", false,-1, 63,0);
    tracep->declQuad(c+3195,"commit__WIRE_0_10", false,-1, 63,0);
    tracep->declQuad(c+3197,"commit__WIRE_0_11", false,-1, 63,0);
    tracep->declQuad(c+3199,"commit__WIRE_0_12", false,-1, 63,0);
    tracep->declQuad(c+3201,"commit__WIRE_0_13", false,-1, 63,0);
    tracep->declQuad(c+3203,"commit__WIRE_0_14", false,-1, 63,0);
    tracep->declQuad(c+3205,"commit__WIRE_0_15", false,-1, 63,0);
    tracep->declQuad(c+3207,"commit__WIRE_0_16", false,-1, 63,0);
    tracep->declQuad(c+3209,"commit__WIRE_0_17", false,-1, 63,0);
    tracep->declQuad(c+3211,"commit__WIRE_0_18", false,-1, 63,0);
    tracep->declQuad(c+3213,"commit__WIRE_0_19", false,-1, 63,0);
    tracep->declQuad(c+3215,"commit__WIRE_0_20", false,-1, 63,0);
    tracep->declQuad(c+3217,"commit__WIRE_0_21", false,-1, 63,0);
    tracep->declQuad(c+3219,"commit__WIRE_0_22", false,-1, 63,0);
    tracep->declQuad(c+3221,"commit__WIRE_0_23", false,-1, 63,0);
    tracep->declQuad(c+3223,"commit__WIRE_0_24", false,-1, 63,0);
    tracep->declQuad(c+3225,"commit__WIRE_0_25", false,-1, 63,0);
    tracep->declQuad(c+3227,"commit__WIRE_0_26", false,-1, 63,0);
    tracep->declQuad(c+3229,"commit__WIRE_0_27", false,-1, 63,0);
    tracep->declQuad(c+3231,"commit__WIRE_0_28", false,-1, 63,0);
    tracep->declQuad(c+3233,"commit__WIRE_0_29", false,-1, 63,0);
    tracep->declQuad(c+3235,"commit__WIRE_0_30", false,-1, 63,0);
    tracep->declQuad(c+3237,"commit__WIRE_0_31", false,-1, 63,0);
    tracep->declQuad(c+3243,"commit_inst_counter_0", false,-1, 63,0);
    tracep->declBit(c+3173,"clint_de_clock", false,-1);
    tracep->declBit(c+3174,"clint_de_reset", false,-1);
    tracep->declBit(c+151,"clint_de_io_valid", false,-1);
    tracep->declQuad(c+113,"clint_de_io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"clint_de_io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+152,"clint_de_io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+120,"clint_de_io_bits_is_w", false,-1);
    tracep->declBit(c+154,"clint_de_io_ready", false,-1);
    tracep->declBit(c+194,"clint_de_io_soft_irq", false,-1);
    tracep->declBit(c+193,"clint_de_io_time_irq", false,-1);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBit(c+3245,"difftest_irq_0", false,-1);
    tracep->declBit(c+3254,"difftest_peripheral_0", false,-1);
    tracep->declBit(c+3242,"difftest_commit_0", false,-1);
    tracep->declQuad(c+3239,"difftest_pc_0", false,-1, 63,0);
    tracep->declBus(c+3241,"difftest_inst_0", false,-1, 31,0);
    tracep->declQuad(c+3243,"inst_counter_0", false,-1, 63,0);
    tracep->declBit(c+3173,"csr_reg_clock", false,-1);
    tracep->declBit(c+3174,"csr_reg_reset", false,-1);
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
    tracep->declQuad(c+239,"reg_file_0", false,-1, 63,0);
    tracep->declQuad(c+241,"reg_file_1", false,-1, 63,0);
    tracep->declQuad(c+243,"reg_file_2", false,-1, 63,0);
    tracep->declQuad(c+245,"reg_file_3", false,-1, 63,0);
    tracep->declQuad(c+247,"reg_file_4", false,-1, 63,0);
    tracep->declQuad(c+249,"reg_file_5", false,-1, 63,0);
    tracep->declQuad(c+251,"reg_file_6", false,-1, 63,0);
    tracep->declQuad(c+253,"reg_file_7", false,-1, 63,0);
    tracep->declQuad(c+255,"reg_file_8", false,-1, 63,0);
    tracep->declQuad(c+257,"reg_file_9", false,-1, 63,0);
    tracep->declQuad(c+259,"reg_file_10", false,-1, 63,0);
    tracep->declQuad(c+261,"reg_file_11", false,-1, 63,0);
    tracep->declQuad(c+263,"reg_file_12", false,-1, 63,0);
    tracep->declQuad(c+265,"reg_file_13", false,-1, 63,0);
    tracep->declQuad(c+267,"reg_file_14", false,-1, 63,0);
    tracep->declQuad(c+269,"reg_file_15", false,-1, 63,0);
    tracep->declQuad(c+271,"reg_file_16", false,-1, 63,0);
    tracep->declQuad(c+273,"reg_file_17", false,-1, 63,0);
    tracep->declQuad(c+275,"reg_file_18", false,-1, 63,0);
    tracep->declQuad(c+277,"reg_file_19", false,-1, 63,0);
    tracep->declQuad(c+279,"reg_file_20", false,-1, 63,0);
    tracep->declQuad(c+281,"reg_file_21", false,-1, 63,0);
    tracep->declQuad(c+283,"reg_file_22", false,-1, 63,0);
    tracep->declQuad(c+285,"reg_file_23", false,-1, 63,0);
    tracep->declQuad(c+287,"reg_file_24", false,-1, 63,0);
    tracep->declQuad(c+289,"reg_file_25", false,-1, 63,0);
    tracep->declQuad(c+291,"reg_file_26", false,-1, 63,0);
    tracep->declQuad(c+293,"reg_file_27", false,-1, 63,0);
    tracep->declQuad(c+295,"reg_file_28", false,-1, 63,0);
    tracep->declQuad(c+297,"reg_file_29", false,-1, 63,0);
    tracep->declQuad(c+299,"reg_file_30", false,-1, 63,0);
    tracep->declQuad(c+301,"reg_file_31", false,-1, 63,0);
    tracep->declBit(c+303,"difftest_commit", false,-1);
    tracep->declBus(c+304,"difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+305,"difftest_pc", false,-1, 63,0);
    tracep->declQuad(c+307,"inst_counter", false,-1, 63,0);
    tracep->declBit(c+309,"difftest_irq", false,-1);
    tracep->declBit(c+310,"difftest_peripheral", false,-1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBit(c+311,"irq", false,-1);
    tracep->declQuad(c+312,"reg_mstatus", false,-1, 63,0);
    tracep->declQuad(c+314,"reg_mie", false,-1, 63,0);
    tracep->declQuad(c+316,"reg_mtvec", false,-1, 63,0);
    tracep->declQuad(c+318,"reg_mscratch", false,-1, 63,0);
    tracep->declQuad(c+320,"reg_mepc", false,-1, 63,0);
    tracep->declQuad(c+322,"reg_mcause", false,-1, 63,0);
    tracep->declQuad(c+324,"reg_mtval", false,-1, 63,0);
    tracep->declQuad(c+326,"reg_mcycle", false,-1, 63,0);
    tracep->declQuad(c+328,"reg_minstret", false,-1, 63,0);
    tracep->declQuad(c+330,"csr_rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cross_bar ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBit(c+3259,"io_AXI_Bus_b_ready", false,-1);
    tracep->declBit(c+11,"io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+12,"io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+13,"io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+14,"io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+16,"io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+17,"io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declBit(c+332,"w_locked", false,-1);
    tracep->declBus(c+333,"w_lockId", false,-1, 1,0);
    tracep->declBus(c+334,"w_chosen", false,-1, 1,0);
    tracep->declBus(c+335,"reg_r_cnt", false,-1, 1,0);
    tracep->declBit(c+336,"r_locked", false,-1);
    tracep->declBus(c+337,"r_lockId", false,-1, 1,0);
    tracep->declBus(c+338,"r_chosen", false,-1, 1,0);
    tracep->declBit(c+339,"reg_aw_ok", false,-1);
    tracep->declBit(c+340,"reg_ar_ok", false,-1);
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
    tracep->declBit(c+341,"fetch_low_address", false,-1);
    tracep->declBit(c+342,"low_address", false,-1);
    tracep->declBit(c+343,"not_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+112,"io_cpu_valid", false,-1);
    tracep->declQuad(c+113,"io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+115,"io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_cpu_bits_is_w", false,-1);
    tracep->declBit(c+121,"io_cpu_ready", false,-1);
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
    tracep->declQuad(c+344,"Tag", false,-1, 53,0);
    tracep->declBus(c+346,"Index", false,-1, 5,0);
    tracep->declBus(c+347,"Offset", false,-1, 3,0);
    tracep->declBus(c+348,"reg_cache_state", false,-1, 1,0);
    tracep->declQuad(c+349,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+351,"reg_wstrb", false,-1, 7,0);
    tracep->declBit(c+352,"reg_is_w", false,-1);
    tracep->declQuad(c+353,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+355,"reg_index", false,-1, 5,0);
    tracep->declBus(c+356,"reg_offset", false,-1, 3,0);
    tracep->declBit(c+121,"reg_ready", false,-1);
    tracep->declQuad(c+115,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+357,"reg_cache_write", false,-1);
    tracep->declBus(c+358,"reg_cache_wstrb", false,-1, 15,0);
    tracep->declArray(c+54,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+359,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+360,"cache_mask_lo", false,-1, 63,0);
    tracep->declArray(c+362,"cache_mask", false,-1, 127,0);
    tracep->declArray(c+366,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+370,"is_sram0_write", false,-1);
    tracep->declQuad(c+371,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+373,"reg_sram0_dirty", false,-1, 63,0);
    tracep->declQuad(c+375,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+377,"neg_chose_bit", false,-1, 63,0);
    tracep->declBit(c+379,"is_sram2_write", false,-1);
    tracep->declQuad(c+380,"reg_sram2_valid", false,-1, 63,0);
    tracep->declQuad(c+382,"reg_sram2_dirty", false,-1, 63,0);
    tracep->declQuad(c+132,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+131,"reg_r_valid", false,-1);
    tracep->declQuad(c+124,"reg_w_waddr", false,-1, 63,0);
    tracep->declQuad(c+126,"reg_w_wdata", false,-1, 63,0);
    tracep->declBit(c+128,"reg_w_wlast", false,-1);
    tracep->declBit(c+123,"reg_w_valid", false,-1);
    tracep->declBit(c+129,"reg_b_ready", false,-1);
    tracep->declQuad(c+384,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+386,"tag_2", false,-1, 53,0);
    tracep->declBit(c+388,"hit_0", false,-1);
    tracep->declBit(c+389,"hit_2", false,-1);
    tracep->declBit(c+390,"tag_valid_0", false,-1);
    tracep->declBit(c+391,"tag_valid_2", false,-1);
    tracep->declBit(c+392,"tag_dirty_0", false,-1);
    tracep->declBit(c+393,"tag_dirty_2", false,-1);
    tracep->declQuad(c+394,"rdata0", false,-1, 63,0);
    tracep->declQuad(c+396,"rdata2", false,-1, 63,0);
    tracep->declQuad(c+398,"reg_lru_2", false,-1, 63,0);
    tracep->declBit(c+400,"LRU_2", false,-1);
    tracep->declBit(c+401,"reg_start_operation", false,-1);
    tracep->declBus(c+402,"reg_cnt", false,-1, 1,0);
    tracep->declBit(c+403,"reg_rbus_finish", false,-1);
    tracep->declBit(c+404,"reg_wbus_finish", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBus(c+405,"dest_addr", false,-1, 4,0);
    tracep->declBus(c+406,"instType", false,-1, 3,0);
    tracep->declBus(c+407,"dest_is_reg", false,-1, 1,0);
    tracep->declBus(c+408,"rs1_is_reg", false,-1, 1,0);
    tracep->declBus(c+409,"rs2_is_reg", false,-1, 1,0);
    tracep->declBit(c+410,"temp_rs1_is_reg", false,-1);
    tracep->declBit(c+411,"temp_rs2_is_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBit(c+412,"alu_exu_io_valid", false,-1);
    tracep->declBit(c+189,"alu_exu_io_is_pre", false,-1);
    tracep->declBit(c+413,"alu_exu_io_br_info_valid", false,-1);
    tracep->declBit(c+414,"alu_exu_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+415,"alu_exu_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+417,"alu_exu_io_br_info_taken", false,-1);
    tracep->declQuad(c+418,"alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"alu_exu_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+175,"alu_exu_io_opType", false,-1, 2,0);
    tracep->declBus(c+176,"alu_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+420,"alu_exu_io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+422,"alu_exu_io_op_data2", false,-1, 63,0);
    tracep->declBus(c+183,"alu_exu_io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"alu_exu_io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+424,"alu_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+414,"alu_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+418,"alu_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+3173,"mem_exu_clock", false,-1);
    tracep->declBit(c+3174,"mem_exu_reset", false,-1);
    tracep->declBit(c+426,"mem_exu_io_valid", false,-1);
    tracep->declBus(c+176,"mem_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+420,"mem_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+422,"mem_exu_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"mem_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+427,"mem_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+429,"mem_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+430,"mem_exu_io_ready", false,-1);
    tracep->declBit(c+147,"mem_exu_io_bus_valid", false,-1);
    tracep->declQuad(c+113,"mem_exu_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"mem_exu_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"mem_exu_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"mem_exu_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+150,"mem_exu_io_bus_ready", false,-1);
    tracep->declBit(c+221,"mem_exu_io_difftest_peripheral", false,-1);
    tracep->declBit(c+3173,"mu_exu_clock", false,-1);
    tracep->declBit(c+3174,"mu_exu_reset", false,-1);
    tracep->declBit(c+431,"mu_exu_io_valid", false,-1);
    tracep->declBus(c+176,"mu_exu_io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+420,"mu_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+422,"mu_exu_io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+432,"mu_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+434,"mu_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+435,"mu_exu_io_ready", false,-1);
    tracep->declBit(c+436,"system_exu_io_valid", false,-1);
    tracep->declBus(c+176,"system_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+437,"system_exu_io_csr_data", false,-1, 63,0);
    tracep->declBus(c+190,"system_exu_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+183,"system_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+420,"system_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+199,"system_exu_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"system_exu_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+437,"system_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+439,"system_exu_io_csr_is_w", false,-1);
    tracep->declQuad(c+440,"system_exu_io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+442,"system_exu_io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+443,"system_exu_io_is_except", false,-1);
    tracep->declBus(c+444,"system_exu_io_exception", false,-1, 5,0);
    tracep->declBit(c+445,"system_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+199,"system_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+446,"in_data_valid", false,-1);
    tracep->declBit(c+168,"ready", false,-1);
    tracep->declBus(c+447,"reg_valid", false,-1, 3,0);
    tracep->declBit(c+448,"reg_alu_valid", false,-1);
    tracep->declBit(c+449,"reg_mem_valid", false,-1);
    tracep->declBit(c+450,"reg_mu_valid", false,-1);
    tracep->declBit(c+451,"reg_system_valid", false,-1);
    tracep->declBus(c+452,"valid", false,-1, 3,0);
    tracep->declBit(c+453,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+454,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+155,"reg_br_valid", false,-1);
    tracep->declBit(c+156,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+157,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"reg_taken", false,-1);
    tracep->declQuad(c+160,"reg_br_next_pc", false,-1, 63,0);
    tracep->declQuad(c+209,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+208,"reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+456,"reg_csr_is_w", false,-1);
    tracep->declBit(c+457,"reg_is_except", false,-1);
    tracep->declBus(c+214,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+458,"reg_is_time_irq", false,-1);
    tracep->declBit(c+459,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+215,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"reg_except_pc", false,-1, 63,0);
    tracep->declBit(c+460,"time_irq", false,-1);
    tracep->declBit(c+461,"soft_irq", false,-1);
    tracep->declBit(c+462,"irq", false,-1);
    tracep->declQuad(c+165,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+463,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+464,"reg_fence_i", false,-1);
    tracep->declBit(c+465,"reg_commit", false,-1);
    tracep->declBus(c+220,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+412,"io_valid", false,-1);
    tracep->declBit(c+189,"io_is_pre", false,-1);
    tracep->declBit(c+413,"io_br_info_valid", false,-1);
    tracep->declBit(c+414,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+415,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+417,"io_br_info_taken", false,-1);
    tracep->declQuad(c+418,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+175,"io_opType", false,-1, 2,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+420,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+422,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+183,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+424,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+414,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+418,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+466,"is_32", false,-1);
    tracep->declQuad(c+467,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+469,"op_data2", false,-1, 63,0);
    tracep->declQuad(c+471,"op_imm", false,-1, 63,0);
    tracep->declBit(c+473,"rs2_is_imm", false,-1);
    tracep->declQuad(c+474,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+476,"rs1_is_pc", false,-1);
    tracep->declBit(c+477,"is_sra", false,-1);
    tracep->declQuad(c+478,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+480,"temp_rs2_data", false,-1, 63,0);
    tracep->declArray(c+482,"add_sub_result", false,-1, 64,0);
    tracep->declBit(c+485,"u_rs1_l_rs2", false,-1);
    tracep->declBit(c+486,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+487,"shift_rs2_data", false,-1, 5,0);
    tracep->declArray(c+488,"sll_temp", false,-1, 126,0);
    tracep->declQuad(c+492,"srl_temp", false,-1, 63,0);
    tracep->declQuad(c+494,"sra_temp", false,-1, 63,0);
    tracep->declQuad(c+496,"sr_temp", false,-1, 63,0);
    tracep->declBus(c+498,"func", false,-1, 2,0);
    tracep->declQuad(c+499,"result_data", false,-1, 63,0);
    tracep->declBit(c+162,"is_pre", false,-1);
    tracep->declBit(c+501,"is_br", false,-1);
    tracep->declBit(c+502,"is_eq", false,-1);
    tracep->declQuad(c+503,"temp_1", false,-1, 63,0);
    tracep->declArray(c+505,"add_pc", false,-1, 64,0);
    tracep->declQuad(c+508,"op_pc_4", false,-1, 63,0);
    tracep->declArray(c+510,"temp_result_pc", false,-1, 64,0);
    tracep->declQuad(c+513,"dst_data", false,-1, 63,0);
    tracep->declQuad(c+515,"next_pc", false,-1, 63,0);
    tracep->declBit(c+517,"valid_next_pc", false,-1);
    tracep->declBit(c+413,"br_valid", false,-1);
    tracep->declBit(c+518,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+426,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+420,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+422,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+427,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+429,"io_dest_is_w", false,-1);
    tracep->declBit(c+430,"io_ready", false,-1);
    tracep->declBit(c+147,"io_bus_valid", false,-1);
    tracep->declQuad(c+113,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+150,"io_bus_ready", false,-1);
    tracep->declBit(c+221,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+471,"imm", false,-1, 63,0);
    tracep->declBit(c+430,"reg_ready", false,-1);
    tracep->declQuad(c+519,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+521,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+523,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+524,"reg_bus_is_w", false,-1);
    tracep->declBit(c+525,"reg_bus_valid", false,-1);
    tracep->declQuad(c+427,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+429,"reg_w_rs_en", false,-1);
    tracep->declBus(c+526,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+221,"reg_difftest_peripheral", false,-1);
    tracep->declQuad(c+527,"mem_r_data", false,-1, 63,0);
    tracep->declQuad(c+529,"mem_data_result", false,-1, 63,0);
    tracep->declQuad(c+531,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+533,"w_mem_en", false,-1);
    tracep->declQuad(c+534,"mem_wstrb", false,-1, 63,0);
    tracep->declBit(c+536,"reg_ls_state", false,-1);
    tracep->declArray(c+537,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+541,"chose_chancel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+431,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+420,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+422,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+432,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+434,"io_dest_is_w", false,-1);
    tracep->declBit(c+435,"io_ready", false,-1);
    tracep->declBit(c+3173,"div_clock", false,-1);
    tracep->declBit(c+3174,"div_reset", false,-1);
    tracep->declBit(c+542,"div_io_valid", false,-1);
    tracep->declQuad(c+420,"div_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+422,"div_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"div_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+543,"div_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+545,"div_io_dest_is_w", false,-1);
    tracep->declBit(c+546,"div_io_ready", false,-1);
    tracep->declBit(c+3173,"mul_clock", false,-1);
    tracep->declBit(c+3174,"mul_reset", false,-1);
    tracep->declBit(c+547,"mul_io_valid", false,-1);
    tracep->declQuad(c+420,"mul_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+422,"mul_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"mul_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+548,"mul_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+550,"mul_io_dest_is_w", false,-1);
    tracep->declBit(c+551,"mul_io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+542,"io_valid", false,-1);
    tracep->declQuad(c+420,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+422,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+543,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+545,"io_dest_is_w", false,-1);
    tracep->declBit(c+546,"io_ready", false,-1);
    tracep->declBit(c+466,"is_32", false,-1);
    tracep->declBit(c+552,"is_signed", false,-1);
    tracep->declArray(c+553,"dividend", false,-1, 64,0);
    tracep->declArray(c+556,"divisor", false,-1, 64,0);
    tracep->declArray(c+559,"rem", false,-1, 64,0);
    tracep->declArray(c+562,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+565,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+568,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+571,"reg_q", false,-1, 65,0);
    tracep->declArray(c+574,"neg_divisor", false,-1, 64,0);
    tracep->declBus(c+577,"reg_state", false,-1, 1,0);
    tracep->declBus(c+578,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+579,"reg_exuType", false,-1, 6,0);
    tracep->declArray(c+580,"temp_result", false,-1, 131,0);
    tracep->declBit(c+585,"rem_is_0", false,-1);
    tracep->declBit(c+586,"rem_is_neg_div", false,-1);
    tracep->declBit(c+587,"rem_is_div", false,-1);
    tracep->declBit(c+588,"is_need_correct", false,-1);
    tracep->declBit(c+545,"reg_dest_is_w", false,-1);
    tracep->declBit(c+546,"reg_ready", false,-1);
    tracep->declBit(c+589,"reg_is_32", false,-1);
    tracep->declBit(c+590,"reg_is_rem", false,-1);
    tracep->declQuad(c+591,"rem_adjust", false,-1, 63,0);
    tracep->declQuad(c+593,"q_adjust", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+547,"io_valid", false,-1);
    tracep->declQuad(c+420,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+422,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+548,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+550,"io_dest_is_w", false,-1);
    tracep->declBit(c+551,"io_ready", false,-1);
    tracep->declBit(c+595,"is_32", false,-1);
    tracep->declBit(c+596,"is_rs1_signed", false,-1);
    tracep->declBit(c+466,"is_rs2_signed", false,-1);
    tracep->declArray(c+597,"mul_data1", false,-1, 129,0);
    tracep->declArray(c+602,"mul_data2", false,-1, 64,0);
    tracep->declArray(c+605,"temp_mul2", false,-1, 66,0);
    tracep->declBit(c+551,"reg_ready", false,-1);
    tracep->declBus(c+608,"reg_state", false,-1, 1,0);
    tracep->declArray(c+609,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+612,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+617,"reg_result", false,-1, 129,0);
    tracep->declBus(c+622,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+550,"reg_dest_is_w", false,-1);
    tracep->declArray(c+623,"pp", false,-1, 130,0);
    tracep->declBus(c+628,"reg_cnt", false,-1, 6,0);
    tracep->declBit(c+629,"reg_not_h", false,-1);
    tracep->declBit(c+630,"reg_is_32", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+436,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+437,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+190,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+183,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+420,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+199,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+437,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+439,"io_csr_is_w", false,-1);
    tracep->declQuad(c+440,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+442,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+443,"io_is_except", false,-1);
    tracep->declBus(c+444,"io_exception", false,-1, 5,0);
    tracep->declBit(c+445,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+199,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+471,"imm", false,-1, 63,0);
    tracep->declBit(c+631,"is_imm", false,-1);
    tracep->declQuad(c+632,"op_data", false,-1, 63,0);
    tracep->declQuad(c+634,"or_result", false,-1, 63,0);
    tracep->declQuad(c+636,"and_result", false,-1, 63,0);
    tracep->declQuad(c+638,"temp_csr_result_data", false,-1, 63,0);
    tracep->declBit(c+640,"is_mret", false,-1);
    tracep->declBit(c+641,"is_sret", false,-1);
    tracep->declBit(c+642,"is_ecall", false,-1);
    tracep->declBit(c+643,"is_ebreak", false,-1);
    tracep->declBit(c+644,"is_except", false,-1);
    tracep->declBus(c+645,"exception", false,-1, 3,0);
    tracep->declBit(c+646,"is_ret", false,-1);
    tracep->declQuad(c+647,"result_status", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
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
    tracep->declBit(c+3173,"ibuf_clock", false,-1);
    tracep->declBit(c+3174,"ibuf_reset", false,-1);
    tracep->declBit(c+167,"ibuf_io_flush", false,-1);
    tracep->declBit(c+100,"ibuf_io_cache_buf_ready", false,-1);
    tracep->declBit(c+649,"ibuf_io_cache_buf_valid", false,-1);
    tracep->declQuad(c+145,"ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+650,"ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+651,"ibuf_io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+168,"ibuf_io_put_pc_ready", false,-1);
    tracep->declBit(c+169,"ibuf_io_put_pc_valid", false,-1);
    tracep->declBus(c+170,"ibuf_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"ibuf_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"ibuf_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+3173,"br_predictor_clock", false,-1);
    tracep->declBit(c+3174,"br_predictor_reset", false,-1);
    tracep->declBit(c+155,"br_predictor_io_br_info_valid", false,-1);
    tracep->declBit(c+156,"br_predictor_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"br_predictor_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"br_predictor_io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+98,"br_predictor_io_pc", false,-1, 63,0);
    tracep->declQuad(c+652,"br_predictor_io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+654,"br_predictor_io_pre_valid", false,-1);
    tracep->declQuad(c+98,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+655,"reg_flush", false,-1);
    tracep->declQuad(c+656,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+141,"reg_bus_valid", false,-1);
    tracep->declBus(c+658,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+659,"pre_info_tail", false,-1, 1,0);
    tracep->declQuad(c+660,"pre_info_fifo_0", false,-1, 63,0);
    tracep->declQuad(c+662,"pre_info_fifo_1", false,-1, 63,0);
    tracep->declQuad(c+664,"pre_info_fifo_2", false,-1, 63,0);
    tracep->declQuad(c+666,"pre_info_fifo_3", false,-1, 63,0);
    tracep->declBit(c+668,"pre_enq", false,-1);
    tracep->declBus(c+669,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+670,"is_pre_tail", false,-1, 1,0);
    tracep->declBit(c+671,"is_pre_fifo_0", false,-1);
    tracep->declBit(c+672,"is_pre_fifo_1", false,-1);
    tracep->declBit(c+673,"is_pre_fifo_2", false,-1);
    tracep->declBit(c+674,"is_pre_fifo_3", false,-1);
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+155,"io_br_info_valid", false,-1);
    tracep->declBit(c+156,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+98,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+652,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+654,"io_pre_valid", false,-1);
    tracep->declArray(c+675,"BTB_0", false,-1, 127,0);
    tracep->declArray(c+679,"BTB_1", false,-1, 127,0);
    tracep->declArray(c+683,"BTB_2", false,-1, 127,0);
    tracep->declArray(c+687,"BTB_3", false,-1, 127,0);
    tracep->declArray(c+691,"BTB_4", false,-1, 127,0);
    tracep->declArray(c+695,"BTB_5", false,-1, 127,0);
    tracep->declArray(c+699,"BTB_6", false,-1, 127,0);
    tracep->declArray(c+703,"BTB_7", false,-1, 127,0);
    tracep->declArray(c+707,"BTB_8", false,-1, 127,0);
    tracep->declArray(c+711,"BTB_9", false,-1, 127,0);
    tracep->declArray(c+715,"BTB_10", false,-1, 127,0);
    tracep->declArray(c+719,"BTB_11", false,-1, 127,0);
    tracep->declArray(c+723,"BTB_12", false,-1, 127,0);
    tracep->declArray(c+727,"BTB_13", false,-1, 127,0);
    tracep->declArray(c+731,"BTB_14", false,-1, 127,0);
    tracep->declArray(c+735,"BTB_15", false,-1, 127,0);
    tracep->declArray(c+739,"BTB_16", false,-1, 127,0);
    tracep->declArray(c+743,"BTB_17", false,-1, 127,0);
    tracep->declArray(c+747,"BTB_18", false,-1, 127,0);
    tracep->declArray(c+751,"BTB_19", false,-1, 127,0);
    tracep->declArray(c+755,"BTB_20", false,-1, 127,0);
    tracep->declArray(c+759,"BTB_21", false,-1, 127,0);
    tracep->declArray(c+763,"BTB_22", false,-1, 127,0);
    tracep->declArray(c+767,"BTB_23", false,-1, 127,0);
    tracep->declArray(c+771,"BTB_24", false,-1, 127,0);
    tracep->declArray(c+775,"BTB_25", false,-1, 127,0);
    tracep->declArray(c+779,"BTB_26", false,-1, 127,0);
    tracep->declArray(c+783,"BTB_27", false,-1, 127,0);
    tracep->declArray(c+787,"BTB_28", false,-1, 127,0);
    tracep->declArray(c+791,"BTB_29", false,-1, 127,0);
    tracep->declArray(c+795,"BTB_30", false,-1, 127,0);
    tracep->declArray(c+799,"BTB_31", false,-1, 127,0);
    tracep->declArray(c+803,"BTB_32", false,-1, 127,0);
    tracep->declArray(c+807,"BTB_33", false,-1, 127,0);
    tracep->declArray(c+811,"BTB_34", false,-1, 127,0);
    tracep->declArray(c+815,"BTB_35", false,-1, 127,0);
    tracep->declArray(c+819,"BTB_36", false,-1, 127,0);
    tracep->declArray(c+823,"BTB_37", false,-1, 127,0);
    tracep->declArray(c+827,"BTB_38", false,-1, 127,0);
    tracep->declArray(c+831,"BTB_39", false,-1, 127,0);
    tracep->declArray(c+835,"BTB_40", false,-1, 127,0);
    tracep->declArray(c+839,"BTB_41", false,-1, 127,0);
    tracep->declArray(c+843,"BTB_42", false,-1, 127,0);
    tracep->declArray(c+847,"BTB_43", false,-1, 127,0);
    tracep->declArray(c+851,"BTB_44", false,-1, 127,0);
    tracep->declArray(c+855,"BTB_45", false,-1, 127,0);
    tracep->declArray(c+859,"BTB_46", false,-1, 127,0);
    tracep->declArray(c+863,"BTB_47", false,-1, 127,0);
    tracep->declArray(c+867,"BTB_48", false,-1, 127,0);
    tracep->declArray(c+871,"BTB_49", false,-1, 127,0);
    tracep->declArray(c+875,"BTB_50", false,-1, 127,0);
    tracep->declArray(c+879,"BTB_51", false,-1, 127,0);
    tracep->declArray(c+883,"BTB_52", false,-1, 127,0);
    tracep->declArray(c+887,"BTB_53", false,-1, 127,0);
    tracep->declArray(c+891,"BTB_54", false,-1, 127,0);
    tracep->declArray(c+895,"BTB_55", false,-1, 127,0);
    tracep->declArray(c+899,"BTB_56", false,-1, 127,0);
    tracep->declArray(c+903,"BTB_57", false,-1, 127,0);
    tracep->declArray(c+907,"BTB_58", false,-1, 127,0);
    tracep->declArray(c+911,"BTB_59", false,-1, 127,0);
    tracep->declArray(c+915,"BTB_60", false,-1, 127,0);
    tracep->declArray(c+919,"BTB_61", false,-1, 127,0);
    tracep->declArray(c+923,"BTB_62", false,-1, 127,0);
    tracep->declArray(c+927,"BTB_63", false,-1, 127,0);
    tracep->declQuad(c+931,"RAS_0", false,-1, 63,0);
    tracep->declQuad(c+933,"RAS_1", false,-1, 63,0);
    tracep->declQuad(c+935,"RAS_2", false,-1, 63,0);
    tracep->declQuad(c+937,"RAS_3", false,-1, 63,0);
    tracep->declQuad(c+939,"RAS_4", false,-1, 63,0);
    tracep->declQuad(c+941,"RAS_5", false,-1, 63,0);
    tracep->declBus(c+943,"PHT_0", false,-1, 1,0);
    tracep->declBus(c+944,"PHT_1", false,-1, 1,0);
    tracep->declBus(c+945,"PHT_2", false,-1, 1,0);
    tracep->declBus(c+946,"PHT_3", false,-1, 1,0);
    tracep->declBus(c+947,"PHT_4", false,-1, 1,0);
    tracep->declBus(c+948,"PHT_5", false,-1, 1,0);
    tracep->declBus(c+949,"PHT_6", false,-1, 1,0);
    tracep->declBus(c+950,"PHT_7", false,-1, 1,0);
    tracep->declBus(c+951,"PHT_8", false,-1, 1,0);
    tracep->declBus(c+952,"PHT_9", false,-1, 1,0);
    tracep->declBus(c+953,"PHT_10", false,-1, 1,0);
    tracep->declBus(c+954,"PHT_11", false,-1, 1,0);
    tracep->declBus(c+955,"PHT_12", false,-1, 1,0);
    tracep->declBus(c+956,"PHT_13", false,-1, 1,0);
    tracep->declBus(c+957,"PHT_14", false,-1, 1,0);
    tracep->declBus(c+958,"PHT_15", false,-1, 1,0);
    tracep->declBus(c+959,"PHT_16", false,-1, 1,0);
    tracep->declBus(c+960,"PHT_17", false,-1, 1,0);
    tracep->declBus(c+961,"PHT_18", false,-1, 1,0);
    tracep->declBus(c+962,"PHT_19", false,-1, 1,0);
    tracep->declBus(c+963,"PHT_20", false,-1, 1,0);
    tracep->declBus(c+964,"PHT_21", false,-1, 1,0);
    tracep->declBus(c+965,"PHT_22", false,-1, 1,0);
    tracep->declBus(c+966,"PHT_23", false,-1, 1,0);
    tracep->declBus(c+967,"PHT_24", false,-1, 1,0);
    tracep->declBus(c+968,"PHT_25", false,-1, 1,0);
    tracep->declBus(c+969,"PHT_26", false,-1, 1,0);
    tracep->declBus(c+970,"PHT_27", false,-1, 1,0);
    tracep->declBus(c+971,"PHT_28", false,-1, 1,0);
    tracep->declBus(c+972,"PHT_29", false,-1, 1,0);
    tracep->declBus(c+973,"PHT_30", false,-1, 1,0);
    tracep->declBus(c+974,"PHT_31", false,-1, 1,0);
    tracep->declBus(c+975,"PHT_32", false,-1, 1,0);
    tracep->declBus(c+976,"PHT_33", false,-1, 1,0);
    tracep->declBus(c+977,"PHT_34", false,-1, 1,0);
    tracep->declBus(c+978,"PHT_35", false,-1, 1,0);
    tracep->declBus(c+979,"PHT_36", false,-1, 1,0);
    tracep->declBus(c+980,"PHT_37", false,-1, 1,0);
    tracep->declBus(c+981,"PHT_38", false,-1, 1,0);
    tracep->declBus(c+982,"PHT_39", false,-1, 1,0);
    tracep->declBus(c+983,"PHT_40", false,-1, 1,0);
    tracep->declBus(c+984,"PHT_41", false,-1, 1,0);
    tracep->declBus(c+985,"PHT_42", false,-1, 1,0);
    tracep->declBus(c+986,"PHT_43", false,-1, 1,0);
    tracep->declBus(c+987,"PHT_44", false,-1, 1,0);
    tracep->declBus(c+988,"PHT_45", false,-1, 1,0);
    tracep->declBus(c+989,"PHT_46", false,-1, 1,0);
    tracep->declBus(c+990,"PHT_47", false,-1, 1,0);
    tracep->declBus(c+991,"PHT_48", false,-1, 1,0);
    tracep->declBus(c+992,"PHT_49", false,-1, 1,0);
    tracep->declBus(c+993,"PHT_50", false,-1, 1,0);
    tracep->declBus(c+994,"PHT_51", false,-1, 1,0);
    tracep->declBus(c+995,"PHT_52", false,-1, 1,0);
    tracep->declBus(c+996,"PHT_53", false,-1, 1,0);
    tracep->declBus(c+997,"PHT_54", false,-1, 1,0);
    tracep->declBus(c+998,"PHT_55", false,-1, 1,0);
    tracep->declBus(c+999,"PHT_56", false,-1, 1,0);
    tracep->declBus(c+1000,"PHT_57", false,-1, 1,0);
    tracep->declBus(c+1001,"PHT_58", false,-1, 1,0);
    tracep->declBus(c+1002,"PHT_59", false,-1, 1,0);
    tracep->declBus(c+1003,"PHT_60", false,-1, 1,0);
    tracep->declBus(c+1004,"PHT_61", false,-1, 1,0);
    tracep->declBus(c+1005,"PHT_62", false,-1, 1,0);
    tracep->declBus(c+1006,"PHT_63", false,-1, 1,0);
    tracep->declBus(c+1007,"reg_head", false,-1, 2,0);
    tracep->declBus(c+1008,"update_index", false,-1, 5,0);
    tracep->declArray(c+1009,"update_btb_data", false,-1, 122,0);
    tracep->declBus(c+1013,"index", false,-1, 5,0);
    tracep->declQuad(c+1014,"tag", false,-1, 55,0);
    tracep->declBit(c+1016,"pht_taken", false,-1);
    tracep->declBit(c+1017,"btb_valid", false,-1);
    tracep->declQuad(c+1018,"btb_tag", false,-1, 55,0);
    tracep->declQuad(c+1020,"btb_target_next_pc", false,-1, 63,0);
    tracep->declBus(c+1022,"btb_br_type", false,-1, 1,0);
    tracep->declBit(c+654,"pre_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+167,"io_flush", false,-1);
    tracep->declBit(c+100,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+649,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+145,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+650,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+651,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+168,"io_put_pc_ready", false,-1);
    tracep->declBit(c+169,"io_put_pc_valid", false,-1);
    tracep->declBus(c+170,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"io_put_pc_bits_is_pre", false,-1);
    tracep->declQuad(c+1023,"ibuf_pc_0", false,-1, 63,0);
    tracep->declQuad(c+1025,"ibuf_pc_1", false,-1, 63,0);
    tracep->declQuad(c+1027,"ibuf_pc_2", false,-1, 63,0);
    tracep->declQuad(c+1029,"ibuf_pc_3", false,-1, 63,0);
    tracep->declBus(c+1031,"ibuf_inst_0", false,-1, 31,0);
    tracep->declBus(c+1032,"ibuf_inst_1", false,-1, 31,0);
    tracep->declBus(c+1033,"ibuf_inst_2", false,-1, 31,0);
    tracep->declBus(c+1034,"ibuf_inst_3", false,-1, 31,0);
    tracep->declBit(c+1035,"ibuf_is_pre_0", false,-1);
    tracep->declBit(c+1036,"ibuf_is_pre_1", false,-1);
    tracep->declBit(c+1037,"ibuf_is_pre_2", false,-1);
    tracep->declBit(c+1038,"ibuf_is_pre_3", false,-1);
    tracep->declBit(c+1039,"ibuf_valid_0", false,-1);
    tracep->declBit(c+1040,"ibuf_valid_1", false,-1);
    tracep->declBit(c+1041,"ibuf_valid_2", false,-1);
    tracep->declBit(c+1042,"ibuf_valid_3", false,-1);
    tracep->declBus(c+1043,"reg_head", false,-1, 1,0);
    tracep->declBus(c+1044,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+1045,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+1046,"enq_size", false,-1);
    tracep->declBit(c+1047,"can_deq", false,-1);
    tracep->declBus(c+1048,"result_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+96,"io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+97,"io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+98,"io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+100,"io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+101,"io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+102,"io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+106,"io_is_fence_i", false,-1);
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
    tracep->declBit(c+107,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+3173,"cache_stage0_clock", false,-1);
    tracep->declBit(c+3174,"cache_stage0_reset", false,-1);
    tracep->declBit(c+95,"cache_stage0_io_flush", false,-1);
    tracep->declBit(c+96,"cache_stage0_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+97,"cache_stage0_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+96,"cache_stage0_io_addr_ready", false,-1);
    tracep->declBit(c+1049,"cache_stage0_io_addr_valid", false,-1);
    tracep->declQuad(c+1050,"cache_stage0_io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+3173,"cache_stage1_clock", false,-1);
    tracep->declBit(c+3174,"cache_stage1_reset", false,-1);
    tracep->declBit(c+95,"cache_stage1_io_flush", false,-1);
    tracep->declBit(c+96,"cache_stage1_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+1049,"cache_stage1_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+1050,"cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+1052,"cache_stage1_io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+1053,"cache_stage1_io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+1054,"cache_stage1_io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+1055,"cache_stage1_io_sram_valid", false,-1);
    tracep->declArray(c+1056,"cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+1060,"cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+1064,"cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+1068,"cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+1072,"cache_stage1_io_sram_ready", false,-1);
    tracep->declBit(c+1073,"cache_stage1_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1074,"cache_stage1_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1075,"cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1077,"cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1053,"cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1078,"cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1080,"cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1054,"cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1081,"cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+3173,"cache_stage2_clock", false,-1);
    tracep->declBit(c+3174,"cache_stage2_reset", false,-1);
    tracep->declBit(c+95,"cache_stage2_io_flush", false,-1);
    tracep->declBit(c+1073,"cache_stage2_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1074,"cache_stage2_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1075,"cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1077,"cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1053,"cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1078,"cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1080,"cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1054,"cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1081,"cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+107,"cache_stage2_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"cache_stage2_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+1083,"cache_stage2_io_sram_w_valid", false,-1);
    tracep->declBus(c+1084,"cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+23,"cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+31,"cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+1085,"cache_stage2_io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+100,"cache_stage2_io_rdata_ready", false,-1);
    tracep->declBit(c+101,"cache_stage2_io_rdata_valid", false,-1);
    tracep->declQuad(c+102,"cache_stage2_io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+1086,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+1088,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+1090,"is_w_sram", false,-1);
    tracep->declBit(c+1091,"is_sram0_write", false,-1);
    tracep->declBit(c+1092,"is_sram1_write", false,-1);
    tracep->declQuad(c+1093,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+1095,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+1096,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+1097,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+1098,"w_r_pass0_val", false,-1);
    tracep->declBit(c+1099,"w_r_pass1_val", false,-1);
    tracep->declBit(c+1072,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+96,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+97,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+96,"io_addr_ready", false,-1);
    tracep->declBit(c+1049,"io_addr_valid", false,-1);
    tracep->declQuad(c+1050,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1049,"reg_valid", false,-1);
    tracep->declQuad(c+1050,"reg_addr", false,-1, 63,0);
    tracep->declBit(c+1100,"valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+96,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+1049,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+1050,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+1052,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+1053,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+1054,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+1055,"io_sram_valid", false,-1);
    tracep->declArray(c+1056,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+1060,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+1064,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+1068,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+1072,"io_sram_ready", false,-1);
    tracep->declBit(c+1073,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1074,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1075,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1077,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1053,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1078,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1080,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1054,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1081,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+1055,"valid", false,-1);
    tracep->declBit(c+96,"ready", false,-1);
    tracep->declQuad(c+1075,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1101,"reg_valid", false,-1);
    tracep->declQuad(c+1102,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+1104,"reg_index", false,-1, 5,0);
    tracep->declBus(c+1105,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+1106,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+1108,"tag_1", false,-1, 53,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+1073,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1074,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1075,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1077,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1053,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1078,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1080,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1054,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1081,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+107,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+1083,"io_sram_w_valid", false,-1);
    tracep->declBus(c+1084,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+23,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+31,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+1085,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+100,"io_rdata_ready", false,-1);
    tracep->declBit(c+101,"io_rdata_valid", false,-1);
    tracep->declQuad(c+102,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+1104,"index", false,-1, 5,0);
    tracep->declBit(c+1110,"valid", false,-1);
    tracep->declBit(c+1085,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+102,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+101,"reg_valid", false,-1);
    tracep->declBit(c+1111,"reg_ready", false,-1);
    tracep->declQuad(c+1112,"temp_addr", false,-1, 63,0);
    tracep->declQuad(c+108,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+107,"reg_r_valid", false,-1);
    tracep->declArray(c+23,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+1083,"reg_cache_write", false,-1);
    tracep->declQuad(c+104,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+1114,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+1116,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+1117,"reg_lru_1", false,-1, 63,0);
    tracep->declBit(c+1119,"LRU_1", false,-1);
    tracep->declQuad(c+1120,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+1122,"neg_chose_bit", false,-1, 63,0);
    tracep->declBus(c+1124,"reg_bus_state", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+3255,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+27,"Q", false,-1, 127,0);
    tracep->declArray(c+1125,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1129,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1133,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1137,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1141,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1145,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1149,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1153,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1157,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1161,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1165,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1169,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1173,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1177,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1181,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1185,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1189,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1193,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1197,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1201,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1205,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1209,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1213,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1217,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1221,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1225,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1229,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1233,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1237,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1241,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1245,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1249,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1253,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1257,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1261,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1265,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1269,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1273,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1277,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1281,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1285,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1289,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1293,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1297,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1301,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1305,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1309,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1313,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1317,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1321,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1325,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1329,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1333,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1337,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1341,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1345,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1349,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1353,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1357,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1361,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1365,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1369,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1373,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1377,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3260,"bwen", false,-1, 127,0);
    tracep->declBit(c+1091,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+3255,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+35,"Q", false,-1, 127,0);
    tracep->declArray(c+1381,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1385,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1389,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1393,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1397,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1401,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1405,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1409,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1413,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1417,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1421,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1425,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1429,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1433,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1437,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1441,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1445,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1449,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1453,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1457,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1461,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1465,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1469,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1473,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1477,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1481,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1485,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1489,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1493,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1497,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1501,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1505,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1509,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1513,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1517,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1521,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1525,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1529,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1533,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1537,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1541,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1545,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1549,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1553,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1557,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1561,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1565,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1569,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1573,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1577,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1581,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1585,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1589,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1593,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1597,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1601,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1605,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1609,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1613,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1617,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1621,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1625,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1629,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1633,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3260,"bwen", false,-1, 127,0);
    tracep->declBit(c+1091,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_wen", false,-1);
    tracep->declArray(c+3255,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+40,"Q", false,-1, 127,0);
    tracep->declArray(c+1637,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1641,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1645,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1649,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1653,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1657,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1661,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1665,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1669,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1673,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1677,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1681,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1685,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1689,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1693,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1697,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1701,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1705,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1709,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1713,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1717,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1721,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1725,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1729,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1733,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1737,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1741,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1745,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1749,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1753,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1757,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1761,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1765,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1769,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1773,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1777,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1781,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1785,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1789,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1793,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1797,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1801,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1805,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1809,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1813,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1817,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1821,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1825,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1829,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1833,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1837,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1841,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1845,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1849,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1853,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1857,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1861,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1865,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1869,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1873,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1877,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1881,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1885,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1889,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3260,"bwen", false,-1, 127,0);
    tracep->declBit(c+1092,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_wen", false,-1);
    tracep->declArray(c+3255,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+44,"Q", false,-1, 127,0);
    tracep->declArray(c+1893,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1897,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1901,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1905,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1909,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1913,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1917,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1921,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1925,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1929,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1933,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1937,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1941,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1945,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1949,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1953,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1957,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1961,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1965,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1969,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1973,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1977,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1981,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1985,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1989,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1993,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1997,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2001,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2005,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2009,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2013,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2017,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2021,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2025,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2029,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2033,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2037,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2041,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2045,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2049,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2053,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2057,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2061,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2065,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2069,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2073,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2077,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2081,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2085,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2089,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2093,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2097,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2101,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2105,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2109,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2113,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2117,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2121,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2125,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2129,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2133,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2137,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2141,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2145,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3260,"bwen", false,-1, 127,0);
    tracep->declBit(c+1092,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+50,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+58,"Q", false,-1, 127,0);
    tracep->declArray(c+2149,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2153,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2157,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2161,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2165,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2169,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2173,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2177,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2181,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2185,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2189,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2193,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2197,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2201,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2205,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2209,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2213,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2217,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2221,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2225,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2229,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2233,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2237,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2241,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2245,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2249,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2253,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2257,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2261,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2265,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2269,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2273,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2277,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2281,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2285,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2289,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2293,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2297,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2301,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2305,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2309,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2313,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2317,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2321,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2325,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2329,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2333,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2337,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2341,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2345,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2349,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2353,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2357,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2361,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2365,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2369,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2373,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2377,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2381,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2385,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2389,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2393,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2397,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2401,"sram_63", false,-1, 127,0);
    tracep->declArray(c+362,"bwen", false,-1, 127,0);
    tracep->declBit(c+370,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+3255,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+66,"Q", false,-1, 127,0);
    tracep->declArray(c+2405,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2409,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2413,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2417,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2421,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2425,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2429,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2433,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2437,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2441,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2445,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2449,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2453,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2457,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2461,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2465,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2469,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2473,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2477,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2481,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2485,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2489,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2493,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2497,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2501,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2505,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2509,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2513,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2517,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2521,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2525,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2529,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2533,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2537,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2541,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2545,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2549,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2553,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2557,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2561,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2565,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2569,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2573,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2577,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2581,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2585,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2589,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2593,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2597,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2601,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2605,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2609,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2613,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2617,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2621,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2625,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2629,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2633,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2637,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2641,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2645,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2649,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2653,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2657,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3260,"bwen", false,-1, 127,0);
    tracep->declBit(c+370,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_wen", false,-1);
    tracep->declArray(c+50,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+71,"Q", false,-1, 127,0);
    tracep->declArray(c+2661,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2665,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2669,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2673,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2677,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2681,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2685,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2689,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2693,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2697,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2701,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2705,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2709,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2713,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2717,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2721,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2725,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2729,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2733,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2737,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2741,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2745,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2749,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2753,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2757,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2761,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2765,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2769,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2773,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2777,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2781,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2785,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2789,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2793,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2797,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2801,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2805,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2809,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2813,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2817,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2821,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2825,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2829,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2833,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2837,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2841,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2845,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2849,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2853,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2857,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2861,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2865,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2869,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2873,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2877,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2881,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2885,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2889,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2893,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2897,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2901,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2905,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2909,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2913,"sram_63", false,-1, 127,0);
    tracep->declArray(c+362,"bwen", false,-1, 127,0);
    tracep->declBit(c+379,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+3173,"clock", false,-1);
    tracep->declBit(c+3174,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_wen", false,-1);
    tracep->declArray(c+3255,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+75,"Q", false,-1, 127,0);
    tracep->declArray(c+2917,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2921,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2925,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2929,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2933,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2937,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2941,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2945,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2949,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2953,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2957,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2961,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2965,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2969,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2973,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2977,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2981,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2985,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2989,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2993,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2997,"sram_20", false,-1, 127,0);
    tracep->declArray(c+3001,"sram_21", false,-1, 127,0);
    tracep->declArray(c+3005,"sram_22", false,-1, 127,0);
    tracep->declArray(c+3009,"sram_23", false,-1, 127,0);
    tracep->declArray(c+3013,"sram_24", false,-1, 127,0);
    tracep->declArray(c+3017,"sram_25", false,-1, 127,0);
    tracep->declArray(c+3021,"sram_26", false,-1, 127,0);
    tracep->declArray(c+3025,"sram_27", false,-1, 127,0);
    tracep->declArray(c+3029,"sram_28", false,-1, 127,0);
    tracep->declArray(c+3033,"sram_29", false,-1, 127,0);
    tracep->declArray(c+3037,"sram_30", false,-1, 127,0);
    tracep->declArray(c+3041,"sram_31", false,-1, 127,0);
    tracep->declArray(c+3045,"sram_32", false,-1, 127,0);
    tracep->declArray(c+3049,"sram_33", false,-1, 127,0);
    tracep->declArray(c+3053,"sram_34", false,-1, 127,0);
    tracep->declArray(c+3057,"sram_35", false,-1, 127,0);
    tracep->declArray(c+3061,"sram_36", false,-1, 127,0);
    tracep->declArray(c+3065,"sram_37", false,-1, 127,0);
    tracep->declArray(c+3069,"sram_38", false,-1, 127,0);
    tracep->declArray(c+3073,"sram_39", false,-1, 127,0);
    tracep->declArray(c+3077,"sram_40", false,-1, 127,0);
    tracep->declArray(c+3081,"sram_41", false,-1, 127,0);
    tracep->declArray(c+3085,"sram_42", false,-1, 127,0);
    tracep->declArray(c+3089,"sram_43", false,-1, 127,0);
    tracep->declArray(c+3093,"sram_44", false,-1, 127,0);
    tracep->declArray(c+3097,"sram_45", false,-1, 127,0);
    tracep->declArray(c+3101,"sram_46", false,-1, 127,0);
    tracep->declArray(c+3105,"sram_47", false,-1, 127,0);
    tracep->declArray(c+3109,"sram_48", false,-1, 127,0);
    tracep->declArray(c+3113,"sram_49", false,-1, 127,0);
    tracep->declArray(c+3117,"sram_50", false,-1, 127,0);
    tracep->declArray(c+3121,"sram_51", false,-1, 127,0);
    tracep->declArray(c+3125,"sram_52", false,-1, 127,0);
    tracep->declArray(c+3129,"sram_53", false,-1, 127,0);
    tracep->declArray(c+3133,"sram_54", false,-1, 127,0);
    tracep->declArray(c+3137,"sram_55", false,-1, 127,0);
    tracep->declArray(c+3141,"sram_56", false,-1, 127,0);
    tracep->declArray(c+3145,"sram_57", false,-1, 127,0);
    tracep->declArray(c+3149,"sram_58", false,-1, 127,0);
    tracep->declArray(c+3153,"sram_59", false,-1, 127,0);
    tracep->declArray(c+3157,"sram_60", false,-1, 127,0);
    tracep->declArray(c+3161,"sram_61", false,-1, 127,0);
    tracep->declArray(c+3165,"sram_62", false,-1, 127,0);
    tracep->declArray(c+3169,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3260,"bwen", false,-1, 127,0);
    tracep->declBit(c+379,"wen", false,-1);
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
    bufp->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
    bufp->fullBit(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_bits_rlast));
    bufp->fullCData(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr),6);
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
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
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
    bufp->fullWData(oldp+40,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
    bufp->fullWData(oldp+44,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
    bufp->fullCData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr),6);
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
    __Vtemp_he557d9cd__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
    __Vtemp_he557d9cd__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
    __Vtemp_he557d9cd__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
    __Vtemp_he557d9cd__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
    bufp->fullWData(oldp+50,(__Vtemp_he557d9cd__0),128);
    bufp->fullWData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
    bufp->fullWData(oldp+58,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
    __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
    __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                        >> 0x20U));
    __Vtemp_h5cafde3d__0[2U] = 0U;
    __Vtemp_h5cafde3d__0[3U] = 0U;
    bufp->fullWData(oldp+62,(__Vtemp_h5cafde3d__0),128);
    bufp->fullWData(oldp+66,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
    bufp->fullBit(oldp+70,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
    bufp->fullWData(oldp+71,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
    bufp->fullWData(oldp+75,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
    bufp->fullQData(oldp+79,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
    bufp->fullQData(oldp+81,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                               ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                               : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
    bufp->fullQData(oldp+83,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
    bufp->fullQData(oldp+85,((((QData)((IData)(((((
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
    bufp->fullBit(oldp+87,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid) 
                            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
    bufp->fullQData(oldp+88,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
    bufp->fullCData(oldp+90,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
    bufp->fullBit(oldp+91,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    bufp->fullBit(oldp+92,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
    bufp->fullIData(oldp+93,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
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
    bufp->fullIData(oldp+94,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
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
    bufp->fullBit(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush));
    bufp->fullBit(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
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
    bufp->fullBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast));
    bufp->fullBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready));
    bufp->fullBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid));
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
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready))));
    bufp->fullBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    bufp->fullBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
    bufp->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
    bufp->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_pc),64);
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
    bufp->fullBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
    bufp->fullQData(oldp+163,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                : 0ULL)),64);
    bufp->fullQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
    bufp->fullBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_flush));
    bufp->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    bufp->fullBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3));
    bufp->fullIData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
    bufp->fullQData(oldp+171,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                        : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
    bufp->fullBit(oldp+173,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                              : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
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
    bufp->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
    bufp->fullQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
    bufp->fullQData(oldp+201,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
    bufp->fullBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
    bufp->fullCData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
    bufp->fullQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
    bufp->fullBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en));
    bufp->fullSData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_is_exception));
    bufp->fullBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_time_irq));
    bufp->fullBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_soft_irq));
    bufp->fullCData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
    bufp->fullQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
    bufp->fullQData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
    bufp->fullBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_commit));
    bufp->fullIData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
    bufp->fullBit(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    bufp->fullCData(oldp+222,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0xfU))),5);
    bufp->fullQData(oldp+223,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
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
    bufp->fullCData(oldp+225,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+226,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
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
    bufp->fullSData(oldp+228,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+229,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
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
    bufp->fullQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
    bufp->fullQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
    bufp->fullBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    bufp->fullBit(oldp+236,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullBit(oldp+237,((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
    bufp->fullCData(oldp+238,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
    bufp->fullQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
    bufp->fullQData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
    bufp->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
    bufp->fullQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
    bufp->fullQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
    bufp->fullQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
    bufp->fullQData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
    bufp->fullQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
    bufp->fullQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
    bufp->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
    bufp->fullQData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
    bufp->fullQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
    bufp->fullQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
    bufp->fullQData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
    bufp->fullQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
    bufp->fullQData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
    bufp->fullQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
    bufp->fullQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
    bufp->fullQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
    bufp->fullQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
    bufp->fullQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
    bufp->fullQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
    bufp->fullQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
    bufp->fullQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
    bufp->fullQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
    bufp->fullQData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
    bufp->fullQData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
    bufp->fullQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
    bufp->fullQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
    bufp->fullQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
    bufp->fullQData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
    bufp->fullQData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
    bufp->fullBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
    bufp->fullIData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
    bufp->fullQData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
    bufp->fullQData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
    bufp->fullBit(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
    bufp->fullBit(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
    bufp->fullBit(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
    bufp->fullQData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
    bufp->fullQData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
    bufp->fullQData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
    bufp->fullQData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
    bufp->fullQData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
    bufp->fullQData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
    bufp->fullQData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
    bufp->fullQData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
    bufp->fullQData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
    bufp->fullQData(oldp+330,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
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
    bufp->fullBit(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
    bufp->fullCData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
    bufp->fullCData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
    bufp->fullCData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
    bufp->fullBit(oldp+336,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    bufp->fullCData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
    bufp->fullCData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
    bufp->fullBit(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
    bufp->fullBit(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
    bufp->fullBit(oldp+341,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+342,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                      >> 0x1fU))));
    bufp->fullBit(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
    bufp->fullQData(oldp+344,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                               >> 0xaU)),54);
    bufp->fullCData(oldp+346,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 4U)))),6);
    bufp->fullCData(oldp+347,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
    bufp->fullCData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
    bufp->fullQData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
    bufp->fullCData(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
    bufp->fullBit(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
    bufp->fullQData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
    bufp->fullCData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
    bufp->fullCData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
    bufp->fullBit(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    bufp->fullSData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
    bufp->fullBit(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+360,((((QData)((IData)(((0x80U 
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
    bufp->fullWData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
    bufp->fullWData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
    bufp->fullBit(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
    bufp->fullQData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
    bufp->fullQData(oldp+375,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
    bufp->fullQData(oldp+377,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
    bufp->fullBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
    bufp->fullQData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
    bufp->fullQData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
    bufp->fullQData(oldp+384,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
    bufp->fullQData(oldp+386,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
    bufp->fullBit(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
    bufp->fullBit(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
    bufp->fullBit(oldp+390,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
    bufp->fullBit(oldp+391,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
    bufp->fullBit(oldp+392,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullBit(oldp+393,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
    bufp->fullQData(oldp+394,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))),64);
    bufp->fullQData(oldp+396,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))),64);
    bufp->fullQData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
    bufp->fullBit(oldp+400,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
    bufp->fullBit(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    bufp->fullCData(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
    bufp->fullBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    bufp->fullBit(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    bufp->fullCData(oldp+405,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
    bufp->fullCData(oldp+407,(((0x33U == (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                ? 1U : ((0x13U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                         ? 1U : ((0x1bU 
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
    bufp->fullCData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
    bufp->fullCData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
    bufp->fullBit(oldp+410,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
    bufp->fullBit(oldp+411,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
    bufp->fullBit(oldp+412,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    bufp->fullBit(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
    bufp->fullBit(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
    bufp->fullQData(oldp+415,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+417,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
    bufp->fullQData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
    bufp->fullQData(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data),64);
    bufp->fullQData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data),64);
    bufp->fullQData(oldp+424,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
    bufp->fullBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    bufp->fullQData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    bufp->fullQData(oldp+432,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
    bufp->fullBit(oldp+434,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+435,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    bufp->fullQData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
    bufp->fullBit(oldp+439,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    bufp->fullQData(oldp+440,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
    bufp->fullSData(oldp+442,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    bufp->fullCData(oldp+444,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
    bufp->fullBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
    bufp->fullBit(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullCData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullBit(oldp+448,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
    bufp->fullBit(oldp+449,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+450,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+451,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U))));
    bufp->fullCData(oldp+452,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
    bufp->fullBit(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    bufp->fullBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    bufp->fullBit(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
    bufp->fullBit(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+466,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    bufp->fullQData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullQData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
    bufp->fullBit(oldp+473,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U)))));
    bufp->fullQData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+476,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 5U)))));
    bufp->fullBit(oldp+477,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 5U)))));
    bufp->fullQData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullQData(oldp+480,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 5U)))
                                ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
    bufp->fullWData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
    bufp->fullBit(oldp+485,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
    bufp->fullBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
    bufp->fullWData(oldp+488,(__Vtemp_hfddea7ef__0),127);
    bufp->fullQData(oldp+492,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+494,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+496,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 5U)))
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                     ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
    bufp->fullCData(oldp+498,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))),3);
    bufp->fullQData(oldp+499,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? ((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U)))
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
    bufp->fullBit(oldp+501,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
    bufp->fullBit(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    bufp->fullQData(oldp+503,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data
                                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
    __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                        >> 0x20U));
    __Vtemp_h6618c490__0[2U] = 1U;
    bufp->fullWData(oldp+505,(__Vtemp_h6618c490__0),65);
    bufp->fullQData(oldp+508,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        __Vtemp_h4825144c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
        __Vtemp_h4825144c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
        __Vtemp_h4825144c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
    } else {
        __Vtemp_h4825144c__0[0U] = 0U;
        __Vtemp_h4825144c__0[1U] = 0U;
        __Vtemp_h4825144c__0[2U] = 0U;
    }
    bufp->fullWData(oldp+510,(__Vtemp_h4825144c__0),65);
    bufp->fullQData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullQData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
    bufp->fullBit(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
    bufp->fullBit(oldp+518,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
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
    bufp->fullQData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullQData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
    bufp->fullQData(oldp+529,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
    bufp->fullQData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullQData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
    bufp->fullBit(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    bufp->fullWData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
    bufp->fullBit(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullBit(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
    bufp->fullQData(oldp+543,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullBit(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
    bufp->fullQData(oldp+548,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
    bufp->fullBit(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullBit(oldp+552,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U)))));
    bufp->fullWData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
    bufp->fullWData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
    bufp->fullWData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
    bufp->fullWData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
    bufp->fullWData(oldp+574,(__Vtemp_h28f9f554__0),65);
    bufp->fullCData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    bufp->fullWData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
    bufp->fullBit(oldp+585,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
    bufp->fullBit(oldp+586,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                      ^ __Vtemp_h2ede82b0__0[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                        ^ __Vtemp_h2ede82b0__0[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                       ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
    bufp->fullBit(oldp+587,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    bufp->fullBit(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
    bufp->fullBit(oldp+589,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
    bufp->fullBit(oldp+590,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                   >> 3U))));
    bufp->fullQData(oldp+591,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullQData(oldp+593,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+595,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))));
    bufp->fullBit(oldp+596,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullWData(oldp+597,(__Vtemp_h4bcec608__0),130);
    bufp->fullWData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
    bufp->fullWData(oldp+605,(__Vtemp_h3364f91c__0),67);
    bufp->fullCData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
    bufp->fullWData(oldp+623,(__Vtemp_hf484a493__0),131);
    bufp->fullCData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullBit(oldp+629,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                          >> 2U)))));
    bufp->fullBit(oldp+630,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
    bufp->fullBit(oldp+631,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 4U))));
    bufp->fullQData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullQData(oldp+638,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+640,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+641,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+642,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+643,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+644,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))) 
                             | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    bufp->fullCData(oldp+645,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
    bufp->fullBit(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullQData(oldp+647,(((0xffffffffffffff77ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                               | (QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                              >> 7U)))
                                                   ? 0x88U
                                                   : 0x80U))))),64);
    bufp->fullBit(oldp+649,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
    bufp->fullBit(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
    bufp->fullQData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullBit(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
    bufp->fullQData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
    bufp->fullQData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
    bufp->fullQData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
    bufp->fullBit(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
    bufp->fullCData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+671,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
    bufp->fullBit(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
    bufp->fullBit(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
    bufp->fullBit(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
    bufp->fullWData(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
    bufp->fullWData(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
    bufp->fullWData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
    bufp->fullWData(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
    bufp->fullWData(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
    bufp->fullWData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
    bufp->fullWData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
    bufp->fullWData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
    bufp->fullWData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
    bufp->fullWData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
    bufp->fullWData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
    bufp->fullWData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
    bufp->fullWData(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
    bufp->fullWData(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
    bufp->fullWData(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
    bufp->fullWData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
    bufp->fullWData(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
    bufp->fullWData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
    bufp->fullWData(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
    bufp->fullWData(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
    bufp->fullWData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
    bufp->fullWData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
    bufp->fullWData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
    bufp->fullWData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
    bufp->fullWData(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
    bufp->fullWData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
    bufp->fullWData(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
    bufp->fullWData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
    bufp->fullWData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
    bufp->fullWData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
    bufp->fullWData(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
    bufp->fullWData(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
    bufp->fullWData(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
    bufp->fullWData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
    bufp->fullWData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
    bufp->fullWData(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
    bufp->fullWData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
    bufp->fullWData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
    bufp->fullWData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
    bufp->fullWData(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
    bufp->fullWData(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
    bufp->fullWData(oldp+839,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
    bufp->fullWData(oldp+843,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
    bufp->fullWData(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
    bufp->fullWData(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
    bufp->fullWData(oldp+855,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
    bufp->fullWData(oldp+859,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
    bufp->fullWData(oldp+863,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
    bufp->fullWData(oldp+867,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
    bufp->fullWData(oldp+871,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
    bufp->fullWData(oldp+875,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
    bufp->fullWData(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
    bufp->fullWData(oldp+883,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
    bufp->fullWData(oldp+887,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
    bufp->fullWData(oldp+891,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
    bufp->fullWData(oldp+895,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
    bufp->fullWData(oldp+899,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
    bufp->fullWData(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
    bufp->fullWData(oldp+907,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
    bufp->fullWData(oldp+911,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
    bufp->fullWData(oldp+915,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
    bufp->fullWData(oldp+919,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
    bufp->fullWData(oldp+923,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
    bufp->fullWData(oldp+927,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
    bufp->fullQData(oldp+931,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
    bufp->fullQData(oldp+933,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
    bufp->fullQData(oldp+935,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
    bufp->fullQData(oldp+937,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
    bufp->fullQData(oldp+939,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
    bufp->fullQData(oldp+941,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
    bufp->fullCData(oldp+943,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
    bufp->fullCData(oldp+944,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
    bufp->fullCData(oldp+945,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
    bufp->fullCData(oldp+946,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
    bufp->fullCData(oldp+947,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
    bufp->fullCData(oldp+948,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
    bufp->fullCData(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
    bufp->fullCData(oldp+950,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
    bufp->fullCData(oldp+951,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
    bufp->fullCData(oldp+952,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
    bufp->fullCData(oldp+953,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
    bufp->fullCData(oldp+954,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
    bufp->fullCData(oldp+955,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
    bufp->fullCData(oldp+956,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
    bufp->fullCData(oldp+957,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
    bufp->fullCData(oldp+958,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
    bufp->fullCData(oldp+959,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
    bufp->fullCData(oldp+960,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
    bufp->fullCData(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
    bufp->fullCData(oldp+962,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
    bufp->fullCData(oldp+963,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
    bufp->fullCData(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
    bufp->fullCData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
    bufp->fullCData(oldp+966,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
    bufp->fullCData(oldp+967,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
    bufp->fullCData(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
    bufp->fullCData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
    bufp->fullCData(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
    bufp->fullCData(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
    bufp->fullCData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
    bufp->fullCData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
    bufp->fullCData(oldp+974,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
    bufp->fullCData(oldp+975,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
    bufp->fullCData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
    bufp->fullCData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
    bufp->fullCData(oldp+978,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
    bufp->fullCData(oldp+979,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
    bufp->fullCData(oldp+980,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
    bufp->fullCData(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
    bufp->fullCData(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
    bufp->fullCData(oldp+983,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
    bufp->fullCData(oldp+984,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
    bufp->fullCData(oldp+985,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
    bufp->fullCData(oldp+986,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
    bufp->fullCData(oldp+987,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
    bufp->fullCData(oldp+988,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
    bufp->fullCData(oldp+989,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
    bufp->fullCData(oldp+990,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
    bufp->fullCData(oldp+991,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
    bufp->fullCData(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
    bufp->fullCData(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
    bufp->fullCData(oldp+994,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
    bufp->fullCData(oldp+995,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
    bufp->fullCData(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
    bufp->fullCData(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
    bufp->fullCData(oldp+998,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
    bufp->fullCData(oldp+999,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
    bufp->fullCData(oldp+1000,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
    bufp->fullCData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
    bufp->fullCData(oldp+1002,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
    bufp->fullCData(oldp+1003,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
    bufp->fullCData(oldp+1004,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
    bufp->fullCData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
    bufp->fullCData(oldp+1006,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
    bufp->fullCData(oldp+1007,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullCData(oldp+1008,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                 >> 3U)))),6);
    __Vtemp_hc91b162c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
    __Vtemp_hc91b162c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
    __Vtemp_hc91b162c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
    __Vtemp_hc91b162c__0[3U] = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
    bufp->fullWData(oldp+1009,(__Vtemp_hc91b162c__0),123);
    bufp->fullCData(oldp+1013,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 3U)))),6);
    bufp->fullQData(oldp+1014,(((0xfffffffffffffeULL 
                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 8U)) | (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                          >> 2U))))))),56);
    bufp->fullBit(oldp+1016,((1U & (((0x3fU == (0x3fU 
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
    bufp->fullBit(oldp+1017,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                    >> 0x1aU))));
    bufp->fullQData(oldp+1018,((0xffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                                 >> 2U)))),56);
    bufp->fullQData(oldp+1020,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                                 >> 2U)))),64);
    bufp->fullCData(oldp+1022,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
    bufp->fullQData(oldp+1023,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
    bufp->fullQData(oldp+1025,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
    bufp->fullQData(oldp+1027,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
    bufp->fullQData(oldp+1029,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
    bufp->fullIData(oldp+1031,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
    bufp->fullIData(oldp+1032,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
    bufp->fullIData(oldp+1033,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
    bufp->fullIData(oldp+1034,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
    bufp->fullBit(oldp+1035,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
    bufp->fullBit(oldp+1036,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
    bufp->fullBit(oldp+1037,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
    bufp->fullBit(oldp+1038,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
    bufp->fullBit(oldp+1039,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
    bufp->fullBit(oldp+1040,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
    bufp->fullBit(oldp+1041,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
    bufp->fullBit(oldp+1042,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
    bufp->fullCData(oldp+1043,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+1044,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+1045,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+1046,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
    bufp->fullBit(oldp+1047,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
    bufp->fullCData(oldp+1048,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                       + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                      - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
    bufp->fullBit(oldp+1049,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+1050,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullCData(oldp+1052,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+1053,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+1054,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    bufp->fullBit(oldp+1055,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullWData(oldp+1056,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
    bufp->fullWData(oldp+1060,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
    bufp->fullWData(oldp+1064,(__Vtemp_h96d8aca3__0),128);
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
    bufp->fullWData(oldp+1068,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+1072,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+1073,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullBit(oldp+1074,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+1075,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+1077,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+1078,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                               >> 3U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                 : (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+1080,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+1081,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                               >> 3U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                 : (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+1083,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+1084,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                 >> 4U)))),6);
    bufp->fullBit(oldp+1085,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+1086,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+1088,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+1090,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+1091,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
    bufp->fullBit(oldp+1092,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
    bufp->fullQData(oldp+1093,((1ULL << (0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                          >> 4U))))),64);
    bufp->fullBit(oldp+1095,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+1096,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+1097,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+1098,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+1099,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+1100,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                              & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 0x1fU)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
    bufp->fullBit(oldp+1101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullQData(oldp+1102,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                >> 0xaU)),54);
    bufp->fullCData(oldp+1104,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 4U)))),6);
    bufp->fullCData(oldp+1105,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+1106,((0x3fffffffffffffULL 
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
    bufp->fullQData(oldp+1108,((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+1110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
    bufp->fullBit(oldp+1111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+1112,((0xfffffffffffffff0ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
    bufp->fullQData(oldp+1114,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU)),54);
    bufp->fullCData(oldp+1116,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+1117,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullBit(oldp+1119,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
    bufp->fullQData(oldp+1120,((1ULL << (0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                          >> 4U))))),64);
    bufp->fullQData(oldp+1122,((~ (1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U)))))),64);
    bufp->fullCData(oldp+1124,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
    bufp->fullWData(oldp+1125,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
    bufp->fullWData(oldp+1129,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
    bufp->fullWData(oldp+1133,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
    bufp->fullWData(oldp+1137,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
    bufp->fullWData(oldp+1141,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
    bufp->fullWData(oldp+1145,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
    bufp->fullWData(oldp+1149,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
    bufp->fullWData(oldp+1153,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
    bufp->fullWData(oldp+1157,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
    bufp->fullWData(oldp+1161,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
    bufp->fullWData(oldp+1165,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
    bufp->fullWData(oldp+1169,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
    bufp->fullWData(oldp+1173,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
    bufp->fullWData(oldp+1177,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
    bufp->fullWData(oldp+1181,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
    bufp->fullWData(oldp+1185,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
    bufp->fullWData(oldp+1189,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
    bufp->fullWData(oldp+1193,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
    bufp->fullWData(oldp+1197,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
    bufp->fullWData(oldp+1201,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
    bufp->fullWData(oldp+1205,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
    bufp->fullWData(oldp+1209,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
    bufp->fullWData(oldp+1213,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
    bufp->fullWData(oldp+1217,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
    bufp->fullWData(oldp+1221,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
    bufp->fullWData(oldp+1225,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
    bufp->fullWData(oldp+1229,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
    bufp->fullWData(oldp+1233,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
    bufp->fullWData(oldp+1237,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
    bufp->fullWData(oldp+1241,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
    bufp->fullWData(oldp+1245,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
    bufp->fullWData(oldp+1249,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
    bufp->fullWData(oldp+1253,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
    bufp->fullWData(oldp+1257,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
    bufp->fullWData(oldp+1261,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
    bufp->fullWData(oldp+1265,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
    bufp->fullWData(oldp+1269,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
    bufp->fullWData(oldp+1273,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
    bufp->fullWData(oldp+1277,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
    bufp->fullWData(oldp+1281,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
    bufp->fullWData(oldp+1285,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
    bufp->fullWData(oldp+1289,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
    bufp->fullWData(oldp+1293,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
    bufp->fullWData(oldp+1297,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
    bufp->fullWData(oldp+1301,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
    bufp->fullWData(oldp+1305,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
    bufp->fullWData(oldp+1309,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
    bufp->fullWData(oldp+1313,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
    bufp->fullWData(oldp+1317,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
    bufp->fullWData(oldp+1321,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
    bufp->fullWData(oldp+1325,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
    bufp->fullWData(oldp+1329,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
    bufp->fullWData(oldp+1333,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
    bufp->fullWData(oldp+1337,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
    bufp->fullWData(oldp+1341,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
    bufp->fullWData(oldp+1345,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
    bufp->fullWData(oldp+1349,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
    bufp->fullWData(oldp+1353,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
    bufp->fullWData(oldp+1357,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
    bufp->fullWData(oldp+1361,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
    bufp->fullWData(oldp+1365,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
    bufp->fullWData(oldp+1369,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
    bufp->fullWData(oldp+1373,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
    bufp->fullWData(oldp+1377,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
    bufp->fullWData(oldp+1381,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
    bufp->fullWData(oldp+1385,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
    bufp->fullWData(oldp+1389,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
    bufp->fullWData(oldp+1393,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
    bufp->fullWData(oldp+1397,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
    bufp->fullWData(oldp+1401,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
    bufp->fullWData(oldp+1405,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
    bufp->fullWData(oldp+1409,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
    bufp->fullWData(oldp+1413,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
    bufp->fullWData(oldp+1417,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
    bufp->fullWData(oldp+1421,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
    bufp->fullWData(oldp+1425,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
    bufp->fullWData(oldp+1429,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
    bufp->fullWData(oldp+1433,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
    bufp->fullWData(oldp+1437,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
    bufp->fullWData(oldp+1441,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
    bufp->fullWData(oldp+1445,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
    bufp->fullWData(oldp+1449,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
    bufp->fullWData(oldp+1453,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
    bufp->fullWData(oldp+1457,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
    bufp->fullWData(oldp+1461,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
    bufp->fullWData(oldp+1465,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
    bufp->fullWData(oldp+1469,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
    bufp->fullWData(oldp+1473,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
    bufp->fullWData(oldp+1477,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
    bufp->fullWData(oldp+1481,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
    bufp->fullWData(oldp+1485,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
    bufp->fullWData(oldp+1489,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
    bufp->fullWData(oldp+1493,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
    bufp->fullWData(oldp+1497,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
    bufp->fullWData(oldp+1501,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
    bufp->fullWData(oldp+1505,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
    bufp->fullWData(oldp+1509,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
    bufp->fullWData(oldp+1513,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
    bufp->fullWData(oldp+1517,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
    bufp->fullWData(oldp+1521,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
    bufp->fullWData(oldp+1525,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
    bufp->fullWData(oldp+1529,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
    bufp->fullWData(oldp+1533,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
    bufp->fullWData(oldp+1537,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
    bufp->fullWData(oldp+1541,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
    bufp->fullWData(oldp+1545,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
    bufp->fullWData(oldp+1549,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
    bufp->fullWData(oldp+1553,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
    bufp->fullWData(oldp+1557,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
    bufp->fullWData(oldp+1561,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
    bufp->fullWData(oldp+1565,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
    bufp->fullWData(oldp+1569,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
    bufp->fullWData(oldp+1573,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
    bufp->fullWData(oldp+1577,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
    bufp->fullWData(oldp+1581,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
    bufp->fullWData(oldp+1585,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
    bufp->fullWData(oldp+1589,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
    bufp->fullWData(oldp+1593,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
    bufp->fullWData(oldp+1597,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
    bufp->fullWData(oldp+1601,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
    bufp->fullWData(oldp+1605,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
    bufp->fullWData(oldp+1609,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
    bufp->fullWData(oldp+1613,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
    bufp->fullWData(oldp+1617,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
    bufp->fullWData(oldp+1621,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
    bufp->fullWData(oldp+1625,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
    bufp->fullWData(oldp+1629,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
    bufp->fullWData(oldp+1633,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
    bufp->fullWData(oldp+1637,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
    bufp->fullWData(oldp+1641,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
    bufp->fullWData(oldp+1645,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
    bufp->fullWData(oldp+1649,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
    bufp->fullWData(oldp+1653,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
    bufp->fullWData(oldp+1657,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
    bufp->fullWData(oldp+1661,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
    bufp->fullWData(oldp+1665,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
    bufp->fullWData(oldp+1669,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
    bufp->fullWData(oldp+1673,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
    bufp->fullWData(oldp+1677,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
    bufp->fullWData(oldp+1681,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
    bufp->fullWData(oldp+1685,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
    bufp->fullWData(oldp+1689,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
    bufp->fullWData(oldp+1693,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
    bufp->fullWData(oldp+1697,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
    bufp->fullWData(oldp+1701,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
    bufp->fullWData(oldp+1705,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
    bufp->fullWData(oldp+1709,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
    bufp->fullWData(oldp+1713,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
    bufp->fullWData(oldp+1717,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
    bufp->fullWData(oldp+1721,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
    bufp->fullWData(oldp+1725,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
    bufp->fullWData(oldp+1729,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
    bufp->fullWData(oldp+1733,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
    bufp->fullWData(oldp+1737,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
    bufp->fullWData(oldp+1741,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
    bufp->fullWData(oldp+1745,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
    bufp->fullWData(oldp+1749,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
    bufp->fullWData(oldp+1753,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
    bufp->fullWData(oldp+1757,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
    bufp->fullWData(oldp+1761,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
    bufp->fullWData(oldp+1765,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
    bufp->fullWData(oldp+1769,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
    bufp->fullWData(oldp+1773,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
    bufp->fullWData(oldp+1777,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
    bufp->fullWData(oldp+1781,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
    bufp->fullWData(oldp+1785,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
    bufp->fullWData(oldp+1789,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
    bufp->fullWData(oldp+1793,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
    bufp->fullWData(oldp+1797,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
    bufp->fullWData(oldp+1801,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
    bufp->fullWData(oldp+1805,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
    bufp->fullWData(oldp+1809,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
    bufp->fullWData(oldp+1813,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
    bufp->fullWData(oldp+1817,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
    bufp->fullWData(oldp+1821,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
    bufp->fullWData(oldp+1825,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
    bufp->fullWData(oldp+1829,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
    bufp->fullWData(oldp+1833,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
    bufp->fullWData(oldp+1837,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
    bufp->fullWData(oldp+1841,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
    bufp->fullWData(oldp+1845,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
    bufp->fullWData(oldp+1849,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
    bufp->fullWData(oldp+1853,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
    bufp->fullWData(oldp+1857,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
    bufp->fullWData(oldp+1861,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
    bufp->fullWData(oldp+1865,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
    bufp->fullWData(oldp+1869,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
    bufp->fullWData(oldp+1873,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
    bufp->fullWData(oldp+1877,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
    bufp->fullWData(oldp+1881,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
    bufp->fullWData(oldp+1885,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
    bufp->fullWData(oldp+1889,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
    bufp->fullWData(oldp+1893,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
    bufp->fullWData(oldp+1897,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
    bufp->fullWData(oldp+1901,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
    bufp->fullWData(oldp+1905,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
    bufp->fullWData(oldp+1909,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
    bufp->fullWData(oldp+1913,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
    bufp->fullWData(oldp+1917,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
    bufp->fullWData(oldp+1921,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
    bufp->fullWData(oldp+1925,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
    bufp->fullWData(oldp+1929,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
    bufp->fullWData(oldp+1933,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
    bufp->fullWData(oldp+1937,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
    bufp->fullWData(oldp+1941,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
    bufp->fullWData(oldp+1945,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
    bufp->fullWData(oldp+1949,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
    bufp->fullWData(oldp+1953,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
    bufp->fullWData(oldp+1957,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
    bufp->fullWData(oldp+1961,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
    bufp->fullWData(oldp+1965,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
    bufp->fullWData(oldp+1969,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
    bufp->fullWData(oldp+1973,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
    bufp->fullWData(oldp+1977,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
    bufp->fullWData(oldp+1981,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
    bufp->fullWData(oldp+1985,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
    bufp->fullWData(oldp+1989,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
    bufp->fullWData(oldp+1993,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
    bufp->fullWData(oldp+1997,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
    bufp->fullWData(oldp+2001,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
    bufp->fullWData(oldp+2005,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
    bufp->fullWData(oldp+2009,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
    bufp->fullWData(oldp+2013,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
    bufp->fullWData(oldp+2017,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
    bufp->fullWData(oldp+2021,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
    bufp->fullWData(oldp+2025,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
    bufp->fullWData(oldp+2029,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
    bufp->fullWData(oldp+2033,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
    bufp->fullWData(oldp+2037,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
    bufp->fullWData(oldp+2041,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
    bufp->fullWData(oldp+2045,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
    bufp->fullWData(oldp+2049,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
    bufp->fullWData(oldp+2053,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
    bufp->fullWData(oldp+2057,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
    bufp->fullWData(oldp+2061,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
    bufp->fullWData(oldp+2065,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
    bufp->fullWData(oldp+2069,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
    bufp->fullWData(oldp+2073,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
    bufp->fullWData(oldp+2077,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
    bufp->fullWData(oldp+2081,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
    bufp->fullWData(oldp+2085,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
    bufp->fullWData(oldp+2089,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
    bufp->fullWData(oldp+2093,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
    bufp->fullWData(oldp+2097,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
    bufp->fullWData(oldp+2101,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
    bufp->fullWData(oldp+2105,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
    bufp->fullWData(oldp+2109,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
    bufp->fullWData(oldp+2113,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
    bufp->fullWData(oldp+2117,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
    bufp->fullWData(oldp+2121,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
    bufp->fullWData(oldp+2125,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
    bufp->fullWData(oldp+2129,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
    bufp->fullWData(oldp+2133,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
    bufp->fullWData(oldp+2137,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
    bufp->fullWData(oldp+2141,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
    bufp->fullWData(oldp+2145,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
    bufp->fullWData(oldp+2149,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
    bufp->fullWData(oldp+2153,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
    bufp->fullWData(oldp+2157,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
    bufp->fullWData(oldp+2161,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
    bufp->fullWData(oldp+2165,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
    bufp->fullWData(oldp+2169,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
    bufp->fullWData(oldp+2173,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
    bufp->fullWData(oldp+2177,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
    bufp->fullWData(oldp+2181,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
    bufp->fullWData(oldp+2185,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
    bufp->fullWData(oldp+2189,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
    bufp->fullWData(oldp+2193,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
    bufp->fullWData(oldp+2197,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
    bufp->fullWData(oldp+2201,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
    bufp->fullWData(oldp+2205,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
    bufp->fullWData(oldp+2209,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
    bufp->fullWData(oldp+2213,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
    bufp->fullWData(oldp+2217,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
    bufp->fullWData(oldp+2221,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
    bufp->fullWData(oldp+2225,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
    bufp->fullWData(oldp+2229,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
    bufp->fullWData(oldp+2233,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
    bufp->fullWData(oldp+2237,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
    bufp->fullWData(oldp+2241,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
    bufp->fullWData(oldp+2245,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
    bufp->fullWData(oldp+2249,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
    bufp->fullWData(oldp+2253,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
    bufp->fullWData(oldp+2257,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
    bufp->fullWData(oldp+2261,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
    bufp->fullWData(oldp+2265,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
    bufp->fullWData(oldp+2269,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
    bufp->fullWData(oldp+2273,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
    bufp->fullWData(oldp+2277,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
    bufp->fullWData(oldp+2281,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
    bufp->fullWData(oldp+2285,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
    bufp->fullWData(oldp+2289,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
    bufp->fullWData(oldp+2293,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
    bufp->fullWData(oldp+2297,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
    bufp->fullWData(oldp+2301,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
    bufp->fullWData(oldp+2305,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
    bufp->fullWData(oldp+2309,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
    bufp->fullWData(oldp+2313,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
    bufp->fullWData(oldp+2317,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
    bufp->fullWData(oldp+2321,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
    bufp->fullWData(oldp+2325,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
    bufp->fullWData(oldp+2329,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
    bufp->fullWData(oldp+2333,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
    bufp->fullWData(oldp+2337,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
    bufp->fullWData(oldp+2341,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
    bufp->fullWData(oldp+2345,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
    bufp->fullWData(oldp+2349,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
    bufp->fullWData(oldp+2353,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
    bufp->fullWData(oldp+2357,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
    bufp->fullWData(oldp+2361,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
    bufp->fullWData(oldp+2365,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
    bufp->fullWData(oldp+2369,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
    bufp->fullWData(oldp+2373,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
    bufp->fullWData(oldp+2377,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
    bufp->fullWData(oldp+2381,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
    bufp->fullWData(oldp+2385,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
    bufp->fullWData(oldp+2389,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
    bufp->fullWData(oldp+2393,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
    bufp->fullWData(oldp+2397,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
    bufp->fullWData(oldp+2401,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
    bufp->fullWData(oldp+2405,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
    bufp->fullWData(oldp+2409,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
    bufp->fullWData(oldp+2413,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
    bufp->fullWData(oldp+2417,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
    bufp->fullWData(oldp+2421,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
    bufp->fullWData(oldp+2425,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
    bufp->fullWData(oldp+2429,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
    bufp->fullWData(oldp+2433,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
    bufp->fullWData(oldp+2437,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
    bufp->fullWData(oldp+2441,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
    bufp->fullWData(oldp+2445,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
    bufp->fullWData(oldp+2449,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
    bufp->fullWData(oldp+2453,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
    bufp->fullWData(oldp+2457,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
    bufp->fullWData(oldp+2461,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
    bufp->fullWData(oldp+2465,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
    bufp->fullWData(oldp+2469,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
    bufp->fullWData(oldp+2473,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
    bufp->fullWData(oldp+2477,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
    bufp->fullWData(oldp+2481,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
    bufp->fullWData(oldp+2485,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
    bufp->fullWData(oldp+2489,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
    bufp->fullWData(oldp+2493,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
    bufp->fullWData(oldp+2497,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
    bufp->fullWData(oldp+2501,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
    bufp->fullWData(oldp+2505,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
    bufp->fullWData(oldp+2509,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
    bufp->fullWData(oldp+2513,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
    bufp->fullWData(oldp+2517,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
    bufp->fullWData(oldp+2521,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
    bufp->fullWData(oldp+2525,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
    bufp->fullWData(oldp+2529,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
    bufp->fullWData(oldp+2533,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
    bufp->fullWData(oldp+2537,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
    bufp->fullWData(oldp+2541,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
    bufp->fullWData(oldp+2545,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
    bufp->fullWData(oldp+2549,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
    bufp->fullWData(oldp+2553,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
    bufp->fullWData(oldp+2557,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
    bufp->fullWData(oldp+2561,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
    bufp->fullWData(oldp+2565,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
    bufp->fullWData(oldp+2569,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
    bufp->fullWData(oldp+2573,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
    bufp->fullWData(oldp+2577,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
    bufp->fullWData(oldp+2581,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
    bufp->fullWData(oldp+2585,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
    bufp->fullWData(oldp+2589,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
    bufp->fullWData(oldp+2593,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
    bufp->fullWData(oldp+2597,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
    bufp->fullWData(oldp+2601,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
    bufp->fullWData(oldp+2605,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
    bufp->fullWData(oldp+2609,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
    bufp->fullWData(oldp+2613,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
    bufp->fullWData(oldp+2617,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
    bufp->fullWData(oldp+2621,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
    bufp->fullWData(oldp+2625,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
    bufp->fullWData(oldp+2629,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
    bufp->fullWData(oldp+2633,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
    bufp->fullWData(oldp+2637,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
    bufp->fullWData(oldp+2641,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
    bufp->fullWData(oldp+2645,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
    bufp->fullWData(oldp+2649,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
    bufp->fullWData(oldp+2653,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
    bufp->fullWData(oldp+2657,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
    bufp->fullWData(oldp+2661,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
    bufp->fullWData(oldp+2665,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
    bufp->fullWData(oldp+2669,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
    bufp->fullWData(oldp+2673,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
    bufp->fullWData(oldp+2677,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
    bufp->fullWData(oldp+2681,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
    bufp->fullWData(oldp+2685,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
    bufp->fullWData(oldp+2689,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
    bufp->fullWData(oldp+2693,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
    bufp->fullWData(oldp+2697,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
    bufp->fullWData(oldp+2701,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
    bufp->fullWData(oldp+2705,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
    bufp->fullWData(oldp+2709,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
    bufp->fullWData(oldp+2713,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
    bufp->fullWData(oldp+2717,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
    bufp->fullWData(oldp+2721,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
    bufp->fullWData(oldp+2725,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
    bufp->fullWData(oldp+2729,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
    bufp->fullWData(oldp+2733,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
    bufp->fullWData(oldp+2737,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
    bufp->fullWData(oldp+2741,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
    bufp->fullWData(oldp+2745,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
    bufp->fullWData(oldp+2749,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
    bufp->fullWData(oldp+2753,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
    bufp->fullWData(oldp+2757,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
    bufp->fullWData(oldp+2761,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
    bufp->fullWData(oldp+2765,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
    bufp->fullWData(oldp+2769,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
    bufp->fullWData(oldp+2773,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
    bufp->fullWData(oldp+2777,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
    bufp->fullWData(oldp+2781,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
    bufp->fullWData(oldp+2785,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
    bufp->fullWData(oldp+2789,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
    bufp->fullWData(oldp+2793,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
    bufp->fullWData(oldp+2797,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
    bufp->fullWData(oldp+2801,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
    bufp->fullWData(oldp+2805,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
    bufp->fullWData(oldp+2809,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
    bufp->fullWData(oldp+2813,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
    bufp->fullWData(oldp+2817,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
    bufp->fullWData(oldp+2821,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
    bufp->fullWData(oldp+2825,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
    bufp->fullWData(oldp+2829,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
    bufp->fullWData(oldp+2833,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
    bufp->fullWData(oldp+2837,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
    bufp->fullWData(oldp+2841,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
    bufp->fullWData(oldp+2845,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
    bufp->fullWData(oldp+2849,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
    bufp->fullWData(oldp+2853,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
    bufp->fullWData(oldp+2857,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
    bufp->fullWData(oldp+2861,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
    bufp->fullWData(oldp+2865,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
    bufp->fullWData(oldp+2869,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
    bufp->fullWData(oldp+2873,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
    bufp->fullWData(oldp+2877,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
    bufp->fullWData(oldp+2881,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
    bufp->fullWData(oldp+2885,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
    bufp->fullWData(oldp+2889,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
    bufp->fullWData(oldp+2893,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
    bufp->fullWData(oldp+2897,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
    bufp->fullWData(oldp+2901,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
    bufp->fullWData(oldp+2905,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
    bufp->fullWData(oldp+2909,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
    bufp->fullWData(oldp+2913,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
    bufp->fullWData(oldp+2917,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
    bufp->fullWData(oldp+2921,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
    bufp->fullWData(oldp+2925,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
    bufp->fullWData(oldp+2929,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
    bufp->fullWData(oldp+2933,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
    bufp->fullWData(oldp+2937,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
    bufp->fullWData(oldp+2941,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
    bufp->fullWData(oldp+2945,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
    bufp->fullWData(oldp+2949,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
    bufp->fullWData(oldp+2953,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
    bufp->fullWData(oldp+2957,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
    bufp->fullWData(oldp+2961,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
    bufp->fullWData(oldp+2965,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
    bufp->fullWData(oldp+2969,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
    bufp->fullWData(oldp+2973,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
    bufp->fullWData(oldp+2977,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
    bufp->fullWData(oldp+2981,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
    bufp->fullWData(oldp+2985,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
    bufp->fullWData(oldp+2989,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
    bufp->fullWData(oldp+2993,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
    bufp->fullWData(oldp+2997,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
    bufp->fullWData(oldp+3001,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
    bufp->fullWData(oldp+3005,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
    bufp->fullWData(oldp+3009,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
    bufp->fullWData(oldp+3013,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
    bufp->fullWData(oldp+3017,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
    bufp->fullWData(oldp+3021,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
    bufp->fullWData(oldp+3025,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
    bufp->fullWData(oldp+3029,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
    bufp->fullWData(oldp+3033,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
    bufp->fullWData(oldp+3037,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
    bufp->fullWData(oldp+3041,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
    bufp->fullWData(oldp+3045,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
    bufp->fullWData(oldp+3049,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
    bufp->fullWData(oldp+3053,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
    bufp->fullWData(oldp+3057,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
    bufp->fullWData(oldp+3061,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
    bufp->fullWData(oldp+3065,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
    bufp->fullWData(oldp+3069,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
    bufp->fullWData(oldp+3073,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
    bufp->fullWData(oldp+3077,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
    bufp->fullWData(oldp+3081,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
    bufp->fullWData(oldp+3085,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
    bufp->fullWData(oldp+3089,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
    bufp->fullWData(oldp+3093,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
    bufp->fullWData(oldp+3097,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
    bufp->fullWData(oldp+3101,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
    bufp->fullWData(oldp+3105,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
    bufp->fullWData(oldp+3109,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
    bufp->fullWData(oldp+3113,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
    bufp->fullWData(oldp+3117,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
    bufp->fullWData(oldp+3121,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
    bufp->fullWData(oldp+3125,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
    bufp->fullWData(oldp+3129,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
    bufp->fullWData(oldp+3133,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
    bufp->fullWData(oldp+3137,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
    bufp->fullWData(oldp+3141,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
    bufp->fullWData(oldp+3145,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
    bufp->fullWData(oldp+3149,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
    bufp->fullWData(oldp+3153,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
    bufp->fullWData(oldp+3157,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
    bufp->fullWData(oldp+3161,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
    bufp->fullWData(oldp+3165,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
    bufp->fullWData(oldp+3169,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
    bufp->fullBit(oldp+3173,(vlSelf->clock));
    bufp->fullBit(oldp+3174,(vlSelf->reset));
    bufp->fullQData(oldp+3175,(vlSelf->io_difftest_reg_0),64);
    bufp->fullQData(oldp+3177,(vlSelf->io_difftest_reg_1),64);
    bufp->fullQData(oldp+3179,(vlSelf->io_difftest_reg_2),64);
    bufp->fullQData(oldp+3181,(vlSelf->io_difftest_reg_3),64);
    bufp->fullQData(oldp+3183,(vlSelf->io_difftest_reg_4),64);
    bufp->fullQData(oldp+3185,(vlSelf->io_difftest_reg_5),64);
    bufp->fullQData(oldp+3187,(vlSelf->io_difftest_reg_6),64);
    bufp->fullQData(oldp+3189,(vlSelf->io_difftest_reg_7),64);
    bufp->fullQData(oldp+3191,(vlSelf->io_difftest_reg_8),64);
    bufp->fullQData(oldp+3193,(vlSelf->io_difftest_reg_9),64);
    bufp->fullQData(oldp+3195,(vlSelf->io_difftest_reg_10),64);
    bufp->fullQData(oldp+3197,(vlSelf->io_difftest_reg_11),64);
    bufp->fullQData(oldp+3199,(vlSelf->io_difftest_reg_12),64);
    bufp->fullQData(oldp+3201,(vlSelf->io_difftest_reg_13),64);
    bufp->fullQData(oldp+3203,(vlSelf->io_difftest_reg_14),64);
    bufp->fullQData(oldp+3205,(vlSelf->io_difftest_reg_15),64);
    bufp->fullQData(oldp+3207,(vlSelf->io_difftest_reg_16),64);
    bufp->fullQData(oldp+3209,(vlSelf->io_difftest_reg_17),64);
    bufp->fullQData(oldp+3211,(vlSelf->io_difftest_reg_18),64);
    bufp->fullQData(oldp+3213,(vlSelf->io_difftest_reg_19),64);
    bufp->fullQData(oldp+3215,(vlSelf->io_difftest_reg_20),64);
    bufp->fullQData(oldp+3217,(vlSelf->io_difftest_reg_21),64);
    bufp->fullQData(oldp+3219,(vlSelf->io_difftest_reg_22),64);
    bufp->fullQData(oldp+3221,(vlSelf->io_difftest_reg_23),64);
    bufp->fullQData(oldp+3223,(vlSelf->io_difftest_reg_24),64);
    bufp->fullQData(oldp+3225,(vlSelf->io_difftest_reg_25),64);
    bufp->fullQData(oldp+3227,(vlSelf->io_difftest_reg_26),64);
    bufp->fullQData(oldp+3229,(vlSelf->io_difftest_reg_27),64);
    bufp->fullQData(oldp+3231,(vlSelf->io_difftest_reg_28),64);
    bufp->fullQData(oldp+3233,(vlSelf->io_difftest_reg_29),64);
    bufp->fullQData(oldp+3235,(vlSelf->io_difftest_reg_30),64);
    bufp->fullQData(oldp+3237,(vlSelf->io_difftest_reg_31),64);
    bufp->fullQData(oldp+3239,(vlSelf->io_difftest_pc),64);
    bufp->fullIData(oldp+3241,(vlSelf->io_difftest_inst),32);
    bufp->fullBit(oldp+3242,(vlSelf->io_difftest_commit));
    bufp->fullQData(oldp+3243,(vlSelf->io_inst_counter),64);
    bufp->fullBit(oldp+3245,(vlSelf->io_difftest_irq));
    bufp->fullQData(oldp+3246,(vlSelf->io_difftest_mstatus),64);
    bufp->fullQData(oldp+3248,(vlSelf->io_difftest_mcause),64);
    bufp->fullQData(oldp+3250,(vlSelf->io_difftest_mepc),64);
    bufp->fullQData(oldp+3252,(vlSelf->io_difftest_mtvec),64);
    bufp->fullBit(oldp+3254,(vlSelf->io_difftest_peripheral));
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+3255,(__Vtemp_hd56bd579__0),128);
    bufp->fullBit(oldp+3259,(1U));
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+3260,(__Vtemp_hd09821c2__0),128);
}
