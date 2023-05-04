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
    VlWide<3>/*95:0*/ __Vtemp_h7850518b__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b945697__0;
    VlWide<4>/*127:0*/ __Vtemp_h83563b0d__0;
    VlWide<4>/*127:0*/ __Vtemp_hfddea7ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h6618c490__0;
    VlWide<3>/*95:0*/ __Vtemp_hf4336b3f__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__0;
    VlWide<3>/*95:0*/ __Vtemp_h346bf577__0;
    VlWide<3>/*95:0*/ __Vtemp_h28f9f554__0;
    VlWide<5>/*159:0*/ __Vtemp_hc2d336e7__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h2ede82b0__0;
    VlWide<5>/*159:0*/ __Vtemp_h67ea1177__0;
    VlWide<3>/*95:0*/ __Vtemp_h96ce2ff4__0;
    VlWide<3>/*95:0*/ __Vtemp_hee601f10__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__0;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__0;
    VlWide<5>/*159:0*/ __Vtemp_h83a42262__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__1;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__1;
    VlWide<5>/*159:0*/ __Vtemp_h00d757e1__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__2;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__2;
    VlWide<5>/*159:0*/ __Vtemp_hcd0c4155__0;
    VlWide<5>/*159:0*/ __Vtemp_h52802c7d__0;
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
        bufp->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_data),64);
        bufp->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_bits_rlast));
        bufp->chgCData(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram_addr),6);
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        bufp->chgBit(oldp+22,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        __Vtemp_h8800a5e4__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                            >> 0xaU));
        __Vtemp_h8800a5e4__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                             >> 0xaU) 
                                            >> 0x20U));
        __Vtemp_h8800a5e4__0[2U] = 0U;
        __Vtemp_h8800a5e4__0[3U] = 0U;
        bufp->chgWData(oldp+23,(__Vtemp_h8800a5e4__0),128);
        bufp->chgWData(oldp+27,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        bufp->chgWData(oldp+31,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
        bufp->chgWData(oldp+35,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
        bufp->chgWData(oldp+39,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
        bufp->chgWData(oldp+43,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
        bufp->chgCData(oldp+47,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram_addr),6);
        bufp->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        bufp->chgBit(oldp+49,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        __Vtemp_he557d9cd__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp_he557d9cd__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp_he557d9cd__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp_he557d9cd__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        bufp->chgWData(oldp+50,(__Vtemp_he557d9cd__0),128);
        __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                            >> 0x20U));
        __Vtemp_h5cafde3d__0[2U] = 0U;
        __Vtemp_h5cafde3d__0[3U] = 0U;
        bufp->chgWData(oldp+54,(__Vtemp_h5cafde3d__0),128);
        bufp->chgWData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        bufp->chgWData(oldp+62,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
        bufp->chgWData(oldp+66,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
        bufp->chgWData(oldp+70,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
        bufp->chgWData(oldp+74,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
        bufp->chgQData(oldp+78,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
        bufp->chgQData(oldp+80,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                  ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                  : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
        bufp->chgQData(oldp+82,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
        bufp->chgQData(oldp+84,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        bufp->chgQData(oldp+86,((((QData)((IData)((
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
        bufp->chgBit(oldp+88,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid) 
                               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
        bufp->chgQData(oldp+89,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        bufp->chgCData(oldp+91,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        bufp->chgBit(oldp+92,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        bufp->chgBit(oldp+93,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        bufp->chgIData(oldp+94,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
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
        bufp->chgIData(oldp+95,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
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
        bufp->chgBit(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush));
        bufp->chgBit(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        bufp->chgBit(oldp+98,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 0x1fU)) 
                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        bufp->chgQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        bufp->chgBit(oldp+101,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        bufp->chgBit(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        bufp->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        bufp->chgQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
        bufp->chgBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        bufp->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast));
        bufp->chgBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready));
        bufp->chgBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid));
        bufp->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        bufp->chgQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        bufp->chgQData(oldp+118,((((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        bufp->chgCData(oldp+120,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        bufp->chgBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        bufp->chgBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        bufp->chgBit(oldp+123,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        bufp->chgBit(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        bufp->chgQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        bufp->chgQData(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        bufp->chgBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        bufp->chgBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        bufp->chgBit(oldp+131,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        bufp->chgBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        bufp->chgQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
        bufp->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
        bufp->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
        bufp->chgBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        bufp->chgBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
        bufp->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        bufp->chgBit(oldp+141,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU))
                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready))));
        bufp->chgBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        bufp->chgBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        bufp->chgQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
        bufp->chgQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_pc),64);
        bufp->chgBit(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        bufp->chgQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
        bufp->chgBit(oldp+151,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                          >> 0x1fU))
                                 ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
        bufp->chgBit(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        bufp->chgQData(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        bufp->chgBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        bufp->chgBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        bufp->chgBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        bufp->chgQData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        bufp->chgBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        bufp->chgQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        bufp->chgBit(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        bufp->chgQData(oldp+164,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                   ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                       : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                               : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                   : 0ULL)),64);
        bufp->chgQData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        bufp->chgBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_flush));
        bufp->chgBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
        bufp->chgBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3));
        bufp->chgIData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
        bufp->chgQData(oldp+172,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                   : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                           : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
        bufp->chgBit(oldp+174,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                 : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                     : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                         : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
        bufp->chgBit(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        bufp->chgCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        bufp->chgCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        bufp->chgCData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        bufp->chgQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        bufp->chgCData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        bufp->chgQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        bufp->chgIData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        bufp->chgQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        bufp->chgIData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        bufp->chgCData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        bufp->chgBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        bufp->chgBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        bufp->chgSData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+194,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        bufp->chgBit(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        bufp->chgQData(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
        bufp->chgQData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
        bufp->chgQData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
        bufp->chgQData(oldp+202,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        bufp->chgBit(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        bufp->chgCData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        bufp->chgQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        bufp->chgBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en));
        bufp->chgSData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_is_exception));
        bufp->chgBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_time_irq));
        bufp->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_soft_irq));
        bufp->chgCData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        bufp->chgQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        bufp->chgQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        bufp->chgBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_commit));
        bufp->chgIData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        bufp->chgBit(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        bufp->chgCData(oldp+223,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0xfU))),5);
        bufp->chgQData(oldp+224,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
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
        bufp->chgCData(oldp+226,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))),5);
        bufp->chgQData(oldp+227,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
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
        bufp->chgSData(oldp+229,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+230,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
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
        bufp->chgQData(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        bufp->chgQData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        bufp->chgBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        bufp->chgBit(oldp+237,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        bufp->chgBit(oldp+238,((0x4000U == (0xffffU 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        bufp->chgCData(oldp+239,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        bufp->chgQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
        bufp->chgQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
        bufp->chgQData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
        bufp->chgQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
        bufp->chgQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
        bufp->chgQData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
        bufp->chgQData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
        bufp->chgQData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
        bufp->chgQData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
        bufp->chgQData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
        bufp->chgQData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
        bufp->chgQData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
        bufp->chgQData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
        bufp->chgQData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
        bufp->chgQData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
        bufp->chgQData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
        bufp->chgQData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
        bufp->chgQData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
        bufp->chgQData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
        bufp->chgQData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
        bufp->chgQData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
        bufp->chgQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
        bufp->chgQData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
        bufp->chgQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
        bufp->chgQData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
        bufp->chgQData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
        bufp->chgQData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
        bufp->chgQData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
        bufp->chgQData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
        bufp->chgQData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
        bufp->chgQData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
        bufp->chgQData(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
        bufp->chgBit(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        bufp->chgIData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        bufp->chgQData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        bufp->chgQData(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        bufp->chgBit(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        bufp->chgBit(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        bufp->chgBit(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        bufp->chgQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        bufp->chgQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        bufp->chgQData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        bufp->chgQData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        bufp->chgQData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        bufp->chgQData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        bufp->chgQData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        bufp->chgQData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        bufp->chgQData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        bufp->chgQData(oldp+331,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
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
        bufp->chgBit(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        bufp->chgCData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        bufp->chgCData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        bufp->chgCData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        bufp->chgBit(oldp+337,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        bufp->chgCData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        bufp->chgCData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        bufp->chgBit(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        bufp->chgBit(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        bufp->chgBit(oldp+342,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 0x1fU))));
        bufp->chgBit(oldp+343,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 0x1fU))));
        bufp->chgBit(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        bufp->chgQData(oldp+345,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                  >> 0xaU)),54);
        bufp->chgCData(oldp+347,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                   >> 4U)))),6);
        bufp->chgCData(oldp+348,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        bufp->chgCData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        bufp->chgQData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        bufp->chgCData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        bufp->chgBit(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        bufp->chgQData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        bufp->chgCData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        bufp->chgCData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        bufp->chgBit(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        bufp->chgSData(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        bufp->chgBit(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        bufp->chgQData(oldp+361,((((QData)((IData)(
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
        bufp->chgWData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        bufp->chgWData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        bufp->chgBit(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        bufp->chgBit(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        bufp->chgQData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        bufp->chgQData(oldp+377,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        bufp->chgQData(oldp+379,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        bufp->chgQData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        bufp->chgQData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        bufp->chgQData(oldp+385,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
        bufp->chgQData(oldp+387,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
        bufp->chgBit(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        bufp->chgBit(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        bufp->chgBit(oldp+391,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        bufp->chgBit(oldp+392,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        bufp->chgBit(oldp+393,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                              >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
        bufp->chgBit(oldp+394,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                              >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
        bufp->chgQData(oldp+395,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))),64);
        bufp->chgQData(oldp+397,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))),64);
        bufp->chgQData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        bufp->chgBit(oldp+401,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
        bufp->chgBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        bufp->chgCData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        bufp->chgBit(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        bufp->chgBit(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        bufp->chgBit(oldp+406,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        bufp->chgBit(oldp+407,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
        bufp->chgBit(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__or_hit));
        __Vtemp_h7850518b__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___temp_addr_T 
                                            << 4U));
        __Vtemp_h7850518b__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___temp_addr_T 
                                             << 4U) 
                                            >> 0x20U));
        __Vtemp_h7850518b__0[2U] = 0U;
        bufp->chgWData(oldp+409,(__Vtemp_h7850518b__0),67);
        bufp->chgCData(oldp+412,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+413,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
        bufp->chgCData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
        bufp->chgBit(oldp+416,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+417,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 0xeU))));
        bufp->chgBit(oldp+418,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 0xeU)))));
        bufp->chgCData(oldp+419,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xcU)))
                                   ? ((0x60U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xfU)) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))),7);
        bufp->chgCData(oldp+420,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xcU)))
                                   ? 0U : 5U)),3);
        bufp->chgBit(oldp+421,((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+422,(((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0xcU))) 
                                & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 0xeU)))));
        bufp->chgCData(oldp+423,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? 3U : 0xcU)),4);
        bufp->chgBit(oldp+424,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 5U)))));
        bufp->chgBit(oldp+425,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))));
        bufp->chgCData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
        bufp->chgCData(oldp+427,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                   : ((5U == (7U & 
                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xcU)))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
        bufp->chgCData(oldp+428,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? 6U : (((1U == 
                                             (7U & 
                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xcU))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0xcU))))
                                            ? 4U : 0xcU))),4);
        bufp->chgBit(oldp+429,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 5U))));
        bufp->chgCData(oldp+430,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? 0x4eU : 0x4aU)),7);
        bufp->chgCData(oldp+431,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? 2U : 0xcU)),4);
        bufp->chgBit(oldp+432,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 3U)))));
        bufp->chgCData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        bufp->chgBit(oldp+434,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                | ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                   | ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                      | ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                         & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                             ? (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 5U))
                                             : ((1U 
                                                 != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                                & ((0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0xcU))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)))))))))));
        bufp->chgBit(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
        bufp->chgBit(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
        bufp->chgBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        bufp->chgBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        bufp->chgBit(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
        bufp->chgQData(oldp+440,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                   : 0ULL)),64);
        bufp->chgBit(oldp+442,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
        bufp->chgQData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
        bufp->chgQData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data),64);
        bufp->chgQData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data),64);
        bufp->chgQData(oldp+449,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
        bufp->chgBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        bufp->chgQData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        bufp->chgBit(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        bufp->chgBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        bufp->chgBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        bufp->chgQData(oldp+457,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        bufp->chgBit(oldp+459,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        bufp->chgBit(oldp+460,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
        bufp->chgBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        bufp->chgQData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        bufp->chgBit(oldp+464,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                & (IData)(((0U != (0x1cU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
        bufp->chgQData(oldp+465,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        bufp->chgSData(oldp+467,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                   ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        bufp->chgBit(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        bufp->chgCData(oldp+469,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),6);
        bufp->chgBit(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        bufp->chgBit(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        bufp->chgCData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        bufp->chgBit(oldp+473,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        bufp->chgBit(oldp+474,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+475,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+476,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 3U))));
        bufp->chgCData(oldp+477,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                   ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
        bufp->chgBit(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        bufp->chgQData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        bufp->chgBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        bufp->chgBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        bufp->chgBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        bufp->chgBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        bufp->chgBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        bufp->chgBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        bufp->chgBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        bufp->chgBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        bufp->chgBit(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        bufp->chgBit(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        bufp->chgBit(oldp+491,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        bufp->chgQData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        bufp->chgQData(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        bufp->chgQData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
        bufp->chgBit(oldp+498,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U)))));
        bufp->chgQData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        bufp->chgBit(oldp+501,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 6U))));
        bufp->chgBit(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
        bufp->chgQData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        bufp->chgQData(oldp+505,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                   ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        bufp->chgWData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        bufp->chgBit(oldp+510,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        bufp->chgBit(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        bufp->chgCData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
        bufp->chgWData(oldp+513,(__Vtemp_hfddea7ef__0),127);
        bufp->chgQData(oldp+517,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                  >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+519,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+521,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                   ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                   : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                      >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
        bufp->chgQData(oldp+523,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
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
        bufp->chgBit(oldp+525,((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        bufp->chgBit(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        bufp->chgQData(oldp+527,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U));
        __Vtemp_h6618c490__0[2U] = 1U;
        bufp->chgWData(oldp+529,(__Vtemp_h6618c490__0),65);
        bufp->chgQData(oldp+532,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
            __Vtemp_hf4336b3f__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
            __Vtemp_hf4336b3f__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
            __Vtemp_hf4336b3f__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
        } else {
            __Vtemp_hf4336b3f__0[0U] = 0U;
            __Vtemp_hf4336b3f__0[1U] = 0U;
            __Vtemp_hf4336b3f__0[2U] = 0U;
        }
        bufp->chgWData(oldp+534,(__Vtemp_hf4336b3f__0),65);
        bufp->chgQData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        bufp->chgQData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
        bufp->chgBit(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
        bufp->chgBit(oldp+542,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
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
        bufp->chgQData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        bufp->chgQData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        bufp->chgCData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        bufp->chgBit(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        bufp->chgBit(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        bufp->chgCData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        bufp->chgBit(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        bufp->chgQData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        bufp->chgQData(oldp+554,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
        bufp->chgQData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        bufp->chgBit(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        bufp->chgQData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        bufp->chgWData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        bufp->chgBit(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        bufp->chgBit(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        bufp->chgQData(oldp+567,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        bufp->chgBit(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        bufp->chgQData(oldp+572,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        bufp->chgBit(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        bufp->chgBit(oldp+576,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U)))));
        bufp->chgWData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        bufp->chgWData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        bufp->chgWData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        bufp->chgWData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        bufp->chgWData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        bufp->chgWData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        bufp->chgWData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
        bufp->chgWData(oldp+598,(__Vtemp_h28f9f554__0),65);
        bufp->chgCData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        bufp->chgCData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        bufp->chgCData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) {
            __Vtemp_hc2d336e7__0[0U] = 0U;
            __Vtemp_hc2d336e7__0[1U] = 0U;
            __Vtemp_hc2d336e7__0[2U] = 0U;
            __Vtemp_hc2d336e7__0[3U] = 0U;
            __Vtemp_hc2d336e7__0[4U] = 0U;
        } else {
            __Vtemp_hc2d336e7__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_10[0U];
            __Vtemp_hc2d336e7__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_10[1U];
            __Vtemp_hc2d336e7__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_10[2U];
            __Vtemp_hc2d336e7__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_10[3U];
            __Vtemp_hc2d336e7__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_10[4U];
        }
        bufp->chgWData(oldp+604,(__Vtemp_hc2d336e7__0),132);
        bufp->chgBit(oldp+609,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                        | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                       | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp_h639dda77__1[0U] = 1U;
        __Vtemp_h639dda77__1[1U] = 0U;
        __Vtemp_h639dda77__1[2U] = 0U;
        __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
        bufp->chgBit(oldp+610,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                         ^ __Vtemp_h2ede82b0__0[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                           ^ __Vtemp_h2ede82b0__0[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                          ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
        bufp->chgBit(oldp+611,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
        bufp->chgBit(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        bufp->chgBit(oldp+613,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        bufp->chgBit(oldp+614,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                      >> 3U))));
        bufp->chgQData(oldp+615,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgQData(oldp+617,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+619,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U))));
        bufp->chgBit(oldp+620,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U))));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp_h67ea1177__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                   >> 0x1fU)))) {
                    __Vtemp_h67ea1177__0[1U] = 0xffffffffU;
                    __Vtemp_h67ea1177__0[2U] = 0xffffffffU;
                    __Vtemp_h67ea1177__0[3U] = 0xffffffffU;
                    __Vtemp_h67ea1177__0[4U] = 3U;
                } else {
                    __Vtemp_h67ea1177__0[1U] = 0U;
                    __Vtemp_h67ea1177__0[2U] = 0U;
                    __Vtemp_h67ea1177__0[3U] = 0U;
                    __Vtemp_h67ea1177__0[4U] = 0U;
                }
            } else if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp_h67ea1177__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
                __Vtemp_h67ea1177__0[1U] = (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                                    >> 0x20U));
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                   >> 0x3fU)))) {
                    __Vtemp_h67ea1177__0[2U] = 0xffffffffU;
                    __Vtemp_h67ea1177__0[3U] = 0xffffffffU;
                    __Vtemp_h67ea1177__0[4U] = 3U;
                } else {
                    __Vtemp_h67ea1177__0[2U] = 0U;
                    __Vtemp_h67ea1177__0[3U] = 0U;
                    __Vtemp_h67ea1177__0[4U] = 0U;
                }
            } else {
                __Vtemp_h67ea1177__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
                __Vtemp_h67ea1177__0[1U] = (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                                    >> 0x20U));
                __Vtemp_h67ea1177__0[2U] = 0U;
                __Vtemp_h67ea1177__0[3U] = 0U;
                __Vtemp_h67ea1177__0[4U] = 0U;
            }
        } else {
            __Vtemp_h67ea1177__0[0U] = 0U;
            __Vtemp_h67ea1177__0[1U] = 0U;
            __Vtemp_h67ea1177__0[2U] = 0U;
            __Vtemp_h67ea1177__0[3U] = 0U;
            __Vtemp_h67ea1177__0[4U] = 0U;
        }
        bufp->chgWData(oldp+621,(__Vtemp_h67ea1177__0),130);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
            __Vtemp_h96ce2ff4__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U];
            __Vtemp_h96ce2ff4__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U];
            __Vtemp_h96ce2ff4__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U];
        } else {
            __Vtemp_h96ce2ff4__0[0U] = 0U;
            __Vtemp_h96ce2ff4__0[1U] = 0U;
            __Vtemp_h96ce2ff4__0[2U] = 0U;
        }
        bufp->chgWData(oldp+626,(__Vtemp_h96ce2ff4__0),65);
        __Vtemp_hee601f10__0[0U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U]
                                      : 0U) << 1U);
        __Vtemp_hee601f10__0[1U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U]
                                       : 0U) >> 0x1fU) 
                                    | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U]
                                         : 0U) << 1U));
        __Vtemp_hee601f10__0[2U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) 
                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U]) 
                                     << 2U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                                  ? 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U]
                                                  : 0U) 
                                                >> 0x1fU) 
                                               | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U]
                                                    : 0U) 
                                                  << 1U)));
        bufp->chgWData(oldp+629,(__Vtemp_hee601f10__0),67);
        bufp->chgCData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        bufp->chgWData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        bufp->chgWData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        bufp->chgWData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        bufp->chgCData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
            __Vtemp_h52802c7d__0[0U] = __Vtemp_h83a42262__0[0U];
            __Vtemp_h52802c7d__0[1U] = __Vtemp_h83a42262__0[1U];
            __Vtemp_h52802c7d__0[2U] = __Vtemp_h83a42262__0[2U];
            __Vtemp_h52802c7d__0[3U] = __Vtemp_h83a42262__0[3U];
            __Vtemp_h52802c7d__0[4U] = (3U & __Vtemp_h83a42262__0[4U]);
        } else if ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_h52802c7d__0[0U] = __Vtemp_h00d757e1__0[0U];
            __Vtemp_h52802c7d__0[1U] = __Vtemp_h00d757e1__0[1U];
            __Vtemp_h52802c7d__0[2U] = __Vtemp_h00d757e1__0[2U];
            __Vtemp_h52802c7d__0[3U] = __Vtemp_h00d757e1__0[3U];
            __Vtemp_h52802c7d__0[4U] = (3U & __Vtemp_h00d757e1__0[4U]);
        } else if ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_h52802c7d__0[0U] = (__Vtemp_hcd0c4155__0[0U] 
                                        << 1U);
            __Vtemp_h52802c7d__0[1U] = ((__Vtemp_hcd0c4155__0[0U] 
                                         >> 0x1fU) 
                                        | (__Vtemp_hcd0c4155__0[1U] 
                                           << 1U));
            __Vtemp_h52802c7d__0[2U] = ((__Vtemp_hcd0c4155__0[1U] 
                                         >> 0x1fU) 
                                        | (__Vtemp_hcd0c4155__0[2U] 
                                           << 1U));
            __Vtemp_h52802c7d__0[3U] = ((__Vtemp_hcd0c4155__0[2U] 
                                         >> 0x1fU) 
                                        | (__Vtemp_hcd0c4155__0[3U] 
                                           << 1U));
            __Vtemp_h52802c7d__0[4U] = ((__Vtemp_hcd0c4155__0[3U] 
                                         >> 0x1fU) 
                                        | (6U & (__Vtemp_hcd0c4155__0[4U] 
                                                 << 1U)));
        } else if ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_h52802c7d__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                        << 1U);
            __Vtemp_h52802c7d__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                           << 1U));
            __Vtemp_h52802c7d__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                           << 1U));
            __Vtemp_h52802c7d__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                           << 1U));
            __Vtemp_h52802c7d__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                         >> 0x1fU) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                           << 1U));
        } else if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_h52802c7d__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp_h52802c7d__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp_h52802c7d__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp_h52802c7d__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp_h52802c7d__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else if ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
            __Vtemp_h52802c7d__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
            __Vtemp_h52802c7d__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
            __Vtemp_h52802c7d__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
            __Vtemp_h52802c7d__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
            __Vtemp_h52802c7d__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        } else {
            __Vtemp_h52802c7d__0[0U] = 0U;
            __Vtemp_h52802c7d__0[1U] = 0U;
            __Vtemp_h52802c7d__0[2U] = 0U;
            __Vtemp_h52802c7d__0[3U] = 0U;
            __Vtemp_h52802c7d__0[4U] = 0U;
        }
        bufp->chgWData(oldp+647,(__Vtemp_h52802c7d__0),131);
        bufp->chgCData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        bufp->chgBit(oldp+653,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                             >> 2U)))));
        bufp->chgBit(oldp+654,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        bufp->chgBit(oldp+655,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 4U))));
        bufp->chgQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        bufp->chgQData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        bufp->chgQData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        bufp->chgQData(oldp+662,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        bufp->chgBit(oldp+664,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+665,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+666,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+667,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+668,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))) 
                                | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        bufp->chgCData(oldp+669,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),4);
        bufp->chgBit(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        bufp->chgQData(oldp+671,(((0xffffffffffffff77ULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                                  | (QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                                 >> 7U)))
                                                      ? 0x88U
                                                      : 0x80U))))),64);
        bufp->chgBit(oldp+673,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
        bufp->chgIData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
        bufp->chgBit(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
        bufp->chgQData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        bufp->chgBit(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        bufp->chgBit(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        bufp->chgQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        bufp->chgCData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        bufp->chgCData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        bufp->chgQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        bufp->chgQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        bufp->chgQData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        bufp->chgQData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        bufp->chgBit(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        bufp->chgCData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        bufp->chgCData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        bufp->chgBit(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        bufp->chgBit(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        bufp->chgBit(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        bufp->chgBit(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        bufp->chgWData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
        bufp->chgWData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
        bufp->chgWData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
        bufp->chgWData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
        bufp->chgWData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
        bufp->chgWData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
        bufp->chgWData(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
        bufp->chgWData(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
        bufp->chgWData(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
        bufp->chgWData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
        bufp->chgWData(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
        bufp->chgWData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
        bufp->chgWData(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
        bufp->chgWData(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
        bufp->chgWData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
        bufp->chgWData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
        bufp->chgWData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
        bufp->chgWData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
        bufp->chgWData(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
        bufp->chgWData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
        bufp->chgWData(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
        bufp->chgWData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
        bufp->chgWData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
        bufp->chgWData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
        bufp->chgWData(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
        bufp->chgWData(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
        bufp->chgWData(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
        bufp->chgWData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
        bufp->chgWData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
        bufp->chgWData(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
        bufp->chgWData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
        bufp->chgWData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
        bufp->chgWData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
        bufp->chgWData(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
        bufp->chgWData(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
        bufp->chgWData(oldp+839,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
        bufp->chgWData(oldp+843,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
        bufp->chgWData(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
        bufp->chgWData(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
        bufp->chgWData(oldp+855,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
        bufp->chgWData(oldp+859,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
        bufp->chgWData(oldp+863,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
        bufp->chgWData(oldp+867,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
        bufp->chgWData(oldp+871,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
        bufp->chgWData(oldp+875,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
        bufp->chgWData(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
        bufp->chgWData(oldp+883,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
        bufp->chgWData(oldp+887,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
        bufp->chgWData(oldp+891,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
        bufp->chgWData(oldp+895,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
        bufp->chgWData(oldp+899,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
        bufp->chgWData(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
        bufp->chgWData(oldp+907,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
        bufp->chgWData(oldp+911,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
        bufp->chgWData(oldp+915,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
        bufp->chgWData(oldp+919,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
        bufp->chgWData(oldp+923,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
        bufp->chgWData(oldp+927,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
        bufp->chgWData(oldp+931,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
        bufp->chgWData(oldp+935,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
        bufp->chgWData(oldp+939,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
        bufp->chgWData(oldp+943,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
        bufp->chgWData(oldp+947,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
        bufp->chgWData(oldp+951,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
        bufp->chgQData(oldp+955,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
        bufp->chgQData(oldp+957,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
        bufp->chgQData(oldp+959,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
        bufp->chgQData(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
        bufp->chgQData(oldp+963,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
        bufp->chgQData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
        bufp->chgCData(oldp+967,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        bufp->chgCData(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        bufp->chgCData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        bufp->chgCData(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        bufp->chgCData(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        bufp->chgCData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        bufp->chgCData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        bufp->chgCData(oldp+974,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        bufp->chgCData(oldp+975,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        bufp->chgCData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        bufp->chgCData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        bufp->chgCData(oldp+978,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        bufp->chgCData(oldp+979,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        bufp->chgCData(oldp+980,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        bufp->chgCData(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        bufp->chgCData(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        bufp->chgCData(oldp+983,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        bufp->chgCData(oldp+984,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        bufp->chgCData(oldp+985,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        bufp->chgCData(oldp+986,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        bufp->chgCData(oldp+987,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        bufp->chgCData(oldp+988,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        bufp->chgCData(oldp+989,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        bufp->chgCData(oldp+990,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        bufp->chgCData(oldp+991,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        bufp->chgCData(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        bufp->chgCData(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        bufp->chgCData(oldp+994,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        bufp->chgCData(oldp+995,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        bufp->chgCData(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        bufp->chgCData(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        bufp->chgCData(oldp+998,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        bufp->chgCData(oldp+999,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        bufp->chgCData(oldp+1000,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        bufp->chgCData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        bufp->chgCData(oldp+1002,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        bufp->chgCData(oldp+1003,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        bufp->chgCData(oldp+1004,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        bufp->chgCData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        bufp->chgCData(oldp+1006,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        bufp->chgCData(oldp+1007,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        bufp->chgCData(oldp+1008,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        bufp->chgCData(oldp+1009,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        bufp->chgCData(oldp+1010,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        bufp->chgCData(oldp+1011,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        bufp->chgCData(oldp+1012,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        bufp->chgCData(oldp+1013,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        bufp->chgCData(oldp+1014,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        bufp->chgCData(oldp+1015,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        bufp->chgCData(oldp+1016,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        bufp->chgCData(oldp+1017,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        bufp->chgCData(oldp+1018,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        bufp->chgCData(oldp+1019,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        bufp->chgCData(oldp+1020,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        bufp->chgCData(oldp+1021,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        bufp->chgCData(oldp+1022,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        bufp->chgCData(oldp+1023,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        bufp->chgCData(oldp+1024,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        bufp->chgCData(oldp+1025,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        bufp->chgCData(oldp+1026,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        bufp->chgCData(oldp+1027,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        bufp->chgCData(oldp+1028,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        bufp->chgCData(oldp+1029,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        bufp->chgCData(oldp+1030,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        bufp->chgCData(oldp+1031,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        bufp->chgCData(oldp+1032,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                    >> 3U)))),6);
        __Vtemp_hc91b162c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
        __Vtemp_hc91b162c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
        __Vtemp_hc91b162c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
        __Vtemp_hc91b162c__0[3U] = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
        bufp->chgWData(oldp+1033,(__Vtemp_hc91b162c__0),123);
        bufp->chgCData(oldp+1037,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 3U)))),6);
        bufp->chgQData(oldp+1038,(((0xfffffffffffffeULL 
                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 8U)) | (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                             >> 2U))))))),56);
        bufp->chgBit(oldp+1040,((1U & (((0x3fU == (0x3fU 
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
        bufp->chgBit(oldp+1041,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                       >> 0x1aU))));
        bufp->chgQData(oldp+1042,((0xffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                       << 0x1eU) | 
                                      ((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                       >> 2U)))),56);
        bufp->chgQData(oldp+1044,((((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                                    >> 2U)))),64);
        bufp->chgCData(oldp+1046,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
        bufp->chgQData(oldp+1047,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        bufp->chgQData(oldp+1049,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        bufp->chgQData(oldp+1051,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        bufp->chgQData(oldp+1053,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        bufp->chgIData(oldp+1055,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        bufp->chgIData(oldp+1056,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        bufp->chgIData(oldp+1057,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        bufp->chgIData(oldp+1058,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        bufp->chgBit(oldp+1059,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        bufp->chgBit(oldp+1060,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        bufp->chgBit(oldp+1061,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        bufp->chgBit(oldp+1062,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        bufp->chgBit(oldp+1063,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        bufp->chgBit(oldp+1064,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        bufp->chgBit(oldp+1065,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        bufp->chgBit(oldp+1066,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        bufp->chgCData(oldp+1067,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        bufp->chgCData(oldp+1068,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        bufp->chgCData(oldp+1069,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        bufp->chgBit(oldp+1070,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        bufp->chgBit(oldp+1071,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        bufp->chgCData(oldp+1072,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                          + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                         - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        bufp->chgBit(oldp+1073,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        bufp->chgQData(oldp+1074,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        bufp->chgCData(oldp+1076,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        bufp->chgBit(oldp+1077,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        bufp->chgBit(oldp+1078,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        bufp->chgBit(oldp+1079,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
        bufp->chgWData(oldp+1080,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        bufp->chgWData(oldp+1084,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
        bufp->chgWData(oldp+1088,(__Vtemp_h96d8aca3__0),128);
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
        bufp->chgWData(oldp+1092,(__Vtemp_h0fce6913__0),128);
        bufp->chgBit(oldp+1096,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        bufp->chgBit(oldp+1097,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
        bufp->chgBit(oldp+1098,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        bufp->chgQData(oldp+1099,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+1101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        bufp->chgQData(oldp+1102,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                  >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
        bufp->chgBit(oldp+1104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        bufp->chgQData(oldp+1105,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                  >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
        bufp->chgBit(oldp+1107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        bufp->chgCData(oldp+1108,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                    >> 4U)))),6);
        bufp->chgBit(oldp+1109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        bufp->chgQData(oldp+1110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+1112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        bufp->chgBit(oldp+1114,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        bufp->chgBit(oldp+1115,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        bufp->chgBit(oldp+1116,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        bufp->chgQData(oldp+1117,((1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                             >> 4U))))),64);
        bufp->chgBit(oldp+1119,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        bufp->chgBit(oldp+1120,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        bufp->chgCData(oldp+1121,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        bufp->chgBit(oldp+1122,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        bufp->chgBit(oldp+1123,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        bufp->chgBit(oldp+1124,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                                 & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
        bufp->chgBit(oldp+1125,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        bufp->chgQData(oldp+1126,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                   >> 0xaU)),54);
        bufp->chgCData(oldp+1128,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 4U)))),6);
        bufp->chgCData(oldp+1129,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+1130,((0x3fffffffffffffULL 
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
        bufp->chgQData(oldp+1132,((0x3fffffffffffffULL 
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
        bufp->chgBit(oldp+1134,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        bufp->chgBit(oldp+1135,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        bufp->chgQData(oldp+1136,((0xfffffffffffffff0ULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        bufp->chgQData(oldp+1138,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                   >> 0xaU)),54);
        bufp->chgCData(oldp+1140,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+1141,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        bufp->chgBit(oldp+1143,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        bufp->chgQData(oldp+1144,((1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U))))),64);
        bufp->chgQData(oldp+1146,((~ (1ULL << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                          >> 4U)))))),64);
        bufp->chgCData(oldp+1148,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        bufp->chgQData(oldp+1149,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_and_neg_chose),64);
        bufp->chgQData(oldp+1151,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_or_chose),64);
        bufp->chgBit(oldp+1153,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0))));
        bufp->chgBit(oldp+1154,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))));
        bufp->chgBit(oldp+1155,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__hit_valid));
        bufp->chgBit(oldp+1156,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__is_hit));
        bufp->chgWData(oldp+1157,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
        bufp->chgWData(oldp+1161,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
        bufp->chgWData(oldp+1165,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
        bufp->chgWData(oldp+1169,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
        bufp->chgWData(oldp+1173,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
        bufp->chgWData(oldp+1177,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
        bufp->chgWData(oldp+1181,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
        bufp->chgWData(oldp+1185,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
        bufp->chgWData(oldp+1189,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
        bufp->chgWData(oldp+1193,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
        bufp->chgWData(oldp+1197,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
        bufp->chgWData(oldp+1201,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
        bufp->chgWData(oldp+1205,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
        bufp->chgWData(oldp+1209,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
        bufp->chgWData(oldp+1213,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
        bufp->chgWData(oldp+1217,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
        bufp->chgWData(oldp+1221,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
        bufp->chgWData(oldp+1225,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
        bufp->chgWData(oldp+1229,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
        bufp->chgWData(oldp+1233,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
        bufp->chgWData(oldp+1237,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
        bufp->chgWData(oldp+1241,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
        bufp->chgWData(oldp+1245,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
        bufp->chgWData(oldp+1249,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
        bufp->chgWData(oldp+1253,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
        bufp->chgWData(oldp+1257,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
        bufp->chgWData(oldp+1261,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
        bufp->chgWData(oldp+1265,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
        bufp->chgWData(oldp+1269,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
        bufp->chgWData(oldp+1273,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
        bufp->chgWData(oldp+1277,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
        bufp->chgWData(oldp+1281,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
        bufp->chgWData(oldp+1285,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
        bufp->chgWData(oldp+1289,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
        bufp->chgWData(oldp+1293,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
        bufp->chgWData(oldp+1297,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
        bufp->chgWData(oldp+1301,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
        bufp->chgWData(oldp+1305,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
        bufp->chgWData(oldp+1309,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
        bufp->chgWData(oldp+1313,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
        bufp->chgWData(oldp+1317,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
        bufp->chgWData(oldp+1321,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
        bufp->chgWData(oldp+1325,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
        bufp->chgWData(oldp+1329,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
        bufp->chgWData(oldp+1333,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
        bufp->chgWData(oldp+1337,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
        bufp->chgWData(oldp+1341,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
        bufp->chgWData(oldp+1345,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
        bufp->chgWData(oldp+1349,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
        bufp->chgWData(oldp+1353,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
        bufp->chgWData(oldp+1357,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
        bufp->chgWData(oldp+1361,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
        bufp->chgWData(oldp+1365,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
        bufp->chgWData(oldp+1369,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
        bufp->chgWData(oldp+1373,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
        bufp->chgWData(oldp+1377,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
        bufp->chgWData(oldp+1381,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
        bufp->chgWData(oldp+1385,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
        bufp->chgWData(oldp+1389,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
        bufp->chgWData(oldp+1393,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
        bufp->chgWData(oldp+1397,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
        bufp->chgWData(oldp+1401,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
        bufp->chgWData(oldp+1405,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
        bufp->chgWData(oldp+1409,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
        bufp->chgWData(oldp+1413,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
        bufp->chgWData(oldp+1417,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
        bufp->chgWData(oldp+1421,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
        bufp->chgWData(oldp+1425,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
        bufp->chgWData(oldp+1429,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
        bufp->chgWData(oldp+1433,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
        bufp->chgWData(oldp+1437,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
        bufp->chgWData(oldp+1441,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
        bufp->chgWData(oldp+1445,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
        bufp->chgWData(oldp+1449,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
        bufp->chgWData(oldp+1453,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
        bufp->chgWData(oldp+1457,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
        bufp->chgWData(oldp+1461,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
        bufp->chgWData(oldp+1465,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
        bufp->chgWData(oldp+1469,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
        bufp->chgWData(oldp+1473,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
        bufp->chgWData(oldp+1477,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
        bufp->chgWData(oldp+1481,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
        bufp->chgWData(oldp+1485,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
        bufp->chgWData(oldp+1489,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
        bufp->chgWData(oldp+1493,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
        bufp->chgWData(oldp+1497,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
        bufp->chgWData(oldp+1501,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
        bufp->chgWData(oldp+1505,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
        bufp->chgWData(oldp+1509,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
        bufp->chgWData(oldp+1513,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
        bufp->chgWData(oldp+1517,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
        bufp->chgWData(oldp+1521,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
        bufp->chgWData(oldp+1525,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
        bufp->chgWData(oldp+1529,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
        bufp->chgWData(oldp+1533,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
        bufp->chgWData(oldp+1537,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
        bufp->chgWData(oldp+1541,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
        bufp->chgWData(oldp+1545,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
        bufp->chgWData(oldp+1549,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
        bufp->chgWData(oldp+1553,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
        bufp->chgWData(oldp+1557,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
        bufp->chgWData(oldp+1561,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
        bufp->chgWData(oldp+1565,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
        bufp->chgWData(oldp+1569,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
        bufp->chgWData(oldp+1573,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
        bufp->chgWData(oldp+1577,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
        bufp->chgWData(oldp+1581,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
        bufp->chgWData(oldp+1585,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
        bufp->chgWData(oldp+1589,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
        bufp->chgWData(oldp+1593,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
        bufp->chgWData(oldp+1597,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
        bufp->chgWData(oldp+1601,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
        bufp->chgWData(oldp+1605,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
        bufp->chgWData(oldp+1609,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
        bufp->chgWData(oldp+1613,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
        bufp->chgWData(oldp+1617,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
        bufp->chgWData(oldp+1621,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
        bufp->chgWData(oldp+1625,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
        bufp->chgWData(oldp+1629,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
        bufp->chgWData(oldp+1633,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
        bufp->chgWData(oldp+1637,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
        bufp->chgWData(oldp+1641,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
        bufp->chgWData(oldp+1645,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
        bufp->chgWData(oldp+1649,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
        bufp->chgWData(oldp+1653,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
        bufp->chgWData(oldp+1657,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
        bufp->chgWData(oldp+1661,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
        bufp->chgWData(oldp+1665,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
        bufp->chgWData(oldp+1669,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
        bufp->chgWData(oldp+1673,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
        bufp->chgWData(oldp+1677,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
        bufp->chgWData(oldp+1681,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
        bufp->chgWData(oldp+1685,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
        bufp->chgWData(oldp+1689,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
        bufp->chgWData(oldp+1693,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
        bufp->chgWData(oldp+1697,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
        bufp->chgWData(oldp+1701,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
        bufp->chgWData(oldp+1705,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
        bufp->chgWData(oldp+1709,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
        bufp->chgWData(oldp+1713,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
        bufp->chgWData(oldp+1717,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
        bufp->chgWData(oldp+1721,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
        bufp->chgWData(oldp+1725,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
        bufp->chgWData(oldp+1729,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
        bufp->chgWData(oldp+1733,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
        bufp->chgWData(oldp+1737,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
        bufp->chgWData(oldp+1741,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
        bufp->chgWData(oldp+1745,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
        bufp->chgWData(oldp+1749,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
        bufp->chgWData(oldp+1753,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
        bufp->chgWData(oldp+1757,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
        bufp->chgWData(oldp+1761,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
        bufp->chgWData(oldp+1765,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
        bufp->chgWData(oldp+1769,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
        bufp->chgWData(oldp+1773,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
        bufp->chgWData(oldp+1777,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
        bufp->chgWData(oldp+1781,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
        bufp->chgWData(oldp+1785,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
        bufp->chgWData(oldp+1789,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
        bufp->chgWData(oldp+1793,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
        bufp->chgWData(oldp+1797,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
        bufp->chgWData(oldp+1801,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
        bufp->chgWData(oldp+1805,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
        bufp->chgWData(oldp+1809,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
        bufp->chgWData(oldp+1813,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
        bufp->chgWData(oldp+1817,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
        bufp->chgWData(oldp+1821,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
        bufp->chgWData(oldp+1825,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
        bufp->chgWData(oldp+1829,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
        bufp->chgWData(oldp+1833,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
        bufp->chgWData(oldp+1837,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
        bufp->chgWData(oldp+1841,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
        bufp->chgWData(oldp+1845,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
        bufp->chgWData(oldp+1849,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
        bufp->chgWData(oldp+1853,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
        bufp->chgWData(oldp+1857,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
        bufp->chgWData(oldp+1861,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
        bufp->chgWData(oldp+1865,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
        bufp->chgWData(oldp+1869,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
        bufp->chgWData(oldp+1873,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
        bufp->chgWData(oldp+1877,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
        bufp->chgWData(oldp+1881,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
        bufp->chgWData(oldp+1885,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
        bufp->chgWData(oldp+1889,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
        bufp->chgWData(oldp+1893,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
        bufp->chgWData(oldp+1897,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
        bufp->chgWData(oldp+1901,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
        bufp->chgWData(oldp+1905,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
        bufp->chgWData(oldp+1909,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
        bufp->chgWData(oldp+1913,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
        bufp->chgWData(oldp+1917,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
        bufp->chgWData(oldp+1921,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
        bufp->chgWData(oldp+1925,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
        bufp->chgWData(oldp+1929,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
        bufp->chgWData(oldp+1933,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
        bufp->chgWData(oldp+1937,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
        bufp->chgWData(oldp+1941,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
        bufp->chgWData(oldp+1945,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
        bufp->chgWData(oldp+1949,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
        bufp->chgWData(oldp+1953,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
        bufp->chgWData(oldp+1957,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
        bufp->chgWData(oldp+1961,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
        bufp->chgWData(oldp+1965,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
        bufp->chgWData(oldp+1969,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
        bufp->chgWData(oldp+1973,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
        bufp->chgWData(oldp+1977,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
        bufp->chgWData(oldp+1981,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
        bufp->chgWData(oldp+1985,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
        bufp->chgWData(oldp+1989,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
        bufp->chgWData(oldp+1993,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
        bufp->chgWData(oldp+1997,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
        bufp->chgWData(oldp+2001,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
        bufp->chgWData(oldp+2005,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
        bufp->chgWData(oldp+2009,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
        bufp->chgWData(oldp+2013,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
        bufp->chgWData(oldp+2017,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
        bufp->chgWData(oldp+2021,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
        bufp->chgWData(oldp+2025,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
        bufp->chgWData(oldp+2029,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
        bufp->chgWData(oldp+2033,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
        bufp->chgWData(oldp+2037,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
        bufp->chgWData(oldp+2041,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
        bufp->chgWData(oldp+2045,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
        bufp->chgWData(oldp+2049,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
        bufp->chgWData(oldp+2053,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
        bufp->chgWData(oldp+2057,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
        bufp->chgWData(oldp+2061,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
        bufp->chgWData(oldp+2065,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
        bufp->chgWData(oldp+2069,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
        bufp->chgWData(oldp+2073,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
        bufp->chgWData(oldp+2077,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
        bufp->chgWData(oldp+2081,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
        bufp->chgWData(oldp+2085,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
        bufp->chgWData(oldp+2089,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
        bufp->chgWData(oldp+2093,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
        bufp->chgWData(oldp+2097,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
        bufp->chgWData(oldp+2101,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
        bufp->chgWData(oldp+2105,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
        bufp->chgWData(oldp+2109,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
        bufp->chgWData(oldp+2113,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
        bufp->chgWData(oldp+2117,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
        bufp->chgWData(oldp+2121,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
        bufp->chgWData(oldp+2125,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
        bufp->chgWData(oldp+2129,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
        bufp->chgWData(oldp+2133,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
        bufp->chgWData(oldp+2137,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
        bufp->chgWData(oldp+2141,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
        bufp->chgWData(oldp+2145,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
        bufp->chgWData(oldp+2149,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
        bufp->chgWData(oldp+2153,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
        bufp->chgWData(oldp+2157,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
        bufp->chgWData(oldp+2161,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
        bufp->chgWData(oldp+2165,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
        bufp->chgWData(oldp+2169,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
        bufp->chgWData(oldp+2173,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
        bufp->chgWData(oldp+2177,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
        bufp->chgWData(oldp+2181,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
        bufp->chgWData(oldp+2185,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
        bufp->chgWData(oldp+2189,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
        bufp->chgWData(oldp+2193,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
        bufp->chgWData(oldp+2197,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
        bufp->chgWData(oldp+2201,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
        bufp->chgWData(oldp+2205,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
        bufp->chgWData(oldp+2209,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
        bufp->chgWData(oldp+2213,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
        bufp->chgWData(oldp+2217,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
        bufp->chgWData(oldp+2221,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
        bufp->chgWData(oldp+2225,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
        bufp->chgWData(oldp+2229,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
        bufp->chgWData(oldp+2233,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
        bufp->chgWData(oldp+2237,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
        bufp->chgWData(oldp+2241,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
        bufp->chgWData(oldp+2245,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
        bufp->chgWData(oldp+2249,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
        bufp->chgWData(oldp+2253,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
        bufp->chgWData(oldp+2257,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
        bufp->chgWData(oldp+2261,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
        bufp->chgWData(oldp+2265,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
        bufp->chgWData(oldp+2269,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
        bufp->chgWData(oldp+2273,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
        bufp->chgWData(oldp+2277,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
        bufp->chgWData(oldp+2281,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
        bufp->chgWData(oldp+2285,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
        bufp->chgWData(oldp+2289,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
        bufp->chgWData(oldp+2293,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
        bufp->chgWData(oldp+2297,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
        bufp->chgWData(oldp+2301,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
        bufp->chgWData(oldp+2305,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
        bufp->chgWData(oldp+2309,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
        bufp->chgWData(oldp+2313,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
        bufp->chgWData(oldp+2317,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
        bufp->chgWData(oldp+2321,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
        bufp->chgWData(oldp+2325,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
        bufp->chgWData(oldp+2329,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
        bufp->chgWData(oldp+2333,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
        bufp->chgWData(oldp+2337,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
        bufp->chgWData(oldp+2341,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
        bufp->chgWData(oldp+2345,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
        bufp->chgWData(oldp+2349,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
        bufp->chgWData(oldp+2353,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
        bufp->chgWData(oldp+2357,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
        bufp->chgWData(oldp+2361,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
        bufp->chgWData(oldp+2365,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
        bufp->chgWData(oldp+2369,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
        bufp->chgWData(oldp+2373,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
        bufp->chgWData(oldp+2377,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
        bufp->chgWData(oldp+2381,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
        bufp->chgWData(oldp+2385,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
        bufp->chgWData(oldp+2389,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
        bufp->chgWData(oldp+2393,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
        bufp->chgWData(oldp+2397,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
        bufp->chgWData(oldp+2401,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
        bufp->chgWData(oldp+2405,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
        bufp->chgWData(oldp+2409,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
        bufp->chgWData(oldp+2413,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
        bufp->chgWData(oldp+2417,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
        bufp->chgWData(oldp+2421,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
        bufp->chgWData(oldp+2425,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
        bufp->chgWData(oldp+2429,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
        bufp->chgWData(oldp+2433,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
        bufp->chgWData(oldp+2437,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
        bufp->chgWData(oldp+2441,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
        bufp->chgWData(oldp+2445,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
        bufp->chgWData(oldp+2449,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
        bufp->chgWData(oldp+2453,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
        bufp->chgWData(oldp+2457,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
        bufp->chgWData(oldp+2461,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
        bufp->chgWData(oldp+2465,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
        bufp->chgWData(oldp+2469,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
        bufp->chgWData(oldp+2473,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
        bufp->chgWData(oldp+2477,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
        bufp->chgWData(oldp+2481,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
        bufp->chgWData(oldp+2485,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
        bufp->chgWData(oldp+2489,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
        bufp->chgWData(oldp+2493,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
        bufp->chgWData(oldp+2497,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
        bufp->chgWData(oldp+2501,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
        bufp->chgWData(oldp+2505,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
        bufp->chgWData(oldp+2509,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
        bufp->chgWData(oldp+2513,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
        bufp->chgWData(oldp+2517,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
        bufp->chgWData(oldp+2521,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
        bufp->chgWData(oldp+2525,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
        bufp->chgWData(oldp+2529,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
        bufp->chgWData(oldp+2533,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
        bufp->chgWData(oldp+2537,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
        bufp->chgWData(oldp+2541,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
        bufp->chgWData(oldp+2545,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
        bufp->chgWData(oldp+2549,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
        bufp->chgWData(oldp+2553,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
        bufp->chgWData(oldp+2557,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
        bufp->chgWData(oldp+2561,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
        bufp->chgWData(oldp+2565,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
        bufp->chgWData(oldp+2569,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
        bufp->chgWData(oldp+2573,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
        bufp->chgWData(oldp+2577,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
        bufp->chgWData(oldp+2581,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
        bufp->chgWData(oldp+2585,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
        bufp->chgWData(oldp+2589,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
        bufp->chgWData(oldp+2593,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
        bufp->chgWData(oldp+2597,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
        bufp->chgWData(oldp+2601,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
        bufp->chgWData(oldp+2605,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
        bufp->chgWData(oldp+2609,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
        bufp->chgWData(oldp+2613,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
        bufp->chgWData(oldp+2617,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
        bufp->chgWData(oldp+2621,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
        bufp->chgWData(oldp+2625,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
        bufp->chgWData(oldp+2629,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
        bufp->chgWData(oldp+2633,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
        bufp->chgWData(oldp+2637,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
        bufp->chgWData(oldp+2641,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
        bufp->chgWData(oldp+2645,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
        bufp->chgWData(oldp+2649,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
        bufp->chgWData(oldp+2653,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
        bufp->chgWData(oldp+2657,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
        bufp->chgWData(oldp+2661,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
        bufp->chgWData(oldp+2665,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
        bufp->chgWData(oldp+2669,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
        bufp->chgWData(oldp+2673,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
        bufp->chgWData(oldp+2677,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
        bufp->chgWData(oldp+2681,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
        bufp->chgWData(oldp+2685,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
        bufp->chgWData(oldp+2689,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
        bufp->chgWData(oldp+2693,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
        bufp->chgWData(oldp+2697,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
        bufp->chgWData(oldp+2701,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
        bufp->chgWData(oldp+2705,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
        bufp->chgWData(oldp+2709,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
        bufp->chgWData(oldp+2713,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
        bufp->chgWData(oldp+2717,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
        bufp->chgWData(oldp+2721,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
        bufp->chgWData(oldp+2725,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
        bufp->chgWData(oldp+2729,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
        bufp->chgWData(oldp+2733,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
        bufp->chgWData(oldp+2737,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
        bufp->chgWData(oldp+2741,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
        bufp->chgWData(oldp+2745,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
        bufp->chgWData(oldp+2749,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
        bufp->chgWData(oldp+2753,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
        bufp->chgWData(oldp+2757,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
        bufp->chgWData(oldp+2761,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
        bufp->chgWData(oldp+2765,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
        bufp->chgWData(oldp+2769,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
        bufp->chgWData(oldp+2773,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
        bufp->chgWData(oldp+2777,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
        bufp->chgWData(oldp+2781,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
        bufp->chgWData(oldp+2785,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
        bufp->chgWData(oldp+2789,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
        bufp->chgWData(oldp+2793,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
        bufp->chgWData(oldp+2797,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
        bufp->chgWData(oldp+2801,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
        bufp->chgWData(oldp+2805,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
        bufp->chgWData(oldp+2809,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
        bufp->chgWData(oldp+2813,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
        bufp->chgWData(oldp+2817,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
        bufp->chgWData(oldp+2821,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
        bufp->chgWData(oldp+2825,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
        bufp->chgWData(oldp+2829,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
        bufp->chgWData(oldp+2833,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
        bufp->chgWData(oldp+2837,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
        bufp->chgWData(oldp+2841,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
        bufp->chgWData(oldp+2845,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
        bufp->chgWData(oldp+2849,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
        bufp->chgWData(oldp+2853,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
        bufp->chgWData(oldp+2857,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
        bufp->chgWData(oldp+2861,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
        bufp->chgWData(oldp+2865,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
        bufp->chgWData(oldp+2869,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
        bufp->chgWData(oldp+2873,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
        bufp->chgWData(oldp+2877,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
        bufp->chgWData(oldp+2881,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
        bufp->chgWData(oldp+2885,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
        bufp->chgWData(oldp+2889,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
        bufp->chgWData(oldp+2893,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
        bufp->chgWData(oldp+2897,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
        bufp->chgWData(oldp+2901,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
        bufp->chgWData(oldp+2905,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
        bufp->chgWData(oldp+2909,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
        bufp->chgWData(oldp+2913,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
        bufp->chgWData(oldp+2917,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
        bufp->chgWData(oldp+2921,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
        bufp->chgWData(oldp+2925,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
        bufp->chgWData(oldp+2929,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
        bufp->chgWData(oldp+2933,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
        bufp->chgWData(oldp+2937,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
        bufp->chgWData(oldp+2941,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
        bufp->chgWData(oldp+2945,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
        bufp->chgWData(oldp+2949,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
        bufp->chgWData(oldp+2953,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
        bufp->chgWData(oldp+2957,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
        bufp->chgWData(oldp+2961,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
        bufp->chgWData(oldp+2965,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
        bufp->chgWData(oldp+2969,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
        bufp->chgWData(oldp+2973,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
        bufp->chgWData(oldp+2977,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
        bufp->chgWData(oldp+2981,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
        bufp->chgWData(oldp+2985,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
        bufp->chgWData(oldp+2989,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
        bufp->chgWData(oldp+2993,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
        bufp->chgWData(oldp+2997,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
        bufp->chgWData(oldp+3001,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
        bufp->chgWData(oldp+3005,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
        bufp->chgWData(oldp+3009,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
        bufp->chgWData(oldp+3013,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
        bufp->chgWData(oldp+3017,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
        bufp->chgWData(oldp+3021,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
        bufp->chgWData(oldp+3025,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
        bufp->chgWData(oldp+3029,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
        bufp->chgWData(oldp+3033,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
        bufp->chgWData(oldp+3037,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
        bufp->chgWData(oldp+3041,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
        bufp->chgWData(oldp+3045,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
        bufp->chgWData(oldp+3049,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
        bufp->chgWData(oldp+3053,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
        bufp->chgWData(oldp+3057,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
        bufp->chgWData(oldp+3061,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
        bufp->chgWData(oldp+3065,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
        bufp->chgWData(oldp+3069,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
        bufp->chgWData(oldp+3073,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
        bufp->chgWData(oldp+3077,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
        bufp->chgWData(oldp+3081,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
        bufp->chgWData(oldp+3085,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
        bufp->chgWData(oldp+3089,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
        bufp->chgWData(oldp+3093,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
        bufp->chgWData(oldp+3097,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
        bufp->chgWData(oldp+3101,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
        bufp->chgWData(oldp+3105,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
        bufp->chgWData(oldp+3109,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
        bufp->chgWData(oldp+3113,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
        bufp->chgWData(oldp+3117,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
        bufp->chgWData(oldp+3121,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
        bufp->chgWData(oldp+3125,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
        bufp->chgWData(oldp+3129,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
        bufp->chgWData(oldp+3133,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
        bufp->chgWData(oldp+3137,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
        bufp->chgWData(oldp+3141,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
        bufp->chgWData(oldp+3145,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
        bufp->chgWData(oldp+3149,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
        bufp->chgWData(oldp+3153,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
        bufp->chgWData(oldp+3157,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
        bufp->chgWData(oldp+3161,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
        bufp->chgWData(oldp+3165,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
        bufp->chgWData(oldp+3169,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
        bufp->chgWData(oldp+3173,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
        bufp->chgWData(oldp+3177,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
        bufp->chgWData(oldp+3181,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
        bufp->chgWData(oldp+3185,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
        bufp->chgWData(oldp+3189,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
        bufp->chgWData(oldp+3193,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
        bufp->chgWData(oldp+3197,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
        bufp->chgWData(oldp+3201,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
    }
    bufp->chgBit(oldp+3205,(vlSelf->clock));
    bufp->chgBit(oldp+3206,(vlSelf->reset));
    bufp->chgQData(oldp+3207,(vlSelf->io_difftest_reg_0),64);
    bufp->chgQData(oldp+3209,(vlSelf->io_difftest_reg_1),64);
    bufp->chgQData(oldp+3211,(vlSelf->io_difftest_reg_2),64);
    bufp->chgQData(oldp+3213,(vlSelf->io_difftest_reg_3),64);
    bufp->chgQData(oldp+3215,(vlSelf->io_difftest_reg_4),64);
    bufp->chgQData(oldp+3217,(vlSelf->io_difftest_reg_5),64);
    bufp->chgQData(oldp+3219,(vlSelf->io_difftest_reg_6),64);
    bufp->chgQData(oldp+3221,(vlSelf->io_difftest_reg_7),64);
    bufp->chgQData(oldp+3223,(vlSelf->io_difftest_reg_8),64);
    bufp->chgQData(oldp+3225,(vlSelf->io_difftest_reg_9),64);
    bufp->chgQData(oldp+3227,(vlSelf->io_difftest_reg_10),64);
    bufp->chgQData(oldp+3229,(vlSelf->io_difftest_reg_11),64);
    bufp->chgQData(oldp+3231,(vlSelf->io_difftest_reg_12),64);
    bufp->chgQData(oldp+3233,(vlSelf->io_difftest_reg_13),64);
    bufp->chgQData(oldp+3235,(vlSelf->io_difftest_reg_14),64);
    bufp->chgQData(oldp+3237,(vlSelf->io_difftest_reg_15),64);
    bufp->chgQData(oldp+3239,(vlSelf->io_difftest_reg_16),64);
    bufp->chgQData(oldp+3241,(vlSelf->io_difftest_reg_17),64);
    bufp->chgQData(oldp+3243,(vlSelf->io_difftest_reg_18),64);
    bufp->chgQData(oldp+3245,(vlSelf->io_difftest_reg_19),64);
    bufp->chgQData(oldp+3247,(vlSelf->io_difftest_reg_20),64);
    bufp->chgQData(oldp+3249,(vlSelf->io_difftest_reg_21),64);
    bufp->chgQData(oldp+3251,(vlSelf->io_difftest_reg_22),64);
    bufp->chgQData(oldp+3253,(vlSelf->io_difftest_reg_23),64);
    bufp->chgQData(oldp+3255,(vlSelf->io_difftest_reg_24),64);
    bufp->chgQData(oldp+3257,(vlSelf->io_difftest_reg_25),64);
    bufp->chgQData(oldp+3259,(vlSelf->io_difftest_reg_26),64);
    bufp->chgQData(oldp+3261,(vlSelf->io_difftest_reg_27),64);
    bufp->chgQData(oldp+3263,(vlSelf->io_difftest_reg_28),64);
    bufp->chgQData(oldp+3265,(vlSelf->io_difftest_reg_29),64);
    bufp->chgQData(oldp+3267,(vlSelf->io_difftest_reg_30),64);
    bufp->chgQData(oldp+3269,(vlSelf->io_difftest_reg_31),64);
    bufp->chgQData(oldp+3271,(vlSelf->io_difftest_pc),64);
    bufp->chgIData(oldp+3273,(vlSelf->io_difftest_inst),32);
    bufp->chgBit(oldp+3274,(vlSelf->io_difftest_commit));
    bufp->chgQData(oldp+3275,(vlSelf->io_inst_counter),64);
    bufp->chgBit(oldp+3277,(vlSelf->io_difftest_irq));
    bufp->chgQData(oldp+3278,(vlSelf->io_difftest_mstatus),64);
    bufp->chgQData(oldp+3280,(vlSelf->io_difftest_mcause),64);
    bufp->chgQData(oldp+3282,(vlSelf->io_difftest_mepc),64);
    bufp->chgQData(oldp+3284,(vlSelf->io_difftest_mtvec),64);
    bufp->chgBit(oldp+3286,(vlSelf->io_difftest_peripheral));
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
