// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_soc__Syms.h"


void Vriscv_soc___024root__trace_chg_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv_soc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_top_0\n"); );
    // Init
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv_soc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv_soc___024root__trace_chg_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h8800a5e4__0;
    VlWide<4>/*127:0*/ __Vtemp_he557d9cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h5cafde3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b945697__0;
    VlWide<4>/*127:0*/ __Vtemp_h83563b0d__0;
    VlWide<4>/*127:0*/ __Vtemp_hfddea7ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h6618c490__0;
    VlWide<3>/*95:0*/ __Vtemp_h4825144c__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__0;
    VlWide<3>/*95:0*/ __Vtemp_h346bf577__0;
    VlWide<3>/*95:0*/ __Vtemp_h28f9f554__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h2ede82b0__0;
    VlWide<5>/*159:0*/ __Vtemp_h4bcec608__0;
    VlWide<3>/*95:0*/ __Vtemp_h3364f91c__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__0;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__0;
    VlWide<5>/*159:0*/ __Vtemp_h83a42262__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__1;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__1;
    VlWide<5>/*159:0*/ __Vtemp_h00d757e1__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__2;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__2;
    VlWide<5>/*159:0*/ __Vtemp_hcd0c4155__0;
    VlWide<5>/*159:0*/ __Vtemp_hf484a493__0;
    VlWide<4>/*127:0*/ __Vtemp_hc91b162c__0;
    VlWide<4>/*127:0*/ __Vtemp_h96d8aca3__0;
    VlWide<4>/*127:0*/ __Vtemp_h0fce6913__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
        bufp->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
        bufp->chgQData(oldp+2,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                 ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                 : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                     : 0ULL))),64);
        bufp->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
        bufp->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
        bufp->chgQData(oldp+6,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                 ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                 : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                     ? (((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                     : 0ULL))),64);
        bufp->chgCData(oldp+8,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                 ? 0xffU : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                             ? (0xffU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))
                                             : 0U))),8);
        bufp->chgBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
        bufp->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
        bufp->chgBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
        bufp->chgBit(oldp+12,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
        bufp->chgQData(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
        bufp->chgCData(oldp+15,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                 | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
        bufp->chgBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
        bufp->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
        bufp->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_bits_rlast));
        bufp->chgCData(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr),6);
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        bufp->chgWData(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        bufp->chgWData(oldp+26,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
        __Vtemp_h8800a5e4__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                            >> 0xaU));
        __Vtemp_h8800a5e4__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                             >> 0xaU) 
                                            >> 0x20U));
        __Vtemp_h8800a5e4__0[2U] = 0U;
        __Vtemp_h8800a5e4__0[3U] = 0U;
        bufp->chgWData(oldp+30,(__Vtemp_h8800a5e4__0),128);
        bufp->chgWData(oldp+34,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
        bufp->chgBit(oldp+38,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        bufp->chgWData(oldp+39,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
        bufp->chgWData(oldp+43,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
        bufp->chgCData(oldp+47,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr),6);
        bufp->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        __Vtemp_he557d9cd__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp_he557d9cd__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp_he557d9cd__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp_he557d9cd__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        bufp->chgWData(oldp+49,(__Vtemp_he557d9cd__0),128);
        bufp->chgWData(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        bufp->chgWData(oldp+57,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
        __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                            >> 0x20U));
        __Vtemp_h5cafde3d__0[2U] = 0U;
        __Vtemp_h5cafde3d__0[3U] = 0U;
        bufp->chgWData(oldp+61,(__Vtemp_h5cafde3d__0),128);
        bufp->chgWData(oldp+65,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
        bufp->chgBit(oldp+69,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        bufp->chgWData(oldp+70,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
        bufp->chgWData(oldp+74,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
        bufp->chgQData(oldp+78,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
        bufp->chgQData(oldp+80,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                  ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                  : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        bufp->chgQData(oldp+82,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        bufp->chgQData(oldp+84,((((QData)((IData)((
                                                   ((((0U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                    >> 7U))))
                                                      ? 0xffU
                                                      : 0U) 
                                                    << 0x18U) 
                                                   | (((((0U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                       >> 6U))))
                                                         ? 0xffU
                                                         : 0U) 
                                                       << 0x10U) 
                                                      | (((((0U 
                                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                               & (IData)(
                                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                          >> 5U))))
                                                            ? 0xffU
                                                            : 0U) 
                                                          << 8U) 
                                                         | (((0U 
                                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                             | ((1U 
                                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                & (IData)(
                                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                           >> 4U))))
                                                             ? 0xffU
                                                             : 0U)))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((((0U 
                                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                     & (IData)(
                                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                                >> 3U))))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x18U) 
                                                               | (((((0U 
                                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                        & (IData)(
                                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                                >> 2U))))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 0x10U) 
                                                                  | (((((0U 
                                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                           & (IData)(
                                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                                >> 1U))))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 8U) 
                                                                     | (((0U 
                                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T)))
                                                                         ? 0xffU
                                                                         : 0U)))))))),64);
        bufp->chgBit(oldp+86,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid) 
                               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
        bufp->chgQData(oldp+87,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        bufp->chgCData(oldp+89,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        bufp->chgBit(oldp+90,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        bufp->chgBit(oldp+91,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        bufp->chgIData(oldp+92,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                    | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                       & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                  >> 3U))))
                                    ? 0xffU : 0U) << 0x18U) 
                                 | (((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                       | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                          & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                     >> 2U))))
                                       ? 0xffU : 0U) 
                                     << 0x10U) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                        & (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                   >> 1U))))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | (((0U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T)))
                                                      ? 0xffU
                                                      : 0U))))),32);
        bufp->chgIData(oldp+93,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                    | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                       & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                  >> 7U))))
                                    ? 0xffU : 0U) << 0x18U) 
                                 | (((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                       | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                          & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                     >> 6U))))
                                       ? 0xffU : 0U) 
                                     << 0x10U) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                        & (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                   >> 5U))))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | (((0U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
                                                                    >> 4U))))
                                                      ? 0xffU
                                                      : 0U))))),32);
        bufp->chgBit(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush));
        bufp->chgBit(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        bufp->chgBit(oldp+96,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 0x1fU)) 
                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        bufp->chgQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        bufp->chgBit(oldp+99,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        bufp->chgBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        bufp->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        bufp->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
        bufp->chgBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        bufp->chgQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast));
        bufp->chgBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready));
        bufp->chgBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid));
        bufp->chgQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        bufp->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        bufp->chgQData(oldp+116,((((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        bufp->chgCData(oldp+118,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        bufp->chgBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        bufp->chgBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        bufp->chgBit(oldp+121,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        bufp->chgBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        bufp->chgQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        bufp->chgQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        bufp->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        bufp->chgBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        bufp->chgBit(oldp+129,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        bufp->chgBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        bufp->chgQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
        bufp->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
        bufp->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
        bufp->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        bufp->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
        bufp->chgBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        bufp->chgBit(oldp+139,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU))
                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready))));
        bufp->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        bufp->chgBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        bufp->chgQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
        bufp->chgQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_pc),64);
        bufp->chgBit(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        bufp->chgQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
        bufp->chgBit(oldp+149,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                          >> 0x1fU))
                                 ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
        bufp->chgBit(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        bufp->chgQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        bufp->chgBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        bufp->chgBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        bufp->chgBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        bufp->chgQData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        bufp->chgBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        bufp->chgQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        bufp->chgBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        bufp->chgQData(oldp+162,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                   ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                       : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                               : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                   : 0ULL)),64);
        bufp->chgQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        bufp->chgBit(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_flush));
        bufp->chgBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
        bufp->chgBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3));
        bufp->chgIData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
        bufp->chgQData(oldp+170,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                   : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                           : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
        bufp->chgBit(oldp+172,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                 : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                     : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                         : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
        bufp->chgBit(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        bufp->chgCData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        bufp->chgCData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        bufp->chgCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        bufp->chgQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        bufp->chgCData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        bufp->chgQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        bufp->chgIData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        bufp->chgQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        bufp->chgIData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        bufp->chgCData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        bufp->chgBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        bufp->chgBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        bufp->chgSData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+192,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        bufp->chgBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        bufp->chgQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
        bufp->chgQData(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        bufp->chgQData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
        bufp->chgQData(oldp+200,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        bufp->chgBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        bufp->chgCData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        bufp->chgQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        bufp->chgBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en));
        bufp->chgSData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_is_exception));
        bufp->chgBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_time_irq));
        bufp->chgBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_soft_irq));
        bufp->chgCData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        bufp->chgQData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        bufp->chgQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        bufp->chgBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_commit));
        bufp->chgIData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        bufp->chgBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        bufp->chgCData(oldp+221,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0xfU))),5);
        bufp->chgQData(oldp+222,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                   : ((0x1fU == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0xfU)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                       : ((0x1eU == 
                                           (0x1fU & 
                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xfU)))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                           : ((0x1dU 
                                               == (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0xfU)))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                               : ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26))))))),64);
        bufp->chgCData(oldp+224,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))),5);
        bufp->chgQData(oldp+225,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0x14U)) 
                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                   : ((0x1fU == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                       : ((0x1eU == 
                                           (0x1fU & 
                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0x14U)))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                           : ((0x1dU 
                                               == (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U)))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                               : ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58))))))),64);
        bufp->chgSData(oldp+227,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+228,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
                                    == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                   : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                       : ((0xb00U == 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                                           : ((0x344U 
                                               == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                               ? 0ULL
                                               : ((0x343U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                     : 
                                                    ((0x340U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? 0ULL
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                        : 
                                                       ((0x304U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                         : 
                                                        ((0x303U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x302U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                            >> 0x14U))
                                                           ? 0ULL
                                                           : 
                                                          ((0x301U 
                                                            == 
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                             >> 0x14U))
                                                            ? 0ULL
                                                            : 
                                                           ((0x300U 
                                                             == 
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                              >> 0x14U))
                                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                             : 0ULL)))))))))))))))),64);
        bufp->chgQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        bufp->chgQData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        bufp->chgBit(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        bufp->chgBit(oldp+235,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        bufp->chgBit(oldp+236,((0x4000U == (0xffffU 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        bufp->chgCData(oldp+237,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        bufp->chgQData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
        bufp->chgQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
        bufp->chgQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
        bufp->chgQData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
        bufp->chgQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
        bufp->chgQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
        bufp->chgQData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
        bufp->chgQData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
        bufp->chgQData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
        bufp->chgQData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
        bufp->chgQData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
        bufp->chgQData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
        bufp->chgQData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
        bufp->chgQData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
        bufp->chgQData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
        bufp->chgQData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
        bufp->chgQData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
        bufp->chgQData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
        bufp->chgQData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
        bufp->chgQData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
        bufp->chgQData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
        bufp->chgQData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
        bufp->chgQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
        bufp->chgQData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
        bufp->chgQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
        bufp->chgQData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
        bufp->chgQData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
        bufp->chgQData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
        bufp->chgQData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
        bufp->chgQData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
        bufp->chgQData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
        bufp->chgQData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
        bufp->chgBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        bufp->chgIData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        bufp->chgQData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        bufp->chgQData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        bufp->chgBit(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        bufp->chgBit(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        bufp->chgBit(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        bufp->chgQData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        bufp->chgQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        bufp->chgQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        bufp->chgQData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        bufp->chgQData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        bufp->chgQData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        bufp->chgQData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        bufp->chgQData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        bufp->chgQData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        bufp->chgQData(oldp+329,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0x14U))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                   : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                                       : ((0x344U == 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U))
                                           ? 0ULL : 
                                          ((0x343U 
                                            == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0x14U))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                            : ((0x342U 
                                                == 
                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                : (
                                                   (0x341U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                    : 
                                                   ((0x340U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? 0ULL
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                        : 
                                                       ((0x303U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? 0ULL
                                                         : 
                                                        ((0x302U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x301U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                            >> 0x14U))
                                                           ? 0ULL
                                                           : 
                                                          ((0x300U 
                                                            == 
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                             >> 0x14U))
                                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                            : 0ULL))))))))))))))),64);
        bufp->chgBit(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        bufp->chgCData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        bufp->chgCData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        bufp->chgCData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        bufp->chgBit(oldp+335,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        bufp->chgCData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        bufp->chgCData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        bufp->chgBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        bufp->chgBit(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        bufp->chgBit(oldp+340,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 0x1fU))));
        bufp->chgBit(oldp+341,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 0x1fU))));
        bufp->chgBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        bufp->chgQData(oldp+343,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                  >> 0xaU)),54);
        bufp->chgCData(oldp+345,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                   >> 4U)))),6);
        bufp->chgCData(oldp+346,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        bufp->chgCData(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        bufp->chgQData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        bufp->chgCData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        bufp->chgBit(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        bufp->chgQData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        bufp->chgCData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        bufp->chgCData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        bufp->chgBit(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        bufp->chgSData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        bufp->chgBit(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        bufp->chgQData(oldp+359,((((QData)((IData)(
                                                   ((0x80U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                     ? 0xffU
                                                     : 0U))) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                   ? 0xffU
                                                                   : 0U))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    ((0x20U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                         ? 0xffU
                                                                         : 0U))) 
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
                                                                                 : 0U))))))))))),64);
        bufp->chgWData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        bufp->chgWData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        bufp->chgBit(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        bufp->chgQData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        bufp->chgQData(oldp+374,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        bufp->chgQData(oldp+376,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        bufp->chgBit(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        bufp->chgQData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        bufp->chgQData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        bufp->chgQData(oldp+383,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
        bufp->chgQData(oldp+385,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
        bufp->chgBit(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        bufp->chgBit(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        bufp->chgBit(oldp+389,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        bufp->chgBit(oldp+390,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        bufp->chgBit(oldp+391,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                              >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
        bufp->chgBit(oldp+392,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                              >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
        bufp->chgQData(oldp+393,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))),64);
        bufp->chgQData(oldp+395,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))),64);
        bufp->chgQData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        bufp->chgBit(oldp+399,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        bufp->chgBit(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        bufp->chgCData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        bufp->chgBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        bufp->chgBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        bufp->chgCData(oldp+404,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        bufp->chgCData(oldp+406,(((0x33U == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                   ? 1U : ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                            ? 1U : 
                                           ((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                             ? 1U : 
                                            ((0x3bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                              ? 1U : 
                                             ((0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                               ? 1U
                                               : ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 0U
                                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_438)))))))))),2);
        bufp->chgCData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
        bufp->chgCData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
        bufp->chgBit(oldp+409,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
        bufp->chgBit(oldp+410,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
        bufp->chgBit(oldp+411,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        bufp->chgBit(oldp+412,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        bufp->chgBit(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
        bufp->chgQData(oldp+414,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                   : 0ULL)),64);
        bufp->chgBit(oldp+416,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
        bufp->chgQData(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
        bufp->chgQData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data),64);
        bufp->chgQData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data),64);
        bufp->chgQData(oldp+423,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                   ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                       ? (((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                        >> 0x1fU)))
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                   : 0ULL)),64);
        bufp->chgBit(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        bufp->chgQData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        bufp->chgBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        bufp->chgBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        bufp->chgBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        bufp->chgQData(oldp+431,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                                   ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                       : ((0U == (3U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
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
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))),64);
        bufp->chgBit(oldp+433,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        bufp->chgBit(oldp+434,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
        bufp->chgBit(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        bufp->chgQData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        bufp->chgBit(oldp+438,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                & (IData)(((0U != (0x1cU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
        bufp->chgQData(oldp+439,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                   ? ((0xffffffffffffff77ULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                                      | (QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                                     >> 7U)))
                                                          ? 0x88U
                                                          : 0x80U))))
                                   : ((7U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                       : ((3U == (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                           : ((5U == 
                                               (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                               ? ((0xffffffffffffffe0ULL 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))))
                                               : ((1U 
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
        bufp->chgSData(oldp+441,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                   ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        bufp->chgBit(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        bufp->chgCData(oldp+443,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),6);
        bufp->chgBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        bufp->chgBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        bufp->chgCData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        bufp->chgBit(oldp+447,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        bufp->chgBit(oldp+448,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+449,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+450,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 3U))));
        bufp->chgCData(oldp+451,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                   ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
        bufp->chgBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        bufp->chgQData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        bufp->chgBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        bufp->chgBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        bufp->chgBit(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        bufp->chgBit(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        bufp->chgBit(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        bufp->chgBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        bufp->chgBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        bufp->chgBit(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        bufp->chgBit(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        bufp->chgBit(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        bufp->chgBit(oldp+465,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        bufp->chgQData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        bufp->chgQData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        bufp->chgQData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
        bufp->chgBit(oldp+472,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U)))));
        bufp->chgQData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        bufp->chgBit(oldp+475,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 5U)))));
        bufp->chgBit(oldp+476,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 5U)))));
        bufp->chgQData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        bufp->chgQData(oldp+479,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))
                                   ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        bufp->chgWData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        bufp->chgBit(oldp+484,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        bufp->chgBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        bufp->chgCData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        __Vtemp_h6b945697__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
        __Vtemp_h6b945697__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                            >> 0x20U));
        __Vtemp_h6b945697__0[2U] = 0U;
        __Vtemp_h6b945697__0[3U] = 0U;
        VL_SHIFTL_WWI(127,127,6, __Vtemp_h83563b0d__0, __Vtemp_h6b945697__0, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
        __Vtemp_hfddea7ef__0[0U] = __Vtemp_h83563b0d__0[0U];
        __Vtemp_hfddea7ef__0[1U] = __Vtemp_h83563b0d__0[1U];
        __Vtemp_hfddea7ef__0[2U] = __Vtemp_h83563b0d__0[2U];
        __Vtemp_hfddea7ef__0[3U] = (0x7fffffffU & __Vtemp_h83563b0d__0[3U]);
        bufp->chgWData(oldp+487,(__Vtemp_hfddea7ef__0),127);
        bufp->chgQData(oldp+491,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                  >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+493,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+495,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))
                                   ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                   : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                      >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
        bufp->chgCData(oldp+497,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                        >> 2U))),3);
        bufp->chgQData(oldp+498,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? ((1U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                       ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                       : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                            ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                          >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                   : ((1U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                          << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                       : ((4U == (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                           : ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                               ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                  | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                               : ((7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
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
                                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U]))))))))))),64);
        bufp->chgBit(oldp+500,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        bufp->chgBit(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        bufp->chgQData(oldp+502,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U));
        __Vtemp_h6618c490__0[2U] = 1U;
        bufp->chgWData(oldp+504,(__Vtemp_h6618c490__0),65);
        bufp->chgQData(oldp+507,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
            __Vtemp_h4825144c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
            __Vtemp_h4825144c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
            __Vtemp_h4825144c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
        } else {
            __Vtemp_h4825144c__0[0U] = 0U;
            __Vtemp_h4825144c__0[1U] = 0U;
            __Vtemp_h4825144c__0[2U] = 0U;
        }
        bufp->chgWData(oldp+509,(__Vtemp_h4825144c__0),65);
        bufp->chgQData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        bufp->chgQData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
        bufp->chgBit(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
        bufp->chgBit(oldp+517,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc) 
                                    & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc 
                                       != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                            ? ((3U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                     : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                            : 0ULL)))) 
                                | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                   | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre))))));
        bufp->chgQData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        bufp->chgQData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        bufp->chgCData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        bufp->chgBit(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        bufp->chgBit(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        bufp->chgCData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        bufp->chgQData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        bufp->chgQData(oldp+528,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
                                       : ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                           : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                               ? ((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                               : ((0x10U 
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
        bufp->chgQData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        bufp->chgBit(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        bufp->chgQData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        bufp->chgBit(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        bufp->chgWData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        bufp->chgBit(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        bufp->chgBit(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        bufp->chgQData(oldp+542,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        bufp->chgBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        bufp->chgQData(oldp+547,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                   : ((0U == (3U & 
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
        bufp->chgBit(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        bufp->chgBit(oldp+551,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U)))));
        bufp->chgWData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        bufp->chgWData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        bufp->chgWData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        bufp->chgWData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        bufp->chgWData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        bufp->chgWData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        bufp->chgWData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        __Vtemp_h639dda77__0[0U] = 1U;
        __Vtemp_h639dda77__0[1U] = 0U;
        __Vtemp_h639dda77__0[2U] = 0U;
        __Vtemp_h3fef5ac1__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp_h3fef5ac1__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp_h3fef5ac1__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp_h346bf577__0, __Vtemp_h639dda77__0, __Vtemp_h3fef5ac1__0);
        __Vtemp_h28f9f554__0[0U] = __Vtemp_h346bf577__0[0U];
        __Vtemp_h28f9f554__0[1U] = __Vtemp_h346bf577__0[1U];
        __Vtemp_h28f9f554__0[2U] = (1U & __Vtemp_h346bf577__0[2U]);
        bufp->chgWData(oldp+573,(__Vtemp_h28f9f554__0),65);
        bufp->chgCData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        bufp->chgCData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        bufp->chgCData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        bufp->chgWData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        bufp->chgBit(oldp+584,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                        | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                       | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp_h639dda77__1[0U] = 1U;
        __Vtemp_h639dda77__1[1U] = 0U;
        __Vtemp_h639dda77__1[2U] = 0U;
        __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
        bufp->chgBit(oldp+585,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                         ^ __Vtemp_h2ede82b0__0[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                           ^ __Vtemp_h2ede82b0__0[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                          ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
        bufp->chgBit(oldp+586,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
        bufp->chgBit(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        bufp->chgBit(oldp+588,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        bufp->chgBit(oldp+589,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                      >> 3U))));
        bufp->chgQData(oldp+590,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))),64);
        bufp->chgQData(oldp+592,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]))))),64);
        bufp->chgBit(oldp+594,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U))));
        bufp->chgBit(oldp+595,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U))));
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp_h4bcec608__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                               >> 0x1fU)))) {
                __Vtemp_h4bcec608__0[1U] = 0xffffffffU;
                __Vtemp_h4bcec608__0[2U] = 0xffffffffU;
                __Vtemp_h4bcec608__0[3U] = 0xffffffffU;
                __Vtemp_h4bcec608__0[4U] = 3U;
            } else {
                __Vtemp_h4bcec608__0[1U] = 0U;
                __Vtemp_h4bcec608__0[2U] = 0U;
                __Vtemp_h4bcec608__0[3U] = 0U;
                __Vtemp_h4bcec608__0[4U] = 0U;
            }
        } else if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp_h4bcec608__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
            __Vtemp_h4bcec608__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                                >> 0x20U));
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                               >> 0x3fU)))) {
                __Vtemp_h4bcec608__0[2U] = 0xffffffffU;
                __Vtemp_h4bcec608__0[3U] = 0xffffffffU;
                __Vtemp_h4bcec608__0[4U] = 3U;
            } else {
                __Vtemp_h4bcec608__0[2U] = 0U;
                __Vtemp_h4bcec608__0[3U] = 0U;
                __Vtemp_h4bcec608__0[4U] = 0U;
            }
        } else {
            __Vtemp_h4bcec608__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
            __Vtemp_h4bcec608__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                                >> 0x20U));
            __Vtemp_h4bcec608__0[2U] = 0U;
            __Vtemp_h4bcec608__0[3U] = 0U;
            __Vtemp_h4bcec608__0[4U] = 0U;
        }
        bufp->chgWData(oldp+596,(__Vtemp_h4bcec608__0),130);
        bufp->chgWData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
        __Vtemp_h3364f91c__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                                    << 1U);
        __Vtemp_h3364f91c__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                                  << 1U));
        __Vtemp_h3364f91c__0[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                           << 2U)) 
                                    | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                        >> 0x1fU) | 
                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                        << 1U)));
        bufp->chgWData(oldp+604,(__Vtemp_h3364f91c__0),67);
        bufp->chgCData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        bufp->chgWData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        bufp->chgWData(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        bufp->chgWData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        bufp->chgCData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        __Vtemp_hd904ae33__0[0U] = 1U;
        __Vtemp_hd904ae33__0[1U] = 0U;
        __Vtemp_hd904ae33__0[2U] = 0U;
        __Vtemp_hd904ae33__0[3U] = 0U;
        __Vtemp_hd904ae33__0[4U] = 0U;
        __Vtemp_h7688b7a5__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp_h7688b7a5__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp_h7688b7a5__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp_h7688b7a5__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp_h7688b7a5__0[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp_h83a42262__0, __Vtemp_hd904ae33__0, __Vtemp_h7688b7a5__0);
        __Vtemp_hd904ae33__1[0U] = 1U;
        __Vtemp_hd904ae33__1[1U] = 0U;
        __Vtemp_hd904ae33__1[2U] = 0U;
        __Vtemp_hd904ae33__1[3U] = 0U;
        __Vtemp_hd904ae33__1[4U] = 0U;
        __Vtemp_h7688b7a5__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp_h7688b7a5__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp_h7688b7a5__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp_h7688b7a5__1[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp_h7688b7a5__1[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp_h00d757e1__0, __Vtemp_hd904ae33__1, __Vtemp_h7688b7a5__1);
        __Vtemp_hd904ae33__2[0U] = 1U;
        __Vtemp_hd904ae33__2[1U] = 0U;
        __Vtemp_hd904ae33__2[2U] = 0U;
        __Vtemp_hd904ae33__2[3U] = 0U;
        __Vtemp_hd904ae33__2[4U] = 0U;
        __Vtemp_h7688b7a5__2[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        __Vtemp_h7688b7a5__2[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        __Vtemp_h7688b7a5__2[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        __Vtemp_h7688b7a5__2[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        __Vtemp_h7688b7a5__2[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
        VL_ADD_W(5, __Vtemp_hcd0c4155__0, __Vtemp_hd904ae33__2, __Vtemp_h7688b7a5__2);
        if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_hf484a493__0[0U] = __Vtemp_h83a42262__0[0U];
            __Vtemp_hf484a493__0[1U] = __Vtemp_h83a42262__0[1U];
            __Vtemp_hf484a493__0[2U] = __Vtemp_h83a42262__0[2U];
            __Vtemp_hf484a493__0[3U] = __Vtemp_h83a42262__0[3U];
            __Vtemp_hf484a493__0[4U] = (3U & __Vtemp_h83a42262__0[4U]);
        } else if ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_hf484a493__0[0U] = __Vtemp_h00d757e1__0[0U];
            __Vtemp_hf484a493__0[1U] = __Vtemp_h00d757e1__0[1U];
            __Vtemp_hf484a493__0[2U] = __Vtemp_h00d757e1__0[2U];
            __Vtemp_hf484a493__0[3U] = __Vtemp_h00d757e1__0[3U];
            __Vtemp_hf484a493__0[4U] = (3U & __Vtemp_h00d757e1__0[4U]);
        } else if ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_hf484a493__0[0U] = (__Vtemp_hcd0c4155__0[0U] 
                                        << 1U);
            __Vtemp_hf484a493__0[1U] = ((__Vtemp_hcd0c4155__0[0U] 
                                         >> 0x1fU) 
                                        | (__Vtemp_hcd0c4155__0[1U] 
                                           << 1U));
            __Vtemp_hf484a493__0[2U] = ((__Vtemp_hcd0c4155__0[1U] 
                                         >> 0x1fU) 
                                        | (__Vtemp_hcd0c4155__0[2U] 
                                           << 1U));
            __Vtemp_hf484a493__0[3U] = ((__Vtemp_hcd0c4155__0[2U] 
                                         >> 0x1fU) 
                                        | (__Vtemp_hcd0c4155__0[3U] 
                                           << 1U));
            __Vtemp_hf484a493__0[4U] = ((__Vtemp_hcd0c4155__0[3U] 
                                         >> 0x1fU) 
                                        | (6U & (__Vtemp_hcd0c4155__0[4U] 
                                                 << 1U)));
        } else if ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_hf484a493__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                        << 1U);
            __Vtemp_hf484a493__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                           << 1U));
            __Vtemp_hf484a493__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                           << 1U));
            __Vtemp_hf484a493__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                           << 1U));
            __Vtemp_hf484a493__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                           << 1U));
        } else if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_hf484a493__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp_hf484a493__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp_hf484a493__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp_hf484a493__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp_hf484a493__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else if ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_hf484a493__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp_hf484a493__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp_hf484a493__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp_hf484a493__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp_hf484a493__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp_hf484a493__0[0U] = 0U;
            __Vtemp_hf484a493__0[1U] = 0U;
            __Vtemp_hf484a493__0[2U] = 0U;
            __Vtemp_hf484a493__0[3U] = 0U;
            __Vtemp_hf484a493__0[4U] = 0U;
        }
        bufp->chgWData(oldp+622,(__Vtemp_hf484a493__0),131);
        bufp->chgCData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        bufp->chgBit(oldp+628,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                             >> 2U)))));
        bufp->chgBit(oldp+629,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        bufp->chgBit(oldp+630,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 4U))));
        bufp->chgQData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        bufp->chgQData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        bufp->chgQData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        bufp->chgQData(oldp+637,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                   : ((3U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                       : ((5U == (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? ((0xffffffffffffffe0ULL 
                                               & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                              | (QData)((IData)(
                                                                (0x1fU 
                                                                 & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))))
                                           : ((1U == 
                                               (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                               : ((6U 
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
        bufp->chgBit(oldp+639,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+640,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+641,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+642,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+643,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))) 
                                | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        bufp->chgCData(oldp+644,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),4);
        bufp->chgBit(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        bufp->chgQData(oldp+646,(((0xffffffffffffff77ULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                                  | (QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                                 >> 7U)))
                                                      ? 0x88U
                                                      : 0x80U))))),64);
        bufp->chgBit(oldp+648,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
        bufp->chgIData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
        bufp->chgBit(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
        bufp->chgQData(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        bufp->chgBit(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        bufp->chgBit(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        bufp->chgQData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        bufp->chgCData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        bufp->chgCData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        bufp->chgQData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        bufp->chgQData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        bufp->chgQData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        bufp->chgQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        bufp->chgBit(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        bufp->chgCData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        bufp->chgCData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        bufp->chgBit(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        bufp->chgBit(oldp+671,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        bufp->chgBit(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        bufp->chgBit(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        bufp->chgWData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
        bufp->chgWData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
        bufp->chgWData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
        bufp->chgWData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
        bufp->chgWData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
        bufp->chgWData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
        bufp->chgWData(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
        bufp->chgWData(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
        bufp->chgWData(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
        bufp->chgWData(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
        bufp->chgWData(oldp+714,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
        bufp->chgWData(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
        bufp->chgWData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
        bufp->chgWData(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
        bufp->chgWData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
        bufp->chgWData(oldp+734,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
        bufp->chgWData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
        bufp->chgWData(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
        bufp->chgWData(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
        bufp->chgWData(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
        bufp->chgWData(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
        bufp->chgWData(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
        bufp->chgWData(oldp+762,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
        bufp->chgWData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
        bufp->chgWData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
        bufp->chgWData(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
        bufp->chgWData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
        bufp->chgWData(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
        bufp->chgWData(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
        bufp->chgWData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
        bufp->chgWData(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
        bufp->chgWData(oldp+798,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
        bufp->chgWData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
        bufp->chgWData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
        bufp->chgWData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
        bufp->chgWData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
        bufp->chgWData(oldp+818,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
        bufp->chgWData(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
        bufp->chgWData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
        bufp->chgWData(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
        bufp->chgWData(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
        bufp->chgWData(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
        bufp->chgWData(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
        bufp->chgWData(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
        bufp->chgWData(oldp+850,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
        bufp->chgWData(oldp+854,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
        bufp->chgWData(oldp+858,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
        bufp->chgWData(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
        bufp->chgWData(oldp+866,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
        bufp->chgWData(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
        bufp->chgWData(oldp+874,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
        bufp->chgWData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
        bufp->chgWData(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
        bufp->chgWData(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
        bufp->chgWData(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
        bufp->chgWData(oldp+894,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
        bufp->chgWData(oldp+898,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
        bufp->chgWData(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
        bufp->chgWData(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
        bufp->chgWData(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
        bufp->chgWData(oldp+914,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
        bufp->chgWData(oldp+918,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
        bufp->chgWData(oldp+922,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
        bufp->chgWData(oldp+926,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
        bufp->chgQData(oldp+930,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
        bufp->chgQData(oldp+932,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
        bufp->chgQData(oldp+934,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
        bufp->chgQData(oldp+936,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
        bufp->chgQData(oldp+938,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
        bufp->chgQData(oldp+940,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
        bufp->chgCData(oldp+942,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        bufp->chgCData(oldp+943,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        bufp->chgCData(oldp+944,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        bufp->chgCData(oldp+945,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        bufp->chgCData(oldp+946,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        bufp->chgCData(oldp+947,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        bufp->chgCData(oldp+948,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        bufp->chgCData(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        bufp->chgCData(oldp+950,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        bufp->chgCData(oldp+951,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        bufp->chgCData(oldp+952,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        bufp->chgCData(oldp+953,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        bufp->chgCData(oldp+954,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        bufp->chgCData(oldp+955,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        bufp->chgCData(oldp+956,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        bufp->chgCData(oldp+957,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        bufp->chgCData(oldp+958,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        bufp->chgCData(oldp+959,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        bufp->chgCData(oldp+960,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        bufp->chgCData(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        bufp->chgCData(oldp+962,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        bufp->chgCData(oldp+963,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        bufp->chgCData(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        bufp->chgCData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        bufp->chgCData(oldp+966,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        bufp->chgCData(oldp+967,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        bufp->chgCData(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        bufp->chgCData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        bufp->chgCData(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        bufp->chgCData(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        bufp->chgCData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        bufp->chgCData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        bufp->chgCData(oldp+974,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        bufp->chgCData(oldp+975,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        bufp->chgCData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        bufp->chgCData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        bufp->chgCData(oldp+978,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        bufp->chgCData(oldp+979,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        bufp->chgCData(oldp+980,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        bufp->chgCData(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        bufp->chgCData(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        bufp->chgCData(oldp+983,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        bufp->chgCData(oldp+984,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        bufp->chgCData(oldp+985,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        bufp->chgCData(oldp+986,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        bufp->chgCData(oldp+987,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        bufp->chgCData(oldp+988,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        bufp->chgCData(oldp+989,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        bufp->chgCData(oldp+990,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        bufp->chgCData(oldp+991,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        bufp->chgCData(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        bufp->chgCData(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        bufp->chgCData(oldp+994,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        bufp->chgCData(oldp+995,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        bufp->chgCData(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        bufp->chgCData(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        bufp->chgCData(oldp+998,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        bufp->chgCData(oldp+999,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        bufp->chgCData(oldp+1000,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        bufp->chgCData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        bufp->chgCData(oldp+1002,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        bufp->chgCData(oldp+1003,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        bufp->chgCData(oldp+1004,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        bufp->chgCData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        bufp->chgCData(oldp+1006,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        bufp->chgCData(oldp+1007,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                    >> 3U)))),6);
        __Vtemp_hc91b162c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
        __Vtemp_hc91b162c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
        __Vtemp_hc91b162c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
        __Vtemp_hc91b162c__0[3U] = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
        bufp->chgWData(oldp+1008,(__Vtemp_hc91b162c__0),123);
        bufp->chgCData(oldp+1012,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 3U)))),6);
        bufp->chgQData(oldp+1013,(((0xfffffffffffffeULL 
                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 8U)) | (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                             >> 2U))))))),56);
        bufp->chgBit(oldp+1015,((1U & (((0x3fU == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                              >> 3U))))
                                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63)
                                         : ((0x3eU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                             ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62)
                                             : ((0x3dU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61)
                                                 : 
                                                ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60)
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59)
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58)
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57)
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56)
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55)
                                                       : 
                                                      ((0x36U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                    >> 3U))))
                                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54)
                                                        : 
                                                       ((0x35U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                     >> 3U))))
                                                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53)
                                                         : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436)))))))))))) 
                                       >> 1U))));
        bufp->chgBit(oldp+1016,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                       >> 0x1aU))));
        bufp->chgQData(oldp+1017,((0xffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                       << 0x1eU) | 
                                      ((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                       >> 2U)))),56);
        bufp->chgQData(oldp+1019,((((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                                    >> 2U)))),64);
        bufp->chgCData(oldp+1021,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
        bufp->chgQData(oldp+1022,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        bufp->chgQData(oldp+1024,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        bufp->chgQData(oldp+1026,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        bufp->chgQData(oldp+1028,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        bufp->chgIData(oldp+1030,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        bufp->chgIData(oldp+1031,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        bufp->chgIData(oldp+1032,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        bufp->chgIData(oldp+1033,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        bufp->chgBit(oldp+1034,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        bufp->chgBit(oldp+1035,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        bufp->chgBit(oldp+1036,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        bufp->chgBit(oldp+1037,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        bufp->chgBit(oldp+1038,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        bufp->chgBit(oldp+1039,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        bufp->chgBit(oldp+1040,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        bufp->chgBit(oldp+1041,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        bufp->chgCData(oldp+1042,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        bufp->chgCData(oldp+1043,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        bufp->chgCData(oldp+1044,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        bufp->chgBit(oldp+1045,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        bufp->chgBit(oldp+1046,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        bufp->chgCData(oldp+1047,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                          + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                         - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        bufp->chgBit(oldp+1048,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        bufp->chgQData(oldp+1049,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        bufp->chgCData(oldp+1051,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        bufp->chgBit(oldp+1052,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        bufp->chgBit(oldp+1053,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        bufp->chgBit(oldp+1054,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
        bufp->chgWData(oldp+1055,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        bufp->chgWData(oldp+1059,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
            __Vtemp_h96d8aca3__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                >> 0xaU));
            __Vtemp_h96d8aca3__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                 >> 0xaU) 
                                                >> 0x20U));
        } else {
            __Vtemp_h96d8aca3__0[0U] = (IData)((0x3fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
            __Vtemp_h96d8aca3__0[1U] = (IData)(((0x3fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))) 
                                                >> 0x20U));
        }
        __Vtemp_h96d8aca3__0[2U] = 0U;
        __Vtemp_h96d8aca3__0[3U] = 0U;
        bufp->chgWData(oldp+1063,(__Vtemp_h96d8aca3__0),128);
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
            __Vtemp_h0fce6913__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                >> 0xaU));
            __Vtemp_h0fce6913__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                 >> 0xaU) 
                                                >> 0x20U));
        } else {
            __Vtemp_h0fce6913__0[0U] = (IData)((0x3fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
            __Vtemp_h0fce6913__0[1U] = (IData)(((0x3fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))) 
                                                >> 0x20U));
        }
        __Vtemp_h0fce6913__0[2U] = 0U;
        __Vtemp_h0fce6913__0[3U] = 0U;
        bufp->chgWData(oldp+1067,(__Vtemp_h0fce6913__0),128);
        bufp->chgBit(oldp+1071,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        bufp->chgBit(oldp+1072,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
        bufp->chgBit(oldp+1073,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        bufp->chgQData(oldp+1074,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+1076,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        bufp->chgQData(oldp+1077,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                  >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
        bufp->chgBit(oldp+1079,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        bufp->chgQData(oldp+1080,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                  >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
        bufp->chgBit(oldp+1082,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        bufp->chgCData(oldp+1083,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                    >> 4U)))),6);
        bufp->chgBit(oldp+1084,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        bufp->chgQData(oldp+1085,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+1087,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        bufp->chgBit(oldp+1089,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        bufp->chgBit(oldp+1090,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        bufp->chgBit(oldp+1091,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        bufp->chgQData(oldp+1092,((1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                             >> 4U))))),64);
        bufp->chgBit(oldp+1094,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        bufp->chgBit(oldp+1095,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        bufp->chgCData(oldp+1096,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        bufp->chgBit(oldp+1097,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        bufp->chgBit(oldp+1098,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        bufp->chgBit(oldp+1099,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                                 & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
        bufp->chgBit(oldp+1100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        bufp->chgQData(oldp+1101,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                   >> 0xaU)),54);
        bufp->chgCData(oldp+1103,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 4U)))),6);
        bufp->chgCData(oldp+1104,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+1105,((0x3fffffffffffffULL 
                                   & (((QData)((IData)(
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                         ? (IData)(
                                                                   ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                     >> 0xaU) 
                                                                    >> 0x20U))
                                                         : (IData)(
                                                                   ((0x3fffffffffffffULL 
                                                                     & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))) 
                                                                    >> 0x20U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                     ? (IData)(
                                                                               (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                                >> 0xaU))
                                                                     : (IData)(
                                                                               (0x3fffffffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U]))))))))))),54);
        bufp->chgQData(oldp+1107,((0x3fffffffffffffULL 
                                   & (((QData)((IData)(
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                         ? (IData)(
                                                                   ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                     >> 0xaU) 
                                                                    >> 0x20U))
                                                         : (IData)(
                                                                   ((0x3fffffffffffffULL 
                                                                     & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))) 
                                                                    >> 0x20U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                     ? (IData)(
                                                                               (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                                >> 0xaU))
                                                                     : (IData)(
                                                                               (0x3fffffffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U]))))))))))),54);
        bufp->chgBit(oldp+1109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        bufp->chgBit(oldp+1110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        bufp->chgQData(oldp+1111,((0xfffffffffffffff0ULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        bufp->chgQData(oldp+1113,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                   >> 0xaU)),54);
        bufp->chgCData(oldp+1115,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+1116,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        bufp->chgBit(oldp+1118,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        bufp->chgQData(oldp+1119,((1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U))))),64);
        bufp->chgQData(oldp+1121,((~ (1ULL << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                          >> 4U)))))),64);
        bufp->chgCData(oldp+1123,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        bufp->chgWData(oldp+1124,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
        bufp->chgWData(oldp+1128,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
        bufp->chgWData(oldp+1132,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
        bufp->chgWData(oldp+1136,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
        bufp->chgWData(oldp+1140,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
        bufp->chgWData(oldp+1144,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
        bufp->chgWData(oldp+1148,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
        bufp->chgWData(oldp+1152,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
        bufp->chgWData(oldp+1156,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
        bufp->chgWData(oldp+1160,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
        bufp->chgWData(oldp+1164,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
        bufp->chgWData(oldp+1168,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
        bufp->chgWData(oldp+1172,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
        bufp->chgWData(oldp+1176,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
        bufp->chgWData(oldp+1180,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
        bufp->chgWData(oldp+1184,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
        bufp->chgWData(oldp+1188,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
        bufp->chgWData(oldp+1192,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
        bufp->chgWData(oldp+1196,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
        bufp->chgWData(oldp+1200,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
        bufp->chgWData(oldp+1204,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
        bufp->chgWData(oldp+1208,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
        bufp->chgWData(oldp+1212,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
        bufp->chgWData(oldp+1216,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
        bufp->chgWData(oldp+1220,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
        bufp->chgWData(oldp+1224,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
        bufp->chgWData(oldp+1228,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
        bufp->chgWData(oldp+1232,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
        bufp->chgWData(oldp+1236,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
        bufp->chgWData(oldp+1240,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
        bufp->chgWData(oldp+1244,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
        bufp->chgWData(oldp+1248,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
        bufp->chgWData(oldp+1252,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
        bufp->chgWData(oldp+1256,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
        bufp->chgWData(oldp+1260,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
        bufp->chgWData(oldp+1264,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
        bufp->chgWData(oldp+1268,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
        bufp->chgWData(oldp+1272,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
        bufp->chgWData(oldp+1276,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
        bufp->chgWData(oldp+1280,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
        bufp->chgWData(oldp+1284,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
        bufp->chgWData(oldp+1288,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
        bufp->chgWData(oldp+1292,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
        bufp->chgWData(oldp+1296,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
        bufp->chgWData(oldp+1300,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
        bufp->chgWData(oldp+1304,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
        bufp->chgWData(oldp+1308,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
        bufp->chgWData(oldp+1312,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
        bufp->chgWData(oldp+1316,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
        bufp->chgWData(oldp+1320,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
        bufp->chgWData(oldp+1324,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
        bufp->chgWData(oldp+1328,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
        bufp->chgWData(oldp+1332,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
        bufp->chgWData(oldp+1336,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
        bufp->chgWData(oldp+1340,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
        bufp->chgWData(oldp+1344,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
        bufp->chgWData(oldp+1348,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
        bufp->chgWData(oldp+1352,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
        bufp->chgWData(oldp+1356,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
        bufp->chgWData(oldp+1360,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
        bufp->chgWData(oldp+1364,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
        bufp->chgWData(oldp+1368,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
        bufp->chgWData(oldp+1372,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
        bufp->chgWData(oldp+1376,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
        bufp->chgWData(oldp+1380,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
        bufp->chgWData(oldp+1384,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
        bufp->chgWData(oldp+1388,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
        bufp->chgWData(oldp+1392,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
        bufp->chgWData(oldp+1396,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
        bufp->chgWData(oldp+1400,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
        bufp->chgWData(oldp+1404,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
        bufp->chgWData(oldp+1408,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
        bufp->chgWData(oldp+1412,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
        bufp->chgWData(oldp+1416,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
        bufp->chgWData(oldp+1420,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
        bufp->chgWData(oldp+1424,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
        bufp->chgWData(oldp+1428,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
        bufp->chgWData(oldp+1432,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
        bufp->chgWData(oldp+1436,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
        bufp->chgWData(oldp+1440,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
        bufp->chgWData(oldp+1444,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
        bufp->chgWData(oldp+1448,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
        bufp->chgWData(oldp+1452,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
        bufp->chgWData(oldp+1456,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
        bufp->chgWData(oldp+1460,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
        bufp->chgWData(oldp+1464,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
        bufp->chgWData(oldp+1468,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
        bufp->chgWData(oldp+1472,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
        bufp->chgWData(oldp+1476,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
        bufp->chgWData(oldp+1480,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
        bufp->chgWData(oldp+1484,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
        bufp->chgWData(oldp+1488,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
        bufp->chgWData(oldp+1492,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
        bufp->chgWData(oldp+1496,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
        bufp->chgWData(oldp+1500,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
        bufp->chgWData(oldp+1504,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
        bufp->chgWData(oldp+1508,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
        bufp->chgWData(oldp+1512,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
        bufp->chgWData(oldp+1516,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
        bufp->chgWData(oldp+1520,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
        bufp->chgWData(oldp+1524,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
        bufp->chgWData(oldp+1528,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
        bufp->chgWData(oldp+1532,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
        bufp->chgWData(oldp+1536,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
        bufp->chgWData(oldp+1540,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
        bufp->chgWData(oldp+1544,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
        bufp->chgWData(oldp+1548,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
        bufp->chgWData(oldp+1552,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
        bufp->chgWData(oldp+1556,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
        bufp->chgWData(oldp+1560,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
        bufp->chgWData(oldp+1564,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
        bufp->chgWData(oldp+1568,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
        bufp->chgWData(oldp+1572,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
        bufp->chgWData(oldp+1576,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
        bufp->chgWData(oldp+1580,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
        bufp->chgWData(oldp+1584,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
        bufp->chgWData(oldp+1588,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
        bufp->chgWData(oldp+1592,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
        bufp->chgWData(oldp+1596,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
        bufp->chgWData(oldp+1600,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
        bufp->chgWData(oldp+1604,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
        bufp->chgWData(oldp+1608,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
        bufp->chgWData(oldp+1612,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
        bufp->chgWData(oldp+1616,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
        bufp->chgWData(oldp+1620,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
        bufp->chgWData(oldp+1624,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
        bufp->chgWData(oldp+1628,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
        bufp->chgWData(oldp+1632,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
        bufp->chgWData(oldp+1636,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
        bufp->chgWData(oldp+1640,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
        bufp->chgWData(oldp+1644,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
        bufp->chgWData(oldp+1648,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
        bufp->chgWData(oldp+1652,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
        bufp->chgWData(oldp+1656,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
        bufp->chgWData(oldp+1660,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
        bufp->chgWData(oldp+1664,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
        bufp->chgWData(oldp+1668,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
        bufp->chgWData(oldp+1672,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
        bufp->chgWData(oldp+1676,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
        bufp->chgWData(oldp+1680,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
        bufp->chgWData(oldp+1684,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
        bufp->chgWData(oldp+1688,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
        bufp->chgWData(oldp+1692,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
        bufp->chgWData(oldp+1696,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
        bufp->chgWData(oldp+1700,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
        bufp->chgWData(oldp+1704,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
        bufp->chgWData(oldp+1708,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
        bufp->chgWData(oldp+1712,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
        bufp->chgWData(oldp+1716,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
        bufp->chgWData(oldp+1720,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
        bufp->chgWData(oldp+1724,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
        bufp->chgWData(oldp+1728,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
        bufp->chgWData(oldp+1732,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
        bufp->chgWData(oldp+1736,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
        bufp->chgWData(oldp+1740,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
        bufp->chgWData(oldp+1744,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
        bufp->chgWData(oldp+1748,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
        bufp->chgWData(oldp+1752,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
        bufp->chgWData(oldp+1756,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
        bufp->chgWData(oldp+1760,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
        bufp->chgWData(oldp+1764,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
        bufp->chgWData(oldp+1768,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
        bufp->chgWData(oldp+1772,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
        bufp->chgWData(oldp+1776,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
        bufp->chgWData(oldp+1780,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
        bufp->chgWData(oldp+1784,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
        bufp->chgWData(oldp+1788,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
        bufp->chgWData(oldp+1792,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
        bufp->chgWData(oldp+1796,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
        bufp->chgWData(oldp+1800,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
        bufp->chgWData(oldp+1804,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
        bufp->chgWData(oldp+1808,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
        bufp->chgWData(oldp+1812,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
        bufp->chgWData(oldp+1816,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
        bufp->chgWData(oldp+1820,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
        bufp->chgWData(oldp+1824,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
        bufp->chgWData(oldp+1828,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
        bufp->chgWData(oldp+1832,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
        bufp->chgWData(oldp+1836,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
        bufp->chgWData(oldp+1840,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
        bufp->chgWData(oldp+1844,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
        bufp->chgWData(oldp+1848,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
        bufp->chgWData(oldp+1852,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
        bufp->chgWData(oldp+1856,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
        bufp->chgWData(oldp+1860,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
        bufp->chgWData(oldp+1864,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
        bufp->chgWData(oldp+1868,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
        bufp->chgWData(oldp+1872,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
        bufp->chgWData(oldp+1876,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
        bufp->chgWData(oldp+1880,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
        bufp->chgWData(oldp+1884,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
        bufp->chgWData(oldp+1888,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
        bufp->chgWData(oldp+1892,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
        bufp->chgWData(oldp+1896,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
        bufp->chgWData(oldp+1900,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
        bufp->chgWData(oldp+1904,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
        bufp->chgWData(oldp+1908,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
        bufp->chgWData(oldp+1912,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
        bufp->chgWData(oldp+1916,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
        bufp->chgWData(oldp+1920,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
        bufp->chgWData(oldp+1924,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
        bufp->chgWData(oldp+1928,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
        bufp->chgWData(oldp+1932,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
        bufp->chgWData(oldp+1936,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
        bufp->chgWData(oldp+1940,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
        bufp->chgWData(oldp+1944,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
        bufp->chgWData(oldp+1948,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
        bufp->chgWData(oldp+1952,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
        bufp->chgWData(oldp+1956,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
        bufp->chgWData(oldp+1960,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
        bufp->chgWData(oldp+1964,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
        bufp->chgWData(oldp+1968,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
        bufp->chgWData(oldp+1972,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
        bufp->chgWData(oldp+1976,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
        bufp->chgWData(oldp+1980,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
        bufp->chgWData(oldp+1984,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
        bufp->chgWData(oldp+1988,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
        bufp->chgWData(oldp+1992,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
        bufp->chgWData(oldp+1996,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
        bufp->chgWData(oldp+2000,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
        bufp->chgWData(oldp+2004,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
        bufp->chgWData(oldp+2008,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
        bufp->chgWData(oldp+2012,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
        bufp->chgWData(oldp+2016,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
        bufp->chgWData(oldp+2020,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
        bufp->chgWData(oldp+2024,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
        bufp->chgWData(oldp+2028,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
        bufp->chgWData(oldp+2032,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
        bufp->chgWData(oldp+2036,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
        bufp->chgWData(oldp+2040,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
        bufp->chgWData(oldp+2044,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
        bufp->chgWData(oldp+2048,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
        bufp->chgWData(oldp+2052,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
        bufp->chgWData(oldp+2056,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
        bufp->chgWData(oldp+2060,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
        bufp->chgWData(oldp+2064,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
        bufp->chgWData(oldp+2068,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
        bufp->chgWData(oldp+2072,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
        bufp->chgWData(oldp+2076,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
        bufp->chgWData(oldp+2080,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
        bufp->chgWData(oldp+2084,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
        bufp->chgWData(oldp+2088,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
        bufp->chgWData(oldp+2092,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
        bufp->chgWData(oldp+2096,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
        bufp->chgWData(oldp+2100,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
        bufp->chgWData(oldp+2104,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
        bufp->chgWData(oldp+2108,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
        bufp->chgWData(oldp+2112,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
        bufp->chgWData(oldp+2116,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
        bufp->chgWData(oldp+2120,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
        bufp->chgWData(oldp+2124,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
        bufp->chgWData(oldp+2128,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
        bufp->chgWData(oldp+2132,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
        bufp->chgWData(oldp+2136,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
        bufp->chgWData(oldp+2140,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
        bufp->chgWData(oldp+2144,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
        bufp->chgWData(oldp+2148,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
        bufp->chgWData(oldp+2152,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
        bufp->chgWData(oldp+2156,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
        bufp->chgWData(oldp+2160,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
        bufp->chgWData(oldp+2164,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
        bufp->chgWData(oldp+2168,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
        bufp->chgWData(oldp+2172,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
        bufp->chgWData(oldp+2176,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
        bufp->chgWData(oldp+2180,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
        bufp->chgWData(oldp+2184,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
        bufp->chgWData(oldp+2188,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
        bufp->chgWData(oldp+2192,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
        bufp->chgWData(oldp+2196,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
        bufp->chgWData(oldp+2200,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
        bufp->chgWData(oldp+2204,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
        bufp->chgWData(oldp+2208,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
        bufp->chgWData(oldp+2212,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
        bufp->chgWData(oldp+2216,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
        bufp->chgWData(oldp+2220,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
        bufp->chgWData(oldp+2224,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
        bufp->chgWData(oldp+2228,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
        bufp->chgWData(oldp+2232,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
        bufp->chgWData(oldp+2236,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
        bufp->chgWData(oldp+2240,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
        bufp->chgWData(oldp+2244,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
        bufp->chgWData(oldp+2248,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
        bufp->chgWData(oldp+2252,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
        bufp->chgWData(oldp+2256,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
        bufp->chgWData(oldp+2260,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
        bufp->chgWData(oldp+2264,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
        bufp->chgWData(oldp+2268,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
        bufp->chgWData(oldp+2272,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
        bufp->chgWData(oldp+2276,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
        bufp->chgWData(oldp+2280,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
        bufp->chgWData(oldp+2284,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
        bufp->chgWData(oldp+2288,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
        bufp->chgWData(oldp+2292,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
        bufp->chgWData(oldp+2296,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
        bufp->chgWData(oldp+2300,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
        bufp->chgWData(oldp+2304,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
        bufp->chgWData(oldp+2308,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
        bufp->chgWData(oldp+2312,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
        bufp->chgWData(oldp+2316,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
        bufp->chgWData(oldp+2320,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
        bufp->chgWData(oldp+2324,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
        bufp->chgWData(oldp+2328,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
        bufp->chgWData(oldp+2332,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
        bufp->chgWData(oldp+2336,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
        bufp->chgWData(oldp+2340,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
        bufp->chgWData(oldp+2344,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
        bufp->chgWData(oldp+2348,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
        bufp->chgWData(oldp+2352,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
        bufp->chgWData(oldp+2356,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
        bufp->chgWData(oldp+2360,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
        bufp->chgWData(oldp+2364,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
        bufp->chgWData(oldp+2368,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
        bufp->chgWData(oldp+2372,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
        bufp->chgWData(oldp+2376,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
        bufp->chgWData(oldp+2380,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
        bufp->chgWData(oldp+2384,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
        bufp->chgWData(oldp+2388,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
        bufp->chgWData(oldp+2392,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
        bufp->chgWData(oldp+2396,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
        bufp->chgWData(oldp+2400,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
        bufp->chgWData(oldp+2404,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
        bufp->chgWData(oldp+2408,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
        bufp->chgWData(oldp+2412,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
        bufp->chgWData(oldp+2416,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
        bufp->chgWData(oldp+2420,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
        bufp->chgWData(oldp+2424,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
        bufp->chgWData(oldp+2428,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
        bufp->chgWData(oldp+2432,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
        bufp->chgWData(oldp+2436,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
        bufp->chgWData(oldp+2440,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
        bufp->chgWData(oldp+2444,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
        bufp->chgWData(oldp+2448,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
        bufp->chgWData(oldp+2452,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
        bufp->chgWData(oldp+2456,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
        bufp->chgWData(oldp+2460,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
        bufp->chgWData(oldp+2464,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
        bufp->chgWData(oldp+2468,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
        bufp->chgWData(oldp+2472,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
        bufp->chgWData(oldp+2476,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
        bufp->chgWData(oldp+2480,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
        bufp->chgWData(oldp+2484,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
        bufp->chgWData(oldp+2488,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
        bufp->chgWData(oldp+2492,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
        bufp->chgWData(oldp+2496,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
        bufp->chgWData(oldp+2500,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
        bufp->chgWData(oldp+2504,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
        bufp->chgWData(oldp+2508,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
        bufp->chgWData(oldp+2512,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
        bufp->chgWData(oldp+2516,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
        bufp->chgWData(oldp+2520,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
        bufp->chgWData(oldp+2524,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
        bufp->chgWData(oldp+2528,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
        bufp->chgWData(oldp+2532,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
        bufp->chgWData(oldp+2536,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
        bufp->chgWData(oldp+2540,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
        bufp->chgWData(oldp+2544,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
        bufp->chgWData(oldp+2548,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
        bufp->chgWData(oldp+2552,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
        bufp->chgWData(oldp+2556,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
        bufp->chgWData(oldp+2560,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
        bufp->chgWData(oldp+2564,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
        bufp->chgWData(oldp+2568,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
        bufp->chgWData(oldp+2572,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
        bufp->chgWData(oldp+2576,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
        bufp->chgWData(oldp+2580,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
        bufp->chgWData(oldp+2584,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
        bufp->chgWData(oldp+2588,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
        bufp->chgWData(oldp+2592,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
        bufp->chgWData(oldp+2596,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
        bufp->chgWData(oldp+2600,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
        bufp->chgWData(oldp+2604,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
        bufp->chgWData(oldp+2608,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
        bufp->chgWData(oldp+2612,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
        bufp->chgWData(oldp+2616,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
        bufp->chgWData(oldp+2620,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
        bufp->chgWData(oldp+2624,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
        bufp->chgWData(oldp+2628,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
        bufp->chgWData(oldp+2632,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
        bufp->chgWData(oldp+2636,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
        bufp->chgWData(oldp+2640,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
        bufp->chgWData(oldp+2644,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
        bufp->chgWData(oldp+2648,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
        bufp->chgWData(oldp+2652,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
        bufp->chgWData(oldp+2656,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
        bufp->chgWData(oldp+2660,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
        bufp->chgWData(oldp+2664,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
        bufp->chgWData(oldp+2668,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
        bufp->chgWData(oldp+2672,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
        bufp->chgWData(oldp+2676,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
        bufp->chgWData(oldp+2680,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
        bufp->chgWData(oldp+2684,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
        bufp->chgWData(oldp+2688,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
        bufp->chgWData(oldp+2692,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
        bufp->chgWData(oldp+2696,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
        bufp->chgWData(oldp+2700,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
        bufp->chgWData(oldp+2704,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
        bufp->chgWData(oldp+2708,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
        bufp->chgWData(oldp+2712,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
        bufp->chgWData(oldp+2716,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
        bufp->chgWData(oldp+2720,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
        bufp->chgWData(oldp+2724,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
        bufp->chgWData(oldp+2728,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
        bufp->chgWData(oldp+2732,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
        bufp->chgWData(oldp+2736,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
        bufp->chgWData(oldp+2740,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
        bufp->chgWData(oldp+2744,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
        bufp->chgWData(oldp+2748,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
        bufp->chgWData(oldp+2752,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
        bufp->chgWData(oldp+2756,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
        bufp->chgWData(oldp+2760,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
        bufp->chgWData(oldp+2764,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
        bufp->chgWData(oldp+2768,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
        bufp->chgWData(oldp+2772,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
        bufp->chgWData(oldp+2776,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
        bufp->chgWData(oldp+2780,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
        bufp->chgWData(oldp+2784,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
        bufp->chgWData(oldp+2788,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
        bufp->chgWData(oldp+2792,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
        bufp->chgWData(oldp+2796,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
        bufp->chgWData(oldp+2800,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
        bufp->chgWData(oldp+2804,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
        bufp->chgWData(oldp+2808,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
        bufp->chgWData(oldp+2812,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
        bufp->chgWData(oldp+2816,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
        bufp->chgWData(oldp+2820,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
        bufp->chgWData(oldp+2824,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
        bufp->chgWData(oldp+2828,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
        bufp->chgWData(oldp+2832,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
        bufp->chgWData(oldp+2836,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
        bufp->chgWData(oldp+2840,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
        bufp->chgWData(oldp+2844,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
        bufp->chgWData(oldp+2848,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
        bufp->chgWData(oldp+2852,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
        bufp->chgWData(oldp+2856,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
        bufp->chgWData(oldp+2860,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
        bufp->chgWData(oldp+2864,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
        bufp->chgWData(oldp+2868,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
        bufp->chgWData(oldp+2872,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
        bufp->chgWData(oldp+2876,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
        bufp->chgWData(oldp+2880,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
        bufp->chgWData(oldp+2884,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
        bufp->chgWData(oldp+2888,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
        bufp->chgWData(oldp+2892,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
        bufp->chgWData(oldp+2896,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
        bufp->chgWData(oldp+2900,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
        bufp->chgWData(oldp+2904,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
        bufp->chgWData(oldp+2908,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
        bufp->chgWData(oldp+2912,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
        bufp->chgWData(oldp+2916,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
        bufp->chgWData(oldp+2920,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
        bufp->chgWData(oldp+2924,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
        bufp->chgWData(oldp+2928,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
        bufp->chgWData(oldp+2932,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
        bufp->chgWData(oldp+2936,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
        bufp->chgWData(oldp+2940,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
        bufp->chgWData(oldp+2944,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
        bufp->chgWData(oldp+2948,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
        bufp->chgWData(oldp+2952,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
        bufp->chgWData(oldp+2956,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
        bufp->chgWData(oldp+2960,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
        bufp->chgWData(oldp+2964,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
        bufp->chgWData(oldp+2968,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
        bufp->chgWData(oldp+2972,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
        bufp->chgWData(oldp+2976,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
        bufp->chgWData(oldp+2980,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
        bufp->chgWData(oldp+2984,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
        bufp->chgWData(oldp+2988,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
        bufp->chgWData(oldp+2992,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
        bufp->chgWData(oldp+2996,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
        bufp->chgWData(oldp+3000,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
        bufp->chgWData(oldp+3004,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
        bufp->chgWData(oldp+3008,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
        bufp->chgWData(oldp+3012,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
        bufp->chgWData(oldp+3016,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
        bufp->chgWData(oldp+3020,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
        bufp->chgWData(oldp+3024,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
        bufp->chgWData(oldp+3028,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
        bufp->chgWData(oldp+3032,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
        bufp->chgWData(oldp+3036,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
        bufp->chgWData(oldp+3040,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
        bufp->chgWData(oldp+3044,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
        bufp->chgWData(oldp+3048,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
        bufp->chgWData(oldp+3052,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
        bufp->chgWData(oldp+3056,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
        bufp->chgWData(oldp+3060,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
        bufp->chgWData(oldp+3064,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
        bufp->chgWData(oldp+3068,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
        bufp->chgWData(oldp+3072,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
        bufp->chgWData(oldp+3076,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
        bufp->chgWData(oldp+3080,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
        bufp->chgWData(oldp+3084,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
        bufp->chgWData(oldp+3088,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
        bufp->chgWData(oldp+3092,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
        bufp->chgWData(oldp+3096,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
        bufp->chgWData(oldp+3100,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
        bufp->chgWData(oldp+3104,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
        bufp->chgWData(oldp+3108,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
        bufp->chgWData(oldp+3112,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
        bufp->chgWData(oldp+3116,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
        bufp->chgWData(oldp+3120,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
        bufp->chgWData(oldp+3124,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
        bufp->chgWData(oldp+3128,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
        bufp->chgWData(oldp+3132,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
        bufp->chgWData(oldp+3136,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
        bufp->chgWData(oldp+3140,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
        bufp->chgWData(oldp+3144,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
        bufp->chgWData(oldp+3148,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
        bufp->chgWData(oldp+3152,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
        bufp->chgWData(oldp+3156,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
        bufp->chgWData(oldp+3160,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
        bufp->chgWData(oldp+3164,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
        bufp->chgWData(oldp+3168,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
    }
    bufp->chgBit(oldp+3172,(vlSelf->clock));
    bufp->chgBit(oldp+3173,(vlSelf->reset));
    bufp->chgQData(oldp+3174,(vlSelf->io_difftest_reg_0),64);
    bufp->chgQData(oldp+3176,(vlSelf->io_difftest_reg_1),64);
    bufp->chgQData(oldp+3178,(vlSelf->io_difftest_reg_2),64);
    bufp->chgQData(oldp+3180,(vlSelf->io_difftest_reg_3),64);
    bufp->chgQData(oldp+3182,(vlSelf->io_difftest_reg_4),64);
    bufp->chgQData(oldp+3184,(vlSelf->io_difftest_reg_5),64);
    bufp->chgQData(oldp+3186,(vlSelf->io_difftest_reg_6),64);
    bufp->chgQData(oldp+3188,(vlSelf->io_difftest_reg_7),64);
    bufp->chgQData(oldp+3190,(vlSelf->io_difftest_reg_8),64);
    bufp->chgQData(oldp+3192,(vlSelf->io_difftest_reg_9),64);
    bufp->chgQData(oldp+3194,(vlSelf->io_difftest_reg_10),64);
    bufp->chgQData(oldp+3196,(vlSelf->io_difftest_reg_11),64);
    bufp->chgQData(oldp+3198,(vlSelf->io_difftest_reg_12),64);
    bufp->chgQData(oldp+3200,(vlSelf->io_difftest_reg_13),64);
    bufp->chgQData(oldp+3202,(vlSelf->io_difftest_reg_14),64);
    bufp->chgQData(oldp+3204,(vlSelf->io_difftest_reg_15),64);
    bufp->chgQData(oldp+3206,(vlSelf->io_difftest_reg_16),64);
    bufp->chgQData(oldp+3208,(vlSelf->io_difftest_reg_17),64);
    bufp->chgQData(oldp+3210,(vlSelf->io_difftest_reg_18),64);
    bufp->chgQData(oldp+3212,(vlSelf->io_difftest_reg_19),64);
    bufp->chgQData(oldp+3214,(vlSelf->io_difftest_reg_20),64);
    bufp->chgQData(oldp+3216,(vlSelf->io_difftest_reg_21),64);
    bufp->chgQData(oldp+3218,(vlSelf->io_difftest_reg_22),64);
    bufp->chgQData(oldp+3220,(vlSelf->io_difftest_reg_23),64);
    bufp->chgQData(oldp+3222,(vlSelf->io_difftest_reg_24),64);
    bufp->chgQData(oldp+3224,(vlSelf->io_difftest_reg_25),64);
    bufp->chgQData(oldp+3226,(vlSelf->io_difftest_reg_26),64);
    bufp->chgQData(oldp+3228,(vlSelf->io_difftest_reg_27),64);
    bufp->chgQData(oldp+3230,(vlSelf->io_difftest_reg_28),64);
    bufp->chgQData(oldp+3232,(vlSelf->io_difftest_reg_29),64);
    bufp->chgQData(oldp+3234,(vlSelf->io_difftest_reg_30),64);
    bufp->chgQData(oldp+3236,(vlSelf->io_difftest_reg_31),64);
    bufp->chgQData(oldp+3238,(vlSelf->io_difftest_pc),64);
    bufp->chgIData(oldp+3240,(vlSelf->io_difftest_inst),32);
    bufp->chgBit(oldp+3241,(vlSelf->io_difftest_commit));
    bufp->chgQData(oldp+3242,(vlSelf->io_inst_counter),64);
    bufp->chgBit(oldp+3244,(vlSelf->io_difftest_irq));
    bufp->chgQData(oldp+3245,(vlSelf->io_difftest_mstatus),64);
    bufp->chgQData(oldp+3247,(vlSelf->io_difftest_mcause),64);
    bufp->chgQData(oldp+3249,(vlSelf->io_difftest_mepc),64);
    bufp->chgQData(oldp+3251,(vlSelf->io_difftest_mtvec),64);
    bufp->chgBit(oldp+3253,(vlSelf->io_difftest_peripheral));
}

void Vriscv_soc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_cleanup\n"); );
    // Init
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
