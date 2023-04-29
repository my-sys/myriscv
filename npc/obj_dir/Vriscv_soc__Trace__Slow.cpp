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
        tracep->declBit(c+3195,"clock", false,-1);
        tracep->declBit(c+3196,"reset", false,-1);
        tracep->declQuad(c+3197,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+3199,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+3201,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+3203,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+3205,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+3207,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+3209,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+3211,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+3213,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+3215,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+3217,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+3219,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+3221,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+3223,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+3225,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+3227,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+3229,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+3231,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+3233,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+3235,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+3237,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+3239,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+3241,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+3243,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+3245,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+3247,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+3249,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+3251,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+3253,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+3255,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+3257,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+3259,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+3261,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+3263,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+3264,"io_difftest_commit", false,-1);
        tracep->declQuad(c+3265,"io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3267,"io_difftest_irq", false,-1);
        tracep->declQuad(c+3268,"io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3270,"io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+3272,"io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+3274,"io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+3276,"io_difftest_peripheral", false,-1);
        tracep->declBit(c+3195,"riscv_soc clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc reset", false,-1);
        tracep->declQuad(c+3197,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+3199,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+3201,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+3203,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+3205,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+3207,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+3209,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+3211,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+3213,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+3215,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+3217,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+3219,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+3221,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+3223,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+3225,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+3227,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+3229,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+3231,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+3233,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+3235,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+3237,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+3239,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+3241,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+3243,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+3245,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+3247,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+3249,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+3251,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+3253,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+3255,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+3257,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+3259,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+3261,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+3263,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+3264,"riscv_soc io_difftest_commit", false,-1);
        tracep->declQuad(c+3265,"riscv_soc io_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3267,"riscv_soc io_difftest_irq", false,-1);
        tracep->declQuad(c+3268,"riscv_soc io_difftest_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3270,"riscv_soc io_difftest_mcause", false,-1, 63,0);
        tracep->declQuad(c+3272,"riscv_soc io_difftest_mepc", false,-1, 63,0);
        tracep->declQuad(c+3274,"riscv_soc io_difftest_mtvec", false,-1, 63,0);
        tracep->declBit(c+3276,"riscv_soc io_difftest_peripheral", false,-1);
        tracep->declBit(c+3195,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core_reset", false,-1);
        tracep->declBit(c+1,"riscv_soc core_io_axi_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core_io_axi_bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core_io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core_io_axi_bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core_io_axi_bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core_io_axi_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core_io_axi_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core_io_axi_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+11,"riscv_soc core_io_axi_bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core_io_axi_bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core_io_axi_bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core_io_axi_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core_io_axi_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core_io_axi_bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core_io_axi_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core_io_axi_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+21,"riscv_soc core_difftest_irq", false,-1);
        tracep->declBit(c+22,"riscv_soc core_difftest_peripheral", false,-1);
        tracep->declBit(c+23,"riscv_soc core_difftest_commit", false,-1);
        tracep->declQuad(c+24,"riscv_soc core_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+26,"riscv_soc core_difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+27,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+35,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+37,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+39,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+57,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+59,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+61,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+65,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+73,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+75,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+77,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+79,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+85,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core_inst_counter", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc axi_ram_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc axi_ram_reset", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram_io_ram_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc axi_ram_io_ram_bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc axi_ram_io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc axi_ram_io_ram_bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc axi_ram_io_ram_bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc axi_ram_io_ram_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc axi_ram_io_ram_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc axi_ram_io_ram_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram_io_ram_bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc axi_ram_io_ram_bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc axi_ram_io_ram_bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc axi_ram_io_ram_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc axi_ram_io_ram_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc axi_ram_io_ram_bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc axi_ram_io_ram_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc axi_ram_io_ram_bus_r_bits_rlast", false,-1);
        tracep->declBus(c+26,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+93,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core reset", false,-1);
        tracep->declBit(c+1,"riscv_soc core io_axi_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core io_axi_bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core io_axi_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core io_axi_bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core io_axi_bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core io_axi_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core io_axi_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core io_axi_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+11,"riscv_soc core io_axi_bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core io_axi_bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core io_axi_bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core io_axi_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core io_axi_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core io_axi_bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core io_axi_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core io_axi_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+21,"riscv_soc core difftest_irq", false,-1);
        tracep->declBit(c+22,"riscv_soc core difftest_peripheral", false,-1);
        tracep->declBit(c+23,"riscv_soc core difftest_commit", false,-1);
        tracep->declQuad(c+24,"riscv_soc core difftest_pc", false,-1, 63,0);
        tracep->declBus(c+26,"riscv_soc core difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+91,"riscv_soc core inst_counter", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache_reset", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache_io_flush", false,-1);
        tracep->declBit(c+96,"riscv_soc core i_cache_io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+97,"riscv_soc core i_cache_io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core i_cache_io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core i_cache_io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+101,"riscv_soc core i_cache_io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core i_cache_io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core i_cache_io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+106,"riscv_soc core i_cache_io_is_fence_i", false,-1);
        tracep->declBit(c+107,"riscv_soc core i_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core i_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"riscv_soc core i_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+111,"riscv_soc core i_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core d_cache_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache_reset", false,-1);
        tracep->declBit(c+112,"riscv_soc core d_cache_io_cpu_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core d_cache_io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core d_cache_io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core d_cache_io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core d_cache_io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core d_cache_io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+121,"riscv_soc core d_cache_io_cpu_ready", false,-1);
        tracep->declBit(c+122,"riscv_soc core d_cache_io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+123,"riscv_soc core d_cache_io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+124,"riscv_soc core d_cache_io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core d_cache_io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core d_cache_io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+129,"riscv_soc core d_cache_io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+130,"riscv_soc core d_cache_io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+131,"riscv_soc core d_cache_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+132,"riscv_soc core d_cache_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+134,"riscv_soc core d_cache_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+135,"riscv_soc core d_cache_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core cross_bar_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core cross_bar_reset", false,-1);
        tracep->declBit(c+107,"riscv_soc core cross_bar_io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core cross_bar_io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"riscv_soc core cross_bar_io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+111,"riscv_soc core cross_bar_io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+122,"riscv_soc core cross_bar_io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+123,"riscv_soc core cross_bar_io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+124,"riscv_soc core cross_bar_io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core cross_bar_io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+130,"riscv_soc core cross_bar_io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+131,"riscv_soc core cross_bar_io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+132,"riscv_soc core cross_bar_io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+134,"riscv_soc core cross_bar_io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+135,"riscv_soc core cross_bar_io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+136,"riscv_soc core cross_bar_io_bus1_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core cross_bar_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core cross_bar_io_bus1_ready", false,-1);
        tracep->declBit(c+138,"riscv_soc core cross_bar_io_bus2_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core cross_bar_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+139,"riscv_soc core cross_bar_io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar_io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar_io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar_io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar_io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar_io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar_io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+3277,"riscv_soc core cross_bar_io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar_io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar_io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar_io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar_io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar_io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar_io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+140,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+141,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core cross_bar_1_io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core cross_bar_1_io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+142,"riscv_soc core cross_bar_1_io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+143,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core cross_bar_1_io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+147,"riscv_soc core cross_bar_1_io_wb_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1_io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core cross_bar_1_io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_1_io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core cross_bar_1_io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1_io_wb_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core cross_bar_1_io_wb_ready", false,-1);
        tracep->declBit(c+96,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+97,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core cross_bar_1_io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+101,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core cross_bar_1_io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core cross_bar_1_io_DCache_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1_io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1_io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_1_io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core cross_bar_1_io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1_io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+121,"riscv_soc core cross_bar_1_io_DCache_ready", false,-1);
        tracep->declBit(c+136,"riscv_soc core cross_bar_1_io_bus1_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core cross_bar_1_io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core cross_bar_1_io_bus1_ready", false,-1);
        tracep->declBit(c+138,"riscv_soc core cross_bar_1_io_bus2_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1_io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1_io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_1_io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core cross_bar_1_io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1_io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+139,"riscv_soc core cross_bar_1_io_bus2_ready", false,-1);
        tracep->declBit(c+151,"riscv_soc core cross_bar_1_io_clint_bus_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1_io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core cross_bar_1_io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_1_io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1_io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+154,"riscv_soc core cross_bar_1_io_clint_bus_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch_reset", false,-1);
        tracep->declBit(c+155,"riscv_soc core fetch_io_br_info_valid", false,-1);
        tracep->declBit(c+156,"riscv_soc core fetch_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+157,"riscv_soc core fetch_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core fetch_io_br_info_taken", false,-1);
        tracep->declQuad(c+160,"riscv_soc core fetch_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core fetch_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core fetch_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core fetch_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+167,"riscv_soc core fetch_io_flush", false,-1);
        tracep->declBit(c+140,"riscv_soc core fetch_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+141,"riscv_soc core fetch_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core fetch_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core fetch_io_cpu_data_ready", false,-1);
        tracep->declBit(c+142,"riscv_soc core fetch_io_cpu_data_valid", false,-1);
        tracep->declQuad(c+143,"riscv_soc core fetch_io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core fetch_io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core fetch_io_put_pc_ready", false,-1);
        tracep->declBit(c+169,"riscv_soc core fetch_io_put_pc_valid", false,-1);
        tracep->declBus(c+170,"riscv_soc core fetch_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+171,"riscv_soc core fetch_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core fetch_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+95,"riscv_soc core fetch_io_out_flush", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute_reset", false,-1);
        tracep->declBit(c+168,"riscv_soc core execute_io_op_datas_ready", false,-1);
        tracep->declBit(c+174,"riscv_soc core execute_io_op_datas_valid", false,-1);
        tracep->declBus(c+175,"riscv_soc core execute_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+176,"riscv_soc core execute_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+177,"riscv_soc core execute_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core execute_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core execute_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+181,"riscv_soc core execute_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+184,"riscv_soc core execute_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+186,"riscv_soc core execute_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+187,"riscv_soc core execute_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+188,"riscv_soc core execute_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+189,"riscv_soc core execute_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+190,"riscv_soc core execute_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+191,"riscv_soc core execute_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core execute_io_irq_time_irq", false,-1);
        tracep->declBit(c+194,"riscv_soc core execute_io_irq_soft_irq", false,-1);
        tracep->declQuad(c+195,"riscv_soc core execute_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core execute_io_mie", false,-1, 63,0);
        tracep->declQuad(c+199,"riscv_soc core execute_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+201,"riscv_soc core execute_io_mtvec", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core execute_io_wb_valid", false,-1);
        tracep->declBus(c+204,"riscv_soc core execute_io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"riscv_soc core execute_io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core execute_io_csr_valid", false,-1);
        tracep->declBus(c+208,"riscv_soc core execute_io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+209,"riscv_soc core execute_io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+211,"riscv_soc core execute_io_csr_except_is_except", false,-1);
        tracep->declBit(c+212,"riscv_soc core execute_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+213,"riscv_soc core execute_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+214,"riscv_soc core execute_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+215,"riscv_soc core execute_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+217,"riscv_soc core execute_io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+219,"riscv_soc core execute_io_commit", false,-1);
        tracep->declBus(c+220,"riscv_soc core execute_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+221,"riscv_soc core execute_io_difftest_peripheral", false,-1);
        tracep->declQuad(c+165,"riscv_soc core execute_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+167,"riscv_soc core execute_io_flush", false,-1);
        tracep->declBit(c+106,"riscv_soc core execute_io_fence_i", false,-1);
        tracep->declBit(c+155,"riscv_soc core execute_io_br_info_valid", false,-1);
        tracep->declBit(c+156,"riscv_soc core execute_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+157,"riscv_soc core execute_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core execute_io_br_info_taken", false,-1);
        tracep->declQuad(c+160,"riscv_soc core execute_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core execute_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core execute_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+147,"riscv_soc core execute_io_bus_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core execute_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core execute_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core execute_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core execute_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core execute_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core execute_io_bus_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core decode_reset", false,-1);
        tracep->declBit(c+168,"riscv_soc core decode_io_get_inst_ready", false,-1);
        tracep->declBit(c+169,"riscv_soc core decode_io_get_inst_valid", false,-1);
        tracep->declBus(c+170,"riscv_soc core decode_io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+171,"riscv_soc core decode_io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core decode_io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+222,"riscv_soc core decode_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"riscv_soc core decode_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+225,"riscv_soc core decode_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"riscv_soc core decode_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+228,"riscv_soc core decode_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+229,"riscv_soc core decode_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core decode_io_op_datas_ready", false,-1);
        tracep->declBit(c+174,"riscv_soc core decode_io_op_datas_valid", false,-1);
        tracep->declBus(c+175,"riscv_soc core decode_io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+176,"riscv_soc core decode_io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+177,"riscv_soc core decode_io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core decode_io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core decode_io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+181,"riscv_soc core decode_io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core decode_io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+184,"riscv_soc core decode_io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+186,"riscv_soc core decode_io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+187,"riscv_soc core decode_io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+188,"riscv_soc core decode_io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+189,"riscv_soc core decode_io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+190,"riscv_soc core decode_io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+191,"riscv_soc core decode_io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+167,"riscv_soc core decode_io_flush", false,-1);
        tracep->declBit(c+3195,"riscv_soc core commit_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core commit_reset", false,-1);
        tracep->declBus(c+222,"riscv_soc core commit_io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"riscv_soc core commit_io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+225,"riscv_soc core commit_io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"riscv_soc core commit_io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core commit_io_normal_wb_valid", false,-1);
        tracep->declBus(c+204,"riscv_soc core commit_io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"riscv_soc core commit_io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+228,"riscv_soc core commit_io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+229,"riscv_soc core commit_io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core commit_io_csr_wb_valid", false,-1);
        tracep->declBus(c+208,"riscv_soc core commit_io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+209,"riscv_soc core commit_io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+211,"riscv_soc core commit_io_csr_except_is_except", false,-1);
        tracep->declBit(c+212,"riscv_soc core commit_io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+213,"riscv_soc core commit_io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+214,"riscv_soc core commit_io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+215,"riscv_soc core commit_io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+217,"riscv_soc core commit_io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+201,"riscv_soc core commit_io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+199,"riscv_soc core commit_io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core commit_io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core commit_io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+219,"riscv_soc core commit_io_commit", false,-1);
        tracep->declBus(c+220,"riscv_soc core commit_io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+221,"riscv_soc core commit_io_difftest_peripheral", false,-1);
        tracep->declBit(c+21,"riscv_soc core commit_difftest_irq_0", false,-1);
        tracep->declBit(c+22,"riscv_soc core commit_difftest_peripheral_0", false,-1);
        tracep->declBit(c+23,"riscv_soc core commit_difftest_commit_0", false,-1);
        tracep->declQuad(c+24,"riscv_soc core commit_difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+26,"riscv_soc core commit_difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+27,"riscv_soc core commit__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv_soc core commit__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv_soc core commit__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv_soc core commit__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+35,"riscv_soc core commit__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+37,"riscv_soc core commit__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+39,"riscv_soc core commit__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core commit__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core commit__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_soc core commit__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv_soc core commit__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv_soc core commit__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv_soc core commit__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv_soc core commit__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv_soc core commit__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+57,"riscv_soc core commit__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+59,"riscv_soc core commit__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+61,"riscv_soc core commit__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv_soc core commit__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+65,"riscv_soc core commit__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv_soc core commit__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv_soc core commit__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core commit__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+73,"riscv_soc core commit__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+75,"riscv_soc core commit__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+77,"riscv_soc core commit__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+79,"riscv_soc core commit__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_soc core commit__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv_soc core commit__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+85,"riscv_soc core commit__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core commit__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core commit__WIRE_0_31", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core commit_inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core clint_de_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core clint_de_reset", false,-1);
        tracep->declBit(c+151,"riscv_soc core clint_de_io_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core clint_de_io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core clint_de_io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core clint_de_io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+120,"riscv_soc core clint_de_io_bits_is_w", false,-1);
        tracep->declBit(c+154,"riscv_soc core clint_de_io_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core clint_de_io_soft_irq", false,-1);
        tracep->declBit(c+193,"riscv_soc core clint_de_io_time_irq", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache reset", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache io_flush", false,-1);
        tracep->declBit(c+96,"riscv_soc core i_cache io_cpu_raddr_ready", false,-1);
        tracep->declBit(c+97,"riscv_soc core i_cache io_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core i_cache io_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core i_cache io_cpu_rdata_ready", false,-1);
        tracep->declBit(c+101,"riscv_soc core i_cache io_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core i_cache io_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core i_cache io_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+106,"riscv_soc core i_cache io_is_fence_i", false,-1);
        tracep->declBit(c+107,"riscv_soc core i_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core i_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"riscv_soc core i_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+111,"riscv_soc core i_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage0_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage0_reset", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache cache_stage0_io_flush", false,-1);
        tracep->declBit(c+96,"riscv_soc core i_cache cache_stage0_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+97,"riscv_soc core i_cache cache_stage0_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core i_cache cache_stage0_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+96,"riscv_soc core i_cache cache_stage0_io_addr_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage0_io_addr_valid", false,-1);
        tracep->declQuad(c+232,"riscv_soc core i_cache cache_stage0_io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage1_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage1_reset", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache cache_stage1_io_flush", false,-1);
        tracep->declBit(c+96,"riscv_soc core i_cache cache_stage1_io_cpu_addr_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage1_io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+232,"riscv_soc core i_cache cache_stage1_io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+234,"riscv_soc core i_cache cache_stage1_io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+235,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+236,"riscv_soc core i_cache cache_stage1_io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+237,"riscv_soc core i_cache cache_stage1_io_sram_valid", false,-1);
        tracep->declArray(c+238,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+242,"riscv_soc core i_cache cache_stage1_io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+246,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+250,"riscv_soc core i_cache cache_stage1_io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+254,"riscv_soc core i_cache cache_stage1_io_sram_ready", false,-1);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage1_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+256,"riscv_soc core i_cache cache_stage1_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+257,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+235,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+260,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+262,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+236,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+263,"riscv_soc core i_cache cache_stage1_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage2_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage2_reset", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache cache_stage2_io_flush", false,-1);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage2_io_cache_stage1_ready", false,-1);
        tracep->declBit(c+256,"riscv_soc core i_cache cache_stage2_io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+257,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+235,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+260,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+262,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+236,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+263,"riscv_soc core i_cache cache_stage2_io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+107,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+111,"riscv_soc core i_cache cache_stage2_io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+265,"riscv_soc core i_cache cache_stage2_io_sram_w_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+267,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+271,"riscv_soc core i_cache cache_stage2_io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+275,"riscv_soc core i_cache cache_stage2_io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+100,"riscv_soc core i_cache cache_stage2_io_rdata_ready", false,-1);
        tracep->declBit(c+101,"riscv_soc core i_cache cache_stage2_io_rdata_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core i_cache cache_stage2_io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core i_cache cache_stage2_io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache SRAM_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache SRAM_reset", false,-1);
        tracep->declBus(c+276,"riscv_soc core i_cache SRAM_io_addr", false,-1, 5,0);
        tracep->declBit(c+277,"riscv_soc core i_cache SRAM_io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core i_cache SRAM_io_wmask", false,-1, 127,0);
        tracep->declArray(c+267,"riscv_soc core i_cache SRAM_io_wdata", false,-1, 127,0);
        tracep->declArray(c+278,"riscv_soc core i_cache SRAM_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache SRAM_1_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache SRAM_1_reset", false,-1);
        tracep->declBus(c+282,"riscv_soc core i_cache SRAM_1_io_addr", false,-1, 5,0);
        tracep->declBit(c+277,"riscv_soc core i_cache SRAM_1_io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core i_cache SRAM_1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+271,"riscv_soc core i_cache SRAM_1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+283,"riscv_soc core i_cache SRAM_1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache SRAM_2_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache SRAM_2_reset", false,-1);
        tracep->declBus(c+287,"riscv_soc core i_cache SRAM_2_io_addr", false,-1, 5,0);
        tracep->declBit(c+288,"riscv_soc core i_cache SRAM_2_io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core i_cache SRAM_2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+267,"riscv_soc core i_cache SRAM_2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+289,"riscv_soc core i_cache SRAM_2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache SRAM_3_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache SRAM_3_reset", false,-1);
        tracep->declBus(c+293,"riscv_soc core i_cache SRAM_3_io_addr", false,-1, 5,0);
        tracep->declBit(c+288,"riscv_soc core i_cache SRAM_3_io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core i_cache SRAM_3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+271,"riscv_soc core i_cache SRAM_3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+294,"riscv_soc core i_cache SRAM_3_io_rdata", false,-1, 127,0);
        tracep->declQuad(c+298,"riscv_soc core i_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+300,"riscv_soc core i_cache reg_sram1_valid", false,-1, 63,0);
        tracep->declBit(c+302,"riscv_soc core i_cache is_w_sram", false,-1);
        tracep->declBit(c+303,"riscv_soc core i_cache is_sram0_write", false,-1);
        tracep->declBit(c+304,"riscv_soc core i_cache is_sram1_write", false,-1);
        tracep->declQuad(c+305,"riscv_soc core i_cache chose_bit", false,-1, 63,0);
        tracep->declBit(c+307,"riscv_soc core i_cache reg_temp_sram0_valid", false,-1);
        tracep->declBit(c+308,"riscv_soc core i_cache reg_temp_sram1_valid", false,-1);
        tracep->declBus(c+309,"riscv_soc core i_cache reg_temp_r_index", false,-1, 5,0);
        tracep->declBit(c+310,"riscv_soc core i_cache w_r_pass0_val", false,-1);
        tracep->declBit(c+311,"riscv_soc core i_cache w_r_pass1_val", false,-1);
        tracep->declBit(c+254,"riscv_soc core i_cache reg_sram_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage0 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage0 reset", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache cache_stage0 io_flush", false,-1);
        tracep->declBit(c+96,"riscv_soc core i_cache cache_stage0 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+97,"riscv_soc core i_cache cache_stage0 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core i_cache cache_stage0 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+96,"riscv_soc core i_cache cache_stage0 io_addr_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage0 io_addr_valid", false,-1);
        tracep->declQuad(c+232,"riscv_soc core i_cache cache_stage0 io_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage0 reg_valid", false,-1);
        tracep->declQuad(c+232,"riscv_soc core i_cache cache_stage0 reg_addr", false,-1, 63,0);
        tracep->declBit(c+312,"riscv_soc core i_cache cache_stage0 valid", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage1 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage1 reset", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache cache_stage1 io_flush", false,-1);
        tracep->declBit(c+96,"riscv_soc core i_cache cache_stage1 io_cpu_addr_ready", false,-1);
        tracep->declBit(c+231,"riscv_soc core i_cache cache_stage1 io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+232,"riscv_soc core i_cache cache_stage1 io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBus(c+234,"riscv_soc core i_cache cache_stage1 io_tag_valid_index", false,-1, 5,0);
        tracep->declBit(c+235,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_0", false,-1);
        tracep->declBit(c+236,"riscv_soc core i_cache cache_stage1 io_tag_valid_tag_valid_1", false,-1);
        tracep->declBit(c+237,"riscv_soc core i_cache cache_stage1 io_sram_valid", false,-1);
        tracep->declArray(c+238,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_0", false,-1, 127,0);
        tracep->declArray(c+242,"riscv_soc core i_cache cache_stage1 io_sram_sram_data_1", false,-1, 127,0);
        tracep->declArray(c+246,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_0", false,-1, 127,0);
        tracep->declArray(c+250,"riscv_soc core i_cache cache_stage1 io_sram_sram_tag_1", false,-1, 127,0);
        tracep->declBit(c+254,"riscv_soc core i_cache cache_stage1 io_sram_ready", false,-1);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage1 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+256,"riscv_soc core i_cache cache_stage1 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+257,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+235,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+260,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+262,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+236,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+263,"riscv_soc core i_cache cache_stage1 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+237,"riscv_soc core i_cache cache_stage1 valid", false,-1);
        tracep->declBit(c+313,"riscv_soc core i_cache cache_stage1 ready", false,-1);
        tracep->declQuad(c+257,"riscv_soc core i_cache cache_stage1 reg_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+314,"riscv_soc core i_cache cache_stage1 reg_valid", false,-1);
        tracep->declQuad(c+315,"riscv_soc core i_cache cache_stage1 reg_tag", false,-1, 53,0);
        tracep->declBus(c+317,"riscv_soc core i_cache cache_stage1 reg_index", false,-1, 5,0);
        tracep->declBus(c+318,"riscv_soc core i_cache cache_stage1 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+319,"riscv_soc core i_cache cache_stage1 tag_0", false,-1, 53,0);
        tracep->declQuad(c+321,"riscv_soc core i_cache cache_stage1 tag_1", false,-1, 53,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache cache_stage2 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache cache_stage2 reset", false,-1);
        tracep->declBit(c+95,"riscv_soc core i_cache cache_stage2 io_flush", false,-1);
        tracep->declBit(c+255,"riscv_soc core i_cache cache_stage2 io_cache_stage1_ready", false,-1);
        tracep->declBit(c+256,"riscv_soc core i_cache cache_stage2 io_cache_stage1_valid", false,-1);
        tracep->declQuad(c+257,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_cpu_addr", false,-1, 63,0);
        tracep->declBit(c+259,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_hit", false,-1);
        tracep->declBit(c+235,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_tag_valid", false,-1);
        tracep->declQuad(c+260,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_0_rdata", false,-1, 63,0);
        tracep->declBit(c+262,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_hit", false,-1);
        tracep->declBit(c+236,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_tag_valid", false,-1);
        tracep->declQuad(c+263,"riscv_soc core i_cache cache_stage2 io_cache_stage1_bits_sram_1_rdata", false,-1, 63,0);
        tracep->declBit(c+107,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+111,"riscv_soc core i_cache cache_stage2 io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+265,"riscv_soc core i_cache cache_stage2 io_sram_w_valid", false,-1);
        tracep->declBus(c+266,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_addr", false,-1, 5,0);
        tracep->declArray(c+267,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_data", false,-1, 127,0);
        tracep->declArray(c+271,"riscv_soc core i_cache cache_stage2 io_sram_w_sram_tag", false,-1, 127,0);
        tracep->declBit(c+275,"riscv_soc core i_cache cache_stage2 io_sram_w_chose_tag", false,-1);
        tracep->declBit(c+100,"riscv_soc core i_cache cache_stage2 io_rdata_ready", false,-1);
        tracep->declBit(c+101,"riscv_soc core i_cache cache_stage2 io_rdata_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core i_cache cache_stage2 io_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core i_cache cache_stage2 io_rdata_bits_pc", false,-1, 63,0);
        tracep->declBus(c+317,"riscv_soc core i_cache cache_stage2 index", false,-1, 5,0);
        tracep->declBit(c+323,"riscv_soc core i_cache cache_stage2 valid", false,-1);
        tracep->declBit(c+275,"riscv_soc core i_cache cache_stage2 reg_chosen_tag", false,-1);
        tracep->declQuad(c+102,"riscv_soc core i_cache cache_stage2 reg_rdata", false,-1, 63,0);
        tracep->declBit(c+101,"riscv_soc core i_cache cache_stage2 reg_valid", false,-1);
        tracep->declBit(c+324,"riscv_soc core i_cache cache_stage2 reg_ready", false,-1);
        tracep->declQuad(c+325,"riscv_soc core i_cache cache_stage2 temp_addr", false,-1, 63,0);
        tracep->declQuad(c+108,"riscv_soc core i_cache cache_stage2 reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+107,"riscv_soc core i_cache cache_stage2 reg_r_valid", false,-1);
        tracep->declArray(c+267,"riscv_soc core i_cache cache_stage2 reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+265,"riscv_soc core i_cache cache_stage2 reg_cache_write", false,-1);
        tracep->declQuad(c+104,"riscv_soc core i_cache cache_stage2 reg_cpu_addr", false,-1, 63,0);
        tracep->declQuad(c+327,"riscv_soc core i_cache cache_stage2 reg_tag", false,-1, 53,0);
        tracep->declBus(c+329,"riscv_soc core i_cache cache_stage2 reg_offset", false,-1, 3,0);
        tracep->declQuad(c+330,"riscv_soc core i_cache cache_stage2 reg_lru_1", false,-1, 63,0);
        tracep->declBit(c+332,"riscv_soc core i_cache cache_stage2 LRU_1", false,-1);
        tracep->declQuad(c+333,"riscv_soc core i_cache cache_stage2 chose_bit", false,-1, 63,0);
        tracep->declQuad(c+335,"riscv_soc core i_cache cache_stage2 neg_chose_bit", false,-1, 63,0);
        tracep->declBus(c+337,"riscv_soc core i_cache cache_stage2 reg_bus_state", false,-1, 1,0);
        tracep->declBit(c+3195,"riscv_soc core i_cache SRAM clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache SRAM reset", false,-1);
        tracep->declBus(c+276,"riscv_soc core i_cache SRAM io_addr", false,-1, 5,0);
        tracep->declBit(c+277,"riscv_soc core i_cache SRAM io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core i_cache SRAM io_wmask", false,-1, 127,0);
        tracep->declArray(c+267,"riscv_soc core i_cache SRAM io_wdata", false,-1, 127,0);
        tracep->declArray(c+278,"riscv_soc core i_cache SRAM io_rdata", false,-1, 127,0);
        tracep->declArray(c+278,"riscv_soc core i_cache SRAM Q", false,-1, 127,0);
        tracep->declArray(c+338,"riscv_soc core i_cache SRAM sram_0", false,-1, 127,0);
        tracep->declArray(c+342,"riscv_soc core i_cache SRAM sram_1", false,-1, 127,0);
        tracep->declArray(c+346,"riscv_soc core i_cache SRAM sram_2", false,-1, 127,0);
        tracep->declArray(c+350,"riscv_soc core i_cache SRAM sram_3", false,-1, 127,0);
        tracep->declArray(c+354,"riscv_soc core i_cache SRAM sram_4", false,-1, 127,0);
        tracep->declArray(c+358,"riscv_soc core i_cache SRAM sram_5", false,-1, 127,0);
        tracep->declArray(c+362,"riscv_soc core i_cache SRAM sram_6", false,-1, 127,0);
        tracep->declArray(c+366,"riscv_soc core i_cache SRAM sram_7", false,-1, 127,0);
        tracep->declArray(c+370,"riscv_soc core i_cache SRAM sram_8", false,-1, 127,0);
        tracep->declArray(c+374,"riscv_soc core i_cache SRAM sram_9", false,-1, 127,0);
        tracep->declArray(c+378,"riscv_soc core i_cache SRAM sram_10", false,-1, 127,0);
        tracep->declArray(c+382,"riscv_soc core i_cache SRAM sram_11", false,-1, 127,0);
        tracep->declArray(c+386,"riscv_soc core i_cache SRAM sram_12", false,-1, 127,0);
        tracep->declArray(c+390,"riscv_soc core i_cache SRAM sram_13", false,-1, 127,0);
        tracep->declArray(c+394,"riscv_soc core i_cache SRAM sram_14", false,-1, 127,0);
        tracep->declArray(c+398,"riscv_soc core i_cache SRAM sram_15", false,-1, 127,0);
        tracep->declArray(c+402,"riscv_soc core i_cache SRAM sram_16", false,-1, 127,0);
        tracep->declArray(c+406,"riscv_soc core i_cache SRAM sram_17", false,-1, 127,0);
        tracep->declArray(c+410,"riscv_soc core i_cache SRAM sram_18", false,-1, 127,0);
        tracep->declArray(c+414,"riscv_soc core i_cache SRAM sram_19", false,-1, 127,0);
        tracep->declArray(c+418,"riscv_soc core i_cache SRAM sram_20", false,-1, 127,0);
        tracep->declArray(c+422,"riscv_soc core i_cache SRAM sram_21", false,-1, 127,0);
        tracep->declArray(c+426,"riscv_soc core i_cache SRAM sram_22", false,-1, 127,0);
        tracep->declArray(c+430,"riscv_soc core i_cache SRAM sram_23", false,-1, 127,0);
        tracep->declArray(c+434,"riscv_soc core i_cache SRAM sram_24", false,-1, 127,0);
        tracep->declArray(c+438,"riscv_soc core i_cache SRAM sram_25", false,-1, 127,0);
        tracep->declArray(c+442,"riscv_soc core i_cache SRAM sram_26", false,-1, 127,0);
        tracep->declArray(c+446,"riscv_soc core i_cache SRAM sram_27", false,-1, 127,0);
        tracep->declArray(c+450,"riscv_soc core i_cache SRAM sram_28", false,-1, 127,0);
        tracep->declArray(c+454,"riscv_soc core i_cache SRAM sram_29", false,-1, 127,0);
        tracep->declArray(c+458,"riscv_soc core i_cache SRAM sram_30", false,-1, 127,0);
        tracep->declArray(c+462,"riscv_soc core i_cache SRAM sram_31", false,-1, 127,0);
        tracep->declArray(c+466,"riscv_soc core i_cache SRAM sram_32", false,-1, 127,0);
        tracep->declArray(c+470,"riscv_soc core i_cache SRAM sram_33", false,-1, 127,0);
        tracep->declArray(c+474,"riscv_soc core i_cache SRAM sram_34", false,-1, 127,0);
        tracep->declArray(c+478,"riscv_soc core i_cache SRAM sram_35", false,-1, 127,0);
        tracep->declArray(c+482,"riscv_soc core i_cache SRAM sram_36", false,-1, 127,0);
        tracep->declArray(c+486,"riscv_soc core i_cache SRAM sram_37", false,-1, 127,0);
        tracep->declArray(c+490,"riscv_soc core i_cache SRAM sram_38", false,-1, 127,0);
        tracep->declArray(c+494,"riscv_soc core i_cache SRAM sram_39", false,-1, 127,0);
        tracep->declArray(c+498,"riscv_soc core i_cache SRAM sram_40", false,-1, 127,0);
        tracep->declArray(c+502,"riscv_soc core i_cache SRAM sram_41", false,-1, 127,0);
        tracep->declArray(c+506,"riscv_soc core i_cache SRAM sram_42", false,-1, 127,0);
        tracep->declArray(c+510,"riscv_soc core i_cache SRAM sram_43", false,-1, 127,0);
        tracep->declArray(c+514,"riscv_soc core i_cache SRAM sram_44", false,-1, 127,0);
        tracep->declArray(c+518,"riscv_soc core i_cache SRAM sram_45", false,-1, 127,0);
        tracep->declArray(c+522,"riscv_soc core i_cache SRAM sram_46", false,-1, 127,0);
        tracep->declArray(c+526,"riscv_soc core i_cache SRAM sram_47", false,-1, 127,0);
        tracep->declArray(c+530,"riscv_soc core i_cache SRAM sram_48", false,-1, 127,0);
        tracep->declArray(c+534,"riscv_soc core i_cache SRAM sram_49", false,-1, 127,0);
        tracep->declArray(c+538,"riscv_soc core i_cache SRAM sram_50", false,-1, 127,0);
        tracep->declArray(c+542,"riscv_soc core i_cache SRAM sram_51", false,-1, 127,0);
        tracep->declArray(c+546,"riscv_soc core i_cache SRAM sram_52", false,-1, 127,0);
        tracep->declArray(c+550,"riscv_soc core i_cache SRAM sram_53", false,-1, 127,0);
        tracep->declArray(c+554,"riscv_soc core i_cache SRAM sram_54", false,-1, 127,0);
        tracep->declArray(c+558,"riscv_soc core i_cache SRAM sram_55", false,-1, 127,0);
        tracep->declArray(c+562,"riscv_soc core i_cache SRAM sram_56", false,-1, 127,0);
        tracep->declArray(c+566,"riscv_soc core i_cache SRAM sram_57", false,-1, 127,0);
        tracep->declArray(c+570,"riscv_soc core i_cache SRAM sram_58", false,-1, 127,0);
        tracep->declArray(c+574,"riscv_soc core i_cache SRAM sram_59", false,-1, 127,0);
        tracep->declArray(c+578,"riscv_soc core i_cache SRAM sram_60", false,-1, 127,0);
        tracep->declArray(c+582,"riscv_soc core i_cache SRAM sram_61", false,-1, 127,0);
        tracep->declArray(c+586,"riscv_soc core i_cache SRAM sram_62", false,-1, 127,0);
        tracep->declArray(c+590,"riscv_soc core i_cache SRAM sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc core i_cache SRAM bwen", false,-1, 127,0);
        tracep->declBit(c+303,"riscv_soc core i_cache SRAM wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache SRAM_1 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache SRAM_1 reset", false,-1);
        tracep->declBus(c+282,"riscv_soc core i_cache SRAM_1 io_addr", false,-1, 5,0);
        tracep->declBit(c+277,"riscv_soc core i_cache SRAM_1 io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core i_cache SRAM_1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+271,"riscv_soc core i_cache SRAM_1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+283,"riscv_soc core i_cache SRAM_1 io_rdata", false,-1, 127,0);
        tracep->declArray(c+283,"riscv_soc core i_cache SRAM_1 Q", false,-1, 127,0);
        tracep->declArray(c+594,"riscv_soc core i_cache SRAM_1 sram_0", false,-1, 127,0);
        tracep->declArray(c+598,"riscv_soc core i_cache SRAM_1 sram_1", false,-1, 127,0);
        tracep->declArray(c+602,"riscv_soc core i_cache SRAM_1 sram_2", false,-1, 127,0);
        tracep->declArray(c+606,"riscv_soc core i_cache SRAM_1 sram_3", false,-1, 127,0);
        tracep->declArray(c+610,"riscv_soc core i_cache SRAM_1 sram_4", false,-1, 127,0);
        tracep->declArray(c+614,"riscv_soc core i_cache SRAM_1 sram_5", false,-1, 127,0);
        tracep->declArray(c+618,"riscv_soc core i_cache SRAM_1 sram_6", false,-1, 127,0);
        tracep->declArray(c+622,"riscv_soc core i_cache SRAM_1 sram_7", false,-1, 127,0);
        tracep->declArray(c+626,"riscv_soc core i_cache SRAM_1 sram_8", false,-1, 127,0);
        tracep->declArray(c+630,"riscv_soc core i_cache SRAM_1 sram_9", false,-1, 127,0);
        tracep->declArray(c+634,"riscv_soc core i_cache SRAM_1 sram_10", false,-1, 127,0);
        tracep->declArray(c+638,"riscv_soc core i_cache SRAM_1 sram_11", false,-1, 127,0);
        tracep->declArray(c+642,"riscv_soc core i_cache SRAM_1 sram_12", false,-1, 127,0);
        tracep->declArray(c+646,"riscv_soc core i_cache SRAM_1 sram_13", false,-1, 127,0);
        tracep->declArray(c+650,"riscv_soc core i_cache SRAM_1 sram_14", false,-1, 127,0);
        tracep->declArray(c+654,"riscv_soc core i_cache SRAM_1 sram_15", false,-1, 127,0);
        tracep->declArray(c+658,"riscv_soc core i_cache SRAM_1 sram_16", false,-1, 127,0);
        tracep->declArray(c+662,"riscv_soc core i_cache SRAM_1 sram_17", false,-1, 127,0);
        tracep->declArray(c+666,"riscv_soc core i_cache SRAM_1 sram_18", false,-1, 127,0);
        tracep->declArray(c+670,"riscv_soc core i_cache SRAM_1 sram_19", false,-1, 127,0);
        tracep->declArray(c+674,"riscv_soc core i_cache SRAM_1 sram_20", false,-1, 127,0);
        tracep->declArray(c+678,"riscv_soc core i_cache SRAM_1 sram_21", false,-1, 127,0);
        tracep->declArray(c+682,"riscv_soc core i_cache SRAM_1 sram_22", false,-1, 127,0);
        tracep->declArray(c+686,"riscv_soc core i_cache SRAM_1 sram_23", false,-1, 127,0);
        tracep->declArray(c+690,"riscv_soc core i_cache SRAM_1 sram_24", false,-1, 127,0);
        tracep->declArray(c+694,"riscv_soc core i_cache SRAM_1 sram_25", false,-1, 127,0);
        tracep->declArray(c+698,"riscv_soc core i_cache SRAM_1 sram_26", false,-1, 127,0);
        tracep->declArray(c+702,"riscv_soc core i_cache SRAM_1 sram_27", false,-1, 127,0);
        tracep->declArray(c+706,"riscv_soc core i_cache SRAM_1 sram_28", false,-1, 127,0);
        tracep->declArray(c+710,"riscv_soc core i_cache SRAM_1 sram_29", false,-1, 127,0);
        tracep->declArray(c+714,"riscv_soc core i_cache SRAM_1 sram_30", false,-1, 127,0);
        tracep->declArray(c+718,"riscv_soc core i_cache SRAM_1 sram_31", false,-1, 127,0);
        tracep->declArray(c+722,"riscv_soc core i_cache SRAM_1 sram_32", false,-1, 127,0);
        tracep->declArray(c+726,"riscv_soc core i_cache SRAM_1 sram_33", false,-1, 127,0);
        tracep->declArray(c+730,"riscv_soc core i_cache SRAM_1 sram_34", false,-1, 127,0);
        tracep->declArray(c+734,"riscv_soc core i_cache SRAM_1 sram_35", false,-1, 127,0);
        tracep->declArray(c+738,"riscv_soc core i_cache SRAM_1 sram_36", false,-1, 127,0);
        tracep->declArray(c+742,"riscv_soc core i_cache SRAM_1 sram_37", false,-1, 127,0);
        tracep->declArray(c+746,"riscv_soc core i_cache SRAM_1 sram_38", false,-1, 127,0);
        tracep->declArray(c+750,"riscv_soc core i_cache SRAM_1 sram_39", false,-1, 127,0);
        tracep->declArray(c+754,"riscv_soc core i_cache SRAM_1 sram_40", false,-1, 127,0);
        tracep->declArray(c+758,"riscv_soc core i_cache SRAM_1 sram_41", false,-1, 127,0);
        tracep->declArray(c+762,"riscv_soc core i_cache SRAM_1 sram_42", false,-1, 127,0);
        tracep->declArray(c+766,"riscv_soc core i_cache SRAM_1 sram_43", false,-1, 127,0);
        tracep->declArray(c+770,"riscv_soc core i_cache SRAM_1 sram_44", false,-1, 127,0);
        tracep->declArray(c+774,"riscv_soc core i_cache SRAM_1 sram_45", false,-1, 127,0);
        tracep->declArray(c+778,"riscv_soc core i_cache SRAM_1 sram_46", false,-1, 127,0);
        tracep->declArray(c+782,"riscv_soc core i_cache SRAM_1 sram_47", false,-1, 127,0);
        tracep->declArray(c+786,"riscv_soc core i_cache SRAM_1 sram_48", false,-1, 127,0);
        tracep->declArray(c+790,"riscv_soc core i_cache SRAM_1 sram_49", false,-1, 127,0);
        tracep->declArray(c+794,"riscv_soc core i_cache SRAM_1 sram_50", false,-1, 127,0);
        tracep->declArray(c+798,"riscv_soc core i_cache SRAM_1 sram_51", false,-1, 127,0);
        tracep->declArray(c+802,"riscv_soc core i_cache SRAM_1 sram_52", false,-1, 127,0);
        tracep->declArray(c+806,"riscv_soc core i_cache SRAM_1 sram_53", false,-1, 127,0);
        tracep->declArray(c+810,"riscv_soc core i_cache SRAM_1 sram_54", false,-1, 127,0);
        tracep->declArray(c+814,"riscv_soc core i_cache SRAM_1 sram_55", false,-1, 127,0);
        tracep->declArray(c+818,"riscv_soc core i_cache SRAM_1 sram_56", false,-1, 127,0);
        tracep->declArray(c+822,"riscv_soc core i_cache SRAM_1 sram_57", false,-1, 127,0);
        tracep->declArray(c+826,"riscv_soc core i_cache SRAM_1 sram_58", false,-1, 127,0);
        tracep->declArray(c+830,"riscv_soc core i_cache SRAM_1 sram_59", false,-1, 127,0);
        tracep->declArray(c+834,"riscv_soc core i_cache SRAM_1 sram_60", false,-1, 127,0);
        tracep->declArray(c+838,"riscv_soc core i_cache SRAM_1 sram_61", false,-1, 127,0);
        tracep->declArray(c+842,"riscv_soc core i_cache SRAM_1 sram_62", false,-1, 127,0);
        tracep->declArray(c+846,"riscv_soc core i_cache SRAM_1 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc core i_cache SRAM_1 bwen", false,-1, 127,0);
        tracep->declBit(c+303,"riscv_soc core i_cache SRAM_1 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache SRAM_2 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache SRAM_2 reset", false,-1);
        tracep->declBus(c+287,"riscv_soc core i_cache SRAM_2 io_addr", false,-1, 5,0);
        tracep->declBit(c+288,"riscv_soc core i_cache SRAM_2 io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core i_cache SRAM_2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+267,"riscv_soc core i_cache SRAM_2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+289,"riscv_soc core i_cache SRAM_2 io_rdata", false,-1, 127,0);
        tracep->declArray(c+289,"riscv_soc core i_cache SRAM_2 Q", false,-1, 127,0);
        tracep->declArray(c+850,"riscv_soc core i_cache SRAM_2 sram_0", false,-1, 127,0);
        tracep->declArray(c+854,"riscv_soc core i_cache SRAM_2 sram_1", false,-1, 127,0);
        tracep->declArray(c+858,"riscv_soc core i_cache SRAM_2 sram_2", false,-1, 127,0);
        tracep->declArray(c+862,"riscv_soc core i_cache SRAM_2 sram_3", false,-1, 127,0);
        tracep->declArray(c+866,"riscv_soc core i_cache SRAM_2 sram_4", false,-1, 127,0);
        tracep->declArray(c+870,"riscv_soc core i_cache SRAM_2 sram_5", false,-1, 127,0);
        tracep->declArray(c+874,"riscv_soc core i_cache SRAM_2 sram_6", false,-1, 127,0);
        tracep->declArray(c+878,"riscv_soc core i_cache SRAM_2 sram_7", false,-1, 127,0);
        tracep->declArray(c+882,"riscv_soc core i_cache SRAM_2 sram_8", false,-1, 127,0);
        tracep->declArray(c+886,"riscv_soc core i_cache SRAM_2 sram_9", false,-1, 127,0);
        tracep->declArray(c+890,"riscv_soc core i_cache SRAM_2 sram_10", false,-1, 127,0);
        tracep->declArray(c+894,"riscv_soc core i_cache SRAM_2 sram_11", false,-1, 127,0);
        tracep->declArray(c+898,"riscv_soc core i_cache SRAM_2 sram_12", false,-1, 127,0);
        tracep->declArray(c+902,"riscv_soc core i_cache SRAM_2 sram_13", false,-1, 127,0);
        tracep->declArray(c+906,"riscv_soc core i_cache SRAM_2 sram_14", false,-1, 127,0);
        tracep->declArray(c+910,"riscv_soc core i_cache SRAM_2 sram_15", false,-1, 127,0);
        tracep->declArray(c+914,"riscv_soc core i_cache SRAM_2 sram_16", false,-1, 127,0);
        tracep->declArray(c+918,"riscv_soc core i_cache SRAM_2 sram_17", false,-1, 127,0);
        tracep->declArray(c+922,"riscv_soc core i_cache SRAM_2 sram_18", false,-1, 127,0);
        tracep->declArray(c+926,"riscv_soc core i_cache SRAM_2 sram_19", false,-1, 127,0);
        tracep->declArray(c+930,"riscv_soc core i_cache SRAM_2 sram_20", false,-1, 127,0);
        tracep->declArray(c+934,"riscv_soc core i_cache SRAM_2 sram_21", false,-1, 127,0);
        tracep->declArray(c+938,"riscv_soc core i_cache SRAM_2 sram_22", false,-1, 127,0);
        tracep->declArray(c+942,"riscv_soc core i_cache SRAM_2 sram_23", false,-1, 127,0);
        tracep->declArray(c+946,"riscv_soc core i_cache SRAM_2 sram_24", false,-1, 127,0);
        tracep->declArray(c+950,"riscv_soc core i_cache SRAM_2 sram_25", false,-1, 127,0);
        tracep->declArray(c+954,"riscv_soc core i_cache SRAM_2 sram_26", false,-1, 127,0);
        tracep->declArray(c+958,"riscv_soc core i_cache SRAM_2 sram_27", false,-1, 127,0);
        tracep->declArray(c+962,"riscv_soc core i_cache SRAM_2 sram_28", false,-1, 127,0);
        tracep->declArray(c+966,"riscv_soc core i_cache SRAM_2 sram_29", false,-1, 127,0);
        tracep->declArray(c+970,"riscv_soc core i_cache SRAM_2 sram_30", false,-1, 127,0);
        tracep->declArray(c+974,"riscv_soc core i_cache SRAM_2 sram_31", false,-1, 127,0);
        tracep->declArray(c+978,"riscv_soc core i_cache SRAM_2 sram_32", false,-1, 127,0);
        tracep->declArray(c+982,"riscv_soc core i_cache SRAM_2 sram_33", false,-1, 127,0);
        tracep->declArray(c+986,"riscv_soc core i_cache SRAM_2 sram_34", false,-1, 127,0);
        tracep->declArray(c+990,"riscv_soc core i_cache SRAM_2 sram_35", false,-1, 127,0);
        tracep->declArray(c+994,"riscv_soc core i_cache SRAM_2 sram_36", false,-1, 127,0);
        tracep->declArray(c+998,"riscv_soc core i_cache SRAM_2 sram_37", false,-1, 127,0);
        tracep->declArray(c+1002,"riscv_soc core i_cache SRAM_2 sram_38", false,-1, 127,0);
        tracep->declArray(c+1006,"riscv_soc core i_cache SRAM_2 sram_39", false,-1, 127,0);
        tracep->declArray(c+1010,"riscv_soc core i_cache SRAM_2 sram_40", false,-1, 127,0);
        tracep->declArray(c+1014,"riscv_soc core i_cache SRAM_2 sram_41", false,-1, 127,0);
        tracep->declArray(c+1018,"riscv_soc core i_cache SRAM_2 sram_42", false,-1, 127,0);
        tracep->declArray(c+1022,"riscv_soc core i_cache SRAM_2 sram_43", false,-1, 127,0);
        tracep->declArray(c+1026,"riscv_soc core i_cache SRAM_2 sram_44", false,-1, 127,0);
        tracep->declArray(c+1030,"riscv_soc core i_cache SRAM_2 sram_45", false,-1, 127,0);
        tracep->declArray(c+1034,"riscv_soc core i_cache SRAM_2 sram_46", false,-1, 127,0);
        tracep->declArray(c+1038,"riscv_soc core i_cache SRAM_2 sram_47", false,-1, 127,0);
        tracep->declArray(c+1042,"riscv_soc core i_cache SRAM_2 sram_48", false,-1, 127,0);
        tracep->declArray(c+1046,"riscv_soc core i_cache SRAM_2 sram_49", false,-1, 127,0);
        tracep->declArray(c+1050,"riscv_soc core i_cache SRAM_2 sram_50", false,-1, 127,0);
        tracep->declArray(c+1054,"riscv_soc core i_cache SRAM_2 sram_51", false,-1, 127,0);
        tracep->declArray(c+1058,"riscv_soc core i_cache SRAM_2 sram_52", false,-1, 127,0);
        tracep->declArray(c+1062,"riscv_soc core i_cache SRAM_2 sram_53", false,-1, 127,0);
        tracep->declArray(c+1066,"riscv_soc core i_cache SRAM_2 sram_54", false,-1, 127,0);
        tracep->declArray(c+1070,"riscv_soc core i_cache SRAM_2 sram_55", false,-1, 127,0);
        tracep->declArray(c+1074,"riscv_soc core i_cache SRAM_2 sram_56", false,-1, 127,0);
        tracep->declArray(c+1078,"riscv_soc core i_cache SRAM_2 sram_57", false,-1, 127,0);
        tracep->declArray(c+1082,"riscv_soc core i_cache SRAM_2 sram_58", false,-1, 127,0);
        tracep->declArray(c+1086,"riscv_soc core i_cache SRAM_2 sram_59", false,-1, 127,0);
        tracep->declArray(c+1090,"riscv_soc core i_cache SRAM_2 sram_60", false,-1, 127,0);
        tracep->declArray(c+1094,"riscv_soc core i_cache SRAM_2 sram_61", false,-1, 127,0);
        tracep->declArray(c+1098,"riscv_soc core i_cache SRAM_2 sram_62", false,-1, 127,0);
        tracep->declArray(c+1102,"riscv_soc core i_cache SRAM_2 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc core i_cache SRAM_2 bwen", false,-1, 127,0);
        tracep->declBit(c+304,"riscv_soc core i_cache SRAM_2 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc core i_cache SRAM_3 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core i_cache SRAM_3 reset", false,-1);
        tracep->declBus(c+293,"riscv_soc core i_cache SRAM_3 io_addr", false,-1, 5,0);
        tracep->declBit(c+288,"riscv_soc core i_cache SRAM_3 io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core i_cache SRAM_3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+271,"riscv_soc core i_cache SRAM_3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+294,"riscv_soc core i_cache SRAM_3 io_rdata", false,-1, 127,0);
        tracep->declArray(c+294,"riscv_soc core i_cache SRAM_3 Q", false,-1, 127,0);
        tracep->declArray(c+1106,"riscv_soc core i_cache SRAM_3 sram_0", false,-1, 127,0);
        tracep->declArray(c+1110,"riscv_soc core i_cache SRAM_3 sram_1", false,-1, 127,0);
        tracep->declArray(c+1114,"riscv_soc core i_cache SRAM_3 sram_2", false,-1, 127,0);
        tracep->declArray(c+1118,"riscv_soc core i_cache SRAM_3 sram_3", false,-1, 127,0);
        tracep->declArray(c+1122,"riscv_soc core i_cache SRAM_3 sram_4", false,-1, 127,0);
        tracep->declArray(c+1126,"riscv_soc core i_cache SRAM_3 sram_5", false,-1, 127,0);
        tracep->declArray(c+1130,"riscv_soc core i_cache SRAM_3 sram_6", false,-1, 127,0);
        tracep->declArray(c+1134,"riscv_soc core i_cache SRAM_3 sram_7", false,-1, 127,0);
        tracep->declArray(c+1138,"riscv_soc core i_cache SRAM_3 sram_8", false,-1, 127,0);
        tracep->declArray(c+1142,"riscv_soc core i_cache SRAM_3 sram_9", false,-1, 127,0);
        tracep->declArray(c+1146,"riscv_soc core i_cache SRAM_3 sram_10", false,-1, 127,0);
        tracep->declArray(c+1150,"riscv_soc core i_cache SRAM_3 sram_11", false,-1, 127,0);
        tracep->declArray(c+1154,"riscv_soc core i_cache SRAM_3 sram_12", false,-1, 127,0);
        tracep->declArray(c+1158,"riscv_soc core i_cache SRAM_3 sram_13", false,-1, 127,0);
        tracep->declArray(c+1162,"riscv_soc core i_cache SRAM_3 sram_14", false,-1, 127,0);
        tracep->declArray(c+1166,"riscv_soc core i_cache SRAM_3 sram_15", false,-1, 127,0);
        tracep->declArray(c+1170,"riscv_soc core i_cache SRAM_3 sram_16", false,-1, 127,0);
        tracep->declArray(c+1174,"riscv_soc core i_cache SRAM_3 sram_17", false,-1, 127,0);
        tracep->declArray(c+1178,"riscv_soc core i_cache SRAM_3 sram_18", false,-1, 127,0);
        tracep->declArray(c+1182,"riscv_soc core i_cache SRAM_3 sram_19", false,-1, 127,0);
        tracep->declArray(c+1186,"riscv_soc core i_cache SRAM_3 sram_20", false,-1, 127,0);
        tracep->declArray(c+1190,"riscv_soc core i_cache SRAM_3 sram_21", false,-1, 127,0);
        tracep->declArray(c+1194,"riscv_soc core i_cache SRAM_3 sram_22", false,-1, 127,0);
        tracep->declArray(c+1198,"riscv_soc core i_cache SRAM_3 sram_23", false,-1, 127,0);
        tracep->declArray(c+1202,"riscv_soc core i_cache SRAM_3 sram_24", false,-1, 127,0);
        tracep->declArray(c+1206,"riscv_soc core i_cache SRAM_3 sram_25", false,-1, 127,0);
        tracep->declArray(c+1210,"riscv_soc core i_cache SRAM_3 sram_26", false,-1, 127,0);
        tracep->declArray(c+1214,"riscv_soc core i_cache SRAM_3 sram_27", false,-1, 127,0);
        tracep->declArray(c+1218,"riscv_soc core i_cache SRAM_3 sram_28", false,-1, 127,0);
        tracep->declArray(c+1222,"riscv_soc core i_cache SRAM_3 sram_29", false,-1, 127,0);
        tracep->declArray(c+1226,"riscv_soc core i_cache SRAM_3 sram_30", false,-1, 127,0);
        tracep->declArray(c+1230,"riscv_soc core i_cache SRAM_3 sram_31", false,-1, 127,0);
        tracep->declArray(c+1234,"riscv_soc core i_cache SRAM_3 sram_32", false,-1, 127,0);
        tracep->declArray(c+1238,"riscv_soc core i_cache SRAM_3 sram_33", false,-1, 127,0);
        tracep->declArray(c+1242,"riscv_soc core i_cache SRAM_3 sram_34", false,-1, 127,0);
        tracep->declArray(c+1246,"riscv_soc core i_cache SRAM_3 sram_35", false,-1, 127,0);
        tracep->declArray(c+1250,"riscv_soc core i_cache SRAM_3 sram_36", false,-1, 127,0);
        tracep->declArray(c+1254,"riscv_soc core i_cache SRAM_3 sram_37", false,-1, 127,0);
        tracep->declArray(c+1258,"riscv_soc core i_cache SRAM_3 sram_38", false,-1, 127,0);
        tracep->declArray(c+1262,"riscv_soc core i_cache SRAM_3 sram_39", false,-1, 127,0);
        tracep->declArray(c+1266,"riscv_soc core i_cache SRAM_3 sram_40", false,-1, 127,0);
        tracep->declArray(c+1270,"riscv_soc core i_cache SRAM_3 sram_41", false,-1, 127,0);
        tracep->declArray(c+1274,"riscv_soc core i_cache SRAM_3 sram_42", false,-1, 127,0);
        tracep->declArray(c+1278,"riscv_soc core i_cache SRAM_3 sram_43", false,-1, 127,0);
        tracep->declArray(c+1282,"riscv_soc core i_cache SRAM_3 sram_44", false,-1, 127,0);
        tracep->declArray(c+1286,"riscv_soc core i_cache SRAM_3 sram_45", false,-1, 127,0);
        tracep->declArray(c+1290,"riscv_soc core i_cache SRAM_3 sram_46", false,-1, 127,0);
        tracep->declArray(c+1294,"riscv_soc core i_cache SRAM_3 sram_47", false,-1, 127,0);
        tracep->declArray(c+1298,"riscv_soc core i_cache SRAM_3 sram_48", false,-1, 127,0);
        tracep->declArray(c+1302,"riscv_soc core i_cache SRAM_3 sram_49", false,-1, 127,0);
        tracep->declArray(c+1306,"riscv_soc core i_cache SRAM_3 sram_50", false,-1, 127,0);
        tracep->declArray(c+1310,"riscv_soc core i_cache SRAM_3 sram_51", false,-1, 127,0);
        tracep->declArray(c+1314,"riscv_soc core i_cache SRAM_3 sram_52", false,-1, 127,0);
        tracep->declArray(c+1318,"riscv_soc core i_cache SRAM_3 sram_53", false,-1, 127,0);
        tracep->declArray(c+1322,"riscv_soc core i_cache SRAM_3 sram_54", false,-1, 127,0);
        tracep->declArray(c+1326,"riscv_soc core i_cache SRAM_3 sram_55", false,-1, 127,0);
        tracep->declArray(c+1330,"riscv_soc core i_cache SRAM_3 sram_56", false,-1, 127,0);
        tracep->declArray(c+1334,"riscv_soc core i_cache SRAM_3 sram_57", false,-1, 127,0);
        tracep->declArray(c+1338,"riscv_soc core i_cache SRAM_3 sram_58", false,-1, 127,0);
        tracep->declArray(c+1342,"riscv_soc core i_cache SRAM_3 sram_59", false,-1, 127,0);
        tracep->declArray(c+1346,"riscv_soc core i_cache SRAM_3 sram_60", false,-1, 127,0);
        tracep->declArray(c+1350,"riscv_soc core i_cache SRAM_3 sram_61", false,-1, 127,0);
        tracep->declArray(c+1354,"riscv_soc core i_cache SRAM_3 sram_62", false,-1, 127,0);
        tracep->declArray(c+1358,"riscv_soc core i_cache SRAM_3 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc core i_cache SRAM_3 bwen", false,-1, 127,0);
        tracep->declBit(c+304,"riscv_soc core i_cache SRAM_3 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc core d_cache clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache reset", false,-1);
        tracep->declBit(c+112,"riscv_soc core d_cache io_cpu_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core d_cache io_cpu_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core d_cache io_cpu_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core d_cache io_cpu_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core d_cache io_cpu_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core d_cache io_cpu_bits_is_w", false,-1);
        tracep->declBit(c+121,"riscv_soc core d_cache io_cpu_ready", false,-1);
        tracep->declBit(c+122,"riscv_soc core d_cache io_cache_bus_w_ready", false,-1);
        tracep->declBit(c+123,"riscv_soc core d_cache io_cache_bus_w_valid", false,-1);
        tracep->declQuad(c+124,"riscv_soc core d_cache io_cache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core d_cache io_cache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core d_cache io_cache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+129,"riscv_soc core d_cache io_cache_bus_b_ready", false,-1);
        tracep->declBit(c+130,"riscv_soc core d_cache io_cache_bus_b_valid", false,-1);
        tracep->declBit(c+131,"riscv_soc core d_cache io_cache_bus_r_valid", false,-1);
        tracep->declQuad(c+132,"riscv_soc core d_cache io_cache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core d_cache io_cache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+134,"riscv_soc core d_cache io_cache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+135,"riscv_soc core d_cache io_cache_bus_r_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core d_cache SRAM_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache SRAM_reset", false,-1);
        tracep->declBus(c+1362,"riscv_soc core d_cache SRAM_io_addr", false,-1, 5,0);
        tracep->declBit(c+1363,"riscv_soc core d_cache SRAM_io_wen", false,-1);
        tracep->declArray(c+1364,"riscv_soc core d_cache SRAM_io_wmask", false,-1, 127,0);
        tracep->declArray(c+1368,"riscv_soc core d_cache SRAM_io_wdata", false,-1, 127,0);
        tracep->declArray(c+1372,"riscv_soc core d_cache SRAM_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc core d_cache SRAM_1_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache SRAM_1_reset", false,-1);
        tracep->declBus(c+1376,"riscv_soc core d_cache SRAM_1_io_addr", false,-1, 5,0);
        tracep->declBit(c+1363,"riscv_soc core d_cache SRAM_1_io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core d_cache SRAM_1_io_wmask", false,-1, 127,0);
        tracep->declArray(c+1377,"riscv_soc core d_cache SRAM_1_io_wdata", false,-1, 127,0);
        tracep->declArray(c+1381,"riscv_soc core d_cache SRAM_1_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc core d_cache SRAM_2_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache SRAM_2_reset", false,-1);
        tracep->declBus(c+1385,"riscv_soc core d_cache SRAM_2_io_addr", false,-1, 5,0);
        tracep->declBit(c+1386,"riscv_soc core d_cache SRAM_2_io_wen", false,-1);
        tracep->declArray(c+1364,"riscv_soc core d_cache SRAM_2_io_wmask", false,-1, 127,0);
        tracep->declArray(c+1368,"riscv_soc core d_cache SRAM_2_io_wdata", false,-1, 127,0);
        tracep->declArray(c+1387,"riscv_soc core d_cache SRAM_2_io_rdata", false,-1, 127,0);
        tracep->declBit(c+3195,"riscv_soc core d_cache SRAM_3_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache SRAM_3_reset", false,-1);
        tracep->declBus(c+1391,"riscv_soc core d_cache SRAM_3_io_addr", false,-1, 5,0);
        tracep->declBit(c+1386,"riscv_soc core d_cache SRAM_3_io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core d_cache SRAM_3_io_wmask", false,-1, 127,0);
        tracep->declArray(c+1377,"riscv_soc core d_cache SRAM_3_io_wdata", false,-1, 127,0);
        tracep->declArray(c+1392,"riscv_soc core d_cache SRAM_3_io_rdata", false,-1, 127,0);
        tracep->declQuad(c+1396,"riscv_soc core d_cache Tag", false,-1, 53,0);
        tracep->declBus(c+1398,"riscv_soc core d_cache Index", false,-1, 5,0);
        tracep->declBus(c+1399,"riscv_soc core d_cache Offset", false,-1, 3,0);
        tracep->declBus(c+1400,"riscv_soc core d_cache reg_cache_state", false,-1, 1,0);
        tracep->declQuad(c+1401,"riscv_soc core d_cache reg_wdata", false,-1, 63,0);
        tracep->declBus(c+1403,"riscv_soc core d_cache reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1404,"riscv_soc core d_cache reg_is_w", false,-1);
        tracep->declQuad(c+1405,"riscv_soc core d_cache reg_tag", false,-1, 53,0);
        tracep->declBus(c+1407,"riscv_soc core d_cache reg_index", false,-1, 5,0);
        tracep->declBus(c+1408,"riscv_soc core d_cache reg_offset", false,-1, 3,0);
        tracep->declBit(c+121,"riscv_soc core d_cache reg_ready", false,-1);
        tracep->declQuad(c+115,"riscv_soc core d_cache reg_rdata", false,-1, 63,0);
        tracep->declBit(c+1409,"riscv_soc core d_cache reg_cache_write", false,-1);
        tracep->declBus(c+1410,"riscv_soc core d_cache reg_cache_wstrb", false,-1, 15,0);
        tracep->declArray(c+1368,"riscv_soc core d_cache reg_cache_wdata", false,-1, 127,0);
        tracep->declBit(c+1411,"riscv_soc core d_cache reg_chosen_tag", false,-1);
        tracep->declQuad(c+1412,"riscv_soc core d_cache cache_mask_lo", false,-1, 63,0);
        tracep->declArray(c+1414,"riscv_soc core d_cache cache_mask", false,-1, 127,0);
        tracep->declArray(c+1418,"riscv_soc core d_cache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+1422,"riscv_soc core d_cache is_sram0_write", false,-1);
        tracep->declQuad(c+1423,"riscv_soc core d_cache reg_sram0_valid", false,-1, 63,0);
        tracep->declQuad(c+1425,"riscv_soc core d_cache reg_sram0_dirty", false,-1, 63,0);
        tracep->declQuad(c+1427,"riscv_soc core d_cache chose_bit", false,-1, 63,0);
        tracep->declQuad(c+1429,"riscv_soc core d_cache neg_chose_bit", false,-1, 63,0);
        tracep->declBit(c+1431,"riscv_soc core d_cache is_sram2_write", false,-1);
        tracep->declQuad(c+1432,"riscv_soc core d_cache reg_sram2_valid", false,-1, 63,0);
        tracep->declQuad(c+1434,"riscv_soc core d_cache reg_sram2_dirty", false,-1, 63,0);
        tracep->declQuad(c+132,"riscv_soc core d_cache reg_r_raddr", false,-1, 63,0);
        tracep->declBit(c+131,"riscv_soc core d_cache reg_r_valid", false,-1);
        tracep->declQuad(c+124,"riscv_soc core d_cache reg_w_waddr", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core d_cache reg_w_wdata", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core d_cache reg_w_wlast", false,-1);
        tracep->declBit(c+123,"riscv_soc core d_cache reg_w_valid", false,-1);
        tracep->declBit(c+129,"riscv_soc core d_cache reg_b_ready", false,-1);
        tracep->declQuad(c+1436,"riscv_soc core d_cache tag_0", false,-1, 53,0);
        tracep->declQuad(c+1438,"riscv_soc core d_cache tag_2", false,-1, 53,0);
        tracep->declBit(c+1440,"riscv_soc core d_cache hit_0", false,-1);
        tracep->declBit(c+1441,"riscv_soc core d_cache hit_2", false,-1);
        tracep->declBit(c+1442,"riscv_soc core d_cache tag_valid_0", false,-1);
        tracep->declBit(c+1443,"riscv_soc core d_cache tag_valid_2", false,-1);
        tracep->declBit(c+1444,"riscv_soc core d_cache tag_dirty_0", false,-1);
        tracep->declBit(c+1445,"riscv_soc core d_cache tag_dirty_2", false,-1);
        tracep->declQuad(c+1446,"riscv_soc core d_cache rdata0", false,-1, 63,0);
        tracep->declQuad(c+1448,"riscv_soc core d_cache rdata2", false,-1, 63,0);
        tracep->declQuad(c+1450,"riscv_soc core d_cache reg_lru_2", false,-1, 63,0);
        tracep->declBit(c+1452,"riscv_soc core d_cache LRU_2", false,-1);
        tracep->declBit(c+1453,"riscv_soc core d_cache reg_start_operation", false,-1);
        tracep->declBus(c+1454,"riscv_soc core d_cache reg_cnt", false,-1, 1,0);
        tracep->declBit(c+1455,"riscv_soc core d_cache reg_rbus_finish", false,-1);
        tracep->declBit(c+1456,"riscv_soc core d_cache reg_wbus_finish", false,-1);
        tracep->declBit(c+3195,"riscv_soc core d_cache SRAM clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache SRAM reset", false,-1);
        tracep->declBus(c+1362,"riscv_soc core d_cache SRAM io_addr", false,-1, 5,0);
        tracep->declBit(c+1363,"riscv_soc core d_cache SRAM io_wen", false,-1);
        tracep->declArray(c+1364,"riscv_soc core d_cache SRAM io_wmask", false,-1, 127,0);
        tracep->declArray(c+1368,"riscv_soc core d_cache SRAM io_wdata", false,-1, 127,0);
        tracep->declArray(c+1372,"riscv_soc core d_cache SRAM io_rdata", false,-1, 127,0);
        tracep->declArray(c+1372,"riscv_soc core d_cache SRAM Q", false,-1, 127,0);
        tracep->declArray(c+1457,"riscv_soc core d_cache SRAM sram_0", false,-1, 127,0);
        tracep->declArray(c+1461,"riscv_soc core d_cache SRAM sram_1", false,-1, 127,0);
        tracep->declArray(c+1465,"riscv_soc core d_cache SRAM sram_2", false,-1, 127,0);
        tracep->declArray(c+1469,"riscv_soc core d_cache SRAM sram_3", false,-1, 127,0);
        tracep->declArray(c+1473,"riscv_soc core d_cache SRAM sram_4", false,-1, 127,0);
        tracep->declArray(c+1477,"riscv_soc core d_cache SRAM sram_5", false,-1, 127,0);
        tracep->declArray(c+1481,"riscv_soc core d_cache SRAM sram_6", false,-1, 127,0);
        tracep->declArray(c+1485,"riscv_soc core d_cache SRAM sram_7", false,-1, 127,0);
        tracep->declArray(c+1489,"riscv_soc core d_cache SRAM sram_8", false,-1, 127,0);
        tracep->declArray(c+1493,"riscv_soc core d_cache SRAM sram_9", false,-1, 127,0);
        tracep->declArray(c+1497,"riscv_soc core d_cache SRAM sram_10", false,-1, 127,0);
        tracep->declArray(c+1501,"riscv_soc core d_cache SRAM sram_11", false,-1, 127,0);
        tracep->declArray(c+1505,"riscv_soc core d_cache SRAM sram_12", false,-1, 127,0);
        tracep->declArray(c+1509,"riscv_soc core d_cache SRAM sram_13", false,-1, 127,0);
        tracep->declArray(c+1513,"riscv_soc core d_cache SRAM sram_14", false,-1, 127,0);
        tracep->declArray(c+1517,"riscv_soc core d_cache SRAM sram_15", false,-1, 127,0);
        tracep->declArray(c+1521,"riscv_soc core d_cache SRAM sram_16", false,-1, 127,0);
        tracep->declArray(c+1525,"riscv_soc core d_cache SRAM sram_17", false,-1, 127,0);
        tracep->declArray(c+1529,"riscv_soc core d_cache SRAM sram_18", false,-1, 127,0);
        tracep->declArray(c+1533,"riscv_soc core d_cache SRAM sram_19", false,-1, 127,0);
        tracep->declArray(c+1537,"riscv_soc core d_cache SRAM sram_20", false,-1, 127,0);
        tracep->declArray(c+1541,"riscv_soc core d_cache SRAM sram_21", false,-1, 127,0);
        tracep->declArray(c+1545,"riscv_soc core d_cache SRAM sram_22", false,-1, 127,0);
        tracep->declArray(c+1549,"riscv_soc core d_cache SRAM sram_23", false,-1, 127,0);
        tracep->declArray(c+1553,"riscv_soc core d_cache SRAM sram_24", false,-1, 127,0);
        tracep->declArray(c+1557,"riscv_soc core d_cache SRAM sram_25", false,-1, 127,0);
        tracep->declArray(c+1561,"riscv_soc core d_cache SRAM sram_26", false,-1, 127,0);
        tracep->declArray(c+1565,"riscv_soc core d_cache SRAM sram_27", false,-1, 127,0);
        tracep->declArray(c+1569,"riscv_soc core d_cache SRAM sram_28", false,-1, 127,0);
        tracep->declArray(c+1573,"riscv_soc core d_cache SRAM sram_29", false,-1, 127,0);
        tracep->declArray(c+1577,"riscv_soc core d_cache SRAM sram_30", false,-1, 127,0);
        tracep->declArray(c+1581,"riscv_soc core d_cache SRAM sram_31", false,-1, 127,0);
        tracep->declArray(c+1585,"riscv_soc core d_cache SRAM sram_32", false,-1, 127,0);
        tracep->declArray(c+1589,"riscv_soc core d_cache SRAM sram_33", false,-1, 127,0);
        tracep->declArray(c+1593,"riscv_soc core d_cache SRAM sram_34", false,-1, 127,0);
        tracep->declArray(c+1597,"riscv_soc core d_cache SRAM sram_35", false,-1, 127,0);
        tracep->declArray(c+1601,"riscv_soc core d_cache SRAM sram_36", false,-1, 127,0);
        tracep->declArray(c+1605,"riscv_soc core d_cache SRAM sram_37", false,-1, 127,0);
        tracep->declArray(c+1609,"riscv_soc core d_cache SRAM sram_38", false,-1, 127,0);
        tracep->declArray(c+1613,"riscv_soc core d_cache SRAM sram_39", false,-1, 127,0);
        tracep->declArray(c+1617,"riscv_soc core d_cache SRAM sram_40", false,-1, 127,0);
        tracep->declArray(c+1621,"riscv_soc core d_cache SRAM sram_41", false,-1, 127,0);
        tracep->declArray(c+1625,"riscv_soc core d_cache SRAM sram_42", false,-1, 127,0);
        tracep->declArray(c+1629,"riscv_soc core d_cache SRAM sram_43", false,-1, 127,0);
        tracep->declArray(c+1633,"riscv_soc core d_cache SRAM sram_44", false,-1, 127,0);
        tracep->declArray(c+1637,"riscv_soc core d_cache SRAM sram_45", false,-1, 127,0);
        tracep->declArray(c+1641,"riscv_soc core d_cache SRAM sram_46", false,-1, 127,0);
        tracep->declArray(c+1645,"riscv_soc core d_cache SRAM sram_47", false,-1, 127,0);
        tracep->declArray(c+1649,"riscv_soc core d_cache SRAM sram_48", false,-1, 127,0);
        tracep->declArray(c+1653,"riscv_soc core d_cache SRAM sram_49", false,-1, 127,0);
        tracep->declArray(c+1657,"riscv_soc core d_cache SRAM sram_50", false,-1, 127,0);
        tracep->declArray(c+1661,"riscv_soc core d_cache SRAM sram_51", false,-1, 127,0);
        tracep->declArray(c+1665,"riscv_soc core d_cache SRAM sram_52", false,-1, 127,0);
        tracep->declArray(c+1669,"riscv_soc core d_cache SRAM sram_53", false,-1, 127,0);
        tracep->declArray(c+1673,"riscv_soc core d_cache SRAM sram_54", false,-1, 127,0);
        tracep->declArray(c+1677,"riscv_soc core d_cache SRAM sram_55", false,-1, 127,0);
        tracep->declArray(c+1681,"riscv_soc core d_cache SRAM sram_56", false,-1, 127,0);
        tracep->declArray(c+1685,"riscv_soc core d_cache SRAM sram_57", false,-1, 127,0);
        tracep->declArray(c+1689,"riscv_soc core d_cache SRAM sram_58", false,-1, 127,0);
        tracep->declArray(c+1693,"riscv_soc core d_cache SRAM sram_59", false,-1, 127,0);
        tracep->declArray(c+1697,"riscv_soc core d_cache SRAM sram_60", false,-1, 127,0);
        tracep->declArray(c+1701,"riscv_soc core d_cache SRAM sram_61", false,-1, 127,0);
        tracep->declArray(c+1705,"riscv_soc core d_cache SRAM sram_62", false,-1, 127,0);
        tracep->declArray(c+1709,"riscv_soc core d_cache SRAM sram_63", false,-1, 127,0);
        tracep->declArray(c+1414,"riscv_soc core d_cache SRAM bwen", false,-1, 127,0);
        tracep->declBit(c+1422,"riscv_soc core d_cache SRAM wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc core d_cache SRAM_1 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache SRAM_1 reset", false,-1);
        tracep->declBus(c+1376,"riscv_soc core d_cache SRAM_1 io_addr", false,-1, 5,0);
        tracep->declBit(c+1363,"riscv_soc core d_cache SRAM_1 io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core d_cache SRAM_1 io_wmask", false,-1, 127,0);
        tracep->declArray(c+1377,"riscv_soc core d_cache SRAM_1 io_wdata", false,-1, 127,0);
        tracep->declArray(c+1381,"riscv_soc core d_cache SRAM_1 io_rdata", false,-1, 127,0);
        tracep->declArray(c+1381,"riscv_soc core d_cache SRAM_1 Q", false,-1, 127,0);
        tracep->declArray(c+1713,"riscv_soc core d_cache SRAM_1 sram_0", false,-1, 127,0);
        tracep->declArray(c+1717,"riscv_soc core d_cache SRAM_1 sram_1", false,-1, 127,0);
        tracep->declArray(c+1721,"riscv_soc core d_cache SRAM_1 sram_2", false,-1, 127,0);
        tracep->declArray(c+1725,"riscv_soc core d_cache SRAM_1 sram_3", false,-1, 127,0);
        tracep->declArray(c+1729,"riscv_soc core d_cache SRAM_1 sram_4", false,-1, 127,0);
        tracep->declArray(c+1733,"riscv_soc core d_cache SRAM_1 sram_5", false,-1, 127,0);
        tracep->declArray(c+1737,"riscv_soc core d_cache SRAM_1 sram_6", false,-1, 127,0);
        tracep->declArray(c+1741,"riscv_soc core d_cache SRAM_1 sram_7", false,-1, 127,0);
        tracep->declArray(c+1745,"riscv_soc core d_cache SRAM_1 sram_8", false,-1, 127,0);
        tracep->declArray(c+1749,"riscv_soc core d_cache SRAM_1 sram_9", false,-1, 127,0);
        tracep->declArray(c+1753,"riscv_soc core d_cache SRAM_1 sram_10", false,-1, 127,0);
        tracep->declArray(c+1757,"riscv_soc core d_cache SRAM_1 sram_11", false,-1, 127,0);
        tracep->declArray(c+1761,"riscv_soc core d_cache SRAM_1 sram_12", false,-1, 127,0);
        tracep->declArray(c+1765,"riscv_soc core d_cache SRAM_1 sram_13", false,-1, 127,0);
        tracep->declArray(c+1769,"riscv_soc core d_cache SRAM_1 sram_14", false,-1, 127,0);
        tracep->declArray(c+1773,"riscv_soc core d_cache SRAM_1 sram_15", false,-1, 127,0);
        tracep->declArray(c+1777,"riscv_soc core d_cache SRAM_1 sram_16", false,-1, 127,0);
        tracep->declArray(c+1781,"riscv_soc core d_cache SRAM_1 sram_17", false,-1, 127,0);
        tracep->declArray(c+1785,"riscv_soc core d_cache SRAM_1 sram_18", false,-1, 127,0);
        tracep->declArray(c+1789,"riscv_soc core d_cache SRAM_1 sram_19", false,-1, 127,0);
        tracep->declArray(c+1793,"riscv_soc core d_cache SRAM_1 sram_20", false,-1, 127,0);
        tracep->declArray(c+1797,"riscv_soc core d_cache SRAM_1 sram_21", false,-1, 127,0);
        tracep->declArray(c+1801,"riscv_soc core d_cache SRAM_1 sram_22", false,-1, 127,0);
        tracep->declArray(c+1805,"riscv_soc core d_cache SRAM_1 sram_23", false,-1, 127,0);
        tracep->declArray(c+1809,"riscv_soc core d_cache SRAM_1 sram_24", false,-1, 127,0);
        tracep->declArray(c+1813,"riscv_soc core d_cache SRAM_1 sram_25", false,-1, 127,0);
        tracep->declArray(c+1817,"riscv_soc core d_cache SRAM_1 sram_26", false,-1, 127,0);
        tracep->declArray(c+1821,"riscv_soc core d_cache SRAM_1 sram_27", false,-1, 127,0);
        tracep->declArray(c+1825,"riscv_soc core d_cache SRAM_1 sram_28", false,-1, 127,0);
        tracep->declArray(c+1829,"riscv_soc core d_cache SRAM_1 sram_29", false,-1, 127,0);
        tracep->declArray(c+1833,"riscv_soc core d_cache SRAM_1 sram_30", false,-1, 127,0);
        tracep->declArray(c+1837,"riscv_soc core d_cache SRAM_1 sram_31", false,-1, 127,0);
        tracep->declArray(c+1841,"riscv_soc core d_cache SRAM_1 sram_32", false,-1, 127,0);
        tracep->declArray(c+1845,"riscv_soc core d_cache SRAM_1 sram_33", false,-1, 127,0);
        tracep->declArray(c+1849,"riscv_soc core d_cache SRAM_1 sram_34", false,-1, 127,0);
        tracep->declArray(c+1853,"riscv_soc core d_cache SRAM_1 sram_35", false,-1, 127,0);
        tracep->declArray(c+1857,"riscv_soc core d_cache SRAM_1 sram_36", false,-1, 127,0);
        tracep->declArray(c+1861,"riscv_soc core d_cache SRAM_1 sram_37", false,-1, 127,0);
        tracep->declArray(c+1865,"riscv_soc core d_cache SRAM_1 sram_38", false,-1, 127,0);
        tracep->declArray(c+1869,"riscv_soc core d_cache SRAM_1 sram_39", false,-1, 127,0);
        tracep->declArray(c+1873,"riscv_soc core d_cache SRAM_1 sram_40", false,-1, 127,0);
        tracep->declArray(c+1877,"riscv_soc core d_cache SRAM_1 sram_41", false,-1, 127,0);
        tracep->declArray(c+1881,"riscv_soc core d_cache SRAM_1 sram_42", false,-1, 127,0);
        tracep->declArray(c+1885,"riscv_soc core d_cache SRAM_1 sram_43", false,-1, 127,0);
        tracep->declArray(c+1889,"riscv_soc core d_cache SRAM_1 sram_44", false,-1, 127,0);
        tracep->declArray(c+1893,"riscv_soc core d_cache SRAM_1 sram_45", false,-1, 127,0);
        tracep->declArray(c+1897,"riscv_soc core d_cache SRAM_1 sram_46", false,-1, 127,0);
        tracep->declArray(c+1901,"riscv_soc core d_cache SRAM_1 sram_47", false,-1, 127,0);
        tracep->declArray(c+1905,"riscv_soc core d_cache SRAM_1 sram_48", false,-1, 127,0);
        tracep->declArray(c+1909,"riscv_soc core d_cache SRAM_1 sram_49", false,-1, 127,0);
        tracep->declArray(c+1913,"riscv_soc core d_cache SRAM_1 sram_50", false,-1, 127,0);
        tracep->declArray(c+1917,"riscv_soc core d_cache SRAM_1 sram_51", false,-1, 127,0);
        tracep->declArray(c+1921,"riscv_soc core d_cache SRAM_1 sram_52", false,-1, 127,0);
        tracep->declArray(c+1925,"riscv_soc core d_cache SRAM_1 sram_53", false,-1, 127,0);
        tracep->declArray(c+1929,"riscv_soc core d_cache SRAM_1 sram_54", false,-1, 127,0);
        tracep->declArray(c+1933,"riscv_soc core d_cache SRAM_1 sram_55", false,-1, 127,0);
        tracep->declArray(c+1937,"riscv_soc core d_cache SRAM_1 sram_56", false,-1, 127,0);
        tracep->declArray(c+1941,"riscv_soc core d_cache SRAM_1 sram_57", false,-1, 127,0);
        tracep->declArray(c+1945,"riscv_soc core d_cache SRAM_1 sram_58", false,-1, 127,0);
        tracep->declArray(c+1949,"riscv_soc core d_cache SRAM_1 sram_59", false,-1, 127,0);
        tracep->declArray(c+1953,"riscv_soc core d_cache SRAM_1 sram_60", false,-1, 127,0);
        tracep->declArray(c+1957,"riscv_soc core d_cache SRAM_1 sram_61", false,-1, 127,0);
        tracep->declArray(c+1961,"riscv_soc core d_cache SRAM_1 sram_62", false,-1, 127,0);
        tracep->declArray(c+1965,"riscv_soc core d_cache SRAM_1 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc core d_cache SRAM_1 bwen", false,-1, 127,0);
        tracep->declBit(c+1422,"riscv_soc core d_cache SRAM_1 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc core d_cache SRAM_2 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache SRAM_2 reset", false,-1);
        tracep->declBus(c+1385,"riscv_soc core d_cache SRAM_2 io_addr", false,-1, 5,0);
        tracep->declBit(c+1386,"riscv_soc core d_cache SRAM_2 io_wen", false,-1);
        tracep->declArray(c+1364,"riscv_soc core d_cache SRAM_2 io_wmask", false,-1, 127,0);
        tracep->declArray(c+1368,"riscv_soc core d_cache SRAM_2 io_wdata", false,-1, 127,0);
        tracep->declArray(c+1387,"riscv_soc core d_cache SRAM_2 io_rdata", false,-1, 127,0);
        tracep->declArray(c+1387,"riscv_soc core d_cache SRAM_2 Q", false,-1, 127,0);
        tracep->declArray(c+1969,"riscv_soc core d_cache SRAM_2 sram_0", false,-1, 127,0);
        tracep->declArray(c+1973,"riscv_soc core d_cache SRAM_2 sram_1", false,-1, 127,0);
        tracep->declArray(c+1977,"riscv_soc core d_cache SRAM_2 sram_2", false,-1, 127,0);
        tracep->declArray(c+1981,"riscv_soc core d_cache SRAM_2 sram_3", false,-1, 127,0);
        tracep->declArray(c+1985,"riscv_soc core d_cache SRAM_2 sram_4", false,-1, 127,0);
        tracep->declArray(c+1989,"riscv_soc core d_cache SRAM_2 sram_5", false,-1, 127,0);
        tracep->declArray(c+1993,"riscv_soc core d_cache SRAM_2 sram_6", false,-1, 127,0);
        tracep->declArray(c+1997,"riscv_soc core d_cache SRAM_2 sram_7", false,-1, 127,0);
        tracep->declArray(c+2001,"riscv_soc core d_cache SRAM_2 sram_8", false,-1, 127,0);
        tracep->declArray(c+2005,"riscv_soc core d_cache SRAM_2 sram_9", false,-1, 127,0);
        tracep->declArray(c+2009,"riscv_soc core d_cache SRAM_2 sram_10", false,-1, 127,0);
        tracep->declArray(c+2013,"riscv_soc core d_cache SRAM_2 sram_11", false,-1, 127,0);
        tracep->declArray(c+2017,"riscv_soc core d_cache SRAM_2 sram_12", false,-1, 127,0);
        tracep->declArray(c+2021,"riscv_soc core d_cache SRAM_2 sram_13", false,-1, 127,0);
        tracep->declArray(c+2025,"riscv_soc core d_cache SRAM_2 sram_14", false,-1, 127,0);
        tracep->declArray(c+2029,"riscv_soc core d_cache SRAM_2 sram_15", false,-1, 127,0);
        tracep->declArray(c+2033,"riscv_soc core d_cache SRAM_2 sram_16", false,-1, 127,0);
        tracep->declArray(c+2037,"riscv_soc core d_cache SRAM_2 sram_17", false,-1, 127,0);
        tracep->declArray(c+2041,"riscv_soc core d_cache SRAM_2 sram_18", false,-1, 127,0);
        tracep->declArray(c+2045,"riscv_soc core d_cache SRAM_2 sram_19", false,-1, 127,0);
        tracep->declArray(c+2049,"riscv_soc core d_cache SRAM_2 sram_20", false,-1, 127,0);
        tracep->declArray(c+2053,"riscv_soc core d_cache SRAM_2 sram_21", false,-1, 127,0);
        tracep->declArray(c+2057,"riscv_soc core d_cache SRAM_2 sram_22", false,-1, 127,0);
        tracep->declArray(c+2061,"riscv_soc core d_cache SRAM_2 sram_23", false,-1, 127,0);
        tracep->declArray(c+2065,"riscv_soc core d_cache SRAM_2 sram_24", false,-1, 127,0);
        tracep->declArray(c+2069,"riscv_soc core d_cache SRAM_2 sram_25", false,-1, 127,0);
        tracep->declArray(c+2073,"riscv_soc core d_cache SRAM_2 sram_26", false,-1, 127,0);
        tracep->declArray(c+2077,"riscv_soc core d_cache SRAM_2 sram_27", false,-1, 127,0);
        tracep->declArray(c+2081,"riscv_soc core d_cache SRAM_2 sram_28", false,-1, 127,0);
        tracep->declArray(c+2085,"riscv_soc core d_cache SRAM_2 sram_29", false,-1, 127,0);
        tracep->declArray(c+2089,"riscv_soc core d_cache SRAM_2 sram_30", false,-1, 127,0);
        tracep->declArray(c+2093,"riscv_soc core d_cache SRAM_2 sram_31", false,-1, 127,0);
        tracep->declArray(c+2097,"riscv_soc core d_cache SRAM_2 sram_32", false,-1, 127,0);
        tracep->declArray(c+2101,"riscv_soc core d_cache SRAM_2 sram_33", false,-1, 127,0);
        tracep->declArray(c+2105,"riscv_soc core d_cache SRAM_2 sram_34", false,-1, 127,0);
        tracep->declArray(c+2109,"riscv_soc core d_cache SRAM_2 sram_35", false,-1, 127,0);
        tracep->declArray(c+2113,"riscv_soc core d_cache SRAM_2 sram_36", false,-1, 127,0);
        tracep->declArray(c+2117,"riscv_soc core d_cache SRAM_2 sram_37", false,-1, 127,0);
        tracep->declArray(c+2121,"riscv_soc core d_cache SRAM_2 sram_38", false,-1, 127,0);
        tracep->declArray(c+2125,"riscv_soc core d_cache SRAM_2 sram_39", false,-1, 127,0);
        tracep->declArray(c+2129,"riscv_soc core d_cache SRAM_2 sram_40", false,-1, 127,0);
        tracep->declArray(c+2133,"riscv_soc core d_cache SRAM_2 sram_41", false,-1, 127,0);
        tracep->declArray(c+2137,"riscv_soc core d_cache SRAM_2 sram_42", false,-1, 127,0);
        tracep->declArray(c+2141,"riscv_soc core d_cache SRAM_2 sram_43", false,-1, 127,0);
        tracep->declArray(c+2145,"riscv_soc core d_cache SRAM_2 sram_44", false,-1, 127,0);
        tracep->declArray(c+2149,"riscv_soc core d_cache SRAM_2 sram_45", false,-1, 127,0);
        tracep->declArray(c+2153,"riscv_soc core d_cache SRAM_2 sram_46", false,-1, 127,0);
        tracep->declArray(c+2157,"riscv_soc core d_cache SRAM_2 sram_47", false,-1, 127,0);
        tracep->declArray(c+2161,"riscv_soc core d_cache SRAM_2 sram_48", false,-1, 127,0);
        tracep->declArray(c+2165,"riscv_soc core d_cache SRAM_2 sram_49", false,-1, 127,0);
        tracep->declArray(c+2169,"riscv_soc core d_cache SRAM_2 sram_50", false,-1, 127,0);
        tracep->declArray(c+2173,"riscv_soc core d_cache SRAM_2 sram_51", false,-1, 127,0);
        tracep->declArray(c+2177,"riscv_soc core d_cache SRAM_2 sram_52", false,-1, 127,0);
        tracep->declArray(c+2181,"riscv_soc core d_cache SRAM_2 sram_53", false,-1, 127,0);
        tracep->declArray(c+2185,"riscv_soc core d_cache SRAM_2 sram_54", false,-1, 127,0);
        tracep->declArray(c+2189,"riscv_soc core d_cache SRAM_2 sram_55", false,-1, 127,0);
        tracep->declArray(c+2193,"riscv_soc core d_cache SRAM_2 sram_56", false,-1, 127,0);
        tracep->declArray(c+2197,"riscv_soc core d_cache SRAM_2 sram_57", false,-1, 127,0);
        tracep->declArray(c+2201,"riscv_soc core d_cache SRAM_2 sram_58", false,-1, 127,0);
        tracep->declArray(c+2205,"riscv_soc core d_cache SRAM_2 sram_59", false,-1, 127,0);
        tracep->declArray(c+2209,"riscv_soc core d_cache SRAM_2 sram_60", false,-1, 127,0);
        tracep->declArray(c+2213,"riscv_soc core d_cache SRAM_2 sram_61", false,-1, 127,0);
        tracep->declArray(c+2217,"riscv_soc core d_cache SRAM_2 sram_62", false,-1, 127,0);
        tracep->declArray(c+2221,"riscv_soc core d_cache SRAM_2 sram_63", false,-1, 127,0);
        tracep->declArray(c+1414,"riscv_soc core d_cache SRAM_2 bwen", false,-1, 127,0);
        tracep->declBit(c+1431,"riscv_soc core d_cache SRAM_2 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc core d_cache SRAM_3 clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core d_cache SRAM_3 reset", false,-1);
        tracep->declBus(c+1391,"riscv_soc core d_cache SRAM_3 io_addr", false,-1, 5,0);
        tracep->declBit(c+1386,"riscv_soc core d_cache SRAM_3 io_wen", false,-1);
        tracep->declArray(c+3278,"riscv_soc core d_cache SRAM_3 io_wmask", false,-1, 127,0);
        tracep->declArray(c+1377,"riscv_soc core d_cache SRAM_3 io_wdata", false,-1, 127,0);
        tracep->declArray(c+1392,"riscv_soc core d_cache SRAM_3 io_rdata", false,-1, 127,0);
        tracep->declArray(c+1392,"riscv_soc core d_cache SRAM_3 Q", false,-1, 127,0);
        tracep->declArray(c+2225,"riscv_soc core d_cache SRAM_3 sram_0", false,-1, 127,0);
        tracep->declArray(c+2229,"riscv_soc core d_cache SRAM_3 sram_1", false,-1, 127,0);
        tracep->declArray(c+2233,"riscv_soc core d_cache SRAM_3 sram_2", false,-1, 127,0);
        tracep->declArray(c+2237,"riscv_soc core d_cache SRAM_3 sram_3", false,-1, 127,0);
        tracep->declArray(c+2241,"riscv_soc core d_cache SRAM_3 sram_4", false,-1, 127,0);
        tracep->declArray(c+2245,"riscv_soc core d_cache SRAM_3 sram_5", false,-1, 127,0);
        tracep->declArray(c+2249,"riscv_soc core d_cache SRAM_3 sram_6", false,-1, 127,0);
        tracep->declArray(c+2253,"riscv_soc core d_cache SRAM_3 sram_7", false,-1, 127,0);
        tracep->declArray(c+2257,"riscv_soc core d_cache SRAM_3 sram_8", false,-1, 127,0);
        tracep->declArray(c+2261,"riscv_soc core d_cache SRAM_3 sram_9", false,-1, 127,0);
        tracep->declArray(c+2265,"riscv_soc core d_cache SRAM_3 sram_10", false,-1, 127,0);
        tracep->declArray(c+2269,"riscv_soc core d_cache SRAM_3 sram_11", false,-1, 127,0);
        tracep->declArray(c+2273,"riscv_soc core d_cache SRAM_3 sram_12", false,-1, 127,0);
        tracep->declArray(c+2277,"riscv_soc core d_cache SRAM_3 sram_13", false,-1, 127,0);
        tracep->declArray(c+2281,"riscv_soc core d_cache SRAM_3 sram_14", false,-1, 127,0);
        tracep->declArray(c+2285,"riscv_soc core d_cache SRAM_3 sram_15", false,-1, 127,0);
        tracep->declArray(c+2289,"riscv_soc core d_cache SRAM_3 sram_16", false,-1, 127,0);
        tracep->declArray(c+2293,"riscv_soc core d_cache SRAM_3 sram_17", false,-1, 127,0);
        tracep->declArray(c+2297,"riscv_soc core d_cache SRAM_3 sram_18", false,-1, 127,0);
        tracep->declArray(c+2301,"riscv_soc core d_cache SRAM_3 sram_19", false,-1, 127,0);
        tracep->declArray(c+2305,"riscv_soc core d_cache SRAM_3 sram_20", false,-1, 127,0);
        tracep->declArray(c+2309,"riscv_soc core d_cache SRAM_3 sram_21", false,-1, 127,0);
        tracep->declArray(c+2313,"riscv_soc core d_cache SRAM_3 sram_22", false,-1, 127,0);
        tracep->declArray(c+2317,"riscv_soc core d_cache SRAM_3 sram_23", false,-1, 127,0);
        tracep->declArray(c+2321,"riscv_soc core d_cache SRAM_3 sram_24", false,-1, 127,0);
        tracep->declArray(c+2325,"riscv_soc core d_cache SRAM_3 sram_25", false,-1, 127,0);
        tracep->declArray(c+2329,"riscv_soc core d_cache SRAM_3 sram_26", false,-1, 127,0);
        tracep->declArray(c+2333,"riscv_soc core d_cache SRAM_3 sram_27", false,-1, 127,0);
        tracep->declArray(c+2337,"riscv_soc core d_cache SRAM_3 sram_28", false,-1, 127,0);
        tracep->declArray(c+2341,"riscv_soc core d_cache SRAM_3 sram_29", false,-1, 127,0);
        tracep->declArray(c+2345,"riscv_soc core d_cache SRAM_3 sram_30", false,-1, 127,0);
        tracep->declArray(c+2349,"riscv_soc core d_cache SRAM_3 sram_31", false,-1, 127,0);
        tracep->declArray(c+2353,"riscv_soc core d_cache SRAM_3 sram_32", false,-1, 127,0);
        tracep->declArray(c+2357,"riscv_soc core d_cache SRAM_3 sram_33", false,-1, 127,0);
        tracep->declArray(c+2361,"riscv_soc core d_cache SRAM_3 sram_34", false,-1, 127,0);
        tracep->declArray(c+2365,"riscv_soc core d_cache SRAM_3 sram_35", false,-1, 127,0);
        tracep->declArray(c+2369,"riscv_soc core d_cache SRAM_3 sram_36", false,-1, 127,0);
        tracep->declArray(c+2373,"riscv_soc core d_cache SRAM_3 sram_37", false,-1, 127,0);
        tracep->declArray(c+2377,"riscv_soc core d_cache SRAM_3 sram_38", false,-1, 127,0);
        tracep->declArray(c+2381,"riscv_soc core d_cache SRAM_3 sram_39", false,-1, 127,0);
        tracep->declArray(c+2385,"riscv_soc core d_cache SRAM_3 sram_40", false,-1, 127,0);
        tracep->declArray(c+2389,"riscv_soc core d_cache SRAM_3 sram_41", false,-1, 127,0);
        tracep->declArray(c+2393,"riscv_soc core d_cache SRAM_3 sram_42", false,-1, 127,0);
        tracep->declArray(c+2397,"riscv_soc core d_cache SRAM_3 sram_43", false,-1, 127,0);
        tracep->declArray(c+2401,"riscv_soc core d_cache SRAM_3 sram_44", false,-1, 127,0);
        tracep->declArray(c+2405,"riscv_soc core d_cache SRAM_3 sram_45", false,-1, 127,0);
        tracep->declArray(c+2409,"riscv_soc core d_cache SRAM_3 sram_46", false,-1, 127,0);
        tracep->declArray(c+2413,"riscv_soc core d_cache SRAM_3 sram_47", false,-1, 127,0);
        tracep->declArray(c+2417,"riscv_soc core d_cache SRAM_3 sram_48", false,-1, 127,0);
        tracep->declArray(c+2421,"riscv_soc core d_cache SRAM_3 sram_49", false,-1, 127,0);
        tracep->declArray(c+2425,"riscv_soc core d_cache SRAM_3 sram_50", false,-1, 127,0);
        tracep->declArray(c+2429,"riscv_soc core d_cache SRAM_3 sram_51", false,-1, 127,0);
        tracep->declArray(c+2433,"riscv_soc core d_cache SRAM_3 sram_52", false,-1, 127,0);
        tracep->declArray(c+2437,"riscv_soc core d_cache SRAM_3 sram_53", false,-1, 127,0);
        tracep->declArray(c+2441,"riscv_soc core d_cache SRAM_3 sram_54", false,-1, 127,0);
        tracep->declArray(c+2445,"riscv_soc core d_cache SRAM_3 sram_55", false,-1, 127,0);
        tracep->declArray(c+2449,"riscv_soc core d_cache SRAM_3 sram_56", false,-1, 127,0);
        tracep->declArray(c+2453,"riscv_soc core d_cache SRAM_3 sram_57", false,-1, 127,0);
        tracep->declArray(c+2457,"riscv_soc core d_cache SRAM_3 sram_58", false,-1, 127,0);
        tracep->declArray(c+2461,"riscv_soc core d_cache SRAM_3 sram_59", false,-1, 127,0);
        tracep->declArray(c+2465,"riscv_soc core d_cache SRAM_3 sram_60", false,-1, 127,0);
        tracep->declArray(c+2469,"riscv_soc core d_cache SRAM_3 sram_61", false,-1, 127,0);
        tracep->declArray(c+2473,"riscv_soc core d_cache SRAM_3 sram_62", false,-1, 127,0);
        tracep->declArray(c+2477,"riscv_soc core d_cache SRAM_3 sram_63", false,-1, 127,0);
        tracep->declArray(c+3282,"riscv_soc core d_cache SRAM_3 bwen", false,-1, 127,0);
        tracep->declBit(c+1431,"riscv_soc core d_cache SRAM_3 wen", false,-1);
        tracep->declBit(c+3195,"riscv_soc core cross_bar clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core cross_bar reset", false,-1);
        tracep->declBit(c+107,"riscv_soc core cross_bar io_ICache_bus_r_valid", false,-1);
        tracep->declQuad(c+108,"riscv_soc core cross_bar io_ICache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_ICache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+110,"riscv_soc core cross_bar io_ICache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+111,"riscv_soc core cross_bar io_ICache_bus_r_ready", false,-1);
        tracep->declBit(c+122,"riscv_soc core cross_bar io_DCache_bus_w_ready", false,-1);
        tracep->declBit(c+123,"riscv_soc core cross_bar io_DCache_bus_w_valid", false,-1);
        tracep->declQuad(c+124,"riscv_soc core cross_bar io_DCache_bus_w_bits_waddr", false,-1, 63,0);
        tracep->declQuad(c+126,"riscv_soc core cross_bar io_DCache_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+128,"riscv_soc core cross_bar io_DCache_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+130,"riscv_soc core cross_bar io_DCache_bus_b_valid", false,-1);
        tracep->declBit(c+131,"riscv_soc core cross_bar io_DCache_bus_r_valid", false,-1);
        tracep->declQuad(c+132,"riscv_soc core cross_bar io_DCache_bus_r_bits_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_DCache_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+134,"riscv_soc core cross_bar io_DCache_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+135,"riscv_soc core cross_bar io_DCache_bus_r_ready", false,-1);
        tracep->declBit(c+136,"riscv_soc core cross_bar io_bus1_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core cross_bar io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core cross_bar io_bus1_ready", false,-1);
        tracep->declBit(c+138,"riscv_soc core cross_bar io_bus2_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core cross_bar io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+139,"riscv_soc core cross_bar io_bus2_ready", false,-1);
        tracep->declBit(c+1,"riscv_soc core cross_bar io_AXI_Bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc core cross_bar io_AXI_Bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core cross_bar io_AXI_Bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc core cross_bar io_AXI_Bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc core cross_bar io_AXI_Bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc core cross_bar io_AXI_Bus_w_bits_wlast", false,-1);
        tracep->declBit(c+3277,"riscv_soc core cross_bar io_AXI_Bus_b_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc core cross_bar io_AXI_Bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc core cross_bar io_AXI_Bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc core cross_bar io_AXI_Bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc core cross_bar io_AXI_Bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc core cross_bar io_AXI_Bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc core cross_bar io_AXI_Bus_r_bits_rlast", false,-1);
        tracep->declBit(c+2481,"riscv_soc core cross_bar w_locked", false,-1);
        tracep->declBus(c+2482,"riscv_soc core cross_bar w_lockId", false,-1, 1,0);
        tracep->declBus(c+2483,"riscv_soc core cross_bar w_chosen", false,-1, 1,0);
        tracep->declBus(c+2484,"riscv_soc core cross_bar reg_r_cnt", false,-1, 1,0);
        tracep->declBit(c+2485,"riscv_soc core cross_bar r_locked", false,-1);
        tracep->declBus(c+2486,"riscv_soc core cross_bar r_lockId", false,-1, 1,0);
        tracep->declBus(c+2487,"riscv_soc core cross_bar r_chosen", false,-1, 1,0);
        tracep->declBit(c+2488,"riscv_soc core cross_bar reg_aw_ok", false,-1);
        tracep->declBit(c+2489,"riscv_soc core cross_bar reg_ar_ok", false,-1);
        tracep->declBit(c+140,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_ready", false,-1);
        tracep->declBit(c+141,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core cross_bar_1 io_fetch_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core cross_bar_1 io_fetch_cpu_data_ready", false,-1);
        tracep->declBit(c+142,"riscv_soc core cross_bar_1 io_fetch_cpu_data_valid", false,-1);
        tracep->declQuad(c+143,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core cross_bar_1 io_fetch_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+147,"riscv_soc core cross_bar_1 io_wb_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1 io_wb_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core cross_bar_1 io_wb_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_1 io_wb_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core cross_bar_1 io_wb_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1 io_wb_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core cross_bar_1 io_wb_ready", false,-1);
        tracep->declBit(c+96,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_ready", false,-1);
        tracep->declBit(c+97,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core cross_bar_1 io_ICache_cpu_raddr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_ready", false,-1);
        tracep->declBit(c+101,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_valid", false,-1);
        tracep->declQuad(c+102,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_data", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core cross_bar_1 io_ICache_cpu_rdata_bits_pc", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core cross_bar_1 io_DCache_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1 io_DCache_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core cross_bar_1 io_DCache_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_1 io_DCache_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core cross_bar_1 io_DCache_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1 io_DCache_bits_is_w", false,-1);
        tracep->declBit(c+121,"riscv_soc core cross_bar_1 io_DCache_ready", false,-1);
        tracep->declBit(c+136,"riscv_soc core cross_bar_1 io_bus1_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core cross_bar_1 io_bus1_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus1_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+137,"riscv_soc core cross_bar_1 io_bus1_ready", false,-1);
        tracep->declBit(c+138,"riscv_soc core cross_bar_1 io_bus2_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1 io_bus2_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core cross_bar_1 io_bus2_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_1 io_bus2_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core cross_bar_1 io_bus2_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1 io_bus2_bits_is_w", false,-1);
        tracep->declBit(c+139,"riscv_soc core cross_bar_1 io_bus2_ready", false,-1);
        tracep->declBit(c+151,"riscv_soc core cross_bar_1 io_clint_bus_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core cross_bar_1 io_clint_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core cross_bar_1 io_clint_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core cross_bar_1 io_clint_bus_bits_wdata", false,-1, 63,0);
        tracep->declBit(c+120,"riscv_soc core cross_bar_1 io_clint_bus_bits_is_w", false,-1);
        tracep->declBit(c+154,"riscv_soc core cross_bar_1 io_clint_bus_ready", false,-1);
        tracep->declBit(c+2490,"riscv_soc core cross_bar_1 fetch_low_address", false,-1);
        tracep->declBit(c+2491,"riscv_soc core cross_bar_1 low_address", false,-1);
        tracep->declBit(c+2492,"riscv_soc core cross_bar_1 not_clint", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch reset", false,-1);
        tracep->declBit(c+155,"riscv_soc core fetch io_br_info_valid", false,-1);
        tracep->declBit(c+156,"riscv_soc core fetch io_br_info_mispredict", false,-1);
        tracep->declQuad(c+157,"riscv_soc core fetch io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core fetch io_br_info_taken", false,-1);
        tracep->declQuad(c+160,"riscv_soc core fetch io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core fetch io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core fetch io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declQuad(c+165,"riscv_soc core fetch io_next_pc", false,-1, 63,0);
        tracep->declBit(c+167,"riscv_soc core fetch io_flush", false,-1);
        tracep->declBit(c+140,"riscv_soc core fetch io_cpu_addr_ready", false,-1);
        tracep->declBit(c+141,"riscv_soc core fetch io_cpu_addr_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core fetch io_cpu_addr_bits_addr", false,-1, 63,0);
        tracep->declBit(c+100,"riscv_soc core fetch io_cpu_data_ready", false,-1);
        tracep->declBit(c+142,"riscv_soc core fetch io_cpu_data_valid", false,-1);
        tracep->declQuad(c+143,"riscv_soc core fetch io_cpu_data_bits_data", false,-1, 63,0);
        tracep->declQuad(c+145,"riscv_soc core fetch io_cpu_data_bits_pc", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core fetch io_put_pc_ready", false,-1);
        tracep->declBit(c+169,"riscv_soc core fetch io_put_pc_valid", false,-1);
        tracep->declBus(c+170,"riscv_soc core fetch io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+171,"riscv_soc core fetch io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core fetch io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+95,"riscv_soc core fetch io_out_flush", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch ibuf_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch ibuf_reset", false,-1);
        tracep->declBit(c+167,"riscv_soc core fetch ibuf_io_flush", false,-1);
        tracep->declBit(c+100,"riscv_soc core fetch ibuf_io_cache_buf_ready", false,-1);
        tracep->declBit(c+2493,"riscv_soc core fetch ibuf_io_cache_buf_valid", false,-1);
        tracep->declQuad(c+145,"riscv_soc core fetch ibuf_io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+2494,"riscv_soc core fetch ibuf_io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+2495,"riscv_soc core fetch ibuf_io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+168,"riscv_soc core fetch ibuf_io_put_pc_ready", false,-1);
        tracep->declBit(c+169,"riscv_soc core fetch ibuf_io_put_pc_valid", false,-1);
        tracep->declBus(c+170,"riscv_soc core fetch ibuf_io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+171,"riscv_soc core fetch ibuf_io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core fetch ibuf_io_put_pc_bits_is_pre", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch br_predictor_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch br_predictor_reset", false,-1);
        tracep->declBit(c+155,"riscv_soc core fetch br_predictor_io_br_info_valid", false,-1);
        tracep->declBit(c+156,"riscv_soc core fetch br_predictor_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+157,"riscv_soc core fetch br_predictor_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core fetch br_predictor_io_br_info_taken", false,-1);
        tracep->declQuad(c+160,"riscv_soc core fetch br_predictor_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core fetch br_predictor_io_pc", false,-1, 63,0);
        tracep->declQuad(c+2496,"riscv_soc core fetch br_predictor_io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+2498,"riscv_soc core fetch br_predictor_io_pre_valid", false,-1);
        tracep->declQuad(c+98,"riscv_soc core fetch reg_pc_0", false,-1, 63,0);
        tracep->declBit(c+2499,"riscv_soc core fetch reg_flush", false,-1);
        tracep->declQuad(c+2500,"riscv_soc core fetch reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+141,"riscv_soc core fetch reg_bus_valid", false,-1);
        tracep->declBus(c+2502,"riscv_soc core fetch pre_info_head", false,-1, 1,0);
        tracep->declBus(c+2503,"riscv_soc core fetch pre_info_tail", false,-1, 1,0);
        tracep->declQuad(c+2504,"riscv_soc core fetch pre_info_fifo_0", false,-1, 63,0);
        tracep->declQuad(c+2506,"riscv_soc core fetch pre_info_fifo_1", false,-1, 63,0);
        tracep->declQuad(c+2508,"riscv_soc core fetch pre_info_fifo_2", false,-1, 63,0);
        tracep->declQuad(c+2510,"riscv_soc core fetch pre_info_fifo_3", false,-1, 63,0);
        tracep->declBit(c+2512,"riscv_soc core fetch pre_enq", false,-1);
        tracep->declBus(c+2513,"riscv_soc core fetch is_pre_head", false,-1, 1,0);
        tracep->declBus(c+2514,"riscv_soc core fetch is_pre_tail", false,-1, 1,0);
        tracep->declBit(c+2515,"riscv_soc core fetch is_pre_fifo_0", false,-1);
        tracep->declBit(c+2516,"riscv_soc core fetch is_pre_fifo_1", false,-1);
        tracep->declBit(c+2517,"riscv_soc core fetch is_pre_fifo_2", false,-1);
        tracep->declBit(c+2518,"riscv_soc core fetch is_pre_fifo_3", false,-1);
        tracep->declBit(c+3195,"riscv_soc core fetch ibuf clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch ibuf reset", false,-1);
        tracep->declBit(c+167,"riscv_soc core fetch ibuf io_flush", false,-1);
        tracep->declBit(c+100,"riscv_soc core fetch ibuf io_cache_buf_ready", false,-1);
        tracep->declBit(c+2493,"riscv_soc core fetch ibuf io_cache_buf_valid", false,-1);
        tracep->declQuad(c+145,"riscv_soc core fetch ibuf io_cache_buf_bits_pc", false,-1, 63,0);
        tracep->declBus(c+2494,"riscv_soc core fetch ibuf io_cache_buf_bits_inst", false,-1, 31,0);
        tracep->declBit(c+2495,"riscv_soc core fetch ibuf io_cache_buf_bits_is_pre", false,-1);
        tracep->declBit(c+168,"riscv_soc core fetch ibuf io_put_pc_ready", false,-1);
        tracep->declBit(c+169,"riscv_soc core fetch ibuf io_put_pc_valid", false,-1);
        tracep->declBus(c+170,"riscv_soc core fetch ibuf io_put_pc_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+171,"riscv_soc core fetch ibuf io_put_pc_bits_pc", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core fetch ibuf io_put_pc_bits_is_pre", false,-1);
        tracep->declQuad(c+2519,"riscv_soc core fetch ibuf ibuf_pc_0", false,-1, 63,0);
        tracep->declQuad(c+2521,"riscv_soc core fetch ibuf ibuf_pc_1", false,-1, 63,0);
        tracep->declQuad(c+2523,"riscv_soc core fetch ibuf ibuf_pc_2", false,-1, 63,0);
        tracep->declQuad(c+2525,"riscv_soc core fetch ibuf ibuf_pc_3", false,-1, 63,0);
        tracep->declBus(c+2527,"riscv_soc core fetch ibuf ibuf_inst_0", false,-1, 31,0);
        tracep->declBus(c+2528,"riscv_soc core fetch ibuf ibuf_inst_1", false,-1, 31,0);
        tracep->declBus(c+2529,"riscv_soc core fetch ibuf ibuf_inst_2", false,-1, 31,0);
        tracep->declBus(c+2530,"riscv_soc core fetch ibuf ibuf_inst_3", false,-1, 31,0);
        tracep->declBit(c+2531,"riscv_soc core fetch ibuf ibuf_is_pre_0", false,-1);
        tracep->declBit(c+2532,"riscv_soc core fetch ibuf ibuf_is_pre_1", false,-1);
        tracep->declBit(c+2533,"riscv_soc core fetch ibuf ibuf_is_pre_2", false,-1);
        tracep->declBit(c+2534,"riscv_soc core fetch ibuf ibuf_is_pre_3", false,-1);
        tracep->declBit(c+2535,"riscv_soc core fetch ibuf ibuf_valid_0", false,-1);
        tracep->declBit(c+2536,"riscv_soc core fetch ibuf ibuf_valid_1", false,-1);
        tracep->declBit(c+2537,"riscv_soc core fetch ibuf ibuf_valid_2", false,-1);
        tracep->declBit(c+2538,"riscv_soc core fetch ibuf ibuf_valid_3", false,-1);
        tracep->declBus(c+2539,"riscv_soc core fetch ibuf reg_head", false,-1, 1,0);
        tracep->declBus(c+2540,"riscv_soc core fetch ibuf reg_tail", false,-1, 1,0);
        tracep->declBus(c+2541,"riscv_soc core fetch ibuf reg_ibuf_size", false,-1, 2,0);
        tracep->declBit(c+2542,"riscv_soc core fetch ibuf enq_size", false,-1);
        tracep->declBit(c+2543,"riscv_soc core fetch ibuf can_deq", false,-1);
        tracep->declBus(c+2544,"riscv_soc core fetch ibuf result_size", false,-1, 2,0);
        tracep->declBit(c+3195,"riscv_soc core fetch br_predictor clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core fetch br_predictor reset", false,-1);
        tracep->declBit(c+155,"riscv_soc core fetch br_predictor io_br_info_valid", false,-1);
        tracep->declBit(c+156,"riscv_soc core fetch br_predictor io_br_info_mispredict", false,-1);
        tracep->declQuad(c+157,"riscv_soc core fetch br_predictor io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core fetch br_predictor io_br_info_taken", false,-1);
        tracep->declQuad(c+160,"riscv_soc core fetch br_predictor io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core fetch br_predictor io_pc", false,-1, 63,0);
        tracep->declQuad(c+2496,"riscv_soc core fetch br_predictor io_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+2498,"riscv_soc core fetch br_predictor io_pre_valid", false,-1);
        tracep->declArray(c+2545,"riscv_soc core fetch br_predictor BTB_0", false,-1, 127,0);
        tracep->declArray(c+2549,"riscv_soc core fetch br_predictor BTB_1", false,-1, 127,0);
        tracep->declArray(c+2553,"riscv_soc core fetch br_predictor BTB_2", false,-1, 127,0);
        tracep->declArray(c+2557,"riscv_soc core fetch br_predictor BTB_3", false,-1, 127,0);
        tracep->declArray(c+2561,"riscv_soc core fetch br_predictor BTB_4", false,-1, 127,0);
        tracep->declArray(c+2565,"riscv_soc core fetch br_predictor BTB_5", false,-1, 127,0);
        tracep->declArray(c+2569,"riscv_soc core fetch br_predictor BTB_6", false,-1, 127,0);
        tracep->declArray(c+2573,"riscv_soc core fetch br_predictor BTB_7", false,-1, 127,0);
        tracep->declArray(c+2577,"riscv_soc core fetch br_predictor BTB_8", false,-1, 127,0);
        tracep->declArray(c+2581,"riscv_soc core fetch br_predictor BTB_9", false,-1, 127,0);
        tracep->declArray(c+2585,"riscv_soc core fetch br_predictor BTB_10", false,-1, 127,0);
        tracep->declArray(c+2589,"riscv_soc core fetch br_predictor BTB_11", false,-1, 127,0);
        tracep->declArray(c+2593,"riscv_soc core fetch br_predictor BTB_12", false,-1, 127,0);
        tracep->declArray(c+2597,"riscv_soc core fetch br_predictor BTB_13", false,-1, 127,0);
        tracep->declArray(c+2601,"riscv_soc core fetch br_predictor BTB_14", false,-1, 127,0);
        tracep->declArray(c+2605,"riscv_soc core fetch br_predictor BTB_15", false,-1, 127,0);
        tracep->declArray(c+2609,"riscv_soc core fetch br_predictor BTB_16", false,-1, 127,0);
        tracep->declArray(c+2613,"riscv_soc core fetch br_predictor BTB_17", false,-1, 127,0);
        tracep->declArray(c+2617,"riscv_soc core fetch br_predictor BTB_18", false,-1, 127,0);
        tracep->declArray(c+2621,"riscv_soc core fetch br_predictor BTB_19", false,-1, 127,0);
        tracep->declArray(c+2625,"riscv_soc core fetch br_predictor BTB_20", false,-1, 127,0);
        tracep->declArray(c+2629,"riscv_soc core fetch br_predictor BTB_21", false,-1, 127,0);
        tracep->declArray(c+2633,"riscv_soc core fetch br_predictor BTB_22", false,-1, 127,0);
        tracep->declArray(c+2637,"riscv_soc core fetch br_predictor BTB_23", false,-1, 127,0);
        tracep->declArray(c+2641,"riscv_soc core fetch br_predictor BTB_24", false,-1, 127,0);
        tracep->declArray(c+2645,"riscv_soc core fetch br_predictor BTB_25", false,-1, 127,0);
        tracep->declArray(c+2649,"riscv_soc core fetch br_predictor BTB_26", false,-1, 127,0);
        tracep->declArray(c+2653,"riscv_soc core fetch br_predictor BTB_27", false,-1, 127,0);
        tracep->declArray(c+2657,"riscv_soc core fetch br_predictor BTB_28", false,-1, 127,0);
        tracep->declArray(c+2661,"riscv_soc core fetch br_predictor BTB_29", false,-1, 127,0);
        tracep->declArray(c+2665,"riscv_soc core fetch br_predictor BTB_30", false,-1, 127,0);
        tracep->declArray(c+2669,"riscv_soc core fetch br_predictor BTB_31", false,-1, 127,0);
        tracep->declArray(c+2673,"riscv_soc core fetch br_predictor BTB_32", false,-1, 127,0);
        tracep->declArray(c+2677,"riscv_soc core fetch br_predictor BTB_33", false,-1, 127,0);
        tracep->declArray(c+2681,"riscv_soc core fetch br_predictor BTB_34", false,-1, 127,0);
        tracep->declArray(c+2685,"riscv_soc core fetch br_predictor BTB_35", false,-1, 127,0);
        tracep->declArray(c+2689,"riscv_soc core fetch br_predictor BTB_36", false,-1, 127,0);
        tracep->declArray(c+2693,"riscv_soc core fetch br_predictor BTB_37", false,-1, 127,0);
        tracep->declArray(c+2697,"riscv_soc core fetch br_predictor BTB_38", false,-1, 127,0);
        tracep->declArray(c+2701,"riscv_soc core fetch br_predictor BTB_39", false,-1, 127,0);
        tracep->declArray(c+2705,"riscv_soc core fetch br_predictor BTB_40", false,-1, 127,0);
        tracep->declArray(c+2709,"riscv_soc core fetch br_predictor BTB_41", false,-1, 127,0);
        tracep->declArray(c+2713,"riscv_soc core fetch br_predictor BTB_42", false,-1, 127,0);
        tracep->declArray(c+2717,"riscv_soc core fetch br_predictor BTB_43", false,-1, 127,0);
        tracep->declArray(c+2721,"riscv_soc core fetch br_predictor BTB_44", false,-1, 127,0);
        tracep->declArray(c+2725,"riscv_soc core fetch br_predictor BTB_45", false,-1, 127,0);
        tracep->declArray(c+2729,"riscv_soc core fetch br_predictor BTB_46", false,-1, 127,0);
        tracep->declArray(c+2733,"riscv_soc core fetch br_predictor BTB_47", false,-1, 127,0);
        tracep->declArray(c+2737,"riscv_soc core fetch br_predictor BTB_48", false,-1, 127,0);
        tracep->declArray(c+2741,"riscv_soc core fetch br_predictor BTB_49", false,-1, 127,0);
        tracep->declArray(c+2745,"riscv_soc core fetch br_predictor BTB_50", false,-1, 127,0);
        tracep->declArray(c+2749,"riscv_soc core fetch br_predictor BTB_51", false,-1, 127,0);
        tracep->declArray(c+2753,"riscv_soc core fetch br_predictor BTB_52", false,-1, 127,0);
        tracep->declArray(c+2757,"riscv_soc core fetch br_predictor BTB_53", false,-1, 127,0);
        tracep->declArray(c+2761,"riscv_soc core fetch br_predictor BTB_54", false,-1, 127,0);
        tracep->declArray(c+2765,"riscv_soc core fetch br_predictor BTB_55", false,-1, 127,0);
        tracep->declArray(c+2769,"riscv_soc core fetch br_predictor BTB_56", false,-1, 127,0);
        tracep->declArray(c+2773,"riscv_soc core fetch br_predictor BTB_57", false,-1, 127,0);
        tracep->declArray(c+2777,"riscv_soc core fetch br_predictor BTB_58", false,-1, 127,0);
        tracep->declArray(c+2781,"riscv_soc core fetch br_predictor BTB_59", false,-1, 127,0);
        tracep->declArray(c+2785,"riscv_soc core fetch br_predictor BTB_60", false,-1, 127,0);
        tracep->declArray(c+2789,"riscv_soc core fetch br_predictor BTB_61", false,-1, 127,0);
        tracep->declArray(c+2793,"riscv_soc core fetch br_predictor BTB_62", false,-1, 127,0);
        tracep->declArray(c+2797,"riscv_soc core fetch br_predictor BTB_63", false,-1, 127,0);
        tracep->declQuad(c+2801,"riscv_soc core fetch br_predictor RAS_0", false,-1, 63,0);
        tracep->declQuad(c+2803,"riscv_soc core fetch br_predictor RAS_1", false,-1, 63,0);
        tracep->declQuad(c+2805,"riscv_soc core fetch br_predictor RAS_2", false,-1, 63,0);
        tracep->declQuad(c+2807,"riscv_soc core fetch br_predictor RAS_3", false,-1, 63,0);
        tracep->declQuad(c+2809,"riscv_soc core fetch br_predictor RAS_4", false,-1, 63,0);
        tracep->declQuad(c+2811,"riscv_soc core fetch br_predictor RAS_5", false,-1, 63,0);
        tracep->declBus(c+2813,"riscv_soc core fetch br_predictor PHT_0", false,-1, 1,0);
        tracep->declBus(c+2814,"riscv_soc core fetch br_predictor PHT_1", false,-1, 1,0);
        tracep->declBus(c+2815,"riscv_soc core fetch br_predictor PHT_2", false,-1, 1,0);
        tracep->declBus(c+2816,"riscv_soc core fetch br_predictor PHT_3", false,-1, 1,0);
        tracep->declBus(c+2817,"riscv_soc core fetch br_predictor PHT_4", false,-1, 1,0);
        tracep->declBus(c+2818,"riscv_soc core fetch br_predictor PHT_5", false,-1, 1,0);
        tracep->declBus(c+2819,"riscv_soc core fetch br_predictor PHT_6", false,-1, 1,0);
        tracep->declBus(c+2820,"riscv_soc core fetch br_predictor PHT_7", false,-1, 1,0);
        tracep->declBus(c+2821,"riscv_soc core fetch br_predictor PHT_8", false,-1, 1,0);
        tracep->declBus(c+2822,"riscv_soc core fetch br_predictor PHT_9", false,-1, 1,0);
        tracep->declBus(c+2823,"riscv_soc core fetch br_predictor PHT_10", false,-1, 1,0);
        tracep->declBus(c+2824,"riscv_soc core fetch br_predictor PHT_11", false,-1, 1,0);
        tracep->declBus(c+2825,"riscv_soc core fetch br_predictor PHT_12", false,-1, 1,0);
        tracep->declBus(c+2826,"riscv_soc core fetch br_predictor PHT_13", false,-1, 1,0);
        tracep->declBus(c+2827,"riscv_soc core fetch br_predictor PHT_14", false,-1, 1,0);
        tracep->declBus(c+2828,"riscv_soc core fetch br_predictor PHT_15", false,-1, 1,0);
        tracep->declBus(c+2829,"riscv_soc core fetch br_predictor PHT_16", false,-1, 1,0);
        tracep->declBus(c+2830,"riscv_soc core fetch br_predictor PHT_17", false,-1, 1,0);
        tracep->declBus(c+2831,"riscv_soc core fetch br_predictor PHT_18", false,-1, 1,0);
        tracep->declBus(c+2832,"riscv_soc core fetch br_predictor PHT_19", false,-1, 1,0);
        tracep->declBus(c+2833,"riscv_soc core fetch br_predictor PHT_20", false,-1, 1,0);
        tracep->declBus(c+2834,"riscv_soc core fetch br_predictor PHT_21", false,-1, 1,0);
        tracep->declBus(c+2835,"riscv_soc core fetch br_predictor PHT_22", false,-1, 1,0);
        tracep->declBus(c+2836,"riscv_soc core fetch br_predictor PHT_23", false,-1, 1,0);
        tracep->declBus(c+2837,"riscv_soc core fetch br_predictor PHT_24", false,-1, 1,0);
        tracep->declBus(c+2838,"riscv_soc core fetch br_predictor PHT_25", false,-1, 1,0);
        tracep->declBus(c+2839,"riscv_soc core fetch br_predictor PHT_26", false,-1, 1,0);
        tracep->declBus(c+2840,"riscv_soc core fetch br_predictor PHT_27", false,-1, 1,0);
        tracep->declBus(c+2841,"riscv_soc core fetch br_predictor PHT_28", false,-1, 1,0);
        tracep->declBus(c+2842,"riscv_soc core fetch br_predictor PHT_29", false,-1, 1,0);
        tracep->declBus(c+2843,"riscv_soc core fetch br_predictor PHT_30", false,-1, 1,0);
        tracep->declBus(c+2844,"riscv_soc core fetch br_predictor PHT_31", false,-1, 1,0);
        tracep->declBus(c+2845,"riscv_soc core fetch br_predictor PHT_32", false,-1, 1,0);
        tracep->declBus(c+2846,"riscv_soc core fetch br_predictor PHT_33", false,-1, 1,0);
        tracep->declBus(c+2847,"riscv_soc core fetch br_predictor PHT_34", false,-1, 1,0);
        tracep->declBus(c+2848,"riscv_soc core fetch br_predictor PHT_35", false,-1, 1,0);
        tracep->declBus(c+2849,"riscv_soc core fetch br_predictor PHT_36", false,-1, 1,0);
        tracep->declBus(c+2850,"riscv_soc core fetch br_predictor PHT_37", false,-1, 1,0);
        tracep->declBus(c+2851,"riscv_soc core fetch br_predictor PHT_38", false,-1, 1,0);
        tracep->declBus(c+2852,"riscv_soc core fetch br_predictor PHT_39", false,-1, 1,0);
        tracep->declBus(c+2853,"riscv_soc core fetch br_predictor PHT_40", false,-1, 1,0);
        tracep->declBus(c+2854,"riscv_soc core fetch br_predictor PHT_41", false,-1, 1,0);
        tracep->declBus(c+2855,"riscv_soc core fetch br_predictor PHT_42", false,-1, 1,0);
        tracep->declBus(c+2856,"riscv_soc core fetch br_predictor PHT_43", false,-1, 1,0);
        tracep->declBus(c+2857,"riscv_soc core fetch br_predictor PHT_44", false,-1, 1,0);
        tracep->declBus(c+2858,"riscv_soc core fetch br_predictor PHT_45", false,-1, 1,0);
        tracep->declBus(c+2859,"riscv_soc core fetch br_predictor PHT_46", false,-1, 1,0);
        tracep->declBus(c+2860,"riscv_soc core fetch br_predictor PHT_47", false,-1, 1,0);
        tracep->declBus(c+2861,"riscv_soc core fetch br_predictor PHT_48", false,-1, 1,0);
        tracep->declBus(c+2862,"riscv_soc core fetch br_predictor PHT_49", false,-1, 1,0);
        tracep->declBus(c+2863,"riscv_soc core fetch br_predictor PHT_50", false,-1, 1,0);
        tracep->declBus(c+2864,"riscv_soc core fetch br_predictor PHT_51", false,-1, 1,0);
        tracep->declBus(c+2865,"riscv_soc core fetch br_predictor PHT_52", false,-1, 1,0);
        tracep->declBus(c+2866,"riscv_soc core fetch br_predictor PHT_53", false,-1, 1,0);
        tracep->declBus(c+2867,"riscv_soc core fetch br_predictor PHT_54", false,-1, 1,0);
        tracep->declBus(c+2868,"riscv_soc core fetch br_predictor PHT_55", false,-1, 1,0);
        tracep->declBus(c+2869,"riscv_soc core fetch br_predictor PHT_56", false,-1, 1,0);
        tracep->declBus(c+2870,"riscv_soc core fetch br_predictor PHT_57", false,-1, 1,0);
        tracep->declBus(c+2871,"riscv_soc core fetch br_predictor PHT_58", false,-1, 1,0);
        tracep->declBus(c+2872,"riscv_soc core fetch br_predictor PHT_59", false,-1, 1,0);
        tracep->declBus(c+2873,"riscv_soc core fetch br_predictor PHT_60", false,-1, 1,0);
        tracep->declBus(c+2874,"riscv_soc core fetch br_predictor PHT_61", false,-1, 1,0);
        tracep->declBus(c+2875,"riscv_soc core fetch br_predictor PHT_62", false,-1, 1,0);
        tracep->declBus(c+2876,"riscv_soc core fetch br_predictor PHT_63", false,-1, 1,0);
        tracep->declBus(c+2877,"riscv_soc core fetch br_predictor reg_head", false,-1, 2,0);
        tracep->declBus(c+2878,"riscv_soc core fetch br_predictor update_index", false,-1, 5,0);
        tracep->declArray(c+2879,"riscv_soc core fetch br_predictor update_btb_data", false,-1, 122,0);
        tracep->declBus(c+2883,"riscv_soc core fetch br_predictor index", false,-1, 5,0);
        tracep->declQuad(c+2884,"riscv_soc core fetch br_predictor tag", false,-1, 55,0);
        tracep->declBit(c+2886,"riscv_soc core fetch br_predictor pht_taken", false,-1);
        tracep->declBit(c+2887,"riscv_soc core fetch br_predictor btb_valid", false,-1);
        tracep->declQuad(c+2888,"riscv_soc core fetch br_predictor btb_tag", false,-1, 55,0);
        tracep->declQuad(c+2890,"riscv_soc core fetch br_predictor btb_target_next_pc", false,-1, 63,0);
        tracep->declBus(c+2892,"riscv_soc core fetch br_predictor btb_br_type", false,-1, 1,0);
        tracep->declBit(c+2893,"riscv_soc core fetch br_predictor pre_valid", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute reset", false,-1);
        tracep->declBit(c+168,"riscv_soc core execute io_op_datas_ready", false,-1);
        tracep->declBit(c+174,"riscv_soc core execute io_op_datas_valid", false,-1);
        tracep->declBus(c+175,"riscv_soc core execute io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+176,"riscv_soc core execute io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+177,"riscv_soc core execute io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core execute io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core execute io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+181,"riscv_soc core execute io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+184,"riscv_soc core execute io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+186,"riscv_soc core execute io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+187,"riscv_soc core execute io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+188,"riscv_soc core execute io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+189,"riscv_soc core execute io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+190,"riscv_soc core execute io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+191,"riscv_soc core execute io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+193,"riscv_soc core execute io_irq_time_irq", false,-1);
        tracep->declBit(c+194,"riscv_soc core execute io_irq_soft_irq", false,-1);
        tracep->declQuad(c+195,"riscv_soc core execute io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core execute io_mie", false,-1, 63,0);
        tracep->declQuad(c+199,"riscv_soc core execute io_mepc", false,-1, 63,0);
        tracep->declQuad(c+201,"riscv_soc core execute io_mtvec", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core execute io_wb_valid", false,-1);
        tracep->declBus(c+204,"riscv_soc core execute io_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"riscv_soc core execute io_wb_dest_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core execute io_csr_valid", false,-1);
        tracep->declBus(c+208,"riscv_soc core execute io_csr_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+209,"riscv_soc core execute io_csr_csr_data", false,-1, 63,0);
        tracep->declBit(c+211,"riscv_soc core execute io_csr_except_is_except", false,-1);
        tracep->declBit(c+212,"riscv_soc core execute io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+213,"riscv_soc core execute io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+214,"riscv_soc core execute io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+215,"riscv_soc core execute io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+217,"riscv_soc core execute io_csr_except_pc", false,-1, 63,0);
        tracep->declBit(c+219,"riscv_soc core execute io_commit", false,-1);
        tracep->declBus(c+220,"riscv_soc core execute io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+221,"riscv_soc core execute io_difftest_peripheral", false,-1);
        tracep->declQuad(c+165,"riscv_soc core execute io_next_pc", false,-1, 63,0);
        tracep->declBit(c+167,"riscv_soc core execute io_flush", false,-1);
        tracep->declBit(c+106,"riscv_soc core execute io_fence_i", false,-1);
        tracep->declBit(c+155,"riscv_soc core execute io_br_info_valid", false,-1);
        tracep->declBit(c+156,"riscv_soc core execute io_br_info_mispredict", false,-1);
        tracep->declQuad(c+157,"riscv_soc core execute io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core execute io_br_info_taken", false,-1);
        tracep->declQuad(c+160,"riscv_soc core execute io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core execute io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core execute io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBit(c+147,"riscv_soc core execute io_bus_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core execute io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core execute io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core execute io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core execute io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core execute io_bus_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core execute io_bus_ready", false,-1);
        tracep->declBit(c+2894,"riscv_soc core execute alu_exu_io_valid", false,-1);
        tracep->declBit(c+189,"riscv_soc core execute alu_exu_io_is_pre", false,-1);
        tracep->declBit(c+2895,"riscv_soc core execute alu_exu_io_br_info_valid", false,-1);
        tracep->declBit(c+2896,"riscv_soc core execute alu_exu_io_br_info_mispredict", false,-1);
        tracep->declQuad(c+2897,"riscv_soc core execute alu_exu_io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+2899,"riscv_soc core execute alu_exu_io_br_info_taken", false,-1);
        tracep->declQuad(c+2900,"riscv_soc core execute alu_exu_io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core execute alu_exu_io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core execute alu_exu_io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core execute alu_exu_io_opType", false,-1, 2,0);
        tracep->declBus(c+176,"riscv_soc core execute alu_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2902,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+2904,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+184,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+2906,"riscv_soc core execute alu_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+2908,"riscv_soc core execute alu_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+2909,"riscv_soc core execute alu_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core execute mem_exu_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mem_exu_reset", false,-1);
        tracep->declBit(c+2911,"riscv_soc core execute mem_exu_io_valid", false,-1);
        tracep->declBus(c+176,"riscv_soc core execute mem_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2912,"riscv_soc core execute mem_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2914,"riscv_soc core execute mem_exu_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute mem_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+2916,"riscv_soc core execute mem_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2918,"riscv_soc core execute mem_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+2919,"riscv_soc core execute mem_exu_io_ready", false,-1);
        tracep->declBit(c+147,"riscv_soc core execute mem_exu_io_bus_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core execute mem_exu_io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core execute mem_exu_io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core execute mem_exu_io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core execute mem_exu_io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core execute mem_exu_io_bus_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core execute mem_exu_io_bus_ready", false,-1);
        tracep->declBit(c+221,"riscv_soc core execute mem_exu_io_difftest_peripheral", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu_reset", false,-1);
        tracep->declBit(c+2920,"riscv_soc core execute mu_exu_io_valid", false,-1);
        tracep->declBus(c+176,"riscv_soc core execute mu_exu_io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+2902,"riscv_soc core execute mu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2921,"riscv_soc core execute mu_exu_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+2923,"riscv_soc core execute mu_exu_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2925,"riscv_soc core execute mu_exu_io_dest_is_w", false,-1);
        tracep->declBit(c+2926,"riscv_soc core execute mu_exu_io_ready", false,-1);
        tracep->declBit(c+2927,"riscv_soc core execute system_exu_io_valid", false,-1);
        tracep->declBus(c+176,"riscv_soc core execute system_exu_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2928,"riscv_soc core execute system_exu_io_csr_data", false,-1, 63,0);
        tracep->declBus(c+190,"riscv_soc core execute system_exu_io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+183,"riscv_soc core execute system_exu_io_imm", false,-1, 31,0);
        tracep->declQuad(c+2912,"riscv_soc core execute system_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+199,"riscv_soc core execute system_exu_io_mepc", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core execute system_exu_io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+2928,"riscv_soc core execute system_exu_io_dst_data", false,-1, 63,0);
        tracep->declBit(c+2930,"riscv_soc core execute system_exu_io_csr_is_w", false,-1);
        tracep->declQuad(c+2931,"riscv_soc core execute system_exu_io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+2933,"riscv_soc core execute system_exu_io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+2934,"riscv_soc core execute system_exu_io_is_except", false,-1);
        tracep->declBus(c+2935,"riscv_soc core execute system_exu_io_exception", false,-1, 5,0);
        tracep->declBit(c+2936,"riscv_soc core execute system_exu_io_valid_next_pc", false,-1);
        tracep->declQuad(c+199,"riscv_soc core execute system_exu_io_next_pc", false,-1, 63,0);
        tracep->declBit(c+2937,"riscv_soc core execute in_data_valid", false,-1);
        tracep->declBit(c+168,"riscv_soc core execute ready", false,-1);
        tracep->declBus(c+2938,"riscv_soc core execute reg_valid", false,-1, 3,0);
        tracep->declBit(c+2939,"riscv_soc core execute reg_alu_valid", false,-1);
        tracep->declBit(c+2940,"riscv_soc core execute reg_mem_valid", false,-1);
        tracep->declBit(c+2941,"riscv_soc core execute reg_mu_valid", false,-1);
        tracep->declBit(c+2942,"riscv_soc core execute reg_system_valid", false,-1);
        tracep->declBus(c+2943,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declBit(c+2944,"riscv_soc core execute reg_sys_alu_w_valid", false,-1);
        tracep->declQuad(c+2945,"riscv_soc core execute reg_sys_alu_wdata", false,-1, 63,0);
        tracep->declBus(c+204,"riscv_soc core execute reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+155,"riscv_soc core execute reg_br_valid", false,-1);
        tracep->declBit(c+156,"riscv_soc core execute reg_br_mispredict", false,-1);
        tracep->declQuad(c+157,"riscv_soc core execute reg_br_pc", false,-1, 63,0);
        tracep->declBit(c+159,"riscv_soc core execute reg_taken", false,-1);
        tracep->declQuad(c+160,"riscv_soc core execute reg_br_next_pc", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv_soc core execute reg_csr_data", false,-1, 63,0);
        tracep->declBus(c+208,"riscv_soc core execute reg_csr_addr", false,-1, 11,0);
        tracep->declBit(c+2947,"riscv_soc core execute reg_csr_is_w", false,-1);
        tracep->declBit(c+2948,"riscv_soc core execute reg_is_except", false,-1);
        tracep->declBus(c+214,"riscv_soc core execute reg_exception", false,-1, 5,0);
        tracep->declBit(c+2949,"riscv_soc core execute reg_is_time_irq", false,-1);
        tracep->declBit(c+2950,"riscv_soc core execute reg_is_soft_irq", false,-1);
        tracep->declQuad(c+215,"riscv_soc core execute reg_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+217,"riscv_soc core execute reg_except_pc", false,-1, 63,0);
        tracep->declBit(c+2951,"riscv_soc core execute time_irq", false,-1);
        tracep->declBit(c+2952,"riscv_soc core execute soft_irq", false,-1);
        tracep->declBit(c+2953,"riscv_soc core execute irq", false,-1);
        tracep->declQuad(c+165,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+2954,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+2955,"riscv_soc core execute reg_fence_i", false,-1);
        tracep->declBit(c+2956,"riscv_soc core execute reg_commit", false,-1);
        tracep->declBus(c+220,"riscv_soc core execute reg_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+2894,"riscv_soc core execute alu_exu io_valid", false,-1);
        tracep->declBit(c+189,"riscv_soc core execute alu_exu io_is_pre", false,-1);
        tracep->declBit(c+2895,"riscv_soc core execute alu_exu io_br_info_valid", false,-1);
        tracep->declBit(c+2896,"riscv_soc core execute alu_exu io_br_info_mispredict", false,-1);
        tracep->declQuad(c+2897,"riscv_soc core execute alu_exu io_br_info_br_pc", false,-1, 63,0);
        tracep->declBit(c+2899,"riscv_soc core execute alu_exu io_br_info_taken", false,-1);
        tracep->declQuad(c+2900,"riscv_soc core execute alu_exu io_br_info_target_next_pc", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core execute alu_exu io_get_pre_info_valid", false,-1);
        tracep->declQuad(c+163,"riscv_soc core execute alu_exu io_get_pre_info_pre_next_pc", false,-1, 63,0);
        tracep->declBus(c+175,"riscv_soc core execute alu_exu io_opType", false,-1, 2,0);
        tracep->declBus(c+176,"riscv_soc core execute alu_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2902,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+2904,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute alu_exu io_op_imm", false,-1, 31,0);
        tracep->declQuad(c+184,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+2906,"riscv_soc core execute alu_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+2908,"riscv_soc core execute alu_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+2909,"riscv_soc core execute alu_exu io_next_pc", false,-1, 63,0);
        tracep->declBit(c+2957,"riscv_soc core execute alu_exu is_32", false,-1);
        tracep->declQuad(c+2958,"riscv_soc core execute alu_exu op_data1", false,-1, 63,0);
        tracep->declQuad(c+2960,"riscv_soc core execute alu_exu op_data2", false,-1, 63,0);
        tracep->declQuad(c+2962,"riscv_soc core execute alu_exu op_imm", false,-1, 63,0);
        tracep->declBit(c+2964,"riscv_soc core execute alu_exu rs2_is_imm", false,-1);
        tracep->declQuad(c+2965,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declBit(c+2967,"riscv_soc core execute alu_exu rs1_is_pc", false,-1);
        tracep->declBit(c+2968,"riscv_soc core execute alu_exu is_sra", false,-1);
        tracep->declQuad(c+2969,"riscv_soc core execute alu_exu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2971,"riscv_soc core execute alu_exu temp_rs2_data", false,-1, 63,0);
        tracep->declArray(c+2973,"riscv_soc core execute alu_exu add_sub_result", false,-1, 64,0);
        tracep->declBit(c+2976,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+2977,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declBus(c+2978,"riscv_soc core execute alu_exu shift_rs2_data", false,-1, 5,0);
        tracep->declArray(c+2979,"riscv_soc core execute alu_exu sll_temp", false,-1, 126,0);
        tracep->declQuad(c+2983,"riscv_soc core execute alu_exu srl_temp", false,-1, 63,0);
        tracep->declQuad(c+2985,"riscv_soc core execute alu_exu sra_temp", false,-1, 63,0);
        tracep->declQuad(c+2987,"riscv_soc core execute alu_exu sr_temp", false,-1, 63,0);
        tracep->declBus(c+2989,"riscv_soc core execute alu_exu func", false,-1, 2,0);
        tracep->declQuad(c+2990,"riscv_soc core execute alu_exu result_data", false,-1, 63,0);
        tracep->declBit(c+162,"riscv_soc core execute alu_exu is_pre", false,-1);
        tracep->declBit(c+2992,"riscv_soc core execute alu_exu is_br", false,-1);
        tracep->declBit(c+2993,"riscv_soc core execute alu_exu is_eq", false,-1);
        tracep->declQuad(c+2994,"riscv_soc core execute alu_exu temp_1", false,-1, 63,0);
        tracep->declArray(c+2996,"riscv_soc core execute alu_exu add_pc", false,-1, 64,0);
        tracep->declQuad(c+2999,"riscv_soc core execute alu_exu op_pc_4", false,-1, 63,0);
        tracep->declArray(c+3001,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declQuad(c+3004,"riscv_soc core execute alu_exu dst_data", false,-1, 63,0);
        tracep->declQuad(c+3006,"riscv_soc core execute alu_exu next_pc", false,-1, 63,0);
        tracep->declBit(c+3008,"riscv_soc core execute alu_exu valid_next_pc", false,-1);
        tracep->declBit(c+3009,"riscv_soc core execute alu_exu br_valid", false,-1);
        tracep->declBit(c+3010,"riscv_soc core execute alu_exu flush", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mem_exu clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mem_exu reset", false,-1);
        tracep->declBit(c+2911,"riscv_soc core execute mem_exu io_valid", false,-1);
        tracep->declBus(c+176,"riscv_soc core execute mem_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2912,"riscv_soc core execute mem_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2914,"riscv_soc core execute mem_exu io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core execute mem_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+2916,"riscv_soc core execute mem_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2918,"riscv_soc core execute mem_exu io_dest_is_w", false,-1);
        tracep->declBit(c+2919,"riscv_soc core execute mem_exu io_ready", false,-1);
        tracep->declBit(c+147,"riscv_soc core execute mem_exu io_bus_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core execute mem_exu io_bus_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+148,"riscv_soc core execute mem_exu io_bus_bits_rdata", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core execute mem_exu io_bus_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+119,"riscv_soc core execute mem_exu io_bus_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+120,"riscv_soc core execute mem_exu io_bus_bits_is_w", false,-1);
        tracep->declBit(c+150,"riscv_soc core execute mem_exu io_bus_ready", false,-1);
        tracep->declBit(c+221,"riscv_soc core execute mem_exu io_difftest_peripheral", false,-1);
        tracep->declQuad(c+3011,"riscv_soc core execute mem_exu imm", false,-1, 63,0);
        tracep->declBit(c+2919,"riscv_soc core execute mem_exu reg_ready", false,-1);
        tracep->declQuad(c+3013,"riscv_soc core execute mem_exu reg_bus_addr", false,-1, 63,0);
        tracep->declQuad(c+3015,"riscv_soc core execute mem_exu reg_bus_wdata", false,-1, 63,0);
        tracep->declBus(c+3017,"riscv_soc core execute mem_exu reg_bus_wstrb", false,-1, 7,0);
        tracep->declBit(c+3018,"riscv_soc core execute mem_exu reg_bus_is_w", false,-1);
        tracep->declBit(c+3019,"riscv_soc core execute mem_exu reg_bus_valid", false,-1);
        tracep->declQuad(c+2916,"riscv_soc core execute mem_exu reg_result_data", false,-1, 63,0);
        tracep->declBit(c+2918,"riscv_soc core execute mem_exu reg_w_rs_en", false,-1);
        tracep->declBus(c+3020,"riscv_soc core execute mem_exu reg_exuType", false,-1, 6,0);
        tracep->declBit(c+221,"riscv_soc core execute mem_exu reg_difftest_peripheral", false,-1);
        tracep->declQuad(c+3021,"riscv_soc core execute mem_exu mem_r_data", false,-1, 63,0);
        tracep->declQuad(c+3023,"riscv_soc core execute mem_exu mem_data_result", false,-1, 63,0);
        tracep->declQuad(c+3025,"riscv_soc core execute mem_exu mem_addr", false,-1, 63,0);
        tracep->declBit(c+3027,"riscv_soc core execute mem_exu w_mem_en", false,-1);
        tracep->declQuad(c+3028,"riscv_soc core execute mem_exu mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+3030,"riscv_soc core execute mem_exu reg_ls_state", false,-1);
        tracep->declArray(c+3031,"riscv_soc core execute mem_exu mem_w_data", false,-1, 126,0);
        tracep->declBit(c+3035,"riscv_soc core execute mem_exu chose_chancel", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu reset", false,-1);
        tracep->declBit(c+2920,"riscv_soc core execute mu_exu io_valid", false,-1);
        tracep->declBus(c+176,"riscv_soc core execute mu_exu io_exu_type", false,-1, 6,0);
        tracep->declQuad(c+2902,"riscv_soc core execute mu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2921,"riscv_soc core execute mu_exu io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+2923,"riscv_soc core execute mu_exu io_dest_data", false,-1, 63,0);
        tracep->declBit(c+2925,"riscv_soc core execute mu_exu io_dest_is_w", false,-1);
        tracep->declBit(c+2926,"riscv_soc core execute mu_exu io_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu div_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu div_reset", false,-1);
        tracep->declBit(c+3036,"riscv_soc core execute mu_exu div_io_valid", false,-1);
        tracep->declQuad(c+2902,"riscv_soc core execute mu_exu div_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2921,"riscv_soc core execute mu_exu div_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core execute mu_exu div_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+3037,"riscv_soc core execute mu_exu div_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+3039,"riscv_soc core execute mu_exu div_io_dest_is_w", false,-1);
        tracep->declBit(c+3040,"riscv_soc core execute mu_exu div_io_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu mul_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu mul_reset", false,-1);
        tracep->declBit(c+3041,"riscv_soc core execute mu_exu mul_io_valid", false,-1);
        tracep->declQuad(c+2902,"riscv_soc core execute mu_exu mul_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2921,"riscv_soc core execute mu_exu mul_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core execute mu_exu mul_io_exuType", false,-1, 6,0);
        tracep->declQuad(c+3042,"riscv_soc core execute mu_exu mul_io_dest_data", false,-1, 63,0);
        tracep->declBit(c+3044,"riscv_soc core execute mu_exu mul_io_dest_is_w", false,-1);
        tracep->declBit(c+3045,"riscv_soc core execute mu_exu mul_io_ready", false,-1);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu div clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu div reset", false,-1);
        tracep->declBit(c+3036,"riscv_soc core execute mu_exu div io_valid", false,-1);
        tracep->declQuad(c+2902,"riscv_soc core execute mu_exu div io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2921,"riscv_soc core execute mu_exu div io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core execute mu_exu div io_exuType", false,-1, 6,0);
        tracep->declQuad(c+3037,"riscv_soc core execute mu_exu div io_dest_data", false,-1, 63,0);
        tracep->declBit(c+3039,"riscv_soc core execute mu_exu div io_dest_is_w", false,-1);
        tracep->declBit(c+3040,"riscv_soc core execute mu_exu div io_ready", false,-1);
        tracep->declBit(c+2957,"riscv_soc core execute mu_exu div is_32", false,-1);
        tracep->declBit(c+3046,"riscv_soc core execute mu_exu div is_signed", false,-1);
        tracep->declArray(c+3047,"riscv_soc core execute mu_exu div dividend", false,-1, 64,0);
        tracep->declArray(c+3050,"riscv_soc core execute mu_exu div divisor", false,-1, 64,0);
        tracep->declArray(c+3053,"riscv_soc core execute mu_exu div rem", false,-1, 64,0);
        tracep->declArray(c+3056,"riscv_soc core execute mu_exu div reg_divisor", false,-1, 64,0);
        tracep->declArray(c+3059,"riscv_soc core execute mu_exu div reg_dividend", false,-1, 65,0);
        tracep->declArray(c+3062,"riscv_soc core execute mu_exu div reg_rem", false,-1, 64,0);
        tracep->declArray(c+3065,"riscv_soc core execute mu_exu div reg_q", false,-1, 65,0);
        tracep->declArray(c+3068,"riscv_soc core execute mu_exu div neg_divisor", false,-1, 64,0);
        tracep->declBus(c+3071,"riscv_soc core execute mu_exu div reg_state", false,-1, 1,0);
        tracep->declBus(c+3072,"riscv_soc core execute mu_exu div reg_cnt", false,-1, 6,0);
        tracep->declBus(c+3073,"riscv_soc core execute mu_exu div reg_exuType", false,-1, 6,0);
        tracep->declArray(c+3074,"riscv_soc core execute mu_exu div temp_result", false,-1, 131,0);
        tracep->declBit(c+3079,"riscv_soc core execute mu_exu div rem_is_0", false,-1);
        tracep->declBit(c+3080,"riscv_soc core execute mu_exu div rem_is_neg_div", false,-1);
        tracep->declBit(c+3081,"riscv_soc core execute mu_exu div rem_is_div", false,-1);
        tracep->declBit(c+3082,"riscv_soc core execute mu_exu div is_need_correct", false,-1);
        tracep->declBit(c+3039,"riscv_soc core execute mu_exu div reg_dest_is_w", false,-1);
        tracep->declBit(c+3040,"riscv_soc core execute mu_exu div reg_ready", false,-1);
        tracep->declBit(c+3083,"riscv_soc core execute mu_exu div reg_is_32", false,-1);
        tracep->declBit(c+3084,"riscv_soc core execute mu_exu div reg_is_rem", false,-1);
        tracep->declQuad(c+3085,"riscv_soc core execute mu_exu div rem_adjust", false,-1, 63,0);
        tracep->declQuad(c+3087,"riscv_soc core execute mu_exu div q_adjust", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core execute mu_exu mul clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core execute mu_exu mul reset", false,-1);
        tracep->declBit(c+3041,"riscv_soc core execute mu_exu mul io_valid", false,-1);
        tracep->declQuad(c+2902,"riscv_soc core execute mu_exu mul io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+2921,"riscv_soc core execute mu_exu mul io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+176,"riscv_soc core execute mu_exu mul io_exuType", false,-1, 6,0);
        tracep->declQuad(c+3042,"riscv_soc core execute mu_exu mul io_dest_data", false,-1, 63,0);
        tracep->declBit(c+3044,"riscv_soc core execute mu_exu mul io_dest_is_w", false,-1);
        tracep->declBit(c+3045,"riscv_soc core execute mu_exu mul io_ready", false,-1);
        tracep->declBit(c+3089,"riscv_soc core execute mu_exu mul is_32", false,-1);
        tracep->declBit(c+3090,"riscv_soc core execute mu_exu mul is_rs1_signed", false,-1);
        tracep->declBit(c+2957,"riscv_soc core execute mu_exu mul is_rs2_signed", false,-1);
        tracep->declArray(c+3091,"riscv_soc core execute mu_exu mul mul_data1", false,-1, 129,0);
        tracep->declArray(c+3096,"riscv_soc core execute mu_exu mul mul_data2", false,-1, 64,0);
        tracep->declArray(c+3099,"riscv_soc core execute mu_exu mul temp_mul2", false,-1, 66,0);
        tracep->declBit(c+3045,"riscv_soc core execute mu_exu mul reg_ready", false,-1);
        tracep->declBus(c+3102,"riscv_soc core execute mu_exu mul reg_state", false,-1, 1,0);
        tracep->declArray(c+3103,"riscv_soc core execute mu_exu mul reg_temp_mul2", false,-1, 66,0);
        tracep->declArray(c+3106,"riscv_soc core execute mu_exu mul reg_mul1", false,-1, 129,0);
        tracep->declArray(c+3111,"riscv_soc core execute mu_exu mul reg_result", false,-1, 129,0);
        tracep->declBus(c+3116,"riscv_soc core execute mu_exu mul reg_exuType", false,-1, 6,0);
        tracep->declBit(c+3044,"riscv_soc core execute mu_exu mul reg_dest_is_w", false,-1);
        tracep->declArray(c+3117,"riscv_soc core execute mu_exu mul pp", false,-1, 130,0);
        tracep->declBus(c+3122,"riscv_soc core execute mu_exu mul reg_cnt", false,-1, 6,0);
        tracep->declBit(c+3123,"riscv_soc core execute mu_exu mul reg_not_h", false,-1);
        tracep->declBit(c+3124,"riscv_soc core execute mu_exu mul reg_is_32", false,-1);
        tracep->declBit(c+2927,"riscv_soc core execute system_exu io_valid", false,-1);
        tracep->declBus(c+176,"riscv_soc core execute system_exu io_exuType", false,-1, 6,0);
        tracep->declQuad(c+2928,"riscv_soc core execute system_exu io_csr_data", false,-1, 63,0);
        tracep->declBus(c+190,"riscv_soc core execute system_exu io_csr_addr", false,-1, 11,0);
        tracep->declBus(c+183,"riscv_soc core execute system_exu io_imm", false,-1, 31,0);
        tracep->declQuad(c+2912,"riscv_soc core execute system_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+199,"riscv_soc core execute system_exu io_mepc", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core execute system_exu io_mstatus", false,-1, 63,0);
        tracep->declQuad(c+2928,"riscv_soc core execute system_exu io_dst_data", false,-1, 63,0);
        tracep->declBit(c+2930,"riscv_soc core execute system_exu io_csr_is_w", false,-1);
        tracep->declQuad(c+2931,"riscv_soc core execute system_exu io_result_csr_data", false,-1, 63,0);
        tracep->declBus(c+2933,"riscv_soc core execute system_exu io_result_csr_addr", false,-1, 11,0);
        tracep->declBit(c+2934,"riscv_soc core execute system_exu io_is_except", false,-1);
        tracep->declBus(c+2935,"riscv_soc core execute system_exu io_exception", false,-1, 5,0);
        tracep->declBit(c+2936,"riscv_soc core execute system_exu io_valid_next_pc", false,-1);
        tracep->declQuad(c+199,"riscv_soc core execute system_exu io_next_pc", false,-1, 63,0);
        tracep->declQuad(c+3125,"riscv_soc core execute system_exu imm", false,-1, 63,0);
        tracep->declBit(c+3127,"riscv_soc core execute system_exu is_imm", false,-1);
        tracep->declQuad(c+3128,"riscv_soc core execute system_exu op_data", false,-1, 63,0);
        tracep->declQuad(c+3130,"riscv_soc core execute system_exu or_result", false,-1, 63,0);
        tracep->declQuad(c+3132,"riscv_soc core execute system_exu and_result", false,-1, 63,0);
        tracep->declQuad(c+3134,"riscv_soc core execute system_exu temp_csr_result_data", false,-1, 63,0);
        tracep->declBit(c+3136,"riscv_soc core execute system_exu is_mret", false,-1);
        tracep->declBit(c+3137,"riscv_soc core execute system_exu is_sret", false,-1);
        tracep->declBit(c+3138,"riscv_soc core execute system_exu is_ecall", false,-1);
        tracep->declBit(c+3139,"riscv_soc core execute system_exu is_ebreak", false,-1);
        tracep->declBit(c+3140,"riscv_soc core execute system_exu is_except", false,-1);
        tracep->declBus(c+3141,"riscv_soc core execute system_exu exception", false,-1, 3,0);
        tracep->declBit(c+3142,"riscv_soc core execute system_exu is_ret", false,-1);
        tracep->declQuad(c+3143,"riscv_soc core execute system_exu result_status", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core decode reset", false,-1);
        tracep->declBit(c+168,"riscv_soc core decode io_get_inst_ready", false,-1);
        tracep->declBit(c+169,"riscv_soc core decode io_get_inst_valid", false,-1);
        tracep->declBus(c+170,"riscv_soc core decode io_get_inst_bits_inst", false,-1, 31,0);
        tracep->declQuad(c+171,"riscv_soc core decode io_get_inst_bits_pc", false,-1, 63,0);
        tracep->declBit(c+173,"riscv_soc core decode io_get_inst_bits_is_pre", false,-1);
        tracep->declBus(c+222,"riscv_soc core decode io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"riscv_soc core decode io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+225,"riscv_soc core decode io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"riscv_soc core decode io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBus(c+228,"riscv_soc core decode io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+229,"riscv_soc core decode io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+168,"riscv_soc core decode io_op_datas_ready", false,-1);
        tracep->declBit(c+174,"riscv_soc core decode io_op_datas_valid", false,-1);
        tracep->declBus(c+175,"riscv_soc core decode io_op_datas_bits_opType", false,-1, 2,0);
        tracep->declBus(c+176,"riscv_soc core decode io_op_datas_bits_exuType", false,-1, 6,0);
        tracep->declBus(c+177,"riscv_soc core decode io_op_datas_bits_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core decode io_op_datas_bits_rs1_data", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core decode io_op_datas_bits_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+181,"riscv_soc core decode io_op_datas_bits_rs2_data", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core decode io_op_datas_bits_imm", false,-1, 31,0);
        tracep->declQuad(c+184,"riscv_soc core decode io_op_datas_bits_pc", false,-1, 63,0);
        tracep->declBus(c+186,"riscv_soc core decode io_op_datas_bits_inst", false,-1, 31,0);
        tracep->declBus(c+187,"riscv_soc core decode io_op_datas_bits_dest_addr", false,-1, 4,0);
        tracep->declBit(c+188,"riscv_soc core decode io_op_datas_bits_dest_is_reg", false,-1);
        tracep->declBit(c+189,"riscv_soc core decode io_op_datas_bits_is_pre", false,-1);
        tracep->declBus(c+190,"riscv_soc core decode io_op_datas_bits_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+191,"riscv_soc core decode io_op_datas_bits_csr_data", false,-1, 63,0);
        tracep->declBit(c+167,"riscv_soc core decode io_flush", false,-1);
        tracep->declBit(c+174,"riscv_soc core decode reg_valid", false,-1);
        tracep->declBus(c+175,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+176,"riscv_soc core decode reg_exuType", false,-1, 6,0);
        tracep->declBus(c+177,"riscv_soc core decode reg_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+178,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declBus(c+180,"riscv_soc core decode reg_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+181,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+183,"riscv_soc core decode reg_imm", false,-1, 31,0);
        tracep->declQuad(c+184,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+186,"riscv_soc core decode reg_inst", false,-1, 31,0);
        tracep->declBus(c+187,"riscv_soc core decode reg_dest_addr", false,-1, 4,0);
        tracep->declBit(c+188,"riscv_soc core decode reg_dest_is_reg", false,-1);
        tracep->declBus(c+190,"riscv_soc core decode reg_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+191,"riscv_soc core decode reg_csr_data", false,-1, 63,0);
        tracep->declBit(c+189,"riscv_soc core decode reg_is_pre", false,-1);
        tracep->declBus(c+225,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+222,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+228,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBus(c+3145,"riscv_soc core decode dest_addr", false,-1, 4,0);
        tracep->declBus(c+3146,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBus(c+3147,"riscv_soc core decode dest_is_reg", false,-1, 1,0);
        tracep->declBus(c+3148,"riscv_soc core decode rs1_is_reg", false,-1, 1,0);
        tracep->declBus(c+3149,"riscv_soc core decode rs2_is_reg", false,-1, 1,0);
        tracep->declBit(c+3150,"riscv_soc core decode temp_rs1_is_reg", false,-1);
        tracep->declBit(c+3151,"riscv_soc core decode temp_rs2_is_reg", false,-1);
        tracep->declBit(c+3195,"riscv_soc core commit clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core commit reset", false,-1);
        tracep->declBus(c+222,"riscv_soc core commit io_normal_rd_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+223,"riscv_soc core commit io_normal_rd_rs1_data", false,-1, 63,0);
        tracep->declBus(c+225,"riscv_soc core commit io_normal_rd_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+226,"riscv_soc core commit io_normal_rd_rs2_data", false,-1, 63,0);
        tracep->declBit(c+203,"riscv_soc core commit io_normal_wb_valid", false,-1);
        tracep->declBus(c+204,"riscv_soc core commit io_normal_wb_dest_addr", false,-1, 4,0);
        tracep->declQuad(c+205,"riscv_soc core commit io_normal_wb_dest_data", false,-1, 63,0);
        tracep->declBus(c+228,"riscv_soc core commit io_csr_rd_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+229,"riscv_soc core commit io_csr_rd_csr_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core commit io_csr_wb_valid", false,-1);
        tracep->declBus(c+208,"riscv_soc core commit io_csr_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+209,"riscv_soc core commit io_csr_wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+211,"riscv_soc core commit io_csr_except_is_except", false,-1);
        tracep->declBit(c+212,"riscv_soc core commit io_csr_except_is_time_irq", false,-1);
        tracep->declBit(c+213,"riscv_soc core commit io_csr_except_is_soft_irq", false,-1);
        tracep->declBus(c+214,"riscv_soc core commit io_csr_except_exception", false,-1, 5,0);
        tracep->declQuad(c+215,"riscv_soc core commit io_csr_except_next_pc", false,-1, 63,0);
        tracep->declQuad(c+217,"riscv_soc core commit io_csr_except_pc", false,-1, 63,0);
        tracep->declQuad(c+201,"riscv_soc core commit io_csr_pass_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+199,"riscv_soc core commit io_csr_pass_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core commit io_csr_pass_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core commit io_csr_pass_csr_mie", false,-1, 63,0);
        tracep->declBit(c+219,"riscv_soc core commit io_commit", false,-1);
        tracep->declBus(c+220,"riscv_soc core commit io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+221,"riscv_soc core commit io_difftest_peripheral", false,-1);
        tracep->declBit(c+21,"riscv_soc core commit difftest_irq_0", false,-1);
        tracep->declBit(c+22,"riscv_soc core commit difftest_peripheral_0", false,-1);
        tracep->declBit(c+23,"riscv_soc core commit difftest_commit_0", false,-1);
        tracep->declQuad(c+24,"riscv_soc core commit difftest_pc_0", false,-1, 63,0);
        tracep->declBus(c+26,"riscv_soc core commit difftest_inst_0", false,-1, 31,0);
        tracep->declQuad(c+91,"riscv_soc core commit inst_counter_0", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core commit csr_reg_clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core commit csr_reg_reset", false,-1);
        tracep->declBus(c+208,"riscv_soc core commit csr_reg_io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+209,"riscv_soc core commit csr_reg_io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core commit csr_reg_io_in_w_csr_en", false,-1);
        tracep->declQuad(c+217,"riscv_soc core commit csr_reg_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+215,"riscv_soc core commit csr_reg_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+212,"riscv_soc core commit csr_reg_io_in_time_irq", false,-1);
        tracep->declBit(c+213,"riscv_soc core commit csr_reg_io_in_soft_irq", false,-1);
        tracep->declBus(c+3152,"riscv_soc core commit csr_reg_io_in_exception", false,-1, 4,0);
        tracep->declBit(c+211,"riscv_soc core commit csr_reg_io_in_is_exception", false,-1);
        tracep->declBit(c+219,"riscv_soc core commit csr_reg_io_in_commit", false,-1);
        tracep->declBus(c+228,"riscv_soc core commit csr_reg_io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+229,"riscv_soc core commit csr_reg_io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+201,"riscv_soc core commit csr_reg_io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+199,"riscv_soc core commit csr_reg_io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core commit csr_reg_io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core commit csr_reg_io_r_csr_mie", false,-1, 63,0);
        tracep->declQuad(c+27,"riscv_soc core commit reg_file_0", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv_soc core commit reg_file_1", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv_soc core commit reg_file_2", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv_soc core commit reg_file_3", false,-1, 63,0);
        tracep->declQuad(c+35,"riscv_soc core commit reg_file_4", false,-1, 63,0);
        tracep->declQuad(c+37,"riscv_soc core commit reg_file_5", false,-1, 63,0);
        tracep->declQuad(c+39,"riscv_soc core commit reg_file_6", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_soc core commit reg_file_7", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_soc core commit reg_file_8", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_soc core commit reg_file_9", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv_soc core commit reg_file_10", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv_soc core commit reg_file_11", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv_soc core commit reg_file_12", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv_soc core commit reg_file_13", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv_soc core commit reg_file_14", false,-1, 63,0);
        tracep->declQuad(c+57,"riscv_soc core commit reg_file_15", false,-1, 63,0);
        tracep->declQuad(c+59,"riscv_soc core commit reg_file_16", false,-1, 63,0);
        tracep->declQuad(c+61,"riscv_soc core commit reg_file_17", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv_soc core commit reg_file_18", false,-1, 63,0);
        tracep->declQuad(c+65,"riscv_soc core commit reg_file_19", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv_soc core commit reg_file_20", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv_soc core commit reg_file_21", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core commit reg_file_22", false,-1, 63,0);
        tracep->declQuad(c+73,"riscv_soc core commit reg_file_23", false,-1, 63,0);
        tracep->declQuad(c+75,"riscv_soc core commit reg_file_24", false,-1, 63,0);
        tracep->declQuad(c+77,"riscv_soc core commit reg_file_25", false,-1, 63,0);
        tracep->declQuad(c+79,"riscv_soc core commit reg_file_26", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_soc core commit reg_file_27", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv_soc core commit reg_file_28", false,-1, 63,0);
        tracep->declQuad(c+85,"riscv_soc core commit reg_file_29", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_soc core commit reg_file_30", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core commit reg_file_31", false,-1, 63,0);
        tracep->declBit(c+23,"riscv_soc core commit difftest_commit", false,-1);
        tracep->declBus(c+26,"riscv_soc core commit difftest_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"riscv_soc core commit difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core commit inst_counter", false,-1, 63,0);
        tracep->declBit(c+21,"riscv_soc core commit difftest_irq", false,-1);
        tracep->declBit(c+22,"riscv_soc core commit difftest_peripheral", false,-1);
        tracep->declBit(c+3195,"riscv_soc core commit csr_reg clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core commit csr_reg reset", false,-1);
        tracep->declBus(c+208,"riscv_soc core commit csr_reg io_in_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+209,"riscv_soc core commit csr_reg io_in_csr_data", false,-1, 63,0);
        tracep->declBit(c+207,"riscv_soc core commit csr_reg io_in_w_csr_en", false,-1);
        tracep->declQuad(c+217,"riscv_soc core commit csr_reg io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+215,"riscv_soc core commit csr_reg io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+212,"riscv_soc core commit csr_reg io_in_time_irq", false,-1);
        tracep->declBit(c+213,"riscv_soc core commit csr_reg io_in_soft_irq", false,-1);
        tracep->declBus(c+3152,"riscv_soc core commit csr_reg io_in_exception", false,-1, 4,0);
        tracep->declBit(c+211,"riscv_soc core commit csr_reg io_in_is_exception", false,-1);
        tracep->declBit(c+219,"riscv_soc core commit csr_reg io_in_commit", false,-1);
        tracep->declBus(c+228,"riscv_soc core commit csr_reg io_r_csr_raddr", false,-1, 11,0);
        tracep->declQuad(c+229,"riscv_soc core commit csr_reg io_r_csr_rdata", false,-1, 63,0);
        tracep->declQuad(c+201,"riscv_soc core commit csr_reg io_r_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+199,"riscv_soc core commit csr_reg io_r_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+195,"riscv_soc core commit csr_reg io_r_csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core commit csr_reg io_r_csr_mie", false,-1, 63,0);
        tracep->declBit(c+3153,"riscv_soc core commit csr_reg irq", false,-1);
        tracep->declQuad(c+3154,"riscv_soc core commit csr_reg reg_mstatus", false,-1, 63,0);
        tracep->declQuad(c+3156,"riscv_soc core commit csr_reg reg_mie", false,-1, 63,0);
        tracep->declQuad(c+3158,"riscv_soc core commit csr_reg reg_mtvec", false,-1, 63,0);
        tracep->declQuad(c+3160,"riscv_soc core commit csr_reg reg_mscratch", false,-1, 63,0);
        tracep->declQuad(c+3162,"riscv_soc core commit csr_reg reg_mepc", false,-1, 63,0);
        tracep->declQuad(c+3164,"riscv_soc core commit csr_reg reg_mcause", false,-1, 63,0);
        tracep->declQuad(c+3166,"riscv_soc core commit csr_reg reg_mtval", false,-1, 63,0);
        tracep->declQuad(c+3168,"riscv_soc core commit csr_reg reg_mcycle", false,-1, 63,0);
        tracep->declQuad(c+3170,"riscv_soc core commit csr_reg reg_minstret", false,-1, 63,0);
        tracep->declQuad(c+3172,"riscv_soc core commit csr_reg csr_rdata", false,-1, 63,0);
        tracep->declBit(c+3195,"riscv_soc core clint_de clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc core clint_de reset", false,-1);
        tracep->declBit(c+151,"riscv_soc core clint_de io_valid", false,-1);
        tracep->declQuad(c+113,"riscv_soc core clint_de io_bits_addr", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv_soc core clint_de io_bits_wdata", false,-1, 63,0);
        tracep->declQuad(c+152,"riscv_soc core clint_de io_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+120,"riscv_soc core clint_de io_bits_is_w", false,-1);
        tracep->declBit(c+154,"riscv_soc core clint_de io_ready", false,-1);
        tracep->declBit(c+194,"riscv_soc core clint_de io_soft_irq", false,-1);
        tracep->declBit(c+193,"riscv_soc core clint_de io_time_irq", false,-1);
        tracep->declBit(c+194,"riscv_soc core clint_de reg_msip", false,-1);
        tracep->declQuad(c+3174,"riscv_soc core clint_de reg_mtime", false,-1, 63,0);
        tracep->declQuad(c+3176,"riscv_soc core clint_de reg_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+154,"riscv_soc core clint_de reg_ready", false,-1);
        tracep->declQuad(c+152,"riscv_soc core clint_de red_rdata", false,-1, 63,0);
        tracep->declBit(c+3178,"riscv_soc core clint_de reg_state", false,-1);
        tracep->declBit(c+3179,"riscv_soc core clint_de is_misp", false,-1);
        tracep->declBit(c+3180,"riscv_soc core clint_de is_mtimecmp", false,-1);
        tracep->declBit(c+3195,"riscv_soc axi_ram clock", false,-1);
        tracep->declBit(c+3196,"riscv_soc axi_ram reset", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram io_ram_bus_aw_ready", false,-1);
        tracep->declBit(c+2,"riscv_soc axi_ram io_ram_bus_aw_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc axi_ram io_ram_bus_aw_bits_awaddr", false,-1, 63,0);
        tracep->declBit(c+5,"riscv_soc axi_ram io_ram_bus_w_ready", false,-1);
        tracep->declBit(c+6,"riscv_soc axi_ram io_ram_bus_w_valid", false,-1);
        tracep->declQuad(c+7,"riscv_soc axi_ram io_ram_bus_w_bits_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"riscv_soc axi_ram io_ram_bus_w_bits_wstrb", false,-1, 7,0);
        tracep->declBit(c+10,"riscv_soc axi_ram io_ram_bus_w_bits_wlast", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram io_ram_bus_b_valid", false,-1);
        tracep->declBit(c+12,"riscv_soc axi_ram io_ram_bus_ar_ready", false,-1);
        tracep->declBit(c+13,"riscv_soc axi_ram io_ram_bus_ar_valid", false,-1);
        tracep->declQuad(c+14,"riscv_soc axi_ram io_ram_bus_ar_bits_araddr", false,-1, 63,0);
        tracep->declBus(c+16,"riscv_soc axi_ram io_ram_bus_ar_bits_arlen", false,-1, 7,0);
        tracep->declBit(c+17,"riscv_soc axi_ram io_ram_bus_r_valid", false,-1);
        tracep->declQuad(c+18,"riscv_soc axi_ram io_ram_bus_r_bits_rdata", false,-1, 63,0);
        tracep->declBit(c+20,"riscv_soc axi_ram io_ram_bus_r_bits_rlast", false,-1);
        tracep->declBit(c+3195,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+3181,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem_rflag", false,-1);
        tracep->declQuad(c+3183,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+3185,"riscv_soc axi_ram mem_wmask", false,-1, 63,0);
        tracep->declBit(c+3187,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declQuad(c+3188,"riscv_soc axi_ram reg_raddr", false,-1, 63,0);
        tracep->declBus(c+3190,"riscv_soc axi_ram reg_rlen", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi_ram reg_ar_ready", false,-1);
        tracep->declBit(c+17,"riscv_soc axi_ram reg_r_valid", false,-1);
        tracep->declBit(c+3191,"riscv_soc axi_ram reg_r_state", false,-1);
        tracep->declQuad(c+3183,"riscv_soc axi_ram reg_w_addr", false,-1, 63,0);
        tracep->declBit(c+3192,"riscv_soc axi_ram reg_is_w", false,-1);
        tracep->declBit(c+1,"riscv_soc axi_ram reg_aw_ready", false,-1);
        tracep->declBit(c+5,"riscv_soc axi_ram reg_w_ready", false,-1);
        tracep->declBit(c+11,"riscv_soc axi_ram reg_b_valid", false,-1);
        tracep->declBus(c+3193,"riscv_soc axi_ram mem_io_wmask_lo", false,-1, 31,0);
        tracep->declBus(c+3194,"riscv_soc axi_ram mem_io_wmask_hi", false,-1, 31,0);
        tracep->declBit(c+3195,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+3181,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declBit(c+13,"riscv_soc axi_ram mem rflag", false,-1);
        tracep->declQuad(c+3183,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declQuad(c+3185,"riscv_soc axi_ram mem wmask", false,-1, 63,0);
        tracep->declBit(c+3187,"riscv_soc axi_ram mem wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp3286;
    VlWide<4>/*127:0*/ __Vtemp3287;
    VlWide<4>/*127:0*/ __Vtemp3288;
    VlWide<4>/*127:0*/ __Vtemp3289;
    VlWide<4>/*127:0*/ __Vtemp3290;
    VlWide<4>/*127:0*/ __Vtemp3291;
    VlWide<4>/*127:0*/ __Vtemp3292;
    VlWide<4>/*127:0*/ __Vtemp3293;
    VlWide<4>/*127:0*/ __Vtemp3294;
    VlWide<4>/*127:0*/ __Vtemp3296;
    VlWide<4>/*127:0*/ __Vtemp3297;
    VlWide<4>/*127:0*/ __Vtemp3299;
    VlWide<4>/*127:0*/ __Vtemp3300;
    VlWide<4>/*127:0*/ __Vtemp3302;
    VlWide<4>/*127:0*/ __Vtemp3303;
    VlWide<4>/*127:0*/ __Vtemp3304;
    VlWide<3>/*95:0*/ __Vtemp3305;
    VlWide<3>/*95:0*/ __Vtemp3307;
    VlWide<3>/*95:0*/ __Vtemp3308;
    VlWide<3>/*95:0*/ __Vtemp3309;
    VlWide<3>/*95:0*/ __Vtemp3310;
    VlWide<3>/*95:0*/ __Vtemp3313;
    VlWide<3>/*95:0*/ __Vtemp3314;
    VlWide<3>/*95:0*/ __Vtemp3315;
    VlWide<5>/*159:0*/ __Vtemp3327;
    VlWide<5>/*159:0*/ __Vtemp3331;
    VlWide<3>/*95:0*/ __Vtemp3333;
    VlWide<5>/*159:0*/ __Vtemp3335;
    VlWide<5>/*159:0*/ __Vtemp3336;
    VlWide<5>/*159:0*/ __Vtemp3337;
    VlWide<5>/*159:0*/ __Vtemp3338;
    VlWide<5>/*159:0*/ __Vtemp3339;
    VlWide<5>/*159:0*/ __Vtemp3341;
    VlWide<5>/*159:0*/ __Vtemp3342;
    VlWide<5>/*159:0*/ __Vtemp3343;
    VlWide<5>/*159:0*/ __Vtemp3344;
    VlWide<5>/*159:0*/ __Vtemp3345;
    VlWide<5>/*159:0*/ __Vtemp3347;
    VlWide<5>/*159:0*/ __Vtemp3348;
    VlWide<5>/*159:0*/ __Vtemp3349;
    VlWide<5>/*159:0*/ __Vtemp3357;
    VlWide<5>/*159:0*/ __Vtemp3358;
    VlWide<5>/*159:0*/ __Vtemp3366;
    VlWide<4>/*127:0*/ __Vtemp3367;
    VlWide<4>/*127:0*/ __Vtemp3368;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
        tracep->fullBit(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
        tracep->fullQData(oldp+3,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                        : 0ULL))),64);
        tracep->fullBit(oldp+5,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
        tracep->fullBit(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
        tracep->fullQData(oldp+7,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                        ? (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                        : 0ULL))),64);
        tracep->fullCData(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb),8);
        tracep->fullBit(oldp+10,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
        tracep->fullBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
        tracep->fullBit(oldp+12,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
        tracep->fullBit(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
        tracep->fullQData(oldp+14,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
        tracep->fullCData(oldp+16,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                    | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
        tracep->fullBit(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
        tracep->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
        tracep->fullBit(oldp+20,(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
        tracep->fullBit(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        tracep->fullBit(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        tracep->fullBit(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        tracep->fullQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        tracep->fullIData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        tracep->fullQData(oldp+27,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
        tracep->fullQData(oldp+29,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
        tracep->fullQData(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
        tracep->fullQData(oldp+33,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
        tracep->fullQData(oldp+35,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
        tracep->fullQData(oldp+37,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
        tracep->fullQData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
        tracep->fullQData(oldp+41,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
        tracep->fullQData(oldp+43,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
        tracep->fullQData(oldp+45,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
        tracep->fullQData(oldp+47,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
        tracep->fullQData(oldp+49,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
        tracep->fullQData(oldp+51,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
        tracep->fullQData(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
        tracep->fullQData(oldp+55,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
        tracep->fullQData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
        tracep->fullQData(oldp+59,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
        tracep->fullQData(oldp+61,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
        tracep->fullQData(oldp+63,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
        tracep->fullQData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
        tracep->fullQData(oldp+67,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
        tracep->fullQData(oldp+69,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
        tracep->fullQData(oldp+71,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
        tracep->fullQData(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
        tracep->fullQData(oldp+75,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
        tracep->fullQData(oldp+77,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
        tracep->fullQData(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
        tracep->fullQData(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
        tracep->fullQData(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
        tracep->fullQData(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
        tracep->fullQData(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
        tracep->fullQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
        tracep->fullQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        tracep->fullQData(oldp+93,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
        tracep->fullBit(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
        tracep->fullBit(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
        tracep->fullBit(oldp+97,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 0x1fU)) 
                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        tracep->fullQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        tracep->fullBit(oldp+100,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        tracep->fullBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        tracep->fullQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        tracep->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
        tracep->fullBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        tracep->fullQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
        tracep->fullBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
        tracep->fullBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
        tracep->fullQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        tracep->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        tracep->fullCData(oldp+119,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        tracep->fullBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        tracep->fullBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        tracep->fullBit(oldp+122,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        tracep->fullBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        tracep->fullQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        tracep->fullQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        tracep->fullBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        tracep->fullBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        tracep->fullBit(oldp+130,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        tracep->fullBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        tracep->fullQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        tracep->fullBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
        tracep->fullBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
        tracep->fullBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
        tracep->fullBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        tracep->fullBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
        tracep->fullBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        tracep->fullBit(oldp+140,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        tracep->fullBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        tracep->fullBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        tracep->fullQData(oldp+143,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
        tracep->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        tracep->fullBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        tracep->fullQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
        tracep->fullBit(oldp+150,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                             >> 0x1fU))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        tracep->fullBit(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        tracep->fullQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        tracep->fullBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        tracep->fullBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        tracep->fullBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        tracep->fullQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        tracep->fullBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        tracep->fullQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        tracep->fullBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        tracep->fullQData(oldp+163,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                      ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                          : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                              : ((1U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                  : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
        tracep->fullBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        tracep->fullBit(oldp+169,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
        tracep->fullIData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
        tracep->fullQData(oldp+171,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                          : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                              : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
        tracep->fullBit(oldp+173,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
        tracep->fullBit(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        tracep->fullCData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        tracep->fullCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        tracep->fullQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullCData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        tracep->fullQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullIData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        tracep->fullQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullIData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        tracep->fullCData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        tracep->fullBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        tracep->fullBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        tracep->fullSData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+193,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                   <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        tracep->fullBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        tracep->fullQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
        tracep->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        tracep->fullQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
        tracep->fullQData(oldp+201,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        tracep->fullBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        tracep->fullCData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        tracep->fullQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        tracep->fullBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        tracep->fullSData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        tracep->fullQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        tracep->fullBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        tracep->fullBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        tracep->fullBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        tracep->fullCData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        tracep->fullQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        tracep->fullQData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        tracep->fullBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        tracep->fullIData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        tracep->fullBit(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        tracep->fullCData(oldp+222,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+223,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0xfU))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : ((0x1fU == 
                                          (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0xfU)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26))))))),64);
        tracep->fullCData(oldp+225,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+226,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                       == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U))) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                      : ((0x1fU == 
                                          (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U)))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58))))))),64);
        tracep->fullSData(oldp+228,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+229,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                      : ((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
        tracep->fullBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        tracep->fullQData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        tracep->fullCData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        tracep->fullBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        tracep->fullBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        tracep->fullBit(oldp+237,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullWData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        tracep->fullWData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
        VL_EXTEND_WQ(128,54, __Vtemp3286, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3287, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp3288[0U] = __Vtemp3286[0U];
            __Vtemp3288[1U] = __Vtemp3286[1U];
            __Vtemp3288[2U] = __Vtemp3286[2U];
            __Vtemp3288[3U] = __Vtemp3286[3U];
        } else {
            __Vtemp3288[0U] = __Vtemp3287[0U];
            __Vtemp3288[1U] = __Vtemp3287[1U];
            __Vtemp3288[2U] = __Vtemp3287[2U];
            __Vtemp3288[3U] = __Vtemp3287[3U];
        }
        tracep->fullWData(oldp+246,(__Vtemp3288),128);
        VL_EXTEND_WQ(128,54, __Vtemp3289, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3290, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[0U])))));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
            __Vtemp3291[0U] = __Vtemp3289[0U];
            __Vtemp3291[1U] = __Vtemp3289[1U];
            __Vtemp3291[2U] = __Vtemp3289[2U];
            __Vtemp3291[3U] = __Vtemp3289[3U];
        } else {
            __Vtemp3291[0U] = __Vtemp3290[0U];
            __Vtemp3291[1U] = __Vtemp3290[1U];
            __Vtemp3291[2U] = __Vtemp3290[2U];
            __Vtemp3291[3U] = __Vtemp3290[3U];
        }
        tracep->fullWData(oldp+250,(__Vtemp3291),128);
        tracep->fullBit(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        tracep->fullBit(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
        tracep->fullBit(oldp+256,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        tracep->fullQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        tracep->fullBit(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        tracep->fullQData(oldp+260,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 3U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
        tracep->fullBit(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        tracep->fullQData(oldp+263,(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 3U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
        tracep->fullBit(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        tracep->fullCData(oldp+266,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullWData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        VL_EXTEND_WQ(128,54, __Vtemp3292, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        tracep->fullWData(oldp+271,(__Vtemp3292),128);
        tracep->fullBit(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        tracep->fullCData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_io_addr),6);
        tracep->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        tracep->fullWData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__Q),128);
        tracep->fullCData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1_io_addr),6);
        tracep->fullWData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q),128);
        tracep->fullCData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2_io_addr),6);
        tracep->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        tracep->fullWData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__Q),128);
        tracep->fullCData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3_io_addr),6);
        tracep->fullWData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q),128);
        tracep->fullQData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        tracep->fullBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        tracep->fullBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        tracep->fullBit(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        tracep->fullQData(oldp+305,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullBit(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        tracep->fullBit(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        tracep->fullCData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        tracep->fullBit(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        tracep->fullBit(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        tracep->fullBit(oldp+312,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
        tracep->fullBit(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        tracep->fullBit(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        tracep->fullQData(oldp+315,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+317,((0x3fU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+318,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        VL_EXTEND_WQ(128,54, __Vtemp3293, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3294, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[0U])))));
        tracep->fullQData(oldp+319,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                           ? 
                                                          __Vtemp3293[1U]
                                                           : 
                                                          __Vtemp3294[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                            ? 
                                                           __Vtemp3293[0U]
                                                            : 
                                                           __Vtemp3294[0U])))))),54);
        VL_EXTEND_WQ(128,54, __Vtemp3296, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                           >> 0xaU));
        VL_EXTEND_WQ(128,54, __Vtemp3297, (0x3fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[0U])))));
        tracep->fullQData(oldp+321,((0x3fffffffffffffULL 
                                     & (((QData)((IData)(
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                           ? 
                                                          __Vtemp3296[1U]
                                                           : 
                                                          __Vtemp3297[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                            ? 
                                                           __Vtemp3296[0U]
                                                            : 
                                                           __Vtemp3297[0U])))))),54);
        tracep->fullBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        tracep->fullBit(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        tracep->fullQData(oldp+325,((0xfffffffffffffff0ULL 
                                     & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        tracep->fullQData(oldp+327,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                     >> 0xaU)),54);
        tracep->fullCData(oldp+329,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        tracep->fullQData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        tracep->fullBit(oldp+332,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        tracep->fullQData(oldp+333,((1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U))))),64);
        tracep->fullQData(oldp+335,((~ (1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U)))))),64);
        tracep->fullCData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        tracep->fullWData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_0),128);
        tracep->fullWData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_1),128);
        tracep->fullWData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_2),128);
        tracep->fullWData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_3),128);
        tracep->fullWData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_4),128);
        tracep->fullWData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_5),128);
        tracep->fullWData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_6),128);
        tracep->fullWData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_7),128);
        tracep->fullWData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_8),128);
        tracep->fullWData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_9),128);
        tracep->fullWData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_10),128);
        tracep->fullWData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_11),128);
        tracep->fullWData(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_12),128);
        tracep->fullWData(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_13),128);
        tracep->fullWData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_14),128);
        tracep->fullWData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_15),128);
        tracep->fullWData(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_16),128);
        tracep->fullWData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_17),128);
        tracep->fullWData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_18),128);
        tracep->fullWData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_19),128);
        tracep->fullWData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_20),128);
        tracep->fullWData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_21),128);
        tracep->fullWData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_22),128);
        tracep->fullWData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_23),128);
        tracep->fullWData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_24),128);
        tracep->fullWData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_25),128);
        tracep->fullWData(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_26),128);
        tracep->fullWData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_27),128);
        tracep->fullWData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_28),128);
        tracep->fullWData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_29),128);
        tracep->fullWData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_30),128);
        tracep->fullWData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_31),128);
        tracep->fullWData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_32),128);
        tracep->fullWData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_33),128);
        tracep->fullWData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_34),128);
        tracep->fullWData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_35),128);
        tracep->fullWData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_36),128);
        tracep->fullWData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_37),128);
        tracep->fullWData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_38),128);
        tracep->fullWData(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_39),128);
        tracep->fullWData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_40),128);
        tracep->fullWData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_41),128);
        tracep->fullWData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_42),128);
        tracep->fullWData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_43),128);
        tracep->fullWData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_44),128);
        tracep->fullWData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_45),128);
        tracep->fullWData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_46),128);
        tracep->fullWData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_47),128);
        tracep->fullWData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_48),128);
        tracep->fullWData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_49),128);
        tracep->fullWData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_50),128);
        tracep->fullWData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_51),128);
        tracep->fullWData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_52),128);
        tracep->fullWData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_53),128);
        tracep->fullWData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_54),128);
        tracep->fullWData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_55),128);
        tracep->fullWData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_56),128);
        tracep->fullWData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_57),128);
        tracep->fullWData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_58),128);
        tracep->fullWData(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_59),128);
        tracep->fullWData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_60),128);
        tracep->fullWData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_61),128);
        tracep->fullWData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_62),128);
        tracep->fullWData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_63),128);
        tracep->fullWData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_0),128);
        tracep->fullWData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_1),128);
        tracep->fullWData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_2),128);
        tracep->fullWData(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_3),128);
        tracep->fullWData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_4),128);
        tracep->fullWData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_5),128);
        tracep->fullWData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_6),128);
        tracep->fullWData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_7),128);
        tracep->fullWData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_8),128);
        tracep->fullWData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_9),128);
        tracep->fullWData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_10),128);
        tracep->fullWData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_11),128);
        tracep->fullWData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_12),128);
        tracep->fullWData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_13),128);
        tracep->fullWData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_14),128);
        tracep->fullWData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_15),128);
        tracep->fullWData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_16),128);
        tracep->fullWData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_17),128);
        tracep->fullWData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_18),128);
        tracep->fullWData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_19),128);
        tracep->fullWData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_20),128);
        tracep->fullWData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_21),128);
        tracep->fullWData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_22),128);
        tracep->fullWData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_23),128);
        tracep->fullWData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_24),128);
        tracep->fullWData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_25),128);
        tracep->fullWData(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_26),128);
        tracep->fullWData(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_27),128);
        tracep->fullWData(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_28),128);
        tracep->fullWData(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_29),128);
        tracep->fullWData(oldp+714,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_30),128);
        tracep->fullWData(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_31),128);
        tracep->fullWData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_32),128);
        tracep->fullWData(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_33),128);
        tracep->fullWData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_34),128);
        tracep->fullWData(oldp+734,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_35),128);
        tracep->fullWData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_36),128);
        tracep->fullWData(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_37),128);
        tracep->fullWData(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_38),128);
        tracep->fullWData(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_39),128);
        tracep->fullWData(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_40),128);
        tracep->fullWData(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_41),128);
        tracep->fullWData(oldp+762,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_42),128);
        tracep->fullWData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_43),128);
        tracep->fullWData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_44),128);
        tracep->fullWData(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_45),128);
        tracep->fullWData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_46),128);
        tracep->fullWData(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_47),128);
        tracep->fullWData(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_48),128);
        tracep->fullWData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_49),128);
        tracep->fullWData(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_50),128);
        tracep->fullWData(oldp+798,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_51),128);
        tracep->fullWData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_52),128);
        tracep->fullWData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_53),128);
        tracep->fullWData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_54),128);
        tracep->fullWData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_55),128);
        tracep->fullWData(oldp+818,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_56),128);
        tracep->fullWData(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_57),128);
        tracep->fullWData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_58),128);
        tracep->fullWData(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_59),128);
        tracep->fullWData(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_60),128);
        tracep->fullWData(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_61),128);
        tracep->fullWData(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_62),128);
        tracep->fullWData(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_63),128);
        tracep->fullWData(oldp+850,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_0),128);
        tracep->fullWData(oldp+854,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_1),128);
        tracep->fullWData(oldp+858,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_2),128);
        tracep->fullWData(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_3),128);
        tracep->fullWData(oldp+866,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_4),128);
        tracep->fullWData(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_5),128);
        tracep->fullWData(oldp+874,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_6),128);
        tracep->fullWData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_7),128);
        tracep->fullWData(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_8),128);
        tracep->fullWData(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_9),128);
        tracep->fullWData(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_10),128);
        tracep->fullWData(oldp+894,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_11),128);
        tracep->fullWData(oldp+898,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_12),128);
        tracep->fullWData(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_13),128);
        tracep->fullWData(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_14),128);
        tracep->fullWData(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_15),128);
        tracep->fullWData(oldp+914,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_16),128);
        tracep->fullWData(oldp+918,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_17),128);
        tracep->fullWData(oldp+922,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_18),128);
        tracep->fullWData(oldp+926,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_19),128);
        tracep->fullWData(oldp+930,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_20),128);
        tracep->fullWData(oldp+934,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_21),128);
        tracep->fullWData(oldp+938,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_22),128);
        tracep->fullWData(oldp+942,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_23),128);
        tracep->fullWData(oldp+946,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_24),128);
        tracep->fullWData(oldp+950,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_25),128);
        tracep->fullWData(oldp+954,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_26),128);
        tracep->fullWData(oldp+958,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_27),128);
        tracep->fullWData(oldp+962,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_28),128);
        tracep->fullWData(oldp+966,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_29),128);
        tracep->fullWData(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_30),128);
        tracep->fullWData(oldp+974,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_31),128);
        tracep->fullWData(oldp+978,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_32),128);
        tracep->fullWData(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_33),128);
        tracep->fullWData(oldp+986,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_34),128);
        tracep->fullWData(oldp+990,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_35),128);
        tracep->fullWData(oldp+994,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_36),128);
        tracep->fullWData(oldp+998,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_37),128);
        tracep->fullWData(oldp+1002,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_38),128);
        tracep->fullWData(oldp+1006,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_39),128);
        tracep->fullWData(oldp+1010,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_40),128);
        tracep->fullWData(oldp+1014,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_41),128);
        tracep->fullWData(oldp+1018,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_42),128);
        tracep->fullWData(oldp+1022,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_43),128);
        tracep->fullWData(oldp+1026,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_44),128);
        tracep->fullWData(oldp+1030,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_45),128);
        tracep->fullWData(oldp+1034,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_46),128);
        tracep->fullWData(oldp+1038,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_47),128);
        tracep->fullWData(oldp+1042,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_48),128);
        tracep->fullWData(oldp+1046,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_49),128);
        tracep->fullWData(oldp+1050,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_50),128);
        tracep->fullWData(oldp+1054,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_51),128);
        tracep->fullWData(oldp+1058,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_52),128);
        tracep->fullWData(oldp+1062,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_53),128);
        tracep->fullWData(oldp+1066,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_54),128);
        tracep->fullWData(oldp+1070,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_55),128);
        tracep->fullWData(oldp+1074,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_56),128);
        tracep->fullWData(oldp+1078,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_57),128);
        tracep->fullWData(oldp+1082,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_58),128);
        tracep->fullWData(oldp+1086,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_59),128);
        tracep->fullWData(oldp+1090,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_60),128);
        tracep->fullWData(oldp+1094,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_61),128);
        tracep->fullWData(oldp+1098,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_62),128);
        tracep->fullWData(oldp+1102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_63),128);
        tracep->fullWData(oldp+1106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_0),128);
        tracep->fullWData(oldp+1110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_1),128);
        tracep->fullWData(oldp+1114,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_2),128);
        tracep->fullWData(oldp+1118,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_3),128);
        tracep->fullWData(oldp+1122,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_4),128);
        tracep->fullWData(oldp+1126,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_5),128);
        tracep->fullWData(oldp+1130,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_6),128);
        tracep->fullWData(oldp+1134,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_7),128);
        tracep->fullWData(oldp+1138,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_8),128);
        tracep->fullWData(oldp+1142,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_9),128);
        tracep->fullWData(oldp+1146,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_10),128);
        tracep->fullWData(oldp+1150,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_11),128);
        tracep->fullWData(oldp+1154,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_12),128);
        tracep->fullWData(oldp+1158,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_13),128);
        tracep->fullWData(oldp+1162,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_14),128);
        tracep->fullWData(oldp+1166,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_15),128);
        tracep->fullWData(oldp+1170,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_16),128);
        tracep->fullWData(oldp+1174,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_17),128);
        tracep->fullWData(oldp+1178,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_18),128);
        tracep->fullWData(oldp+1182,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_19),128);
        tracep->fullWData(oldp+1186,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_20),128);
        tracep->fullWData(oldp+1190,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_21),128);
        tracep->fullWData(oldp+1194,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_22),128);
        tracep->fullWData(oldp+1198,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_23),128);
        tracep->fullWData(oldp+1202,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_24),128);
        tracep->fullWData(oldp+1206,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_25),128);
        tracep->fullWData(oldp+1210,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_26),128);
        tracep->fullWData(oldp+1214,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_27),128);
        tracep->fullWData(oldp+1218,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_28),128);
        tracep->fullWData(oldp+1222,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_29),128);
        tracep->fullWData(oldp+1226,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_30),128);
        tracep->fullWData(oldp+1230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_31),128);
        tracep->fullWData(oldp+1234,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_32),128);
        tracep->fullWData(oldp+1238,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_33),128);
        tracep->fullWData(oldp+1242,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_34),128);
        tracep->fullWData(oldp+1246,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_35),128);
        tracep->fullWData(oldp+1250,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_36),128);
        tracep->fullWData(oldp+1254,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_37),128);
        tracep->fullWData(oldp+1258,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_38),128);
        tracep->fullWData(oldp+1262,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_39),128);
        tracep->fullWData(oldp+1266,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_40),128);
        tracep->fullWData(oldp+1270,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_41),128);
        tracep->fullWData(oldp+1274,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_42),128);
        tracep->fullWData(oldp+1278,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_43),128);
        tracep->fullWData(oldp+1282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_44),128);
        tracep->fullWData(oldp+1286,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_45),128);
        tracep->fullWData(oldp+1290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_46),128);
        tracep->fullWData(oldp+1294,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_47),128);
        tracep->fullWData(oldp+1298,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_48),128);
        tracep->fullWData(oldp+1302,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_49),128);
        tracep->fullWData(oldp+1306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_50),128);
        tracep->fullWData(oldp+1310,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_51),128);
        tracep->fullWData(oldp+1314,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_52),128);
        tracep->fullWData(oldp+1318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_53),128);
        tracep->fullWData(oldp+1322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_54),128);
        tracep->fullWData(oldp+1326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_55),128);
        tracep->fullWData(oldp+1330,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_56),128);
        tracep->fullWData(oldp+1334,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_57),128);
        tracep->fullWData(oldp+1338,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_58),128);
        tracep->fullWData(oldp+1342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_59),128);
        tracep->fullWData(oldp+1346,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_60),128);
        tracep->fullWData(oldp+1350,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_61),128);
        tracep->fullWData(oldp+1354,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_62),128);
        tracep->fullWData(oldp+1358,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_63),128);
        tracep->fullCData(oldp+1362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_io_addr),6);
        tracep->fullBit(oldp+1363,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp3299[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp3299[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp3299[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp3299[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        tracep->fullWData(oldp+1364,(__Vtemp3299),128);
        tracep->fullWData(oldp+1368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        tracep->fullWData(oldp+1372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q),128);
        tracep->fullCData(oldp+1376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1_io_addr),6);
        VL_EXTEND_WQ(128,54, __Vtemp3300, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        tracep->fullWData(oldp+1377,(__Vtemp3300),128);
        tracep->fullWData(oldp+1381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q),128);
        tracep->fullCData(oldp+1385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2_io_addr),6);
        tracep->fullBit(oldp+1386,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        tracep->fullWData(oldp+1387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q),128);
        tracep->fullCData(oldp+1391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3_io_addr),6);
        tracep->fullWData(oldp+1392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q),128);
        tracep->fullQData(oldp+1396,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                      >> 0xaU)),54);
        tracep->fullCData(oldp+1398,((0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                       >> 4U)))),6);
        tracep->fullCData(oldp+1399,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        tracep->fullCData(oldp+1400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        tracep->fullQData(oldp+1401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        tracep->fullCData(oldp+1403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        tracep->fullBit(oldp+1404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        tracep->fullQData(oldp+1405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        tracep->fullCData(oldp+1407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        tracep->fullCData(oldp+1408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        tracep->fullBit(oldp+1409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        tracep->fullSData(oldp+1410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        tracep->fullBit(oldp+1411,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        tracep->fullQData(oldp+1412,((((QData)((IData)(
                                                       ((((0x80U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 0x18U) 
                                                        | ((((0x40U 
                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x10U) 
                                                           | ((((0x20U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 8U) 
                                                              | ((0x10U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                  ? 0xffU
                                                                  : 0U)))))) 
                                       << 0x20U) | (QData)((IData)(
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
                                                                              : 0U)))))))),64);
        tracep->fullWData(oldp+1414,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        tracep->fullWData(oldp+1418,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+1422,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        tracep->fullQData(oldp+1423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        tracep->fullQData(oldp+1425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        tracep->fullQData(oldp+1427,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        tracep->fullQData(oldp+1429,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        tracep->fullBit(oldp+1431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        tracep->fullQData(oldp+1432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        tracep->fullQData(oldp+1434,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        tracep->fullQData(oldp+1436,((0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q[0U]))))),54);
        tracep->fullQData(oldp+1438,((0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q[0U]))))),54);
        tracep->fullBit(oldp+1440,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        tracep->fullBit(oldp+1441,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        tracep->fullBit(oldp+1442,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        tracep->fullBit(oldp+1443,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        tracep->fullBit(oldp+1444,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
        tracep->fullBit(oldp+1445,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
        tracep->fullQData(oldp+1446,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                       ? (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[2U])))
                                       : (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[0U]))))),64);
        tracep->fullQData(oldp+1448,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                       ? (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[2U])))
                                       : (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[0U]))))),64);
        tracep->fullQData(oldp+1450,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        tracep->fullBit(oldp+1452,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        tracep->fullBit(oldp+1453,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        tracep->fullCData(oldp+1454,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        tracep->fullBit(oldp+1455,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        tracep->fullBit(oldp+1456,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        tracep->fullWData(oldp+1457,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_0),128);
        tracep->fullWData(oldp+1461,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_1),128);
        tracep->fullWData(oldp+1465,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_2),128);
        tracep->fullWData(oldp+1469,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_3),128);
        tracep->fullWData(oldp+1473,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_4),128);
        tracep->fullWData(oldp+1477,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_5),128);
        tracep->fullWData(oldp+1481,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_6),128);
        tracep->fullWData(oldp+1485,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_7),128);
        tracep->fullWData(oldp+1489,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_8),128);
        tracep->fullWData(oldp+1493,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_9),128);
        tracep->fullWData(oldp+1497,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_10),128);
        tracep->fullWData(oldp+1501,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_11),128);
        tracep->fullWData(oldp+1505,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_12),128);
        tracep->fullWData(oldp+1509,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_13),128);
        tracep->fullWData(oldp+1513,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_14),128);
        tracep->fullWData(oldp+1517,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_15),128);
        tracep->fullWData(oldp+1521,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_16),128);
        tracep->fullWData(oldp+1525,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_17),128);
        tracep->fullWData(oldp+1529,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_18),128);
        tracep->fullWData(oldp+1533,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_19),128);
        tracep->fullWData(oldp+1537,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_20),128);
        tracep->fullWData(oldp+1541,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_21),128);
        tracep->fullWData(oldp+1545,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_22),128);
        tracep->fullWData(oldp+1549,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_23),128);
        tracep->fullWData(oldp+1553,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_24),128);
        tracep->fullWData(oldp+1557,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_25),128);
        tracep->fullWData(oldp+1561,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_26),128);
        tracep->fullWData(oldp+1565,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_27),128);
        tracep->fullWData(oldp+1569,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_28),128);
        tracep->fullWData(oldp+1573,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_29),128);
        tracep->fullWData(oldp+1577,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_30),128);
        tracep->fullWData(oldp+1581,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_31),128);
        tracep->fullWData(oldp+1585,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_32),128);
        tracep->fullWData(oldp+1589,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_33),128);
        tracep->fullWData(oldp+1593,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_34),128);
        tracep->fullWData(oldp+1597,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_35),128);
        tracep->fullWData(oldp+1601,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_36),128);
        tracep->fullWData(oldp+1605,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_37),128);
        tracep->fullWData(oldp+1609,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_38),128);
        tracep->fullWData(oldp+1613,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_39),128);
        tracep->fullWData(oldp+1617,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_40),128);
        tracep->fullWData(oldp+1621,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_41),128);
        tracep->fullWData(oldp+1625,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_42),128);
        tracep->fullWData(oldp+1629,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_43),128);
        tracep->fullWData(oldp+1633,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_44),128);
        tracep->fullWData(oldp+1637,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_45),128);
        tracep->fullWData(oldp+1641,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_46),128);
        tracep->fullWData(oldp+1645,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_47),128);
        tracep->fullWData(oldp+1649,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_48),128);
        tracep->fullWData(oldp+1653,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_49),128);
        tracep->fullWData(oldp+1657,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_50),128);
        tracep->fullWData(oldp+1661,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_51),128);
        tracep->fullWData(oldp+1665,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_52),128);
        tracep->fullWData(oldp+1669,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_53),128);
        tracep->fullWData(oldp+1673,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_54),128);
        tracep->fullWData(oldp+1677,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_55),128);
        tracep->fullWData(oldp+1681,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_56),128);
        tracep->fullWData(oldp+1685,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_57),128);
        tracep->fullWData(oldp+1689,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_58),128);
        tracep->fullWData(oldp+1693,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_59),128);
        tracep->fullWData(oldp+1697,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_60),128);
        tracep->fullWData(oldp+1701,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_61),128);
        tracep->fullWData(oldp+1705,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_62),128);
        tracep->fullWData(oldp+1709,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_63),128);
        tracep->fullWData(oldp+1713,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_0),128);
        tracep->fullWData(oldp+1717,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_1),128);
        tracep->fullWData(oldp+1721,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_2),128);
        tracep->fullWData(oldp+1725,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_3),128);
        tracep->fullWData(oldp+1729,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_4),128);
        tracep->fullWData(oldp+1733,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_5),128);
        tracep->fullWData(oldp+1737,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_6),128);
        tracep->fullWData(oldp+1741,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_7),128);
        tracep->fullWData(oldp+1745,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_8),128);
        tracep->fullWData(oldp+1749,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_9),128);
        tracep->fullWData(oldp+1753,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_10),128);
        tracep->fullWData(oldp+1757,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_11),128);
        tracep->fullWData(oldp+1761,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_12),128);
        tracep->fullWData(oldp+1765,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_13),128);
        tracep->fullWData(oldp+1769,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_14),128);
        tracep->fullWData(oldp+1773,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_15),128);
        tracep->fullWData(oldp+1777,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_16),128);
        tracep->fullWData(oldp+1781,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_17),128);
        tracep->fullWData(oldp+1785,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_18),128);
        tracep->fullWData(oldp+1789,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_19),128);
        tracep->fullWData(oldp+1793,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_20),128);
        tracep->fullWData(oldp+1797,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_21),128);
        tracep->fullWData(oldp+1801,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_22),128);
        tracep->fullWData(oldp+1805,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_23),128);
        tracep->fullWData(oldp+1809,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_24),128);
        tracep->fullWData(oldp+1813,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_25),128);
        tracep->fullWData(oldp+1817,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_26),128);
        tracep->fullWData(oldp+1821,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_27),128);
        tracep->fullWData(oldp+1825,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_28),128);
        tracep->fullWData(oldp+1829,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_29),128);
        tracep->fullWData(oldp+1833,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_30),128);
        tracep->fullWData(oldp+1837,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_31),128);
        tracep->fullWData(oldp+1841,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_32),128);
        tracep->fullWData(oldp+1845,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_33),128);
        tracep->fullWData(oldp+1849,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_34),128);
        tracep->fullWData(oldp+1853,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_35),128);
        tracep->fullWData(oldp+1857,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_36),128);
        tracep->fullWData(oldp+1861,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_37),128);
        tracep->fullWData(oldp+1865,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_38),128);
        tracep->fullWData(oldp+1869,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_39),128);
        tracep->fullWData(oldp+1873,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_40),128);
        tracep->fullWData(oldp+1877,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_41),128);
        tracep->fullWData(oldp+1881,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_42),128);
        tracep->fullWData(oldp+1885,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_43),128);
        tracep->fullWData(oldp+1889,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_44),128);
        tracep->fullWData(oldp+1893,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_45),128);
        tracep->fullWData(oldp+1897,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_46),128);
        tracep->fullWData(oldp+1901,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_47),128);
        tracep->fullWData(oldp+1905,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_48),128);
        tracep->fullWData(oldp+1909,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_49),128);
        tracep->fullWData(oldp+1913,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_50),128);
        tracep->fullWData(oldp+1917,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_51),128);
        tracep->fullWData(oldp+1921,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_52),128);
        tracep->fullWData(oldp+1925,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_53),128);
        tracep->fullWData(oldp+1929,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_54),128);
        tracep->fullWData(oldp+1933,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_55),128);
        tracep->fullWData(oldp+1937,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_56),128);
        tracep->fullWData(oldp+1941,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_57),128);
        tracep->fullWData(oldp+1945,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_58),128);
        tracep->fullWData(oldp+1949,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_59),128);
        tracep->fullWData(oldp+1953,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_60),128);
        tracep->fullWData(oldp+1957,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_61),128);
        tracep->fullWData(oldp+1961,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_62),128);
        tracep->fullWData(oldp+1965,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_63),128);
        tracep->fullWData(oldp+1969,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_0),128);
        tracep->fullWData(oldp+1973,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_1),128);
        tracep->fullWData(oldp+1977,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_2),128);
        tracep->fullWData(oldp+1981,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_3),128);
        tracep->fullWData(oldp+1985,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_4),128);
        tracep->fullWData(oldp+1989,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_5),128);
        tracep->fullWData(oldp+1993,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_6),128);
        tracep->fullWData(oldp+1997,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_7),128);
        tracep->fullWData(oldp+2001,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_8),128);
        tracep->fullWData(oldp+2005,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_9),128);
        tracep->fullWData(oldp+2009,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_10),128);
        tracep->fullWData(oldp+2013,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_11),128);
        tracep->fullWData(oldp+2017,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_12),128);
        tracep->fullWData(oldp+2021,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_13),128);
        tracep->fullWData(oldp+2025,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_14),128);
        tracep->fullWData(oldp+2029,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_15),128);
        tracep->fullWData(oldp+2033,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_16),128);
        tracep->fullWData(oldp+2037,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_17),128);
        tracep->fullWData(oldp+2041,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_18),128);
        tracep->fullWData(oldp+2045,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_19),128);
        tracep->fullWData(oldp+2049,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_20),128);
        tracep->fullWData(oldp+2053,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_21),128);
        tracep->fullWData(oldp+2057,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_22),128);
        tracep->fullWData(oldp+2061,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_23),128);
        tracep->fullWData(oldp+2065,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_24),128);
        tracep->fullWData(oldp+2069,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_25),128);
        tracep->fullWData(oldp+2073,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_26),128);
        tracep->fullWData(oldp+2077,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_27),128);
        tracep->fullWData(oldp+2081,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_28),128);
        tracep->fullWData(oldp+2085,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_29),128);
        tracep->fullWData(oldp+2089,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_30),128);
        tracep->fullWData(oldp+2093,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_31),128);
        tracep->fullWData(oldp+2097,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_32),128);
        tracep->fullWData(oldp+2101,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_33),128);
        tracep->fullWData(oldp+2105,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_34),128);
        tracep->fullWData(oldp+2109,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_35),128);
        tracep->fullWData(oldp+2113,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_36),128);
        tracep->fullWData(oldp+2117,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_37),128);
        tracep->fullWData(oldp+2121,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_38),128);
        tracep->fullWData(oldp+2125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_39),128);
        tracep->fullWData(oldp+2129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_40),128);
        tracep->fullWData(oldp+2133,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_41),128);
        tracep->fullWData(oldp+2137,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_42),128);
        tracep->fullWData(oldp+2141,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_43),128);
        tracep->fullWData(oldp+2145,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_44),128);
        tracep->fullWData(oldp+2149,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_45),128);
        tracep->fullWData(oldp+2153,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_46),128);
        tracep->fullWData(oldp+2157,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_47),128);
        tracep->fullWData(oldp+2161,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_48),128);
        tracep->fullWData(oldp+2165,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_49),128);
        tracep->fullWData(oldp+2169,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_50),128);
        tracep->fullWData(oldp+2173,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_51),128);
        tracep->fullWData(oldp+2177,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_52),128);
        tracep->fullWData(oldp+2181,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_53),128);
        tracep->fullWData(oldp+2185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_54),128);
        tracep->fullWData(oldp+2189,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_55),128);
        tracep->fullWData(oldp+2193,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_56),128);
        tracep->fullWData(oldp+2197,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_57),128);
        tracep->fullWData(oldp+2201,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_58),128);
        tracep->fullWData(oldp+2205,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_59),128);
        tracep->fullWData(oldp+2209,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_60),128);
        tracep->fullWData(oldp+2213,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_61),128);
        tracep->fullWData(oldp+2217,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_62),128);
        tracep->fullWData(oldp+2221,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_63),128);
        tracep->fullWData(oldp+2225,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_0),128);
        tracep->fullWData(oldp+2229,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_1),128);
        tracep->fullWData(oldp+2233,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_2),128);
        tracep->fullWData(oldp+2237,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_3),128);
        tracep->fullWData(oldp+2241,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_4),128);
        tracep->fullWData(oldp+2245,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_5),128);
        tracep->fullWData(oldp+2249,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_6),128);
        tracep->fullWData(oldp+2253,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_7),128);
        tracep->fullWData(oldp+2257,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_8),128);
        tracep->fullWData(oldp+2261,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_9),128);
        tracep->fullWData(oldp+2265,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_10),128);
        tracep->fullWData(oldp+2269,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_11),128);
        tracep->fullWData(oldp+2273,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_12),128);
        tracep->fullWData(oldp+2277,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_13),128);
        tracep->fullWData(oldp+2281,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_14),128);
        tracep->fullWData(oldp+2285,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_15),128);
        tracep->fullWData(oldp+2289,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_16),128);
        tracep->fullWData(oldp+2293,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_17),128);
        tracep->fullWData(oldp+2297,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_18),128);
        tracep->fullWData(oldp+2301,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_19),128);
        tracep->fullWData(oldp+2305,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_20),128);
        tracep->fullWData(oldp+2309,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_21),128);
        tracep->fullWData(oldp+2313,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_22),128);
        tracep->fullWData(oldp+2317,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_23),128);
        tracep->fullWData(oldp+2321,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_24),128);
        tracep->fullWData(oldp+2325,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_25),128);
        tracep->fullWData(oldp+2329,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_26),128);
        tracep->fullWData(oldp+2333,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_27),128);
        tracep->fullWData(oldp+2337,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_28),128);
        tracep->fullWData(oldp+2341,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_29),128);
        tracep->fullWData(oldp+2345,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_30),128);
        tracep->fullWData(oldp+2349,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_31),128);
        tracep->fullWData(oldp+2353,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_32),128);
        tracep->fullWData(oldp+2357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_33),128);
        tracep->fullWData(oldp+2361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_34),128);
        tracep->fullWData(oldp+2365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_35),128);
        tracep->fullWData(oldp+2369,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_36),128);
        tracep->fullWData(oldp+2373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_37),128);
        tracep->fullWData(oldp+2377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_38),128);
        tracep->fullWData(oldp+2381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_39),128);
        tracep->fullWData(oldp+2385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_40),128);
        tracep->fullWData(oldp+2389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_41),128);
        tracep->fullWData(oldp+2393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_42),128);
        tracep->fullWData(oldp+2397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_43),128);
        tracep->fullWData(oldp+2401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_44),128);
        tracep->fullWData(oldp+2405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_45),128);
        tracep->fullWData(oldp+2409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_46),128);
        tracep->fullWData(oldp+2413,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_47),128);
        tracep->fullWData(oldp+2417,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_48),128);
        tracep->fullWData(oldp+2421,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_49),128);
        tracep->fullWData(oldp+2425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_50),128);
        tracep->fullWData(oldp+2429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_51),128);
        tracep->fullWData(oldp+2433,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_52),128);
        tracep->fullWData(oldp+2437,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_53),128);
        tracep->fullWData(oldp+2441,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_54),128);
        tracep->fullWData(oldp+2445,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_55),128);
        tracep->fullWData(oldp+2449,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_56),128);
        tracep->fullWData(oldp+2453,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_57),128);
        tracep->fullWData(oldp+2457,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_58),128);
        tracep->fullWData(oldp+2461,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_59),128);
        tracep->fullWData(oldp+2465,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_60),128);
        tracep->fullWData(oldp+2469,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_61),128);
        tracep->fullWData(oldp+2473,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_62),128);
        tracep->fullWData(oldp+2477,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_63),128);
        tracep->fullBit(oldp+2481,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        tracep->fullCData(oldp+2482,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        tracep->fullCData(oldp+2483,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        tracep->fullCData(oldp+2484,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        tracep->fullBit(oldp+2485,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        tracep->fullCData(oldp+2486,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        tracep->fullCData(oldp+2487,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        tracep->fullBit(oldp+2488,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        tracep->fullBit(oldp+2489,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        tracep->fullBit(oldp+2490,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU))));
        tracep->fullBit(oldp+2491,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                             >> 0x1fU))));
        tracep->fullBit(oldp+2492,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        tracep->fullBit(oldp+2493,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
        tracep->fullIData(oldp+2494,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
        tracep->fullBit(oldp+2495,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
        tracep->fullQData(oldp+2496,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        tracep->fullBit(oldp+2498,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
        tracep->fullBit(oldp+2499,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        tracep->fullQData(oldp+2500,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        tracep->fullCData(oldp+2502,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        tracep->fullCData(oldp+2503,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        tracep->fullQData(oldp+2504,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        tracep->fullQData(oldp+2506,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        tracep->fullQData(oldp+2508,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        tracep->fullQData(oldp+2510,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        tracep->fullBit(oldp+2512,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        tracep->fullCData(oldp+2513,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        tracep->fullCData(oldp+2514,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        tracep->fullBit(oldp+2515,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        tracep->fullBit(oldp+2516,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        tracep->fullBit(oldp+2517,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        tracep->fullBit(oldp+2518,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        tracep->fullQData(oldp+2519,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        tracep->fullQData(oldp+2521,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        tracep->fullQData(oldp+2523,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        tracep->fullQData(oldp+2525,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        tracep->fullIData(oldp+2527,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        tracep->fullIData(oldp+2528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        tracep->fullIData(oldp+2529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        tracep->fullIData(oldp+2530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        tracep->fullBit(oldp+2531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        tracep->fullBit(oldp+2532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        tracep->fullBit(oldp+2533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        tracep->fullBit(oldp+2534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        tracep->fullBit(oldp+2535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        tracep->fullBit(oldp+2536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        tracep->fullBit(oldp+2537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        tracep->fullBit(oldp+2538,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        tracep->fullCData(oldp+2539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        tracep->fullCData(oldp+2540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        tracep->fullCData(oldp+2541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        tracep->fullBit(oldp+2542,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        tracep->fullBit(oldp+2543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        tracep->fullCData(oldp+2544,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                             + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                            - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        tracep->fullWData(oldp+2545,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
        tracep->fullWData(oldp+2549,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
        tracep->fullWData(oldp+2553,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
        tracep->fullWData(oldp+2557,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
        tracep->fullWData(oldp+2561,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
        tracep->fullWData(oldp+2565,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
        tracep->fullWData(oldp+2569,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
        tracep->fullWData(oldp+2573,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
        tracep->fullWData(oldp+2577,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
        tracep->fullWData(oldp+2581,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
        tracep->fullWData(oldp+2585,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
        tracep->fullWData(oldp+2589,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
        tracep->fullWData(oldp+2593,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
        tracep->fullWData(oldp+2597,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
        tracep->fullWData(oldp+2601,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
        tracep->fullWData(oldp+2605,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
        tracep->fullWData(oldp+2609,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
        tracep->fullWData(oldp+2613,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
        tracep->fullWData(oldp+2617,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
        tracep->fullWData(oldp+2621,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
        tracep->fullWData(oldp+2625,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
        tracep->fullWData(oldp+2629,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
        tracep->fullWData(oldp+2633,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
        tracep->fullWData(oldp+2637,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
        tracep->fullWData(oldp+2641,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
        tracep->fullWData(oldp+2645,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
        tracep->fullWData(oldp+2649,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
        tracep->fullWData(oldp+2653,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
        tracep->fullWData(oldp+2657,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
        tracep->fullWData(oldp+2661,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
        tracep->fullWData(oldp+2665,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
        tracep->fullWData(oldp+2669,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
        tracep->fullWData(oldp+2673,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
        tracep->fullWData(oldp+2677,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
        tracep->fullWData(oldp+2681,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
        tracep->fullWData(oldp+2685,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
        tracep->fullWData(oldp+2689,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
        tracep->fullWData(oldp+2693,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
        tracep->fullWData(oldp+2697,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
        tracep->fullWData(oldp+2701,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
        tracep->fullWData(oldp+2705,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
        tracep->fullWData(oldp+2709,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
        tracep->fullWData(oldp+2713,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
        tracep->fullWData(oldp+2717,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
        tracep->fullWData(oldp+2721,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
        tracep->fullWData(oldp+2725,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
        tracep->fullWData(oldp+2729,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
        tracep->fullWData(oldp+2733,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
        tracep->fullWData(oldp+2737,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
        tracep->fullWData(oldp+2741,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
        tracep->fullWData(oldp+2745,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
        tracep->fullWData(oldp+2749,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
        tracep->fullWData(oldp+2753,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
        tracep->fullWData(oldp+2757,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
        tracep->fullWData(oldp+2761,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
        tracep->fullWData(oldp+2765,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
        tracep->fullWData(oldp+2769,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
        tracep->fullWData(oldp+2773,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
        tracep->fullWData(oldp+2777,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
        tracep->fullWData(oldp+2781,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
        tracep->fullWData(oldp+2785,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
        tracep->fullWData(oldp+2789,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
        tracep->fullWData(oldp+2793,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
        tracep->fullWData(oldp+2797,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
        tracep->fullQData(oldp+2801,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
        tracep->fullQData(oldp+2803,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
        tracep->fullQData(oldp+2805,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
        tracep->fullQData(oldp+2807,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
        tracep->fullQData(oldp+2809,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
        tracep->fullQData(oldp+2811,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
        tracep->fullCData(oldp+2813,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        tracep->fullCData(oldp+2814,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        tracep->fullCData(oldp+2815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        tracep->fullCData(oldp+2816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        tracep->fullCData(oldp+2817,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        tracep->fullCData(oldp+2818,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        tracep->fullCData(oldp+2819,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        tracep->fullCData(oldp+2820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        tracep->fullCData(oldp+2821,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        tracep->fullCData(oldp+2822,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        tracep->fullCData(oldp+2823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        tracep->fullCData(oldp+2824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        tracep->fullCData(oldp+2825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        tracep->fullCData(oldp+2826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        tracep->fullCData(oldp+2827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        tracep->fullCData(oldp+2828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        tracep->fullCData(oldp+2829,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        tracep->fullCData(oldp+2830,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        tracep->fullCData(oldp+2831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        tracep->fullCData(oldp+2832,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        tracep->fullCData(oldp+2833,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        tracep->fullCData(oldp+2834,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        tracep->fullCData(oldp+2835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        tracep->fullCData(oldp+2836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        tracep->fullCData(oldp+2837,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        tracep->fullCData(oldp+2838,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        tracep->fullCData(oldp+2839,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        tracep->fullCData(oldp+2840,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        tracep->fullCData(oldp+2841,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        tracep->fullCData(oldp+2842,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        tracep->fullCData(oldp+2843,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        tracep->fullCData(oldp+2844,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        tracep->fullCData(oldp+2845,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        tracep->fullCData(oldp+2846,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        tracep->fullCData(oldp+2847,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        tracep->fullCData(oldp+2848,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        tracep->fullCData(oldp+2849,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        tracep->fullCData(oldp+2850,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        tracep->fullCData(oldp+2851,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        tracep->fullCData(oldp+2852,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        tracep->fullCData(oldp+2853,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        tracep->fullCData(oldp+2854,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        tracep->fullCData(oldp+2855,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        tracep->fullCData(oldp+2856,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        tracep->fullCData(oldp+2857,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        tracep->fullCData(oldp+2858,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        tracep->fullCData(oldp+2859,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        tracep->fullCData(oldp+2860,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        tracep->fullCData(oldp+2861,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        tracep->fullCData(oldp+2862,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        tracep->fullCData(oldp+2863,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        tracep->fullCData(oldp+2864,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        tracep->fullCData(oldp+2865,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        tracep->fullCData(oldp+2866,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        tracep->fullCData(oldp+2867,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        tracep->fullCData(oldp+2868,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        tracep->fullCData(oldp+2869,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        tracep->fullCData(oldp+2870,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        tracep->fullCData(oldp+2871,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        tracep->fullCData(oldp+2872,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        tracep->fullCData(oldp+2873,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        tracep->fullCData(oldp+2874,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        tracep->fullCData(oldp+2875,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        tracep->fullCData(oldp+2876,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        tracep->fullCData(oldp+2877,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        tracep->fullCData(oldp+2878,((0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U)))),6);
        tracep->fullWData(oldp+2879,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data),123);
        tracep->fullCData(oldp+2883,((0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U)))),6);
        tracep->fullQData(oldp+2884,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
        tracep->fullBit(oldp+2886,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_447) 
                                          >> 1U))));
        tracep->fullBit(oldp+2887,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                          >> 0x1aU))));
        tracep->fullQData(oldp+2888,((0xffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                            >> 2U)))),56);
        tracep->fullQData(oldp+2890,((((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                        >> 2U)))),64);
        tracep->fullCData(oldp+2892,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
        tracep->fullBit(oldp+2893,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        tracep->fullBit(oldp+2894,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        tracep->fullBit(oldp+2895,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
        tracep->fullBit(oldp+2896,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
        tracep->fullQData(oldp+2897,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                       ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                       : 0ULL)),64);
        tracep->fullBit(oldp+2899,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullQData(oldp+2900,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                       ? (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                       : 0ULL)),64);
        tracep->fullQData(oldp+2902,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
        tracep->fullQData(oldp+2904,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
        tracep->fullQData(oldp+2906,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                       ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                           ? (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                            >> 0x1fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                       : 0ULL)),64);
        tracep->fullBit(oldp+2908,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
        tracep->fullQData(oldp+2909,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
        tracep->fullBit(oldp+2911,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        tracep->fullQData(oldp+2912,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                       : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
        tracep->fullQData(oldp+2914,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                       : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
        tracep->fullQData(oldp+2916,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        tracep->fullBit(oldp+2918,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+2919,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        tracep->fullBit(oldp+2920,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        tracep->fullQData(oldp+2921,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
        tracep->fullQData(oldp+2923,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                           : ((0U == 
                                               (3U 
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
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))),64);
        tracep->fullBit(oldp+2925,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        tracep->fullBit(oldp+2926,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
        tracep->fullBit(oldp+2927,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        tracep->fullQData(oldp+2928,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        tracep->fullBit(oldp+2930,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                    & ((0U != (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))) 
                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
        tracep->fullQData(oldp+2931,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                       ? ((0xffffffffffffff77ULL 
                                           & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                          | (QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                         >> 7U)))
                                                              ? 0x88U
                                                              : 0x80U))))
                                       : ((7U == (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                           : ((3U == 
                                               (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  ((0xffffffffffffffe0ULL 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm)))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                                    : 
                                                   ((6U 
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
        tracep->fullSData(oldp+2933,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                       ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        tracep->fullBit(oldp+2934,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        tracep->fullCData(oldp+2935,(((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                       ? 0xbU : ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 3U
                                                  : 0U))),6);
        tracep->fullBit(oldp+2936,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        tracep->fullBit(oldp+2937,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        tracep->fullCData(oldp+2938,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        tracep->fullBit(oldp+2939,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        tracep->fullBit(oldp+2940,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                          >> 1U))));
        tracep->fullBit(oldp+2941,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                          >> 2U))));
        tracep->fullBit(oldp+2942,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                          >> 3U))));
        tracep->fullCData(oldp+2943,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullBit(oldp+2944,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        tracep->fullQData(oldp+2945,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        tracep->fullBit(oldp+2947,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        tracep->fullBit(oldp+2948,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        tracep->fullBit(oldp+2949,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        tracep->fullBit(oldp+2950,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        tracep->fullBit(oldp+2951,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        tracep->fullBit(oldp+2952,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        tracep->fullBit(oldp+2953,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        tracep->fullBit(oldp+2954,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullBit(oldp+2955,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        tracep->fullBit(oldp+2956,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        tracep->fullBit(oldp+2957,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        tracep->fullQData(oldp+2958,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        tracep->fullQData(oldp+2960,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        tracep->fullQData(oldp+2962,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
        tracep->fullBit(oldp+2964,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 1U)))));
        tracep->fullQData(oldp+2965,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        tracep->fullBit(oldp+2967,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U)))));
        tracep->fullBit(oldp+2968,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U)))));
        tracep->fullQData(oldp+2969,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        tracep->fullQData(oldp+2971,(((1U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                       ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        tracep->fullWData(oldp+2973,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        tracep->fullBit(oldp+2976,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        tracep->fullBit(oldp+2977,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullCData(oldp+2978,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        VL_EXTEND_WQ(127,64, __Vtemp3302, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp3303, __Vtemp3302, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp3304[0U] = __Vtemp3303[0U];
        __Vtemp3304[1U] = __Vtemp3303[1U];
        __Vtemp3304[2U] = __Vtemp3303[2U];
        __Vtemp3304[3U] = (0x7fffffffU & __Vtemp3303[3U]);
        tracep->fullWData(oldp+2979,(__Vtemp3304),127);
        tracep->fullQData(oldp+2983,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                      >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+2985,(VL_SHIFTRS_QQI(64,64,6, 
                                                    ((1U 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        tracep->fullQData(oldp+2987,(((1U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                       ? VL_SHIFTRS_QQI(64,64,6, 
                                                        ((1U 
                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                       : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                            ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                          >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
        tracep->fullCData(oldp+2989,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))),3);
        tracep->fullQData(oldp+2990,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
        tracep->fullBit(oldp+2992,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        tracep->fullBit(oldp+2993,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        tracep->fullQData(oldp+2994,(((2U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                       : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp3305[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp3305[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 0x20U));
        __Vtemp3305[2U] = 1U;
        tracep->fullWData(oldp+2996,(__Vtemp3305),65);
        tracep->fullQData(oldp+2999,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        tracep->fullWData(oldp+3001,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+3004,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        tracep->fullQData(oldp+3006,((((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+3008,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullBit(oldp+3009,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        tracep->fullBit(oldp+3010,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
        tracep->fullQData(oldp+3011,((((QData)((IData)(
                                                       ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
        tracep->fullQData(oldp+3013,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        tracep->fullQData(oldp+3015,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        tracep->fullCData(oldp+3017,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        tracep->fullBit(oldp+3018,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        tracep->fullBit(oldp+3019,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        tracep->fullCData(oldp+3020,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        tracep->fullQData(oldp+3021,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        tracep->fullQData(oldp+3023,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))
                                       : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                           ? (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                            >> 0x1fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))
                                           : ((0x14U 
                                               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                               ? (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                               : ((4U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                                    : 
                                                   ((0U 
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
        tracep->fullQData(oldp+3025,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        tracep->fullBit(oldp+3027,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        tracep->fullQData(oldp+3028,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        tracep->fullBit(oldp+3030,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        tracep->fullWData(oldp+3031,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        tracep->fullBit(oldp+3035,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        tracep->fullBit(oldp+3036,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        tracep->fullQData(oldp+3037,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))),64);
        tracep->fullBit(oldp+3039,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+3040,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        tracep->fullBit(oldp+3041,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        tracep->fullQData(oldp+3042,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
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
        tracep->fullBit(oldp+3044,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        tracep->fullBit(oldp+3045,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        tracep->fullBit(oldp+3046,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))));
        tracep->fullWData(oldp+3047,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        tracep->fullWData(oldp+3050,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        tracep->fullWData(oldp+3053,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        tracep->fullWData(oldp+3056,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        tracep->fullWData(oldp+3059,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        tracep->fullWData(oldp+3062,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        tracep->fullWData(oldp+3065,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp3307[0U] = 1U;
        __Vtemp3307[1U] = 0U;
        __Vtemp3307[2U] = 0U;
        __Vtemp3308[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp3308[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp3308[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp3309, __Vtemp3307, __Vtemp3308);
        __Vtemp3310[0U] = __Vtemp3309[0U];
        __Vtemp3310[1U] = __Vtemp3309[1U];
        __Vtemp3310[2U] = (1U & __Vtemp3309[2U]);
        tracep->fullWData(oldp+3068,(__Vtemp3310),65);
        tracep->fullCData(oldp+3071,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        tracep->fullCData(oldp+3072,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        tracep->fullCData(oldp+3073,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        tracep->fullWData(oldp+3074,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        tracep->fullBit(oldp+3079,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                            | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp3313[0U] = 1U;
        __Vtemp3313[1U] = 0U;
        __Vtemp3313[2U] = 0U;
        __Vtemp3314[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp3314[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp3314[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp3315, __Vtemp3313, __Vtemp3314);
        tracep->fullBit(oldp+3080,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                             ^ __Vtemp3315[0U]) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                               ^ __Vtemp3315[1U])) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              ^ (1U 
                                                 & __Vtemp3315[2U]))))));
        tracep->fullBit(oldp+3081,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        tracep->fullBit(oldp+3082,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        tracep->fullBit(oldp+3083,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        tracep->fullBit(oldp+3084,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                          >> 3U))));
        tracep->fullQData(oldp+3085,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))),64);
        tracep->fullQData(oldp+3087,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]))))),64);
        tracep->fullBit(oldp+3089,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))));
        tracep->fullBit(oldp+3090,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 1U))));
        VL_EXTEND_WQ(130,64, __Vtemp3327, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp3331[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            __Vtemp3331[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0xffffffffU : 0U);
            __Vtemp3331[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 3U : 0U);
        } else {
            __Vtemp3331[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)
                                : __Vtemp3327[0U]);
            __Vtemp3331[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                           >> 0x20U))
                                : __Vtemp3327[1U]);
            __Vtemp3331[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x3fU)))
                                    ? 0xffffffffU : 0U)
                                : __Vtemp3327[2U]);
            __Vtemp3331[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x3fU)))
                                    ? 0xffffffffU : 0U)
                                : __Vtemp3327[3U]);
            __Vtemp3331[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x3fU)))
                                    ? 3U : 0U) : __Vtemp3327[4U]);
        }
        tracep->fullWData(oldp+3091,(__Vtemp3331),130);
        tracep->fullWData(oldp+3096,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp3333[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                           << 1U);
        __Vtemp3333[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                            >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                         << 1U));
        __Vtemp3333[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                  << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                << 1U)));
        tracep->fullWData(oldp+3099,(__Vtemp3333),67);
        tracep->fullCData(oldp+3102,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        tracep->fullWData(oldp+3103,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        tracep->fullWData(oldp+3106,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        tracep->fullWData(oldp+3111,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        tracep->fullCData(oldp+3116,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        __Vtemp3335[0U] = 1U;
        __Vtemp3335[1U] = 0U;
        __Vtemp3335[2U] = 0U;
        __Vtemp3335[3U] = 0U;
        __Vtemp3335[4U] = 0U;
        __Vtemp3336[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3336[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3336[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3336[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3336[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3337, __Vtemp3335, __Vtemp3336);
        __Vtemp3338[0U] = __Vtemp3337[0U];
        __Vtemp3338[1U] = __Vtemp3337[1U];
        __Vtemp3338[2U] = __Vtemp3337[2U];
        __Vtemp3338[3U] = __Vtemp3337[3U];
        __Vtemp3338[4U] = (3U & __Vtemp3337[4U]);
        VL_EXTEND_WW(131,130, __Vtemp3339, __Vtemp3338);
        __Vtemp3341[0U] = 1U;
        __Vtemp3341[1U] = 0U;
        __Vtemp3341[2U] = 0U;
        __Vtemp3341[3U] = 0U;
        __Vtemp3341[4U] = 0U;
        __Vtemp3342[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3342[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3342[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3342[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3342[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3343, __Vtemp3341, __Vtemp3342);
        __Vtemp3344[0U] = __Vtemp3343[0U];
        __Vtemp3344[1U] = __Vtemp3343[1U];
        __Vtemp3344[2U] = __Vtemp3343[2U];
        __Vtemp3344[3U] = __Vtemp3343[3U];
        __Vtemp3344[4U] = (3U & __Vtemp3343[4U]);
        VL_EXTEND_WW(131,130, __Vtemp3345, __Vtemp3344);
        __Vtemp3347[0U] = 1U;
        __Vtemp3347[1U] = 0U;
        __Vtemp3347[2U] = 0U;
        __Vtemp3347[3U] = 0U;
        __Vtemp3347[4U] = 0U;
        __Vtemp3348[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp3348[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp3348[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp3348[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp3348[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp3349, __Vtemp3347, __Vtemp3348);
        if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp3357[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp3357[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp3357[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp3357[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp3357[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp3357[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                : 0U);
            __Vtemp3357[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                : 0U);
            __Vtemp3357[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                : 0U);
            __Vtemp3357[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                : 0U);
            __Vtemp3357[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                : 0U);
        }
        VL_EXTEND_WW(131,130, __Vtemp3358, __Vtemp3357);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp3366[0U] = __Vtemp3339[0U];
            __Vtemp3366[1U] = __Vtemp3339[1U];
            __Vtemp3366[2U] = __Vtemp3339[2U];
            __Vtemp3366[3U] = __Vtemp3339[3U];
            __Vtemp3366[4U] = __Vtemp3339[4U];
        } else {
            __Vtemp3366[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[0U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? (__Vtemp3349[0U] 
                                    << 1U) : ((3U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                  << 1U)
                                               : __Vtemp3358[0U])));
            __Vtemp3366[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[1U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3349[0U] 
                                     >> 0x1fU) | (__Vtemp3349[1U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                           << 1U)) : 
                                    __Vtemp3358[1U])));
            __Vtemp3366[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[2U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3349[1U] 
                                     >> 0x1fU) | (__Vtemp3349[2U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                           << 1U)) : 
                                    __Vtemp3358[2U])));
            __Vtemp3366[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[3U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3349[2U] 
                                     >> 0x1fU) | (__Vtemp3349[3U] 
                                                  << 1U))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                           << 1U)) : 
                                    __Vtemp3358[3U])));
            __Vtemp3366[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                ? __Vtemp3345[4U] : 
                               ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                 ? ((__Vtemp3349[3U] 
                                     >> 0x1fU) | (6U 
                                                  & (__Vtemp3349[4U] 
                                                     << 1U)))
                                 : ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                     ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                           << 1U)) : 
                                    __Vtemp3358[4U])));
        }
        tracep->fullWData(oldp+3117,(__Vtemp3366),131);
        tracep->fullCData(oldp+3122,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        tracep->fullBit(oldp+3123,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+3124,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        tracep->fullQData(oldp+3125,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        tracep->fullBit(oldp+3127,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 4U))));
        tracep->fullQData(oldp+3128,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        tracep->fullQData(oldp+3130,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        tracep->fullQData(oldp+3132,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        tracep->fullQData(oldp+3134,(((7U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                       : ((3U == (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                           : ((5U == 
                                               (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                               ? ((0xffffffffffffffe0ULL 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm)))))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                                   : 
                                                  ((6U 
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
                                                     : 0ULL))))))),64);
        tracep->fullBit(oldp+3136,((0x10U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+3137,((0x18U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+3138,((0U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullBit(oldp+3139,((8U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))));
        tracep->fullBit(oldp+3140,(((0U == (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))) 
                                    | (8U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))))));
        tracep->fullCData(oldp+3141,(((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                       ? 0xbU : ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 3U
                                                  : 0U))),4);
        tracep->fullBit(oldp+3142,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        tracep->fullQData(oldp+3143,(((0xffffffffffffff77ULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                      | (QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                     >> 7U)))
                                                          ? 0x88U
                                                          : 0x80U))))),64);
        tracep->fullCData(oldp+3145,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 7U))),5);
        tracep->fullCData(oldp+3146,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullCData(oldp+3147,(((0x33U == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                       ? 1U : ((0x13U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                ? 1U
                                                : (
                                                   (0x1bU 
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
        tracep->fullCData(oldp+3148,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
        tracep->fullCData(oldp+3149,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
        tracep->fullBit(oldp+3150,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
        tracep->fullBit(oldp+3151,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
        tracep->fullCData(oldp+3152,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        tracep->fullBit(oldp+3153,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        tracep->fullQData(oldp+3154,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        tracep->fullQData(oldp+3156,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        tracep->fullQData(oldp+3158,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        tracep->fullQData(oldp+3160,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        tracep->fullQData(oldp+3162,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        tracep->fullQData(oldp+3164,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        tracep->fullQData(oldp+3166,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        tracep->fullQData(oldp+3168,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        tracep->fullQData(oldp+3170,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        tracep->fullQData(oldp+3172,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                       : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
        tracep->fullQData(oldp+3174,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        tracep->fullQData(oldp+3176,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        tracep->fullBit(oldp+3178,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        tracep->fullBit(oldp+3179,((0U == (0xffffU 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullBit(oldp+3180,((0x4000U == (0xffffU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        tracep->fullQData(oldp+3181,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                       ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                       : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        tracep->fullQData(oldp+3183,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        tracep->fullQData(oldp+3185,((((QData)((IData)(
                                                       ((((0x80U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 0x18U) 
                                                        | ((((0x40U 
                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x10U) 
                                                           | ((((0x20U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 8U) 
                                                              | ((0x10U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                  ? 0xffU
                                                                  : 0U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((4U 
                                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((2U 
                                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                              ? 0xffU
                                                                              : 0U)))))))),64);
        tracep->fullBit(oldp+3187,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
        tracep->fullQData(oldp+3188,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        tracep->fullCData(oldp+3190,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        tracep->fullBit(oldp+3191,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        tracep->fullBit(oldp+3192,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        tracep->fullIData(oldp+3193,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                         ? 0xffU : 0U) 
                                       << 0x18U) | 
                                      ((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                          ? 0xffU : 0U) 
                                        << 0x10U) | 
                                       ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                           ? 0xffU : 0U) 
                                         << 8U) | (
                                                   (1U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                    ? 0xffU
                                                    : 0U))))),32);
        tracep->fullIData(oldp+3194,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                         ? 0xffU : 0U) 
                                       << 0x18U) | 
                                      ((((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                          ? 0xffU : 0U) 
                                        << 0x10U) | 
                                       ((((0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                           ? 0xffU : 0U) 
                                         << 8U) | (
                                                   (0x10U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                    ? 0xffU
                                                    : 0U))))),32);
        tracep->fullBit(oldp+3195,(vlSelf->clock));
        tracep->fullBit(oldp+3196,(vlSelf->reset));
        tracep->fullQData(oldp+3197,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+3199,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+3201,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+3203,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+3205,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+3207,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+3209,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+3211,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+3213,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+3215,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+3217,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+3219,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+3221,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+3223,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+3225,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+3227,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+3229,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+3231,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+3233,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+3235,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+3237,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+3239,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+3241,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+3243,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+3245,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+3247,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+3249,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+3251,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+3253,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+3255,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+3257,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+3259,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+3261,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+3263,(vlSelf->io_difftest_inst),32);
        tracep->fullBit(oldp+3264,(vlSelf->io_difftest_commit));
        tracep->fullQData(oldp+3265,(vlSelf->io_inst_counter),64);
        tracep->fullBit(oldp+3267,(vlSelf->io_difftest_irq));
        tracep->fullQData(oldp+3268,(vlSelf->io_difftest_mstatus),64);
        tracep->fullQData(oldp+3270,(vlSelf->io_difftest_mcause),64);
        tracep->fullQData(oldp+3272,(vlSelf->io_difftest_mepc),64);
        tracep->fullQData(oldp+3274,(vlSelf->io_difftest_mtvec),64);
        tracep->fullBit(oldp+3276,(vlSelf->io_difftest_peripheral));
        tracep->fullBit(oldp+3277,(1U));
        __Vtemp3367[0U] = 0U;
        __Vtemp3367[1U] = 0U;
        __Vtemp3367[2U] = 0U;
        __Vtemp3367[3U] = 0U;
        tracep->fullWData(oldp+3278,(__Vtemp3367),128);
        __Vtemp3368[0U] = 0xffffffffU;
        __Vtemp3368[1U] = 0xffffffffU;
        __Vtemp3368[2U] = 0xffffffffU;
        __Vtemp3368[3U] = 0xffffffffU;
        tracep->fullWData(oldp+3282,(__Vtemp3368),128);
    }
}
