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
    VlWide<4>/*127:0*/ __Vtemp769;
    VlWide<4>/*127:0*/ __Vtemp770;
    VlWide<4>/*127:0*/ __Vtemp771;
    VlWide<4>/*127:0*/ __Vtemp772;
    VlWide<4>/*127:0*/ __Vtemp773;
    VlWide<4>/*127:0*/ __Vtemp774;
    VlWide<4>/*127:0*/ __Vtemp775;
    VlWide<4>/*127:0*/ __Vtemp776;
    VlWide<4>/*127:0*/ __Vtemp777;
    VlWide<4>/*127:0*/ __Vtemp778;
    VlWide<4>/*127:0*/ __Vtemp779;
    VlWide<4>/*127:0*/ __Vtemp781;
    VlWide<4>/*127:0*/ __Vtemp782;
    VlWide<4>/*127:0*/ __Vtemp785;
    VlWide<4>/*127:0*/ __Vtemp786;
    VlWide<4>/*127:0*/ __Vtemp787;
    VlWide<3>/*95:0*/ __Vtemp788;
    VlWide<4>/*127:0*/ __Vtemp790;
    VlWide<4>/*127:0*/ __Vtemp791;
    VlWide<4>/*127:0*/ __Vtemp792;
    VlWide<3>/*95:0*/ __Vtemp794;
    VlWide<3>/*95:0*/ __Vtemp795;
    VlWide<3>/*95:0*/ __Vtemp796;
    VlWide<3>/*95:0*/ __Vtemp797;
    VlWide<3>/*95:0*/ __Vtemp800;
    VlWide<3>/*95:0*/ __Vtemp801;
    VlWide<3>/*95:0*/ __Vtemp802;
    VlWide<5>/*159:0*/ __Vtemp814;
    VlWide<5>/*159:0*/ __Vtemp818;
    VlWide<3>/*95:0*/ __Vtemp820;
    VlWide<5>/*159:0*/ __Vtemp822;
    VlWide<5>/*159:0*/ __Vtemp823;
    VlWide<5>/*159:0*/ __Vtemp824;
    VlWide<5>/*159:0*/ __Vtemp825;
    VlWide<5>/*159:0*/ __Vtemp826;
    VlWide<5>/*159:0*/ __Vtemp828;
    VlWide<5>/*159:0*/ __Vtemp829;
    VlWide<5>/*159:0*/ __Vtemp830;
    VlWide<5>/*159:0*/ __Vtemp831;
    VlWide<5>/*159:0*/ __Vtemp832;
    VlWide<5>/*159:0*/ __Vtemp834;
    VlWide<5>/*159:0*/ __Vtemp835;
    VlWide<5>/*159:0*/ __Vtemp836;
    VlWide<5>/*159:0*/ __Vtemp844;
    VlWide<5>/*159:0*/ __Vtemp845;
    VlWide<5>/*159:0*/ __Vtemp853;
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
            tracep->chgWData(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+26,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q),128);
            tracep->chgCData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp769, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            tracep->chgWData(oldp+31,(__Vtemp769),128);
            tracep->chgWData(oldp+35,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q),128);
            tracep->chgCData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
            tracep->chgBit(oldp+40,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
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
            __Vtemp770[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp770[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp770[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp770[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+52,(__Vtemp770),128);
            tracep->chgWData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+60,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q),128);
            tracep->chgCData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp771, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+65,(__Vtemp771),128);
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
            tracep->chgBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
            tracep->chgBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
            tracep->chgBit(oldp+157,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
            tracep->chgQData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgBit(oldp+160,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size))));
            tracep->chgBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
            tracep->chgQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
            tracep->chgQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
            tracep->chgBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
            tracep->chgQData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+182,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+190,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+200,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
            tracep->chgBit(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
            tracep->chgBit(oldp+202,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
            tracep->chgQData(oldp+203,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                  >> 0x1fU))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                         : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
            tracep->chgQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
            tracep->chgBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
            tracep->chgQData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+210,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
            tracep->chgBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
            tracep->chgBit(oldp+219,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
            tracep->chgIData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data),32);
            tracep->chgQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                                       [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
            tracep->chgBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
            tracep->chgCData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
            tracep->chgCData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgIData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
            tracep->chgQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
            tracep->chgBit(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
            tracep->chgSData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+241,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgQData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+249,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
            tracep->chgBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
            tracep->chgCData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
            tracep->chgQData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
            tracep->chgBit(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
            tracep->chgSData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
            tracep->chgBit(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
            tracep->chgBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
            tracep->chgCData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
            tracep->chgQData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
            tracep->chgQData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
            tracep->chgBit(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
            tracep->chgIData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
            tracep->chgBit(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
            tracep->chgCData(oldp+270,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+271,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
            tracep->chgCData(oldp+273,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+274,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
            tracep->chgSData(oldp+276,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+277,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                           >> 0x14U) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : ((0xb02U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
            tracep->chgBit(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
            tracep->chgQData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
            tracep->chgCData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
            tracep->chgBit(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
            tracep->chgBit(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
            tracep->chgBit(oldp+285,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgWData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
            tracep->chgWData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
            VL_EXTEND_WQ(128,54, __Vtemp772, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp773, (0x3fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
                __Vtemp774[0U] = __Vtemp772[0U];
                __Vtemp774[1U] = __Vtemp772[1U];
                __Vtemp774[2U] = __Vtemp772[2U];
                __Vtemp774[3U] = __Vtemp772[3U];
            } else {
                __Vtemp774[0U] = __Vtemp773[0U];
                __Vtemp774[1U] = __Vtemp773[1U];
                __Vtemp774[2U] = __Vtemp773[2U];
                __Vtemp774[3U] = __Vtemp773[3U];
            }
            tracep->chgWData(oldp+294,(__Vtemp774),128);
            VL_EXTEND_WQ(128,54, __Vtemp775, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp776, (0x3fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
                __Vtemp777[0U] = __Vtemp775[0U];
                __Vtemp777[1U] = __Vtemp775[1U];
                __Vtemp777[2U] = __Vtemp775[2U];
                __Vtemp777[3U] = __Vtemp775[3U];
            } else {
                __Vtemp777[0U] = __Vtemp776[0U];
                __Vtemp777[1U] = __Vtemp776[1U];
                __Vtemp777[2U] = __Vtemp776[2U];
                __Vtemp777[3U] = __Vtemp776[3U];
            }
            tracep->chgWData(oldp+298,(__Vtemp777),128);
            tracep->chgBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
            tracep->chgBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
            tracep->chgBit(oldp+304,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
            tracep->chgQData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
            tracep->chgQData(oldp+308,(((1U & (IData)(
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
            tracep->chgBit(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
            tracep->chgQData(oldp+311,(((1U & (IData)(
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
            tracep->chgBit(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
            tracep->chgCData(oldp+314,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgBit(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
            tracep->chgBit(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
            tracep->chgBit(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
            tracep->chgQData(oldp+323,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgBit(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
            tracep->chgBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
            tracep->chgCData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
            tracep->chgBit(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
            tracep->chgBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
            tracep->chgBit(oldp+330,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 0x1fU)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgBit(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
            tracep->chgBit(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
            tracep->chgQData(oldp+333,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+335,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+336,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
            VL_EXTEND_WQ(128,54, __Vtemp778, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp779, (0x3fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U])))));
            tracep->chgQData(oldp+337,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                              ? 
                                                             __Vtemp778[1U]
                                                              : 
                                                             __Vtemp779[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                               ? 
                                                              __Vtemp778[0U]
                                                               : 
                                                              __Vtemp779[0U])))))),54);
            VL_EXTEND_WQ(128,54, __Vtemp781, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp782, (0x3fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U])))));
            tracep->chgQData(oldp+339,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                              ? 
                                                             __Vtemp781[1U]
                                                              : 
                                                             __Vtemp782[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                               ? 
                                                              __Vtemp781[0U]
                                                               : 
                                                              __Vtemp782[0U])))))),54);
            tracep->chgBit(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
            tracep->chgBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
            tracep->chgQData(oldp+343,((0xfffffffffffffff0ULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
            tracep->chgQData(oldp+345,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+347,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
            tracep->chgQData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
            tracep->chgBit(oldp+350,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
            tracep->chgQData(oldp+351,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgQData(oldp+353,((~ (1ULL << 
                                           (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U)))))),64);
            tracep->chgBit(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state));
            tracep->chgQData(oldp+356,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+358,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+359,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr))),4);
            tracep->chgCData(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+372,((((QData)((IData)(
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
            tracep->chgWData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+387,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+389,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+396,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+398,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+402,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+403,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+404,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+405,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+406,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+408,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+412,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+421,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+426,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+427,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_valid));
            tracep->chgIData(oldp+430,(((1U & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (((0ULL 
                                                      != 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 0x1fU))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                                      : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
                                                    >> 0x20U))
                                         : (IData)(
                                                   ((0ULL 
                                                     != 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                      >> 0x1fU))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                                     : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))),32);
            tracep->chgBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgQData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
            tracep->chgQData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
            tracep->chgQData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
            tracep->chgQData(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
            tracep->chgCData(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
            tracep->chgCData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
            tracep->chgBit(oldp+444,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_valid))));
            tracep->chgIData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
            tracep->chgIData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
            tracep->chgIData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
            tracep->chgIData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
            tracep->chgBit(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
            tracep->chgBit(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
            tracep->chgBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
            tracep->chgBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
            tracep->chgCData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
            tracep->chgBit(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
            tracep->chgCData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size),3);
            tracep->chgBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
            tracep->chgQData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
            tracep->chgQData(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            tracep->chgQData(oldp+461,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                         ? (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                          >> 0x1fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)),64);
            tracep->chgBit(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
            tracep->chgQData(oldp+464,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
            tracep->chgQData(oldp+467,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
            tracep->chgQData(oldp+469,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
            tracep->chgQData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
            tracep->chgBit(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
            tracep->chgQData(oldp+476,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
            tracep->chgBit(oldp+478,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
            tracep->chgBit(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
            tracep->chgBit(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
            tracep->chgQData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
            tracep->chgBit(oldp+483,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                      & ((0U != (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
            tracep->chgQData(oldp+484,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
            tracep->chgSData(oldp+486,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                         ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
            tracep->chgBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
            tracep->chgCData(oldp+488,(((0U == (0x1fU 
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
            tracep->chgBit(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
            tracep->chgBit(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
            tracep->chgCData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
            tracep->chgBit(oldp+492,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
            tracep->chgBit(oldp+493,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+494,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+495,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 3U))));
            tracep->chgCData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgBit(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
            tracep->chgQData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
            tracep->chgBit(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
            tracep->chgBit(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
            tracep->chgBit(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
            tracep->chgBit(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
            tracep->chgBit(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
            tracep->chgBit(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
            tracep->chgBit(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
            tracep->chgBit(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
            tracep->chgBit(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
            tracep->chgBit(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
            tracep->chgBit(oldp+510,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
            tracep->chgQData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
            tracep->chgQData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
            tracep->chgQData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
            tracep->chgBit(oldp+517,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 1U)))));
            tracep->chgQData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            tracep->chgBit(oldp+520,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgBit(oldp+521,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgQData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
            tracep->chgQData(oldp+524,(((1U == (3U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                         ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
            tracep->chgWData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
            tracep->chgBit(oldp+529,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
            tracep->chgBit(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgCData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
            VL_EXTEND_WQ(127,64, __Vtemp785, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp786, __Vtemp785, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            __Vtemp787[0U] = __Vtemp786[0U];
            __Vtemp787[1U] = __Vtemp786[1U];
            __Vtemp787[2U] = __Vtemp786[2U];
            __Vtemp787[3U] = (0x7fffffffU & __Vtemp786[3U]);
            tracep->chgWData(oldp+532,(__Vtemp787),127);
            tracep->chgQData(oldp+536,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                          ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                        >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+538,(VL_SHIFTRS_QQI(64,64,6, 
                                                      ((1U 
                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+540,(((1U == (3U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                         ? VL_SHIFTRS_QQI(64,64,6, 
                                                          ((1U 
                                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                         : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                              ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                              : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                            >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
            tracep->chgCData(oldp+542,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))),3);
            tracep->chgQData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
            tracep->chgBit(oldp+545,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
            tracep->chgBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
            tracep->chgQData(oldp+547,(((2U == (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            __Vtemp788[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            __Vtemp788[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                      >> 0x20U));
            __Vtemp788[2U] = 1U;
            tracep->chgWData(oldp+549,(__Vtemp788),65);
            tracep->chgWData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
            tracep->chgBit(oldp+557,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+558,((((QData)((IData)(
                                                         ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
            tracep->chgCData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
            tracep->chgQData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
            tracep->chgQData(oldp+563,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
                                                 : 
                                                ((4U 
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
            tracep->chgQData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
            tracep->chgBit(oldp+567,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U))));
            tracep->chgQData(oldp+568,(((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
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
            tracep->chgBit(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
            VL_EXTEND_WQ(127,64, __Vtemp790, (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                               : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data));
            VL_SHIFTL_WWI(127,127,6, __Vtemp791, __Vtemp790, 
                          (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                                    << 3U)));
            __Vtemp792[0U] = __Vtemp791[0U];
            __Vtemp792[1U] = __Vtemp791[1U];
            __Vtemp792[2U] = __Vtemp791[2U];
            __Vtemp792[3U] = (0x7fffffffU & __Vtemp791[3U]);
            tracep->chgWData(oldp+571,(__Vtemp792),127);
            tracep->chgBit(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgQData(oldp+576,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
            tracep->chgBit(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgQData(oldp+581,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
            tracep->chgBit(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
            tracep->chgBit(oldp+585,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))));
            tracep->chgWData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
            __Vtemp794[0U] = 1U;
            __Vtemp794[1U] = 0U;
            __Vtemp794[2U] = 0U;
            __Vtemp795[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp795[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp795[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp796, __Vtemp794, __Vtemp795);
            __Vtemp797[0U] = __Vtemp796[0U];
            __Vtemp797[1U] = __Vtemp796[1U];
            __Vtemp797[2U] = (1U & __Vtemp796[2U]);
            tracep->chgWData(oldp+607,(__Vtemp797),65);
            tracep->chgCData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
            tracep->chgWData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
            tracep->chgBit(oldp+618,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                             | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
            __Vtemp800[0U] = 1U;
            __Vtemp800[1U] = 0U;
            __Vtemp800[2U] = 0U;
            __Vtemp801[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp801[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp801[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp802, __Vtemp800, __Vtemp801);
            tracep->chgBit(oldp+619,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ __Vtemp802[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 __Vtemp802[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ (1U 
                                                   & __Vtemp802[2U]))))));
            tracep->chgBit(oldp+620,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
            tracep->chgBit(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
            tracep->chgBit(oldp+622,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
            tracep->chgBit(oldp+623,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                            >> 3U))));
            tracep->chgQData(oldp+624,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgQData(oldp+626,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+628,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))));
            tracep->chgBit(oldp+629,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U))));
            VL_EXTEND_WQ(130,64, __Vtemp814, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp818[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
                __Vtemp818[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x1fU)))
                                   ? 0xffffffffU : 0U);
                __Vtemp818[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x1fU)))
                                   ? 0xffffffffU : 0U);
                __Vtemp818[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x1fU)))
                                   ? 0xffffffffU : 0U);
                __Vtemp818[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 >> 0x1fU)))
                                   ? 3U : 0U);
            } else {
                __Vtemp818[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                                   : __Vtemp814[0U]);
                __Vtemp818[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x20U))
                                   : __Vtemp814[1U]);
                __Vtemp818[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? ((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                     >> 0x3fU)))
                                       ? 0xffffffffU
                                       : 0U) : __Vtemp814[2U]);
                __Vtemp818[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? ((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                     >> 0x3fU)))
                                       ? 0xffffffffU
                                       : 0U) : __Vtemp814[3U]);
                __Vtemp818[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                   ? ((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                     >> 0x3fU)))
                                       ? 3U : 0U) : 
                                  __Vtemp814[4U]);
            }
            tracep->chgWData(oldp+630,(__Vtemp818),130);
            tracep->chgWData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            __Vtemp820[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                              << 1U);
            __Vtemp820[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                               >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                            << 1U));
            __Vtemp820[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                     << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                   << 1U)));
            tracep->chgWData(oldp+638,(__Vtemp820),67);
            tracep->chgCData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
            __Vtemp822[0U] = 1U;
            __Vtemp822[1U] = 0U;
            __Vtemp822[2U] = 0U;
            __Vtemp822[3U] = 0U;
            __Vtemp822[4U] = 0U;
            __Vtemp823[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp823[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp823[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp823[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp823[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp824, __Vtemp822, __Vtemp823);
            __Vtemp825[0U] = __Vtemp824[0U];
            __Vtemp825[1U] = __Vtemp824[1U];
            __Vtemp825[2U] = __Vtemp824[2U];
            __Vtemp825[3U] = __Vtemp824[3U];
            __Vtemp825[4U] = (3U & __Vtemp824[4U]);
            VL_EXTEND_WW(131,130, __Vtemp826, __Vtemp825);
            __Vtemp828[0U] = 1U;
            __Vtemp828[1U] = 0U;
            __Vtemp828[2U] = 0U;
            __Vtemp828[3U] = 0U;
            __Vtemp828[4U] = 0U;
            __Vtemp829[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp829[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp829[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp829[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp829[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp830, __Vtemp828, __Vtemp829);
            __Vtemp831[0U] = __Vtemp830[0U];
            __Vtemp831[1U] = __Vtemp830[1U];
            __Vtemp831[2U] = __Vtemp830[2U];
            __Vtemp831[3U] = __Vtemp830[3U];
            __Vtemp831[4U] = (3U & __Vtemp830[4U]);
            VL_EXTEND_WW(131,130, __Vtemp832, __Vtemp831);
            __Vtemp834[0U] = 1U;
            __Vtemp834[1U] = 0U;
            __Vtemp834[2U] = 0U;
            __Vtemp834[3U] = 0U;
            __Vtemp834[4U] = 0U;
            __Vtemp835[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp835[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp835[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp835[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp835[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp836, __Vtemp834, __Vtemp835);
            if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp844[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
                __Vtemp844[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
                __Vtemp844[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
                __Vtemp844[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
                __Vtemp844[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
            } else {
                __Vtemp844[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                   : 0U);
                __Vtemp844[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                   : 0U);
                __Vtemp844[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                   : 0U);
                __Vtemp844[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                   : 0U);
                __Vtemp844[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                   : 0U);
            }
            VL_EXTEND_WW(131,130, __Vtemp845, __Vtemp844);
            if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp853[0U] = __Vtemp826[0U];
                __Vtemp853[1U] = __Vtemp826[1U];
                __Vtemp853[2U] = __Vtemp826[2U];
                __Vtemp853[3U] = __Vtemp826[3U];
                __Vtemp853[4U] = __Vtemp826[4U];
            } else {
                __Vtemp853[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp832[0U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? (__Vtemp836[0U] 
                                          << 1U) : 
                                      ((3U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                           << 1U) : 
                                       __Vtemp845[0U])));
                __Vtemp853[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp832[1U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? ((__Vtemp836[0U] 
                                           >> 0x1fU) 
                                          | (__Vtemp836[1U] 
                                             << 1U))
                                       : ((3U == (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                 << 1U))
                                           : __Vtemp845[1U])));
                __Vtemp853[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp832[2U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? ((__Vtemp836[1U] 
                                           >> 0x1fU) 
                                          | (__Vtemp836[2U] 
                                             << 1U))
                                       : ((3U == (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                 << 1U))
                                           : __Vtemp845[2U])));
                __Vtemp853[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp832[3U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? ((__Vtemp836[2U] 
                                           >> 0x1fU) 
                                          | (__Vtemp836[3U] 
                                             << 1U))
                                       : ((3U == (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                 << 1U))
                                           : __Vtemp845[3U])));
                __Vtemp853[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                   ? __Vtemp832[4U]
                                   : ((4U == (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                       ? ((__Vtemp836[3U] 
                                           >> 0x1fU) 
                                          | (6U & (
                                                   __Vtemp836[4U] 
                                                   << 1U)))
                                       : ((3U == (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                               >> 0x1fU) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                 << 1U))
                                           : __Vtemp845[4U])));
            }
            tracep->chgWData(oldp+656,(__Vtemp853),131);
            tracep->chgCData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
            tracep->chgBit(oldp+662,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+663,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
            tracep->chgBit(oldp+664,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 4U))));
            tracep->chgQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
            tracep->chgQData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
            tracep->chgQData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
            tracep->chgQData(oldp+671,(((7U == (7U 
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
            tracep->chgBit(oldp+673,((0x10U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+674,((0x18U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+675,((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgBit(oldp+676,((8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgBit(oldp+677,(((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))) 
                                      | (8U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
            tracep->chgCData(oldp+678,(((0U == (0x1fU 
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
            tracep->chgBit(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
            tracep->chgQData(oldp+680,(((0xffffffffffffff77ULL 
                                         & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                       >> 7U)))
                                                            ? 0x88U
                                                            : 0x80U))))),64);
            tracep->chgCData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgBit(oldp+683,(((0x33U == (0xfe00707fU 
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
            tracep->chgBit(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
            tracep->chgBit(oldp+685,(((0x33U == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x13U != 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         & ((0x1bU 
                                             != (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            & ((0x3bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x7013U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_588)))))))));
            tracep->chgCData(oldp+686,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+687,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
            tracep->chgQData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[0]),64);
            tracep->chgQData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[1]),64);
            tracep->chgQData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[2]),64);
            tracep->chgQData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[3]),64);
            tracep->chgQData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[4]),64);
            tracep->chgQData(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[5]),64);
            tracep->chgQData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[6]),64);
            tracep->chgQData(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[7]),64);
            tracep->chgQData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[8]),64);
            tracep->chgQData(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[9]),64);
            tracep->chgQData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[10]),64);
            tracep->chgQData(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[11]),64);
            tracep->chgQData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[12]),64);
            tracep->chgQData(oldp+714,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[13]),64);
            tracep->chgQData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[14]),64);
            tracep->chgQData(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[15]),64);
            tracep->chgQData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[16]),64);
            tracep->chgQData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[17]),64);
            tracep->chgQData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[18]),64);
            tracep->chgQData(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[19]),64);
            tracep->chgQData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[20]),64);
            tracep->chgQData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[21]),64);
            tracep->chgQData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[22]),64);
            tracep->chgQData(oldp+734,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[23]),64);
            tracep->chgQData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[24]),64);
            tracep->chgQData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[25]),64);
            tracep->chgQData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[26]),64);
            tracep->chgQData(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[27]),64);
            tracep->chgQData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[28]),64);
            tracep->chgQData(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[29]),64);
            tracep->chgQData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[30]),64);
            tracep->chgQData(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[31]),64);
            tracep->chgQData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                  >> 0x14U))]),64);
            tracep->chgQData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0U]),64);
            tracep->chgBit(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+777,(((0xb02U == 
                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                          >> 0x14U))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
            tracep->chgQData(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+784,((0U == (0xffffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))));
            tracep->chgBit(oldp+785,((0x4000U == (0xffffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))));
            tracep->chgQData(oldp+786,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                         ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                         : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+788,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+790,((((QData)((IData)(
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
            tracep->chgBit(oldp+792,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
            tracep->chgQData(oldp+793,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+795,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+796,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+797,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+798,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
            tracep->chgIData(oldp+799,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->chgBit(oldp+800,(vlSelf->clock));
        tracep->chgBit(oldp+801,(vlSelf->reset));
        tracep->chgQData(oldp+802,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+804,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+806,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+808,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+810,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+812,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+814,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+816,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+818,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+820,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+822,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+824,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+826,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+828,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+830,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+832,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+834,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+836,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+838,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+840,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+842,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+844,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+846,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+848,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+850,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+852,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+854,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+856,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+858,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+860,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+862,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+864,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+866,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+868,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+869,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+870,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+872,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+873,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+875,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+877,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+879,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+881,(vlSelf->io_difftest_peripheral));
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
