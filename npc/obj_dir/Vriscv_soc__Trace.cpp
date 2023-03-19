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
    VlWide<4>/*127:0*/ __Vtemp979;
    VlWide<4>/*127:0*/ __Vtemp980;
    VlWide<4>/*127:0*/ __Vtemp981;
    VlWide<3>/*95:0*/ __Vtemp983;
    VlWide<3>/*95:0*/ __Vtemp984;
    VlWide<3>/*95:0*/ __Vtemp985;
    VlWide<3>/*95:0*/ __Vtemp987;
    VlWide<3>/*95:0*/ __Vtemp988;
    VlWide<3>/*95:0*/ __Vtemp990;
    VlWide<3>/*95:0*/ __Vtemp992;
    VlWide<3>/*95:0*/ __Vtemp993;
    VlWide<3>/*95:0*/ __Vtemp994;
    VlWide<3>/*95:0*/ __Vtemp995;
    VlWide<3>/*95:0*/ __Vtemp998;
    VlWide<3>/*95:0*/ __Vtemp999;
    VlWide<3>/*95:0*/ __Vtemp1000;
    VlWide<5>/*159:0*/ __Vtemp1009;
    VlWide<5>/*159:0*/ __Vtemp1013;
    VlWide<3>/*95:0*/ __Vtemp1015;
    VlWide<5>/*159:0*/ __Vtemp1017;
    VlWide<5>/*159:0*/ __Vtemp1018;
    VlWide<5>/*159:0*/ __Vtemp1019;
    VlWide<5>/*159:0*/ __Vtemp1020;
    VlWide<5>/*159:0*/ __Vtemp1021;
    VlWide<5>/*159:0*/ __Vtemp1023;
    VlWide<5>/*159:0*/ __Vtemp1024;
    VlWide<5>/*159:0*/ __Vtemp1025;
    VlWide<5>/*159:0*/ __Vtemp1026;
    VlWide<5>/*159:0*/ __Vtemp1027;
    VlWide<5>/*159:0*/ __Vtemp1029;
    VlWide<5>/*159:0*/ __Vtemp1030;
    VlWide<5>/*159:0*/ __Vtemp1031;
    VlWide<5>/*159:0*/ __Vtemp1039;
    VlWide<5>/*159:0*/ __Vtemp1040;
    VlWide<5>/*159:0*/ __Vtemp1048;
    VlWide<4>/*127:0*/ __Vtemp1050;
    VlWide<4>/*127:0*/ __Vtemp1051;
    VlWide<4>/*127:0*/ __Vtemp1052;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
            tracep->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
            tracep->chgQData(oldp+2,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr
                                           : 0ULL))),64);
            tracep->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
            tracep->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
            tracep->chgQData(oldp+6,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata
                                           : 0ULL))),64);
            tracep->chgCData(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb),8);
            tracep->chgBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
            tracep->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
            tracep->chgBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
            tracep->chgBit(oldp+12,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
            tracep->chgQData(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
            tracep->chgCData(oldp+15,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                       | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
            tracep->chgBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
            tracep->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
            tracep->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
            tracep->chgCData(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr),6);
            tracep->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
            tracep->chgWData(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+26,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q),128);
            tracep->chgCData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp979, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
            tracep->chgWData(oldp+31,(__Vtemp979),128);
            tracep->chgWData(oldp+35,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q),128);
            tracep->chgCData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
            tracep->chgBit(oldp+40,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write)))));
            tracep->chgWData(oldp+41,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q),128);
            tracep->chgCData(oldp+45,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr),6);
            tracep->chgWData(oldp+46,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q),128);
            tracep->chgCData(oldp+50,((0x3fU & ((0U 
                                                 != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                                                 : (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                            >> 4U))))),6);
            tracep->chgBit(oldp+51,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
            __Vtemp980[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp980[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp980[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp980[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+52,(__Vtemp980),128);
            tracep->chgWData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+60,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q),128);
            tracep->chgCData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp981, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+65,(__Vtemp981),128);
            tracep->chgWData(oldp+69,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q),128);
            tracep->chgBit(oldp+73,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
            tracep->chgWData(oldp+74,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q),128);
            tracep->chgCData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr),6);
            tracep->chgWData(oldp+79,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q),128);
            tracep->chgBit(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid));
            tracep->chgQData(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgQData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
            tracep->chgBit(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_fence_i));
            tracep->chgBit(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+105,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+113,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
            tracep->chgQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata),64);
            tracep->chgBit(oldp+126,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
            tracep->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
            tracep->chgQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+130,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
            tracep->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_stall));
            tracep->chgQData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc),64);
            tracep->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush));
            tracep->chgQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
            tracep->chgIData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
            tracep->chgCData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
            tracep->chgCData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
            tracep->chgCData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc),64);
            tracep->chgCData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
            tracep->chgSData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
            tracep->chgCData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
            tracep->chgBit(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
            tracep->chgSData(oldp+164,((0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))),12);
            tracep->chgQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en));
            tracep->chgBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
            tracep->chgCData(oldp+169,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+170,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___reg_rs_data_T_6)),64);
            tracep->chgBit(oldp+172,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))));
            tracep->chgCData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
            tracep->chgQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result),64);
            tracep->chgBit(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
            tracep->chgBit(oldp+182,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 1U)))));
            tracep->chgSData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result),64);
            tracep->chgBit(oldp+186,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en))));
            tracep->chgCData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception),5);
            tracep->chgBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_exception));
            tracep->chgBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret));
            tracep->chgQData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_next_pc),64);
            tracep->chgBit(oldp+192,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))));
            tracep->chgBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
            tracep->chgQData(oldp+194,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                           >> 0x14U) 
                                          == (0xfffU 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                         : ((0xb02U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret
                                             : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
            tracep->chgBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
            tracep->chgBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush));
            tracep->chgSData(oldp+198,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec),64);
            tracep->chgQData(oldp+201,((((0x341U == 
                                          (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc)),64);
            tracep->chgQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgBit(oldp+207,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq));
            tracep->chgBit(oldp+210,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq))));
            tracep->chgCData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception),5);
            tracep->chgBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception));
            tracep->chgQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
            tracep->chgQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
            tracep->chgQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc),64);
            tracep->chgQData(oldp+220,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+222,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+223,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
            tracep->chgCData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
            tracep->chgBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
            tracep->chgBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+234,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+236,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+241,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+243,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0));
            tracep->chgBit(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
            tracep->chgBit(oldp+247,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+248,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))));
            tracep->chgQData(oldp+249,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[0U]))))),64);
            tracep->chgQData(oldp+251,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[0U]))))),64);
            tracep->chgQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+255,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
            tracep->chgQData(oldp+257,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+259,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+260,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))),4);
            tracep->chgCData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+273,((((QData)((IData)(
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
                                                                     : 0U)))))))),64);
            tracep->chgWData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+288,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+290,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+297,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+299,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+303,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+304,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+305,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+306,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+307,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[0U]))))),64);
            tracep->chgQData(oldp+309,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[0U]))))),64);
            tracep->chgQData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+313,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+322,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+327,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+328,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
            tracep->chgQData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
            tracep->chgIData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
            tracep->chgBit(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
            tracep->chgBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
            tracep->chgQData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data),64);
            tracep->chgQData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc),64);
            tracep->chgBit(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid));
            tracep->chgBit(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_valid));
            tracep->chgQData(oldp+350,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr))
                                         ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6)),64);
            tracep->chgBit(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid));
            tracep->chgBit(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en));
            tracep->chgQData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
            tracep->chgQData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            tracep->chgQData(oldp+358,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid)
                                          ? ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                              ? ((2U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                                              : ((2U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                                          : 0ULL) | 
                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid)
                                          ? ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                              : ((8U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))))
                                          : 0ULL))),64);
            tracep->chgBit(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
            tracep->chgBit(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid));
            tracep->chgBit(oldp+362,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid))));
            tracep->chgBit(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_valid));
            tracep->chgQData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data),64);
            tracep->chgQData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data),64);
            tracep->chgQData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result),64);
            tracep->chgBit(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu_io_valid));
            tracep->chgBit(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_fence_i));
            tracep->chgBit(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret));
            tracep->chgBit(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception));
            tracep->chgCData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),5);
            tracep->chgBit(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall));
            tracep->chgQData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgCData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgBit(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
            tracep->chgCData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),5);
            tracep->chgQData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en));
            tracep->chgQData(oldp+387,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))
                                         ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6)),64);
            tracep->chgBit(oldp+389,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
            tracep->chgBit(oldp+390,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
            tracep->chgQData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp983[0U] = 1U;
            __Vtemp983[1U] = 0U;
            __Vtemp983[2U] = 0U;
            VL_ADD_W(3, __Vtemp984, __Vtemp983, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            __Vtemp985[0U] = __Vtemp984[0U];
            __Vtemp985[1U] = __Vtemp984[1U];
            __Vtemp985[2U] = (1U & __Vtemp984[2U]);
            tracep->chgWData(oldp+393,(__Vtemp985),65);
            __Vtemp987[0U] = 1U;
            __Vtemp987[1U] = 0U;
            __Vtemp987[2U] = 0U;
            VL_ADD_W(3, __Vtemp988, __Vtemp987, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            tracep->chgBit(oldp+396,((1U & (~ (1U & 
                                               __Vtemp988[2U])))));
            tracep->chgBit(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgQData(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp),64);
            tracep->chgWData(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),65);
            tracep->chgBit(oldp+407,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgQData(oldp+408,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
            __Vtemp990[0U] = (IData)((0xfffffffffffffffeULL 
                                      & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                         + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
            __Vtemp990[1U] = (IData)(((0xfffffffffffffffeULL 
                                       & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                          + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)) 
                                      >> 0x20U));
            __Vtemp990[2U] = 1U;
            tracep->chgWData(oldp+410,(__Vtemp990),65);
            tracep->chgWData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgBit(oldp+416,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+417,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgQData(oldp+419,(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                         ? ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                         : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+421,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid) 
                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                          >> 4U)) & 
                                      (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall)))));
            tracep->chgBit(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
            tracep->chgBit(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
            tracep->chgQData(oldp+424,(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                         ? (((QData)((IData)(
                                                             ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                               >> 0x1fU)
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                         : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                             ? (((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))
                                             : (((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))))),64);
            tracep->chgBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
            tracep->chgBit(oldp+427,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid) 
                                       & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 4U))) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall)))));
            tracep->chgBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
            tracep->chgBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid));
            tracep->chgWData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
            __Vtemp992[0U] = 1U;
            __Vtemp992[1U] = 0U;
            __Vtemp992[2U] = 0U;
            __Vtemp993[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp993[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp993[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp994, __Vtemp992, __Vtemp993);
            __Vtemp995[0U] = __Vtemp994[0U];
            __Vtemp995[1U] = __Vtemp994[1U];
            __Vtemp995[2U] = (1U & __Vtemp994[2U]);
            tracep->chgWData(oldp+451,(__Vtemp995),65);
            tracep->chgCData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
            tracep->chgWData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
            tracep->chgBit(oldp+462,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                             | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
            __Vtemp998[0U] = 1U;
            __Vtemp998[1U] = 0U;
            __Vtemp998[2U] = 0U;
            __Vtemp999[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp999[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp999[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp1000, __Vtemp998, __Vtemp999);
            tracep->chgBit(oldp+463,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ __Vtemp1000[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 __Vtemp1000[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ (1U 
                                                   & __Vtemp1000[2U]))))));
            tracep->chgBit(oldp+464,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
            tracep->chgBit(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
            tracep->chgQData(oldp+466,(((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgQData(oldp+468,(((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__valid));
            VL_EXTEND_WQ(130,64, __Vtemp1009, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                __Vtemp1013[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
                __Vtemp1013[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp1013[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp1013[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp1013[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 3U : 0U);
            } else {
                __Vtemp1013[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                                    : __Vtemp1009[0U]);
                __Vtemp1013[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                               >> 0x20U))
                                    : __Vtemp1009[1U]);
                __Vtemp1013[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? 0xffffffffU : 
                                   __Vtemp1009[2U]);
                __Vtemp1013[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? 0xffffffffU : 
                                   __Vtemp1009[3U]);
                __Vtemp1013[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? 3U : __Vtemp1009[4U]);
            }
            tracep->chgWData(oldp+471,(__Vtemp1013),130);
            tracep->chgWData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            __Vtemp1015[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                               << 1U);
            __Vtemp1015[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                                >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                             << 1U));
            __Vtemp1015[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                      << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                    << 1U)));
            tracep->chgWData(oldp+479,(__Vtemp1015),67);
            tracep->chgCData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
            tracep->chgCData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),4);
            __Vtemp1017[0U] = 1U;
            __Vtemp1017[1U] = 0U;
            __Vtemp1017[2U] = 0U;
            __Vtemp1017[3U] = 0U;
            __Vtemp1017[4U] = 0U;
            __Vtemp1018[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp1018[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp1018[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp1018[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp1018[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp1019, __Vtemp1017, __Vtemp1018);
            __Vtemp1020[0U] = __Vtemp1019[0U];
            __Vtemp1020[1U] = __Vtemp1019[1U];
            __Vtemp1020[2U] = __Vtemp1019[2U];
            __Vtemp1020[3U] = __Vtemp1019[3U];
            __Vtemp1020[4U] = (3U & __Vtemp1019[4U]);
            VL_EXTEND_WW(131,130, __Vtemp1021, __Vtemp1020);
            __Vtemp1023[0U] = 1U;
            __Vtemp1023[1U] = 0U;
            __Vtemp1023[2U] = 0U;
            __Vtemp1023[3U] = 0U;
            __Vtemp1023[4U] = 0U;
            __Vtemp1024[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp1024[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp1024[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp1024[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp1024[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp1025, __Vtemp1023, __Vtemp1024);
            __Vtemp1026[0U] = __Vtemp1025[0U];
            __Vtemp1026[1U] = __Vtemp1025[1U];
            __Vtemp1026[2U] = __Vtemp1025[2U];
            __Vtemp1026[3U] = __Vtemp1025[3U];
            __Vtemp1026[4U] = (3U & __Vtemp1025[4U]);
            VL_EXTEND_WW(131,130, __Vtemp1027, __Vtemp1026);
            __Vtemp1029[0U] = 1U;
            __Vtemp1029[1U] = 0U;
            __Vtemp1029[2U] = 0U;
            __Vtemp1029[3U] = 0U;
            __Vtemp1029[4U] = 0U;
            __Vtemp1030[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp1030[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp1030[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp1030[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp1030[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp1031, __Vtemp1029, __Vtemp1030);
            if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp1039[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
                __Vtemp1039[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
                __Vtemp1039[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
                __Vtemp1039[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
                __Vtemp1039[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
            } else {
                __Vtemp1039[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                    : 0U);
                __Vtemp1039[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                    : 0U);
                __Vtemp1039[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                    : 0U);
                __Vtemp1039[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                    : 0U);
                __Vtemp1039[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                    : 0U);
            }
            VL_EXTEND_WW(131,130, __Vtemp1040, __Vtemp1039);
            if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp1048[0U] = __Vtemp1021[0U];
                __Vtemp1048[1U] = __Vtemp1021[1U];
                __Vtemp1048[2U] = __Vtemp1021[2U];
                __Vtemp1048[3U] = __Vtemp1021[3U];
                __Vtemp1048[4U] = __Vtemp1021[4U];
            } else {
                __Vtemp1048[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp1027[0U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? (__Vtemp1031[0U] 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                         ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                            << 1U) : 
                                        __Vtemp1040[0U])));
                __Vtemp1048[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp1027[1U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp1031[0U] 
                                            >> 0x1fU) 
                                           | (__Vtemp1031[1U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                  << 1U))
                                            : __Vtemp1040[1U])));
                __Vtemp1048[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp1027[2U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp1031[1U] 
                                            >> 0x1fU) 
                                           | (__Vtemp1031[2U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                  << 1U))
                                            : __Vtemp1040[2U])));
                __Vtemp1048[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp1027[3U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp1031[2U] 
                                            >> 0x1fU) 
                                           | (__Vtemp1031[3U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                  << 1U))
                                            : __Vtemp1040[3U])));
                __Vtemp1048[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp1027[4U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp1031[3U] 
                                            >> 0x1fU) 
                                           | (6U & 
                                              (__Vtemp1031[4U] 
                                               << 1U)))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                  << 1U))
                                            : __Vtemp1040[4U])));
            }
            tracep->chgWData(oldp+498,(__Vtemp1048),131);
            tracep->chgWData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data),65);
            tracep->chgQData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgCData(oldp+570,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                  >> 0xfU))]),64);
            tracep->chgCData(oldp+573,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                  >> 0x14U))]),64);
            tracep->chgCData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgQData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgBit(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
            tracep->chgCData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+582,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+583,((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                       & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))) 
                                      & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0xfU))) 
                                         | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr) 
                                            == (0x1fU 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                   >> 0x14U)))))));
            tracep->chgBit(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush));
            tracep->chgCData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
            tracep->chgQData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
            tracep->chgQData(oldp+592,(((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                         ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))
                                         : ((0x11U 
                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                             ? (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))
                                             : ((0xaU 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))))
                                                 : 
                                                ((9U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                                                  >> 7U)))
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))))
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data
                                                     : 0ULL)))))))),64);
            tracep->chgQData(oldp+594,(((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                         ? (QData)((IData)(
                                                           (0x7ffU 
                                                            & ((IData)(0xfU) 
                                                               << 
                                                               (7U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                         : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                             ? (QData)((IData)(
                                                               (0x1ffU 
                                                                & ((IData)(3U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                                 ? (QData)((IData)(
                                                                   (0x7fffU 
                                                                    & ((IData)(0xffU) 
                                                                       << 
                                                                       (7U 
                                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        << 
                                                                        (7U 
                                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                                  : 0ULL))))),64);
            tracep->chgBit(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgQData(oldp+597,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data)),64);
            VL_EXTEND_WQ(127,64, __Vtemp1050, ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data
                                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data));
            VL_SHIFTL_WWI(127,127,6, __Vtemp1051, __Vtemp1050, 
                          (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result) 
                                    << 3U)));
            __Vtemp1052[0U] = __Vtemp1051[0U];
            __Vtemp1052[1U] = __Vtemp1051[1U];
            __Vtemp1052[2U] = __Vtemp1051[2U];
            __Vtemp1052[3U] = (0x7fffffffU & __Vtemp1051[3U]);
            tracep->chgWData(oldp+599,(__Vtemp1052),127);
            tracep->chgBit(oldp+603,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))));
            tracep->chgQData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr),64);
            tracep->chgBit(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq));
            tracep->chgBit(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq));
            tracep->chgBit(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_irq));
            tracep->chgBit(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except));
            tracep->chgBit(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq));
            tracep->chgBit(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq));
            tracep->chgBit(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+632,(((0xb02U == 
                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                          >> 0x14U))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret
                                         : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
            tracep->chgQData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+639,((0U == (0xffffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
            tracep->chgBit(oldp+640,((0x4000U == (0xffffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
            tracep->chgQData(oldp+641,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                         ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                         : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+643,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+645,((((QData)((IData)(
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
                                         << 0x20U) 
                                        | (QData)((IData)(
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
            tracep->chgBit(oldp+647,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
            tracep->chgQData(oldp+648,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+650,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+651,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+652,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+653,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                           ? 0xffU : 0U) 
                                         << 0x18U) 
                                        | ((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
                                                  : 0U))))),32);
            tracep->chgIData(oldp+654,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                           ? 0xffU : 0U) 
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
                                                  : 0U))))),32);
        }
        tracep->chgBit(oldp+655,(vlSelf->clock));
        tracep->chgBit(oldp+656,(vlSelf->reset));
        tracep->chgQData(oldp+657,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+659,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+661,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+663,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+665,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+667,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+669,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+671,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+673,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+675,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+677,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+679,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+681,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+683,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+685,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+687,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+689,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+691,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+693,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+695,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+697,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+699,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+701,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+703,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+705,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+707,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+709,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+711,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+713,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+715,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+717,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+719,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+721,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+723,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+724,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+725,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+727,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+728,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+730,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+732,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+734,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+736,(vlSelf->io_difftest_peripheral));
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
