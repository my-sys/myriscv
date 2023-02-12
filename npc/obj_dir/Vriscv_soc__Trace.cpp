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
    VlWide<4>/*127:0*/ __Vtemp4218;
    VlWide<4>/*127:0*/ __Vtemp4219;
    VlWide<4>/*127:0*/ __Vtemp4220;
    VlWide<4>/*127:0*/ __Vtemp4221;
    VlWide<3>/*95:0*/ __Vtemp4223;
    VlWide<3>/*95:0*/ __Vtemp4224;
    VlWide<3>/*95:0*/ __Vtemp4225;
    VlWide<3>/*95:0*/ __Vtemp4227;
    VlWide<3>/*95:0*/ __Vtemp4228;
    VlWide<3>/*95:0*/ __Vtemp4230;
    VlWide<3>/*95:0*/ __Vtemp4232;
    VlWide<3>/*95:0*/ __Vtemp4233;
    VlWide<3>/*95:0*/ __Vtemp4234;
    VlWide<3>/*95:0*/ __Vtemp4235;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
            tracep->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
            tracep->chgQData(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_out_bits_awaddr),64);
            tracep->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
            tracep->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
            tracep->chgQData(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_out_bits_wdata),64);
            tracep->chgCData(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_out_bits_wstrb),8);
            tracep->chgBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_out_bits_wlast));
            tracep->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
            tracep->chgBit(oldp+11,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__ar_arb_io_out_valid));
            tracep->chgQData(oldp+12,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__ar_arb_io_out_bits_araddr),64);
            tracep->chgCData(oldp+14,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__ar_arb_io_out_bits_arlen),8);
            tracep->chgBit(oldp+15,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_ready));
            tracep->chgQData(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
            tracep->chgBit(oldp+18,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_rlast));
            tracep->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit));
            tracep->chgQData(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc),64);
            tracep->chgIData(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst),32);
            tracep->chgQData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+25,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+27,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+29,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+33,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [6U]),64);
            tracep->chgQData(oldp+35,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [7U]),64);
            tracep->chgQData(oldp+37,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [8U]),64);
            tracep->chgQData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [9U]),64);
            tracep->chgQData(oldp+41,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xaU]),64);
            tracep->chgQData(oldp+43,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xbU]),64);
            tracep->chgQData(oldp+45,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xcU]),64);
            tracep->chgQData(oldp+47,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xdU]),64);
            tracep->chgQData(oldp+49,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xeU]),64);
            tracep->chgQData(oldp+51,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xfU]),64);
            tracep->chgQData(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x10U]),64);
            tracep->chgQData(oldp+55,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x11U]),64);
            tracep->chgQData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x12U]),64);
            tracep->chgQData(oldp+59,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x13U]),64);
            tracep->chgQData(oldp+61,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x14U]),64);
            tracep->chgQData(oldp+63,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x15U]),64);
            tracep->chgQData(oldp+65,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x16U]),64);
            tracep->chgQData(oldp+67,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x17U]),64);
            tracep->chgQData(oldp+69,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x18U]),64);
            tracep->chgQData(oldp+71,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x19U]),64);
            tracep->chgQData(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1aU]),64);
            tracep->chgQData(oldp+75,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1bU]),64);
            tracep->chgQData(oldp+77,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1cU]),64);
            tracep->chgQData(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1dU]),64);
            tracep->chgQData(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1eU]),64);
            tracep->chgQData(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1fU]),64);
            tracep->chgBit(oldp+85,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
            tracep->chgQData(oldp+86,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wready));
            tracep->chgBit(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_w_valid));
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgBit(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_r_ready));
            tracep->chgBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rvalid));
            tracep->chgQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_in_0_ready));
            tracep->chgBit(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_aw_valid));
            tracep->chgQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_aw_awaddr),64);
            tracep->chgCData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_aw_awlen),8);
            tracep->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_aw_wdata),64);
            tracep->chgBit(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_aw_wlast));
            tracep->chgCData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_aw_wstrb),8);
            tracep->chgBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ar_valid));
            tracep->chgQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ar_araddr),64);
            tracep->chgCData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ar_arlen),8);
            tracep->chgBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_ready));
            tracep->chgBit(oldp+110,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_bits_rdata_T_1))));
            tracep->chgQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rdata),64);
            tracep->chgBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wready));
            tracep->chgBit(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_w_valid));
            tracep->chgQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_w_addr),64);
            tracep->chgQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_w_wdata),64);
            tracep->chgBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_w_is_w));
            tracep->chgCData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_w_wstrb),8);
            tracep->chgBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_r_ready));
            tracep->chgBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rvalid));
            tracep->chgQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_in_1_ready));
            tracep->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_aw_valid));
            tracep->chgQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_aw_awaddr),64);
            tracep->chgCData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_aw_awlen),8);
            tracep->chgQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_aw_wdata),64);
            tracep->chgBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_aw_wlast));
            tracep->chgCData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_aw_wstrb),8);
            tracep->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__ar_arb_io_in_1_ready));
            tracep->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ar_valid));
            tracep->chgQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ar_araddr),64);
            tracep->chgCData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ar_arlen),8);
            tracep->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_ready));
            tracep->chgBit(oldp+141,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_bits_rdata_T_1))));
            tracep->chgQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rdata),64);
            tracep->chgBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
            tracep->chgBit(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
            tracep->chgQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
            tracep->chgQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_pc_1),64);
            tracep->chgIData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst),32);
            tracep->chgCData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
            tracep->chgCData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
            tracep->chgCData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
            tracep->chgQData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
            tracep->chgCData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
            tracep->chgBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
            tracep->chgCData(oldp+172,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en));
            tracep->chgCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
            tracep->chgQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgIData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
            tracep->chgCData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr),64);
            tracep->chgBit(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
            tracep->chgBit(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en));
            tracep->chgBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
            tracep->chgBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_WEN));
            __Vtemp4218[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]);
            __Vtemp4218[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]);
            __Vtemp4218[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]);
            __Vtemp4218[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+189,(__Vtemp4218),128);
            tracep->chgCData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_A),6);
            tracep->chgWData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata),128);
            tracep->chgBit(oldp+198,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_A),6);
            VL_EXTEND_WQ(128,56, __Vtemp4219, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_tag_io_D_T_1);
            tracep->chgWData(oldp+200,(__Vtemp4219),128);
            tracep->chgBit(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_WEN));
            tracep->chgCData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_A),6);
            tracep->chgBit(oldp+206,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_A),6);
            tracep->chgQData(oldp+208,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+210,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+211,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
            tracep->chgCData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata),128);
            tracep->chgSData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wstrb),16);
            tracep->chgBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1));
            tracep->chgBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
            tracep->chgQData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata1),64);
            tracep->chgQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata2),64);
            tracep->chgCData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0),2);
            tracep->chgCData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1),2);
            tracep->chgCData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),2);
            tracep->chgCData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3),2);
            tracep->chgCData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4),2);
            tracep->chgCData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5),2);
            tracep->chgCData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6),2);
            tracep->chgCData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7),2);
            tracep->chgCData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8),2);
            tracep->chgCData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9),2);
            tracep->chgCData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10),2);
            tracep->chgCData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11),2);
            tracep->chgCData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12),2);
            tracep->chgCData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13),2);
            tracep->chgCData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14),2);
            tracep->chgCData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15),2);
            tracep->chgCData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16),2);
            tracep->chgCData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17),2);
            tracep->chgCData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18),2);
            tracep->chgCData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19),2);
            tracep->chgCData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20),2);
            tracep->chgCData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21),2);
            tracep->chgCData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22),2);
            tracep->chgCData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23),2);
            tracep->chgCData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24),2);
            tracep->chgCData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25),2);
            tracep->chgCData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26),2);
            tracep->chgCData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27),2);
            tracep->chgCData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28),2);
            tracep->chgCData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29),2);
            tracep->chgCData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30),2);
            tracep->chgCData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31),2);
            tracep->chgCData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32),2);
            tracep->chgCData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33),2);
            tracep->chgCData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34),2);
            tracep->chgCData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35),2);
            tracep->chgCData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36),2);
            tracep->chgCData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37),2);
            tracep->chgCData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38),2);
            tracep->chgCData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39),2);
            tracep->chgCData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40),2);
            tracep->chgCData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41),2);
            tracep->chgCData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42),2);
            tracep->chgCData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43),2);
            tracep->chgCData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44),2);
            tracep->chgCData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45),2);
            tracep->chgCData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46),2);
            tracep->chgCData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47),2);
            tracep->chgCData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48),2);
            tracep->chgCData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49),2);
            tracep->chgCData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50),2);
            tracep->chgCData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51),2);
            tracep->chgCData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52),2);
            tracep->chgCData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53),2);
            tracep->chgCData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54),2);
            tracep->chgCData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55),2);
            tracep->chgCData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56),2);
            tracep->chgCData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57),2);
            tracep->chgCData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58),2);
            tracep->chgCData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59),2);
            tracep->chgCData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60),2);
            tracep->chgCData(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61),2);
            tracep->chgCData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62),2);
            tracep->chgCData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63),2);
            tracep->chgBit(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_need_wait));
            tracep->chgBit(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+310,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_WEN)))));
            tracep->chgBit(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1));
            tracep->chgBit(oldp+312,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_WEN)))));
            tracep->chgBit(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1));
            tracep->chgBit(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_WEN));
            __Vtemp4220[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp4220[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp4220[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp4220[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+315,(__Vtemp4220),128);
            tracep->chgCData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_A),6);
            tracep->chgWData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgBit(oldp+324,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_A),6);
            VL_EXTEND_WQ(128,56, __Vtemp4221, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_tag_io_D_T_1);
            tracep->chgWData(oldp+326,(__Vtemp4221),128);
            tracep->chgBit(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_WEN));
            tracep->chgCData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_A),6);
            tracep->chgBit(oldp+332,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_A),6);
            tracep->chgQData(oldp+334,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_w_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+336,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_w_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+337,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_w_addr))),4);
            tracep->chgCData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgSData(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wstrb),16);
            tracep->chgBit(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1));
            tracep->chgBit(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgQData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata1),64);
            tracep->chgQData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata2),64);
            tracep->chgCData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0),2);
            tracep->chgCData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1),2);
            tracep->chgCData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),2);
            tracep->chgCData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3),2);
            tracep->chgCData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4),2);
            tracep->chgCData(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5),2);
            tracep->chgCData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6),2);
            tracep->chgCData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7),2);
            tracep->chgCData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8),2);
            tracep->chgCData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9),2);
            tracep->chgCData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10),2);
            tracep->chgCData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11),2);
            tracep->chgCData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12),2);
            tracep->chgCData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13),2);
            tracep->chgCData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14),2);
            tracep->chgCData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15),2);
            tracep->chgCData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16),2);
            tracep->chgCData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17),2);
            tracep->chgCData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18),2);
            tracep->chgCData(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19),2);
            tracep->chgCData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20),2);
            tracep->chgCData(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21),2);
            tracep->chgCData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22),2);
            tracep->chgCData(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23),2);
            tracep->chgCData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24),2);
            tracep->chgCData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25),2);
            tracep->chgCData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26),2);
            tracep->chgCData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27),2);
            tracep->chgCData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28),2);
            tracep->chgCData(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29),2);
            tracep->chgCData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30),2);
            tracep->chgCData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31),2);
            tracep->chgCData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32),2);
            tracep->chgCData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33),2);
            tracep->chgCData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34),2);
            tracep->chgCData(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35),2);
            tracep->chgCData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36),2);
            tracep->chgCData(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37),2);
            tracep->chgCData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38),2);
            tracep->chgCData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39),2);
            tracep->chgCData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40),2);
            tracep->chgCData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41),2);
            tracep->chgCData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42),2);
            tracep->chgCData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43),2);
            tracep->chgCData(oldp+411,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44),2);
            tracep->chgCData(oldp+412,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45),2);
            tracep->chgCData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46),2);
            tracep->chgCData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47),2);
            tracep->chgCData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48),2);
            tracep->chgCData(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49),2);
            tracep->chgCData(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50),2);
            tracep->chgCData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51),2);
            tracep->chgCData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52),2);
            tracep->chgCData(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53),2);
            tracep->chgCData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54),2);
            tracep->chgCData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55),2);
            tracep->chgCData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56),2);
            tracep->chgCData(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57),2);
            tracep->chgCData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58),2);
            tracep->chgCData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59),2);
            tracep->chgCData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60),2);
            tracep->chgCData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61),2);
            tracep->chgCData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62),2);
            tracep->chgCData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63),2);
            tracep->chgBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_need_wait));
            tracep->chgBit(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+436,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_WEN)))));
            tracep->chgBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1));
            tracep->chgBit(oldp+438,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_WEN)))));
            tracep->chgBit(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1));
            tracep->chgBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_out_valid));
            tracep->chgCData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_out_bits_awlen),8);
            tracep->chgBit(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_chosen));
            tracep->chgBit(oldp+443,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ar_valid)))));
            tracep->chgBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ack));
            tracep->chgBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_ack));
            tracep->chgBit(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_w_finish));
            tracep->chgBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb__DOT__lockCount_value));
            tracep->chgBit(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb__DOT__lockIdx));
            tracep->chgBit(oldp+449,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__aw_arb_io_out_bits_awlen))));
            tracep->chgBit(oldp+450,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_aw_valid)))));
            tracep->chgBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
            tracep->chgQData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
            tracep->chgIData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
            tracep->chgBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_stall));
            tracep->chgQData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
            tracep->chgIData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
            tracep->chgBit(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_w_flush));
            tracep->chgBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_r_flush));
            tracep->chgQData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+465,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
            tracep->chgQData(oldp+467,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+469,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgBit(oldp+470,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgBit(oldp+471,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result),64);
            tracep->chgBit(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en));
            tracep->chgQData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data),64);
            tracep->chgBit(oldp+477,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 3U))));
            tracep->chgBit(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid));
            tracep->chgQData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
            tracep->chgBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid));
            tracep->chgBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en));
            tracep->chgCData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgWData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data),65);
            tracep->chgBit(oldp+490,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
            tracep->chgQData(oldp+491,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U])))),64);
            tracep->chgQData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp4223[0U] = 1U;
            __Vtemp4223[1U] = 0U;
            __Vtemp4223[2U] = 0U;
            VL_ADD_W(3, __Vtemp4224, __Vtemp4223, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
            __Vtemp4225[0U] = __Vtemp4224[0U];
            __Vtemp4225[1U] = __Vtemp4224[1U];
            __Vtemp4225[2U] = (1U & __Vtemp4224[2U]);
            tracep->chgWData(oldp+495,(__Vtemp4225),65);
            __Vtemp4227[0U] = 1U;
            __Vtemp4227[1U] = 0U;
            __Vtemp4227[2U] = 0U;
            VL_ADD_W(3, __Vtemp4228, __Vtemp4227, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
            tracep->chgBit(oldp+498,((1U & (~ (1U & 
                                               __Vtemp4228[2U])))));
            tracep->chgBit(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgWData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),128);
            __Vtemp4230[0U] = (IData)((0xfffffffffffffffeULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
            __Vtemp4230[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                                       >> 0x20U));
            __Vtemp4230[2U] = 1U;
            tracep->chgWData(oldp+508,(__Vtemp4230),65);
            tracep->chgWData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+514,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[0U])))),64);
            tracep->chgBit(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgBit(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
            tracep->chgBit(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
            tracep->chgQData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_result),64);
            tracep->chgBit(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
            tracep->chgBit(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgBit(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
            tracep->chgWData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),65);
            tracep->chgWData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),65);
            __Vtemp4232[0U] = 1U;
            __Vtemp4232[1U] = 0U;
            __Vtemp4232[2U] = 0U;
            __Vtemp4233[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp4233[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp4233[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp4234, __Vtemp4232, __Vtemp4233);
            __Vtemp4235[0U] = __Vtemp4234[0U];
            __Vtemp4235[1U] = __Vtemp4234[1U];
            __Vtemp4235[2U] = (1U & __Vtemp4234[2U]);
            tracep->chgWData(oldp+542,(__Vtemp4235),65);
            tracep->chgCData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
            tracep->chgWData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            tracep->chgWData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2),67);
            tracep->chgCData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
            tracep->chgCData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),65);
            tracep->chgWData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgBit(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType));
            tracep->chgWData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp),66);
            tracep->chgQData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgQData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0U]),64);
            tracep->chgCData(oldp+637,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
            tracep->chgCData(oldp+640,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
            tracep->chgCData(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgBit(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
            tracep->chgCData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+647,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 7U))),5);
            tracep->chgSData(oldp+648,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_stall));
            tracep->chgCData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
            tracep->chgQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result),64);
            tracep->chgQData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgIData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
            tracep->chgQData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
            tracep->chgCData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
            tracep->chgQData(oldp+665,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_araddr),64);
            tracep->chgQData(oldp+667,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_awaddr),64);
            tracep->chgQData(oldp+669,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wmask),64);
            tracep->chgBit(oldp+671,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgCData(oldp+672,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_arlen),8);
            tracep->chgBit(oldp+673,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_start_read));
            tracep->chgBit(oldp+674,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgIData(oldp+675,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_lo),32);
            tracep->chgIData(oldp+676,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_hi),32);
        }
        tracep->chgBit(oldp+677,(vlSelf->clock));
        tracep->chgBit(oldp+678,(vlSelf->reset));
        tracep->chgQData(oldp+679,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+681,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+683,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+685,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+687,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+689,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+691,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+693,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+695,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+697,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+699,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+701,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+703,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+705,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+707,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+709,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+711,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+713,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+715,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+717,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+719,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+721,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+723,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+725,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+727,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+729,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+731,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+733,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+735,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+737,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+739,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+741,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+743,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+745,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+746,(vlSelf->io_difftest_commit));
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
