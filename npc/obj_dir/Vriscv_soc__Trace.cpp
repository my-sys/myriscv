// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_soc__Syms.h"


void Vriscv_soc___024root__traceChgSub0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv_soc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscv_soc___024root* const __restrict vlSelf = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vriscv_soc___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscv_soc___024root__traceChgSub0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp1333;
    VlWide<3>/*95:0*/ __Vtemp1334;
    VlWide<3>/*95:0*/ __Vtemp1335;
    VlWide<3>/*95:0*/ __Vtemp1337;
    VlWide<3>/*95:0*/ __Vtemp1338;
    VlWide<3>/*95:0*/ __Vtemp1340;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
            tracep->chgQData(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_addr),64);
            tracep->chgQData(oldp+4,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wdata),64);
            tracep->chgQData(oldp+6,(vlSelf->riscv_soc__DOT__core_io_out_raddr),64);
            tracep->chgBit(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid));
            tracep->chgCData(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb),8);
            tracep->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit));
            tracep->chgQData(oldp+11,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc),64);
            tracep->chgIData(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst),32);
            tracep->chgQData(oldp+14,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+16,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+18,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [6U]),64);
            tracep->chgQData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [7U]),64);
            tracep->chgQData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [8U]),64);
            tracep->chgQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [9U]),64);
            tracep->chgQData(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xaU]),64);
            tracep->chgQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xbU]),64);
            tracep->chgQData(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xcU]),64);
            tracep->chgQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xdU]),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xeU]),64);
            tracep->chgQData(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xfU]),64);
            tracep->chgQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x10U]),64);
            tracep->chgQData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x11U]),64);
            tracep->chgQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x12U]),64);
            tracep->chgQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x13U]),64);
            tracep->chgQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x14U]),64);
            tracep->chgQData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x15U]),64);
            tracep->chgQData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x16U]),64);
            tracep->chgQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x17U]),64);
            tracep->chgQData(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x18U]),64);
            tracep->chgQData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x19U]),64);
            tracep->chgQData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1aU]),64);
            tracep->chgQData(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1bU]),64);
            tracep->chgQData(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1cU]),64);
            tracep->chgQData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1dU]),64);
            tracep->chgQData(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1eU]),64);
            tracep->chgQData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1fU]),64);
            tracep->chgQData(oldp+76,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst))),64);
            tracep->chgQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC),64);
            tracep->chgBit(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid));
            tracep->chgQData(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_rdata),64);
            tracep->chgBit(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst));
            tracep->chgBit(oldp+84,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)))));
            tracep->chgBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_avalid));
            tracep->chgBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem));
            tracep->chgBit(oldp+87,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem)))));
            tracep->chgBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
            tracep->chgQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regTempPC),64);
            tracep->chgIData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst),32);
            tracep->chgCData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+106,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr))),5);
            tracep->chgCData(oldp+107,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgIData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
            tracep->chgQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr),64);
            tracep->chgBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid));
            tracep->chgBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en));
            tracep->chgCData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__is_read_mem));
            tracep->chgBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__is_read_inst));
            tracep->chgQData(oldp+127,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
            tracep->chgQData(oldp+129,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+131,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgBit(oldp+132,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgBit(oldp+133,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result),64);
            tracep->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en));
            tracep->chgQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgCData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgWData(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data),65);
            tracep->chgBit(oldp+143,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
            tracep->chgQData(oldp+144,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U])))),64);
            tracep->chgQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp1333[0U] = 1U;
            __Vtemp1333[1U] = 0U;
            __Vtemp1333[2U] = 0U;
            VL_ADD_W(3, __Vtemp1334, __Vtemp1333, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
            __Vtemp1335[0U] = __Vtemp1334[0U];
            __Vtemp1335[1U] = __Vtemp1334[1U];
            __Vtemp1335[2U] = (1U & __Vtemp1334[2U]);
            tracep->chgWData(oldp+148,(__Vtemp1335),65);
            __Vtemp1337[0U] = 1U;
            __Vtemp1337[1U] = 0U;
            __Vtemp1337[2U] = 0U;
            VL_ADD_W(3, __Vtemp1338, __Vtemp1337, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
            tracep->chgBit(oldp+151,((1U & (~ (1U & 
                                               __Vtemp1338[2U])))));
            tracep->chgBit(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgWData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),128);
            __Vtemp1340[0U] = (IData)((0xfffffffffffffffeULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result));
            __Vtemp1340[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result) 
                                       >> 0x20U));
            __Vtemp1340[2U] = 1U;
            tracep->chgWData(oldp+161,(__Vtemp1340),65);
            tracep->chgWData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0U]),64);
            tracep->chgCData(oldp+233,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
            tracep->chgCData(oldp+236,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
            tracep->chgBit(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_MPORT_32_en));
            tracep->chgQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),64);
            tracep->chgCData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+243,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                 >> 7U))),5);
            tracep->chgSData(oldp+244,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data),64);
            tracep->chgQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgIData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
            tracep->chgQData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
        }
        tracep->chgBit(oldp+253,(vlSelf->clock));
        tracep->chgBit(oldp+254,(vlSelf->reset));
        tracep->chgQData(oldp+255,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+257,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+259,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+261,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+263,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+265,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+267,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+269,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+271,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+273,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+275,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+277,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+279,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+281,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+283,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+285,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+287,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+289,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+291,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+293,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+295,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+297,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+299,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+301,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+303,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+305,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+307,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+309,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+311,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+313,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+315,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+317,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+319,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+321,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+322,(vlSelf->io_difftest_commit));
    }
}

void Vriscv_soc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vriscv_soc___024root* const __restrict vlSelf = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
