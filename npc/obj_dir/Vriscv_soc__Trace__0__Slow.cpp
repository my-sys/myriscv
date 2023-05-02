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
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declQuad(c+3193,"io_difftest_reg_0", false,-1, 63,0);
    tracep->declQuad(c+3195,"io_difftest_reg_1", false,-1, 63,0);
    tracep->declQuad(c+3197,"io_difftest_reg_2", false,-1, 63,0);
    tracep->declQuad(c+3199,"io_difftest_reg_3", false,-1, 63,0);
    tracep->declQuad(c+3201,"io_difftest_reg_4", false,-1, 63,0);
    tracep->declQuad(c+3203,"io_difftest_reg_5", false,-1, 63,0);
    tracep->declQuad(c+3205,"io_difftest_reg_6", false,-1, 63,0);
    tracep->declQuad(c+3207,"io_difftest_reg_7", false,-1, 63,0);
    tracep->declQuad(c+3209,"io_difftest_reg_8", false,-1, 63,0);
    tracep->declQuad(c+3211,"io_difftest_reg_9", false,-1, 63,0);
    tracep->declQuad(c+3213,"io_difftest_reg_10", false,-1, 63,0);
    tracep->declQuad(c+3215,"io_difftest_reg_11", false,-1, 63,0);
    tracep->declQuad(c+3217,"io_difftest_reg_12", false,-1, 63,0);
    tracep->declQuad(c+3219,"io_difftest_reg_13", false,-1, 63,0);
    tracep->declQuad(c+3221,"io_difftest_reg_14", false,-1, 63,0);
    tracep->declQuad(c+3223,"io_difftest_reg_15", false,-1, 63,0);
    tracep->declQuad(c+3225,"io_difftest_reg_16", false,-1, 63,0);
    tracep->declQuad(c+3227,"io_difftest_reg_17", false,-1, 63,0);
    tracep->declQuad(c+3229,"io_difftest_reg_18", false,-1, 63,0);
    tracep->declQuad(c+3231,"io_difftest_reg_19", false,-1, 63,0);
    tracep->declQuad(c+3233,"io_difftest_reg_20", false,-1, 63,0);
    tracep->declQuad(c+3235,"io_difftest_reg_21", false,-1, 63,0);
    tracep->declQuad(c+3237,"io_difftest_reg_22", false,-1, 63,0);
    tracep->declQuad(c+3239,"io_difftest_reg_23", false,-1, 63,0);
    tracep->declQuad(c+3241,"io_difftest_reg_24", false,-1, 63,0);
    tracep->declQuad(c+3243,"io_difftest_reg_25", false,-1, 63,0);
    tracep->declQuad(c+3245,"io_difftest_reg_26", false,-1, 63,0);
    tracep->declQuad(c+3247,"io_difftest_reg_27", false,-1, 63,0);
    tracep->declQuad(c+3249,"io_difftest_reg_28", false,-1, 63,0);
    tracep->declQuad(c+3251,"io_difftest_reg_29", false,-1, 63,0);
    tracep->declQuad(c+3253,"io_difftest_reg_30", false,-1, 63,0);
    tracep->declQuad(c+3255,"io_difftest_reg_31", false,-1, 63,0);
    tracep->declQuad(c+3257,"io_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3259,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+3260,"io_difftest_commit", false,-1);
    tracep->declQuad(c+3261,"io_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3263,"io_difftest_irq", false,-1);
    tracep->declQuad(c+3264,"io_difftest_mstatus", false,-1, 63,0);
    tracep->declQuad(c+3266,"io_difftest_mcause", false,-1, 63,0);
    tracep->declQuad(c+3268,"io_difftest_mepc", false,-1, 63,0);
    tracep->declQuad(c+3270,"io_difftest_mtvec", false,-1, 63,0);
    tracep->declBit(c+3272,"io_difftest_peripheral", false,-1);
    tracep->pushNamePrefix("riscv_soc ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declQuad(c+3193,"io_difftest_reg_0", false,-1, 63,0);
    tracep->declQuad(c+3195,"io_difftest_reg_1", false,-1, 63,0);
    tracep->declQuad(c+3197,"io_difftest_reg_2", false,-1, 63,0);
    tracep->declQuad(c+3199,"io_difftest_reg_3", false,-1, 63,0);
    tracep->declQuad(c+3201,"io_difftest_reg_4", false,-1, 63,0);
    tracep->declQuad(c+3203,"io_difftest_reg_5", false,-1, 63,0);
    tracep->declQuad(c+3205,"io_difftest_reg_6", false,-1, 63,0);
    tracep->declQuad(c+3207,"io_difftest_reg_7", false,-1, 63,0);
    tracep->declQuad(c+3209,"io_difftest_reg_8", false,-1, 63,0);
    tracep->declQuad(c+3211,"io_difftest_reg_9", false,-1, 63,0);
    tracep->declQuad(c+3213,"io_difftest_reg_10", false,-1, 63,0);
    tracep->declQuad(c+3215,"io_difftest_reg_11", false,-1, 63,0);
    tracep->declQuad(c+3217,"io_difftest_reg_12", false,-1, 63,0);
    tracep->declQuad(c+3219,"io_difftest_reg_13", false,-1, 63,0);
    tracep->declQuad(c+3221,"io_difftest_reg_14", false,-1, 63,0);
    tracep->declQuad(c+3223,"io_difftest_reg_15", false,-1, 63,0);
    tracep->declQuad(c+3225,"io_difftest_reg_16", false,-1, 63,0);
    tracep->declQuad(c+3227,"io_difftest_reg_17", false,-1, 63,0);
    tracep->declQuad(c+3229,"io_difftest_reg_18", false,-1, 63,0);
    tracep->declQuad(c+3231,"io_difftest_reg_19", false,-1, 63,0);
    tracep->declQuad(c+3233,"io_difftest_reg_20", false,-1, 63,0);
    tracep->declQuad(c+3235,"io_difftest_reg_21", false,-1, 63,0);
    tracep->declQuad(c+3237,"io_difftest_reg_22", false,-1, 63,0);
    tracep->declQuad(c+3239,"io_difftest_reg_23", false,-1, 63,0);
    tracep->declQuad(c+3241,"io_difftest_reg_24", false,-1, 63,0);
    tracep->declQuad(c+3243,"io_difftest_reg_25", false,-1, 63,0);
    tracep->declQuad(c+3245,"io_difftest_reg_26", false,-1, 63,0);
    tracep->declQuad(c+3247,"io_difftest_reg_27", false,-1, 63,0);
    tracep->declQuad(c+3249,"io_difftest_reg_28", false,-1, 63,0);
    tracep->declQuad(c+3251,"io_difftest_reg_29", false,-1, 63,0);
    tracep->declQuad(c+3253,"io_difftest_reg_30", false,-1, 63,0);
    tracep->declQuad(c+3255,"io_difftest_reg_31", false,-1, 63,0);
    tracep->declQuad(c+3257,"io_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3259,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+3260,"io_difftest_commit", false,-1);
    tracep->declQuad(c+3261,"io_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3263,"io_difftest_irq", false,-1);
    tracep->declQuad(c+3264,"io_difftest_mstatus", false,-1, 63,0);
    tracep->declQuad(c+3266,"io_difftest_mcause", false,-1, 63,0);
    tracep->declQuad(c+3268,"io_difftest_mepc", false,-1, 63,0);
    tracep->declQuad(c+3270,"io_difftest_mtvec", false,-1, 63,0);
    tracep->declBit(c+3272,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+3191,"core_clock", false,-1);
    tracep->declBit(c+3192,"core_reset", false,-1);
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
    tracep->declBit(c+3263,"core_difftest_irq", false,-1);
    tracep->declBit(c+3272,"core_difftest_peripheral", false,-1);
    tracep->declBit(c+3260,"core_difftest_commit", false,-1);
    tracep->declQuad(c+3257,"core_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3259,"core_difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+3193,"core__WIRE_0", false,-1, 63,0);
    tracep->declQuad(c+3195,"core__WIRE_1", false,-1, 63,0);
    tracep->declQuad(c+3197,"core__WIRE_2", false,-1, 63,0);
    tracep->declQuad(c+3199,"core__WIRE_3", false,-1, 63,0);
    tracep->declQuad(c+3201,"core__WIRE_4", false,-1, 63,0);
    tracep->declQuad(c+3203,"core__WIRE_5", false,-1, 63,0);
    tracep->declQuad(c+3205,"core__WIRE_6", false,-1, 63,0);
    tracep->declQuad(c+3207,"core__WIRE_7", false,-1, 63,0);
    tracep->declQuad(c+3209,"core__WIRE_8", false,-1, 63,0);
    tracep->declQuad(c+3211,"core__WIRE_9", false,-1, 63,0);
    tracep->declQuad(c+3213,"core__WIRE_10", false,-1, 63,0);
    tracep->declQuad(c+3215,"core__WIRE_11", false,-1, 63,0);
    tracep->declQuad(c+3217,"core__WIRE_12", false,-1, 63,0);
    tracep->declQuad(c+3219,"core__WIRE_13", false,-1, 63,0);
    tracep->declQuad(c+3221,"core__WIRE_14", false,-1, 63,0);
    tracep->declQuad(c+3223,"core__WIRE_15", false,-1, 63,0);
    tracep->declQuad(c+3225,"core__WIRE_16", false,-1, 63,0);
    tracep->declQuad(c+3227,"core__WIRE_17", false,-1, 63,0);
    tracep->declQuad(c+3229,"core__WIRE_18", false,-1, 63,0);
    tracep->declQuad(c+3231,"core__WIRE_19", false,-1, 63,0);
    tracep->declQuad(c+3233,"core__WIRE_20", false,-1, 63,0);
    tracep->declQuad(c+3235,"core__WIRE_21", false,-1, 63,0);
    tracep->declQuad(c+3237,"core__WIRE_22", false,-1, 63,0);
    tracep->declQuad(c+3239,"core__WIRE_23", false,-1, 63,0);
    tracep->declQuad(c+3241,"core__WIRE_24", false,-1, 63,0);
    tracep->declQuad(c+3243,"core__WIRE_25", false,-1, 63,0);
    tracep->declQuad(c+3245,"core__WIRE_26", false,-1, 63,0);
    tracep->declQuad(c+3247,"core__WIRE_27", false,-1, 63,0);
    tracep->declQuad(c+3249,"core__WIRE_28", false,-1, 63,0);
    tracep->declQuad(c+3251,"core__WIRE_29", false,-1, 63,0);
    tracep->declQuad(c+3253,"core__WIRE_30", false,-1, 63,0);
    tracep->declQuad(c+3255,"core__WIRE_31", false,-1, 63,0);
    tracep->declQuad(c+3261,"core_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3191,"axi_ram_clock", false,-1);
    tracep->declBit(c+3192,"axi_ram_reset", false,-1);
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
    tracep->declBit(c+3191,"sram0_clock", false,-1);
    tracep->declBit(c+3192,"sram0_reset", false,-1);
    tracep->declBus(c+21,"sram0_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram0_io_wen", false,-1);
    tracep->declArray(c+3273,"sram0_io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"sram0_io_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"sram0_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3191,"sram1_clock", false,-1);
    tracep->declBit(c+3192,"sram1_reset", false,-1);
    tracep->declBus(c+21,"sram1_io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"sram1_io_wen", false,-1);
    tracep->declArray(c+3273,"sram1_io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"sram1_io_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"sram1_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3191,"sram2_clock", false,-1);
    tracep->declBit(c+3192,"sram2_reset", false,-1);
    tracep->declBus(c+21,"sram2_io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"sram2_io_wen", false,-1);
    tracep->declArray(c+3273,"sram2_io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"sram2_io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"sram2_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3191,"sram3_clock", false,-1);
    tracep->declBit(c+3192,"sram3_reset", false,-1);
    tracep->declBus(c+21,"sram3_io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"sram3_io_wen", false,-1);
    tracep->declArray(c+3273,"sram3_io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"sram3_io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"sram3_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3191,"sram4_clock", false,-1);
    tracep->declBit(c+3192,"sram4_reset", false,-1);
    tracep->declBus(c+48,"sram4_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram4_io_wen", false,-1);
    tracep->declArray(c+50,"sram4_io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"sram4_io_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"sram4_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3191,"sram5_clock", false,-1);
    tracep->declBit(c+3192,"sram5_reset", false,-1);
    tracep->declBus(c+48,"sram5_io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"sram5_io_wen", false,-1);
    tracep->declArray(c+3273,"sram5_io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"sram5_io_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"sram5_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3191,"sram6_clock", false,-1);
    tracep->declBit(c+3192,"sram6_reset", false,-1);
    tracep->declBus(c+48,"sram6_io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"sram6_io_wen", false,-1);
    tracep->declArray(c+50,"sram6_io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"sram6_io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"sram6_io_rdata", false,-1, 127,0);
    tracep->declBit(c+3191,"sram7_clock", false,-1);
    tracep->declBit(c+3192,"sram7_reset", false,-1);
    tracep->declBus(c+48,"sram7_io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"sram7_io_wen", false,-1);
    tracep->declArray(c+3273,"sram7_io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"sram7_io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"sram7_io_rdata", false,-1, 127,0);
    tracep->declBus(c+3259,"DIFFTEST_INST", false,-1, 31,0);
    tracep->declQuad(c+79,"difftest_inst", false,-1, 63,0);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3191,"mem_clock", false,-1);
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
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declQuad(c+81,"raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"rdata", false,-1, 63,0);
    tracep->declBit(c+13,"rflag", false,-1);
    tracep->declQuad(c+83,"waddr", false,-1, 63,0);
    tracep->declQuad(c+7,"wdata", false,-1, 63,0);
    tracep->declQuad(c+85,"wmask", false,-1, 63,0);
    tracep->declBit(c+87,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3263,"difftest_irq", false,-1);
    tracep->declBit(c+3272,"difftest_peripheral", false,-1);
    tracep->declBit(c+3260,"difftest_commit", false,-1);
    tracep->declQuad(c+3257,"difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3259,"difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+3261,"inst_counter", false,-1, 63,0);
    tracep->declBit(c+3191,"i_cache_clock", false,-1);
    tracep->declBit(c+3192,"i_cache_reset", false,-1);
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
    tracep->declBit(c+3191,"d_cache_clock", false,-1);
    tracep->declBit(c+3192,"d_cache_reset", false,-1);
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
    tracep->declBit(c+3191,"cross_bar_clock", false,-1);
    tracep->declBit(c+3192,"cross_bar_reset", false,-1);
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
    tracep->declBit(c+3277,"cross_bar_io_AXI_Bus_b_ready", false,-1);
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
    tracep->declBit(c+3191,"fetch_clock", false,-1);
    tracep->declBit(c+3192,"fetch_reset", false,-1);
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
    tracep->declBit(c+3191,"execute_clock", false,-1);
    tracep->declBit(c+3192,"execute_reset", false,-1);
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
    tracep->declBit(c+3191,"decode_clock", false,-1);
    tracep->declBit(c+3192,"decode_reset", false,-1);
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
    tracep->declBit(c+3191,"commit_clock", false,-1);
    tracep->declBit(c+3192,"commit_reset", false,-1);
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
    tracep->declBit(c+3263,"commit_difftest_irq_0", false,-1);
    tracep->declBit(c+3272,"commit_difftest_peripheral_0", false,-1);
    tracep->declBit(c+3260,"commit_difftest_commit_0", false,-1);
    tracep->declQuad(c+3257,"commit_difftest_pc_0", false,-1, 63,0);
    tracep->declBus(c+3259,"commit_difftest_inst_0", false,-1, 31,0);
    tracep->declQuad(c+3193,"commit__WIRE_0_0", false,-1, 63,0);
    tracep->declQuad(c+3195,"commit__WIRE_0_1", false,-1, 63,0);
    tracep->declQuad(c+3197,"commit__WIRE_0_2", false,-1, 63,0);
    tracep->declQuad(c+3199,"commit__WIRE_0_3", false,-1, 63,0);
    tracep->declQuad(c+3201,"commit__WIRE_0_4", false,-1, 63,0);
    tracep->declQuad(c+3203,"commit__WIRE_0_5", false,-1, 63,0);
    tracep->declQuad(c+3205,"commit__WIRE_0_6", false,-1, 63,0);
    tracep->declQuad(c+3207,"commit__WIRE_0_7", false,-1, 63,0);
    tracep->declQuad(c+3209,"commit__WIRE_0_8", false,-1, 63,0);
    tracep->declQuad(c+3211,"commit__WIRE_0_9", false,-1, 63,0);
    tracep->declQuad(c+3213,"commit__WIRE_0_10", false,-1, 63,0);
    tracep->declQuad(c+3215,"commit__WIRE_0_11", false,-1, 63,0);
    tracep->declQuad(c+3217,"commit__WIRE_0_12", false,-1, 63,0);
    tracep->declQuad(c+3219,"commit__WIRE_0_13", false,-1, 63,0);
    tracep->declQuad(c+3221,"commit__WIRE_0_14", false,-1, 63,0);
    tracep->declQuad(c+3223,"commit__WIRE_0_15", false,-1, 63,0);
    tracep->declQuad(c+3225,"commit__WIRE_0_16", false,-1, 63,0);
    tracep->declQuad(c+3227,"commit__WIRE_0_17", false,-1, 63,0);
    tracep->declQuad(c+3229,"commit__WIRE_0_18", false,-1, 63,0);
    tracep->declQuad(c+3231,"commit__WIRE_0_19", false,-1, 63,0);
    tracep->declQuad(c+3233,"commit__WIRE_0_20", false,-1, 63,0);
    tracep->declQuad(c+3235,"commit__WIRE_0_21", false,-1, 63,0);
    tracep->declQuad(c+3237,"commit__WIRE_0_22", false,-1, 63,0);
    tracep->declQuad(c+3239,"commit__WIRE_0_23", false,-1, 63,0);
    tracep->declQuad(c+3241,"commit__WIRE_0_24", false,-1, 63,0);
    tracep->declQuad(c+3243,"commit__WIRE_0_25", false,-1, 63,0);
    tracep->declQuad(c+3245,"commit__WIRE_0_26", false,-1, 63,0);
    tracep->declQuad(c+3247,"commit__WIRE_0_27", false,-1, 63,0);
    tracep->declQuad(c+3249,"commit__WIRE_0_28", false,-1, 63,0);
    tracep->declQuad(c+3251,"commit__WIRE_0_29", false,-1, 63,0);
    tracep->declQuad(c+3253,"commit__WIRE_0_30", false,-1, 63,0);
    tracep->declQuad(c+3255,"commit__WIRE_0_31", false,-1, 63,0);
    tracep->declQuad(c+3261,"commit_inst_counter_0", false,-1, 63,0);
    tracep->declBit(c+3191,"clint_de_clock", false,-1);
    tracep->declBit(c+3192,"clint_de_reset", false,-1);
    tracep->declBit(c+151,"clint_de_io_valid", false,-1);
    tracep->declQuad(c+113,"clint_de_io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+117,"clint_de_io_bits_wdata", false,-1, 63,0);
    tracep->declQuad(c+152,"clint_de_io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+120,"clint_de_io_bits_is_w", false,-1);
    tracep->declBit(c+154,"clint_de_io_ready", false,-1);
    tracep->declBit(c+194,"clint_de_io_soft_irq", false,-1);
    tracep->declBit(c+193,"clint_de_io_time_irq", false,-1);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3263,"difftest_irq_0", false,-1);
    tracep->declBit(c+3272,"difftest_peripheral_0", false,-1);
    tracep->declBit(c+3260,"difftest_commit_0", false,-1);
    tracep->declQuad(c+3257,"difftest_pc_0", false,-1, 63,0);
    tracep->declBus(c+3259,"difftest_inst_0", false,-1, 31,0);
    tracep->declQuad(c+3261,"inst_counter_0", false,-1, 63,0);
    tracep->declBit(c+3191,"csr_reg_clock", false,-1);
    tracep->declBit(c+3192,"csr_reg_reset", false,-1);
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
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3277,"io_AXI_Bus_b_ready", false,-1);
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
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBus(c+406,"fun", false,-1, 2,0);
    tracep->declBus(c+407,"fun_exuType", false,-1, 4,0);
    tracep->declBus(c+408,"fun_op", false,-1, 2,0);
    tracep->declBit(c+409,"temp_system_is_pri", false,-1);
    tracep->declBit(c+410,"temp_system_is_imm", false,-1);
    tracep->declBit(c+411,"temp_system_rs1", false,-1);
    tracep->declBus(c+412,"temp_system_1", false,-1, 6,0);
    tracep->declBus(c+413,"temp_system_2", false,-1, 2,0);
    tracep->declBit(c+414,"temp_system_3", false,-1);
    tracep->declBit(c+415,"temp_system_4", false,-1);
    tracep->declBus(c+416,"temp_mem_itype", false,-1, 3,0);
    tracep->declBit(c+417,"temp_mem_dest", false,-1);
    tracep->declBit(c+417,"temp_op_is_imm", false,-1);
    tracep->declBit(c+418,"is_sr", false,-1);
    tracep->declBus(c+419,"temp_kk", false,-1, 5,0);
    tracep->declBus(c+420,"temp_op_exuType", false,-1, 5,0);
    tracep->declBus(c+421,"temp_op_itype", false,-1, 3,0);
    tracep->declBit(c+422,"temp_op_rs2", false,-1);
    tracep->declBus(c+423,"temp_op", false,-1, 1,0);
    tracep->declBus(c+424,"temp_jal_jalr_1", false,-1, 6,0);
    tracep->declBus(c+425,"temp_jal_jalr_2", false,-1, 3,0);
    tracep->declBit(c+426,"temp_jal_jalr_4", false,-1);
    tracep->declBus(c+427,"instType", false,-1, 3,0);
    tracep->declBit(c+428,"dest_is_reg", false,-1);
    tracep->declBit(c+429,"rs1_is_reg", false,-1);
    tracep->declBit(c+430,"rs2_is_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+431,"alu_exu_io_valid", false,-1);
    tracep->declBit(c+189,"alu_exu_io_is_pre", false,-1);
    tracep->declBit(c+432,"alu_exu_io_br_info_valid", false,-1);
    tracep->declBit(c+433,"alu_exu_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+434,"alu_exu_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+436,"alu_exu_io_br_info_taken", false,-1);
    tracep->declQuad(c+437,"alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"alu_exu_io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+175,"alu_exu_io_opType", false,-1, 2,0);
    tracep->declBus(c+176,"alu_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+439,"alu_exu_io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+441,"alu_exu_io_op_data2", false,-1, 63,0);
    tracep->declBus(c+183,"alu_exu_io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"alu_exu_io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+443,"alu_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+433,"alu_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+437,"alu_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+3191,"mem_exu_clock", false,-1);
    tracep->declBit(c+3192,"mem_exu_reset", false,-1);
    tracep->declBit(c+445,"mem_exu_io_valid", false,-1);
    tracep->declBus(c+176,"mem_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+439,"mem_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+441,"mem_exu_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"mem_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+446,"mem_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+448,"mem_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+449,"mem_exu_io_ready", false,-1);
    tracep->declBit(c+147,"mem_exu_io_bus_valid", false,-1);
    tracep->declQuad(c+113,"mem_exu_io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"mem_exu_io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"mem_exu_io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"mem_exu_io_bus_bits_is_w", false,-1);
    tracep->declBit(c+150,"mem_exu_io_bus_ready", false,-1);
    tracep->declBit(c+221,"mem_exu_io_difftest_peripheral", false,-1);
    tracep->declBit(c+3191,"mu_exu_clock", false,-1);
    tracep->declBit(c+3192,"mu_exu_reset", false,-1);
    tracep->declBit(c+450,"mu_exu_io_valid", false,-1);
    tracep->declBus(c+176,"mu_exu_io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+439,"mu_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+441,"mu_exu_io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+451,"mu_exu_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+453,"mu_exu_io_dest_is_w", false,-1);
    tracep->declBit(c+454,"mu_exu_io_ready", false,-1);
    tracep->declBit(c+455,"system_exu_io_valid", false,-1);
    tracep->declBus(c+176,"system_exu_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+456,"system_exu_io_csr_data", false,-1, 63,0);
    tracep->declBus(c+190,"system_exu_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+183,"system_exu_io_imm", false,-1, 31,0);
    tracep->declQuad(c+439,"system_exu_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+199,"system_exu_io_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"system_exu_io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+456,"system_exu_io_dst_data", false,-1, 63,0);
    tracep->declBit(c+458,"system_exu_io_csr_is_w", false,-1);
    tracep->declQuad(c+459,"system_exu_io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+461,"system_exu_io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+462,"system_exu_io_is_except", false,-1);
    tracep->declBus(c+463,"system_exu_io_exception", false,-1, 5,0);
    tracep->declBit(c+464,"system_exu_io_valid_next_pc", false,-1);
    tracep->declQuad(c+199,"system_exu_io_next_pc", false,-1, 63,0);
    tracep->declBit(c+465,"in_data_valid", false,-1);
    tracep->declBit(c+168,"ready", false,-1);
    tracep->declBus(c+466,"reg_valid", false,-1, 3,0);
    tracep->declBit(c+467,"reg_alu_valid", false,-1);
    tracep->declBit(c+468,"reg_mem_valid", false,-1);
    tracep->declBit(c+469,"reg_mu_valid", false,-1);
    tracep->declBit(c+470,"reg_system_valid", false,-1);
    tracep->declBus(c+471,"valid", false,-1, 3,0);
    tracep->declBit(c+472,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+473,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+155,"reg_br_valid", false,-1);
    tracep->declBit(c+156,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+157,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"reg_taken", false,-1);
    tracep->declQuad(c+160,"reg_br_next_pc", false,-1, 63,0);
    tracep->declQuad(c+209,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+208,"reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+475,"reg_csr_is_w", false,-1);
    tracep->declBit(c+476,"reg_is_except", false,-1);
    tracep->declBus(c+214,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+477,"reg_is_time_irq", false,-1);
    tracep->declBit(c+478,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+215,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+217,"reg_except_pc", false,-1, 63,0);
    tracep->declBit(c+479,"time_irq", false,-1);
    tracep->declBit(c+480,"soft_irq", false,-1);
    tracep->declBit(c+481,"irq", false,-1);
    tracep->declQuad(c+165,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+482,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+483,"reg_fence_i", false,-1);
    tracep->declBit(c+484,"reg_commit", false,-1);
    tracep->declBus(c+220,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+431,"io_valid", false,-1);
    tracep->declBit(c+189,"io_is_pre", false,-1);
    tracep->declBit(c+432,"io_br_info_valid", false,-1);
    tracep->declBit(c+433,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+434,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+436,"io_br_info_taken", false,-1);
    tracep->declQuad(c+437,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+162,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+163,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+175,"io_opType", false,-1, 2,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+439,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+441,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+183,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+184,"io_op_pc", false,-1, 63,0);
    tracep->declQuad(c+443,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+433,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+437,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+485,"is_32", false,-1);
    tracep->declQuad(c+486,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+488,"op_data2", false,-1, 63,0);
    tracep->declQuad(c+490,"op_imm", false,-1, 63,0);
    tracep->declBit(c+492,"rs2_is_imm", false,-1);
    tracep->declQuad(c+493,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+495,"rs1_is_pc", false,-1);
    tracep->declBit(c+496,"is_sra", false,-1);
    tracep->declQuad(c+497,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+499,"temp_rs2_data", false,-1, 63,0);
    tracep->declArray(c+501,"add_sub_result", false,-1, 64,0);
    tracep->declBit(c+504,"u_rs1_l_rs2", false,-1);
    tracep->declBit(c+505,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+506,"shift_rs2_data", false,-1, 5,0);
    tracep->declArray(c+507,"sll_temp", false,-1, 126,0);
    tracep->declQuad(c+511,"srl_temp", false,-1, 63,0);
    tracep->declQuad(c+513,"sra_temp", false,-1, 63,0);
    tracep->declQuad(c+515,"sr_temp", false,-1, 63,0);
    tracep->declQuad(c+517,"result_data", false,-1, 63,0);
    tracep->declBit(c+162,"is_pre", false,-1);
    tracep->declBit(c+519,"is_br", false,-1);
    tracep->declBit(c+520,"is_eq", false,-1);
    tracep->declQuad(c+521,"temp_1", false,-1, 63,0);
    tracep->declArray(c+523,"add_pc", false,-1, 64,0);
    tracep->declQuad(c+526,"op_pc_4", false,-1, 63,0);
    tracep->declArray(c+528,"temp_result_pc", false,-1, 64,0);
    tracep->declQuad(c+531,"dst_data", false,-1, 63,0);
    tracep->declQuad(c+533,"next_pc", false,-1, 63,0);
    tracep->declBit(c+535,"valid_next_pc", false,-1);
    tracep->declBit(c+432,"br_valid", false,-1);
    tracep->declBit(c+536,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+445,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+439,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+441,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+183,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+446,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+448,"io_dest_is_w", false,-1);
    tracep->declBit(c+449,"io_ready", false,-1);
    tracep->declBit(c+147,"io_bus_valid", false,-1);
    tracep->declQuad(c+113,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+148,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+119,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+120,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+150,"io_bus_ready", false,-1);
    tracep->declBit(c+221,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+490,"imm", false,-1, 63,0);
    tracep->declBit(c+449,"reg_ready", false,-1);
    tracep->declQuad(c+537,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+539,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+541,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+542,"reg_bus_is_w", false,-1);
    tracep->declBit(c+543,"reg_bus_valid", false,-1);
    tracep->declQuad(c+446,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+448,"reg_w_rs_en", false,-1);
    tracep->declBus(c+544,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+221,"reg_difftest_peripheral", false,-1);
    tracep->declQuad(c+545,"mem_r_data", false,-1, 63,0);
    tracep->declQuad(c+547,"mem_data_result", false,-1, 63,0);
    tracep->declQuad(c+549,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+551,"w_mem_en", false,-1);
    tracep->declQuad(c+552,"mem_wstrb", false,-1, 63,0);
    tracep->declBit(c+554,"reg_ls_state", false,-1);
    tracep->declArray(c+555,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+559,"chose_chancel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+450,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+439,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+441,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+451,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+453,"io_dest_is_w", false,-1);
    tracep->declBit(c+454,"io_ready", false,-1);
    tracep->declBit(c+3191,"div_clock", false,-1);
    tracep->declBit(c+3192,"div_reset", false,-1);
    tracep->declBit(c+560,"div_io_valid", false,-1);
    tracep->declQuad(c+439,"div_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+441,"div_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"div_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+561,"div_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+563,"div_io_dest_is_w", false,-1);
    tracep->declBit(c+564,"div_io_ready", false,-1);
    tracep->declBit(c+3191,"mul_clock", false,-1);
    tracep->declBit(c+3192,"mul_reset", false,-1);
    tracep->declBit(c+565,"mul_io_valid", false,-1);
    tracep->declQuad(c+439,"mul_io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+441,"mul_io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"mul_io_exuType", false,-1, 6,0);
    tracep->declQuad(c+566,"mul_io_dest_data", false,-1, 63,0);
    tracep->declBit(c+568,"mul_io_dest_is_w", false,-1);
    tracep->declBit(c+569,"mul_io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+560,"io_valid", false,-1);
    tracep->declQuad(c+439,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+441,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+561,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+563,"io_dest_is_w", false,-1);
    tracep->declBit(c+564,"io_ready", false,-1);
    tracep->declBit(c+485,"is_32", false,-1);
    tracep->declBit(c+570,"is_signed", false,-1);
    tracep->declArray(c+571,"dividend", false,-1, 64,0);
    tracep->declArray(c+574,"divisor", false,-1, 64,0);
    tracep->declArray(c+577,"rem", false,-1, 64,0);
    tracep->declArray(c+580,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+583,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+586,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+589,"reg_q", false,-1, 65,0);
    tracep->declArray(c+592,"neg_divisor", false,-1, 64,0);
    tracep->declBus(c+595,"reg_state", false,-1, 1,0);
    tracep->declBus(c+596,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+597,"reg_exuType", false,-1, 6,0);
    tracep->declArray(c+598,"temp_result", false,-1, 131,0);
    tracep->declBit(c+603,"rem_is_0", false,-1);
    tracep->declBit(c+604,"rem_is_neg_div", false,-1);
    tracep->declBit(c+605,"rem_is_div", false,-1);
    tracep->declBit(c+606,"is_need_correct", false,-1);
    tracep->declBit(c+563,"reg_dest_is_w", false,-1);
    tracep->declBit(c+564,"reg_ready", false,-1);
    tracep->declBit(c+607,"reg_is_32", false,-1);
    tracep->declBit(c+608,"reg_is_rem", false,-1);
    tracep->declQuad(c+609,"rem_adjust", false,-1, 63,0);
    tracep->declQuad(c+611,"q_adjust", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+565,"io_valid", false,-1);
    tracep->declQuad(c+439,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+441,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+566,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+568,"io_dest_is_w", false,-1);
    tracep->declBit(c+569,"io_ready", false,-1);
    tracep->declBit(c+613,"is_32", false,-1);
    tracep->declBit(c+614,"is_rs1_signed", false,-1);
    tracep->declBit(c+485,"is_rs2_signed", false,-1);
    tracep->declArray(c+615,"mul_data1", false,-1, 129,0);
    tracep->declArray(c+620,"mul_data2", false,-1, 64,0);
    tracep->declArray(c+623,"temp_mul2", false,-1, 66,0);
    tracep->declBit(c+569,"reg_ready", false,-1);
    tracep->declBus(c+626,"reg_state", false,-1, 1,0);
    tracep->declArray(c+627,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+630,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+635,"reg_result", false,-1, 129,0);
    tracep->declBus(c+640,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+568,"reg_dest_is_w", false,-1);
    tracep->declArray(c+641,"pp", false,-1, 130,0);
    tracep->declBus(c+646,"reg_cnt", false,-1, 6,0);
    tracep->declBit(c+647,"reg_not_h", false,-1);
    tracep->declBit(c+648,"reg_is_32", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+455,"io_valid", false,-1);
    tracep->declBus(c+176,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+456,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+190,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+183,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+439,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+199,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+195,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+456,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+458,"io_csr_is_w", false,-1);
    tracep->declQuad(c+459,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+461,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+462,"io_is_except", false,-1);
    tracep->declBus(c+463,"io_exception", false,-1, 5,0);
    tracep->declBit(c+464,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+199,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+490,"imm", false,-1, 63,0);
    tracep->declBit(c+649,"is_imm", false,-1);
    tracep->declQuad(c+650,"op_data", false,-1, 63,0);
    tracep->declQuad(c+652,"or_result", false,-1, 63,0);
    tracep->declQuad(c+654,"and_result", false,-1, 63,0);
    tracep->declQuad(c+656,"temp_csr_result_data", false,-1, 63,0);
    tracep->declBit(c+658,"is_mret", false,-1);
    tracep->declBit(c+659,"is_sret", false,-1);
    tracep->declBit(c+660,"is_ecall", false,-1);
    tracep->declBit(c+661,"is_ebreak", false,-1);
    tracep->declBit(c+662,"is_except", false,-1);
    tracep->declBus(c+663,"exception", false,-1, 3,0);
    tracep->declBit(c+664,"is_ret", false,-1);
    tracep->declQuad(c+665,"result_status", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3191,"ibuf_clock", false,-1);
    tracep->declBit(c+3192,"ibuf_reset", false,-1);
    tracep->declBit(c+167,"ibuf_io_flush", false,-1);
    tracep->declBit(c+100,"ibuf_io_cache_buf_ready", false,-1);
    tracep->declBit(c+667,"ibuf_io_cache_buf_valid", false,-1);
    tracep->declQuad(c+145,"ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+668,"ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+669,"ibuf_io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+168,"ibuf_io_put_pc_ready", false,-1);
    tracep->declBit(c+169,"ibuf_io_put_pc_valid", false,-1);
    tracep->declBus(c+170,"ibuf_io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"ibuf_io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"ibuf_io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+3191,"br_predictor_clock", false,-1);
    tracep->declBit(c+3192,"br_predictor_reset", false,-1);
    tracep->declBit(c+155,"br_predictor_io_br_info_valid", false,-1);
    tracep->declBit(c+156,"br_predictor_io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"br_predictor_io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"br_predictor_io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+98,"br_predictor_io_pc", false,-1, 63,0);
    tracep->declQuad(c+670,"br_predictor_io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+672,"br_predictor_io_pre_valid", false,-1);
    tracep->declQuad(c+98,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+673,"reg_flush", false,-1);
    tracep->declQuad(c+674,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+141,"reg_bus_valid", false,-1);
    tracep->declBus(c+676,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+677,"pre_info_tail", false,-1, 1,0);
    tracep->declQuad(c+678,"pre_info_fifo_0", false,-1, 63,0);
    tracep->declQuad(c+680,"pre_info_fifo_1", false,-1, 63,0);
    tracep->declQuad(c+682,"pre_info_fifo_2", false,-1, 63,0);
    tracep->declQuad(c+684,"pre_info_fifo_3", false,-1, 63,0);
    tracep->declBit(c+686,"pre_enq", false,-1);
    tracep->declBus(c+687,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+688,"is_pre_tail", false,-1, 1,0);
    tracep->declBit(c+689,"is_pre_fifo_0", false,-1);
    tracep->declBit(c+690,"is_pre_fifo_1", false,-1);
    tracep->declBit(c+691,"is_pre_fifo_2", false,-1);
    tracep->declBit(c+692,"is_pre_fifo_3", false,-1);
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+155,"io_br_info_valid", false,-1);
    tracep->declBit(c+156,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+157,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+159,"io_br_info_taken", false,-1);
    tracep->declQuad(c+160,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+98,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+670,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+672,"io_pre_valid", false,-1);
    tracep->declArray(c+693,"BTB_0", false,-1, 127,0);
    tracep->declArray(c+697,"BTB_1", false,-1, 127,0);
    tracep->declArray(c+701,"BTB_2", false,-1, 127,0);
    tracep->declArray(c+705,"BTB_3", false,-1, 127,0);
    tracep->declArray(c+709,"BTB_4", false,-1, 127,0);
    tracep->declArray(c+713,"BTB_5", false,-1, 127,0);
    tracep->declArray(c+717,"BTB_6", false,-1, 127,0);
    tracep->declArray(c+721,"BTB_7", false,-1, 127,0);
    tracep->declArray(c+725,"BTB_8", false,-1, 127,0);
    tracep->declArray(c+729,"BTB_9", false,-1, 127,0);
    tracep->declArray(c+733,"BTB_10", false,-1, 127,0);
    tracep->declArray(c+737,"BTB_11", false,-1, 127,0);
    tracep->declArray(c+741,"BTB_12", false,-1, 127,0);
    tracep->declArray(c+745,"BTB_13", false,-1, 127,0);
    tracep->declArray(c+749,"BTB_14", false,-1, 127,0);
    tracep->declArray(c+753,"BTB_15", false,-1, 127,0);
    tracep->declArray(c+757,"BTB_16", false,-1, 127,0);
    tracep->declArray(c+761,"BTB_17", false,-1, 127,0);
    tracep->declArray(c+765,"BTB_18", false,-1, 127,0);
    tracep->declArray(c+769,"BTB_19", false,-1, 127,0);
    tracep->declArray(c+773,"BTB_20", false,-1, 127,0);
    tracep->declArray(c+777,"BTB_21", false,-1, 127,0);
    tracep->declArray(c+781,"BTB_22", false,-1, 127,0);
    tracep->declArray(c+785,"BTB_23", false,-1, 127,0);
    tracep->declArray(c+789,"BTB_24", false,-1, 127,0);
    tracep->declArray(c+793,"BTB_25", false,-1, 127,0);
    tracep->declArray(c+797,"BTB_26", false,-1, 127,0);
    tracep->declArray(c+801,"BTB_27", false,-1, 127,0);
    tracep->declArray(c+805,"BTB_28", false,-1, 127,0);
    tracep->declArray(c+809,"BTB_29", false,-1, 127,0);
    tracep->declArray(c+813,"BTB_30", false,-1, 127,0);
    tracep->declArray(c+817,"BTB_31", false,-1, 127,0);
    tracep->declArray(c+821,"BTB_32", false,-1, 127,0);
    tracep->declArray(c+825,"BTB_33", false,-1, 127,0);
    tracep->declArray(c+829,"BTB_34", false,-1, 127,0);
    tracep->declArray(c+833,"BTB_35", false,-1, 127,0);
    tracep->declArray(c+837,"BTB_36", false,-1, 127,0);
    tracep->declArray(c+841,"BTB_37", false,-1, 127,0);
    tracep->declArray(c+845,"BTB_38", false,-1, 127,0);
    tracep->declArray(c+849,"BTB_39", false,-1, 127,0);
    tracep->declArray(c+853,"BTB_40", false,-1, 127,0);
    tracep->declArray(c+857,"BTB_41", false,-1, 127,0);
    tracep->declArray(c+861,"BTB_42", false,-1, 127,0);
    tracep->declArray(c+865,"BTB_43", false,-1, 127,0);
    tracep->declArray(c+869,"BTB_44", false,-1, 127,0);
    tracep->declArray(c+873,"BTB_45", false,-1, 127,0);
    tracep->declArray(c+877,"BTB_46", false,-1, 127,0);
    tracep->declArray(c+881,"BTB_47", false,-1, 127,0);
    tracep->declArray(c+885,"BTB_48", false,-1, 127,0);
    tracep->declArray(c+889,"BTB_49", false,-1, 127,0);
    tracep->declArray(c+893,"BTB_50", false,-1, 127,0);
    tracep->declArray(c+897,"BTB_51", false,-1, 127,0);
    tracep->declArray(c+901,"BTB_52", false,-1, 127,0);
    tracep->declArray(c+905,"BTB_53", false,-1, 127,0);
    tracep->declArray(c+909,"BTB_54", false,-1, 127,0);
    tracep->declArray(c+913,"BTB_55", false,-1, 127,0);
    tracep->declArray(c+917,"BTB_56", false,-1, 127,0);
    tracep->declArray(c+921,"BTB_57", false,-1, 127,0);
    tracep->declArray(c+925,"BTB_58", false,-1, 127,0);
    tracep->declArray(c+929,"BTB_59", false,-1, 127,0);
    tracep->declArray(c+933,"BTB_60", false,-1, 127,0);
    tracep->declArray(c+937,"BTB_61", false,-1, 127,0);
    tracep->declArray(c+941,"BTB_62", false,-1, 127,0);
    tracep->declArray(c+945,"BTB_63", false,-1, 127,0);
    tracep->declQuad(c+949,"RAS_0", false,-1, 63,0);
    tracep->declQuad(c+951,"RAS_1", false,-1, 63,0);
    tracep->declQuad(c+953,"RAS_2", false,-1, 63,0);
    tracep->declQuad(c+955,"RAS_3", false,-1, 63,0);
    tracep->declQuad(c+957,"RAS_4", false,-1, 63,0);
    tracep->declQuad(c+959,"RAS_5", false,-1, 63,0);
    tracep->declBus(c+961,"PHT_0", false,-1, 1,0);
    tracep->declBus(c+962,"PHT_1", false,-1, 1,0);
    tracep->declBus(c+963,"PHT_2", false,-1, 1,0);
    tracep->declBus(c+964,"PHT_3", false,-1, 1,0);
    tracep->declBus(c+965,"PHT_4", false,-1, 1,0);
    tracep->declBus(c+966,"PHT_5", false,-1, 1,0);
    tracep->declBus(c+967,"PHT_6", false,-1, 1,0);
    tracep->declBus(c+968,"PHT_7", false,-1, 1,0);
    tracep->declBus(c+969,"PHT_8", false,-1, 1,0);
    tracep->declBus(c+970,"PHT_9", false,-1, 1,0);
    tracep->declBus(c+971,"PHT_10", false,-1, 1,0);
    tracep->declBus(c+972,"PHT_11", false,-1, 1,0);
    tracep->declBus(c+973,"PHT_12", false,-1, 1,0);
    tracep->declBus(c+974,"PHT_13", false,-1, 1,0);
    tracep->declBus(c+975,"PHT_14", false,-1, 1,0);
    tracep->declBus(c+976,"PHT_15", false,-1, 1,0);
    tracep->declBus(c+977,"PHT_16", false,-1, 1,0);
    tracep->declBus(c+978,"PHT_17", false,-1, 1,0);
    tracep->declBus(c+979,"PHT_18", false,-1, 1,0);
    tracep->declBus(c+980,"PHT_19", false,-1, 1,0);
    tracep->declBus(c+981,"PHT_20", false,-1, 1,0);
    tracep->declBus(c+982,"PHT_21", false,-1, 1,0);
    tracep->declBus(c+983,"PHT_22", false,-1, 1,0);
    tracep->declBus(c+984,"PHT_23", false,-1, 1,0);
    tracep->declBus(c+985,"PHT_24", false,-1, 1,0);
    tracep->declBus(c+986,"PHT_25", false,-1, 1,0);
    tracep->declBus(c+987,"PHT_26", false,-1, 1,0);
    tracep->declBus(c+988,"PHT_27", false,-1, 1,0);
    tracep->declBus(c+989,"PHT_28", false,-1, 1,0);
    tracep->declBus(c+990,"PHT_29", false,-1, 1,0);
    tracep->declBus(c+991,"PHT_30", false,-1, 1,0);
    tracep->declBus(c+992,"PHT_31", false,-1, 1,0);
    tracep->declBus(c+993,"PHT_32", false,-1, 1,0);
    tracep->declBus(c+994,"PHT_33", false,-1, 1,0);
    tracep->declBus(c+995,"PHT_34", false,-1, 1,0);
    tracep->declBus(c+996,"PHT_35", false,-1, 1,0);
    tracep->declBus(c+997,"PHT_36", false,-1, 1,0);
    tracep->declBus(c+998,"PHT_37", false,-1, 1,0);
    tracep->declBus(c+999,"PHT_38", false,-1, 1,0);
    tracep->declBus(c+1000,"PHT_39", false,-1, 1,0);
    tracep->declBus(c+1001,"PHT_40", false,-1, 1,0);
    tracep->declBus(c+1002,"PHT_41", false,-1, 1,0);
    tracep->declBus(c+1003,"PHT_42", false,-1, 1,0);
    tracep->declBus(c+1004,"PHT_43", false,-1, 1,0);
    tracep->declBus(c+1005,"PHT_44", false,-1, 1,0);
    tracep->declBus(c+1006,"PHT_45", false,-1, 1,0);
    tracep->declBus(c+1007,"PHT_46", false,-1, 1,0);
    tracep->declBus(c+1008,"PHT_47", false,-1, 1,0);
    tracep->declBus(c+1009,"PHT_48", false,-1, 1,0);
    tracep->declBus(c+1010,"PHT_49", false,-1, 1,0);
    tracep->declBus(c+1011,"PHT_50", false,-1, 1,0);
    tracep->declBus(c+1012,"PHT_51", false,-1, 1,0);
    tracep->declBus(c+1013,"PHT_52", false,-1, 1,0);
    tracep->declBus(c+1014,"PHT_53", false,-1, 1,0);
    tracep->declBus(c+1015,"PHT_54", false,-1, 1,0);
    tracep->declBus(c+1016,"PHT_55", false,-1, 1,0);
    tracep->declBus(c+1017,"PHT_56", false,-1, 1,0);
    tracep->declBus(c+1018,"PHT_57", false,-1, 1,0);
    tracep->declBus(c+1019,"PHT_58", false,-1, 1,0);
    tracep->declBus(c+1020,"PHT_59", false,-1, 1,0);
    tracep->declBus(c+1021,"PHT_60", false,-1, 1,0);
    tracep->declBus(c+1022,"PHT_61", false,-1, 1,0);
    tracep->declBus(c+1023,"PHT_62", false,-1, 1,0);
    tracep->declBus(c+1024,"PHT_63", false,-1, 1,0);
    tracep->declBus(c+1025,"reg_head", false,-1, 2,0);
    tracep->declBus(c+1026,"update_index", false,-1, 5,0);
    tracep->declArray(c+1027,"update_btb_data", false,-1, 122,0);
    tracep->declBus(c+1031,"index", false,-1, 5,0);
    tracep->declQuad(c+1032,"tag", false,-1, 55,0);
    tracep->declBit(c+1034,"pht_taken", false,-1);
    tracep->declBit(c+1035,"btb_valid", false,-1);
    tracep->declQuad(c+1036,"btb_tag", false,-1, 55,0);
    tracep->declQuad(c+1038,"btb_target_next_pc", false,-1, 63,0);
    tracep->declBus(c+1040,"btb_br_type", false,-1, 1,0);
    tracep->declBit(c+672,"pre_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+167,"io_flush", false,-1);
    tracep->declBit(c+100,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+667,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+145,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+668,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+669,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+168,"io_put_pc_ready", false,-1);
    tracep->declBit(c+169,"io_put_pc_valid", false,-1);
    tracep->declBus(c+170,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+171,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+173,"io_put_pc_bits_is_pre", false,-1);
    tracep->declQuad(c+1041,"ibuf_pc_0", false,-1, 63,0);
    tracep->declQuad(c+1043,"ibuf_pc_1", false,-1, 63,0);
    tracep->declQuad(c+1045,"ibuf_pc_2", false,-1, 63,0);
    tracep->declQuad(c+1047,"ibuf_pc_3", false,-1, 63,0);
    tracep->declBus(c+1049,"ibuf_inst_0", false,-1, 31,0);
    tracep->declBus(c+1050,"ibuf_inst_1", false,-1, 31,0);
    tracep->declBus(c+1051,"ibuf_inst_2", false,-1, 31,0);
    tracep->declBus(c+1052,"ibuf_inst_3", false,-1, 31,0);
    tracep->declBit(c+1053,"ibuf_is_pre_0", false,-1);
    tracep->declBit(c+1054,"ibuf_is_pre_1", false,-1);
    tracep->declBit(c+1055,"ibuf_is_pre_2", false,-1);
    tracep->declBit(c+1056,"ibuf_is_pre_3", false,-1);
    tracep->declBit(c+1057,"ibuf_valid_0", false,-1);
    tracep->declBit(c+1058,"ibuf_valid_1", false,-1);
    tracep->declBit(c+1059,"ibuf_valid_2", false,-1);
    tracep->declBit(c+1060,"ibuf_valid_3", false,-1);
    tracep->declBus(c+1061,"reg_head", false,-1, 1,0);
    tracep->declBus(c+1062,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+1063,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+1064,"enq_size", false,-1);
    tracep->declBit(c+1065,"can_deq", false,-1);
    tracep->declBus(c+1066,"result_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
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
    tracep->declBit(c+3191,"cache_stage0_clock", false,-1);
    tracep->declBit(c+3192,"cache_stage0_reset", false,-1);
    tracep->declBit(c+95,"cache_stage0_io_flush", false,-1);
    tracep->declBit(c+96,"cache_stage0_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+97,"cache_stage0_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+96,"cache_stage0_io_addr_ready", false,-1);
    tracep->declBit(c+1067,"cache_stage0_io_addr_valid", false,-1);
    tracep->declQuad(c+1068,"cache_stage0_io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+3191,"cache_stage1_clock", false,-1);
    tracep->declBit(c+3192,"cache_stage1_reset", false,-1);
    tracep->declBit(c+95,"cache_stage1_io_flush", false,-1);
    tracep->declBit(c+96,"cache_stage1_io_cpu_addr_ready", false,-1);
    tracep->declBit(c+1067,"cache_stage1_io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+1068,"cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+1070,"cache_stage1_io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+1071,"cache_stage1_io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+1072,"cache_stage1_io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+1073,"cache_stage1_io_sram_valid", false,-1);
    tracep->declArray(c+1074,"cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+1078,"cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+1082,"cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+1086,"cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+1090,"cache_stage1_io_sram_ready", false,-1);
    tracep->declBit(c+1091,"cache_stage1_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1092,"cache_stage1_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1093,"cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1095,"cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1071,"cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1096,"cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1098,"cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1072,"cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1099,"cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+3191,"cache_stage2_clock", false,-1);
    tracep->declBit(c+3192,"cache_stage2_reset", false,-1);
    tracep->declBit(c+95,"cache_stage2_io_flush", false,-1);
    tracep->declBit(c+1091,"cache_stage2_io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1092,"cache_stage2_io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1093,"cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1095,"cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1071,"cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1096,"cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1098,"cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1072,"cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1099,"cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+107,"cache_stage2_io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"cache_stage2_io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+1101,"cache_stage2_io_sram_w_valid", false,-1);
    tracep->declBus(c+1102,"cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+23,"cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+31,"cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+1103,"cache_stage2_io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+100,"cache_stage2_io_rdata_ready", false,-1);
    tracep->declBit(c+101,"cache_stage2_io_rdata_valid", false,-1);
    tracep->declQuad(c+102,"cache_stage2_io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+1104,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+1106,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+1108,"is_w_sram", false,-1);
    tracep->declBit(c+1109,"is_sram0_write", false,-1);
    tracep->declBit(c+1110,"is_sram1_write", false,-1);
    tracep->declQuad(c+1111,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+1113,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+1114,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+1115,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+1116,"w_r_pass0_val", false,-1);
    tracep->declBit(c+1117,"w_r_pass1_val", false,-1);
    tracep->declBit(c+1090,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+96,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+97,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+98,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+96,"io_addr_ready", false,-1);
    tracep->declBit(c+1067,"io_addr_valid", false,-1);
    tracep->declQuad(c+1068,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+1067,"reg_valid", false,-1);
    tracep->declQuad(c+1068,"reg_addr", false,-1, 63,0);
    tracep->declBit(c+1118,"valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+96,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+1067,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+1068,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBus(c+1070,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+1071,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+1072,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declBit(c+1073,"io_sram_valid", false,-1);
    tracep->declArray(c+1074,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+1078,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+1082,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+1086,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+1090,"io_sram_ready", false,-1);
    tracep->declBit(c+1091,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1092,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1093,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1095,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1071,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1096,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1098,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1072,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1099,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+1073,"valid", false,-1);
    tracep->declBit(c+96,"ready", false,-1);
    tracep->declQuad(c+1093,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1119,"reg_valid", false,-1);
    tracep->declQuad(c+1120,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+1122,"reg_index", false,-1, 5,0);
    tracep->declBus(c+1123,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+1124,"tag_0", false,-1, 53,0);
    tracep->declQuad(c+1126,"tag_1", false,-1, 53,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBit(c+95,"io_flush", false,-1);
    tracep->declBit(c+1091,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+1092,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+1093,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+1095,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+1071,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+1096,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+1098,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+1072,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+1099,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+107,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+108,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+111,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+1101,"io_sram_w_valid", false,-1);
    tracep->declBus(c+1102,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+23,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+31,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+1103,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+100,"io_rdata_ready", false,-1);
    tracep->declBit(c+101,"io_rdata_valid", false,-1);
    tracep->declQuad(c+102,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+104,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+1122,"index", false,-1, 5,0);
    tracep->declBit(c+1128,"valid", false,-1);
    tracep->declBit(c+1103,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+102,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+101,"reg_valid", false,-1);
    tracep->declBit(c+1129,"reg_ready", false,-1);
    tracep->declQuad(c+1130,"temp_addr", false,-1, 63,0);
    tracep->declQuad(c+108,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+107,"reg_r_valid", false,-1);
    tracep->declArray(c+23,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+1101,"reg_cache_write", false,-1);
    tracep->declQuad(c+104,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+1132,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+1134,"reg_offset", false,-1, 3,0);
    tracep->declQuad(c+1135,"reg_lru_1", false,-1, 63,0);
    tracep->declBit(c+1137,"LRU_1", false,-1);
    tracep->declQuad(c+1138,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+1140,"neg_chose_bit", false,-1, 63,0);
    tracep->declBus(c+1142,"reg_bus_state", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+3273,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+27,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+27,"Q", false,-1, 127,0);
    tracep->declArray(c+1143,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1147,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1151,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1155,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1159,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1163,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1167,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1171,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1175,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1179,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1183,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1187,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1191,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1195,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1199,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1203,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1207,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1211,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1215,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1219,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1223,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1227,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1231,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1235,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1239,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1243,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1247,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1251,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1255,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1259,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1263,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1267,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1271,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1275,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1279,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1283,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1287,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1291,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1295,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1299,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1303,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1307,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1311,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1315,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1319,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1323,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1327,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1331,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1335,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1339,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1343,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1347,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1351,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1355,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1359,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1363,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1367,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1371,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1375,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1379,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1383,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1387,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1391,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1395,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3278,"bwen", false,-1, 127,0);
    tracep->declBit(c+1109,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+22,"io_wen", false,-1);
    tracep->declArray(c+3273,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+35,"Q", false,-1, 127,0);
    tracep->declArray(c+1399,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1403,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1407,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1411,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1415,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1419,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1423,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1427,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1431,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1435,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1439,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1443,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1447,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1451,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1455,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1459,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1463,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1467,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1471,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1475,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1479,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1483,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1487,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1491,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1495,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1499,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1503,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1507,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1511,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1515,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1519,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1523,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1527,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1531,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1535,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1539,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1543,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1547,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1551,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1555,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1559,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1563,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1567,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1571,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1575,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1579,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1583,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1587,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1591,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1595,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1599,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1603,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1607,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1611,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1615,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1619,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1623,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1627,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1631,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1635,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1639,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1643,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1647,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1651,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3278,"bwen", false,-1, 127,0);
    tracep->declBit(c+1109,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_wen", false,-1);
    tracep->declArray(c+3273,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+23,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+40,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+40,"Q", false,-1, 127,0);
    tracep->declArray(c+1655,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1659,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1663,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1667,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1671,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1675,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1679,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1683,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1687,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1691,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1695,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1699,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1703,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1707,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1711,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1715,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1719,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1723,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1727,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1731,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1735,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1739,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1743,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1747,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1751,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1755,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1759,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1763,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1767,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1771,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1775,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1779,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1783,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1787,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1791,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1795,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1799,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1803,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1807,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1811,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1815,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1819,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1823,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1827,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1831,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1835,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1839,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1843,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1847,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1851,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1855,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1859,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1863,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1867,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1871,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1875,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1879,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1883,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1887,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1891,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1895,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1899,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1903,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1907,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3278,"bwen", false,-1, 127,0);
    tracep->declBit(c+1110,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBus(c+21,"io_addr", false,-1, 5,0);
    tracep->declBit(c+39,"io_wen", false,-1);
    tracep->declArray(c+3273,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+31,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+44,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+44,"Q", false,-1, 127,0);
    tracep->declArray(c+1911,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1915,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1919,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1923,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1927,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1931,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1935,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1939,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1943,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1947,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1951,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1955,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1959,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1963,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1967,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1971,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1975,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1979,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1983,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1987,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1991,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1995,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1999,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2003,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2007,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2011,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2015,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2019,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2023,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2027,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2031,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2035,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2039,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2043,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2047,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2051,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2055,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2059,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2063,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2067,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2071,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2075,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2079,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2083,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2087,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2091,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2095,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2099,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2103,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2107,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2111,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2115,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2119,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2123,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2127,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2131,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2135,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2139,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2143,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2147,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2151,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2155,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2159,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2163,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3278,"bwen", false,-1, 127,0);
    tracep->declBit(c+1110,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+50,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+58,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+58,"Q", false,-1, 127,0);
    tracep->declArray(c+2167,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2171,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2175,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2179,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2183,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2187,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2191,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2195,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2199,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2203,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2207,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2211,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2215,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2219,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2223,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2227,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2231,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2235,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2239,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2243,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2247,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2251,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2255,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2259,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2263,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2267,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2271,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2275,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2279,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2283,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2287,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2291,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2295,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2299,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2303,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2307,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2311,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2315,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2319,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2323,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2327,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2331,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2335,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2339,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2343,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2347,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2351,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2355,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2359,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2363,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2367,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2371,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2375,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2379,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2383,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2387,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2391,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2395,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2399,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2403,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2407,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2411,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2415,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2419,"sram_63", false,-1, 127,0);
    tracep->declArray(c+362,"bwen", false,-1, 127,0);
    tracep->declBit(c+370,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+49,"io_wen", false,-1);
    tracep->declArray(c+3273,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+66,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+66,"Q", false,-1, 127,0);
    tracep->declArray(c+2423,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2427,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2431,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2435,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2439,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2443,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2447,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2451,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2455,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2459,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2463,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2467,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2471,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2475,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2479,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2483,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2487,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2491,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2495,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2499,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2503,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2507,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2511,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2515,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2519,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2523,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2527,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2531,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2535,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2539,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2543,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2547,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2551,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2555,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2559,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2563,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2567,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2571,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2575,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2579,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2583,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2587,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2591,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2595,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2599,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2603,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2607,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2611,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2615,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2619,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2623,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2627,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2631,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2635,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2639,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2643,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2647,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2651,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2655,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2659,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2663,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2667,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2671,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2675,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3278,"bwen", false,-1, 127,0);
    tracep->declBit(c+370,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_wen", false,-1);
    tracep->declArray(c+50,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+54,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+71,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+71,"Q", false,-1, 127,0);
    tracep->declArray(c+2679,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2683,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2687,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2691,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2695,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2699,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2703,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2707,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2711,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2715,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2719,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2723,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2727,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2731,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2735,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2739,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2743,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2747,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2751,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2755,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2759,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2763,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2767,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2771,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2775,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2779,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2783,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2787,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2791,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2795,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2799,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2803,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2807,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2811,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2815,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2819,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2823,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2827,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2831,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2835,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2839,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2843,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2847,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2851,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2855,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2859,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2863,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2867,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2871,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2875,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2879,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2883,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2887,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2891,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2895,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2899,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2903,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2907,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2911,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2915,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2919,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2923,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2927,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2931,"sram_63", false,-1, 127,0);
    tracep->declArray(c+362,"bwen", false,-1, 127,0);
    tracep->declBit(c+379,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+3191,"clock", false,-1);
    tracep->declBit(c+3192,"reset", false,-1);
    tracep->declBus(c+48,"io_addr", false,-1, 5,0);
    tracep->declBit(c+70,"io_wen", false,-1);
    tracep->declArray(c+3273,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+62,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+75,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+75,"Q", false,-1, 127,0);
    tracep->declArray(c+2935,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2939,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2943,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2947,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2951,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2955,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2959,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2963,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2967,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2971,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2975,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2979,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2983,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2987,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2991,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2995,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2999,"sram_16", false,-1, 127,0);
    tracep->declArray(c+3003,"sram_17", false,-1, 127,0);
    tracep->declArray(c+3007,"sram_18", false,-1, 127,0);
    tracep->declArray(c+3011,"sram_19", false,-1, 127,0);
    tracep->declArray(c+3015,"sram_20", false,-1, 127,0);
    tracep->declArray(c+3019,"sram_21", false,-1, 127,0);
    tracep->declArray(c+3023,"sram_22", false,-1, 127,0);
    tracep->declArray(c+3027,"sram_23", false,-1, 127,0);
    tracep->declArray(c+3031,"sram_24", false,-1, 127,0);
    tracep->declArray(c+3035,"sram_25", false,-1, 127,0);
    tracep->declArray(c+3039,"sram_26", false,-1, 127,0);
    tracep->declArray(c+3043,"sram_27", false,-1, 127,0);
    tracep->declArray(c+3047,"sram_28", false,-1, 127,0);
    tracep->declArray(c+3051,"sram_29", false,-1, 127,0);
    tracep->declArray(c+3055,"sram_30", false,-1, 127,0);
    tracep->declArray(c+3059,"sram_31", false,-1, 127,0);
    tracep->declArray(c+3063,"sram_32", false,-1, 127,0);
    tracep->declArray(c+3067,"sram_33", false,-1, 127,0);
    tracep->declArray(c+3071,"sram_34", false,-1, 127,0);
    tracep->declArray(c+3075,"sram_35", false,-1, 127,0);
    tracep->declArray(c+3079,"sram_36", false,-1, 127,0);
    tracep->declArray(c+3083,"sram_37", false,-1, 127,0);
    tracep->declArray(c+3087,"sram_38", false,-1, 127,0);
    tracep->declArray(c+3091,"sram_39", false,-1, 127,0);
    tracep->declArray(c+3095,"sram_40", false,-1, 127,0);
    tracep->declArray(c+3099,"sram_41", false,-1, 127,0);
    tracep->declArray(c+3103,"sram_42", false,-1, 127,0);
    tracep->declArray(c+3107,"sram_43", false,-1, 127,0);
    tracep->declArray(c+3111,"sram_44", false,-1, 127,0);
    tracep->declArray(c+3115,"sram_45", false,-1, 127,0);
    tracep->declArray(c+3119,"sram_46", false,-1, 127,0);
    tracep->declArray(c+3123,"sram_47", false,-1, 127,0);
    tracep->declArray(c+3127,"sram_48", false,-1, 127,0);
    tracep->declArray(c+3131,"sram_49", false,-1, 127,0);
    tracep->declArray(c+3135,"sram_50", false,-1, 127,0);
    tracep->declArray(c+3139,"sram_51", false,-1, 127,0);
    tracep->declArray(c+3143,"sram_52", false,-1, 127,0);
    tracep->declArray(c+3147,"sram_53", false,-1, 127,0);
    tracep->declArray(c+3151,"sram_54", false,-1, 127,0);
    tracep->declArray(c+3155,"sram_55", false,-1, 127,0);
    tracep->declArray(c+3159,"sram_56", false,-1, 127,0);
    tracep->declArray(c+3163,"sram_57", false,-1, 127,0);
    tracep->declArray(c+3167,"sram_58", false,-1, 127,0);
    tracep->declArray(c+3171,"sram_59", false,-1, 127,0);
    tracep->declArray(c+3175,"sram_60", false,-1, 127,0);
    tracep->declArray(c+3179,"sram_61", false,-1, 127,0);
    tracep->declArray(c+3183,"sram_62", false,-1, 127,0);
    tracep->declArray(c+3187,"sram_63", false,-1, 127,0);
    tracep->declArray(c+3278,"bwen", false,-1, 127,0);
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
    bufp->fullCData(oldp+406,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
    bufp->fullCData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
    bufp->fullBit(oldp+409,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+410,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0xeU))));
    bufp->fullBit(oldp+411,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 0xeU)))));
    bufp->fullCData(oldp+412,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? ((0x60U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xfU)) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))),7);
    bufp->fullCData(oldp+413,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))
                                ? 0U : 5U)),3);
    bufp->fullBit(oldp+414,((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+415,(((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0xcU))) 
                             & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0xeU)))));
    bufp->fullCData(oldp+416,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? 3U : 0xcU)),4);
    bufp->fullBit(oldp+417,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 5U)))));
    bufp->fullBit(oldp+418,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0xcU)))));
    bufp->fullCData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
    bufp->fullCData(oldp+420,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                : ((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xcU)))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
    bufp->fullCData(oldp+421,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? 6U : (((1U == (7U 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0xcU))))
                                         ? 4U : 0xcU))),4);
    bufp->fullBit(oldp+422,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 5U))));
    bufp->fullCData(oldp+423,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? ((0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                    ? 3U : 2U) : 2U)),2);
    bufp->fullCData(oldp+424,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? 0x4eU : 0x4aU)),7);
    bufp->fullCData(oldp+425,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                ? 2U : 0xcU)),4);
    bufp->fullBit(oldp+426,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 3U)))));
    bufp->fullCData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
    bufp->fullBit(oldp+428,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
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
    bufp->fullBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
    bufp->fullBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
    bufp->fullBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    bufp->fullBit(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
    bufp->fullBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
    bufp->fullQData(oldp+434,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+436,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
    bufp->fullQData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
    bufp->fullQData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data),64);
    bufp->fullQData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data),64);
    bufp->fullQData(oldp+443,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
    bufp->fullBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    bufp->fullQData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullBit(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    bufp->fullQData(oldp+451,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
    bufp->fullBit(oldp+453,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+454,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    bufp->fullQData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
    bufp->fullBit(oldp+458,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    bufp->fullQData(oldp+459,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
    bufp->fullSData(oldp+461,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    bufp->fullCData(oldp+463,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
    bufp->fullBit(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
    bufp->fullBit(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullCData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullBit(oldp+467,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
    bufp->fullBit(oldp+468,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+469,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+470,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U))));
    bufp->fullCData(oldp+471,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
    bufp->fullBit(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    bufp->fullBit(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    bufp->fullBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
    bufp->fullBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+485,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    bufp->fullQData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullQData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
    bufp->fullBit(oldp+492,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U)))));
    bufp->fullQData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+495,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 6U))));
    bufp->fullBit(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
    bufp->fullQData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullQData(oldp+499,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
    bufp->fullWData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
    bufp->fullBit(oldp+504,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
    bufp->fullBit(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
    bufp->fullWData(oldp+507,(__Vtemp_hfddea7ef__0),127);
    bufp->fullQData(oldp+511,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+513,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
    bufp->fullQData(oldp+515,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                     ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
    bufp->fullQData(oldp+517,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+519,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
    bufp->fullBit(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    bufp->fullQData(oldp+521,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data
                                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
    __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                        >> 0x20U));
    __Vtemp_h6618c490__0[2U] = 1U;
    bufp->fullWData(oldp+523,(__Vtemp_h6618c490__0),65);
    bufp->fullQData(oldp+526,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        __Vtemp_h4825144c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
        __Vtemp_h4825144c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
        __Vtemp_h4825144c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
    } else {
        __Vtemp_h4825144c__0[0U] = 0U;
        __Vtemp_h4825144c__0[1U] = 0U;
        __Vtemp_h4825144c__0[2U] = 0U;
    }
    bufp->fullWData(oldp+528,(__Vtemp_h4825144c__0),65);
    bufp->fullQData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullQData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
    bufp->fullBit(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
    bufp->fullBit(oldp+536,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
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
    bufp->fullQData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullQData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
    bufp->fullQData(oldp+547,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
    bufp->fullQData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullQData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
    bufp->fullBit(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    bufp->fullWData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
    bufp->fullBit(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullBit(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
    bufp->fullQData(oldp+561,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullBit(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
    bufp->fullQData(oldp+566,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
    bufp->fullBit(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullBit(oldp+570,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U)))));
    bufp->fullWData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
    bufp->fullWData(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
    bufp->fullWData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
    bufp->fullWData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
    bufp->fullWData(oldp+592,(__Vtemp_h28f9f554__0),65);
    bufp->fullCData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    bufp->fullWData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
    bufp->fullBit(oldp+603,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
    bufp->fullBit(oldp+604,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                      ^ __Vtemp_h2ede82b0__0[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                        ^ __Vtemp_h2ede82b0__0[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                       ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
    bufp->fullBit(oldp+605,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    bufp->fullBit(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
    bufp->fullBit(oldp+607,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
    bufp->fullBit(oldp+608,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                   >> 3U))));
    bufp->fullQData(oldp+609,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullQData(oldp+611,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
    bufp->fullBit(oldp+613,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))));
    bufp->fullBit(oldp+614,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullWData(oldp+615,(__Vtemp_h4bcec608__0),130);
    bufp->fullWData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
    bufp->fullWData(oldp+623,(__Vtemp_h3364f91c__0),67);
    bufp->fullCData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
    bufp->fullWData(oldp+641,(__Vtemp_hf484a493__0),131);
    bufp->fullCData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullBit(oldp+647,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                          >> 2U)))));
    bufp->fullBit(oldp+648,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
    bufp->fullBit(oldp+649,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 4U))));
    bufp->fullQData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullQData(oldp+656,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
    bufp->fullBit(oldp+658,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+659,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
    bufp->fullBit(oldp+660,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+661,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+662,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))) 
                             | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    bufp->fullCData(oldp+663,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
    bufp->fullBit(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullQData(oldp+665,(((0xffffffffffffff77ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                               | (QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                              >> 7U)))
                                                   ? 0x88U
                                                   : 0x80U))))),64);
    bufp->fullBit(oldp+667,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
    bufp->fullBit(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
    bufp->fullQData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullBit(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
    bufp->fullQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
    bufp->fullQData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
    bufp->fullQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
    bufp->fullBit(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
    bufp->fullCData(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
    bufp->fullBit(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
    bufp->fullBit(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
    bufp->fullBit(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
    bufp->fullWData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
    bufp->fullWData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
    bufp->fullWData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
    bufp->fullWData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
    bufp->fullWData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
    bufp->fullWData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
    bufp->fullWData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
    bufp->fullWData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
    bufp->fullWData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
    bufp->fullWData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
    bufp->fullWData(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
    bufp->fullWData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
    bufp->fullWData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
    bufp->fullWData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
    bufp->fullWData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
    bufp->fullWData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
    bufp->fullWData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
    bufp->fullWData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
    bufp->fullWData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
    bufp->fullWData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
    bufp->fullWData(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
    bufp->fullWData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
    bufp->fullWData(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
    bufp->fullWData(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
    bufp->fullWData(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
    bufp->fullWData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
    bufp->fullWData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
    bufp->fullWData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
    bufp->fullWData(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
    bufp->fullWData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
    bufp->fullWData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
    bufp->fullWData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
    bufp->fullWData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
    bufp->fullWData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
    bufp->fullWData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
    bufp->fullWData(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
    bufp->fullWData(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
    bufp->fullWData(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
    bufp->fullWData(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
    bufp->fullWData(oldp+849,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
    bufp->fullWData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
    bufp->fullWData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
    bufp->fullWData(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
    bufp->fullWData(oldp+865,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
    bufp->fullWData(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
    bufp->fullWData(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
    bufp->fullWData(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
    bufp->fullWData(oldp+881,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
    bufp->fullWData(oldp+885,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
    bufp->fullWData(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
    bufp->fullWData(oldp+893,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
    bufp->fullWData(oldp+897,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
    bufp->fullWData(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
    bufp->fullWData(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
    bufp->fullWData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
    bufp->fullWData(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
    bufp->fullWData(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
    bufp->fullWData(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
    bufp->fullWData(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
    bufp->fullWData(oldp+929,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
    bufp->fullWData(oldp+933,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
    bufp->fullWData(oldp+937,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
    bufp->fullWData(oldp+941,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
    bufp->fullWData(oldp+945,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
    bufp->fullQData(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
    bufp->fullQData(oldp+951,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
    bufp->fullQData(oldp+953,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
    bufp->fullQData(oldp+955,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
    bufp->fullQData(oldp+957,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
    bufp->fullQData(oldp+959,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
    bufp->fullCData(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
    bufp->fullCData(oldp+962,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
    bufp->fullCData(oldp+963,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
    bufp->fullCData(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
    bufp->fullCData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
    bufp->fullCData(oldp+966,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
    bufp->fullCData(oldp+967,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
    bufp->fullCData(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
    bufp->fullCData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
    bufp->fullCData(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
    bufp->fullCData(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
    bufp->fullCData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
    bufp->fullCData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
    bufp->fullCData(oldp+974,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
    bufp->fullCData(oldp+975,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
    bufp->fullCData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
    bufp->fullCData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
    bufp->fullCData(oldp+978,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
    bufp->fullCData(oldp+979,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
    bufp->fullCData(oldp+980,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
    bufp->fullCData(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
    bufp->fullCData(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
    bufp->fullCData(oldp+983,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
    bufp->fullCData(oldp+984,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
    bufp->fullCData(oldp+985,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
    bufp->fullCData(oldp+986,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
    bufp->fullCData(oldp+987,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
    bufp->fullCData(oldp+988,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
    bufp->fullCData(oldp+989,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
    bufp->fullCData(oldp+990,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
    bufp->fullCData(oldp+991,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
    bufp->fullCData(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
    bufp->fullCData(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
    bufp->fullCData(oldp+994,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
    bufp->fullCData(oldp+995,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
    bufp->fullCData(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
    bufp->fullCData(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
    bufp->fullCData(oldp+998,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
    bufp->fullCData(oldp+999,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
    bufp->fullCData(oldp+1000,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
    bufp->fullCData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
    bufp->fullCData(oldp+1002,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
    bufp->fullCData(oldp+1003,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
    bufp->fullCData(oldp+1004,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
    bufp->fullCData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
    bufp->fullCData(oldp+1006,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
    bufp->fullCData(oldp+1007,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
    bufp->fullCData(oldp+1008,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
    bufp->fullCData(oldp+1009,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
    bufp->fullCData(oldp+1010,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
    bufp->fullCData(oldp+1011,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
    bufp->fullCData(oldp+1012,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
    bufp->fullCData(oldp+1013,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
    bufp->fullCData(oldp+1014,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
    bufp->fullCData(oldp+1015,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
    bufp->fullCData(oldp+1016,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
    bufp->fullCData(oldp+1017,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
    bufp->fullCData(oldp+1018,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
    bufp->fullCData(oldp+1019,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
    bufp->fullCData(oldp+1020,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
    bufp->fullCData(oldp+1021,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
    bufp->fullCData(oldp+1022,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
    bufp->fullCData(oldp+1023,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
    bufp->fullCData(oldp+1024,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
    bufp->fullCData(oldp+1025,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullCData(oldp+1026,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                 >> 3U)))),6);
    __Vtemp_hc91b162c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
    __Vtemp_hc91b162c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
    __Vtemp_hc91b162c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
    __Vtemp_hc91b162c__0[3U] = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
    bufp->fullWData(oldp+1027,(__Vtemp_hc91b162c__0),123);
    bufp->fullCData(oldp+1031,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 3U)))),6);
    bufp->fullQData(oldp+1032,(((0xfffffffffffffeULL 
                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 8U)) | (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                          >> 2U))))))),56);
    bufp->fullBit(oldp+1034,((1U & (((0x3fU == (0x3fU 
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
    bufp->fullBit(oldp+1035,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                    >> 0x1aU))));
    bufp->fullQData(oldp+1036,((0xffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                                 >> 2U)))),56);
    bufp->fullQData(oldp+1038,((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                                 >> 2U)))),64);
    bufp->fullCData(oldp+1040,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
    bufp->fullQData(oldp+1041,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
    bufp->fullQData(oldp+1043,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
    bufp->fullQData(oldp+1045,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
    bufp->fullQData(oldp+1047,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
    bufp->fullIData(oldp+1049,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
    bufp->fullIData(oldp+1050,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
    bufp->fullIData(oldp+1051,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
    bufp->fullIData(oldp+1052,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
    bufp->fullBit(oldp+1053,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
    bufp->fullBit(oldp+1054,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
    bufp->fullBit(oldp+1055,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
    bufp->fullBit(oldp+1056,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
    bufp->fullBit(oldp+1057,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
    bufp->fullBit(oldp+1058,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
    bufp->fullBit(oldp+1059,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
    bufp->fullBit(oldp+1060,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
    bufp->fullCData(oldp+1061,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+1062,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+1063,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+1064,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
    bufp->fullBit(oldp+1065,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
    bufp->fullCData(oldp+1066,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                       + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                      - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
    bufp->fullBit(oldp+1067,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+1068,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullCData(oldp+1070,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+1071,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+1072,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    bufp->fullBit(oldp+1073,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullWData(oldp+1074,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
    bufp->fullWData(oldp+1078,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
    bufp->fullWData(oldp+1082,(__Vtemp_h96d8aca3__0),128);
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
    bufp->fullWData(oldp+1086,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+1090,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+1091,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullBit(oldp+1092,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+1093,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+1095,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+1096,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                               >> 3U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                 : (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+1098,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+1099,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                               >> 3U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                 : (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+1101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+1102,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                 >> 4U)))),6);
    bufp->fullBit(oldp+1103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullQData(oldp+1104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+1106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+1108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+1109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
    bufp->fullBit(oldp+1110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
    bufp->fullQData(oldp+1111,((1ULL << (0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                          >> 4U))))),64);
    bufp->fullBit(oldp+1113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+1114,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+1115,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+1116,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+1117,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+1118,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                              & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 0x1fU)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
    bufp->fullBit(oldp+1119,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullQData(oldp+1120,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                >> 0xaU)),54);
    bufp->fullCData(oldp+1122,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 4U)))),6);
    bufp->fullCData(oldp+1123,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+1124,((0x3fffffffffffffULL 
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
    bufp->fullQData(oldp+1126,((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+1128,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
    bufp->fullBit(oldp+1129,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+1130,((0xfffffffffffffff0ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
    bufp->fullQData(oldp+1132,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU)),54);
    bufp->fullCData(oldp+1134,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
    bufp->fullQData(oldp+1135,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullBit(oldp+1137,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
    bufp->fullQData(oldp+1138,((1ULL << (0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                          >> 4U))))),64);
    bufp->fullQData(oldp+1140,((~ (1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U)))))),64);
    bufp->fullCData(oldp+1142,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
    bufp->fullWData(oldp+1143,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
    bufp->fullWData(oldp+1147,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
    bufp->fullWData(oldp+1151,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
    bufp->fullWData(oldp+1155,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
    bufp->fullWData(oldp+1159,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
    bufp->fullWData(oldp+1163,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
    bufp->fullWData(oldp+1167,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
    bufp->fullWData(oldp+1171,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
    bufp->fullWData(oldp+1175,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
    bufp->fullWData(oldp+1179,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
    bufp->fullWData(oldp+1183,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
    bufp->fullWData(oldp+1187,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
    bufp->fullWData(oldp+1191,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
    bufp->fullWData(oldp+1195,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
    bufp->fullWData(oldp+1199,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
    bufp->fullWData(oldp+1203,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
    bufp->fullWData(oldp+1207,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
    bufp->fullWData(oldp+1211,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
    bufp->fullWData(oldp+1215,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
    bufp->fullWData(oldp+1219,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
    bufp->fullWData(oldp+1223,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
    bufp->fullWData(oldp+1227,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
    bufp->fullWData(oldp+1231,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
    bufp->fullWData(oldp+1235,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
    bufp->fullWData(oldp+1239,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
    bufp->fullWData(oldp+1243,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
    bufp->fullWData(oldp+1247,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
    bufp->fullWData(oldp+1251,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
    bufp->fullWData(oldp+1255,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
    bufp->fullWData(oldp+1259,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
    bufp->fullWData(oldp+1263,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
    bufp->fullWData(oldp+1267,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
    bufp->fullWData(oldp+1271,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
    bufp->fullWData(oldp+1275,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
    bufp->fullWData(oldp+1279,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
    bufp->fullWData(oldp+1283,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
    bufp->fullWData(oldp+1287,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
    bufp->fullWData(oldp+1291,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
    bufp->fullWData(oldp+1295,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
    bufp->fullWData(oldp+1299,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
    bufp->fullWData(oldp+1303,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
    bufp->fullWData(oldp+1307,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
    bufp->fullWData(oldp+1311,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
    bufp->fullWData(oldp+1315,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
    bufp->fullWData(oldp+1319,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
    bufp->fullWData(oldp+1323,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
    bufp->fullWData(oldp+1327,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
    bufp->fullWData(oldp+1331,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
    bufp->fullWData(oldp+1335,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
    bufp->fullWData(oldp+1339,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
    bufp->fullWData(oldp+1343,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
    bufp->fullWData(oldp+1347,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
    bufp->fullWData(oldp+1351,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
    bufp->fullWData(oldp+1355,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
    bufp->fullWData(oldp+1359,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
    bufp->fullWData(oldp+1363,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
    bufp->fullWData(oldp+1367,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
    bufp->fullWData(oldp+1371,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
    bufp->fullWData(oldp+1375,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
    bufp->fullWData(oldp+1379,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
    bufp->fullWData(oldp+1383,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
    bufp->fullWData(oldp+1387,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
    bufp->fullWData(oldp+1391,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
    bufp->fullWData(oldp+1395,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
    bufp->fullWData(oldp+1399,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
    bufp->fullWData(oldp+1403,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
    bufp->fullWData(oldp+1407,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
    bufp->fullWData(oldp+1411,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
    bufp->fullWData(oldp+1415,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
    bufp->fullWData(oldp+1419,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
    bufp->fullWData(oldp+1423,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
    bufp->fullWData(oldp+1427,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
    bufp->fullWData(oldp+1431,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
    bufp->fullWData(oldp+1435,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
    bufp->fullWData(oldp+1439,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
    bufp->fullWData(oldp+1443,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
    bufp->fullWData(oldp+1447,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
    bufp->fullWData(oldp+1451,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
    bufp->fullWData(oldp+1455,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
    bufp->fullWData(oldp+1459,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
    bufp->fullWData(oldp+1463,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
    bufp->fullWData(oldp+1467,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
    bufp->fullWData(oldp+1471,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
    bufp->fullWData(oldp+1475,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
    bufp->fullWData(oldp+1479,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
    bufp->fullWData(oldp+1483,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
    bufp->fullWData(oldp+1487,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
    bufp->fullWData(oldp+1491,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
    bufp->fullWData(oldp+1495,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
    bufp->fullWData(oldp+1499,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
    bufp->fullWData(oldp+1503,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
    bufp->fullWData(oldp+1507,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
    bufp->fullWData(oldp+1511,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
    bufp->fullWData(oldp+1515,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
    bufp->fullWData(oldp+1519,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
    bufp->fullWData(oldp+1523,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
    bufp->fullWData(oldp+1527,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
    bufp->fullWData(oldp+1531,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
    bufp->fullWData(oldp+1535,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
    bufp->fullWData(oldp+1539,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
    bufp->fullWData(oldp+1543,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
    bufp->fullWData(oldp+1547,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
    bufp->fullWData(oldp+1551,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
    bufp->fullWData(oldp+1555,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
    bufp->fullWData(oldp+1559,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
    bufp->fullWData(oldp+1563,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
    bufp->fullWData(oldp+1567,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
    bufp->fullWData(oldp+1571,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
    bufp->fullWData(oldp+1575,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
    bufp->fullWData(oldp+1579,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
    bufp->fullWData(oldp+1583,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
    bufp->fullWData(oldp+1587,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
    bufp->fullWData(oldp+1591,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
    bufp->fullWData(oldp+1595,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
    bufp->fullWData(oldp+1599,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
    bufp->fullWData(oldp+1603,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
    bufp->fullWData(oldp+1607,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
    bufp->fullWData(oldp+1611,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
    bufp->fullWData(oldp+1615,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
    bufp->fullWData(oldp+1619,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
    bufp->fullWData(oldp+1623,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
    bufp->fullWData(oldp+1627,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
    bufp->fullWData(oldp+1631,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
    bufp->fullWData(oldp+1635,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
    bufp->fullWData(oldp+1639,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
    bufp->fullWData(oldp+1643,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
    bufp->fullWData(oldp+1647,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
    bufp->fullWData(oldp+1651,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
    bufp->fullWData(oldp+1655,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
    bufp->fullWData(oldp+1659,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
    bufp->fullWData(oldp+1663,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
    bufp->fullWData(oldp+1667,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
    bufp->fullWData(oldp+1671,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
    bufp->fullWData(oldp+1675,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
    bufp->fullWData(oldp+1679,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
    bufp->fullWData(oldp+1683,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
    bufp->fullWData(oldp+1687,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
    bufp->fullWData(oldp+1691,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
    bufp->fullWData(oldp+1695,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
    bufp->fullWData(oldp+1699,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
    bufp->fullWData(oldp+1703,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
    bufp->fullWData(oldp+1707,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
    bufp->fullWData(oldp+1711,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
    bufp->fullWData(oldp+1715,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
    bufp->fullWData(oldp+1719,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
    bufp->fullWData(oldp+1723,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
    bufp->fullWData(oldp+1727,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
    bufp->fullWData(oldp+1731,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
    bufp->fullWData(oldp+1735,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
    bufp->fullWData(oldp+1739,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
    bufp->fullWData(oldp+1743,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
    bufp->fullWData(oldp+1747,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
    bufp->fullWData(oldp+1751,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
    bufp->fullWData(oldp+1755,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
    bufp->fullWData(oldp+1759,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
    bufp->fullWData(oldp+1763,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
    bufp->fullWData(oldp+1767,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
    bufp->fullWData(oldp+1771,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
    bufp->fullWData(oldp+1775,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
    bufp->fullWData(oldp+1779,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
    bufp->fullWData(oldp+1783,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
    bufp->fullWData(oldp+1787,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
    bufp->fullWData(oldp+1791,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
    bufp->fullWData(oldp+1795,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
    bufp->fullWData(oldp+1799,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
    bufp->fullWData(oldp+1803,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
    bufp->fullWData(oldp+1807,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
    bufp->fullWData(oldp+1811,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
    bufp->fullWData(oldp+1815,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
    bufp->fullWData(oldp+1819,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
    bufp->fullWData(oldp+1823,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
    bufp->fullWData(oldp+1827,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
    bufp->fullWData(oldp+1831,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
    bufp->fullWData(oldp+1835,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
    bufp->fullWData(oldp+1839,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
    bufp->fullWData(oldp+1843,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
    bufp->fullWData(oldp+1847,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
    bufp->fullWData(oldp+1851,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
    bufp->fullWData(oldp+1855,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
    bufp->fullWData(oldp+1859,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
    bufp->fullWData(oldp+1863,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
    bufp->fullWData(oldp+1867,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
    bufp->fullWData(oldp+1871,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
    bufp->fullWData(oldp+1875,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
    bufp->fullWData(oldp+1879,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
    bufp->fullWData(oldp+1883,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
    bufp->fullWData(oldp+1887,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
    bufp->fullWData(oldp+1891,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
    bufp->fullWData(oldp+1895,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
    bufp->fullWData(oldp+1899,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
    bufp->fullWData(oldp+1903,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
    bufp->fullWData(oldp+1907,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
    bufp->fullWData(oldp+1911,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
    bufp->fullWData(oldp+1915,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
    bufp->fullWData(oldp+1919,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
    bufp->fullWData(oldp+1923,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
    bufp->fullWData(oldp+1927,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
    bufp->fullWData(oldp+1931,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
    bufp->fullWData(oldp+1935,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
    bufp->fullWData(oldp+1939,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
    bufp->fullWData(oldp+1943,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
    bufp->fullWData(oldp+1947,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
    bufp->fullWData(oldp+1951,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
    bufp->fullWData(oldp+1955,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
    bufp->fullWData(oldp+1959,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
    bufp->fullWData(oldp+1963,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
    bufp->fullWData(oldp+1967,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
    bufp->fullWData(oldp+1971,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
    bufp->fullWData(oldp+1975,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
    bufp->fullWData(oldp+1979,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
    bufp->fullWData(oldp+1983,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
    bufp->fullWData(oldp+1987,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
    bufp->fullWData(oldp+1991,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
    bufp->fullWData(oldp+1995,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
    bufp->fullWData(oldp+1999,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
    bufp->fullWData(oldp+2003,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
    bufp->fullWData(oldp+2007,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
    bufp->fullWData(oldp+2011,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
    bufp->fullWData(oldp+2015,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
    bufp->fullWData(oldp+2019,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
    bufp->fullWData(oldp+2023,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
    bufp->fullWData(oldp+2027,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
    bufp->fullWData(oldp+2031,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
    bufp->fullWData(oldp+2035,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
    bufp->fullWData(oldp+2039,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
    bufp->fullWData(oldp+2043,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
    bufp->fullWData(oldp+2047,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
    bufp->fullWData(oldp+2051,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
    bufp->fullWData(oldp+2055,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
    bufp->fullWData(oldp+2059,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
    bufp->fullWData(oldp+2063,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
    bufp->fullWData(oldp+2067,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
    bufp->fullWData(oldp+2071,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
    bufp->fullWData(oldp+2075,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
    bufp->fullWData(oldp+2079,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
    bufp->fullWData(oldp+2083,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
    bufp->fullWData(oldp+2087,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
    bufp->fullWData(oldp+2091,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
    bufp->fullWData(oldp+2095,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
    bufp->fullWData(oldp+2099,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
    bufp->fullWData(oldp+2103,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
    bufp->fullWData(oldp+2107,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
    bufp->fullWData(oldp+2111,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
    bufp->fullWData(oldp+2115,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
    bufp->fullWData(oldp+2119,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
    bufp->fullWData(oldp+2123,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
    bufp->fullWData(oldp+2127,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
    bufp->fullWData(oldp+2131,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
    bufp->fullWData(oldp+2135,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
    bufp->fullWData(oldp+2139,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
    bufp->fullWData(oldp+2143,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
    bufp->fullWData(oldp+2147,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
    bufp->fullWData(oldp+2151,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
    bufp->fullWData(oldp+2155,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
    bufp->fullWData(oldp+2159,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
    bufp->fullWData(oldp+2163,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
    bufp->fullWData(oldp+2167,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
    bufp->fullWData(oldp+2171,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
    bufp->fullWData(oldp+2175,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
    bufp->fullWData(oldp+2179,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
    bufp->fullWData(oldp+2183,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
    bufp->fullWData(oldp+2187,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
    bufp->fullWData(oldp+2191,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
    bufp->fullWData(oldp+2195,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
    bufp->fullWData(oldp+2199,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
    bufp->fullWData(oldp+2203,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
    bufp->fullWData(oldp+2207,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
    bufp->fullWData(oldp+2211,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
    bufp->fullWData(oldp+2215,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
    bufp->fullWData(oldp+2219,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
    bufp->fullWData(oldp+2223,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
    bufp->fullWData(oldp+2227,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
    bufp->fullWData(oldp+2231,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
    bufp->fullWData(oldp+2235,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
    bufp->fullWData(oldp+2239,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
    bufp->fullWData(oldp+2243,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
    bufp->fullWData(oldp+2247,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
    bufp->fullWData(oldp+2251,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
    bufp->fullWData(oldp+2255,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
    bufp->fullWData(oldp+2259,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
    bufp->fullWData(oldp+2263,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
    bufp->fullWData(oldp+2267,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
    bufp->fullWData(oldp+2271,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
    bufp->fullWData(oldp+2275,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
    bufp->fullWData(oldp+2279,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
    bufp->fullWData(oldp+2283,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
    bufp->fullWData(oldp+2287,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
    bufp->fullWData(oldp+2291,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
    bufp->fullWData(oldp+2295,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
    bufp->fullWData(oldp+2299,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
    bufp->fullWData(oldp+2303,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
    bufp->fullWData(oldp+2307,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
    bufp->fullWData(oldp+2311,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
    bufp->fullWData(oldp+2315,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
    bufp->fullWData(oldp+2319,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
    bufp->fullWData(oldp+2323,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
    bufp->fullWData(oldp+2327,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
    bufp->fullWData(oldp+2331,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
    bufp->fullWData(oldp+2335,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
    bufp->fullWData(oldp+2339,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
    bufp->fullWData(oldp+2343,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
    bufp->fullWData(oldp+2347,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
    bufp->fullWData(oldp+2351,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
    bufp->fullWData(oldp+2355,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
    bufp->fullWData(oldp+2359,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
    bufp->fullWData(oldp+2363,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
    bufp->fullWData(oldp+2367,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
    bufp->fullWData(oldp+2371,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
    bufp->fullWData(oldp+2375,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
    bufp->fullWData(oldp+2379,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
    bufp->fullWData(oldp+2383,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
    bufp->fullWData(oldp+2387,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
    bufp->fullWData(oldp+2391,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
    bufp->fullWData(oldp+2395,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
    bufp->fullWData(oldp+2399,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
    bufp->fullWData(oldp+2403,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
    bufp->fullWData(oldp+2407,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
    bufp->fullWData(oldp+2411,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
    bufp->fullWData(oldp+2415,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
    bufp->fullWData(oldp+2419,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
    bufp->fullWData(oldp+2423,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
    bufp->fullWData(oldp+2427,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
    bufp->fullWData(oldp+2431,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
    bufp->fullWData(oldp+2435,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
    bufp->fullWData(oldp+2439,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
    bufp->fullWData(oldp+2443,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
    bufp->fullWData(oldp+2447,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
    bufp->fullWData(oldp+2451,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
    bufp->fullWData(oldp+2455,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
    bufp->fullWData(oldp+2459,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
    bufp->fullWData(oldp+2463,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
    bufp->fullWData(oldp+2467,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
    bufp->fullWData(oldp+2471,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
    bufp->fullWData(oldp+2475,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
    bufp->fullWData(oldp+2479,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
    bufp->fullWData(oldp+2483,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
    bufp->fullWData(oldp+2487,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
    bufp->fullWData(oldp+2491,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
    bufp->fullWData(oldp+2495,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
    bufp->fullWData(oldp+2499,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
    bufp->fullWData(oldp+2503,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
    bufp->fullWData(oldp+2507,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
    bufp->fullWData(oldp+2511,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
    bufp->fullWData(oldp+2515,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
    bufp->fullWData(oldp+2519,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
    bufp->fullWData(oldp+2523,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
    bufp->fullWData(oldp+2527,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
    bufp->fullWData(oldp+2531,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
    bufp->fullWData(oldp+2535,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
    bufp->fullWData(oldp+2539,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
    bufp->fullWData(oldp+2543,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
    bufp->fullWData(oldp+2547,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
    bufp->fullWData(oldp+2551,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
    bufp->fullWData(oldp+2555,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
    bufp->fullWData(oldp+2559,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
    bufp->fullWData(oldp+2563,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
    bufp->fullWData(oldp+2567,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
    bufp->fullWData(oldp+2571,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
    bufp->fullWData(oldp+2575,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
    bufp->fullWData(oldp+2579,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
    bufp->fullWData(oldp+2583,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
    bufp->fullWData(oldp+2587,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
    bufp->fullWData(oldp+2591,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
    bufp->fullWData(oldp+2595,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
    bufp->fullWData(oldp+2599,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
    bufp->fullWData(oldp+2603,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
    bufp->fullWData(oldp+2607,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
    bufp->fullWData(oldp+2611,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
    bufp->fullWData(oldp+2615,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
    bufp->fullWData(oldp+2619,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
    bufp->fullWData(oldp+2623,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
    bufp->fullWData(oldp+2627,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
    bufp->fullWData(oldp+2631,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
    bufp->fullWData(oldp+2635,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
    bufp->fullWData(oldp+2639,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
    bufp->fullWData(oldp+2643,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
    bufp->fullWData(oldp+2647,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
    bufp->fullWData(oldp+2651,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
    bufp->fullWData(oldp+2655,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
    bufp->fullWData(oldp+2659,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
    bufp->fullWData(oldp+2663,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
    bufp->fullWData(oldp+2667,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
    bufp->fullWData(oldp+2671,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
    bufp->fullWData(oldp+2675,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
    bufp->fullWData(oldp+2679,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
    bufp->fullWData(oldp+2683,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
    bufp->fullWData(oldp+2687,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
    bufp->fullWData(oldp+2691,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
    bufp->fullWData(oldp+2695,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
    bufp->fullWData(oldp+2699,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
    bufp->fullWData(oldp+2703,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
    bufp->fullWData(oldp+2707,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
    bufp->fullWData(oldp+2711,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
    bufp->fullWData(oldp+2715,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
    bufp->fullWData(oldp+2719,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
    bufp->fullWData(oldp+2723,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
    bufp->fullWData(oldp+2727,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
    bufp->fullWData(oldp+2731,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
    bufp->fullWData(oldp+2735,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
    bufp->fullWData(oldp+2739,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
    bufp->fullWData(oldp+2743,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
    bufp->fullWData(oldp+2747,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
    bufp->fullWData(oldp+2751,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
    bufp->fullWData(oldp+2755,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
    bufp->fullWData(oldp+2759,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
    bufp->fullWData(oldp+2763,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
    bufp->fullWData(oldp+2767,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
    bufp->fullWData(oldp+2771,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
    bufp->fullWData(oldp+2775,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
    bufp->fullWData(oldp+2779,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
    bufp->fullWData(oldp+2783,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
    bufp->fullWData(oldp+2787,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
    bufp->fullWData(oldp+2791,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
    bufp->fullWData(oldp+2795,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
    bufp->fullWData(oldp+2799,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
    bufp->fullWData(oldp+2803,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
    bufp->fullWData(oldp+2807,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
    bufp->fullWData(oldp+2811,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
    bufp->fullWData(oldp+2815,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
    bufp->fullWData(oldp+2819,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
    bufp->fullWData(oldp+2823,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
    bufp->fullWData(oldp+2827,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
    bufp->fullWData(oldp+2831,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
    bufp->fullWData(oldp+2835,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
    bufp->fullWData(oldp+2839,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
    bufp->fullWData(oldp+2843,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
    bufp->fullWData(oldp+2847,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
    bufp->fullWData(oldp+2851,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
    bufp->fullWData(oldp+2855,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
    bufp->fullWData(oldp+2859,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
    bufp->fullWData(oldp+2863,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
    bufp->fullWData(oldp+2867,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
    bufp->fullWData(oldp+2871,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
    bufp->fullWData(oldp+2875,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
    bufp->fullWData(oldp+2879,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
    bufp->fullWData(oldp+2883,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
    bufp->fullWData(oldp+2887,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
    bufp->fullWData(oldp+2891,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
    bufp->fullWData(oldp+2895,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
    bufp->fullWData(oldp+2899,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
    bufp->fullWData(oldp+2903,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
    bufp->fullWData(oldp+2907,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
    bufp->fullWData(oldp+2911,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
    bufp->fullWData(oldp+2915,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
    bufp->fullWData(oldp+2919,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
    bufp->fullWData(oldp+2923,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
    bufp->fullWData(oldp+2927,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
    bufp->fullWData(oldp+2931,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
    bufp->fullWData(oldp+2935,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
    bufp->fullWData(oldp+2939,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
    bufp->fullWData(oldp+2943,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
    bufp->fullWData(oldp+2947,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
    bufp->fullWData(oldp+2951,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
    bufp->fullWData(oldp+2955,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
    bufp->fullWData(oldp+2959,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
    bufp->fullWData(oldp+2963,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
    bufp->fullWData(oldp+2967,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
    bufp->fullWData(oldp+2971,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
    bufp->fullWData(oldp+2975,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
    bufp->fullWData(oldp+2979,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
    bufp->fullWData(oldp+2983,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
    bufp->fullWData(oldp+2987,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
    bufp->fullWData(oldp+2991,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
    bufp->fullWData(oldp+2995,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
    bufp->fullWData(oldp+2999,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
    bufp->fullWData(oldp+3003,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
    bufp->fullWData(oldp+3007,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
    bufp->fullWData(oldp+3011,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
    bufp->fullWData(oldp+3015,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
    bufp->fullWData(oldp+3019,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
    bufp->fullWData(oldp+3023,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
    bufp->fullWData(oldp+3027,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
    bufp->fullWData(oldp+3031,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
    bufp->fullWData(oldp+3035,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
    bufp->fullWData(oldp+3039,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
    bufp->fullWData(oldp+3043,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
    bufp->fullWData(oldp+3047,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
    bufp->fullWData(oldp+3051,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
    bufp->fullWData(oldp+3055,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
    bufp->fullWData(oldp+3059,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
    bufp->fullWData(oldp+3063,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
    bufp->fullWData(oldp+3067,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
    bufp->fullWData(oldp+3071,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
    bufp->fullWData(oldp+3075,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
    bufp->fullWData(oldp+3079,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
    bufp->fullWData(oldp+3083,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
    bufp->fullWData(oldp+3087,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
    bufp->fullWData(oldp+3091,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
    bufp->fullWData(oldp+3095,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
    bufp->fullWData(oldp+3099,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
    bufp->fullWData(oldp+3103,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
    bufp->fullWData(oldp+3107,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
    bufp->fullWData(oldp+3111,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
    bufp->fullWData(oldp+3115,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
    bufp->fullWData(oldp+3119,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
    bufp->fullWData(oldp+3123,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
    bufp->fullWData(oldp+3127,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
    bufp->fullWData(oldp+3131,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
    bufp->fullWData(oldp+3135,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
    bufp->fullWData(oldp+3139,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
    bufp->fullWData(oldp+3143,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
    bufp->fullWData(oldp+3147,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
    bufp->fullWData(oldp+3151,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
    bufp->fullWData(oldp+3155,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
    bufp->fullWData(oldp+3159,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
    bufp->fullWData(oldp+3163,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
    bufp->fullWData(oldp+3167,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
    bufp->fullWData(oldp+3171,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
    bufp->fullWData(oldp+3175,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
    bufp->fullWData(oldp+3179,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
    bufp->fullWData(oldp+3183,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
    bufp->fullWData(oldp+3187,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
    bufp->fullBit(oldp+3191,(vlSelf->clock));
    bufp->fullBit(oldp+3192,(vlSelf->reset));
    bufp->fullQData(oldp+3193,(vlSelf->io_difftest_reg_0),64);
    bufp->fullQData(oldp+3195,(vlSelf->io_difftest_reg_1),64);
    bufp->fullQData(oldp+3197,(vlSelf->io_difftest_reg_2),64);
    bufp->fullQData(oldp+3199,(vlSelf->io_difftest_reg_3),64);
    bufp->fullQData(oldp+3201,(vlSelf->io_difftest_reg_4),64);
    bufp->fullQData(oldp+3203,(vlSelf->io_difftest_reg_5),64);
    bufp->fullQData(oldp+3205,(vlSelf->io_difftest_reg_6),64);
    bufp->fullQData(oldp+3207,(vlSelf->io_difftest_reg_7),64);
    bufp->fullQData(oldp+3209,(vlSelf->io_difftest_reg_8),64);
    bufp->fullQData(oldp+3211,(vlSelf->io_difftest_reg_9),64);
    bufp->fullQData(oldp+3213,(vlSelf->io_difftest_reg_10),64);
    bufp->fullQData(oldp+3215,(vlSelf->io_difftest_reg_11),64);
    bufp->fullQData(oldp+3217,(vlSelf->io_difftest_reg_12),64);
    bufp->fullQData(oldp+3219,(vlSelf->io_difftest_reg_13),64);
    bufp->fullQData(oldp+3221,(vlSelf->io_difftest_reg_14),64);
    bufp->fullQData(oldp+3223,(vlSelf->io_difftest_reg_15),64);
    bufp->fullQData(oldp+3225,(vlSelf->io_difftest_reg_16),64);
    bufp->fullQData(oldp+3227,(vlSelf->io_difftest_reg_17),64);
    bufp->fullQData(oldp+3229,(vlSelf->io_difftest_reg_18),64);
    bufp->fullQData(oldp+3231,(vlSelf->io_difftest_reg_19),64);
    bufp->fullQData(oldp+3233,(vlSelf->io_difftest_reg_20),64);
    bufp->fullQData(oldp+3235,(vlSelf->io_difftest_reg_21),64);
    bufp->fullQData(oldp+3237,(vlSelf->io_difftest_reg_22),64);
    bufp->fullQData(oldp+3239,(vlSelf->io_difftest_reg_23),64);
    bufp->fullQData(oldp+3241,(vlSelf->io_difftest_reg_24),64);
    bufp->fullQData(oldp+3243,(vlSelf->io_difftest_reg_25),64);
    bufp->fullQData(oldp+3245,(vlSelf->io_difftest_reg_26),64);
    bufp->fullQData(oldp+3247,(vlSelf->io_difftest_reg_27),64);
    bufp->fullQData(oldp+3249,(vlSelf->io_difftest_reg_28),64);
    bufp->fullQData(oldp+3251,(vlSelf->io_difftest_reg_29),64);
    bufp->fullQData(oldp+3253,(vlSelf->io_difftest_reg_30),64);
    bufp->fullQData(oldp+3255,(vlSelf->io_difftest_reg_31),64);
    bufp->fullQData(oldp+3257,(vlSelf->io_difftest_pc),64);
    bufp->fullIData(oldp+3259,(vlSelf->io_difftest_inst),32);
    bufp->fullBit(oldp+3260,(vlSelf->io_difftest_commit));
    bufp->fullQData(oldp+3261,(vlSelf->io_inst_counter),64);
    bufp->fullBit(oldp+3263,(vlSelf->io_difftest_irq));
    bufp->fullQData(oldp+3264,(vlSelf->io_difftest_mstatus),64);
    bufp->fullQData(oldp+3266,(vlSelf->io_difftest_mcause),64);
    bufp->fullQData(oldp+3268,(vlSelf->io_difftest_mepc),64);
    bufp->fullQData(oldp+3270,(vlSelf->io_difftest_mtvec),64);
    bufp->fullBit(oldp+3272,(vlSelf->io_difftest_peripheral));
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+3273,(__Vtemp_hd56bd579__0),128);
    bufp->fullBit(oldp+3277,(1U));
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+3278,(__Vtemp_hd09821c2__0),128);
}
