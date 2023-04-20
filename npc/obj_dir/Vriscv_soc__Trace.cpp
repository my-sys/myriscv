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
    VlWide<4>/*127:0*/ __Vtemp768;
    VlWide<4>/*127:0*/ __Vtemp769;
    VlWide<4>/*127:0*/ __Vtemp770;
    VlWide<4>/*127:0*/ __Vtemp772;
    VlWide<4>/*127:0*/ __Vtemp773;
    VlWide<4>/*127:0*/ __Vtemp776;
    VlWide<4>/*127:0*/ __Vtemp777;
    VlWide<4>/*127:0*/ __Vtemp778;
    VlWide<4>/*127:0*/ __Vtemp780;
    VlWide<4>/*127:0*/ __Vtemp781;
    VlWide<3>/*95:0*/ __Vtemp783;
    VlWide<4>/*127:0*/ __Vtemp785;
    VlWide<4>/*127:0*/ __Vtemp786;
    VlWide<4>/*127:0*/ __Vtemp787;
    VlWide<3>/*95:0*/ __Vtemp789;
    VlWide<3>/*95:0*/ __Vtemp790;
    VlWide<3>/*95:0*/ __Vtemp791;
    VlWide<3>/*95:0*/ __Vtemp792;
    VlWide<3>/*95:0*/ __Vtemp795;
    VlWide<3>/*95:0*/ __Vtemp796;
    VlWide<3>/*95:0*/ __Vtemp797;
    VlWide<5>/*159:0*/ __Vtemp806;
    VlWide<5>/*159:0*/ __Vtemp810;
    VlWide<3>/*95:0*/ __Vtemp812;
    VlWide<5>/*159:0*/ __Vtemp814;
    VlWide<5>/*159:0*/ __Vtemp815;
    VlWide<5>/*159:0*/ __Vtemp816;
    VlWide<5>/*159:0*/ __Vtemp817;
    VlWide<5>/*159:0*/ __Vtemp818;
    VlWide<5>/*159:0*/ __Vtemp820;
    VlWide<5>/*159:0*/ __Vtemp821;
    VlWide<5>/*159:0*/ __Vtemp822;
    VlWide<5>/*159:0*/ __Vtemp823;
    VlWide<5>/*159:0*/ __Vtemp824;
    VlWide<5>/*159:0*/ __Vtemp826;
    VlWide<5>/*159:0*/ __Vtemp827;
    VlWide<5>/*159:0*/ __Vtemp828;
    VlWide<5>/*159:0*/ __Vtemp836;
    VlWide<5>/*159:0*/ __Vtemp837;
    VlWide<5>/*159:0*/ __Vtemp845;
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
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr
                                           : 0ULL))),64);
            tracep->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
            tracep->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
            tracep->chgQData(oldp+6,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata
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
            VL_EXTEND_WQ(128,54, __Vtemp768, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
            tracep->chgWData(oldp+31,(__Vtemp768),128);
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
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                                            >> 4U))))),6);
            tracep->chgBit(oldp+51,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
            __Vtemp769[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp769[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp769[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp769[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+52,(__Vtemp769),128);
            tracep->chgWData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+60,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q),128);
            tracep->chgCData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp770, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+65,(__Vtemp770),128);
            tracep->chgWData(oldp+69,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q),128);
            tracep->chgBit(oldp+73,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
            tracep->chgWData(oldp+74,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q),128);
            tracep->chgCData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr),6);
            tracep->chgWData(oldp+79,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q),128);
            tracep->chgBit(oldp+83,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
            tracep->chgBit(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
            tracep->chgBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
            tracep->chgQData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
            tracep->chgIData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
            tracep->chgQData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [6U]),64);
            tracep->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [7U]),64);
            tracep->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [8U]),64);
            tracep->chgQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [9U]),64);
            tracep->chgQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xaU]),64);
            tracep->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x11U]),64);
            tracep->chgQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
            tracep->chgQData(oldp+153,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+155,((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgQData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgQData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
            tracep->chgBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
            tracep->chgBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+177,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+185,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+191,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgQData(oldp+195,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                  >> 0x1fU))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                                         : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
            tracep->chgBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready));
            tracep->chgBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
            tracep->chgQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+201,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
            tracep->chgBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
            tracep->chgBit(oldp+210,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
            tracep->chgIData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data),32);
            tracep->chgQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                                       [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
            tracep->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
            tracep->chgCData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
            tracep->chgCData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgIData(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
            tracep->chgQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
            tracep->chgBit(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
            tracep->chgSData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+232,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgQData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgQData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+240,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
            tracep->chgBit(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
            tracep->chgCData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
            tracep->chgQData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
            tracep->chgBit(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
            tracep->chgSData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
            tracep->chgBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
            tracep->chgBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
            tracep->chgCData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
            tracep->chgQData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
            tracep->chgQData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
            tracep->chgBit(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
            tracep->chgIData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
            tracep->chgBit(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
            tracep->chgCData(oldp+261,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+262,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0xfU))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                            [(0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0xfU))]))),64);
            tracep->chgCData(oldp+264,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+265,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                            [(0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))]))),64);
            tracep->chgSData(oldp+267,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+268,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                           >> 0x14U) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : ((0xb02U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
            tracep->chgQData(oldp+270,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+272,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+273,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
            tracep->chgCData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
            tracep->chgBit(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
            tracep->chgBit(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+284,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+286,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+291,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+293,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0));
            tracep->chgBit(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
            tracep->chgBit(oldp+297,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+298,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))));
            tracep->chgQData(oldp+299,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+301,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+305,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
            tracep->chgQData(oldp+307,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+309,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+310,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr))),4);
            tracep->chgCData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+323,((((QData)((IData)(
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
            tracep->chgWData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+338,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+340,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+347,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+349,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+353,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+354,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+355,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+356,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+357,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+359,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+363,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+372,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+377,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_valid));
            tracep->chgIData(oldp+380,(((1U & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (((0ULL 
                                                      != 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 0x1fU))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
                                                    >> 0x20U))
                                         : (IData)(
                                                   ((0ULL 
                                                     != 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 0x1fU))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                                                     : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))),32);
            tracep->chgBit(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgQData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
            tracep->chgQData(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
            tracep->chgQData(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
            tracep->chgQData(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
            tracep->chgCData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
            tracep->chgCData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
            tracep->chgBit(oldp+394,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_valid))));
            tracep->chgIData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
            tracep->chgIData(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
            tracep->chgIData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
            tracep->chgIData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
            tracep->chgBit(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
            tracep->chgBit(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
            tracep->chgBit(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
            tracep->chgBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
            tracep->chgBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
            tracep->chgQData(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
            tracep->chgQData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            VL_EXTEND_WQ(127,64, __Vtemp772, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
            VL_SHIFTL_WWI(127,127,6, __Vtemp773, __Vtemp772, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            tracep->chgQData(oldp+408,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                         ? (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)
                                         : ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                             ? VL_SHIFTRS_QQI(64,64,6, 
                                                              ((3U 
                                                                == 
                                                                (3U 
                                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                    >> 5U)))
                                                                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                             : ((5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 
                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp773[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp773[0U])))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U)))
                                                      ? (QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U)))
                                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U]))))))))))))),64);
            tracep->chgBit(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
            tracep->chgQData(oldp+411,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
            tracep->chgQData(oldp+414,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
            tracep->chgQData(oldp+416,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
            tracep->chgQData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
            tracep->chgBit(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
            tracep->chgQData(oldp+423,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                                         ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                             ? ((1U 
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
                                             : ((1U 
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
                                         : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                             ? (((QData)((IData)(
                                                                 ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                             : ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))),64);
            tracep->chgBit(oldp+425,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
            tracep->chgBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
            tracep->chgBit(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
            tracep->chgQData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
            tracep->chgBit(oldp+430,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                      & ((0U != (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
            tracep->chgQData(oldp+431,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                         ? ((0xffffffffffffff77ULL 
                                             & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                            | (QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                           >> 7U)))
                                                                ? 0x88U
                                                                : 0x80U))))
                                         : ((7U == 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                             : ((3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                                 : 
                                                ((5U 
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
            tracep->chgSData(oldp+433,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                         ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
            tracep->chgBit(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
            tracep->chgCData(oldp+435,(((0U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? 0xbU : (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 3U
                                                    : 0U))),6);
            tracep->chgBit(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
            tracep->chgBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
            tracep->chgCData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
            tracep->chgBit(oldp+439,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
            tracep->chgBit(oldp+440,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+441,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+442,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 3U))));
            tracep->chgCData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
            tracep->chgQData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
            tracep->chgBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
            tracep->chgBit(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
            tracep->chgBit(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
            tracep->chgBit(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
            tracep->chgBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
            tracep->chgBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
            tracep->chgBit(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
            tracep->chgBit(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
            tracep->chgBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
            tracep->chgBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
            tracep->chgBit(oldp+457,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
            tracep->chgQData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
            tracep->chgQData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
            tracep->chgQData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
            tracep->chgBit(oldp+464,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 1U)))));
            tracep->chgQData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            tracep->chgBit(oldp+467,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgBit(oldp+468,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgQData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
            tracep->chgQData(oldp+471,(((1U == (3U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                         ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
            tracep->chgWData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
            tracep->chgBit(oldp+476,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
            tracep->chgBit(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgCData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
            VL_EXTEND_WQ(127,64, __Vtemp776, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
            VL_SHIFTL_WWI(127,127,6, __Vtemp777, __Vtemp776, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            __Vtemp778[0U] = __Vtemp777[0U];
            __Vtemp778[1U] = __Vtemp777[1U];
            __Vtemp778[2U] = __Vtemp777[2U];
            __Vtemp778[3U] = (0x7fffffffU & __Vtemp777[3U]);
            tracep->chgWData(oldp+479,(__Vtemp778),127);
            tracep->chgQData(oldp+483,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                        >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+485,(VL_SHIFTRS_QQI(64,64,6, 
                                                      ((3U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                            >> 5U)))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgCData(oldp+487,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))),3);
            VL_EXTEND_WQ(127,64, __Vtemp780, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
            VL_SHIFTL_WWI(127,127,6, __Vtemp781, __Vtemp780, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            tracep->chgQData(oldp+488,(((5U == (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? VL_SHIFTRS_QQI(64,64,6, 
                                                          ((3U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                >> 5U)))
                                                            ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                                            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                         : ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                             ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  __Vtemp781[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   __Vtemp781[0U])))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? (QData)((IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U)))
                                                      ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U])))))))))))),64);
            tracep->chgBit(oldp+490,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
            tracep->chgBit(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
            __Vtemp783[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            __Vtemp783[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                      >> 0x20U));
            __Vtemp783[2U] = 1U;
            tracep->chgWData(oldp+492,(__Vtemp783),65);
            tracep->chgWData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgBit(oldp+498,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+499,((((QData)((IData)(
                                                         ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
            tracep->chgQData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
            tracep->chgQData(oldp+503,(((((1U & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                         >> 7U)))
                                           ? 0xffffffffffffffULL
                                           : 0ULL) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))),64);
            tracep->chgQData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
            tracep->chgBit(oldp+507,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U))));
            tracep->chgQData(oldp+508,(((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                         ? (QData)((IData)(
                                                           (0x7ffU 
                                                            & ((IData)(0xfU) 
                                                               << 
                                                               (7U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                                         : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                             ? (QData)((IData)(
                                                               (0x1ffU 
                                                                & ((IData)(3U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                                             : ((0xeU 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                 ? (QData)((IData)(
                                                                   (0x7fffU 
                                                                    & ((IData)(0xffU) 
                                                                       << 
                                                                       (7U 
                                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        << 
                                                                        (7U 
                                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                                                  : 0ULL))))),64);
            tracep->chgBit(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
            VL_EXTEND_WQ(127,64, __Vtemp785, (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                               : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data));
            VL_SHIFTL_WWI(127,127,6, __Vtemp786, __Vtemp785, 
                          (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                                    << 3U)));
            __Vtemp787[0U] = __Vtemp786[0U];
            __Vtemp787[1U] = __Vtemp786[1U];
            __Vtemp787[2U] = __Vtemp786[2U];
            __Vtemp787[3U] = (0x7fffffffU & __Vtemp786[3U]);
            tracep->chgWData(oldp+511,(__Vtemp787),127);
            tracep->chgBit(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgQData(oldp+516,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
            tracep->chgBit(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgQData(oldp+521,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                         ? (((QData)((IData)(
                                                             ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                               >> 0x1fU)
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                         : ((0U == 
                                             (3U & 
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
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))))),64);
            tracep->chgBit(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
            tracep->chgBit(oldp+525,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))));
            tracep->chgWData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
            __Vtemp789[0U] = 1U;
            __Vtemp789[1U] = 0U;
            __Vtemp789[2U] = 0U;
            __Vtemp790[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp790[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp790[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp791, __Vtemp789, __Vtemp790);
            __Vtemp792[0U] = __Vtemp791[0U];
            __Vtemp792[1U] = __Vtemp791[1U];
            __Vtemp792[2U] = (1U & __Vtemp791[2U]);
            tracep->chgWData(oldp+547,(__Vtemp792),65);
            tracep->chgCData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
            tracep->chgWData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
            tracep->chgBit(oldp+558,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                             | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
            __Vtemp795[0U] = 1U;
            __Vtemp795[1U] = 0U;
            __Vtemp795[2U] = 0U;
            __Vtemp796[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp796[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp796[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp797, __Vtemp795, __Vtemp796);
            tracep->chgBit(oldp+559,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ __Vtemp797[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 __Vtemp797[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ (1U 
                                                   & __Vtemp797[2U]))))));
            tracep->chgBit(oldp+560,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
            tracep->chgBit(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
            tracep->chgBit(oldp+562,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
            tracep->chgBit(oldp+563,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                            >> 3U))));
            tracep->chgQData(oldp+564,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgQData(oldp+566,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+568,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))));
            tracep->chgBit(oldp+569,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U))));
            VL_EXTEND_WQ(130,64, __Vtemp806, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp810[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
                __Vtemp810[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x1fU)))
                                   ? 0xffffffffU : 0U);
                __Vtemp810[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x1fU)))
                                   ? 0xffffffffU : 0U);
                __Vtemp810[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x1fU)))
                                   ? 0xffffffffU : 0U);
                __Vtemp810[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x1fU)))
                                   ? 3U : 0U);
            } else {
                __Vtemp810[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                                   : __Vtemp806[0U]);
                __Vtemp810[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x20U))
                                   : __Vtemp806[1U]);
                __Vtemp810[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? 0xffffffffU : 
                                  __Vtemp806[2U]);
                __Vtemp810[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? 0xffffffffU : 
                                  __Vtemp806[3U]);
                __Vtemp810[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? 3U : __Vtemp806[4U]);
            }
            tracep->chgWData(oldp+570,(__Vtemp810),130);
            tracep->chgWData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            __Vtemp812[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                              << 1U);
            __Vtemp812[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                               >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                            << 1U));
            __Vtemp812[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                     << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                   << 1U)));
            tracep->chgWData(oldp+578,(__Vtemp812),67);
            tracep->chgCData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
            __Vtemp814[0U] = 1U;
            __Vtemp814[1U] = 0U;
            __Vtemp814[2U] = 0U;
            __Vtemp814[3U] = 0U;
            __Vtemp814[4U] = 0U;
            __Vtemp815[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp815[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp815[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp815[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp815[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp816, __Vtemp814, __Vtemp815);
            __Vtemp817[0U] = __Vtemp816[0U];
            __Vtemp817[1U] = __Vtemp816[1U];
            __Vtemp817[2U] = __Vtemp816[2U];
            __Vtemp817[3U] = __Vtemp816[3U];
            __Vtemp817[4U] = (3U & __Vtemp816[4U]);
            VL_EXTEND_WW(131,130, __Vtemp818, __Vtemp817);
            __Vtemp820[0U] = 1U;
            __Vtemp820[1U] = 0U;
            __Vtemp820[2U] = 0U;
            __Vtemp820[3U] = 0U;
            __Vtemp820[4U] = 0U;
            __Vtemp821[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp821[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp821[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp821[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp821[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp822, __Vtemp820, __Vtemp821);
            __Vtemp823[0U] = __Vtemp822[0U];
            __Vtemp823[1U] = __Vtemp822[1U];
            __Vtemp823[2U] = __Vtemp822[2U];
            __Vtemp823[3U] = __Vtemp822[3U];
            __Vtemp823[4U] = (3U & __Vtemp822[4U]);
            VL_EXTEND_WW(131,130, __Vtemp824, __Vtemp823);
            __Vtemp826[0U] = 1U;
            __Vtemp826[1U] = 0U;
            __Vtemp826[2U] = 0U;
            __Vtemp826[3U] = 0U;
            __Vtemp826[4U] = 0U;
            __Vtemp827[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp827[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp827[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp827[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp827[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp828, __Vtemp826, __Vtemp827);
            if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp836[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
                __Vtemp836[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
                __Vtemp836[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
                __Vtemp836[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
                __Vtemp836[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
            } else {
                __Vtemp836[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                   : 0U);
                __Vtemp836[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                   : 0U);
                __Vtemp836[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                   : 0U);
                __Vtemp836[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                   : 0U);
                __Vtemp836[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                   : 0U);
            }
            VL_EXTEND_WW(131,130, __Vtemp837, __Vtemp836);
            if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp845[0U] = __Vtemp818[0U];
                __Vtemp845[1U] = __Vtemp818[1U];
                __Vtemp845[2U] = __Vtemp818[2U];
                __Vtemp845[3U] = __Vtemp818[3U];
                __Vtemp845[4U] = __Vtemp818[4U];
            } else {
                __Vtemp845[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp824[0U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? (__Vtemp828[0U] 
                                          << 1U) : 
                                      ((3U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                           << 1U) : 
                                       __Vtemp837[0U])));
                __Vtemp845[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp824[1U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? ((__Vtemp828[0U] 
                                           >> 0x1fU) 
                                          | (__Vtemp828[1U] 
                                             << 1U))
                                       : ((3U == (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                 << 1U))
                                           : __Vtemp837[1U])));
                __Vtemp845[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp824[2U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? ((__Vtemp828[1U] 
                                           >> 0x1fU) 
                                          | (__Vtemp828[2U] 
                                             << 1U))
                                       : ((3U == (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                 << 1U))
                                           : __Vtemp837[2U])));
                __Vtemp845[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp824[3U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? ((__Vtemp828[2U] 
                                           >> 0x1fU) 
                                          | (__Vtemp828[3U] 
                                             << 1U))
                                       : ((3U == (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                 << 1U))
                                           : __Vtemp837[3U])));
                __Vtemp845[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp824[4U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? ((__Vtemp828[3U] 
                                           >> 0x1fU) 
                                          | (6U & (
                                                   __Vtemp828[4U] 
                                                   << 1U)))
                                       : ((3U == (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                               >> 0x1fU) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                 << 1U))
                                           : __Vtemp837[4U])));
            }
            tracep->chgWData(oldp+596,(__Vtemp845),131);
            tracep->chgCData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
            tracep->chgBit(oldp+602,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+603,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
            tracep->chgBit(oldp+604,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 4U))));
            tracep->chgQData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
            tracep->chgQData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
            tracep->chgQData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
            tracep->chgQData(oldp+611,(((7U == (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                         : ((3U == 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
                                                    : 0ULL))))))),64);
            tracep->chgBit(oldp+613,((0x10U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+614,((0x18U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+615,((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgBit(oldp+616,((8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgBit(oldp+617,(((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))) 
                                      | (8U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
            tracep->chgCData(oldp+618,(((0U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? 0xbU : (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 3U
                                                    : 0U))),4);
            tracep->chgBit(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
            tracep->chgQData(oldp+620,(((0xffffffffffffff77ULL 
                                         & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                       >> 7U)))
                                                            ? 0x88U
                                                            : 0x80U))))),64);
            tracep->chgCData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgBit(oldp+623,(((0x33U == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x13U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x3bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     | ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        | ((0x63U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           & ((0x5063U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              & ((0x7063U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                 & ((0x4063U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                    & ((0x6063U 
                                                                        != 
                                                                        (0x707fU 
                                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_434)))))))))))))));
            tracep->chgCData(oldp+624,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+625,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
            tracep->chgQData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[0]),64);
            tracep->chgQData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[1]),64);
            tracep->chgQData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[2]),64);
            tracep->chgQData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[3]),64);
            tracep->chgQData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[4]),64);
            tracep->chgQData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[5]),64);
            tracep->chgQData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[6]),64);
            tracep->chgQData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[7]),64);
            tracep->chgQData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[8]),64);
            tracep->chgQData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[9]),64);
            tracep->chgQData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[10]),64);
            tracep->chgQData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[11]),64);
            tracep->chgQData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[12]),64);
            tracep->chgQData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[13]),64);
            tracep->chgQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[14]),64);
            tracep->chgQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[15]),64);
            tracep->chgQData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[16]),64);
            tracep->chgQData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[17]),64);
            tracep->chgQData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[18]),64);
            tracep->chgQData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[19]),64);
            tracep->chgQData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[20]),64);
            tracep->chgQData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[21]),64);
            tracep->chgQData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[22]),64);
            tracep->chgQData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[23]),64);
            tracep->chgQData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[24]),64);
            tracep->chgQData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[25]),64);
            tracep->chgQData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[26]),64);
            tracep->chgQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[27]),64);
            tracep->chgQData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[28]),64);
            tracep->chgQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[29]),64);
            tracep->chgQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[30]),64);
            tracep->chgQData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[31]),64);
            tracep->chgQData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                  >> 0x14U))]),64);
            tracep->chgQData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0U]),64);
            tracep->chgBit(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+715,(((0xb02U == 
                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                          >> 0x14U))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
            tracep->chgQData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+722,((0U == (0xffffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))));
            tracep->chgBit(oldp+723,((0x4000U == (0xffffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))));
            tracep->chgQData(oldp+724,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                         ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                         : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+726,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+728,((((QData)((IData)(
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
            tracep->chgBit(oldp+730,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
            tracep->chgQData(oldp+731,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+733,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+734,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+735,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+736,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
            tracep->chgIData(oldp+737,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->chgBit(oldp+738,(vlSelf->clock));
        tracep->chgBit(oldp+739,(vlSelf->reset));
        tracep->chgQData(oldp+740,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+742,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+744,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+746,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+748,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+750,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+752,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+754,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+756,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+758,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+760,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+762,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+764,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+766,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+768,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+770,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+772,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+774,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+776,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+778,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+780,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+782,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+784,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+786,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+788,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+790,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+792,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+794,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+796,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+798,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+800,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+802,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+804,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+806,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+807,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+808,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+810,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+811,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+813,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+815,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+817,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+819,(vlSelf->io_difftest_peripheral));
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
