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
    VlWide<4>/*127:0*/ __Vtemp4268;
    VlWide<4>/*127:0*/ __Vtemp4269;
    VlWide<4>/*127:0*/ __Vtemp4270;
    VlWide<4>/*127:0*/ __Vtemp4271;
    VlWide<3>/*95:0*/ __Vtemp4273;
    VlWide<3>/*95:0*/ __Vtemp4274;
    VlWide<3>/*95:0*/ __Vtemp4275;
    VlWide<3>/*95:0*/ __Vtemp4277;
    VlWide<3>/*95:0*/ __Vtemp4278;
    VlWide<3>/*95:0*/ __Vtemp4280;
    VlWide<3>/*95:0*/ __Vtemp4282;
    VlWide<3>/*95:0*/ __Vtemp4283;
    VlWide<3>/*95:0*/ __Vtemp4284;
    VlWide<3>/*95:0*/ __Vtemp4285;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
            tracep->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
            tracep->chgQData(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_bits_awaddr),64);
            tracep->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
            tracep->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
            tracep->chgQData(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wdata),64);
            tracep->chgCData(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb),8);
            tracep->chgBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
            tracep->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
            tracep->chgBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
            tracep->chgBit(oldp+12,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
            tracep->chgQData(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
            tracep->chgCData(oldp+15,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59),8);
            tracep->chgBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
            tracep->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
            tracep->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
            tracep->chgBit(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit));
            tracep->chgQData(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc),64);
            tracep->chgIData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst),32);
            tracep->chgQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [6U]),64);
            tracep->chgQData(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [7U]),64);
            tracep->chgQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [8U]),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [9U]),64);
            tracep->chgQData(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xaU]),64);
            tracep->chgQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xbU]),64);
            tracep->chgQData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xcU]),64);
            tracep->chgQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xdU]),64);
            tracep->chgQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xeU]),64);
            tracep->chgQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xfU]),64);
            tracep->chgQData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x10U]),64);
            tracep->chgQData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x11U]),64);
            tracep->chgQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x12U]),64);
            tracep->chgQData(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x13U]),64);
            tracep->chgQData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x14U]),64);
            tracep->chgQData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x15U]),64);
            tracep->chgQData(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x16U]),64);
            tracep->chgQData(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x17U]),64);
            tracep->chgQData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x18U]),64);
            tracep->chgQData(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x19U]),64);
            tracep->chgQData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1aU]),64);
            tracep->chgQData(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1bU]),64);
            tracep->chgQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1cU]),64);
            tracep->chgQData(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1dU]),64);
            tracep->chgQData(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1eU]),64);
            tracep->chgQData(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1fU]),64);
            tracep->chgQData(oldp+86,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid));
            tracep->chgQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
            tracep->chgBit(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready));
            tracep->chgBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_b_valid));
            tracep->chgBit(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
            tracep->chgQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata),64);
            tracep->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready));
            tracep->chgBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
            tracep->chgQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready));
            tracep->chgBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
            tracep->chgBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
            tracep->chgQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
            tracep->chgQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_pc_1),64);
            tracep->chgIData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst),32);
            tracep->chgCData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
            tracep->chgCData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
            tracep->chgCData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
            tracep->chgQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
            tracep->chgCData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
            tracep->chgBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
            tracep->chgCData(oldp+169,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en));
            tracep->chgCData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
            tracep->chgQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgIData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
            tracep->chgCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr),64);
            tracep->chgBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
            tracep->chgBit(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en));
            tracep->chgBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
            tracep->chgWData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN));
            __Vtemp4268[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]);
            __Vtemp4268[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]);
            __Vtemp4268[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]);
            __Vtemp4268[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+190,(__Vtemp4268),128);
            tracep->chgCData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A),6);
            tracep->chgWData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+203,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A),6);
            VL_EXTEND_WQ(128,56, __Vtemp4269, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_tag_io_D_T_1);
            tracep->chgWData(oldp+205,(__Vtemp4269),128);
            tracep->chgWData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN));
            tracep->chgCData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A),6);
            tracep->chgWData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+219,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A),6);
            tracep->chgQData(oldp+221,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+223,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+224,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
            tracep->chgCData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata),128);
            tracep->chgSData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wstrb),16);
            tracep->chgQData(oldp+248,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgQData(oldp+250,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1));
            tracep->chgBit(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
            tracep->chgBit(oldp+254,((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+255,((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+256,((1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U])));
            tracep->chgBit(oldp+257,((1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])));
            tracep->chgQData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata1),64);
            tracep->chgQData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata2),64);
            tracep->chgCData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0),2);
            tracep->chgCData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1),2);
            tracep->chgCData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),2);
            tracep->chgCData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3),2);
            tracep->chgCData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4),2);
            tracep->chgCData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5),2);
            tracep->chgCData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6),2);
            tracep->chgCData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7),2);
            tracep->chgCData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8),2);
            tracep->chgCData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9),2);
            tracep->chgCData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10),2);
            tracep->chgCData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11),2);
            tracep->chgCData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12),2);
            tracep->chgCData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13),2);
            tracep->chgCData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14),2);
            tracep->chgCData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15),2);
            tracep->chgCData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16),2);
            tracep->chgCData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17),2);
            tracep->chgCData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18),2);
            tracep->chgCData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19),2);
            tracep->chgCData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20),2);
            tracep->chgCData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21),2);
            tracep->chgCData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22),2);
            tracep->chgCData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23),2);
            tracep->chgCData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24),2);
            tracep->chgCData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25),2);
            tracep->chgCData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26),2);
            tracep->chgCData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27),2);
            tracep->chgCData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28),2);
            tracep->chgCData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29),2);
            tracep->chgCData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30),2);
            tracep->chgCData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31),2);
            tracep->chgCData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32),2);
            tracep->chgCData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33),2);
            tracep->chgCData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34),2);
            tracep->chgCData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35),2);
            tracep->chgCData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36),2);
            tracep->chgCData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37),2);
            tracep->chgCData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38),2);
            tracep->chgCData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39),2);
            tracep->chgCData(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40),2);
            tracep->chgCData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41),2);
            tracep->chgCData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42),2);
            tracep->chgCData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43),2);
            tracep->chgCData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44),2);
            tracep->chgCData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45),2);
            tracep->chgCData(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46),2);
            tracep->chgCData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47),2);
            tracep->chgCData(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48),2);
            tracep->chgCData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49),2);
            tracep->chgCData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50),2);
            tracep->chgCData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51),2);
            tracep->chgCData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52),2);
            tracep->chgCData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53),2);
            tracep->chgCData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54),2);
            tracep->chgCData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55),2);
            tracep->chgCData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56),2);
            tracep->chgCData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57),2);
            tracep->chgCData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58),2);
            tracep->chgCData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59),2);
            tracep->chgCData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60),2);
            tracep->chgCData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61),2);
            tracep->chgCData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62),2);
            tracep->chgCData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63),2);
            tracep->chgBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+330,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN)))));
            tracep->chgBit(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1));
            tracep->chgBit(oldp+332,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN)))));
            tracep->chgBit(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1));
            tracep->chgWData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN));
            __Vtemp4270[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp4270[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp4270[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp4270[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+339,(__Vtemp4270),128);
            tracep->chgCData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A),6);
            tracep->chgWData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+352,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_io_A),6);
            VL_EXTEND_WQ(128,56, __Vtemp4271, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_tag_io_D_T_1);
            tracep->chgWData(oldp+354,(__Vtemp4271),128);
            tracep->chgWData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN));
            tracep->chgCData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A),6);
            tracep->chgWData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+368,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1)))));
            tracep->chgQData(oldp+369,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+371,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+372,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))),4);
            tracep->chgCData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgSData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wstrb),16);
            tracep->chgQData(oldp+396,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgQData(oldp+398,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgBit(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1));
            tracep->chgBit(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+402,((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+403,((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+404,((1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U])));
            tracep->chgBit(oldp+405,((1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])));
            tracep->chgQData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata1),64);
            tracep->chgQData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata2),64);
            tracep->chgCData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0),2);
            tracep->chgCData(oldp+411,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1),2);
            tracep->chgCData(oldp+412,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),2);
            tracep->chgCData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3),2);
            tracep->chgCData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4),2);
            tracep->chgCData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5),2);
            tracep->chgCData(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6),2);
            tracep->chgCData(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7),2);
            tracep->chgCData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8),2);
            tracep->chgCData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9),2);
            tracep->chgCData(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10),2);
            tracep->chgCData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11),2);
            tracep->chgCData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12),2);
            tracep->chgCData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13),2);
            tracep->chgCData(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14),2);
            tracep->chgCData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15),2);
            tracep->chgCData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16),2);
            tracep->chgCData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17),2);
            tracep->chgCData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18),2);
            tracep->chgCData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19),2);
            tracep->chgCData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20),2);
            tracep->chgCData(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21),2);
            tracep->chgCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22),2);
            tracep->chgCData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23),2);
            tracep->chgCData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24),2);
            tracep->chgCData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25),2);
            tracep->chgCData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26),2);
            tracep->chgCData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27),2);
            tracep->chgCData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28),2);
            tracep->chgCData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29),2);
            tracep->chgCData(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30),2);
            tracep->chgCData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31),2);
            tracep->chgCData(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32),2);
            tracep->chgCData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33),2);
            tracep->chgCData(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34),2);
            tracep->chgCData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35),2);
            tracep->chgCData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36),2);
            tracep->chgCData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37),2);
            tracep->chgCData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38),2);
            tracep->chgCData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39),2);
            tracep->chgCData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40),2);
            tracep->chgCData(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41),2);
            tracep->chgCData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42),2);
            tracep->chgCData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43),2);
            tracep->chgCData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44),2);
            tracep->chgCData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45),2);
            tracep->chgCData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46),2);
            tracep->chgCData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47),2);
            tracep->chgCData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48),2);
            tracep->chgCData(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49),2);
            tracep->chgCData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50),2);
            tracep->chgCData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51),2);
            tracep->chgCData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52),2);
            tracep->chgCData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53),2);
            tracep->chgCData(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54),2);
            tracep->chgCData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55),2);
            tracep->chgCData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56),2);
            tracep->chgCData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57),2);
            tracep->chgCData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58),2);
            tracep->chgCData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59),2);
            tracep->chgCData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60),2);
            tracep->chgCData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61),2);
            tracep->chgCData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62),2);
            tracep->chgCData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63),2);
            tracep->chgBit(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+478,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN)))));
            tracep->chgBit(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1));
            tracep->chgBit(oldp+480,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN)))));
            tracep->chgBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1));
            tracep->chgCData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt),2);
            tracep->chgBit(oldp+483,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))));
            tracep->chgCData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+487,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
            tracep->chgQData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
            tracep->chgIData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
            tracep->chgQData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
            tracep->chgIData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
            tracep->chgBit(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_stall));
            tracep->chgBit(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgQData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+507,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
            tracep->chgQData(oldp+509,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+511,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgBit(oldp+512,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgBit(oldp+513,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_rs1_data),64);
            tracep->chgQData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result),64);
            tracep->chgBit(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en));
            tracep->chgQData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            tracep->chgQData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data),64);
            tracep->chgBit(oldp+523,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 3U))));
            tracep->chgBit(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid));
            tracep->chgQData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgBit(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
            tracep->chgBit(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgBit(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid));
            tracep->chgBit(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en));
            tracep->chgCData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgWData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data),65);
            tracep->chgBit(oldp+536,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
            tracep->chgQData(oldp+537,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U])))),64);
            tracep->chgQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp4273[0U] = 1U;
            __Vtemp4273[1U] = 0U;
            __Vtemp4273[2U] = 0U;
            VL_ADD_W(3, __Vtemp4274, __Vtemp4273, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
            __Vtemp4275[0U] = __Vtemp4274[0U];
            __Vtemp4275[1U] = __Vtemp4274[1U];
            __Vtemp4275[2U] = (1U & __Vtemp4274[2U]);
            tracep->chgWData(oldp+541,(__Vtemp4275),65);
            __Vtemp4277[0U] = 1U;
            __Vtemp4277[1U] = 0U;
            __Vtemp4277[2U] = 0U;
            VL_ADD_W(3, __Vtemp4278, __Vtemp4277, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
            tracep->chgBit(oldp+544,((1U & (~ (1U & 
                                               __Vtemp4278[2U])))));
            tracep->chgBit(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgWData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),128);
            __Vtemp4280[0U] = (IData)((0xfffffffffffffffeULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
            __Vtemp4280[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                                       >> 0x20U));
            __Vtemp4280[2U] = 1U;
            tracep->chgWData(oldp+554,(__Vtemp4280),65);
            tracep->chgWData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+560,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[0U])))),64);
            tracep->chgBit(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgBit(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
            tracep->chgBit(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
            tracep->chgQData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_result),64);
            tracep->chgBit(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
            tracep->chgBit(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgBit(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
            tracep->chgWData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),65);
            tracep->chgWData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),65);
            __Vtemp4282[0U] = 1U;
            __Vtemp4282[1U] = 0U;
            __Vtemp4282[2U] = 0U;
            __Vtemp4283[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp4283[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp4283[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp4284, __Vtemp4282, __Vtemp4283);
            __Vtemp4285[0U] = __Vtemp4284[0U];
            __Vtemp4285[1U] = __Vtemp4284[1U];
            __Vtemp4285[2U] = (1U & __Vtemp4284[2U]);
            tracep->chgWData(oldp+588,(__Vtemp4285),65);
            tracep->chgCData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
            tracep->chgWData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            tracep->chgWData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2),67);
            tracep->chgCData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
            tracep->chgCData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),65);
            tracep->chgWData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgBit(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType));
            tracep->chgWData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp),66);
            tracep->chgQData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+671,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgQData(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0U]),64);
            tracep->chgCData(oldp+683,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
            tracep->chgCData(oldp+686,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
            tracep->chgCData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgBit(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
            tracep->chgCData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+693,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                 >> 7U))),5);
            tracep->chgSData(oldp+694,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_stall));
            tracep->chgCData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgQData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
            tracep->chgQData(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result),64);
            tracep->chgQData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgIData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
            tracep->chgQData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
            tracep->chgCData(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
            tracep->chgQData(oldp+711,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr),64);
            tracep->chgQData(oldp+713,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+715,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wmask),64);
            tracep->chgBit(oldp+717,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wen));
            tracep->chgQData(oldp+718,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+720,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+721,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+722,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+723,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_lo),32);
            tracep->chgIData(oldp+724,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_hi),32);
        }
        tracep->chgBit(oldp+725,(vlSelf->clock));
        tracep->chgBit(oldp+726,(vlSelf->reset));
        tracep->chgQData(oldp+727,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+729,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+731,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+733,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+735,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+737,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+739,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+741,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+743,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+745,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+747,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+749,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+751,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+753,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+755,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+757,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+759,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+761,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+763,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+765,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+767,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+769,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+771,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+773,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+775,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+777,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+779,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+781,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+783,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+785,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+787,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+789,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+791,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+793,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+794,(vlSelf->io_difftest_commit));
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
