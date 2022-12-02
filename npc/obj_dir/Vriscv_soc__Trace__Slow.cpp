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
        tracep->declBit(c+244,"clock", false,-1);
        tracep->declBit(c+245,"reset", false,-1);
        tracep->declQuad(c+246,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+248,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+250,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+252,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+254,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+256,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+258,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+260,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+262,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+264,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+266,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+268,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+270,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+272,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+274,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+276,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+278,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+280,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+282,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+284,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+286,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+288,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+290,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+292,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+294,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+296,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+298,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+300,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+302,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+304,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+306,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+308,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+310,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+312,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+244,"riscv_soc clock", false,-1);
        tracep->declBit(c+245,"riscv_soc reset", false,-1);
        tracep->declQuad(c+246,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+252,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+254,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+256,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+258,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+260,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+262,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+264,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+266,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+268,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+270,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+272,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+274,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+276,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+278,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+280,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+282,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+284,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+286,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+288,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+290,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+292,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+294,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+296,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+298,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+300,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+302,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+304,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+306,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+308,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+310,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+312,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+244,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core_reset", false,-1);
        tracep->declQuad(c+1,"riscv_soc core_io_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc core_io_out_waddr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc core_io_out_wdata", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc core_io_out_raddr", false,-1, 63,0);
        tracep->declBit(c+9,"riscv_soc core_io_out_wen", false,-1);
        tracep->declBus(c+10,"riscv_soc core_io_out_wstrb", false,-1, 7,0);
        tracep->declQuad(c+11,"riscv_soc core_regTempPC", false,-1, 63,0);
        tracep->declBus(c+13,"riscv_soc core_regInst", false,-1, 31,0);
        tracep->declQuad(c+313,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+20,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+22,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+24,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+32,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+36,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+38,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+40,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+42,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+44,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+46,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+48,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+50,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+54,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+56,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+58,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+62,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+64,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+66,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+68,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+70,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+72,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declBit(c+244,"riscv_soc axi_ram_clock", false,-1);
        tracep->declQuad(c+7,"riscv_soc axi_ram_io_raddr", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv_soc axi_ram_io_rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc axi_ram_io_waddr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc axi_ram_io_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"riscv_soc axi_ram_io_wstrb", false,-1, 7,0);
        tracep->declBit(c+9,"riscv_soc axi_ram_io_wen", false,-1);
        tracep->declBus(c+13,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+76,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+244,"riscv_soc core clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core reset", false,-1);
        tracep->declQuad(c+1,"riscv_soc core io_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc core io_out_waddr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc core io_out_wdata", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv_soc core io_out_raddr", false,-1, 63,0);
        tracep->declBit(c+9,"riscv_soc core io_out_wen", false,-1);
        tracep->declBus(c+10,"riscv_soc core io_out_wstrb", false,-1, 7,0);
        tracep->declQuad(c+11,"riscv_soc core regTempPC", false,-1, 63,0);
        tracep->declBus(c+13,"riscv_soc core regInst", false,-1, 31,0);
        tracep->declQuad(c+78,"riscv_soc core i_cache_io_cpu_in_addr", false,-1, 63,0);
        tracep->declQuad(c+313,"riscv_soc core i_cache_io_cpu_in_wdata", false,-1, 63,0);
        tracep->declBit(c+315,"riscv_soc core i_cache_io_cpu_in_is_w", false,-1);
        tracep->declBit(c+80,"riscv_soc core i_cache_io_cpu_in_avalid", false,-1);
        tracep->declBus(c+316,"riscv_soc core i_cache_io_cpu_in_wstrb", false,-1, 7,0);
        tracep->declQuad(c+81,"riscv_soc core i_cache_io_cpu_out_rdata", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core i_cache_io_cpu_out_rvalid", false,-1);
        tracep->declBit(c+84,"riscv_soc core i_cache_io_cpu_out_w_ok", false,-1);
        tracep->declQuad(c+81,"riscv_soc core i_cache_io_bus_in_data", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core i_cache_io_bus_in_valid", false,-1);
        tracep->declQuad(c+78,"riscv_soc core i_cache_io_bus_out_waddr", false,-1, 63,0);
        tracep->declQuad(c+313,"riscv_soc core i_cache_io_bus_out_wdata", false,-1, 63,0);
        tracep->declBit(c+315,"riscv_soc core i_cache_io_bus_out_wvalid", false,-1);
        tracep->declQuad(c+78,"riscv_soc core i_cache_io_bus_out_raddr", false,-1, 63,0);
        tracep->declBit(c+80,"riscv_soc core i_cache_io_bus_out_avalid", false,-1);
        tracep->declBus(c+316,"riscv_soc core i_cache_io_bus_out_wstrb", false,-1, 7,0);
        tracep->declQuad(c+3,"riscv_soc core d_cache_io_cpu_in_addr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc core d_cache_io_cpu_in_wdata", false,-1, 63,0);
        tracep->declBit(c+9,"riscv_soc core d_cache_io_cpu_in_is_w", false,-1);
        tracep->declBit(c+85,"riscv_soc core d_cache_io_cpu_in_avalid", false,-1);
        tracep->declBus(c+10,"riscv_soc core d_cache_io_cpu_in_wstrb", false,-1, 7,0);
        tracep->declQuad(c+81,"riscv_soc core d_cache_io_cpu_out_rdata", false,-1, 63,0);
        tracep->declBit(c+86,"riscv_soc core d_cache_io_cpu_out_rvalid", false,-1);
        tracep->declBit(c+87,"riscv_soc core d_cache_io_cpu_out_w_ok", false,-1);
        tracep->declQuad(c+81,"riscv_soc core d_cache_io_bus_in_data", false,-1, 63,0);
        tracep->declBit(c+86,"riscv_soc core d_cache_io_bus_in_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core d_cache_io_bus_out_waddr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc core d_cache_io_bus_out_wdata", false,-1, 63,0);
        tracep->declBit(c+9,"riscv_soc core d_cache_io_bus_out_wvalid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core d_cache_io_bus_out_raddr", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core d_cache_io_bus_out_avalid", false,-1);
        tracep->declBus(c+10,"riscv_soc core d_cache_io_bus_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+244,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core fetch_reset", false,-1);
        tracep->declQuad(c+81,"riscv_soc core fetch_io_in_inst", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core fetch_io_in_valid", false,-1);
        tracep->declBit(c+88,"riscv_soc core fetch_io_in_stall", false,-1);
        tracep->declQuad(c+89,"riscv_soc core fetch_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+91,"riscv_soc core fetch_io_in_valid_next_pc", false,-1);
        tracep->declQuad(c+78,"riscv_soc core fetch_io_out_pc0", false,-1, 63,0);
        tracep->declBit(c+80,"riscv_soc core fetch_io_out_rvalid", false,-1);
        tracep->declQuad(c+11,"riscv_soc core fetch_io_out_pc1", false,-1, 63,0);
        tracep->declBus(c+13,"riscv_soc core fetch_io_out_inst", false,-1, 31,0);
        tracep->declQuad(c+11,"riscv_soc core fetch_regTempPC_0", false,-1, 63,0);
        tracep->declBus(c+13,"riscv_soc core fetch_regInst_0", false,-1, 31,0);
        tracep->declBit(c+244,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core execute_reset", false,-1);
        tracep->declBus(c+92,"riscv_soc core execute_io_in_opType", false,-1, 2,0);
        tracep->declBus(c+93,"riscv_soc core execute_io_in_exuType", false,-1, 5,0);
        tracep->declQuad(c+94,"riscv_soc core execute_io_in_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core execute_io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core execute_io_in_imm_data", false,-1, 63,0);
        tracep->declQuad(c+100,"riscv_soc core execute_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+102,"riscv_soc core execute_io_in_rs_addr", false,-1, 4,0);
        tracep->declBit(c+88,"riscv_soc core execute_io_in_stall", false,-1);
        tracep->declBus(c+103,"riscv_soc core execute_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core execute_io_out_rs_data", false,-1, 63,0);
        tracep->declBit(c+106,"riscv_soc core execute_io_out_w_rs_en", false,-1);
        tracep->declBus(c+107,"riscv_soc core execute_io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+108,"riscv_soc core execute_io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core execute_io_out_mem_addr", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core execute_io_out_mem_avalid", false,-1);
        tracep->declBit(c+113,"riscv_soc core execute_io_out_w_mem_en", false,-1);
        tracep->declQuad(c+89,"riscv_soc core execute_io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+91,"riscv_soc core execute_io_out_valid_next_pc", false,-1);
        tracep->declBit(c+244,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core decode_reset", false,-1);
        tracep->declBus(c+13,"riscv_soc core decode_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+11,"riscv_soc core decode_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+114,"riscv_soc core decode_io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"riscv_soc core decode_io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core decode_io_in_w_rs_en", false,-1);
        tracep->declBit(c+88,"riscv_soc core decode_io_in_stall", false,-1);
        tracep->declQuad(c+94,"riscv_soc core decode_io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core decode_io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+102,"riscv_soc core decode_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"riscv_soc core decode_io_out_imm_data", false,-1, 63,0);
        tracep->declBus(c+92,"riscv_soc core decode_io_out_opType", false,-1, 2,0);
        tracep->declBus(c+93,"riscv_soc core decode_io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+100,"riscv_soc core decode_io_out_pc", false,-1, 63,0);
        tracep->declQuad(c+313,"riscv_soc core decode__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv_soc core decode__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv_soc core decode__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core decode__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+20,"riscv_soc core decode__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+22,"riscv_soc core decode__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+24,"riscv_soc core decode__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core decode__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv_soc core decode__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core decode__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+32,"riscv_soc core decode__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv_soc core decode__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+36,"riscv_soc core decode__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+38,"riscv_soc core decode__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+40,"riscv_soc core decode__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+42,"riscv_soc core decode__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+44,"riscv_soc core decode__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+46,"riscv_soc core decode__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+48,"riscv_soc core decode__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+50,"riscv_soc core decode__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core decode__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+54,"riscv_soc core decode__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+56,"riscv_soc core decode__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+58,"riscv_soc core decode__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv_soc core decode__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+62,"riscv_soc core decode__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+64,"riscv_soc core decode__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+66,"riscv_soc core decode__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+68,"riscv_soc core decode__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+70,"riscv_soc core decode__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+72,"riscv_soc core decode__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv_soc core decode__WIRE_0_31", false,-1, 63,0);
        tracep->declBit(c+244,"riscv_soc core write_back_clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core write_back_reset", false,-1);
        tracep->declBus(c+103,"riscv_soc core write_back_io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core write_back_io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+106,"riscv_soc core write_back_io_in_w_rs_en", false,-1);
        tracep->declBus(c+107,"riscv_soc core write_back_io_in_exuType", false,-1, 5,0);
        tracep->declQuad(c+108,"riscv_soc core write_back_io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core write_back_io_in_mem_addr", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core write_back_io_in_mem_avalid", false,-1);
        tracep->declBit(c+113,"riscv_soc core write_back_io_in_w_mem_en", false,-1);
        tracep->declQuad(c+81,"riscv_soc core write_back_io_in_mem_data", false,-1, 63,0);
        tracep->declBit(c+86,"riscv_soc core write_back_io_in_mem_valid", false,-1);
        tracep->declBit(c+87,"riscv_soc core write_back_io_in_w_ok", false,-1);
        tracep->declBus(c+114,"riscv_soc core write_back_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"riscv_soc core write_back_io_out_result_data", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core write_back_io_out_w_rs_en", false,-1);
        tracep->declQuad(c+5,"riscv_soc core write_back_io_out_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+9,"riscv_soc core write_back_io_out_mem_wvalid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core write_back_io_out_mem_addr", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core write_back_io_out_mem_avalid", false,-1);
        tracep->declBus(c+10,"riscv_soc core write_back_io_out_mem_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"riscv_soc core write_back_io_out_stall", false,-1);
        tracep->declBit(c+118,"riscv_soc core is_read_mem", false,-1);
        tracep->declBit(c+119,"riscv_soc core is_read_inst", false,-1);
        tracep->declQuad(c+81,"riscv_soc core tem_reg_rdata", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core tem_reg_is_read_inst", false,-1);
        tracep->declBit(c+86,"riscv_soc core tem_reg_is_read_mem", false,-1);
        tracep->declQuad(c+78,"riscv_soc core i_cache io_cpu_in_addr", false,-1, 63,0);
        tracep->declQuad(c+313,"riscv_soc core i_cache io_cpu_in_wdata", false,-1, 63,0);
        tracep->declBit(c+315,"riscv_soc core i_cache io_cpu_in_is_w", false,-1);
        tracep->declBit(c+80,"riscv_soc core i_cache io_cpu_in_avalid", false,-1);
        tracep->declBus(c+316,"riscv_soc core i_cache io_cpu_in_wstrb", false,-1, 7,0);
        tracep->declQuad(c+81,"riscv_soc core i_cache io_cpu_out_rdata", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core i_cache io_cpu_out_rvalid", false,-1);
        tracep->declBit(c+84,"riscv_soc core i_cache io_cpu_out_w_ok", false,-1);
        tracep->declQuad(c+81,"riscv_soc core i_cache io_bus_in_data", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core i_cache io_bus_in_valid", false,-1);
        tracep->declQuad(c+78,"riscv_soc core i_cache io_bus_out_waddr", false,-1, 63,0);
        tracep->declQuad(c+313,"riscv_soc core i_cache io_bus_out_wdata", false,-1, 63,0);
        tracep->declBit(c+315,"riscv_soc core i_cache io_bus_out_wvalid", false,-1);
        tracep->declQuad(c+78,"riscv_soc core i_cache io_bus_out_raddr", false,-1, 63,0);
        tracep->declBit(c+80,"riscv_soc core i_cache io_bus_out_avalid", false,-1);
        tracep->declBus(c+316,"riscv_soc core i_cache io_bus_out_wstrb", false,-1, 7,0);
        tracep->declQuad(c+3,"riscv_soc core d_cache io_cpu_in_addr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc core d_cache io_cpu_in_wdata", false,-1, 63,0);
        tracep->declBit(c+9,"riscv_soc core d_cache io_cpu_in_is_w", false,-1);
        tracep->declBit(c+85,"riscv_soc core d_cache io_cpu_in_avalid", false,-1);
        tracep->declBus(c+10,"riscv_soc core d_cache io_cpu_in_wstrb", false,-1, 7,0);
        tracep->declQuad(c+81,"riscv_soc core d_cache io_cpu_out_rdata", false,-1, 63,0);
        tracep->declBit(c+86,"riscv_soc core d_cache io_cpu_out_rvalid", false,-1);
        tracep->declBit(c+87,"riscv_soc core d_cache io_cpu_out_w_ok", false,-1);
        tracep->declQuad(c+81,"riscv_soc core d_cache io_bus_in_data", false,-1, 63,0);
        tracep->declBit(c+86,"riscv_soc core d_cache io_bus_in_valid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core d_cache io_bus_out_waddr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc core d_cache io_bus_out_wdata", false,-1, 63,0);
        tracep->declBit(c+9,"riscv_soc core d_cache io_bus_out_wvalid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core d_cache io_bus_out_raddr", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core d_cache io_bus_out_avalid", false,-1);
        tracep->declBus(c+10,"riscv_soc core d_cache io_bus_out_wstrb", false,-1, 7,0);
        tracep->declBit(c+244,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core fetch reset", false,-1);
        tracep->declQuad(c+81,"riscv_soc core fetch io_in_inst", false,-1, 63,0);
        tracep->declBit(c+83,"riscv_soc core fetch io_in_valid", false,-1);
        tracep->declBit(c+88,"riscv_soc core fetch io_in_stall", false,-1);
        tracep->declQuad(c+89,"riscv_soc core fetch io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+91,"riscv_soc core fetch io_in_valid_next_pc", false,-1);
        tracep->declQuad(c+78,"riscv_soc core fetch io_out_pc0", false,-1, 63,0);
        tracep->declBit(c+80,"riscv_soc core fetch io_out_rvalid", false,-1);
        tracep->declQuad(c+11,"riscv_soc core fetch io_out_pc1", false,-1, 63,0);
        tracep->declBus(c+13,"riscv_soc core fetch io_out_inst", false,-1, 31,0);
        tracep->declQuad(c+11,"riscv_soc core fetch regTempPC_0", false,-1, 63,0);
        tracep->declBus(c+13,"riscv_soc core fetch regInst_0", false,-1, 31,0);
        tracep->declQuad(c+78,"riscv_soc core fetch regPC", false,-1, 63,0);
        tracep->declBit(c+80,"riscv_soc core fetch pc_valid", false,-1);
        tracep->declBus(c+13,"riscv_soc core fetch regInst", false,-1, 31,0);
        tracep->declQuad(c+11,"riscv_soc core fetch regTempPC", false,-1, 63,0);
        tracep->declBit(c+244,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core execute reset", false,-1);
        tracep->declBus(c+92,"riscv_soc core execute io_in_opType", false,-1, 2,0);
        tracep->declBus(c+93,"riscv_soc core execute io_in_exuType", false,-1, 5,0);
        tracep->declQuad(c+94,"riscv_soc core execute io_in_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core execute io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core execute io_in_imm_data", false,-1, 63,0);
        tracep->declQuad(c+100,"riscv_soc core execute io_in_pc", false,-1, 63,0);
        tracep->declBus(c+102,"riscv_soc core execute io_in_rs_addr", false,-1, 4,0);
        tracep->declBit(c+88,"riscv_soc core execute io_in_stall", false,-1);
        tracep->declBus(c+103,"riscv_soc core execute io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core execute io_out_rs_data", false,-1, 63,0);
        tracep->declBit(c+106,"riscv_soc core execute io_out_w_rs_en", false,-1);
        tracep->declBus(c+107,"riscv_soc core execute io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+108,"riscv_soc core execute io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core execute io_out_mem_addr", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core execute io_out_mem_avalid", false,-1);
        tracep->declBit(c+113,"riscv_soc core execute io_out_w_mem_en", false,-1);
        tracep->declQuad(c+89,"riscv_soc core execute io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+91,"riscv_soc core execute io_out_valid_next_pc", false,-1);
        tracep->declBus(c+93,"riscv_soc core execute alu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+94,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 63,0);
        tracep->declQuad(c+100,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core execute alu_exu_io_result_data", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core execute alu_exu_io_result_pc", false,-1, 63,0);
        tracep->declBit(c+124,"riscv_soc core execute alu_exu_io_next_pc_valid", false,-1);
        tracep->declBit(c+125,"riscv_soc core execute alu_exu_io_w_rs_en", false,-1);
        tracep->declBit(c+126,"riscv_soc core execute lsu_exu_io_valid", false,-1);
        tracep->declBus(c+93,"riscv_soc core execute lsu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+94,"riscv_soc core execute lsu_exu_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core execute lsu_exu_io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core execute lsu_exu_io_address_result", false,-1, 63,0);
        tracep->declBit(c+126,"riscv_soc core execute lsu_exu_io_avalid", false,-1);
        tracep->declBit(c+129,"riscv_soc core execute lsu_exu_io_w_mem_en", false,-1);
        tracep->declQuad(c+130,"riscv_soc core execute reg_rs_addr", false,-1, 63,0);
        tracep->declQuad(c+104,"riscv_soc core execute reg_rs_data", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+91,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+106,"riscv_soc core execute reg_w_rs_en", false,-1);
        tracep->declBus(c+107,"riscv_soc core execute reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+108,"riscv_soc core execute reg_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core execute reg_mem_addr", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core execute reg_mem_avalid", false,-1);
        tracep->declBit(c+113,"riscv_soc core execute reg_w_mem_en", false,-1);
        tracep->declBus(c+132,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declArray(c+133,"riscv_soc core execute temp_w_en_and_rs_data", false,-1, 64,0);
        tracep->declBit(c+136,"riscv_soc core execute w_rs_en", false,-1);
        tracep->declQuad(c+137,"riscv_soc core execute rs_data", false,-1, 63,0);
        tracep->declBus(c+93,"riscv_soc core execute alu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+94,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core execute alu_exu io_op_imm", false,-1, 63,0);
        tracep->declQuad(c+100,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+120,"riscv_soc core execute alu_exu io_result_data", false,-1, 63,0);
        tracep->declQuad(c+122,"riscv_soc core execute alu_exu io_result_pc", false,-1, 63,0);
        tracep->declBit(c+124,"riscv_soc core execute alu_exu io_next_pc_valid", false,-1);
        tracep->declBit(c+125,"riscv_soc core execute alu_exu io_w_rs_en", false,-1);
        tracep->declQuad(c+139,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declArray(c+141,"riscv_soc core execute alu_exu subresult", false,-1, 64,0);
        tracep->declBit(c+144,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+145,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declQuad(c+146,"riscv_soc core execute alu_exu sllw_temp", false,-1, 62,0);
        tracep->declBus(c+148,"riscv_soc core execute alu_exu srlw_temp", false,-1, 31,0);
        tracep->declBus(c+149,"riscv_soc core execute alu_exu sraw_temp", false,-1, 31,0);
        tracep->declArray(c+150,"riscv_soc core execute alu_exu temp_result_data", false,-1, 127,0);
        tracep->declArray(c+154,"riscv_soc core execute alu_exu next_pc3", false,-1, 64,0);
        tracep->declArray(c+157,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declBit(c+126,"riscv_soc core execute lsu_exu io_valid", false,-1);
        tracep->declBus(c+93,"riscv_soc core execute lsu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+94,"riscv_soc core execute lsu_exu io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core execute lsu_exu io_imm_data", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv_soc core execute lsu_exu io_address_result", false,-1, 63,0);
        tracep->declBit(c+126,"riscv_soc core execute lsu_exu io_avalid", false,-1);
        tracep->declBit(c+129,"riscv_soc core execute lsu_exu io_w_mem_en", false,-1);
        tracep->declBit(c+244,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core decode reset", false,-1);
        tracep->declBus(c+13,"riscv_soc core decode io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+11,"riscv_soc core decode io_in_pc", false,-1, 63,0);
        tracep->declBus(c+114,"riscv_soc core decode io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"riscv_soc core decode io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core decode io_in_w_rs_en", false,-1);
        tracep->declBit(c+88,"riscv_soc core decode io_in_stall", false,-1);
        tracep->declQuad(c+94,"riscv_soc core decode io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core decode io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+102,"riscv_soc core decode io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+98,"riscv_soc core decode io_out_imm_data", false,-1, 63,0);
        tracep->declBus(c+92,"riscv_soc core decode io_out_opType", false,-1, 2,0);
        tracep->declBus(c+93,"riscv_soc core decode io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+100,"riscv_soc core decode io_out_pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+160+i*2,"riscv_soc core decode regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_en", false,-1);
        tracep->declBus(c+318,"riscv_soc core decode regfile_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+224,"riscv_soc core decode regfile_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+319,"riscv_soc core decode regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+14,"riscv_soc core decode regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_2_en", false,-1);
        tracep->declBus(c+320,"riscv_soc core decode regfile_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"riscv_soc core decode regfile_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_3_en", false,-1);
        tracep->declBus(c+321,"riscv_soc core decode regfile_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+18,"riscv_soc core decode regfile_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+322,"riscv_soc core decode regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+20,"riscv_soc core decode regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_5_en", false,-1);
        tracep->declBus(c+323,"riscv_soc core decode regfile_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+22,"riscv_soc core decode regfile_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_6_en", false,-1);
        tracep->declBus(c+324,"riscv_soc core decode regfile_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+24,"riscv_soc core decode regfile_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_7_en", false,-1);
        tracep->declBus(c+325,"riscv_soc core decode regfile_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+26,"riscv_soc core decode regfile_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_8_en", false,-1);
        tracep->declBus(c+326,"riscv_soc core decode regfile_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+28,"riscv_soc core decode regfile_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_9_en", false,-1);
        tracep->declBus(c+327,"riscv_soc core decode regfile_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+30,"riscv_soc core decode regfile_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_10_en", false,-1);
        tracep->declBus(c+328,"riscv_soc core decode regfile_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+32,"riscv_soc core decode regfile_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_11_en", false,-1);
        tracep->declBus(c+329,"riscv_soc core decode regfile_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+34,"riscv_soc core decode regfile_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_12_en", false,-1);
        tracep->declBus(c+330,"riscv_soc core decode regfile_MPORT_12_addr", false,-1, 4,0);
        tracep->declQuad(c+36,"riscv_soc core decode regfile_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_13_en", false,-1);
        tracep->declBus(c+331,"riscv_soc core decode regfile_MPORT_13_addr", false,-1, 4,0);
        tracep->declQuad(c+38,"riscv_soc core decode regfile_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_14_en", false,-1);
        tracep->declBus(c+332,"riscv_soc core decode regfile_MPORT_14_addr", false,-1, 4,0);
        tracep->declQuad(c+40,"riscv_soc core decode regfile_MPORT_14_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_15_en", false,-1);
        tracep->declBus(c+333,"riscv_soc core decode regfile_MPORT_15_addr", false,-1, 4,0);
        tracep->declQuad(c+42,"riscv_soc core decode regfile_MPORT_15_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_16_en", false,-1);
        tracep->declBus(c+334,"riscv_soc core decode regfile_MPORT_16_addr", false,-1, 4,0);
        tracep->declQuad(c+44,"riscv_soc core decode regfile_MPORT_16_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_17_en", false,-1);
        tracep->declBus(c+335,"riscv_soc core decode regfile_MPORT_17_addr", false,-1, 4,0);
        tracep->declQuad(c+46,"riscv_soc core decode regfile_MPORT_17_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_18_en", false,-1);
        tracep->declBus(c+336,"riscv_soc core decode regfile_MPORT_18_addr", false,-1, 4,0);
        tracep->declQuad(c+48,"riscv_soc core decode regfile_MPORT_18_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_19_en", false,-1);
        tracep->declBus(c+337,"riscv_soc core decode regfile_MPORT_19_addr", false,-1, 4,0);
        tracep->declQuad(c+50,"riscv_soc core decode regfile_MPORT_19_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_20_en", false,-1);
        tracep->declBus(c+338,"riscv_soc core decode regfile_MPORT_20_addr", false,-1, 4,0);
        tracep->declQuad(c+52,"riscv_soc core decode regfile_MPORT_20_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_21_en", false,-1);
        tracep->declBus(c+339,"riscv_soc core decode regfile_MPORT_21_addr", false,-1, 4,0);
        tracep->declQuad(c+54,"riscv_soc core decode regfile_MPORT_21_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_22_en", false,-1);
        tracep->declBus(c+340,"riscv_soc core decode regfile_MPORT_22_addr", false,-1, 4,0);
        tracep->declQuad(c+56,"riscv_soc core decode regfile_MPORT_22_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_23_en", false,-1);
        tracep->declBus(c+341,"riscv_soc core decode regfile_MPORT_23_addr", false,-1, 4,0);
        tracep->declQuad(c+58,"riscv_soc core decode regfile_MPORT_23_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_24_en", false,-1);
        tracep->declBus(c+342,"riscv_soc core decode regfile_MPORT_24_addr", false,-1, 4,0);
        tracep->declQuad(c+60,"riscv_soc core decode regfile_MPORT_24_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_25_en", false,-1);
        tracep->declBus(c+343,"riscv_soc core decode regfile_MPORT_25_addr", false,-1, 4,0);
        tracep->declQuad(c+62,"riscv_soc core decode regfile_MPORT_25_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_26_en", false,-1);
        tracep->declBus(c+344,"riscv_soc core decode regfile_MPORT_26_addr", false,-1, 4,0);
        tracep->declQuad(c+64,"riscv_soc core decode regfile_MPORT_26_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_27_en", false,-1);
        tracep->declBus(c+345,"riscv_soc core decode regfile_MPORT_27_addr", false,-1, 4,0);
        tracep->declQuad(c+66,"riscv_soc core decode regfile_MPORT_27_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_28_en", false,-1);
        tracep->declBus(c+346,"riscv_soc core decode regfile_MPORT_28_addr", false,-1, 4,0);
        tracep->declQuad(c+68,"riscv_soc core decode regfile_MPORT_28_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_29_en", false,-1);
        tracep->declBus(c+347,"riscv_soc core decode regfile_MPORT_29_addr", false,-1, 4,0);
        tracep->declQuad(c+70,"riscv_soc core decode regfile_MPORT_29_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_30_en", false,-1);
        tracep->declBus(c+348,"riscv_soc core decode regfile_MPORT_30_addr", false,-1, 4,0);
        tracep->declQuad(c+72,"riscv_soc core decode regfile_MPORT_30_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_31_en", false,-1);
        tracep->declBus(c+349,"riscv_soc core decode regfile_MPORT_31_addr", false,-1, 4,0);
        tracep->declQuad(c+74,"riscv_soc core decode regfile_MPORT_31_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+226,"riscv_soc core decode regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+227,"riscv_soc core decode regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+229,"riscv_soc core decode regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+230,"riscv_soc core decode regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv_soc core decode regfile_MPORT_32_data", false,-1, 63,0);
        tracep->declBus(c+114,"riscv_soc core decode regfile_MPORT_32_addr", false,-1, 4,0);
        tracep->declBit(c+317,"riscv_soc core decode regfile_MPORT_32_mask", false,-1);
        tracep->declBit(c+232,"riscv_soc core decode regfile_MPORT_32_en", false,-1);
        tracep->declQuad(c+94,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+96,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+233,"riscv_soc core decode reg_dest_rs_addr", false,-1, 63,0);
        tracep->declQuad(c+98,"riscv_soc core decode reg_imm", false,-1, 63,0);
        tracep->declBus(c+92,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+93,"riscv_soc core decode reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+100,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+235,"riscv_soc core decode opType", false,-1, 1,0);
        tracep->declBus(c+236,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBus(c+229,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+226,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+237,"riscv_soc core decode dest_rs_addr", false,-1, 4,0);
        tracep->declBus(c+238,"riscv_soc core decode csr_addr", false,-1, 11,0);
        tracep->declBit(c+244,"riscv_soc core write_back clock", false,-1);
        tracep->declBit(c+245,"riscv_soc core write_back reset", false,-1);
        tracep->declBus(c+103,"riscv_soc core write_back io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+104,"riscv_soc core write_back io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+106,"riscv_soc core write_back io_in_w_rs_en", false,-1);
        tracep->declBus(c+107,"riscv_soc core write_back io_in_exuType", false,-1, 5,0);
        tracep->declQuad(c+108,"riscv_soc core write_back io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv_soc core write_back io_in_mem_addr", false,-1, 63,0);
        tracep->declBit(c+112,"riscv_soc core write_back io_in_mem_avalid", false,-1);
        tracep->declBit(c+113,"riscv_soc core write_back io_in_w_mem_en", false,-1);
        tracep->declQuad(c+81,"riscv_soc core write_back io_in_mem_data", false,-1, 63,0);
        tracep->declBit(c+86,"riscv_soc core write_back io_in_mem_valid", false,-1);
        tracep->declBit(c+87,"riscv_soc core write_back io_in_w_ok", false,-1);
        tracep->declBus(c+114,"riscv_soc core write_back io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"riscv_soc core write_back io_out_result_data", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core write_back io_out_w_rs_en", false,-1);
        tracep->declQuad(c+5,"riscv_soc core write_back io_out_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+9,"riscv_soc core write_back io_out_mem_wvalid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core write_back io_out_mem_addr", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core write_back io_out_mem_avalid", false,-1);
        tracep->declBus(c+10,"riscv_soc core write_back io_out_mem_wstrb", false,-1, 7,0);
        tracep->declBit(c+88,"riscv_soc core write_back io_out_stall", false,-1);
        tracep->declBit(c+88,"riscv_soc core write_back reg_stall", false,-1);
        tracep->declQuad(c+5,"riscv_soc core write_back reg_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"riscv_soc core write_back reg_mem_wstrb", false,-1, 7,0);
        tracep->declBit(c+9,"riscv_soc core write_back reg_mem_wvalid", false,-1);
        tracep->declQuad(c+3,"riscv_soc core write_back reg_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+239,"riscv_soc core write_back mem_data", false,-1, 63,0);
        tracep->declQuad(c+241,"riscv_soc core write_back mem_wstrb", false,-1, 63,0);
        tracep->declBit(c+85,"riscv_soc core write_back reg_mem_avalid", false,-1);
        tracep->declBit(c+243,"riscv_soc core write_back reg_ls_state", false,-1);
        tracep->declBus(c+114,"riscv_soc core write_back reg_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+115,"riscv_soc core write_back reg_result_data", false,-1, 63,0);
        tracep->declBit(c+117,"riscv_soc core write_back reg_w_rs_en", false,-1);
        tracep->declBit(c+244,"riscv_soc axi_ram clock", false,-1);
        tracep->declQuad(c+7,"riscv_soc axi_ram io_raddr", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv_soc axi_ram io_rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc axi_ram io_waddr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc axi_ram io_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"riscv_soc axi_ram io_wstrb", false,-1, 7,0);
        tracep->declBit(c+9,"riscv_soc axi_ram io_wen", false,-1);
        tracep->declBit(c+244,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"riscv_soc axi_ram mem_wstrb", false,-1, 7,0);
        tracep->declBit(c+9,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declBit(c+244,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+7,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declBus(c+10,"riscv_soc axi_ram mem wstrb", false,-1, 7,0);
        tracep->declBit(c+9,"riscv_soc axi_ram mem wen", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp1324;
    VlWide<3>/*95:0*/ __Vtemp1325;
    VlWide<3>/*95:0*/ __Vtemp1326;
    VlWide<3>/*95:0*/ __Vtemp1328;
    VlWide<3>/*95:0*/ __Vtemp1329;
    VlWide<3>/*95:0*/ __Vtemp1331;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
        tracep->fullQData(oldp+3,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_addr),64);
        tracep->fullQData(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wdata),64);
        tracep->fullQData(oldp+7,(vlSelf->riscv_soc__DOT__core_io_out_raddr),64);
        tracep->fullBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid));
        tracep->fullCData(oldp+10,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb),8);
        tracep->fullQData(oldp+11,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regTempPC),64);
        tracep->fullIData(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst),32);
        tracep->fullQData(oldp+14,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [1U]),64);
        tracep->fullQData(oldp+16,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [2U]),64);
        tracep->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [3U]),64);
        tracep->fullQData(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [4U]),64);
        tracep->fullQData(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [5U]),64);
        tracep->fullQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [6U]),64);
        tracep->fullQData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [7U]),64);
        tracep->fullQData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [8U]),64);
        tracep->fullQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [9U]),64);
        tracep->fullQData(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xaU]),64);
        tracep->fullQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xbU]),64);
        tracep->fullQData(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xcU]),64);
        tracep->fullQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xdU]),64);
        tracep->fullQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xeU]),64);
        tracep->fullQData(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xfU]),64);
        tracep->fullQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x10U]),64);
        tracep->fullQData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x11U]),64);
        tracep->fullQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x12U]),64);
        tracep->fullQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x13U]),64);
        tracep->fullQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x14U]),64);
        tracep->fullQData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x15U]),64);
        tracep->fullQData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x16U]),64);
        tracep->fullQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x17U]),64);
        tracep->fullQData(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x18U]),64);
        tracep->fullQData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x19U]),64);
        tracep->fullQData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1aU]),64);
        tracep->fullQData(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1bU]),64);
        tracep->fullQData(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1cU]),64);
        tracep->fullQData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1dU]),64);
        tracep->fullQData(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1eU]),64);
        tracep->fullQData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1fU]),64);
        tracep->fullQData(oldp+76,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))),64);
        tracep->fullQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC),64);
        tracep->fullBit(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid));
        tracep->fullQData(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_rdata),64);
        tracep->fullBit(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst));
        tracep->fullBit(oldp+84,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)))));
        tracep->fullBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_avalid));
        tracep->fullBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem));
        tracep->fullBit(oldp+87,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem)))));
        tracep->fullBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
        tracep->fullQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullCData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
        tracep->fullQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
        tracep->fullQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullCData(oldp+102,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr))),5);
        tracep->fullCData(oldp+103,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
        tracep->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
        tracep->fullBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
        tracep->fullCData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
        tracep->fullQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
        tracep->fullQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr),64);
        tracep->fullBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid));
        tracep->fullBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en));
        tracep->fullCData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
        tracep->fullQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
        tracep->fullBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
        tracep->fullBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__is_read_mem));
        tracep->fullBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__is_read_inst));
        tracep->fullQData(oldp+120,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
        tracep->fullQData(oldp+122,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+124,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullBit(oldp+125,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
        tracep->fullBit(oldp+126,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result),64);
        tracep->fullBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en));
        tracep->fullQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
        tracep->fullCData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullWData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data),65);
        tracep->fullBit(oldp+136,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
        tracep->fullQData(oldp+137,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U])))),64);
        tracep->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        __Vtemp1324[0U] = 1U;
        __Vtemp1324[1U] = 0U;
        __Vtemp1324[2U] = 0U;
        VL_ADD_W(3, __Vtemp1325, __Vtemp1324, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        __Vtemp1326[0U] = __Vtemp1325[0U];
        __Vtemp1326[1U] = __Vtemp1325[1U];
        __Vtemp1326[2U] = (1U & __Vtemp1325[2U]);
        tracep->fullWData(oldp+141,(__Vtemp1326),65);
        __Vtemp1328[0U] = 1U;
        __Vtemp1328[1U] = 0U;
        __Vtemp1328[2U] = 0U;
        VL_ADD_W(3, __Vtemp1329, __Vtemp1328, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        tracep->fullBit(oldp+144,((1U & (~ (1U & __Vtemp1329[2U])))));
        tracep->fullBit(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
        tracep->fullIData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
        tracep->fullIData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
        tracep->fullWData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),128);
        __Vtemp1331[0U] = (IData)((0xfffffffffffffffeULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
        __Vtemp1331[1U] = (IData)(((0xfffffffffffffffeULL 
                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                                   >> 0x20U));
        __Vtemp1331[2U] = 1U;
        tracep->fullWData(oldp+154,(__Vtemp1331),65);
        tracep->fullWData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
        tracep->fullQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
        tracep->fullQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
        tracep->fullQData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
        tracep->fullQData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
        tracep->fullQData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
        tracep->fullQData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
        tracep->fullQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
        tracep->fullQData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
        tracep->fullQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
        tracep->fullQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
        tracep->fullQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
        tracep->fullQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
        tracep->fullQData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
        tracep->fullQData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
        tracep->fullQData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
        tracep->fullQData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
        tracep->fullQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
        tracep->fullQData(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
        tracep->fullQData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
        tracep->fullQData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
        tracep->fullQData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
        tracep->fullQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
        tracep->fullQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
        tracep->fullQData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
        tracep->fullQData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
        tracep->fullQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
        tracep->fullQData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
        tracep->fullQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
        tracep->fullQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
        tracep->fullQData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
        tracep->fullQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
        tracep->fullQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                    [0U]),64);
        tracep->fullCData(oldp+226,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
        tracep->fullCData(oldp+229,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
        tracep->fullBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_MPORT_32_en));
        tracep->fullQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),64);
        tracep->fullCData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType),2);
        tracep->fullCData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullCData(oldp+237,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                              >> 7U))),5);
        tracep->fullSData(oldp+238,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data),64);
        tracep->fullQData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb),64);
        tracep->fullBit(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
        tracep->fullBit(oldp+244,(vlSelf->clock));
        tracep->fullBit(oldp+245,(vlSelf->reset));
        tracep->fullQData(oldp+246,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+248,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+250,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+252,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+254,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+256,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+258,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+260,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+262,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+264,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+266,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+268,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+270,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+272,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+274,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+276,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+278,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+280,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+282,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+284,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+286,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+288,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+290,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+292,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+294,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+296,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+298,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+300,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+302,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+304,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+306,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+308,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+310,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+312,(vlSelf->io_difftest_inst),32);
        tracep->fullQData(oldp+313,(0ULL),64);
        tracep->fullBit(oldp+315,(0U));
        tracep->fullCData(oldp+316,(0U),8);
        tracep->fullBit(oldp+317,(1U));
        tracep->fullCData(oldp+318,(0U),5);
        tracep->fullCData(oldp+319,(1U),5);
        tracep->fullCData(oldp+320,(2U),5);
        tracep->fullCData(oldp+321,(3U),5);
        tracep->fullCData(oldp+322,(4U),5);
        tracep->fullCData(oldp+323,(5U),5);
        tracep->fullCData(oldp+324,(6U),5);
        tracep->fullCData(oldp+325,(7U),5);
        tracep->fullCData(oldp+326,(8U),5);
        tracep->fullCData(oldp+327,(9U),5);
        tracep->fullCData(oldp+328,(0xaU),5);
        tracep->fullCData(oldp+329,(0xbU),5);
        tracep->fullCData(oldp+330,(0xcU),5);
        tracep->fullCData(oldp+331,(0xdU),5);
        tracep->fullCData(oldp+332,(0xeU),5);
        tracep->fullCData(oldp+333,(0xfU),5);
        tracep->fullCData(oldp+334,(0x10U),5);
        tracep->fullCData(oldp+335,(0x11U),5);
        tracep->fullCData(oldp+336,(0x12U),5);
        tracep->fullCData(oldp+337,(0x13U),5);
        tracep->fullCData(oldp+338,(0x14U),5);
        tracep->fullCData(oldp+339,(0x15U),5);
        tracep->fullCData(oldp+340,(0x16U),5);
        tracep->fullCData(oldp+341,(0x17U),5);
        tracep->fullCData(oldp+342,(0x18U),5);
        tracep->fullCData(oldp+343,(0x19U),5);
        tracep->fullCData(oldp+344,(0x1aU),5);
        tracep->fullCData(oldp+345,(0x1bU),5);
        tracep->fullCData(oldp+346,(0x1cU),5);
        tracep->fullCData(oldp+347,(0x1dU),5);
        tracep->fullCData(oldp+348,(0x1eU),5);
        tracep->fullCData(oldp+349,(0x1fU),5);
    }
}
