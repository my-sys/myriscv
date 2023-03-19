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
            tracep->chgCData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp981, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+65,(__Vtemp981),128);
            tracep->chgWData(oldp+69,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q),128);
            tracep->chgBit(oldp+73,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
            tracep->chgWData(oldp+74,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q),128);
            tracep->chgWData(oldp+78,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q),128);
            tracep->chgBit(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_irq));
            tracep->chgBit(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_peripheral));
            tracep->chgBit(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit));
            tracep->chgQData(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc),64);
            tracep->chgIData(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst),32);
            tracep->chgQData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [6U]),64);
            tracep->chgQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [7U]),64);
            tracep->chgQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [8U]),64);
            tracep->chgQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [9U]),64);
            tracep->chgQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0xaU]),64);
            tracep->chgQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x11U]),64);
            tracep->chgQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter),64);
            tracep->chgQData(oldp+152,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid));
            tracep->chgQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
            tracep->chgBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_fence_i));
            tracep->chgBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+176,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+184,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
            tracep->chgQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata),64);
            tracep->chgBit(oldp+197,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
            tracep->chgBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
            tracep->chgQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+201,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
            tracep->chgBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_stall));
            tracep->chgQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc),64);
            tracep->chgBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush));
            tracep->chgQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
            tracep->chgIData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
            tracep->chgCData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
            tracep->chgCData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
            tracep->chgCData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc),64);
            tracep->chgIData(oldp+227,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
                                         ? 0U : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst)),32);
            tracep->chgCData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
            tracep->chgSData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgQData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
            tracep->chgCData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
            tracep->chgBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
            tracep->chgSData(oldp+236,((0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))),12);
            tracep->chgQData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en));
            tracep->chgBit(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
            tracep->chgCData(oldp+241,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+242,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___reg_rs_data_T_6)),64);
            tracep->chgBit(oldp+244,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))));
            tracep->chgCData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
            tracep->chgQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgIData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
            tracep->chgCData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result),64);
            tracep->chgBit(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
            tracep->chgBit(oldp+255,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 1U)))));
            tracep->chgSData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result),64);
            tracep->chgBit(oldp+259,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en))));
            tracep->chgCData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception),5);
            tracep->chgBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_exception));
            tracep->chgBit(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret));
            tracep->chgQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_next_pc),64);
            tracep->chgBit(oldp+265,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))));
            tracep->chgBit(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
            tracep->chgQData(oldp+267,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
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
            tracep->chgBit(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
            tracep->chgSData(oldp+270,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec),64);
            tracep->chgQData(oldp+273,((((0x341U == 
                                          (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc)),64);
            tracep->chgQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgBit(oldp+279,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgBit(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq));
            tracep->chgBit(oldp+282,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq))));
            tracep->chgCData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception),5);
            tracep->chgBit(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception));
            tracep->chgQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
            tracep->chgQData(oldp+287,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
            tracep->chgQData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc),64);
            tracep->chgQData(oldp+292,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+294,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+295,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
            tracep->chgCData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
            tracep->chgBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
            tracep->chgBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+306,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+308,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+313,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+315,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0));
            tracep->chgBit(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
            tracep->chgBit(oldp+319,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+320,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))));
            tracep->chgQData(oldp+321,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+323,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+327,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
            tracep->chgQData(oldp+329,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+331,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+332,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))),4);
            tracep->chgCData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+345,((((QData)((IData)(
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
            tracep->chgWData(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+360,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+362,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+369,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+371,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+375,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+376,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+377,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+378,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+379,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+381,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+385,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+394,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+399,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+400,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
            tracep->chgQData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
            tracep->chgIData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
            tracep->chgBit(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
            tracep->chgBit(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
            tracep->chgQData(oldp+411,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data),64);
            tracep->chgQData(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc),64);
            tracep->chgBit(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid));
            tracep->chgBit(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_valid));
            tracep->chgQData(oldp+422,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr))
                                         ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6)),64);
            tracep->chgBit(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid));
            tracep->chgBit(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en));
            tracep->chgQData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            tracep->chgQData(oldp+428,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid)
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
            tracep->chgBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
            tracep->chgBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid));
            tracep->chgBit(oldp+432,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid))));
            tracep->chgBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_valid));
            tracep->chgQData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data),64);
            tracep->chgQData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data),64);
            tracep->chgQData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result),64);
            tracep->chgBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu_io_valid));
            tracep->chgBit(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_fence_i));
            tracep->chgBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret));
            tracep->chgBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception));
            tracep->chgCData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),5);
            tracep->chgBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall));
            tracep->chgQData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgCData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
            tracep->chgCData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),5);
            tracep->chgQData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en));
            tracep->chgQData(oldp+457,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))
                                         ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6)),64);
            tracep->chgBit(oldp+459,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
            tracep->chgBit(oldp+460,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                         >> 1U))));
            tracep->chgQData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp983[0U] = 1U;
            __Vtemp983[1U] = 0U;
            __Vtemp983[2U] = 0U;
            VL_ADD_W(3, __Vtemp984, __Vtemp983, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            __Vtemp985[0U] = __Vtemp984[0U];
            __Vtemp985[1U] = __Vtemp984[1U];
            __Vtemp985[2U] = (1U & __Vtemp984[2U]);
            tracep->chgWData(oldp+463,(__Vtemp985),65);
            __Vtemp987[0U] = 1U;
            __Vtemp987[1U] = 0U;
            __Vtemp987[2U] = 0U;
            VL_ADD_W(3, __Vtemp988, __Vtemp987, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            tracep->chgBit(oldp+466,((1U & (~ (1U & 
                                               __Vtemp988[2U])))));
            tracep->chgBit(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgQData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp),64);
            tracep->chgWData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),65);
            tracep->chgBit(oldp+477,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgQData(oldp+478,((((QData)((IData)(
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
            tracep->chgWData(oldp+480,(__Vtemp990),65);
            tracep->chgWData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgBit(oldp+486,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+487,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgQData(oldp+489,(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+491,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid) 
                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                          >> 4U)) & 
                                      (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall)))));
            tracep->chgBit(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
            tracep->chgBit(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
            tracep->chgQData(oldp+494,(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
            tracep->chgBit(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
            tracep->chgBit(oldp+497,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid) 
                                       & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 4U))) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall)))));
            tracep->chgBit(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
            tracep->chgBit(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid));
            tracep->chgWData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
            tracep->chgWData(oldp+521,(__Vtemp995),65);
            tracep->chgCData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
            tracep->chgWData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
            tracep->chgBit(oldp+532,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                             | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
            __Vtemp998[0U] = 1U;
            __Vtemp998[1U] = 0U;
            __Vtemp998[2U] = 0U;
            __Vtemp999[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp999[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp999[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp1000, __Vtemp998, __Vtemp999);
            tracep->chgBit(oldp+533,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ __Vtemp1000[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 __Vtemp1000[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ (1U 
                                                   & __Vtemp1000[2U]))))));
            tracep->chgBit(oldp+534,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
            tracep->chgBit(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
            tracep->chgQData(oldp+536,(((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgQData(oldp+538,(((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__valid));
            VL_EXTEND_WQ(130,64, __Vtemp1009, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                __Vtemp1013[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
                __Vtemp1013[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp1013[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp1013[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp1013[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x1fU)))
                                    ? 3U : 0U);
            } else {
                __Vtemp1013[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)
                                    : __Vtemp1009[0U]);
                __Vtemp1013[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
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
            tracep->chgWData(oldp+541,(__Vtemp1013),130);
            tracep->chgWData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
            tracep->chgWData(oldp+549,(__Vtemp1015),67);
            tracep->chgCData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
            tracep->chgCData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),4);
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
            tracep->chgWData(oldp+568,(__Vtemp1048),131);
            tracep->chgWData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data),65);
            tracep->chgQData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgQData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0U]),64);
            tracep->chgCData(oldp+642,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                  >> 0xfU))]),64);
            tracep->chgCData(oldp+645,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                  >> 0x14U))]),64);
            tracep->chgCData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgQData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgBit(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
            tracep->chgCData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+655,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+656,((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
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
            tracep->chgBit(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush));
            tracep->chgCData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
            tracep->chgQData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
            tracep->chgQData(oldp+665,(((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
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
            tracep->chgQData(oldp+667,(((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
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
            tracep->chgBit(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgQData(oldp+670,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
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
            tracep->chgWData(oldp+672,(__Vtemp1052),127);
            tracep->chgBit(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__test_is_peripheral));
            tracep->chgBit(oldp+677,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))));
            tracep->chgQData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr),64);
            tracep->chgBit(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq));
            tracep->chgBit(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq));
            tracep->chgBit(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_irq));
            tracep->chgBit(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except));
            tracep->chgBit(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq));
            tracep->chgBit(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq));
            tracep->chgIData(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
            tracep->chgBit(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+707,(((0xb02U == 
                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                          >> 0x14U))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret
                                         : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
            tracep->chgQData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+714,((0U == (0xffffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
            tracep->chgBit(oldp+715,((0x4000U == (0xffffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
            tracep->chgQData(oldp+716,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                         ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                         : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+718,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+720,((((QData)((IData)(
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
            tracep->chgBit(oldp+722,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
            tracep->chgQData(oldp+723,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+725,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+726,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+727,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+728,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
            tracep->chgIData(oldp+729,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->chgBit(oldp+730,(vlSelf->clock));
        tracep->chgBit(oldp+731,(vlSelf->reset));
        tracep->chgQData(oldp+732,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+734,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+736,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+738,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+740,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+742,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+744,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+746,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+748,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+750,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+752,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+754,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+756,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+758,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+760,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+762,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+764,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+766,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+768,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+770,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+772,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+774,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+776,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+778,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+780,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+782,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+784,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+786,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+788,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+790,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+792,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+794,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+796,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+798,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+799,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+800,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+802,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+803,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+805,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+807,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+809,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+811,(vlSelf->io_difftest_peripheral));
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
