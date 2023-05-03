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
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declQuad(c+3029,"io_difftest_reg_0", false,-1, 63,0);
    tracep->declQuad(c+3031,"io_difftest_reg_1", false,-1, 63,0);
    tracep->declQuad(c+3033,"io_difftest_reg_2", false,-1, 63,0);
    tracep->declQuad(c+3035,"io_difftest_reg_3", false,-1, 63,0);
    tracep->declQuad(c+3037,"io_difftest_reg_4", false,-1, 63,0);
    tracep->declQuad(c+3039,"io_difftest_reg_5", false,-1, 63,0);
    tracep->declQuad(c+3041,"io_difftest_reg_6", false,-1, 63,0);
    tracep->declQuad(c+3043,"io_difftest_reg_7", false,-1, 63,0);
    tracep->declQuad(c+3045,"io_difftest_reg_8", false,-1, 63,0);
    tracep->declQuad(c+3047,"io_difftest_reg_9", false,-1, 63,0);
    tracep->declQuad(c+3049,"io_difftest_reg_10", false,-1, 63,0);
    tracep->declQuad(c+3051,"io_difftest_reg_11", false,-1, 63,0);
    tracep->declQuad(c+3053,"io_difftest_reg_12", false,-1, 63,0);
    tracep->declQuad(c+3055,"io_difftest_reg_13", false,-1, 63,0);
    tracep->declQuad(c+3057,"io_difftest_reg_14", false,-1, 63,0);
    tracep->declQuad(c+3059,"io_difftest_reg_15", false,-1, 63,0);
    tracep->declQuad(c+3061,"io_difftest_reg_16", false,-1, 63,0);
    tracep->declQuad(c+3063,"io_difftest_reg_17", false,-1, 63,0);
    tracep->declQuad(c+3065,"io_difftest_reg_18", false,-1, 63,0);
    tracep->declQuad(c+3067,"io_difftest_reg_19", false,-1, 63,0);
    tracep->declQuad(c+3069,"io_difftest_reg_20", false,-1, 63,0);
    tracep->declQuad(c+3071,"io_difftest_reg_21", false,-1, 63,0);
    tracep->declQuad(c+3073,"io_difftest_reg_22", false,-1, 63,0);
    tracep->declQuad(c+3075,"io_difftest_reg_23", false,-1, 63,0);
    tracep->declQuad(c+3077,"io_difftest_reg_24", false,-1, 63,0);
    tracep->declQuad(c+3079,"io_difftest_reg_25", false,-1, 63,0);
    tracep->declQuad(c+3081,"io_difftest_reg_26", false,-1, 63,0);
    tracep->declQuad(c+3083,"io_difftest_reg_27", false,-1, 63,0);
    tracep->declQuad(c+3085,"io_difftest_reg_28", false,-1, 63,0);
    tracep->declQuad(c+3087,"io_difftest_reg_29", false,-1, 63,0);
    tracep->declQuad(c+3089,"io_difftest_reg_30", false,-1, 63,0);
    tracep->declQuad(c+3091,"io_difftest_reg_31", false,-1, 63,0);
    tracep->declQuad(c+3093,"io_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3095,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+3096,"io_difftest_commit", false,-1);
    tracep->declQuad(c+3097,"io_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3099,"io_difftest_irq", false,-1);
    tracep->declQuad(c+3100,"io_difftest_mstatus", false,-1, 63,0);
    tracep->declQuad(c+3102,"io_difftest_mcause", false,-1, 63,0);
    tracep->declQuad(c+3104,"io_difftest_mepc", false,-1, 63,0);
    tracep->declQuad(c+3106,"io_difftest_mtvec", false,-1, 63,0);
    tracep->declBit(c+3108,"io_difftest_peripheral", false,-1);
    tracep->pushNamePrefix("riscv_soc ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declQuad(c+3029,"io_difftest_reg_0", false,-1, 63,0);
    tracep->declQuad(c+3031,"io_difftest_reg_1", false,-1, 63,0);
    tracep->declQuad(c+3033,"io_difftest_reg_2", false,-1, 63,0);
    tracep->declQuad(c+3035,"io_difftest_reg_3", false,-1, 63,0);
    tracep->declQuad(c+3037,"io_difftest_reg_4", false,-1, 63,0);
    tracep->declQuad(c+3039,"io_difftest_reg_5", false,-1, 63,0);
    tracep->declQuad(c+3041,"io_difftest_reg_6", false,-1, 63,0);
    tracep->declQuad(c+3043,"io_difftest_reg_7", false,-1, 63,0);
    tracep->declQuad(c+3045,"io_difftest_reg_8", false,-1, 63,0);
    tracep->declQuad(c+3047,"io_difftest_reg_9", false,-1, 63,0);
    tracep->declQuad(c+3049,"io_difftest_reg_10", false,-1, 63,0);
    tracep->declQuad(c+3051,"io_difftest_reg_11", false,-1, 63,0);
    tracep->declQuad(c+3053,"io_difftest_reg_12", false,-1, 63,0);
    tracep->declQuad(c+3055,"io_difftest_reg_13", false,-1, 63,0);
    tracep->declQuad(c+3057,"io_difftest_reg_14", false,-1, 63,0);
    tracep->declQuad(c+3059,"io_difftest_reg_15", false,-1, 63,0);
    tracep->declQuad(c+3061,"io_difftest_reg_16", false,-1, 63,0);
    tracep->declQuad(c+3063,"io_difftest_reg_17", false,-1, 63,0);
    tracep->declQuad(c+3065,"io_difftest_reg_18", false,-1, 63,0);
    tracep->declQuad(c+3067,"io_difftest_reg_19", false,-1, 63,0);
    tracep->declQuad(c+3069,"io_difftest_reg_20", false,-1, 63,0);
    tracep->declQuad(c+3071,"io_difftest_reg_21", false,-1, 63,0);
    tracep->declQuad(c+3073,"io_difftest_reg_22", false,-1, 63,0);
    tracep->declQuad(c+3075,"io_difftest_reg_23", false,-1, 63,0);
    tracep->declQuad(c+3077,"io_difftest_reg_24", false,-1, 63,0);
    tracep->declQuad(c+3079,"io_difftest_reg_25", false,-1, 63,0);
    tracep->declQuad(c+3081,"io_difftest_reg_26", false,-1, 63,0);
    tracep->declQuad(c+3083,"io_difftest_reg_27", false,-1, 63,0);
    tracep->declQuad(c+3085,"io_difftest_reg_28", false,-1, 63,0);
    tracep->declQuad(c+3087,"io_difftest_reg_29", false,-1, 63,0);
    tracep->declQuad(c+3089,"io_difftest_reg_30", false,-1, 63,0);
    tracep->declQuad(c+3091,"io_difftest_reg_31", false,-1, 63,0);
    tracep->declQuad(c+3093,"io_difftest_pc", false,-1, 63,0);
    tracep->declBus(c+3095,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+3096,"io_difftest_commit", false,-1);
    tracep->declQuad(c+3097,"io_inst_counter", false,-1, 63,0);
    tracep->declBit(c+3099,"io_difftest_irq", false,-1);
    tracep->declQuad(c+3100,"io_difftest_mstatus", false,-1, 63,0);
    tracep->declQuad(c+3102,"io_difftest_mcause", false,-1, 63,0);
    tracep->declQuad(c+3104,"io_difftest_mepc", false,-1, 63,0);
    tracep->declQuad(c+3106,"io_difftest_mtvec", false,-1, 63,0);
    tracep->declBit(c+3108,"io_difftest_peripheral", false,-1);
    tracep->pushNamePrefix("axi_ram ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+1,"io_ram_bus_aw_valid", false,-1);
    tracep->declQuad(c+2,"io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+4,"io_ram_bus_w_valid", false,-1);
    tracep->declQuad(c+5,"io_ram_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+7,"io_ram_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+8,"io_ram_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+9,"io_ram_bus_ar_valid", false,-1);
    tracep->declQuad(c+10,"io_ram_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+12,"io_ram_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+13,"io_ram_bus_aw_ready", false,-1);
    tracep->declBit(c+14,"io_ram_bus_w_ready", false,-1);
    tracep->declBit(c+15,"io_ram_bus_b_valid", false,-1);
    tracep->declBit(c+16,"io_ram_bus_ar_ready", false,-1);
    tracep->declBit(c+17,"io_ram_bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_ram_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_ram_bus_r_bits_rlast", false,-1);
    tracep->declQuad(c+21,"reg_raddr", false,-1, 63,0);
    tracep->declBus(c+23,"reg_rlen", false,-1, 3,0);
    tracep->declBit(c+16,"reg_ar_ready", false,-1);
    tracep->declBit(c+17,"reg_r_valid", false,-1);
    tracep->declBit(c+24,"reg_r_state", false,-1);
    tracep->declQuad(c+25,"reg_w_addr", false,-1, 63,0);
    tracep->declBit(c+27,"reg_is_w", false,-1);
    tracep->declBit(c+13,"reg_aw_ready", false,-1);
    tracep->declBit(c+14,"reg_w_ready", false,-1);
    tracep->declBit(c+15,"reg_b_valid", false,-1);
    tracep->declQuad(c+18,"reg_r_data", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declQuad(c+28,"raddr", false,-1, 63,0);
    tracep->declQuad(c+30,"rdata", false,-1, 63,0);
    tracep->declBit(c+9,"rflag", false,-1);
    tracep->declQuad(c+25,"waddr", false,-1, 63,0);
    tracep->declQuad(c+5,"wdata", false,-1, 63,0);
    tracep->declQuad(c+32,"wmask", false,-1, 63,0);
    tracep->declBit(c+34,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+13,"io_axi_bus_aw_ready", false,-1);
    tracep->declBit(c+14,"io_axi_bus_w_ready", false,-1);
    tracep->declBit(c+15,"io_axi_bus_b_valid", false,-1);
    tracep->declBit(c+16,"io_axi_bus_ar_ready", false,-1);
    tracep->declBit(c+17,"io_axi_bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_axi_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_axi_bus_r_bits_rlast", false,-1);
    tracep->declArray(c+35,"io_isram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+39,"io_isram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+43,"io_isram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+47,"io_isram_rdata_3", false,-1, 127,0);
    tracep->declArray(c+51,"io_dsram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+55,"io_dsram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+59,"io_dsram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+63,"io_dsram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+1,"io_axi_bus_aw_valid", false,-1);
    tracep->declQuad(c+2,"io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+4,"io_axi_bus_w_valid", false,-1);
    tracep->declQuad(c+5,"io_axi_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+7,"io_axi_bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+8,"io_axi_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+9,"io_axi_bus_ar_valid", false,-1);
    tracep->declQuad(c+10,"io_axi_bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+12,"io_axi_bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBus(c+67,"io_isram_addr", false,-1, 5,0);
    tracep->declBit(c+68,"io_isram_wen_0", false,-1);
    tracep->declBit(c+69,"io_isram_wen_1", false,-1);
    tracep->declArray(c+70,"io_isram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+74,"io_isram_data_wdata", false,-1, 127,0);
    tracep->declBus(c+78,"io_dsram_addr", false,-1, 5,0);
    tracep->declBit(c+79,"io_dsram_wen_0", false,-1);
    tracep->declBit(c+80,"io_dsram_wen_1", false,-1);
    tracep->declArray(c+81,"io_dsram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+85,"io_dsram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+89,"io_dsram_data_wdata", false,-1, 127,0);
    tracep->pushNamePrefix("clint_de ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+93,"io_valid", false,-1);
    tracep->declQuad(c+94,"io_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+98,"io_bits_is_w", false,-1);
    tracep->declQuad(c+99,"io_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+101,"io_ready", false,-1);
    tracep->declBit(c+102,"io_soft_irq", false,-1);
    tracep->declBit(c+103,"io_time_irq", false,-1);
    tracep->declBit(c+102,"reg_msip", false,-1);
    tracep->declQuad(c+104,"reg_mtime", false,-1, 63,0);
    tracep->declQuad(c+106,"reg_mtimecmp", false,-1, 63,0);
    tracep->declBit(c+101,"reg_ready", false,-1);
    tracep->declQuad(c+99,"red_rdata", false,-1, 63,0);
    tracep->declBit(c+108,"reg_state", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("commit ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+109,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+110,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+111,"io_normal_wb_valid", false,-1);
    tracep->declBus(c+112,"io_normal_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+113,"io_normal_wb_dest_data", false,-1, 63,0);
    tracep->declBus(c+115,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declBit(c+116,"io_csr_wb_valid", false,-1);
    tracep->declBus(c+117,"io_csr_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+118,"io_csr_wb_csr_data", false,-1, 63,0);
    tracep->declBit(c+120,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+121,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+122,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+123,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+124,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+128,"io_commit", false,-1);
    tracep->declBus(c+129,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+130,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+131,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+133,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+135,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declQuad(c+137,"io_csr_pass_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+139,"io_csr_pass_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+141,"io_csr_pass_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+143,"io_csr_pass_csr_mie", false,-1, 63,0);
    tracep->declQuad(c+145,"reg_file_0", false,-1, 63,0);
    tracep->declQuad(c+147,"reg_file_1", false,-1, 63,0);
    tracep->declQuad(c+149,"reg_file_2", false,-1, 63,0);
    tracep->declQuad(c+151,"reg_file_3", false,-1, 63,0);
    tracep->declQuad(c+153,"reg_file_4", false,-1, 63,0);
    tracep->declQuad(c+155,"reg_file_5", false,-1, 63,0);
    tracep->declQuad(c+157,"reg_file_6", false,-1, 63,0);
    tracep->declQuad(c+159,"reg_file_7", false,-1, 63,0);
    tracep->declQuad(c+161,"reg_file_8", false,-1, 63,0);
    tracep->declQuad(c+163,"reg_file_9", false,-1, 63,0);
    tracep->declQuad(c+165,"reg_file_10", false,-1, 63,0);
    tracep->declQuad(c+167,"reg_file_11", false,-1, 63,0);
    tracep->declQuad(c+169,"reg_file_12", false,-1, 63,0);
    tracep->declQuad(c+171,"reg_file_13", false,-1, 63,0);
    tracep->declQuad(c+173,"reg_file_14", false,-1, 63,0);
    tracep->declQuad(c+175,"reg_file_15", false,-1, 63,0);
    tracep->declQuad(c+177,"reg_file_16", false,-1, 63,0);
    tracep->declQuad(c+179,"reg_file_17", false,-1, 63,0);
    tracep->declQuad(c+181,"reg_file_18", false,-1, 63,0);
    tracep->declQuad(c+183,"reg_file_19", false,-1, 63,0);
    tracep->declQuad(c+185,"reg_file_20", false,-1, 63,0);
    tracep->declQuad(c+187,"reg_file_21", false,-1, 63,0);
    tracep->declQuad(c+189,"reg_file_22", false,-1, 63,0);
    tracep->declQuad(c+191,"reg_file_23", false,-1, 63,0);
    tracep->declQuad(c+193,"reg_file_24", false,-1, 63,0);
    tracep->declQuad(c+195,"reg_file_25", false,-1, 63,0);
    tracep->declQuad(c+197,"reg_file_26", false,-1, 63,0);
    tracep->declQuad(c+199,"reg_file_27", false,-1, 63,0);
    tracep->declQuad(c+201,"reg_file_28", false,-1, 63,0);
    tracep->declQuad(c+203,"reg_file_29", false,-1, 63,0);
    tracep->declQuad(c+205,"reg_file_30", false,-1, 63,0);
    tracep->declQuad(c+207,"reg_file_31", false,-1, 63,0);
    tracep->declBit(c+209,"difftest_commit", false,-1);
    tracep->declBus(c+210,"difftest_inst", false,-1, 31,0);
    tracep->declQuad(c+211,"difftest_pc", false,-1, 63,0);
    tracep->declQuad(c+213,"inst_counter", false,-1, 63,0);
    tracep->declBit(c+215,"difftest_irq", false,-1);
    tracep->declBit(c+216,"difftest_peripheral", false,-1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+117,"io_in_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+118,"io_in_csr_data", false,-1, 63,0);
    tracep->declBit(c+116,"io_in_w_csr_en", false,-1);
    tracep->declQuad(c+126,"io_in_pc", false,-1, 63,0);
    tracep->declQuad(c+124,"io_in_next_pc", false,-1, 63,0);
    tracep->declBit(c+121,"io_in_time_irq", false,-1);
    tracep->declBit(c+122,"io_in_soft_irq", false,-1);
    tracep->declBus(c+217,"io_in_exception", false,-1, 4,0);
    tracep->declBit(c+120,"io_in_is_exception", false,-1);
    tracep->declBit(c+128,"io_in_commit", false,-1);
    tracep->declBus(c+115,"io_r_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+135,"io_r_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+137,"io_r_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+139,"io_r_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+141,"io_r_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+143,"io_r_csr_mie", false,-1, 63,0);
    tracep->declQuad(c+218,"reg_mstatus", false,-1, 63,0);
    tracep->declQuad(c+220,"reg_mie", false,-1, 63,0);
    tracep->declQuad(c+222,"reg_mtvec", false,-1, 63,0);
    tracep->declQuad(c+224,"reg_mscratch", false,-1, 63,0);
    tracep->declQuad(c+226,"reg_mepc", false,-1, 63,0);
    tracep->declQuad(c+228,"reg_mcause", false,-1, 63,0);
    tracep->declQuad(c+230,"reg_mtval", false,-1, 63,0);
    tracep->declQuad(c+232,"reg_mcycle", false,-1, 63,0);
    tracep->declQuad(c+234,"reg_minstret", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+236,"irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cross_bar ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+237,"io_ICache_bus_r_valid", false,-1);
    tracep->declQuad(c+238,"io_ICache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declBit(c+240,"io_DCache_bus_w_valid", false,-1);
    tracep->declQuad(c+241,"io_DCache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+243,"io_DCache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+245,"io_DCache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+246,"io_DCache_bus_r_valid", false,-1);
    tracep->declQuad(c+247,"io_DCache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declBit(c+249,"io_bus1_valid", false,-1);
    tracep->declQuad(c+250,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"io_bus2_valid", false,-1);
    tracep->declQuad(c+94,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+253,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+98,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+13,"io_AXI_Bus_aw_ready", false,-1);
    tracep->declBit(c+14,"io_AXI_Bus_w_ready", false,-1);
    tracep->declBit(c+15,"io_AXI_Bus_b_valid", false,-1);
    tracep->declBit(c+16,"io_AXI_Bus_ar_ready", false,-1);
    tracep->declBit(c+17,"io_AXI_Bus_r_valid", false,-1);
    tracep->declQuad(c+18,"io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_AXI_Bus_r_bits_rlast", false,-1);
    tracep->declQuad(c+18,"io_ICache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+254,"io_ICache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+255,"io_ICache_bus_r_ready", false,-1);
    tracep->declBit(c+256,"io_DCache_bus_w_ready", false,-1);
    tracep->declBit(c+257,"io_DCache_bus_b_valid", false,-1);
    tracep->declQuad(c+18,"io_DCache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+258,"io_DCache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+259,"io_DCache_bus_r_ready", false,-1);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+260,"io_bus1_ready", false,-1);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+261,"io_bus2_ready", false,-1);
    tracep->declBit(c+1,"io_AXI_Bus_aw_valid", false,-1);
    tracep->declQuad(c+2,"io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
    tracep->declBit(c+4,"io_AXI_Bus_w_valid", false,-1);
    tracep->declQuad(c+5,"io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+7,"io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+8,"io_AXI_Bus_w_bits_wlast", false,-1);
    tracep->declBit(c+9,"io_AXI_Bus_ar_valid", false,-1);
    tracep->declQuad(c+10,"io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
    tracep->declBus(c+12,"io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
    tracep->declBit(c+262,"w_locked", false,-1);
    tracep->declBus(c+263,"w_lockId", false,-1, 1,0);
    tracep->declBus(c+264,"reg_r_cnt", false,-1, 1,0);
    tracep->declBus(c+265,"r_lockId", false,-1, 1,0);
    tracep->declBit(c+266,"reg_aw_ok", false,-1);
    tracep->declBit(c+267,"reg_ar_ok", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cross_bar_1 ");
    tracep->declBit(c+268,"io_fetch_cpu_addr_valid", false,-1);
    tracep->declQuad(c+250,"io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_fetch_cpu_data_ready", false,-1);
    tracep->declBit(c+270,"io_wb_valid", false,-1);
    tracep->declQuad(c+94,"io_wb_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_wb_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+253,"io_wb_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+98,"io_wb_bits_is_w", false,-1);
    tracep->declBit(c+271,"io_ICache_cpu_raddr_ready", false,-1);
    tracep->declBit(c+272,"io_ICache_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+273,"io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+275,"io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+277,"io_DCache_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+279,"io_DCache_ready", false,-1);
    tracep->declQuad(c+18,"io_bus1_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+260,"io_bus1_ready", false,-1);
    tracep->declQuad(c+18,"io_bus2_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+261,"io_bus2_ready", false,-1);
    tracep->declQuad(c+99,"io_clint_bus_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+101,"io_clint_bus_ready", false,-1);
    tracep->declBit(c+280,"io_fetch_cpu_addr_ready", false,-1);
    tracep->declBit(c+281,"io_fetch_cpu_data_valid", false,-1);
    tracep->declQuad(c+282,"io_fetch_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+284,"io_fetch_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declQuad(c+286,"io_wb_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+288,"io_wb_ready", false,-1);
    tracep->declBit(c+289,"io_ICache_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+250,"io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_ICache_cpu_rdata_ready", false,-1);
    tracep->declBit(c+290,"io_DCache_valid", false,-1);
    tracep->declQuad(c+94,"io_DCache_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_DCache_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+253,"io_DCache_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+98,"io_DCache_bits_is_w", false,-1);
    tracep->declBit(c+249,"io_bus1_valid", false,-1);
    tracep->declQuad(c+250,"io_bus1_bits_addr", false,-1, 63,0);
    tracep->declBit(c+252,"io_bus2_valid", false,-1);
    tracep->declQuad(c+94,"io_bus2_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_bus2_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+253,"io_bus2_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+98,"io_bus2_bits_is_w", false,-1);
    tracep->declBit(c+93,"io_clint_bus_valid", false,-1);
    tracep->declQuad(c+94,"io_clint_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_clint_bus_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+98,"io_clint_bus_bits_is_w", false,-1);
    tracep->declBit(c+291,"not_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+290,"io_cpu_valid", false,-1);
    tracep->declQuad(c+94,"io_cpu_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_cpu_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+253,"io_cpu_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+98,"io_cpu_bits_is_w", false,-1);
    tracep->declArray(c+51,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+55,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+59,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+63,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declBit(c+256,"io_cache_bus_w_ready", false,-1);
    tracep->declBit(c+257,"io_cache_bus_b_valid", false,-1);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+258,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+259,"io_cache_bus_r_ready", false,-1);
    tracep->declQuad(c+277,"io_cpu_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+279,"io_cpu_ready", false,-1);
    tracep->declBus(c+78,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+79,"io_sram_wen_0", false,-1);
    tracep->declBit(c+80,"io_sram_wen_1", false,-1);
    tracep->declArray(c+81,"io_sram_data_wmask", false,-1, 127,0);
    tracep->declArray(c+85,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+89,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declBit(c+240,"io_cache_bus_w_valid", false,-1);
    tracep->declQuad(c+241,"io_cache_bus_w_bits_waddr", false,-1, 63,0);
    tracep->declQuad(c+243,"io_cache_bus_w_bits_wdata", false,-1, 63,0);
    tracep->declBit(c+245,"io_cache_bus_w_bits_wlast", false,-1);
    tracep->declBit(c+246,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+247,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declBus(c+292,"reg_cache_state", false,-1, 1,0);
    tracep->declQuad(c+293,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+295,"reg_wstrb", false,-1, 7,0);
    tracep->declBit(c+296,"reg_is_w", false,-1);
    tracep->declQuad(c+297,"reg_tag", false,-1, 53,0);
    tracep->declBus(c+299,"reg_index", false,-1, 5,0);
    tracep->declBus(c+300,"reg_offset", false,-1, 3,0);
    tracep->declBit(c+279,"reg_ready", false,-1);
    tracep->declQuad(c+277,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+301,"reg_cache_write", false,-1);
    tracep->declBus(c+302,"reg_cache_wstrb", false,-1, 15,0);
    tracep->declArray(c+89,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+303,"reg_chosen_tag", false,-1);
    tracep->declArray(c+304,"cache_mask", false,-1, 127,0);
    tracep->declBit(c+308,"is_sram0_write", false,-1);
    tracep->declBit(c+309,"is_sram2_write", false,-1);
    tracep->declQuad(c+310,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+312,"reg_sram0_dirty", false,-1, 63,0);
    tracep->declQuad(c+314,"reg_sram2_valid", false,-1, 63,0);
    tracep->declQuad(c+316,"reg_sram2_dirty", false,-1, 63,0);
    tracep->declQuad(c+247,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+246,"reg_r_valid", false,-1);
    tracep->declQuad(c+241,"reg_w_waddr", false,-1, 63,0);
    tracep->declQuad(c+243,"reg_w_wdata", false,-1, 63,0);
    tracep->declBit(c+245,"reg_w_wlast", false,-1);
    tracep->declBit(c+240,"reg_w_valid", false,-1);
    tracep->declBit(c+318,"reg_b_ready", false,-1);
    tracep->declQuad(c+319,"reg_lru_2", false,-1, 63,0);
    tracep->declBit(c+321,"reg_start_operation", false,-1);
    tracep->declBus(c+322,"reg_cnt", false,-1, 1,0);
    tracep->declBit(c+323,"reg_rbus_finish", false,-1);
    tracep->declBit(c+324,"reg_wbus_finish", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declQuad(c+325,"chose_bit", false,-1, 63,0);
    tracep->declBit(c+327,"hit_0", false,-1);
    tracep->declBit(c+328,"hit_2", false,-1);
    tracep->declBit(c+329,"or_hit", false,-1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+330,"io_get_inst_valid", false,-1);
    tracep->declBus(c+331,"io_get_inst_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+332,"io_get_inst_bits_pc", false,-1, 63,0);
    tracep->declBit(c+334,"io_get_inst_bits_is_pre", false,-1);
    tracep->declQuad(c+131,"io_normal_rd_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+133,"io_normal_rd_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+135,"io_csr_rd_csr_data", false,-1, 63,0);
    tracep->declBit(c+335,"io_op_datas_ready", false,-1);
    tracep->declBit(c+336,"io_flush", false,-1);
    tracep->declBit(c+335,"io_get_inst_ready", false,-1);
    tracep->declBus(c+109,"io_normal_rd_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+110,"io_normal_rd_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+115,"io_csr_rd_csr_addr", false,-1, 11,0);
    tracep->declBit(c+337,"io_op_datas_valid", false,-1);
    tracep->declBus(c+338,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+339,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+340,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+341,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+343,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+344,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+346,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+347,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+349,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+350,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+351,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+352,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+353,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+354,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+337,"reg_valid", false,-1);
    tracep->declBus(c+338,"reg_opType", false,-1, 2,0);
    tracep->declBus(c+339,"reg_exuType", false,-1, 6,0);
    tracep->declBus(c+340,"reg_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+341,"reg_rs1_data", false,-1, 63,0);
    tracep->declBus(c+343,"reg_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+344,"reg_rs2_data", false,-1, 63,0);
    tracep->declBus(c+346,"reg_imm", false,-1, 31,0);
    tracep->declQuad(c+347,"reg_pc", false,-1, 63,0);
    tracep->declBus(c+349,"reg_inst", false,-1, 31,0);
    tracep->declBus(c+350,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+351,"reg_dest_is_reg", false,-1);
    tracep->declBus(c+353,"reg_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+354,"reg_csr_data", false,-1, 63,0);
    tracep->declBit(c+352,"reg_is_pre", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+356,"fun_op", false,-1, 2,0);
    tracep->declBit(c+357,"temp_system_is_pri", false,-1);
    tracep->declBit(c+358,"is_sr", false,-1);
    tracep->declBus(c+359,"instType", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+337,"io_op_datas_valid", false,-1);
    tracep->declBus(c+338,"io_op_datas_bits_opType", false,-1, 2,0);
    tracep->declBus(c+339,"io_op_datas_bits_exuType", false,-1, 6,0);
    tracep->declBus(c+340,"io_op_datas_bits_rs1_addr", false,-1, 4,0);
    tracep->declQuad(c+341,"io_op_datas_bits_rs1_data", false,-1, 63,0);
    tracep->declBus(c+343,"io_op_datas_bits_rs2_addr", false,-1, 4,0);
    tracep->declQuad(c+344,"io_op_datas_bits_rs2_data", false,-1, 63,0);
    tracep->declBus(c+346,"io_op_datas_bits_imm", false,-1, 31,0);
    tracep->declQuad(c+347,"io_op_datas_bits_pc", false,-1, 63,0);
    tracep->declBus(c+349,"io_op_datas_bits_inst", false,-1, 31,0);
    tracep->declBus(c+350,"io_op_datas_bits_dest_addr", false,-1, 4,0);
    tracep->declBit(c+351,"io_op_datas_bits_dest_is_reg", false,-1);
    tracep->declBit(c+352,"io_op_datas_bits_is_pre", false,-1);
    tracep->declBus(c+353,"io_op_datas_bits_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+354,"io_op_datas_bits_csr_data", false,-1, 63,0);
    tracep->declBit(c+103,"io_irq_time_irq", false,-1);
    tracep->declBit(c+102,"io_irq_soft_irq", false,-1);
    tracep->declQuad(c+141,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+143,"io_mie", false,-1, 63,0);
    tracep->declQuad(c+139,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+137,"io_mtvec", false,-1, 63,0);
    tracep->declQuad(c+360,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declQuad(c+286,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+288,"io_bus_ready", false,-1);
    tracep->declBit(c+335,"io_op_datas_ready", false,-1);
    tracep->declBit(c+111,"io_wb_valid", false,-1);
    tracep->declBus(c+112,"io_wb_dest_addr", false,-1, 4,0);
    tracep->declQuad(c+113,"io_wb_dest_data", false,-1, 63,0);
    tracep->declBit(c+116,"io_csr_valid", false,-1);
    tracep->declBus(c+117,"io_csr_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+118,"io_csr_csr_data", false,-1, 63,0);
    tracep->declBit(c+120,"io_csr_except_is_except", false,-1);
    tracep->declBit(c+121,"io_csr_except_is_time_irq", false,-1);
    tracep->declBit(c+122,"io_csr_except_is_soft_irq", false,-1);
    tracep->declBus(c+123,"io_csr_except_exception", false,-1, 5,0);
    tracep->declQuad(c+124,"io_csr_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"io_csr_except_pc", false,-1, 63,0);
    tracep->declBit(c+128,"io_commit", false,-1);
    tracep->declBus(c+129,"io_difftest_inst", false,-1, 31,0);
    tracep->declBit(c+130,"io_difftest_peripheral", false,-1);
    tracep->declQuad(c+362,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+336,"io_flush", false,-1);
    tracep->declBit(c+364,"io_fence_i", false,-1);
    tracep->declBit(c+365,"io_br_info_valid", false,-1);
    tracep->declBit(c+366,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+367,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+369,"io_br_info_taken", false,-1);
    tracep->declQuad(c+370,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+372,"io_get_pre_info_valid", false,-1);
    tracep->declBit(c+270,"io_bus_valid", false,-1);
    tracep->declQuad(c+94,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+253,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+98,"io_bus_bits_is_w", false,-1);
    tracep->declBus(c+117,"reg_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+118,"reg_csr_data", false,-1, 63,0);
    tracep->declBus(c+112,"reg_dest_addr", false,-1, 4,0);
    tracep->declBit(c+373,"in_data_valid", false,-1);
    tracep->declQuad(c+374,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+376,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+335,"ready", false,-1);
    tracep->declBus(c+378,"reg_valid", false,-1, 3,0);
    tracep->declBus(c+379,"valid", false,-1, 3,0);
    tracep->declBit(c+380,"reg_sys_alu_w_valid", false,-1);
    tracep->declQuad(c+381,"reg_sys_alu_wdata", false,-1, 63,0);
    tracep->declBit(c+365,"reg_br_valid", false,-1);
    tracep->declBit(c+366,"reg_br_mispredict", false,-1);
    tracep->declQuad(c+367,"reg_br_pc", false,-1, 63,0);
    tracep->declBit(c+369,"reg_taken", false,-1);
    tracep->declQuad(c+370,"reg_br_next_pc", false,-1, 63,0);
    tracep->declBit(c+383,"reg_csr_is_w", false,-1);
    tracep->declBit(c+384,"reg_is_except", false,-1);
    tracep->declBus(c+123,"reg_exception", false,-1, 5,0);
    tracep->declBit(c+385,"reg_is_time_irq", false,-1);
    tracep->declBit(c+386,"reg_is_soft_irq", false,-1);
    tracep->declQuad(c+124,"reg_except_next_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"reg_except_pc", false,-1, 63,0);
    tracep->declQuad(c+362,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+387,"reg_valid_next_pc", false,-1);
    tracep->declBit(c+388,"reg_fence_i", false,-1);
    tracep->declBit(c+389,"reg_commit", false,-1);
    tracep->declBus(c+129,"reg_difftest_inst", false,-1, 31,0);
    tracep->pushNamePrefix("alu_exu ");
    tracep->declBit(c+390,"io_valid", false,-1);
    tracep->declBit(c+352,"io_is_pre", false,-1);
    tracep->declQuad(c+360,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBus(c+338,"io_opType", false,-1, 2,0);
    tracep->declBus(c+339,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+374,"io_op_data1", false,-1, 63,0);
    tracep->declQuad(c+376,"io_op_data2", false,-1, 63,0);
    tracep->declBus(c+346,"io_op_imm", false,-1, 31,0);
    tracep->declQuad(c+347,"io_op_pc", false,-1, 63,0);
    tracep->declBit(c+391,"io_br_info_valid", false,-1);
    tracep->declBit(c+392,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+393,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+395,"io_br_info_taken", false,-1);
    tracep->declQuad(c+396,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+372,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+398,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+392,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+396,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+400,"op_data1", false,-1, 63,0);
    tracep->declQuad(c+402,"op_data2", false,-1, 63,0);
    tracep->declQuad(c+404,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+406,"is_sra", false,-1);
    tracep->declQuad(c+407,"rs1_data", false,-1, 63,0);
    tracep->declBit(c+409,"s_rs1_l_rs2", false,-1);
    tracep->declBus(c+410,"shift_rs2_data", false,-1, 5,0);
    tracep->declArray(c+411,"sll_temp", false,-1, 126,0);
    tracep->declBit(c+372,"is_pre", false,-1);
    tracep->declBit(c+415,"is_eq", false,-1);
    tracep->declArray(c+416,"add_pc", false,-1, 64,0);
    tracep->declQuad(c+419,"op_pc_4", false,-1, 63,0);
    tracep->declQuad(c+421,"dst_data", false,-1, 63,0);
    tracep->declBit(c+391,"br_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_exu ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+423,"io_valid", false,-1);
    tracep->declBus(c+339,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+374,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+376,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+346,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+286,"io_bus_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+288,"io_bus_ready", false,-1);
    tracep->declQuad(c+424,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+426,"io_dest_is_w", false,-1);
    tracep->declBit(c+427,"io_ready", false,-1);
    tracep->declBit(c+270,"io_bus_valid", false,-1);
    tracep->declQuad(c+94,"io_bus_bits_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_bus_bits_wdata", false,-1, 63,0);
    tracep->declBus(c+253,"io_bus_bits_wstrb", false,-1, 7,0);
    tracep->declBit(c+98,"io_bus_bits_is_w", false,-1);
    tracep->declBit(c+130,"io_difftest_peripheral", false,-1);
    tracep->declBit(c+427,"reg_ready", false,-1);
    tracep->declQuad(c+428,"reg_bus_addr", false,-1, 63,0);
    tracep->declQuad(c+430,"reg_bus_wdata", false,-1, 63,0);
    tracep->declBus(c+432,"reg_bus_wstrb", false,-1, 7,0);
    tracep->declBit(c+433,"reg_bus_is_w", false,-1);
    tracep->declBit(c+434,"reg_bus_valid", false,-1);
    tracep->declQuad(c+424,"reg_result_data", false,-1, 63,0);
    tracep->declBit(c+426,"reg_w_rs_en", false,-1);
    tracep->declBus(c+435,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+130,"reg_difftest_peripheral", false,-1);
    tracep->declQuad(c+436,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+438,"w_mem_en", false,-1);
    tracep->declBit(c+439,"reg_ls_state", false,-1);
    tracep->declArray(c+440,"mem_w_data", false,-1, 126,0);
    tracep->declBit(c+444,"chose_chancel", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declQuad(c+445,"mem_r_data", false,-1, 63,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mu_exu ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+447,"io_valid", false,-1);
    tracep->declBus(c+339,"io_exu_type", false,-1, 6,0);
    tracep->declQuad(c+374,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+376,"io_rs2_data", false,-1, 63,0);
    tracep->declQuad(c+448,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+450,"io_dest_is_w", false,-1);
    tracep->declBit(c+451,"io_ready", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+452,"io_valid", false,-1);
    tracep->declQuad(c+374,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+376,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+339,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+453,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+455,"io_dest_is_w", false,-1);
    tracep->declBit(c+456,"io_ready", false,-1);
    tracep->declArray(c+457,"reg_divisor", false,-1, 64,0);
    tracep->declArray(c+460,"reg_dividend", false,-1, 65,0);
    tracep->declArray(c+463,"reg_rem", false,-1, 64,0);
    tracep->declArray(c+466,"reg_q", false,-1, 65,0);
    tracep->declBus(c+469,"reg_state", false,-1, 1,0);
    tracep->declBus(c+470,"reg_cnt", false,-1, 6,0);
    tracep->declBus(c+471,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+455,"reg_dest_is_w", false,-1);
    tracep->declBit(c+456,"reg_ready", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declArray(c+472,"dividend", false,-1, 64,0);
    tracep->declArray(c+475,"divisor", false,-1, 64,0);
    tracep->declArray(c+478,"rem", false,-1, 64,0);
    tracep->declArray(c+481,"neg_divisor", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+484,"io_valid", false,-1);
    tracep->declQuad(c+374,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+376,"io_rs2_data", false,-1, 63,0);
    tracep->declBus(c+339,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+485,"io_dest_data", false,-1, 63,0);
    tracep->declBit(c+487,"io_dest_is_w", false,-1);
    tracep->declBit(c+488,"io_ready", false,-1);
    tracep->declBit(c+488,"reg_ready", false,-1);
    tracep->declBus(c+489,"reg_state", false,-1, 1,0);
    tracep->declArray(c+490,"reg_temp_mul2", false,-1, 66,0);
    tracep->declArray(c+493,"reg_mul1", false,-1, 129,0);
    tracep->declArray(c+498,"reg_result", false,-1, 129,0);
    tracep->declBus(c+503,"reg_exuType", false,-1, 6,0);
    tracep->declBit(c+487,"reg_dest_is_w", false,-1);
    tracep->declBus(c+504,"reg_cnt", false,-1, 6,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declArray(c+505,"mul_data2", false,-1, 64,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("system_exu ");
    tracep->declBit(c+508,"io_valid", false,-1);
    tracep->declBus(c+339,"io_exuType", false,-1, 6,0);
    tracep->declQuad(c+509,"io_csr_data", false,-1, 63,0);
    tracep->declBus(c+353,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+346,"io_imm", false,-1, 31,0);
    tracep->declQuad(c+374,"io_rs1_data", false,-1, 63,0);
    tracep->declQuad(c+139,"io_mepc", false,-1, 63,0);
    tracep->declQuad(c+141,"io_mstatus", false,-1, 63,0);
    tracep->declQuad(c+509,"io_dst_data", false,-1, 63,0);
    tracep->declBit(c+511,"io_csr_is_w", false,-1);
    tracep->declQuad(c+512,"io_result_csr_data", false,-1, 63,0);
    tracep->declBus(c+514,"io_result_csr_addr", false,-1, 11,0);
    tracep->declBit(c+515,"io_is_except", false,-1);
    tracep->declBus(c+516,"io_exception", false,-1, 5,0);
    tracep->declBit(c+517,"io_valid_next_pc", false,-1);
    tracep->declQuad(c+139,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+518,"op_data", false,-1, 63,0);
    tracep->declQuad(c+520,"or_result", false,-1, 63,0);
    tracep->declQuad(c+522,"and_result", false,-1, 63,0);
    tracep->declBit(c+524,"is_ecall", false,-1);
    tracep->declBit(c+525,"is_ebreak", false,-1);
    tracep->declBit(c+526,"is_ret", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"time_irq", false,-1);
    tracep->declBit(c+528,"soft_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+365,"io_br_info_valid", false,-1);
    tracep->declBit(c+366,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+367,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+369,"io_br_info_taken", false,-1);
    tracep->declQuad(c+370,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declBit(c+372,"io_get_pre_info_valid", false,-1);
    tracep->declQuad(c+362,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+336,"io_flush", false,-1);
    tracep->declBit(c+280,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+281,"io_cpu_data_valid", false,-1);
    tracep->declQuad(c+282,"io_cpu_data_bits_data", false,-1, 63,0);
    tracep->declQuad(c+284,"io_cpu_data_bits_pc", false,-1, 63,0);
    tracep->declBit(c+335,"io_put_pc_ready", false,-1);
    tracep->declQuad(c+360,"io_get_pre_info_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+268,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+250,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_cpu_data_ready", false,-1);
    tracep->declBit(c+330,"io_put_pc_valid", false,-1);
    tracep->declBus(c+331,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+332,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+334,"io_put_pc_bits_is_pre", false,-1);
    tracep->declBit(c+529,"io_out_flush", false,-1);
    tracep->declQuad(c+250,"reg_pc_0", false,-1, 63,0);
    tracep->declBit(c+530,"reg_flush", false,-1);
    tracep->declQuad(c+531,"reg_next_pc", false,-1, 63,0);
    tracep->declBit(c+268,"reg_bus_valid", false,-1);
    tracep->declBus(c+533,"pre_info_head", false,-1, 1,0);
    tracep->declBus(c+534,"pre_info_tail", false,-1, 1,0);
    tracep->declQuad(c+535,"pre_info_fifo_0", false,-1, 63,0);
    tracep->declQuad(c+537,"pre_info_fifo_1", false,-1, 63,0);
    tracep->declQuad(c+539,"pre_info_fifo_2", false,-1, 63,0);
    tracep->declQuad(c+541,"pre_info_fifo_3", false,-1, 63,0);
    tracep->declBus(c+543,"is_pre_head", false,-1, 1,0);
    tracep->declBus(c+544,"is_pre_tail", false,-1, 1,0);
    tracep->declBit(c+545,"is_pre_fifo_0", false,-1);
    tracep->declBit(c+546,"is_pre_fifo_1", false,-1);
    tracep->declBit(c+547,"is_pre_fifo_2", false,-1);
    tracep->declBit(c+548,"is_pre_fifo_3", false,-1);
    tracep->pushNamePrefix("br_predictor ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+365,"io_br_info_valid", false,-1);
    tracep->declBit(c+366,"io_br_info_mispredict", false,-1);
    tracep->declQuad(c+367,"io_br_info_br_pc", false,-1, 63,0);
    tracep->declBit(c+369,"io_br_info_taken", false,-1);
    tracep->declQuad(c+370,"io_br_info_target_next_pc", false,-1, 63,0);
    tracep->declQuad(c+250,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+549,"io_pre_next_pc", false,-1, 63,0);
    tracep->declBit(c+551,"io_pre_valid", false,-1);
    tracep->declArray(c+552,"BTB_0", false,-1, 127,0);
    tracep->declArray(c+556,"BTB_1", false,-1, 127,0);
    tracep->declArray(c+560,"BTB_2", false,-1, 127,0);
    tracep->declArray(c+564,"BTB_3", false,-1, 127,0);
    tracep->declArray(c+568,"BTB_4", false,-1, 127,0);
    tracep->declArray(c+572,"BTB_5", false,-1, 127,0);
    tracep->declArray(c+576,"BTB_6", false,-1, 127,0);
    tracep->declArray(c+580,"BTB_7", false,-1, 127,0);
    tracep->declArray(c+584,"BTB_8", false,-1, 127,0);
    tracep->declArray(c+588,"BTB_9", false,-1, 127,0);
    tracep->declArray(c+592,"BTB_10", false,-1, 127,0);
    tracep->declArray(c+596,"BTB_11", false,-1, 127,0);
    tracep->declArray(c+600,"BTB_12", false,-1, 127,0);
    tracep->declArray(c+604,"BTB_13", false,-1, 127,0);
    tracep->declArray(c+608,"BTB_14", false,-1, 127,0);
    tracep->declArray(c+612,"BTB_15", false,-1, 127,0);
    tracep->declArray(c+616,"BTB_16", false,-1, 127,0);
    tracep->declArray(c+620,"BTB_17", false,-1, 127,0);
    tracep->declArray(c+624,"BTB_18", false,-1, 127,0);
    tracep->declArray(c+628,"BTB_19", false,-1, 127,0);
    tracep->declArray(c+632,"BTB_20", false,-1, 127,0);
    tracep->declArray(c+636,"BTB_21", false,-1, 127,0);
    tracep->declArray(c+640,"BTB_22", false,-1, 127,0);
    tracep->declArray(c+644,"BTB_23", false,-1, 127,0);
    tracep->declArray(c+648,"BTB_24", false,-1, 127,0);
    tracep->declArray(c+652,"BTB_25", false,-1, 127,0);
    tracep->declArray(c+656,"BTB_26", false,-1, 127,0);
    tracep->declArray(c+660,"BTB_27", false,-1, 127,0);
    tracep->declArray(c+664,"BTB_28", false,-1, 127,0);
    tracep->declArray(c+668,"BTB_29", false,-1, 127,0);
    tracep->declArray(c+672,"BTB_30", false,-1, 127,0);
    tracep->declArray(c+676,"BTB_31", false,-1, 127,0);
    tracep->declArray(c+680,"BTB_32", false,-1, 127,0);
    tracep->declArray(c+684,"BTB_33", false,-1, 127,0);
    tracep->declArray(c+688,"BTB_34", false,-1, 127,0);
    tracep->declArray(c+692,"BTB_35", false,-1, 127,0);
    tracep->declArray(c+696,"BTB_36", false,-1, 127,0);
    tracep->declArray(c+700,"BTB_37", false,-1, 127,0);
    tracep->declArray(c+704,"BTB_38", false,-1, 127,0);
    tracep->declArray(c+708,"BTB_39", false,-1, 127,0);
    tracep->declArray(c+712,"BTB_40", false,-1, 127,0);
    tracep->declArray(c+716,"BTB_41", false,-1, 127,0);
    tracep->declArray(c+720,"BTB_42", false,-1, 127,0);
    tracep->declArray(c+724,"BTB_43", false,-1, 127,0);
    tracep->declArray(c+728,"BTB_44", false,-1, 127,0);
    tracep->declArray(c+732,"BTB_45", false,-1, 127,0);
    tracep->declArray(c+736,"BTB_46", false,-1, 127,0);
    tracep->declArray(c+740,"BTB_47", false,-1, 127,0);
    tracep->declArray(c+744,"BTB_48", false,-1, 127,0);
    tracep->declArray(c+748,"BTB_49", false,-1, 127,0);
    tracep->declArray(c+752,"BTB_50", false,-1, 127,0);
    tracep->declArray(c+756,"BTB_51", false,-1, 127,0);
    tracep->declArray(c+760,"BTB_52", false,-1, 127,0);
    tracep->declArray(c+764,"BTB_53", false,-1, 127,0);
    tracep->declArray(c+768,"BTB_54", false,-1, 127,0);
    tracep->declArray(c+772,"BTB_55", false,-1, 127,0);
    tracep->declArray(c+776,"BTB_56", false,-1, 127,0);
    tracep->declArray(c+780,"BTB_57", false,-1, 127,0);
    tracep->declArray(c+784,"BTB_58", false,-1, 127,0);
    tracep->declArray(c+788,"BTB_59", false,-1, 127,0);
    tracep->declArray(c+792,"BTB_60", false,-1, 127,0);
    tracep->declArray(c+796,"BTB_61", false,-1, 127,0);
    tracep->declArray(c+800,"BTB_62", false,-1, 127,0);
    tracep->declArray(c+804,"BTB_63", false,-1, 127,0);
    tracep->declQuad(c+808,"RAS_0", false,-1, 63,0);
    tracep->declQuad(c+810,"RAS_1", false,-1, 63,0);
    tracep->declQuad(c+812,"RAS_2", false,-1, 63,0);
    tracep->declQuad(c+814,"RAS_3", false,-1, 63,0);
    tracep->declQuad(c+816,"RAS_4", false,-1, 63,0);
    tracep->declQuad(c+818,"RAS_5", false,-1, 63,0);
    tracep->declBus(c+820,"PHT_0", false,-1, 1,0);
    tracep->declBus(c+821,"PHT_1", false,-1, 1,0);
    tracep->declBus(c+822,"PHT_2", false,-1, 1,0);
    tracep->declBus(c+823,"PHT_3", false,-1, 1,0);
    tracep->declBus(c+824,"PHT_4", false,-1, 1,0);
    tracep->declBus(c+825,"PHT_5", false,-1, 1,0);
    tracep->declBus(c+826,"PHT_6", false,-1, 1,0);
    tracep->declBus(c+827,"PHT_7", false,-1, 1,0);
    tracep->declBus(c+828,"PHT_8", false,-1, 1,0);
    tracep->declBus(c+829,"PHT_9", false,-1, 1,0);
    tracep->declBus(c+830,"PHT_10", false,-1, 1,0);
    tracep->declBus(c+831,"PHT_11", false,-1, 1,0);
    tracep->declBus(c+832,"PHT_12", false,-1, 1,0);
    tracep->declBus(c+833,"PHT_13", false,-1, 1,0);
    tracep->declBus(c+834,"PHT_14", false,-1, 1,0);
    tracep->declBus(c+835,"PHT_15", false,-1, 1,0);
    tracep->declBus(c+836,"PHT_16", false,-1, 1,0);
    tracep->declBus(c+837,"PHT_17", false,-1, 1,0);
    tracep->declBus(c+838,"PHT_18", false,-1, 1,0);
    tracep->declBus(c+839,"PHT_19", false,-1, 1,0);
    tracep->declBus(c+840,"PHT_20", false,-1, 1,0);
    tracep->declBus(c+841,"PHT_21", false,-1, 1,0);
    tracep->declBus(c+842,"PHT_22", false,-1, 1,0);
    tracep->declBus(c+843,"PHT_23", false,-1, 1,0);
    tracep->declBus(c+844,"PHT_24", false,-1, 1,0);
    tracep->declBus(c+845,"PHT_25", false,-1, 1,0);
    tracep->declBus(c+846,"PHT_26", false,-1, 1,0);
    tracep->declBus(c+847,"PHT_27", false,-1, 1,0);
    tracep->declBus(c+848,"PHT_28", false,-1, 1,0);
    tracep->declBus(c+849,"PHT_29", false,-1, 1,0);
    tracep->declBus(c+850,"PHT_30", false,-1, 1,0);
    tracep->declBus(c+851,"PHT_31", false,-1, 1,0);
    tracep->declBus(c+852,"PHT_32", false,-1, 1,0);
    tracep->declBus(c+853,"PHT_33", false,-1, 1,0);
    tracep->declBus(c+854,"PHT_34", false,-1, 1,0);
    tracep->declBus(c+855,"PHT_35", false,-1, 1,0);
    tracep->declBus(c+856,"PHT_36", false,-1, 1,0);
    tracep->declBus(c+857,"PHT_37", false,-1, 1,0);
    tracep->declBus(c+858,"PHT_38", false,-1, 1,0);
    tracep->declBus(c+859,"PHT_39", false,-1, 1,0);
    tracep->declBus(c+860,"PHT_40", false,-1, 1,0);
    tracep->declBus(c+861,"PHT_41", false,-1, 1,0);
    tracep->declBus(c+862,"PHT_42", false,-1, 1,0);
    tracep->declBus(c+863,"PHT_43", false,-1, 1,0);
    tracep->declBus(c+864,"PHT_44", false,-1, 1,0);
    tracep->declBus(c+865,"PHT_45", false,-1, 1,0);
    tracep->declBus(c+866,"PHT_46", false,-1, 1,0);
    tracep->declBus(c+867,"PHT_47", false,-1, 1,0);
    tracep->declBus(c+868,"PHT_48", false,-1, 1,0);
    tracep->declBus(c+869,"PHT_49", false,-1, 1,0);
    tracep->declBus(c+870,"PHT_50", false,-1, 1,0);
    tracep->declBus(c+871,"PHT_51", false,-1, 1,0);
    tracep->declBus(c+872,"PHT_52", false,-1, 1,0);
    tracep->declBus(c+873,"PHT_53", false,-1, 1,0);
    tracep->declBus(c+874,"PHT_54", false,-1, 1,0);
    tracep->declBus(c+875,"PHT_55", false,-1, 1,0);
    tracep->declBus(c+876,"PHT_56", false,-1, 1,0);
    tracep->declBus(c+877,"PHT_57", false,-1, 1,0);
    tracep->declBus(c+878,"PHT_58", false,-1, 1,0);
    tracep->declBus(c+879,"PHT_59", false,-1, 1,0);
    tracep->declBus(c+880,"PHT_60", false,-1, 1,0);
    tracep->declBus(c+881,"PHT_61", false,-1, 1,0);
    tracep->declBus(c+882,"PHT_62", false,-1, 1,0);
    tracep->declBus(c+883,"PHT_63", false,-1, 1,0);
    tracep->declBus(c+884,"reg_head", false,-1, 2,0);
    tracep->declBit(c+551,"pre_valid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ibuf ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+336,"io_flush", false,-1);
    tracep->declBit(c+885,"io_cache_buf_valid", false,-1);
    tracep->declQuad(c+284,"io_cache_buf_bits_pc", false,-1, 63,0);
    tracep->declBus(c+886,"io_cache_buf_bits_inst", false,-1, 31,0);
    tracep->declBit(c+887,"io_cache_buf_bits_is_pre", false,-1);
    tracep->declBit(c+335,"io_put_pc_ready", false,-1);
    tracep->declBit(c+269,"io_cache_buf_ready", false,-1);
    tracep->declBit(c+330,"io_put_pc_valid", false,-1);
    tracep->declBus(c+331,"io_put_pc_bits_inst", false,-1, 31,0);
    tracep->declQuad(c+332,"io_put_pc_bits_pc", false,-1, 63,0);
    tracep->declBit(c+334,"io_put_pc_bits_is_pre", false,-1);
    tracep->declQuad(c+888,"ibuf_pc_0", false,-1, 63,0);
    tracep->declQuad(c+890,"ibuf_pc_1", false,-1, 63,0);
    tracep->declQuad(c+892,"ibuf_pc_2", false,-1, 63,0);
    tracep->declQuad(c+894,"ibuf_pc_3", false,-1, 63,0);
    tracep->declBus(c+896,"ibuf_inst_0", false,-1, 31,0);
    tracep->declBus(c+897,"ibuf_inst_1", false,-1, 31,0);
    tracep->declBus(c+898,"ibuf_inst_2", false,-1, 31,0);
    tracep->declBus(c+899,"ibuf_inst_3", false,-1, 31,0);
    tracep->declBit(c+900,"ibuf_is_pre_0", false,-1);
    tracep->declBit(c+901,"ibuf_is_pre_1", false,-1);
    tracep->declBit(c+902,"ibuf_is_pre_2", false,-1);
    tracep->declBit(c+903,"ibuf_is_pre_3", false,-1);
    tracep->declBit(c+904,"ibuf_valid_0", false,-1);
    tracep->declBit(c+905,"ibuf_valid_1", false,-1);
    tracep->declBit(c+906,"ibuf_valid_2", false,-1);
    tracep->declBit(c+907,"ibuf_valid_3", false,-1);
    tracep->declBus(c+908,"reg_head", false,-1, 1,0);
    tracep->declBus(c+909,"reg_tail", false,-1, 1,0);
    tracep->declBus(c+910,"reg_ibuf_size", false,-1, 2,0);
    tracep->declBit(c+269,"allow_in", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+911,"enq_size", false,-1);
    tracep->declBit(c+912,"can_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBit(c+913,"pre_enq", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cache ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+529,"io_flush", false,-1);
    tracep->declBit(c+289,"io_cpu_raddr_valid", false,-1);
    tracep->declQuad(c+250,"io_cpu_raddr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+269,"io_cpu_rdata_ready", false,-1);
    tracep->declBit(c+364,"io_is_fence_i", false,-1);
    tracep->declArray(c+35,"io_sram_rdata_0", false,-1, 127,0);
    tracep->declArray(c+39,"io_sram_rdata_1", false,-1, 127,0);
    tracep->declArray(c+43,"io_sram_rdata_2", false,-1, 127,0);
    tracep->declArray(c+47,"io_sram_rdata_3", false,-1, 127,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+254,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+255,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+271,"io_cpu_raddr_ready", false,-1);
    tracep->declBit(c+272,"io_cpu_rdata_valid", false,-1);
    tracep->declQuad(c+273,"io_cpu_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+275,"io_cpu_rdata_bits_pc", false,-1, 63,0);
    tracep->declBus(c+67,"io_sram_addr", false,-1, 5,0);
    tracep->declBit(c+68,"io_sram_wen_0", false,-1);
    tracep->declBit(c+69,"io_sram_wen_1", false,-1);
    tracep->declArray(c+70,"io_sram_tag_wdata", false,-1, 127,0);
    tracep->declArray(c+74,"io_sram_data_wdata", false,-1, 127,0);
    tracep->declBit(c+237,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+238,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declQuad(c+914,"reg_sram0_valid", false,-1, 63,0);
    tracep->declQuad(c+916,"reg_sram1_valid", false,-1, 63,0);
    tracep->declBit(c+918,"is_w_sram", false,-1);
    tracep->declBit(c+919,"is_sram0_write", false,-1);
    tracep->declBit(c+920,"is_sram1_write", false,-1);
    tracep->declBit(c+921,"reg_temp_sram0_valid", false,-1);
    tracep->declBit(c+922,"reg_temp_sram1_valid", false,-1);
    tracep->declBus(c+923,"reg_temp_r_index", false,-1, 5,0);
    tracep->declBit(c+924,"w_r_pass0_val", false,-1);
    tracep->declBit(c+925,"w_r_pass1_val", false,-1);
    tracep->declBit(c+926,"reg_sram_r_ready", false,-1);
    tracep->pushNamePrefix("cache_stage0 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+529,"io_flush", false,-1);
    tracep->declBit(c+289,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+250,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+271,"io_addr_ready", false,-1);
    tracep->declBit(c+271,"io_cpu_addr_ready", false,-1);
    tracep->declBit(c+927,"io_addr_valid", false,-1);
    tracep->declQuad(c+928,"io_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+927,"reg_valid", false,-1);
    tracep->declQuad(c+928,"reg_addr", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cache_stage1 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+529,"io_flush", false,-1);
    tracep->declBit(c+927,"io_cpu_addr_valid", false,-1);
    tracep->declQuad(c+928,"io_cpu_addr_bits_addr", false,-1, 63,0);
    tracep->declBit(c+930,"io_tag_valid_tag_valid_0", false,-1);
    tracep->declBit(c+931,"io_tag_valid_tag_valid_1", false,-1);
    tracep->declArray(c+932,"io_sram_sram_data_0", false,-1, 127,0);
    tracep->declArray(c+936,"io_sram_sram_data_1", false,-1, 127,0);
    tracep->declArray(c+940,"io_sram_sram_tag_0", false,-1, 127,0);
    tracep->declArray(c+944,"io_sram_sram_tag_1", false,-1, 127,0);
    tracep->declBit(c+926,"io_sram_ready", false,-1);
    tracep->declBit(c+948,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+271,"io_cpu_addr_ready", false,-1);
    tracep->declBus(c+949,"io_tag_valid_index", false,-1, 5,0);
    tracep->declBit(c+950,"io_sram_valid", false,-1);
    tracep->declBit(c+951,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+952,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+954,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+930,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+955,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+957,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+931,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+958,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declBit(c+950,"valid", false,-1);
    tracep->declBit(c+271,"ready", false,-1);
    tracep->declQuad(c+952,"reg_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+960,"reg_valid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cache_stage2 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBit(c+529,"io_flush", false,-1);
    tracep->declBit(c+951,"io_cache_stage1_valid", false,-1);
    tracep->declQuad(c+952,"io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
    tracep->declBit(c+954,"io_cache_stage1_bits_sram_0_hit", false,-1);
    tracep->declBit(c+930,"io_cache_stage1_bits_sram_0_tag_valid", false,-1);
    tracep->declQuad(c+955,"io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
    tracep->declBit(c+957,"io_cache_stage1_bits_sram_1_hit", false,-1);
    tracep->declBit(c+931,"io_cache_stage1_bits_sram_1_tag_valid", false,-1);
    tracep->declQuad(c+958,"io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
    tracep->declQuad(c+18,"io_cache_bus_r_bits_rdata", false,-1, 63,0);
    tracep->declBit(c+254,"io_cache_bus_r_bits_rlast", false,-1);
    tracep->declBit(c+255,"io_cache_bus_r_ready", false,-1);
    tracep->declBit(c+269,"io_rdata_ready", false,-1);
    tracep->declBit(c+948,"io_cache_stage1_ready", false,-1);
    tracep->declBit(c+237,"io_cache_bus_r_valid", false,-1);
    tracep->declQuad(c+238,"io_cache_bus_r_bits_raddr", false,-1, 63,0);
    tracep->declBit(c+961,"io_sram_w_valid", false,-1);
    tracep->declBus(c+962,"io_sram_w_sram_addr", false,-1, 5,0);
    tracep->declArray(c+74,"io_sram_w_sram_data", false,-1, 127,0);
    tracep->declArray(c+70,"io_sram_w_sram_tag", false,-1, 127,0);
    tracep->declBit(c+963,"io_sram_w_chose_tag", false,-1);
    tracep->declBit(c+272,"io_rdata_valid", false,-1);
    tracep->declQuad(c+273,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declQuad(c+275,"io_rdata_bits_pc", false,-1, 63,0);
    tracep->declBit(c+963,"reg_chosen_tag", false,-1);
    tracep->declQuad(c+273,"reg_rdata", false,-1, 63,0);
    tracep->declBit(c+272,"reg_valid", false,-1);
    tracep->declBit(c+964,"reg_ready", false,-1);
    tracep->declQuad(c+238,"reg_r_raddr", false,-1, 63,0);
    tracep->declBit(c+237,"reg_r_valid", false,-1);
    tracep->declArray(c+74,"reg_cache_wdata", false,-1, 127,0);
    tracep->declBit(c+961,"reg_cache_write", false,-1);
    tracep->declQuad(c+275,"reg_cpu_addr", false,-1, 63,0);
    tracep->declQuad(c+965,"reg_lru_1", false,-1, 63,0);
    tracep->declBus(c+967,"reg_bus_state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+968,"valid", false,-1);
    tracep->declBit(c+969,"hit_valid", false,-1);
    tracep->declBit(c+970,"is_hit", false,-1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declQuad(c+971,"chose_bit", false,-1, 63,0);
    tracep->declQuad(c+973,"lru_1_or_chose", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declQuad(c+975,"lru_1_and_neg_chose", false,-1, 63,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declQuad(c+977,"chose_bit", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+67,"io_addr", false,-1, 5,0);
    tracep->declBit(c+68,"io_wen", false,-1);
    tracep->declArray(c+3109,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+74,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+35,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+35,"Q", false,-1, 127,0);
    tracep->declArray(c+979,"sram_0", false,-1, 127,0);
    tracep->declArray(c+983,"sram_1", false,-1, 127,0);
    tracep->declArray(c+987,"sram_2", false,-1, 127,0);
    tracep->declArray(c+991,"sram_3", false,-1, 127,0);
    tracep->declArray(c+995,"sram_4", false,-1, 127,0);
    tracep->declArray(c+999,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1003,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1007,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1011,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1015,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1019,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1023,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1027,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1031,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1035,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1039,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1043,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1047,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1051,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1055,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1059,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1063,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1067,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1071,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1075,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1079,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1083,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1087,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1091,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1095,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1099,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1103,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1107,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1111,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1115,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1119,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1123,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1127,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1131,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1135,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1139,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1143,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1147,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1151,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1155,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1159,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1163,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1167,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1171,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1175,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1179,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1183,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1187,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1191,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1195,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1199,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1203,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1207,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1211,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1215,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1219,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1223,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1227,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1231,"sram_63", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+67,"io_addr", false,-1, 5,0);
    tracep->declBit(c+68,"io_wen", false,-1);
    tracep->declArray(c+3109,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+70,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+39,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+39,"Q", false,-1, 127,0);
    tracep->declArray(c+1235,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1239,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1243,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1247,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1251,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1255,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1259,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1263,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1267,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1271,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1275,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1279,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1283,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1287,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1291,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1295,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1299,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1303,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1307,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1311,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1315,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1319,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1323,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1327,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1331,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1335,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1339,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1343,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1347,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1351,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1355,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1359,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1363,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1367,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1371,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1375,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1379,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1383,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1387,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1391,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1395,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1399,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1403,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1407,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1411,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1415,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1419,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1423,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1427,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1431,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1435,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1439,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1443,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1447,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1451,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1455,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1459,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1463,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1467,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1471,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1475,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1479,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1483,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1487,"sram_63", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+67,"io_addr", false,-1, 5,0);
    tracep->declBit(c+69,"io_wen", false,-1);
    tracep->declArray(c+3109,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+74,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+43,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+43,"Q", false,-1, 127,0);
    tracep->declArray(c+1491,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1495,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1499,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1503,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1507,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1511,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1515,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1519,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1523,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1527,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1531,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1535,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1539,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1543,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1547,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1551,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1555,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1559,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1563,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1567,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1571,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1575,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1579,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1583,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1587,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1591,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1595,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1599,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1603,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1607,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1611,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1615,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1619,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1623,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1627,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1631,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1635,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1639,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1643,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1647,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1651,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1655,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1659,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1663,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1667,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1671,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1675,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1679,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1683,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1687,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1691,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1695,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1699,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1703,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1707,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1711,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1715,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1719,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1723,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1727,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1731,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1735,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1739,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1743,"sram_63", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram3 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+67,"io_addr", false,-1, 5,0);
    tracep->declBit(c+69,"io_wen", false,-1);
    tracep->declArray(c+3109,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+70,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+47,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+47,"Q", false,-1, 127,0);
    tracep->declArray(c+1747,"sram_0", false,-1, 127,0);
    tracep->declArray(c+1751,"sram_1", false,-1, 127,0);
    tracep->declArray(c+1755,"sram_2", false,-1, 127,0);
    tracep->declArray(c+1759,"sram_3", false,-1, 127,0);
    tracep->declArray(c+1763,"sram_4", false,-1, 127,0);
    tracep->declArray(c+1767,"sram_5", false,-1, 127,0);
    tracep->declArray(c+1771,"sram_6", false,-1, 127,0);
    tracep->declArray(c+1775,"sram_7", false,-1, 127,0);
    tracep->declArray(c+1779,"sram_8", false,-1, 127,0);
    tracep->declArray(c+1783,"sram_9", false,-1, 127,0);
    tracep->declArray(c+1787,"sram_10", false,-1, 127,0);
    tracep->declArray(c+1791,"sram_11", false,-1, 127,0);
    tracep->declArray(c+1795,"sram_12", false,-1, 127,0);
    tracep->declArray(c+1799,"sram_13", false,-1, 127,0);
    tracep->declArray(c+1803,"sram_14", false,-1, 127,0);
    tracep->declArray(c+1807,"sram_15", false,-1, 127,0);
    tracep->declArray(c+1811,"sram_16", false,-1, 127,0);
    tracep->declArray(c+1815,"sram_17", false,-1, 127,0);
    tracep->declArray(c+1819,"sram_18", false,-1, 127,0);
    tracep->declArray(c+1823,"sram_19", false,-1, 127,0);
    tracep->declArray(c+1827,"sram_20", false,-1, 127,0);
    tracep->declArray(c+1831,"sram_21", false,-1, 127,0);
    tracep->declArray(c+1835,"sram_22", false,-1, 127,0);
    tracep->declArray(c+1839,"sram_23", false,-1, 127,0);
    tracep->declArray(c+1843,"sram_24", false,-1, 127,0);
    tracep->declArray(c+1847,"sram_25", false,-1, 127,0);
    tracep->declArray(c+1851,"sram_26", false,-1, 127,0);
    tracep->declArray(c+1855,"sram_27", false,-1, 127,0);
    tracep->declArray(c+1859,"sram_28", false,-1, 127,0);
    tracep->declArray(c+1863,"sram_29", false,-1, 127,0);
    tracep->declArray(c+1867,"sram_30", false,-1, 127,0);
    tracep->declArray(c+1871,"sram_31", false,-1, 127,0);
    tracep->declArray(c+1875,"sram_32", false,-1, 127,0);
    tracep->declArray(c+1879,"sram_33", false,-1, 127,0);
    tracep->declArray(c+1883,"sram_34", false,-1, 127,0);
    tracep->declArray(c+1887,"sram_35", false,-1, 127,0);
    tracep->declArray(c+1891,"sram_36", false,-1, 127,0);
    tracep->declArray(c+1895,"sram_37", false,-1, 127,0);
    tracep->declArray(c+1899,"sram_38", false,-1, 127,0);
    tracep->declArray(c+1903,"sram_39", false,-1, 127,0);
    tracep->declArray(c+1907,"sram_40", false,-1, 127,0);
    tracep->declArray(c+1911,"sram_41", false,-1, 127,0);
    tracep->declArray(c+1915,"sram_42", false,-1, 127,0);
    tracep->declArray(c+1919,"sram_43", false,-1, 127,0);
    tracep->declArray(c+1923,"sram_44", false,-1, 127,0);
    tracep->declArray(c+1927,"sram_45", false,-1, 127,0);
    tracep->declArray(c+1931,"sram_46", false,-1, 127,0);
    tracep->declArray(c+1935,"sram_47", false,-1, 127,0);
    tracep->declArray(c+1939,"sram_48", false,-1, 127,0);
    tracep->declArray(c+1943,"sram_49", false,-1, 127,0);
    tracep->declArray(c+1947,"sram_50", false,-1, 127,0);
    tracep->declArray(c+1951,"sram_51", false,-1, 127,0);
    tracep->declArray(c+1955,"sram_52", false,-1, 127,0);
    tracep->declArray(c+1959,"sram_53", false,-1, 127,0);
    tracep->declArray(c+1963,"sram_54", false,-1, 127,0);
    tracep->declArray(c+1967,"sram_55", false,-1, 127,0);
    tracep->declArray(c+1971,"sram_56", false,-1, 127,0);
    tracep->declArray(c+1975,"sram_57", false,-1, 127,0);
    tracep->declArray(c+1979,"sram_58", false,-1, 127,0);
    tracep->declArray(c+1983,"sram_59", false,-1, 127,0);
    tracep->declArray(c+1987,"sram_60", false,-1, 127,0);
    tracep->declArray(c+1991,"sram_61", false,-1, 127,0);
    tracep->declArray(c+1995,"sram_62", false,-1, 127,0);
    tracep->declArray(c+1999,"sram_63", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram4 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+78,"io_addr", false,-1, 5,0);
    tracep->declBit(c+79,"io_wen", false,-1);
    tracep->declArray(c+81,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+89,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+51,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+51,"Q", false,-1, 127,0);
    tracep->declArray(c+2003,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2007,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2011,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2015,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2019,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2023,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2027,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2031,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2035,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2039,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2043,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2047,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2051,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2055,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2059,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2063,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2067,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2071,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2075,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2079,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2083,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2087,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2091,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2095,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2099,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2103,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2107,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2111,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2115,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2119,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2123,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2127,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2131,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2135,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2139,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2143,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2147,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2151,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2155,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2159,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2163,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2167,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2171,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2175,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2179,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2183,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2187,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2191,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2195,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2199,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2203,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2207,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2211,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2215,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2219,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2223,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2227,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2231,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2235,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2239,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2243,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2247,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2251,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2255,"sram_63", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram5 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+78,"io_addr", false,-1, 5,0);
    tracep->declBit(c+79,"io_wen", false,-1);
    tracep->declArray(c+3109,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+85,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+55,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+55,"Q", false,-1, 127,0);
    tracep->declArray(c+2259,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2263,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2267,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2271,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2275,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2279,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2283,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2287,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2291,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2295,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2299,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2303,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2307,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2311,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2315,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2319,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2323,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2327,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2331,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2335,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2339,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2343,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2347,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2351,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2355,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2359,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2363,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2367,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2371,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2375,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2379,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2383,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2387,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2391,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2395,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2399,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2403,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2407,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2411,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2415,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2419,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2423,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2427,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2431,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2435,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2439,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2443,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2447,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2451,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2455,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2459,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2463,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2467,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2471,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2475,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2479,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2483,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2487,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2491,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2495,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2499,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2503,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2507,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2511,"sram_63", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram6 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+78,"io_addr", false,-1, 5,0);
    tracep->declBit(c+80,"io_wen", false,-1);
    tracep->declArray(c+81,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+89,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+59,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+59,"Q", false,-1, 127,0);
    tracep->declArray(c+2515,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2519,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2523,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2527,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2531,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2535,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2539,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2543,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2547,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2551,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2555,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2559,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2563,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2567,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2571,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2575,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2579,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2583,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2587,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2591,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2595,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2599,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2603,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2607,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2611,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2615,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2619,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2623,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2627,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2631,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2635,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2639,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2643,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2647,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2651,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2655,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2659,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2663,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2667,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2671,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2675,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2679,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2683,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2687,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2691,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2695,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2699,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2703,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2707,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2711,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2715,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2719,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2723,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2727,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2731,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2735,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2739,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2743,"sram_57", false,-1, 127,0);
    tracep->declArray(c+2747,"sram_58", false,-1, 127,0);
    tracep->declArray(c+2751,"sram_59", false,-1, 127,0);
    tracep->declArray(c+2755,"sram_60", false,-1, 127,0);
    tracep->declArray(c+2759,"sram_61", false,-1, 127,0);
    tracep->declArray(c+2763,"sram_62", false,-1, 127,0);
    tracep->declArray(c+2767,"sram_63", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram7 ");
    tracep->declBit(c+3027,"clock", false,-1);
    tracep->declBit(c+3028,"reset", false,-1);
    tracep->declBus(c+78,"io_addr", false,-1, 5,0);
    tracep->declBit(c+80,"io_wen", false,-1);
    tracep->declArray(c+3109,"io_wmask", false,-1, 127,0);
    tracep->declArray(c+85,"io_wdata", false,-1, 127,0);
    tracep->declArray(c+63,"io_rdata", false,-1, 127,0);
    tracep->declArray(c+63,"Q", false,-1, 127,0);
    tracep->declArray(c+2771,"sram_0", false,-1, 127,0);
    tracep->declArray(c+2775,"sram_1", false,-1, 127,0);
    tracep->declArray(c+2779,"sram_2", false,-1, 127,0);
    tracep->declArray(c+2783,"sram_3", false,-1, 127,0);
    tracep->declArray(c+2787,"sram_4", false,-1, 127,0);
    tracep->declArray(c+2791,"sram_5", false,-1, 127,0);
    tracep->declArray(c+2795,"sram_6", false,-1, 127,0);
    tracep->declArray(c+2799,"sram_7", false,-1, 127,0);
    tracep->declArray(c+2803,"sram_8", false,-1, 127,0);
    tracep->declArray(c+2807,"sram_9", false,-1, 127,0);
    tracep->declArray(c+2811,"sram_10", false,-1, 127,0);
    tracep->declArray(c+2815,"sram_11", false,-1, 127,0);
    tracep->declArray(c+2819,"sram_12", false,-1, 127,0);
    tracep->declArray(c+2823,"sram_13", false,-1, 127,0);
    tracep->declArray(c+2827,"sram_14", false,-1, 127,0);
    tracep->declArray(c+2831,"sram_15", false,-1, 127,0);
    tracep->declArray(c+2835,"sram_16", false,-1, 127,0);
    tracep->declArray(c+2839,"sram_17", false,-1, 127,0);
    tracep->declArray(c+2843,"sram_18", false,-1, 127,0);
    tracep->declArray(c+2847,"sram_19", false,-1, 127,0);
    tracep->declArray(c+2851,"sram_20", false,-1, 127,0);
    tracep->declArray(c+2855,"sram_21", false,-1, 127,0);
    tracep->declArray(c+2859,"sram_22", false,-1, 127,0);
    tracep->declArray(c+2863,"sram_23", false,-1, 127,0);
    tracep->declArray(c+2867,"sram_24", false,-1, 127,0);
    tracep->declArray(c+2871,"sram_25", false,-1, 127,0);
    tracep->declArray(c+2875,"sram_26", false,-1, 127,0);
    tracep->declArray(c+2879,"sram_27", false,-1, 127,0);
    tracep->declArray(c+2883,"sram_28", false,-1, 127,0);
    tracep->declArray(c+2887,"sram_29", false,-1, 127,0);
    tracep->declArray(c+2891,"sram_30", false,-1, 127,0);
    tracep->declArray(c+2895,"sram_31", false,-1, 127,0);
    tracep->declArray(c+2899,"sram_32", false,-1, 127,0);
    tracep->declArray(c+2903,"sram_33", false,-1, 127,0);
    tracep->declArray(c+2907,"sram_34", false,-1, 127,0);
    tracep->declArray(c+2911,"sram_35", false,-1, 127,0);
    tracep->declArray(c+2915,"sram_36", false,-1, 127,0);
    tracep->declArray(c+2919,"sram_37", false,-1, 127,0);
    tracep->declArray(c+2923,"sram_38", false,-1, 127,0);
    tracep->declArray(c+2927,"sram_39", false,-1, 127,0);
    tracep->declArray(c+2931,"sram_40", false,-1, 127,0);
    tracep->declArray(c+2935,"sram_41", false,-1, 127,0);
    tracep->declArray(c+2939,"sram_42", false,-1, 127,0);
    tracep->declArray(c+2943,"sram_43", false,-1, 127,0);
    tracep->declArray(c+2947,"sram_44", false,-1, 127,0);
    tracep->declArray(c+2951,"sram_45", false,-1, 127,0);
    tracep->declArray(c+2955,"sram_46", false,-1, 127,0);
    tracep->declArray(c+2959,"sram_47", false,-1, 127,0);
    tracep->declArray(c+2963,"sram_48", false,-1, 127,0);
    tracep->declArray(c+2967,"sram_49", false,-1, 127,0);
    tracep->declArray(c+2971,"sram_50", false,-1, 127,0);
    tracep->declArray(c+2975,"sram_51", false,-1, 127,0);
    tracep->declArray(c+2979,"sram_52", false,-1, 127,0);
    tracep->declArray(c+2983,"sram_53", false,-1, 127,0);
    tracep->declArray(c+2987,"sram_54", false,-1, 127,0);
    tracep->declArray(c+2991,"sram_55", false,-1, 127,0);
    tracep->declArray(c+2995,"sram_56", false,-1, 127,0);
    tracep->declArray(c+2999,"sram_57", false,-1, 127,0);
    tracep->declArray(c+3003,"sram_58", false,-1, 127,0);
    tracep->declArray(c+3007,"sram_59", false,-1, 127,0);
    tracep->declArray(c+3011,"sram_60", false,-1, 127,0);
    tracep->declArray(c+3015,"sram_61", false,-1, 127,0);
    tracep->declArray(c+3019,"sram_62", false,-1, 127,0);
    tracep->declArray(c+3023,"sram_63", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
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
    VlWide<8>/*255:0*/ __Vtemp_hafea8432__0;
    VlWide<8>/*255:0*/ __Vtemp_hb3faad4d__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b945697__0;
    VlWide<4>/*127:0*/ __Vtemp_h83563b0d__0;
    VlWide<4>/*127:0*/ __Vtemp_hfddea7ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h6618c490__0;
    VlWide<4>/*127:0*/ __Vtemp_h71d6e46b__0;
    VlWide<4>/*127:0*/ __Vtemp_h9199e895__0;
    VlWide<4>/*127:0*/ __Vtemp_h8ab6abe0__0;
    VlWide<16>/*511:0*/ __Vtemp_h35e25ae8__0;
    VlWide<4>/*127:0*/ __Vtemp_h96d8aca3__0;
    VlWide<4>/*127:0*/ __Vtemp_h0fce6913__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9));
    bufp->fullQData(oldp+2,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                              ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                              : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                  ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr
                                  : 0ULL))),64);
    bufp->fullBit(oldp+4,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid));
    bufp->fullQData(oldp+5,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                              ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                              : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                  ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata
                                  : 0ULL))),64);
    bufp->fullCData(oldp+7,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                              ? 0xffU : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb)
                                          : 0U))),8);
    bufp->fullBit(oldp+8,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast));
    bufp->fullBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2));
    bufp->fullQData(oldp+10,(vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr),64);
    bufp->fullCData(oldp+12,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0))
                               ? 1U : (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)))),8);
    bufp->fullBit(oldp+13,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
    bufp->fullBit(oldp+14,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
    bufp->fullBit(oldp+15,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
    bufp->fullBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
    bufp->fullBit(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    bufp->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_data),64);
    bufp->fullBit(oldp+20,(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    bufp->fullQData(oldp+21,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
    bufp->fullCData(oldp+23,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
    bufp->fullBit(oldp+24,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    bufp->fullQData(oldp+25,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
    bufp->fullBit(oldp+27,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
    bufp->fullQData(oldp+28,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                               ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                               : vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr)),64);
    bufp->fullQData(oldp+30,(vlSelf->riscv_soc__DOT__axi_ram__DOT___mem_rdata),64);
    bufp->fullQData(oldp+32,(vlSelf->riscv_soc__DOT__axi_ram__DOT____Vcellinp__mem__wmask),64);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid) 
                            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
    bufp->fullWData(oldp+35,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
    bufp->fullWData(oldp+39,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
    bufp->fullWData(oldp+43,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
    bufp->fullWData(oldp+47,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
    bufp->fullWData(oldp+51,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
    bufp->fullWData(oldp+55,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
    bufp->fullWData(oldp+59,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
    bufp->fullWData(oldp+63,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
    bufp->fullCData(oldp+67,(vlSelf->riscv_soc__DOT___core_io_isram_addr),6);
    bufp->fullBit(oldp+68,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
    bufp->fullBit(oldp+69,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
    __Vtemp_h8800a5e4__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU));
    __Vtemp_h8800a5e4__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                         >> 0xaU) >> 0x20U));
    __Vtemp_h8800a5e4__0[2U] = 0U;
    __Vtemp_h8800a5e4__0[3U] = 0U;
    bufp->fullWData(oldp+70,(__Vtemp_h8800a5e4__0),128);
    bufp->fullWData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
    bufp->fullCData(oldp+78,(vlSelf->riscv_soc__DOT___core_io_dsram_addr),6);
    bufp->fullBit(oldp+79,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
    bufp->fullBit(oldp+80,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
    __Vtemp_he557d9cd__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
    __Vtemp_he557d9cd__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
    __Vtemp_he557d9cd__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
    __Vtemp_he557d9cd__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
    bufp->fullWData(oldp+81,(__Vtemp_he557d9cd__0),128);
    __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
    __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                        >> 0x20U));
    __Vtemp_h5cafde3d__0[2U] = 0U;
    __Vtemp_h5cafde3d__0[3U] = 0U;
    bufp->fullWData(oldp+85,(__Vtemp_h5cafde3d__0),128);
    bufp->fullWData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
    bufp->fullBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid));
    bufp->fullQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr),64);
    bufp->fullQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata),64);
    bufp->fullBit(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
    bufp->fullQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
    bufp->fullBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    bufp->fullBit(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
    bufp->fullBit(oldp+103,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                             <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
    bufp->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
    bufp->fullQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
    bufp->fullBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    bufp->fullCData(oldp+109,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+110,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2));
    bufp->fullCData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
    bufp->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3),64);
    bufp->fullSData(oldp+115,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T));
    bufp->fullSData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
    bufp->fullBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except));
    bufp->fullBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq));
    bufp->fullBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq));
    bufp->fullCData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
    bufp->fullQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
    bufp->fullQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
    bufp->fullBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit));
    bufp->fullIData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
    bufp->fullBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    bufp->fullQData(oldp+131,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                           >> 0xfU)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
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
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                                (0x3eU 
                                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                    >> 0xeU))]))))),64);
    bufp->fullQData(oldp+133,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                           >> 0x14U)) 
                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
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
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                                (0x3eU 
                                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                    >> 0x13U))]))))),64);
    bufp->fullQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data),64);
    bufp->fullQData(oldp+137,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
    bufp->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_next_pc),64);
    bufp->fullQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus),64);
    bufp->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie),64);
    bufp->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
    bufp->fullQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
    bufp->fullQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
    bufp->fullQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
    bufp->fullQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
    bufp->fullQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
    bufp->fullQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
    bufp->fullQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
    bufp->fullQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
    bufp->fullQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
    bufp->fullQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
    bufp->fullQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
    bufp->fullQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
    bufp->fullQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
    bufp->fullQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
    bufp->fullQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
    bufp->fullQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
    bufp->fullQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
    bufp->fullQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
    bufp->fullQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
    bufp->fullQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
    bufp->fullQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
    bufp->fullQData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
    bufp->fullQData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
    bufp->fullQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
    bufp->fullQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
    bufp->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
    bufp->fullQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
    bufp->fullQData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
    bufp->fullQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
    bufp->fullQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
    bufp->fullQData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
    bufp->fullBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
    bufp->fullIData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
    bufp->fullQData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
    bufp->fullQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
    bufp->fullBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
    bufp->fullBit(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
    bufp->fullCData(oldp+217,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
    bufp->fullQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
    bufp->fullQData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
    bufp->fullQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
    bufp->fullQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
    bufp->fullQData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
    bufp->fullQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
    bufp->fullQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
    bufp->fullQData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
    bufp->fullQData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
    bufp->fullBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq));
    bufp->fullBit(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    bufp->fullQData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    bufp->fullQData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
    bufp->fullQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
    bufp->fullBit(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
    bufp->fullBit(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    bufp->fullQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
    bufp->fullBit(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid));
    bufp->fullQData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
    bufp->fullBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid));
    bufp->fullCData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb),8);
    bufp->fullBit(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast));
    bufp->fullBit(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1));
    bufp->fullBit(oldp+256,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
    bufp->fullBit(oldp+257,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
    bufp->fullBit(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast));
    bufp->fullBit(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1));
    bufp->fullBit(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1));
    bufp->fullBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4));
    bufp->fullBit(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
    bufp->fullCData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
    bufp->fullCData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
    bufp->fullCData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
    bufp->fullBit(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
    bufp->fullBit(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
    bufp->fullBit(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    bufp->fullBit(oldp+269,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    bufp->fullBit(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    bufp->fullBit(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
    bufp->fullBit(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    bufp->fullQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
    bufp->fullQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
    bufp->fullQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
    bufp->fullBit(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    bufp->fullBit(oldp+280,(((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                     >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1))));
    bufp->fullBit(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid));
    bufp->fullQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data),64);
    bufp->fullQData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc),64);
    bufp->fullQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata),64);
    bufp->fullBit(oldp+288,(((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                     >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                              : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4)
                                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
    bufp->fullBit(oldp+289,(((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
    bufp->fullBit(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid));
    bufp->fullBit(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
    bufp->fullCData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
    bufp->fullQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
    bufp->fullCData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
    bufp->fullBit(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
    bufp->fullQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
    bufp->fullCData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
    bufp->fullCData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
    bufp->fullBit(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    bufp->fullSData(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
    bufp->fullBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    bufp->fullWData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
    bufp->fullBit(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
    bufp->fullBit(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
    bufp->fullQData(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
    bufp->fullQData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
    bufp->fullQData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
    bufp->fullBit(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    bufp->fullQData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
    bufp->fullBit(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    bufp->fullCData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
    bufp->fullBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    bufp->fullBit(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    bufp->fullQData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit),64);
    bufp->fullBit(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0));
    bufp->fullBit(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2));
    bufp->fullBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__or_hit));
    bufp->fullBit(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0));
    bufp->fullIData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4),32);
    __Vtemp_hafea8432__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0);
    __Vtemp_hafea8432__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 
                                        >> 0x20U));
    __Vtemp_hafea8432__0[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1);
    __Vtemp_hafea8432__0[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 
                                        >> 0x20U));
    __Vtemp_hafea8432__0[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2);
    __Vtemp_hafea8432__0[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 
                                        >> 0x20U));
    __Vtemp_hafea8432__0[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3);
    __Vtemp_hafea8432__0[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 
                                        >> 0x20U));
    bufp->fullQData(oldp+332,((((QData)((IData)(__Vtemp_hafea8432__0[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                             << 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                      << 6U))))) 
                               | (((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                            << 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              __Vtemp_hafea8432__0[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                                    << 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                      << 6U))))) 
                                  | ((QData)((IData)(
                                                     __Vtemp_hafea8432__0[
                                                     (6U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                         << 1U))])) 
                                     >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                  << 6U)))))),64);
    bufp->fullBit(oldp+334,((1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3) 
                                     << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0)))) 
                                   >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)))));
    bufp->fullBit(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    bufp->fullBit(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T));
    bufp->fullBit(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    bufp->fullCData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
    bufp->fullCData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
    bufp->fullCData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
    bufp->fullQData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
    bufp->fullCData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
    bufp->fullQData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
    bufp->fullIData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
    bufp->fullQData(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
    bufp->fullIData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
    bufp->fullCData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
    bufp->fullBit(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
    bufp->fullBit(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
    bufp->fullSData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
    bufp->fullQData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
    bufp->fullCData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__fun_op),3);
    bufp->fullBit(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__temp_system_is_pri));
    bufp->fullBit(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__is_sr));
    bufp->fullCData(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType),4);
    __Vtemp_hb3faad4d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
    __Vtemp_hb3faad4d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                                        >> 0x20U));
    __Vtemp_hb3faad4d__0[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
    __Vtemp_hb3faad4d__0[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                                        >> 0x20U));
    __Vtemp_hb3faad4d__0[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
    __Vtemp_hb3faad4d__0[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                                        >> 0x20U));
    __Vtemp_hb3faad4d__0[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
    __Vtemp_hb3faad4d__0[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                                        >> 0x20U));
    bufp->fullQData(oldp+360,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                ? (((QData)((IData)(
                                                    __Vtemp_hb3faad4d__0[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                          << 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                   << 6U)))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                             << 6U))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                  << 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_hb3faad4d__0[
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
                                                         __Vtemp_hb3faad4d__0[
                                                         (6U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                             << 1U))])) 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                << 6U)))))
                                : 0ULL)),64);
    bufp->fullQData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
    bufp->fullBit(oldp+364,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))));
    bufp->fullBit(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
    bufp->fullBit(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
    bufp->fullQData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
    bufp->fullBit(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
    bufp->fullQData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
    bufp->fullBit(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
    bufp->fullBit(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
    bufp->fullQData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data),64);
    bufp->fullQData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data),64);
    bufp->fullCData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
    bufp->fullCData(oldp+379,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN))),4);
    bufp->fullBit(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
    bufp->fullQData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
    bufp->fullBit(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
    bufp->fullBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
    bufp->fullBit(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
    bufp->fullBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
    bufp->fullBit(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
    bufp->fullBit(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
    bufp->fullBit(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
    bufp->fullBit(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    bufp->fullBit(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
    bufp->fullBit(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T));
    bufp->fullQData(oldp+393,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                : 0ULL)),64);
    bufp->fullBit(oldp+395,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h0b2f13a9__0))));
    bufp->fullQData(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T),64);
    bufp->fullQData(oldp+398,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2)
                                ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                : 0ULL)),64);
    bufp->fullQData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
    bufp->fullQData(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
    bufp->fullQData(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
    bufp->fullBit(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
    bufp->fullQData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
    bufp->fullBit(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
    bufp->fullCData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
    bufp->fullWData(oldp+411,(__Vtemp_hfddea7ef__0),127);
    bufp->fullBit(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
    __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
    __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                        >> 0x20U));
    __Vtemp_h6618c490__0[2U] = 1U;
    bufp->fullWData(oldp+416,(__Vtemp_h6618c490__0),65);
    bufp->fullQData(oldp+419,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
    bufp->fullQData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
    bufp->fullBit(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid));
    bufp->fullQData(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
    bufp->fullBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
    bufp->fullBit(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    bufp->fullQData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
    bufp->fullQData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
    bufp->fullCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
    bufp->fullBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
    bufp->fullBit(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
    bufp->fullCData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
    bufp->fullQData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
    bufp->fullBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    bufp->fullBit(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
    __Vtemp_h71d6e46b__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    __Vtemp_h71d6e46b__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                        >> 0x20U));
    __Vtemp_h71d6e46b__0[2U] = 0U;
    __Vtemp_h71d6e46b__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h9199e895__0, __Vtemp_h71d6e46b__0, 
                  (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                            << 3U)));
    __Vtemp_h8ab6abe0__0[0U] = __Vtemp_h9199e895__0[0U];
    __Vtemp_h8ab6abe0__0[1U] = __Vtemp_h9199e895__0[1U];
    __Vtemp_h8ab6abe0__0[2U] = __Vtemp_h9199e895__0[2U];
    __Vtemp_h8ab6abe0__0[3U] = (0x7fffffffU & __Vtemp_h9199e895__0[3U]);
    bufp->fullWData(oldp+440,(__Vtemp_h8ab6abe0__0),127);
    bufp->fullBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
    bufp->fullQData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data),64);
    bufp->fullBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid));
    bufp->fullQData(oldp+448,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
    bufp->fullBit(oldp+450,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
    bufp->fullBit(oldp+451,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
    bufp->fullBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid));
    bufp->fullQData(oldp+453,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                                : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))),64);
    bufp->fullBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
    bufp->fullWData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
    bufp->fullWData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
    bufp->fullWData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
    bufp->fullWData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
    bufp->fullCData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
    bufp->fullCData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
    bufp->fullCData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
    bufp->fullWData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend),65);
    bufp->fullWData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor),65);
    bufp->fullWData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem),65);
    bufp->fullWData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor),65);
    bufp->fullBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid));
    bufp->fullQData(oldp+485,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                >> 0x1fU))))) 
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
    bufp->fullBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    bufp->fullBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    bufp->fullCData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
    bufp->fullWData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
    bufp->fullWData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
    bufp->fullWData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
    bufp->fullCData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
    bufp->fullCData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
    bufp->fullWData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2),65);
    bufp->fullBit(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
    bufp->fullQData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data),64);
    bufp->fullBit(oldp+511,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2) 
                             & (IData)(((0U != (0x1cU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
    __Vtemp_h35e25ae8__0[0U] = 0U;
    __Vtemp_h35e25ae8__0[1U] = 0U;
    __Vtemp_h35e25ae8__0[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    __Vtemp_h35e25ae8__0[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
                                        >> 0x20U));
    __Vtemp_h35e25ae8__0[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
    __Vtemp_h35e25ae8__0[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                        >> 0x20U));
    __Vtemp_h35e25ae8__0[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
    __Vtemp_h35e25ae8__0[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                        >> 0x20U));
    __Vtemp_h35e25ae8__0[8U] = 0U;
    __Vtemp_h35e25ae8__0[9U] = 0U;
    __Vtemp_h35e25ae8__0[0xaU] = (IData)(((0xffffffffffffffe0ULL 
                                           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                          | (QData)((IData)(
                                                            (0x1fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))));
    __Vtemp_h35e25ae8__0[0xbU] = (IData)((((0xffffffffffffffe0ULL 
                                            & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                           | (QData)((IData)(
                                                             (0x1fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))) 
                                          >> 0x20U));
    __Vtemp_h35e25ae8__0[0xcU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
    __Vtemp_h35e25ae8__0[0xdU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                          >> 0x20U));
    __Vtemp_h35e25ae8__0[0xeU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
    __Vtemp_h35e25ae8__0[0xfU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                          >> 0x20U));
    bufp->fullQData(oldp+512,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? (0x80ULL | ((0xffffffffffffff77ULL 
                                               & vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus) 
                                              | (QData)((IData)(
                                                                (8U 
                                                                 & ((IData)(
                                                                            (vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
                                                                             >> 7U)) 
                                                                    << 3U))))))
                                : (((QData)((IData)(
                                                    __Vtemp_h35e25ae8__0[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x1c0U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          << 4U))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp_h35e25ae8__0[
                                                                (0xeU 
                                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                    >> 1U))]))))),64);
    bufp->fullSData(oldp+514,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
    bufp->fullBit(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except));
    bufp->fullCData(oldp+516,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                ? 0xbU : (3U & (- (IData)(
                                                          (8U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                               >> 2U)))))))),6);
    bufp->fullBit(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc));
    bufp->fullQData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
    bufp->fullQData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
    bufp->fullQData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
    bufp->fullBit(oldp+524,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+525,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
    bufp->fullBit(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
    bufp->fullBit(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq));
    bufp->fullBit(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq));
    bufp->fullBit(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T));
    bufp->fullBit(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    bufp->fullQData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
    bufp->fullCData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
    bufp->fullCData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
    bufp->fullQData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
    bufp->fullQData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
    bufp->fullQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
    bufp->fullQData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
    bufp->fullCData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
    bufp->fullCData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
    bufp->fullBit(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
    bufp->fullBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
    bufp->fullBit(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
    bufp->fullBit(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
    bufp->fullQData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc),64);
    bufp->fullBit(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
    bufp->fullWData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
    bufp->fullWData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
    bufp->fullWData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
    bufp->fullWData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
    bufp->fullWData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
    bufp->fullWData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
    bufp->fullWData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
    bufp->fullWData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
    bufp->fullWData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
    bufp->fullWData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
    bufp->fullWData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
    bufp->fullWData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
    bufp->fullWData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
    bufp->fullWData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
    bufp->fullWData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
    bufp->fullWData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
    bufp->fullWData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
    bufp->fullWData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
    bufp->fullWData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
    bufp->fullWData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
    bufp->fullWData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
    bufp->fullWData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
    bufp->fullWData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
    bufp->fullWData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
    bufp->fullWData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
    bufp->fullWData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
    bufp->fullWData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
    bufp->fullWData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
    bufp->fullWData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
    bufp->fullWData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
    bufp->fullWData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
    bufp->fullWData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
    bufp->fullWData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
    bufp->fullWData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
    bufp->fullWData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
    bufp->fullWData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
    bufp->fullWData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
    bufp->fullWData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
    bufp->fullWData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
    bufp->fullWData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
    bufp->fullWData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
    bufp->fullWData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
    bufp->fullWData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
    bufp->fullWData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
    bufp->fullWData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
    bufp->fullWData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
    bufp->fullWData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
    bufp->fullWData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
    bufp->fullWData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
    bufp->fullWData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
    bufp->fullWData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
    bufp->fullWData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
    bufp->fullWData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
    bufp->fullWData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
    bufp->fullWData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
    bufp->fullWData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
    bufp->fullWData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
    bufp->fullWData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
    bufp->fullWData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
    bufp->fullWData(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
    bufp->fullWData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
    bufp->fullWData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
    bufp->fullWData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
    bufp->fullWData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
    bufp->fullQData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
    bufp->fullQData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
    bufp->fullQData(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
    bufp->fullQData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
    bufp->fullQData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
    bufp->fullQData(oldp+818,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
    bufp->fullCData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
    bufp->fullCData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
    bufp->fullCData(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
    bufp->fullCData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
    bufp->fullCData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
    bufp->fullCData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
    bufp->fullCData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
    bufp->fullCData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
    bufp->fullCData(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
    bufp->fullCData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
    bufp->fullCData(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
    bufp->fullCData(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
    bufp->fullCData(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
    bufp->fullCData(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
    bufp->fullCData(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
    bufp->fullCData(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
    bufp->fullCData(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
    bufp->fullCData(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
    bufp->fullCData(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
    bufp->fullCData(oldp+839,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
    bufp->fullCData(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
    bufp->fullCData(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
    bufp->fullCData(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
    bufp->fullCData(oldp+843,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
    bufp->fullCData(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
    bufp->fullCData(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
    bufp->fullCData(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
    bufp->fullCData(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
    bufp->fullCData(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
    bufp->fullCData(oldp+849,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
    bufp->fullCData(oldp+850,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
    bufp->fullCData(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
    bufp->fullCData(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
    bufp->fullCData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
    bufp->fullCData(oldp+854,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
    bufp->fullCData(oldp+855,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
    bufp->fullCData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
    bufp->fullCData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
    bufp->fullCData(oldp+858,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
    bufp->fullCData(oldp+859,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
    bufp->fullCData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
    bufp->fullCData(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
    bufp->fullCData(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
    bufp->fullCData(oldp+863,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
    bufp->fullCData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
    bufp->fullCData(oldp+865,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
    bufp->fullCData(oldp+866,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
    bufp->fullCData(oldp+867,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
    bufp->fullCData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
    bufp->fullCData(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
    bufp->fullCData(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
    bufp->fullCData(oldp+871,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
    bufp->fullCData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
    bufp->fullCData(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
    bufp->fullCData(oldp+874,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
    bufp->fullCData(oldp+875,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
    bufp->fullCData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
    bufp->fullCData(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
    bufp->fullCData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
    bufp->fullCData(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
    bufp->fullCData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
    bufp->fullCData(oldp+881,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
    bufp->fullCData(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
    bufp->fullCData(oldp+883,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
    bufp->fullCData(oldp+884,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
    bufp->fullBit(oldp+885,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid))));
    bufp->fullIData(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst),32);
    bufp->fullBit(oldp+887,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2));
    bufp->fullQData(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
    bufp->fullQData(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
    bufp->fullQData(oldp+892,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
    bufp->fullQData(oldp+894,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
    bufp->fullIData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
    bufp->fullIData(oldp+897,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
    bufp->fullIData(oldp+898,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
    bufp->fullIData(oldp+899,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
    bufp->fullBit(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
    bufp->fullBit(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
    bufp->fullBit(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
    bufp->fullBit(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
    bufp->fullBit(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
    bufp->fullBit(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
    bufp->fullBit(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
    bufp->fullBit(oldp+907,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
    bufp->fullCData(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
    bufp->fullCData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
    bufp->fullCData(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
    bufp->fullBit(oldp+911,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size));
    bufp->fullBit(oldp+912,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq));
    bufp->fullBit(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq));
    bufp->fullQData(oldp+914,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
    bufp->fullQData(oldp+916,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
    bufp->fullBit(oldp+918,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
    bufp->fullBit(oldp+919,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
    bufp->fullBit(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
    bufp->fullBit(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    bufp->fullBit(oldp+922,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    bufp->fullCData(oldp+923,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
    bufp->fullBit(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
    bufp->fullBit(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
    bufp->fullBit(oldp+926,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    bufp->fullBit(oldp+927,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    bufp->fullQData(oldp+928,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
    bufp->fullBit(oldp+930,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_tag_valid_tag_valid_0));
    bufp->fullBit(oldp+931,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_tag_valid_tag_valid_1));
    bufp->fullWData(oldp+932,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0),128);
    bufp->fullWData(oldp+936,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1),128);
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
    bufp->fullWData(oldp+940,(__Vtemp_h96d8aca3__0),128);
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
    bufp->fullWData(oldp+944,(__Vtemp_h0fce6913__0),128);
    bufp->fullBit(oldp+948,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    bufp->fullCData(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index),6);
    bufp->fullBit(oldp+950,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
    bufp->fullBit(oldp+951,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    bufp->fullQData(oldp+952,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
    bufp->fullBit(oldp+954,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit));
    bufp->fullQData(oldp+955,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U]))))),64);
    bufp->fullBit(oldp+957,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit));
    bufp->fullQData(oldp+958,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U]))))),64);
    bufp->fullBit(oldp+960,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
    bufp->fullBit(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    bufp->fullCData(oldp+962,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                >> 4U)))),6);
    bufp->fullBit(oldp+963,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    bufp->fullBit(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
    bufp->fullQData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
    bufp->fullCData(oldp+967,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
    bufp->fullBit(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid));
    bufp->fullBit(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__hit_valid));
    bufp->fullBit(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__is_hit));
    bufp->fullQData(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit),64);
    bufp->fullQData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__lru_1_or_chose),64);
    bufp->fullQData(oldp+975,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lru_1_and_neg_chose),64);
    bufp->fullQData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit),64);
    bufp->fullWData(oldp+979,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
    bufp->fullWData(oldp+983,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
    bufp->fullWData(oldp+987,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
    bufp->fullWData(oldp+991,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
    bufp->fullWData(oldp+995,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
    bufp->fullWData(oldp+999,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
    bufp->fullWData(oldp+1003,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
    bufp->fullWData(oldp+1007,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
    bufp->fullWData(oldp+1011,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
    bufp->fullWData(oldp+1015,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
    bufp->fullWData(oldp+1019,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
    bufp->fullWData(oldp+1023,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
    bufp->fullWData(oldp+1027,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
    bufp->fullWData(oldp+1031,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
    bufp->fullWData(oldp+1035,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
    bufp->fullWData(oldp+1039,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
    bufp->fullWData(oldp+1043,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
    bufp->fullWData(oldp+1047,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
    bufp->fullWData(oldp+1051,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
    bufp->fullWData(oldp+1055,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
    bufp->fullWData(oldp+1059,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
    bufp->fullWData(oldp+1063,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
    bufp->fullWData(oldp+1067,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
    bufp->fullWData(oldp+1071,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
    bufp->fullWData(oldp+1075,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
    bufp->fullWData(oldp+1079,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
    bufp->fullWData(oldp+1083,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
    bufp->fullWData(oldp+1087,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
    bufp->fullWData(oldp+1091,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
    bufp->fullWData(oldp+1095,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
    bufp->fullWData(oldp+1099,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
    bufp->fullWData(oldp+1103,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
    bufp->fullWData(oldp+1107,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
    bufp->fullWData(oldp+1111,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
    bufp->fullWData(oldp+1115,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
    bufp->fullWData(oldp+1119,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
    bufp->fullWData(oldp+1123,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
    bufp->fullWData(oldp+1127,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
    bufp->fullWData(oldp+1131,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
    bufp->fullWData(oldp+1135,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
    bufp->fullWData(oldp+1139,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
    bufp->fullWData(oldp+1143,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
    bufp->fullWData(oldp+1147,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
    bufp->fullWData(oldp+1151,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
    bufp->fullWData(oldp+1155,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
    bufp->fullWData(oldp+1159,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
    bufp->fullWData(oldp+1163,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
    bufp->fullWData(oldp+1167,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
    bufp->fullWData(oldp+1171,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
    bufp->fullWData(oldp+1175,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
    bufp->fullWData(oldp+1179,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
    bufp->fullWData(oldp+1183,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
    bufp->fullWData(oldp+1187,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
    bufp->fullWData(oldp+1191,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
    bufp->fullWData(oldp+1195,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
    bufp->fullWData(oldp+1199,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
    bufp->fullWData(oldp+1203,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
    bufp->fullWData(oldp+1207,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
    bufp->fullWData(oldp+1211,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
    bufp->fullWData(oldp+1215,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
    bufp->fullWData(oldp+1219,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
    bufp->fullWData(oldp+1223,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
    bufp->fullWData(oldp+1227,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
    bufp->fullWData(oldp+1231,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
    bufp->fullWData(oldp+1235,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
    bufp->fullWData(oldp+1239,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
    bufp->fullWData(oldp+1243,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
    bufp->fullWData(oldp+1247,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
    bufp->fullWData(oldp+1251,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
    bufp->fullWData(oldp+1255,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
    bufp->fullWData(oldp+1259,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
    bufp->fullWData(oldp+1263,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
    bufp->fullWData(oldp+1267,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
    bufp->fullWData(oldp+1271,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
    bufp->fullWData(oldp+1275,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
    bufp->fullWData(oldp+1279,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
    bufp->fullWData(oldp+1283,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
    bufp->fullWData(oldp+1287,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
    bufp->fullWData(oldp+1291,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
    bufp->fullWData(oldp+1295,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
    bufp->fullWData(oldp+1299,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
    bufp->fullWData(oldp+1303,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
    bufp->fullWData(oldp+1307,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
    bufp->fullWData(oldp+1311,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
    bufp->fullWData(oldp+1315,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
    bufp->fullWData(oldp+1319,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
    bufp->fullWData(oldp+1323,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
    bufp->fullWData(oldp+1327,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
    bufp->fullWData(oldp+1331,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
    bufp->fullWData(oldp+1335,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
    bufp->fullWData(oldp+1339,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
    bufp->fullWData(oldp+1343,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
    bufp->fullWData(oldp+1347,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
    bufp->fullWData(oldp+1351,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
    bufp->fullWData(oldp+1355,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
    bufp->fullWData(oldp+1359,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
    bufp->fullWData(oldp+1363,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
    bufp->fullWData(oldp+1367,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
    bufp->fullWData(oldp+1371,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
    bufp->fullWData(oldp+1375,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
    bufp->fullWData(oldp+1379,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
    bufp->fullWData(oldp+1383,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
    bufp->fullWData(oldp+1387,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
    bufp->fullWData(oldp+1391,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
    bufp->fullWData(oldp+1395,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
    bufp->fullWData(oldp+1399,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
    bufp->fullWData(oldp+1403,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
    bufp->fullWData(oldp+1407,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
    bufp->fullWData(oldp+1411,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
    bufp->fullWData(oldp+1415,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
    bufp->fullWData(oldp+1419,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
    bufp->fullWData(oldp+1423,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
    bufp->fullWData(oldp+1427,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
    bufp->fullWData(oldp+1431,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
    bufp->fullWData(oldp+1435,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
    bufp->fullWData(oldp+1439,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
    bufp->fullWData(oldp+1443,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
    bufp->fullWData(oldp+1447,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
    bufp->fullWData(oldp+1451,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
    bufp->fullWData(oldp+1455,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
    bufp->fullWData(oldp+1459,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
    bufp->fullWData(oldp+1463,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
    bufp->fullWData(oldp+1467,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
    bufp->fullWData(oldp+1471,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
    bufp->fullWData(oldp+1475,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
    bufp->fullWData(oldp+1479,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
    bufp->fullWData(oldp+1483,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
    bufp->fullWData(oldp+1487,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
    bufp->fullWData(oldp+1491,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
    bufp->fullWData(oldp+1495,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
    bufp->fullWData(oldp+1499,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
    bufp->fullWData(oldp+1503,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
    bufp->fullWData(oldp+1507,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
    bufp->fullWData(oldp+1511,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
    bufp->fullWData(oldp+1515,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
    bufp->fullWData(oldp+1519,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
    bufp->fullWData(oldp+1523,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
    bufp->fullWData(oldp+1527,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
    bufp->fullWData(oldp+1531,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
    bufp->fullWData(oldp+1535,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
    bufp->fullWData(oldp+1539,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
    bufp->fullWData(oldp+1543,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
    bufp->fullWData(oldp+1547,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
    bufp->fullWData(oldp+1551,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
    bufp->fullWData(oldp+1555,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
    bufp->fullWData(oldp+1559,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
    bufp->fullWData(oldp+1563,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
    bufp->fullWData(oldp+1567,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
    bufp->fullWData(oldp+1571,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
    bufp->fullWData(oldp+1575,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
    bufp->fullWData(oldp+1579,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
    bufp->fullWData(oldp+1583,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
    bufp->fullWData(oldp+1587,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
    bufp->fullWData(oldp+1591,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
    bufp->fullWData(oldp+1595,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
    bufp->fullWData(oldp+1599,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
    bufp->fullWData(oldp+1603,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
    bufp->fullWData(oldp+1607,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
    bufp->fullWData(oldp+1611,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
    bufp->fullWData(oldp+1615,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
    bufp->fullWData(oldp+1619,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
    bufp->fullWData(oldp+1623,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
    bufp->fullWData(oldp+1627,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
    bufp->fullWData(oldp+1631,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
    bufp->fullWData(oldp+1635,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
    bufp->fullWData(oldp+1639,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
    bufp->fullWData(oldp+1643,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
    bufp->fullWData(oldp+1647,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
    bufp->fullWData(oldp+1651,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
    bufp->fullWData(oldp+1655,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
    bufp->fullWData(oldp+1659,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
    bufp->fullWData(oldp+1663,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
    bufp->fullWData(oldp+1667,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
    bufp->fullWData(oldp+1671,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
    bufp->fullWData(oldp+1675,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
    bufp->fullWData(oldp+1679,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
    bufp->fullWData(oldp+1683,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
    bufp->fullWData(oldp+1687,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
    bufp->fullWData(oldp+1691,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
    bufp->fullWData(oldp+1695,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
    bufp->fullWData(oldp+1699,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
    bufp->fullWData(oldp+1703,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
    bufp->fullWData(oldp+1707,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
    bufp->fullWData(oldp+1711,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
    bufp->fullWData(oldp+1715,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
    bufp->fullWData(oldp+1719,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
    bufp->fullWData(oldp+1723,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
    bufp->fullWData(oldp+1727,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
    bufp->fullWData(oldp+1731,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
    bufp->fullWData(oldp+1735,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
    bufp->fullWData(oldp+1739,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
    bufp->fullWData(oldp+1743,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
    bufp->fullWData(oldp+1747,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
    bufp->fullWData(oldp+1751,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
    bufp->fullWData(oldp+1755,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
    bufp->fullWData(oldp+1759,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
    bufp->fullWData(oldp+1763,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
    bufp->fullWData(oldp+1767,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
    bufp->fullWData(oldp+1771,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
    bufp->fullWData(oldp+1775,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
    bufp->fullWData(oldp+1779,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
    bufp->fullWData(oldp+1783,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
    bufp->fullWData(oldp+1787,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
    bufp->fullWData(oldp+1791,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
    bufp->fullWData(oldp+1795,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
    bufp->fullWData(oldp+1799,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
    bufp->fullWData(oldp+1803,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
    bufp->fullWData(oldp+1807,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
    bufp->fullWData(oldp+1811,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
    bufp->fullWData(oldp+1815,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
    bufp->fullWData(oldp+1819,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
    bufp->fullWData(oldp+1823,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
    bufp->fullWData(oldp+1827,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
    bufp->fullWData(oldp+1831,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
    bufp->fullWData(oldp+1835,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
    bufp->fullWData(oldp+1839,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
    bufp->fullWData(oldp+1843,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
    bufp->fullWData(oldp+1847,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
    bufp->fullWData(oldp+1851,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
    bufp->fullWData(oldp+1855,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
    bufp->fullWData(oldp+1859,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
    bufp->fullWData(oldp+1863,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
    bufp->fullWData(oldp+1867,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
    bufp->fullWData(oldp+1871,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
    bufp->fullWData(oldp+1875,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
    bufp->fullWData(oldp+1879,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
    bufp->fullWData(oldp+1883,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
    bufp->fullWData(oldp+1887,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
    bufp->fullWData(oldp+1891,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
    bufp->fullWData(oldp+1895,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
    bufp->fullWData(oldp+1899,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
    bufp->fullWData(oldp+1903,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
    bufp->fullWData(oldp+1907,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
    bufp->fullWData(oldp+1911,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
    bufp->fullWData(oldp+1915,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
    bufp->fullWData(oldp+1919,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
    bufp->fullWData(oldp+1923,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
    bufp->fullWData(oldp+1927,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
    bufp->fullWData(oldp+1931,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
    bufp->fullWData(oldp+1935,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
    bufp->fullWData(oldp+1939,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
    bufp->fullWData(oldp+1943,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
    bufp->fullWData(oldp+1947,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
    bufp->fullWData(oldp+1951,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
    bufp->fullWData(oldp+1955,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
    bufp->fullWData(oldp+1959,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
    bufp->fullWData(oldp+1963,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
    bufp->fullWData(oldp+1967,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
    bufp->fullWData(oldp+1971,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
    bufp->fullWData(oldp+1975,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
    bufp->fullWData(oldp+1979,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
    bufp->fullWData(oldp+1983,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
    bufp->fullWData(oldp+1987,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
    bufp->fullWData(oldp+1991,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
    bufp->fullWData(oldp+1995,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
    bufp->fullWData(oldp+1999,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
    bufp->fullWData(oldp+2003,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
    bufp->fullWData(oldp+2007,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
    bufp->fullWData(oldp+2011,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
    bufp->fullWData(oldp+2015,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
    bufp->fullWData(oldp+2019,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
    bufp->fullWData(oldp+2023,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
    bufp->fullWData(oldp+2027,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
    bufp->fullWData(oldp+2031,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
    bufp->fullWData(oldp+2035,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
    bufp->fullWData(oldp+2039,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
    bufp->fullWData(oldp+2043,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
    bufp->fullWData(oldp+2047,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
    bufp->fullWData(oldp+2051,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
    bufp->fullWData(oldp+2055,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
    bufp->fullWData(oldp+2059,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
    bufp->fullWData(oldp+2063,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
    bufp->fullWData(oldp+2067,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
    bufp->fullWData(oldp+2071,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
    bufp->fullWData(oldp+2075,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
    bufp->fullWData(oldp+2079,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
    bufp->fullWData(oldp+2083,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
    bufp->fullWData(oldp+2087,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
    bufp->fullWData(oldp+2091,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
    bufp->fullWData(oldp+2095,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
    bufp->fullWData(oldp+2099,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
    bufp->fullWData(oldp+2103,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
    bufp->fullWData(oldp+2107,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
    bufp->fullWData(oldp+2111,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
    bufp->fullWData(oldp+2115,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
    bufp->fullWData(oldp+2119,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
    bufp->fullWData(oldp+2123,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
    bufp->fullWData(oldp+2127,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
    bufp->fullWData(oldp+2131,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
    bufp->fullWData(oldp+2135,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
    bufp->fullWData(oldp+2139,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
    bufp->fullWData(oldp+2143,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
    bufp->fullWData(oldp+2147,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
    bufp->fullWData(oldp+2151,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
    bufp->fullWData(oldp+2155,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
    bufp->fullWData(oldp+2159,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
    bufp->fullWData(oldp+2163,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
    bufp->fullWData(oldp+2167,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
    bufp->fullWData(oldp+2171,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
    bufp->fullWData(oldp+2175,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
    bufp->fullWData(oldp+2179,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
    bufp->fullWData(oldp+2183,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
    bufp->fullWData(oldp+2187,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
    bufp->fullWData(oldp+2191,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
    bufp->fullWData(oldp+2195,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
    bufp->fullWData(oldp+2199,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
    bufp->fullWData(oldp+2203,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
    bufp->fullWData(oldp+2207,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
    bufp->fullWData(oldp+2211,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
    bufp->fullWData(oldp+2215,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
    bufp->fullWData(oldp+2219,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
    bufp->fullWData(oldp+2223,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
    bufp->fullWData(oldp+2227,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
    bufp->fullWData(oldp+2231,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
    bufp->fullWData(oldp+2235,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
    bufp->fullWData(oldp+2239,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
    bufp->fullWData(oldp+2243,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
    bufp->fullWData(oldp+2247,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
    bufp->fullWData(oldp+2251,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
    bufp->fullWData(oldp+2255,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
    bufp->fullWData(oldp+2259,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
    bufp->fullWData(oldp+2263,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
    bufp->fullWData(oldp+2267,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
    bufp->fullWData(oldp+2271,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
    bufp->fullWData(oldp+2275,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
    bufp->fullWData(oldp+2279,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
    bufp->fullWData(oldp+2283,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
    bufp->fullWData(oldp+2287,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
    bufp->fullWData(oldp+2291,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
    bufp->fullWData(oldp+2295,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
    bufp->fullWData(oldp+2299,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
    bufp->fullWData(oldp+2303,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
    bufp->fullWData(oldp+2307,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
    bufp->fullWData(oldp+2311,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
    bufp->fullWData(oldp+2315,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
    bufp->fullWData(oldp+2319,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
    bufp->fullWData(oldp+2323,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
    bufp->fullWData(oldp+2327,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
    bufp->fullWData(oldp+2331,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
    bufp->fullWData(oldp+2335,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
    bufp->fullWData(oldp+2339,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
    bufp->fullWData(oldp+2343,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
    bufp->fullWData(oldp+2347,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
    bufp->fullWData(oldp+2351,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
    bufp->fullWData(oldp+2355,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
    bufp->fullWData(oldp+2359,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
    bufp->fullWData(oldp+2363,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
    bufp->fullWData(oldp+2367,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
    bufp->fullWData(oldp+2371,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
    bufp->fullWData(oldp+2375,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
    bufp->fullWData(oldp+2379,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
    bufp->fullWData(oldp+2383,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
    bufp->fullWData(oldp+2387,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
    bufp->fullWData(oldp+2391,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
    bufp->fullWData(oldp+2395,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
    bufp->fullWData(oldp+2399,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
    bufp->fullWData(oldp+2403,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
    bufp->fullWData(oldp+2407,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
    bufp->fullWData(oldp+2411,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
    bufp->fullWData(oldp+2415,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
    bufp->fullWData(oldp+2419,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
    bufp->fullWData(oldp+2423,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
    bufp->fullWData(oldp+2427,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
    bufp->fullWData(oldp+2431,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
    bufp->fullWData(oldp+2435,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
    bufp->fullWData(oldp+2439,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
    bufp->fullWData(oldp+2443,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
    bufp->fullWData(oldp+2447,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
    bufp->fullWData(oldp+2451,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
    bufp->fullWData(oldp+2455,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
    bufp->fullWData(oldp+2459,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
    bufp->fullWData(oldp+2463,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
    bufp->fullWData(oldp+2467,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
    bufp->fullWData(oldp+2471,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
    bufp->fullWData(oldp+2475,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
    bufp->fullWData(oldp+2479,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
    bufp->fullWData(oldp+2483,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
    bufp->fullWData(oldp+2487,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
    bufp->fullWData(oldp+2491,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
    bufp->fullWData(oldp+2495,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
    bufp->fullWData(oldp+2499,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
    bufp->fullWData(oldp+2503,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
    bufp->fullWData(oldp+2507,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
    bufp->fullWData(oldp+2511,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
    bufp->fullWData(oldp+2515,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
    bufp->fullWData(oldp+2519,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
    bufp->fullWData(oldp+2523,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
    bufp->fullWData(oldp+2527,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
    bufp->fullWData(oldp+2531,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
    bufp->fullWData(oldp+2535,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
    bufp->fullWData(oldp+2539,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
    bufp->fullWData(oldp+2543,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
    bufp->fullWData(oldp+2547,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
    bufp->fullWData(oldp+2551,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
    bufp->fullWData(oldp+2555,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
    bufp->fullWData(oldp+2559,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
    bufp->fullWData(oldp+2563,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
    bufp->fullWData(oldp+2567,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
    bufp->fullWData(oldp+2571,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
    bufp->fullWData(oldp+2575,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
    bufp->fullWData(oldp+2579,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
    bufp->fullWData(oldp+2583,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
    bufp->fullWData(oldp+2587,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
    bufp->fullWData(oldp+2591,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
    bufp->fullWData(oldp+2595,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
    bufp->fullWData(oldp+2599,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
    bufp->fullWData(oldp+2603,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
    bufp->fullWData(oldp+2607,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
    bufp->fullWData(oldp+2611,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
    bufp->fullWData(oldp+2615,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
    bufp->fullWData(oldp+2619,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
    bufp->fullWData(oldp+2623,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
    bufp->fullWData(oldp+2627,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
    bufp->fullWData(oldp+2631,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
    bufp->fullWData(oldp+2635,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
    bufp->fullWData(oldp+2639,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
    bufp->fullWData(oldp+2643,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
    bufp->fullWData(oldp+2647,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
    bufp->fullWData(oldp+2651,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
    bufp->fullWData(oldp+2655,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
    bufp->fullWData(oldp+2659,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
    bufp->fullWData(oldp+2663,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
    bufp->fullWData(oldp+2667,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
    bufp->fullWData(oldp+2671,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
    bufp->fullWData(oldp+2675,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
    bufp->fullWData(oldp+2679,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
    bufp->fullWData(oldp+2683,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
    bufp->fullWData(oldp+2687,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
    bufp->fullWData(oldp+2691,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
    bufp->fullWData(oldp+2695,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
    bufp->fullWData(oldp+2699,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
    bufp->fullWData(oldp+2703,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
    bufp->fullWData(oldp+2707,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
    bufp->fullWData(oldp+2711,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
    bufp->fullWData(oldp+2715,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
    bufp->fullWData(oldp+2719,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
    bufp->fullWData(oldp+2723,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
    bufp->fullWData(oldp+2727,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
    bufp->fullWData(oldp+2731,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
    bufp->fullWData(oldp+2735,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
    bufp->fullWData(oldp+2739,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
    bufp->fullWData(oldp+2743,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
    bufp->fullWData(oldp+2747,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
    bufp->fullWData(oldp+2751,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
    bufp->fullWData(oldp+2755,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
    bufp->fullWData(oldp+2759,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
    bufp->fullWData(oldp+2763,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
    bufp->fullWData(oldp+2767,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
    bufp->fullWData(oldp+2771,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
    bufp->fullWData(oldp+2775,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
    bufp->fullWData(oldp+2779,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
    bufp->fullWData(oldp+2783,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
    bufp->fullWData(oldp+2787,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
    bufp->fullWData(oldp+2791,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
    bufp->fullWData(oldp+2795,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
    bufp->fullWData(oldp+2799,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
    bufp->fullWData(oldp+2803,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
    bufp->fullWData(oldp+2807,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
    bufp->fullWData(oldp+2811,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
    bufp->fullWData(oldp+2815,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
    bufp->fullWData(oldp+2819,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
    bufp->fullWData(oldp+2823,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
    bufp->fullWData(oldp+2827,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
    bufp->fullWData(oldp+2831,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
    bufp->fullWData(oldp+2835,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
    bufp->fullWData(oldp+2839,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
    bufp->fullWData(oldp+2843,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
    bufp->fullWData(oldp+2847,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
    bufp->fullWData(oldp+2851,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
    bufp->fullWData(oldp+2855,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
    bufp->fullWData(oldp+2859,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
    bufp->fullWData(oldp+2863,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
    bufp->fullWData(oldp+2867,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
    bufp->fullWData(oldp+2871,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
    bufp->fullWData(oldp+2875,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
    bufp->fullWData(oldp+2879,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
    bufp->fullWData(oldp+2883,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
    bufp->fullWData(oldp+2887,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
    bufp->fullWData(oldp+2891,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
    bufp->fullWData(oldp+2895,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
    bufp->fullWData(oldp+2899,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
    bufp->fullWData(oldp+2903,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
    bufp->fullWData(oldp+2907,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
    bufp->fullWData(oldp+2911,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
    bufp->fullWData(oldp+2915,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
    bufp->fullWData(oldp+2919,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
    bufp->fullWData(oldp+2923,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
    bufp->fullWData(oldp+2927,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
    bufp->fullWData(oldp+2931,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
    bufp->fullWData(oldp+2935,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
    bufp->fullWData(oldp+2939,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
    bufp->fullWData(oldp+2943,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
    bufp->fullWData(oldp+2947,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
    bufp->fullWData(oldp+2951,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
    bufp->fullWData(oldp+2955,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
    bufp->fullWData(oldp+2959,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
    bufp->fullWData(oldp+2963,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
    bufp->fullWData(oldp+2967,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
    bufp->fullWData(oldp+2971,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
    bufp->fullWData(oldp+2975,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
    bufp->fullWData(oldp+2979,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
    bufp->fullWData(oldp+2983,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
    bufp->fullWData(oldp+2987,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
    bufp->fullWData(oldp+2991,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
    bufp->fullWData(oldp+2995,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
    bufp->fullWData(oldp+2999,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
    bufp->fullWData(oldp+3003,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
    bufp->fullWData(oldp+3007,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
    bufp->fullWData(oldp+3011,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
    bufp->fullWData(oldp+3015,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
    bufp->fullWData(oldp+3019,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
    bufp->fullWData(oldp+3023,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
    bufp->fullBit(oldp+3027,(vlSelf->clock));
    bufp->fullBit(oldp+3028,(vlSelf->reset));
    bufp->fullQData(oldp+3029,(vlSelf->io_difftest_reg_0),64);
    bufp->fullQData(oldp+3031,(vlSelf->io_difftest_reg_1),64);
    bufp->fullQData(oldp+3033,(vlSelf->io_difftest_reg_2),64);
    bufp->fullQData(oldp+3035,(vlSelf->io_difftest_reg_3),64);
    bufp->fullQData(oldp+3037,(vlSelf->io_difftest_reg_4),64);
    bufp->fullQData(oldp+3039,(vlSelf->io_difftest_reg_5),64);
    bufp->fullQData(oldp+3041,(vlSelf->io_difftest_reg_6),64);
    bufp->fullQData(oldp+3043,(vlSelf->io_difftest_reg_7),64);
    bufp->fullQData(oldp+3045,(vlSelf->io_difftest_reg_8),64);
    bufp->fullQData(oldp+3047,(vlSelf->io_difftest_reg_9),64);
    bufp->fullQData(oldp+3049,(vlSelf->io_difftest_reg_10),64);
    bufp->fullQData(oldp+3051,(vlSelf->io_difftest_reg_11),64);
    bufp->fullQData(oldp+3053,(vlSelf->io_difftest_reg_12),64);
    bufp->fullQData(oldp+3055,(vlSelf->io_difftest_reg_13),64);
    bufp->fullQData(oldp+3057,(vlSelf->io_difftest_reg_14),64);
    bufp->fullQData(oldp+3059,(vlSelf->io_difftest_reg_15),64);
    bufp->fullQData(oldp+3061,(vlSelf->io_difftest_reg_16),64);
    bufp->fullQData(oldp+3063,(vlSelf->io_difftest_reg_17),64);
    bufp->fullQData(oldp+3065,(vlSelf->io_difftest_reg_18),64);
    bufp->fullQData(oldp+3067,(vlSelf->io_difftest_reg_19),64);
    bufp->fullQData(oldp+3069,(vlSelf->io_difftest_reg_20),64);
    bufp->fullQData(oldp+3071,(vlSelf->io_difftest_reg_21),64);
    bufp->fullQData(oldp+3073,(vlSelf->io_difftest_reg_22),64);
    bufp->fullQData(oldp+3075,(vlSelf->io_difftest_reg_23),64);
    bufp->fullQData(oldp+3077,(vlSelf->io_difftest_reg_24),64);
    bufp->fullQData(oldp+3079,(vlSelf->io_difftest_reg_25),64);
    bufp->fullQData(oldp+3081,(vlSelf->io_difftest_reg_26),64);
    bufp->fullQData(oldp+3083,(vlSelf->io_difftest_reg_27),64);
    bufp->fullQData(oldp+3085,(vlSelf->io_difftest_reg_28),64);
    bufp->fullQData(oldp+3087,(vlSelf->io_difftest_reg_29),64);
    bufp->fullQData(oldp+3089,(vlSelf->io_difftest_reg_30),64);
    bufp->fullQData(oldp+3091,(vlSelf->io_difftest_reg_31),64);
    bufp->fullQData(oldp+3093,(vlSelf->io_difftest_pc),64);
    bufp->fullIData(oldp+3095,(vlSelf->io_difftest_inst),32);
    bufp->fullBit(oldp+3096,(vlSelf->io_difftest_commit));
    bufp->fullQData(oldp+3097,(vlSelf->io_inst_counter),64);
    bufp->fullBit(oldp+3099,(vlSelf->io_difftest_irq));
    bufp->fullQData(oldp+3100,(vlSelf->io_difftest_mstatus),64);
    bufp->fullQData(oldp+3102,(vlSelf->io_difftest_mcause),64);
    bufp->fullQData(oldp+3104,(vlSelf->io_difftest_mepc),64);
    bufp->fullQData(oldp+3106,(vlSelf->io_difftest_mtvec),64);
    bufp->fullBit(oldp+3108,(vlSelf->io_difftest_peripheral));
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+3109,(__Vtemp_hd56bd579__0),128);
}
