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
    VlWide<3>/*95:0*/ __Vtemp2993;
    VlWide<3>/*95:0*/ __Vtemp2994;
    VlWide<3>/*95:0*/ __Vtemp2995;
    VlWide<3>/*95:0*/ __Vtemp2997;
    VlWide<3>/*95:0*/ __Vtemp2998;
    VlWide<3>/*95:0*/ __Vtemp3000;
    VlWide<3>/*95:0*/ __Vtemp3002;
    VlWide<3>/*95:0*/ __Vtemp3003;
    VlWide<3>/*95:0*/ __Vtemp3004;
    VlWide<3>/*95:0*/ __Vtemp3005;
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
            tracep->chgBit(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_avalid));
            tracep->chgBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem));
            tracep->chgBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
            tracep->chgBit(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
            tracep->chgQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
            tracep->chgQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc),64);
            tracep->chgIData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst),32);
            tracep->chgCData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
            tracep->chgCData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
            tracep->chgCData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
            tracep->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
            tracep->chgCData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
            tracep->chgBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
            tracep->chgCData(oldp+113,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en));
            tracep->chgCData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
            tracep->chgQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgIData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
            tracep->chgCData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr),64);
            tracep->chgBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
            tracep->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en));
            tracep->chgBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
            tracep->chgBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__is_read_mem));
            tracep->chgBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__is_read_inst));
            tracep->chgBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
            tracep->chgIData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
            tracep->chgIData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__handle_inst),32);
            tracep->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
            tracep->chgIData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__temp_reg_inst),32);
            tracep->chgQData(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid));
            tracep->chgQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+143,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
            tracep->chgQData(oldp+145,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+147,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgBit(oldp+148,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgBit(oldp+149,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_rs1_data),64);
            tracep->chgQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result),64);
            tracep->chgBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en));
            tracep->chgQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data),64);
            tracep->chgBit(oldp+157,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 3U))));
            tracep->chgBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid));
            tracep->chgQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
            tracep->chgBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid));
            tracep->chgBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en));
            tracep->chgCData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgWData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data),65);
            tracep->chgBit(oldp+170,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
            tracep->chgQData(oldp+171,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U])))),64);
            tracep->chgQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp2993[0U] = 1U;
            __Vtemp2993[1U] = 0U;
            __Vtemp2993[2U] = 0U;
            VL_ADD_W(3, __Vtemp2994, __Vtemp2993, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
            __Vtemp2995[0U] = __Vtemp2994[0U];
            __Vtemp2995[1U] = __Vtemp2994[1U];
            __Vtemp2995[2U] = (1U & __Vtemp2994[2U]);
            tracep->chgWData(oldp+175,(__Vtemp2995),65);
            __Vtemp2997[0U] = 1U;
            __Vtemp2997[1U] = 0U;
            __Vtemp2997[2U] = 0U;
            VL_ADD_W(3, __Vtemp2998, __Vtemp2997, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
            tracep->chgBit(oldp+178,((1U & (~ (1U & 
                                               __Vtemp2998[2U])))));
            tracep->chgBit(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgWData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),128);
            __Vtemp3000[0U] = (IData)((0xfffffffffffffffeULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
            __Vtemp3000[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                                       >> 0x20U));
            __Vtemp3000[2U] = 1U;
            tracep->chgWData(oldp+188,(__Vtemp3000),65);
            tracep->chgWData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+194,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[0U])))),64);
            tracep->chgBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
            tracep->chgBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
            tracep->chgQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_result),64);
            tracep->chgBit(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
            tracep->chgBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
            tracep->chgWData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),65);
            tracep->chgWData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),65);
            __Vtemp3002[0U] = 1U;
            __Vtemp3002[1U] = 0U;
            __Vtemp3002[2U] = 0U;
            __Vtemp3003[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp3003[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp3003[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp3004, __Vtemp3002, __Vtemp3003);
            __Vtemp3005[0U] = __Vtemp3004[0U];
            __Vtemp3005[1U] = __Vtemp3004[1U];
            __Vtemp3005[2U] = (1U & __Vtemp3004[2U]);
            tracep->chgWData(oldp+222,(__Vtemp3005),65);
            tracep->chgCData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
            tracep->chgWData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            tracep->chgWData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2),67);
            tracep->chgCData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
            tracep->chgCData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),65);
            tracep->chgWData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgBit(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType));
            tracep->chgWData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp),66);
            tracep->chgQData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0U]),64);
            tracep->chgCData(oldp+317,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
            tracep->chgCData(oldp+320,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
            tracep->chgCData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgBit(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
            tracep->chgCData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+327,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 7U))),5);
            tracep->chgSData(oldp+328,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_stall));
            tracep->chgCData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgQData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data),64);
            tracep->chgQData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result),64);
            tracep->chgQData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgIData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
            tracep->chgQData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
            tracep->chgCData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
        }
        tracep->chgBit(oldp+345,(vlSelf->clock));
        tracep->chgBit(oldp+346,(vlSelf->reset));
        tracep->chgQData(oldp+347,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+349,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+351,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+353,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+355,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+357,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+359,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+361,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+363,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+365,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+367,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+369,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+371,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+373,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+375,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+377,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+379,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+381,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+383,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+385,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+387,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+389,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+391,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+393,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+395,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+397,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+399,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+401,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+403,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+405,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+407,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+409,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+411,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+413,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+414,(vlSelf->io_difftest_commit));
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
