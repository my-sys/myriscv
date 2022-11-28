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
        tracep->declBit(c+202,"clock", false,-1);
        tracep->declBit(c+203,"reset", false,-1);
        tracep->declQuad(c+204,"io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+206,"io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+208,"io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+210,"io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+212,"io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+214,"io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+216,"io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+218,"io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+220,"io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+222,"io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+224,"io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+226,"io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+228,"io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+230,"io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+232,"io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+234,"io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+236,"io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+238,"io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+240,"io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+242,"io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+244,"io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+246,"io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+248,"io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+250,"io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+252,"io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+254,"io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+256,"io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+258,"io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+260,"io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+262,"io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+264,"io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+266,"io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+268,"io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+270,"io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+202,"riscv_soc clock", false,-1);
        tracep->declBit(c+203,"riscv_soc reset", false,-1);
        tracep->declQuad(c+204,"riscv_soc io_difftest_reg_0", false,-1, 63,0);
        tracep->declQuad(c+206,"riscv_soc io_difftest_reg_1", false,-1, 63,0);
        tracep->declQuad(c+208,"riscv_soc io_difftest_reg_2", false,-1, 63,0);
        tracep->declQuad(c+210,"riscv_soc io_difftest_reg_3", false,-1, 63,0);
        tracep->declQuad(c+212,"riscv_soc io_difftest_reg_4", false,-1, 63,0);
        tracep->declQuad(c+214,"riscv_soc io_difftest_reg_5", false,-1, 63,0);
        tracep->declQuad(c+216,"riscv_soc io_difftest_reg_6", false,-1, 63,0);
        tracep->declQuad(c+218,"riscv_soc io_difftest_reg_7", false,-1, 63,0);
        tracep->declQuad(c+220,"riscv_soc io_difftest_reg_8", false,-1, 63,0);
        tracep->declQuad(c+222,"riscv_soc io_difftest_reg_9", false,-1, 63,0);
        tracep->declQuad(c+224,"riscv_soc io_difftest_reg_10", false,-1, 63,0);
        tracep->declQuad(c+226,"riscv_soc io_difftest_reg_11", false,-1, 63,0);
        tracep->declQuad(c+228,"riscv_soc io_difftest_reg_12", false,-1, 63,0);
        tracep->declQuad(c+230,"riscv_soc io_difftest_reg_13", false,-1, 63,0);
        tracep->declQuad(c+232,"riscv_soc io_difftest_reg_14", false,-1, 63,0);
        tracep->declQuad(c+234,"riscv_soc io_difftest_reg_15", false,-1, 63,0);
        tracep->declQuad(c+236,"riscv_soc io_difftest_reg_16", false,-1, 63,0);
        tracep->declQuad(c+238,"riscv_soc io_difftest_reg_17", false,-1, 63,0);
        tracep->declQuad(c+240,"riscv_soc io_difftest_reg_18", false,-1, 63,0);
        tracep->declQuad(c+242,"riscv_soc io_difftest_reg_19", false,-1, 63,0);
        tracep->declQuad(c+244,"riscv_soc io_difftest_reg_20", false,-1, 63,0);
        tracep->declQuad(c+246,"riscv_soc io_difftest_reg_21", false,-1, 63,0);
        tracep->declQuad(c+248,"riscv_soc io_difftest_reg_22", false,-1, 63,0);
        tracep->declQuad(c+250,"riscv_soc io_difftest_reg_23", false,-1, 63,0);
        tracep->declQuad(c+252,"riscv_soc io_difftest_reg_24", false,-1, 63,0);
        tracep->declQuad(c+254,"riscv_soc io_difftest_reg_25", false,-1, 63,0);
        tracep->declQuad(c+256,"riscv_soc io_difftest_reg_26", false,-1, 63,0);
        tracep->declQuad(c+258,"riscv_soc io_difftest_reg_27", false,-1, 63,0);
        tracep->declQuad(c+260,"riscv_soc io_difftest_reg_28", false,-1, 63,0);
        tracep->declQuad(c+262,"riscv_soc io_difftest_reg_29", false,-1, 63,0);
        tracep->declQuad(c+264,"riscv_soc io_difftest_reg_30", false,-1, 63,0);
        tracep->declQuad(c+266,"riscv_soc io_difftest_reg_31", false,-1, 63,0);
        tracep->declQuad(c+268,"riscv_soc io_difftest_pc", false,-1, 63,0);
        tracep->declBus(c+270,"riscv_soc io_difftest_inst", false,-1, 31,0);
        tracep->declBit(c+202,"riscv_soc core_clock", false,-1);
        tracep->declBit(c+203,"riscv_soc core_reset", false,-1);
        tracep->declQuad(c+1,"riscv_soc core_io_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc core_io_out_raddr", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc core_regPC", false,-1, 63,0);
        tracep->declBus(c+5,"riscv_soc core_regInst", false,-1, 31,0);
        tracep->declQuad(c+271,"riscv_soc core__WIRE_0", false,-1, 63,0);
        tracep->declQuad(c+6,"riscv_soc core__WIRE_1", false,-1, 63,0);
        tracep->declQuad(c+8,"riscv_soc core__WIRE_2", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv_soc core__WIRE_3", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv_soc core__WIRE_4", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv_soc core__WIRE_5", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv_soc core__WIRE_6", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core__WIRE_7", false,-1, 63,0);
        tracep->declQuad(c+20,"riscv_soc core__WIRE_8", false,-1, 63,0);
        tracep->declQuad(c+22,"riscv_soc core__WIRE_9", false,-1, 63,0);
        tracep->declQuad(c+24,"riscv_soc core__WIRE_10", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core__WIRE_11", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv_soc core__WIRE_12", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core__WIRE_13", false,-1, 63,0);
        tracep->declQuad(c+32,"riscv_soc core__WIRE_14", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv_soc core__WIRE_15", false,-1, 63,0);
        tracep->declQuad(c+36,"riscv_soc core__WIRE_16", false,-1, 63,0);
        tracep->declQuad(c+38,"riscv_soc core__WIRE_17", false,-1, 63,0);
        tracep->declQuad(c+40,"riscv_soc core__WIRE_18", false,-1, 63,0);
        tracep->declQuad(c+42,"riscv_soc core__WIRE_19", false,-1, 63,0);
        tracep->declQuad(c+44,"riscv_soc core__WIRE_20", false,-1, 63,0);
        tracep->declQuad(c+46,"riscv_soc core__WIRE_21", false,-1, 63,0);
        tracep->declQuad(c+48,"riscv_soc core__WIRE_22", false,-1, 63,0);
        tracep->declQuad(c+50,"riscv_soc core__WIRE_23", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core__WIRE_24", false,-1, 63,0);
        tracep->declQuad(c+54,"riscv_soc core__WIRE_25", false,-1, 63,0);
        tracep->declQuad(c+56,"riscv_soc core__WIRE_26", false,-1, 63,0);
        tracep->declQuad(c+58,"riscv_soc core__WIRE_27", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv_soc core__WIRE_28", false,-1, 63,0);
        tracep->declQuad(c+62,"riscv_soc core__WIRE_29", false,-1, 63,0);
        tracep->declQuad(c+64,"riscv_soc core__WIRE_30", false,-1, 63,0);
        tracep->declQuad(c+66,"riscv_soc core__WIRE_31", false,-1, 63,0);
        tracep->declBit(c+202,"riscv_soc axi_ram_clock", false,-1);
        tracep->declQuad(c+3,"riscv_soc axi_ram_io_raddr", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv_soc axi_ram_io_rdata", false,-1, 63,0);
        tracep->declBus(c+5,"riscv_soc DIFFTEST_INST", false,-1, 31,0);
        tracep->declQuad(c+68,"riscv_soc difftest_inst", false,-1, 63,0);
        tracep->declBit(c+202,"riscv_soc core clock", false,-1);
        tracep->declBit(c+203,"riscv_soc core reset", false,-1);
        tracep->declQuad(c+1,"riscv_soc core io_in_rdata", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc core io_out_raddr", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv_soc core regPC", false,-1, 63,0);
        tracep->declBus(c+5,"riscv_soc core regInst", false,-1, 31,0);
        tracep->declBit(c+202,"riscv_soc core fetch_clock", false,-1);
        tracep->declBit(c+203,"riscv_soc core fetch_reset", false,-1);
        tracep->declBus(c+70,"riscv_soc core fetch_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+71,"riscv_soc core fetch_io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core fetch_io_in_valid_next_pc", false,-1);
        tracep->declQuad(c+3,"riscv_soc core fetch_io_out_pc", false,-1, 63,0);
        tracep->declBus(c+5,"riscv_soc core fetch_io_out_inst", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv_soc core fetch_regPC_0", false,-1, 63,0);
        tracep->declBus(c+5,"riscv_soc core fetch_regInst_0", false,-1, 31,0);
        tracep->declBit(c+202,"riscv_soc core execute_clock", false,-1);
        tracep->declBit(c+203,"riscv_soc core execute_reset", false,-1);
        tracep->declBus(c+74,"riscv_soc core execute_io_in_opType", false,-1, 2,0);
        tracep->declBus(c+75,"riscv_soc core execute_io_in_exuType", false,-1, 5,0);
        tracep->declQuad(c+76,"riscv_soc core execute_io_in_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core execute_io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+80,"riscv_soc core execute_io_in_imm_data", false,-1, 63,0);
        tracep->declQuad(c+82,"riscv_soc core execute_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+84,"riscv_soc core execute_io_in_rs_addr", false,-1, 4,0);
        tracep->declBus(c+85,"riscv_soc core execute_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+86,"riscv_soc core execute_io_out_rs_data", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core execute_io_out_w_rs_en", false,-1);
        tracep->declQuad(c+71,"riscv_soc core execute_io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core execute_io_out_valid_next_pc", false,-1);
        tracep->declBit(c+202,"riscv_soc core decode_clock", false,-1);
        tracep->declBit(c+203,"riscv_soc core decode_reset", false,-1);
        tracep->declBus(c+5,"riscv_soc core decode_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv_soc core decode_io_in_pc", false,-1, 63,0);
        tracep->declBus(c+85,"riscv_soc core decode_io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+86,"riscv_soc core decode_io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core decode_io_in_w_rs_en", false,-1);
        tracep->declQuad(c+76,"riscv_soc core decode_io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core decode_io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+84,"riscv_soc core decode_io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+80,"riscv_soc core decode_io_out_imm_data", false,-1, 63,0);
        tracep->declBus(c+74,"riscv_soc core decode_io_out_opType", false,-1, 2,0);
        tracep->declBus(c+75,"riscv_soc core decode_io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+82,"riscv_soc core decode_io_out_pc", false,-1, 63,0);
        tracep->declQuad(c+271,"riscv_soc core decode__WIRE_0_0", false,-1, 63,0);
        tracep->declQuad(c+6,"riscv_soc core decode__WIRE_0_1", false,-1, 63,0);
        tracep->declQuad(c+8,"riscv_soc core decode__WIRE_0_2", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv_soc core decode__WIRE_0_3", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv_soc core decode__WIRE_0_4", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv_soc core decode__WIRE_0_5", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv_soc core decode__WIRE_0_6", false,-1, 63,0);
        tracep->declQuad(c+18,"riscv_soc core decode__WIRE_0_7", false,-1, 63,0);
        tracep->declQuad(c+20,"riscv_soc core decode__WIRE_0_8", false,-1, 63,0);
        tracep->declQuad(c+22,"riscv_soc core decode__WIRE_0_9", false,-1, 63,0);
        tracep->declQuad(c+24,"riscv_soc core decode__WIRE_0_10", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv_soc core decode__WIRE_0_11", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv_soc core decode__WIRE_0_12", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv_soc core decode__WIRE_0_13", false,-1, 63,0);
        tracep->declQuad(c+32,"riscv_soc core decode__WIRE_0_14", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv_soc core decode__WIRE_0_15", false,-1, 63,0);
        tracep->declQuad(c+36,"riscv_soc core decode__WIRE_0_16", false,-1, 63,0);
        tracep->declQuad(c+38,"riscv_soc core decode__WIRE_0_17", false,-1, 63,0);
        tracep->declQuad(c+40,"riscv_soc core decode__WIRE_0_18", false,-1, 63,0);
        tracep->declQuad(c+42,"riscv_soc core decode__WIRE_0_19", false,-1, 63,0);
        tracep->declQuad(c+44,"riscv_soc core decode__WIRE_0_20", false,-1, 63,0);
        tracep->declQuad(c+46,"riscv_soc core decode__WIRE_0_21", false,-1, 63,0);
        tracep->declQuad(c+48,"riscv_soc core decode__WIRE_0_22", false,-1, 63,0);
        tracep->declQuad(c+50,"riscv_soc core decode__WIRE_0_23", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv_soc core decode__WIRE_0_24", false,-1, 63,0);
        tracep->declQuad(c+54,"riscv_soc core decode__WIRE_0_25", false,-1, 63,0);
        tracep->declQuad(c+56,"riscv_soc core decode__WIRE_0_26", false,-1, 63,0);
        tracep->declQuad(c+58,"riscv_soc core decode__WIRE_0_27", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv_soc core decode__WIRE_0_28", false,-1, 63,0);
        tracep->declQuad(c+62,"riscv_soc core decode__WIRE_0_29", false,-1, 63,0);
        tracep->declQuad(c+64,"riscv_soc core decode__WIRE_0_30", false,-1, 63,0);
        tracep->declQuad(c+66,"riscv_soc core decode__WIRE_0_31", false,-1, 63,0);
        tracep->declBit(c+202,"riscv_soc core fetch clock", false,-1);
        tracep->declBit(c+203,"riscv_soc core fetch reset", false,-1);
        tracep->declBus(c+70,"riscv_soc core fetch io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+71,"riscv_soc core fetch io_in_next_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core fetch io_in_valid_next_pc", false,-1);
        tracep->declQuad(c+3,"riscv_soc core fetch io_out_pc", false,-1, 63,0);
        tracep->declBus(c+5,"riscv_soc core fetch io_out_inst", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv_soc core fetch regPC_0", false,-1, 63,0);
        tracep->declBus(c+5,"riscv_soc core fetch regInst_0", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv_soc core fetch regPC", false,-1, 63,0);
        tracep->declBus(c+5,"riscv_soc core fetch regInst", false,-1, 31,0);
        tracep->declBit(c+202,"riscv_soc core execute clock", false,-1);
        tracep->declBit(c+203,"riscv_soc core execute reset", false,-1);
        tracep->declBus(c+74,"riscv_soc core execute io_in_opType", false,-1, 2,0);
        tracep->declBus(c+75,"riscv_soc core execute io_in_exuType", false,-1, 5,0);
        tracep->declQuad(c+76,"riscv_soc core execute io_in_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core execute io_in_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+80,"riscv_soc core execute io_in_imm_data", false,-1, 63,0);
        tracep->declQuad(c+82,"riscv_soc core execute io_in_pc", false,-1, 63,0);
        tracep->declBus(c+84,"riscv_soc core execute io_in_rs_addr", false,-1, 4,0);
        tracep->declBus(c+85,"riscv_soc core execute io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+86,"riscv_soc core execute io_out_rs_data", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core execute io_out_w_rs_en", false,-1);
        tracep->declQuad(c+71,"riscv_soc core execute io_out_next_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core execute io_out_valid_next_pc", false,-1);
        tracep->declBus(c+75,"riscv_soc core execute alu_exu_io_exuType", false,-1, 5,0);
        tracep->declQuad(c+76,"riscv_soc core execute alu_exu_io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core execute alu_exu_io_op_data2", false,-1, 63,0);
        tracep->declQuad(c+80,"riscv_soc core execute alu_exu_io_op_imm", false,-1, 63,0);
        tracep->declQuad(c+82,"riscv_soc core execute alu_exu_io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core execute alu_exu_io_result_data", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core execute alu_exu_io_result_pc", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core execute alu_exu_io_next_pc_valid", false,-1);
        tracep->declBit(c+94,"riscv_soc core execute alu_exu_io_w_rs_en", false,-1);
        tracep->declQuad(c+95,"riscv_soc core execute reg_rs_addr", false,-1, 63,0);
        tracep->declQuad(c+86,"riscv_soc core execute reg_rs_data", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_soc core execute reg_next_pc", false,-1, 63,0);
        tracep->declBit(c+73,"riscv_soc core execute reg_valid_next_pc", false,-1);
        tracep->declBit(c+88,"riscv_soc core execute reg_w_rs_en", false,-1);
        tracep->declBus(c+97,"riscv_soc core execute valid", false,-1, 3,0);
        tracep->declArray(c+98,"riscv_soc core execute temp_w_en_and_rs_data", false,-1, 64,0);
        tracep->declBit(c+101,"riscv_soc core execute w_rs_en", false,-1);
        tracep->declQuad(c+102,"riscv_soc core execute rs_data", false,-1, 63,0);
        tracep->declBus(c+75,"riscv_soc core execute alu_exu io_exuType", false,-1, 5,0);
        tracep->declQuad(c+76,"riscv_soc core execute alu_exu io_op_data1", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core execute alu_exu io_op_data2", false,-1, 63,0);
        tracep->declQuad(c+80,"riscv_soc core execute alu_exu io_op_imm", false,-1, 63,0);
        tracep->declQuad(c+82,"riscv_soc core execute alu_exu io_op_pc", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_soc core execute alu_exu io_result_data", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_soc core execute alu_exu io_result_pc", false,-1, 63,0);
        tracep->declBit(c+93,"riscv_soc core execute alu_exu io_next_pc_valid", false,-1);
        tracep->declBit(c+94,"riscv_soc core execute alu_exu io_w_rs_en", false,-1);
        tracep->declQuad(c+104,"riscv_soc core execute alu_exu rs2_data", false,-1, 63,0);
        tracep->declArray(c+106,"riscv_soc core execute alu_exu subresult", false,-1, 64,0);
        tracep->declBit(c+109,"riscv_soc core execute alu_exu u_rs1_l_rs2", false,-1);
        tracep->declBit(c+110,"riscv_soc core execute alu_exu s_rs1_l_rs2", false,-1);
        tracep->declQuad(c+111,"riscv_soc core execute alu_exu sllw_temp", false,-1, 62,0);
        tracep->declBus(c+113,"riscv_soc core execute alu_exu srlw_temp", false,-1, 31,0);
        tracep->declBus(c+114,"riscv_soc core execute alu_exu sraw_temp", false,-1, 31,0);
        tracep->declArray(c+115,"riscv_soc core execute alu_exu temp_result_data", false,-1, 127,0);
        tracep->declArray(c+119,"riscv_soc core execute alu_exu next_pc3", false,-1, 64,0);
        tracep->declArray(c+122,"riscv_soc core execute alu_exu temp_result_pc", false,-1, 64,0);
        tracep->declBit(c+202,"riscv_soc core decode clock", false,-1);
        tracep->declBit(c+203,"riscv_soc core decode reset", false,-1);
        tracep->declBus(c+5,"riscv_soc core decode io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv_soc core decode io_in_pc", false,-1, 63,0);
        tracep->declBus(c+85,"riscv_soc core decode io_in_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+86,"riscv_soc core decode io_in_result_data", false,-1, 63,0);
        tracep->declBit(c+88,"riscv_soc core decode io_in_w_rs_en", false,-1);
        tracep->declQuad(c+76,"riscv_soc core decode io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core decode io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+84,"riscv_soc core decode io_out_rs_addr", false,-1, 4,0);
        tracep->declQuad(c+80,"riscv_soc core decode io_out_imm_data", false,-1, 63,0);
        tracep->declBus(c+74,"riscv_soc core decode io_out_opType", false,-1, 2,0);
        tracep->declBus(c+75,"riscv_soc core decode io_out_exuType", false,-1, 5,0);
        tracep->declQuad(c+82,"riscv_soc core decode io_out_pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+125+i*2,"riscv_soc core decode regfile", true,(i+0), 63,0);}}
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_en", false,-1);
        tracep->declBus(c+274,"riscv_soc core decode regfile_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+189,"riscv_soc core decode regfile_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_1_en", false,-1);
        tracep->declBus(c+275,"riscv_soc core decode regfile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+6,"riscv_soc core decode regfile_MPORT_1_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_2_en", false,-1);
        tracep->declBus(c+276,"riscv_soc core decode regfile_MPORT_2_addr", false,-1, 4,0);
        tracep->declQuad(c+8,"riscv_soc core decode regfile_MPORT_2_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_3_en", false,-1);
        tracep->declBus(c+277,"riscv_soc core decode regfile_MPORT_3_addr", false,-1, 4,0);
        tracep->declQuad(c+10,"riscv_soc core decode regfile_MPORT_3_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_4_en", false,-1);
        tracep->declBus(c+278,"riscv_soc core decode regfile_MPORT_4_addr", false,-1, 4,0);
        tracep->declQuad(c+12,"riscv_soc core decode regfile_MPORT_4_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_5_en", false,-1);
        tracep->declBus(c+279,"riscv_soc core decode regfile_MPORT_5_addr", false,-1, 4,0);
        tracep->declQuad(c+14,"riscv_soc core decode regfile_MPORT_5_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_6_en", false,-1);
        tracep->declBus(c+280,"riscv_soc core decode regfile_MPORT_6_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"riscv_soc core decode regfile_MPORT_6_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_7_en", false,-1);
        tracep->declBus(c+281,"riscv_soc core decode regfile_MPORT_7_addr", false,-1, 4,0);
        tracep->declQuad(c+18,"riscv_soc core decode regfile_MPORT_7_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_8_en", false,-1);
        tracep->declBus(c+282,"riscv_soc core decode regfile_MPORT_8_addr", false,-1, 4,0);
        tracep->declQuad(c+20,"riscv_soc core decode regfile_MPORT_8_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_9_en", false,-1);
        tracep->declBus(c+283,"riscv_soc core decode regfile_MPORT_9_addr", false,-1, 4,0);
        tracep->declQuad(c+22,"riscv_soc core decode regfile_MPORT_9_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_10_en", false,-1);
        tracep->declBus(c+284,"riscv_soc core decode regfile_MPORT_10_addr", false,-1, 4,0);
        tracep->declQuad(c+24,"riscv_soc core decode regfile_MPORT_10_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_11_en", false,-1);
        tracep->declBus(c+285,"riscv_soc core decode regfile_MPORT_11_addr", false,-1, 4,0);
        tracep->declQuad(c+26,"riscv_soc core decode regfile_MPORT_11_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_12_en", false,-1);
        tracep->declBus(c+286,"riscv_soc core decode regfile_MPORT_12_addr", false,-1, 4,0);
        tracep->declQuad(c+28,"riscv_soc core decode regfile_MPORT_12_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_13_en", false,-1);
        tracep->declBus(c+287,"riscv_soc core decode regfile_MPORT_13_addr", false,-1, 4,0);
        tracep->declQuad(c+30,"riscv_soc core decode regfile_MPORT_13_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_14_en", false,-1);
        tracep->declBus(c+288,"riscv_soc core decode regfile_MPORT_14_addr", false,-1, 4,0);
        tracep->declQuad(c+32,"riscv_soc core decode regfile_MPORT_14_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_15_en", false,-1);
        tracep->declBus(c+289,"riscv_soc core decode regfile_MPORT_15_addr", false,-1, 4,0);
        tracep->declQuad(c+34,"riscv_soc core decode regfile_MPORT_15_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_16_en", false,-1);
        tracep->declBus(c+290,"riscv_soc core decode regfile_MPORT_16_addr", false,-1, 4,0);
        tracep->declQuad(c+36,"riscv_soc core decode regfile_MPORT_16_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_17_en", false,-1);
        tracep->declBus(c+291,"riscv_soc core decode regfile_MPORT_17_addr", false,-1, 4,0);
        tracep->declQuad(c+38,"riscv_soc core decode regfile_MPORT_17_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_18_en", false,-1);
        tracep->declBus(c+292,"riscv_soc core decode regfile_MPORT_18_addr", false,-1, 4,0);
        tracep->declQuad(c+40,"riscv_soc core decode regfile_MPORT_18_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_19_en", false,-1);
        tracep->declBus(c+293,"riscv_soc core decode regfile_MPORT_19_addr", false,-1, 4,0);
        tracep->declQuad(c+42,"riscv_soc core decode regfile_MPORT_19_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_20_en", false,-1);
        tracep->declBus(c+294,"riscv_soc core decode regfile_MPORT_20_addr", false,-1, 4,0);
        tracep->declQuad(c+44,"riscv_soc core decode regfile_MPORT_20_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_21_en", false,-1);
        tracep->declBus(c+295,"riscv_soc core decode regfile_MPORT_21_addr", false,-1, 4,0);
        tracep->declQuad(c+46,"riscv_soc core decode regfile_MPORT_21_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_22_en", false,-1);
        tracep->declBus(c+296,"riscv_soc core decode regfile_MPORT_22_addr", false,-1, 4,0);
        tracep->declQuad(c+48,"riscv_soc core decode regfile_MPORT_22_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_23_en", false,-1);
        tracep->declBus(c+297,"riscv_soc core decode regfile_MPORT_23_addr", false,-1, 4,0);
        tracep->declQuad(c+50,"riscv_soc core decode regfile_MPORT_23_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_24_en", false,-1);
        tracep->declBus(c+298,"riscv_soc core decode regfile_MPORT_24_addr", false,-1, 4,0);
        tracep->declQuad(c+52,"riscv_soc core decode regfile_MPORT_24_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_25_en", false,-1);
        tracep->declBus(c+299,"riscv_soc core decode regfile_MPORT_25_addr", false,-1, 4,0);
        tracep->declQuad(c+54,"riscv_soc core decode regfile_MPORT_25_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_26_en", false,-1);
        tracep->declBus(c+300,"riscv_soc core decode regfile_MPORT_26_addr", false,-1, 4,0);
        tracep->declQuad(c+56,"riscv_soc core decode regfile_MPORT_26_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_27_en", false,-1);
        tracep->declBus(c+301,"riscv_soc core decode regfile_MPORT_27_addr", false,-1, 4,0);
        tracep->declQuad(c+58,"riscv_soc core decode regfile_MPORT_27_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_28_en", false,-1);
        tracep->declBus(c+302,"riscv_soc core decode regfile_MPORT_28_addr", false,-1, 4,0);
        tracep->declQuad(c+60,"riscv_soc core decode regfile_MPORT_28_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_29_en", false,-1);
        tracep->declBus(c+303,"riscv_soc core decode regfile_MPORT_29_addr", false,-1, 4,0);
        tracep->declQuad(c+62,"riscv_soc core decode regfile_MPORT_29_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_30_en", false,-1);
        tracep->declBus(c+304,"riscv_soc core decode regfile_MPORT_30_addr", false,-1, 4,0);
        tracep->declQuad(c+64,"riscv_soc core decode regfile_MPORT_30_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_31_en", false,-1);
        tracep->declBus(c+305,"riscv_soc core decode regfile_MPORT_31_addr", false,-1, 4,0);
        tracep->declQuad(c+66,"riscv_soc core decode regfile_MPORT_31_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_rs1_data_MPORT_en", false,-1);
        tracep->declBus(c+191,"riscv_soc core decode regfile_rs1_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+192,"riscv_soc core decode regfile_rs1_data_MPORT_data", false,-1, 63,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_rs2_data_MPORT_en", false,-1);
        tracep->declBus(c+194,"riscv_soc core decode regfile_rs2_data_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+195,"riscv_soc core decode regfile_rs2_data_MPORT_data", false,-1, 63,0);
        tracep->declQuad(c+86,"riscv_soc core decode regfile_MPORT_32_data", false,-1, 63,0);
        tracep->declBus(c+85,"riscv_soc core decode regfile_MPORT_32_addr", false,-1, 4,0);
        tracep->declBit(c+273,"riscv_soc core decode regfile_MPORT_32_mask", false,-1);
        tracep->declBit(c+88,"riscv_soc core decode regfile_MPORT_32_en", false,-1);
        tracep->declQuad(c+76,"riscv_soc core decode reg_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv_soc core decode reg_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+197,"riscv_soc core decode reg_dest_rs_addr", false,-1, 63,0);
        tracep->declQuad(c+80,"riscv_soc core decode reg_imm", false,-1, 63,0);
        tracep->declBus(c+74,"riscv_soc core decode reg_opType", false,-1, 2,0);
        tracep->declBus(c+75,"riscv_soc core decode reg_exuType", false,-1, 5,0);
        tracep->declQuad(c+82,"riscv_soc core decode reg_pc", false,-1, 63,0);
        tracep->declBus(c+199,"riscv_soc core decode opType", false,-1, 1,0);
        tracep->declBus(c+200,"riscv_soc core decode instType", false,-1, 3,0);
        tracep->declBus(c+194,"riscv_soc core decode rs2_addr", false,-1, 4,0);
        tracep->declBus(c+191,"riscv_soc core decode rs1_addr", false,-1, 4,0);
        tracep->declBus(c+201,"riscv_soc core decode dest_rs_addr", false,-1, 4,0);
        tracep->declBit(c+202,"riscv_soc axi_ram clock", false,-1);
        tracep->declQuad(c+3,"riscv_soc axi_ram io_raddr", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv_soc axi_ram io_rdata", false,-1, 63,0);
        tracep->declBit(c+202,"riscv_soc axi_ram mem_clock", false,-1);
        tracep->declQuad(c+3,"riscv_soc axi_ram mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv_soc axi_ram mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+271,"riscv_soc axi_ram mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+271,"riscv_soc axi_ram mem_wdata", false,-1, 63,0);
        tracep->declBus(c+306,"riscv_soc axi_ram mem_wstrb", false,-1, 7,0);
        tracep->declBit(c+307,"riscv_soc axi_ram mem_wen", false,-1);
        tracep->declBit(c+202,"riscv_soc axi_ram mem clock", false,-1);
        tracep->declQuad(c+3,"riscv_soc axi_ram mem raddr", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv_soc axi_ram mem rdata", false,-1, 63,0);
        tracep->declQuad(c+271,"riscv_soc axi_ram mem waddr", false,-1, 63,0);
        tracep->declQuad(c+271,"riscv_soc axi_ram mem wdata", false,-1, 63,0);
        tracep->declBus(c+306,"riscv_soc axi_ram mem wstrb", false,-1, 7,0);
        tracep->declBit(c+307,"riscv_soc axi_ram mem wen", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp1338;
    VlWide<3>/*95:0*/ __Vtemp1339;
    VlWide<3>/*95:0*/ __Vtemp1340;
    VlWide<3>/*95:0*/ __Vtemp1342;
    VlWide<3>/*95:0*/ __Vtemp1343;
    VlWide<3>/*95:0*/ __Vtemp1345;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
        tracep->fullQData(oldp+3,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC),64);
        tracep->fullIData(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst),32);
        tracep->fullQData(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                  [1U]),64);
        tracep->fullQData(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                  [2U]),64);
        tracep->fullQData(oldp+10,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [3U]),64);
        tracep->fullQData(oldp+12,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [4U]),64);
        tracep->fullQData(oldp+14,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [5U]),64);
        tracep->fullQData(oldp+16,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [6U]),64);
        tracep->fullQData(oldp+18,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [7U]),64);
        tracep->fullQData(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [8U]),64);
        tracep->fullQData(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [9U]),64);
        tracep->fullQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xaU]),64);
        tracep->fullQData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xbU]),64);
        tracep->fullQData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xcU]),64);
        tracep->fullQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xdU]),64);
        tracep->fullQData(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xeU]),64);
        tracep->fullQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0xfU]),64);
        tracep->fullQData(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x10U]),64);
        tracep->fullQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x11U]),64);
        tracep->fullQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x12U]),64);
        tracep->fullQData(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x13U]),64);
        tracep->fullQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x14U]),64);
        tracep->fullQData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x15U]),64);
        tracep->fullQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x16U]),64);
        tracep->fullQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x17U]),64);
        tracep->fullQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x18U]),64);
        tracep->fullQData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x19U]),64);
        tracep->fullQData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1aU]),64);
        tracep->fullQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1bU]),64);
        tracep->fullQData(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1cU]),64);
        tracep->fullQData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1dU]),64);
        tracep->fullQData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1eU]),64);
        tracep->fullQData(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                   [0x1fU]),64);
        tracep->fullQData(oldp+68,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))),64);
        tracep->fullIData(oldp+70,((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),32);
        tracep->fullQData(oldp+71,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        tracep->fullBit(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        tracep->fullCData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        tracep->fullCData(oldp+75,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
        tracep->fullQData(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        tracep->fullQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        tracep->fullQData(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
        tracep->fullQData(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        tracep->fullCData(oldp+84,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr))),5);
        tracep->fullCData(oldp+85,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
        tracep->fullQData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
        tracep->fullBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
        tracep->fullQData(oldp+89,((((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
        tracep->fullQData(oldp+91,((((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
        tracep->fullBit(oldp+93,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
        tracep->fullBit(oldp+94,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
        tracep->fullQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
        tracep->fullCData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
        tracep->fullWData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data),65);
        tracep->fullBit(oldp+101,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
        tracep->fullQData(oldp+102,((((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U])))),64);
        tracep->fullQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        __Vtemp1338[0U] = 1U;
        __Vtemp1338[1U] = 0U;
        __Vtemp1338[2U] = 0U;
        VL_ADD_W(3, __Vtemp1339, __Vtemp1338, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        __Vtemp1340[0U] = __Vtemp1339[0U];
        __Vtemp1340[1U] = __Vtemp1339[1U];
        __Vtemp1340[2U] = (1U & __Vtemp1339[2U]);
        tracep->fullWData(oldp+106,(__Vtemp1340),65);
        __Vtemp1342[0U] = 1U;
        __Vtemp1342[1U] = 0U;
        __Vtemp1342[2U] = 0U;
        VL_ADD_W(3, __Vtemp1343, __Vtemp1342, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        tracep->fullBit(oldp+109,((1U & (~ (1U & __Vtemp1343[2U])))));
        tracep->fullBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        tracep->fullQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
        tracep->fullIData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
        tracep->fullIData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
        tracep->fullWData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),128);
        __Vtemp1345[0U] = (IData)((0xfffffffffffffffeULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
        __Vtemp1345[1U] = (IData)(((0xfffffffffffffffeULL 
                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                                   >> 0x20U));
        __Vtemp1345[2U] = 1U;
        tracep->fullWData(oldp+119,(__Vtemp1345),65);
        tracep->fullWData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
        tracep->fullQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
        tracep->fullQData(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
        tracep->fullQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
        tracep->fullQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
        tracep->fullQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
        tracep->fullQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
        tracep->fullQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
        tracep->fullQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
        tracep->fullQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
        tracep->fullQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
        tracep->fullQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
        tracep->fullQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
        tracep->fullQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
        tracep->fullQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
        tracep->fullQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
        tracep->fullQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
        tracep->fullQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
        tracep->fullQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
        tracep->fullQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
        tracep->fullQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
        tracep->fullQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
        tracep->fullQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
        tracep->fullQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
        tracep->fullQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
        tracep->fullQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
        tracep->fullQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
        tracep->fullQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
        tracep->fullQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
        tracep->fullQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
        tracep->fullQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
        tracep->fullQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
        tracep->fullQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
        tracep->fullQData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                    [0U]),64);
        tracep->fullCData(oldp+191,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
        tracep->fullCData(oldp+194,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
        tracep->fullQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),64);
        tracep->fullCData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType),2);
        tracep->fullCData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        tracep->fullCData(oldp+201,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                              >> 7U))),5);
        tracep->fullBit(oldp+202,(vlSelf->clock));
        tracep->fullBit(oldp+203,(vlSelf->reset));
        tracep->fullQData(oldp+204,(vlSelf->io_difftest_reg_0),64);
        tracep->fullQData(oldp+206,(vlSelf->io_difftest_reg_1),64);
        tracep->fullQData(oldp+208,(vlSelf->io_difftest_reg_2),64);
        tracep->fullQData(oldp+210,(vlSelf->io_difftest_reg_3),64);
        tracep->fullQData(oldp+212,(vlSelf->io_difftest_reg_4),64);
        tracep->fullQData(oldp+214,(vlSelf->io_difftest_reg_5),64);
        tracep->fullQData(oldp+216,(vlSelf->io_difftest_reg_6),64);
        tracep->fullQData(oldp+218,(vlSelf->io_difftest_reg_7),64);
        tracep->fullQData(oldp+220,(vlSelf->io_difftest_reg_8),64);
        tracep->fullQData(oldp+222,(vlSelf->io_difftest_reg_9),64);
        tracep->fullQData(oldp+224,(vlSelf->io_difftest_reg_10),64);
        tracep->fullQData(oldp+226,(vlSelf->io_difftest_reg_11),64);
        tracep->fullQData(oldp+228,(vlSelf->io_difftest_reg_12),64);
        tracep->fullQData(oldp+230,(vlSelf->io_difftest_reg_13),64);
        tracep->fullQData(oldp+232,(vlSelf->io_difftest_reg_14),64);
        tracep->fullQData(oldp+234,(vlSelf->io_difftest_reg_15),64);
        tracep->fullQData(oldp+236,(vlSelf->io_difftest_reg_16),64);
        tracep->fullQData(oldp+238,(vlSelf->io_difftest_reg_17),64);
        tracep->fullQData(oldp+240,(vlSelf->io_difftest_reg_18),64);
        tracep->fullQData(oldp+242,(vlSelf->io_difftest_reg_19),64);
        tracep->fullQData(oldp+244,(vlSelf->io_difftest_reg_20),64);
        tracep->fullQData(oldp+246,(vlSelf->io_difftest_reg_21),64);
        tracep->fullQData(oldp+248,(vlSelf->io_difftest_reg_22),64);
        tracep->fullQData(oldp+250,(vlSelf->io_difftest_reg_23),64);
        tracep->fullQData(oldp+252,(vlSelf->io_difftest_reg_24),64);
        tracep->fullQData(oldp+254,(vlSelf->io_difftest_reg_25),64);
        tracep->fullQData(oldp+256,(vlSelf->io_difftest_reg_26),64);
        tracep->fullQData(oldp+258,(vlSelf->io_difftest_reg_27),64);
        tracep->fullQData(oldp+260,(vlSelf->io_difftest_reg_28),64);
        tracep->fullQData(oldp+262,(vlSelf->io_difftest_reg_29),64);
        tracep->fullQData(oldp+264,(vlSelf->io_difftest_reg_30),64);
        tracep->fullQData(oldp+266,(vlSelf->io_difftest_reg_31),64);
        tracep->fullQData(oldp+268,(vlSelf->io_difftest_pc),64);
        tracep->fullIData(oldp+270,(vlSelf->io_difftest_inst),32);
        tracep->fullQData(oldp+271,(0ULL),64);
        tracep->fullBit(oldp+273,(1U));
        tracep->fullCData(oldp+274,(0U),5);
        tracep->fullCData(oldp+275,(1U),5);
        tracep->fullCData(oldp+276,(2U),5);
        tracep->fullCData(oldp+277,(3U),5);
        tracep->fullCData(oldp+278,(4U),5);
        tracep->fullCData(oldp+279,(5U),5);
        tracep->fullCData(oldp+280,(6U),5);
        tracep->fullCData(oldp+281,(7U),5);
        tracep->fullCData(oldp+282,(8U),5);
        tracep->fullCData(oldp+283,(9U),5);
        tracep->fullCData(oldp+284,(0xaU),5);
        tracep->fullCData(oldp+285,(0xbU),5);
        tracep->fullCData(oldp+286,(0xcU),5);
        tracep->fullCData(oldp+287,(0xdU),5);
        tracep->fullCData(oldp+288,(0xeU),5);
        tracep->fullCData(oldp+289,(0xfU),5);
        tracep->fullCData(oldp+290,(0x10U),5);
        tracep->fullCData(oldp+291,(0x11U),5);
        tracep->fullCData(oldp+292,(0x12U),5);
        tracep->fullCData(oldp+293,(0x13U),5);
        tracep->fullCData(oldp+294,(0x14U),5);
        tracep->fullCData(oldp+295,(0x15U),5);
        tracep->fullCData(oldp+296,(0x16U),5);
        tracep->fullCData(oldp+297,(0x17U),5);
        tracep->fullCData(oldp+298,(0x18U),5);
        tracep->fullCData(oldp+299,(0x19U),5);
        tracep->fullCData(oldp+300,(0x1aU),5);
        tracep->fullCData(oldp+301,(0x1bU),5);
        tracep->fullCData(oldp+302,(0x1cU),5);
        tracep->fullCData(oldp+303,(0x1dU),5);
        tracep->fullCData(oldp+304,(0x1eU),5);
        tracep->fullCData(oldp+305,(0x1fU),5);
        tracep->fullCData(oldp+306,(1U),8);
        tracep->fullBit(oldp+307,(0U));
    }
}
