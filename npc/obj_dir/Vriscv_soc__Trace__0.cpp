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
    VlWide<3>/*95:0*/ __Vtemp_hf4336b3f__0;
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
        bufp->chgCData(oldp+405,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
        bufp->chgCData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
        bufp->chgBit(oldp+408,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+409,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 0xeU))));
        bufp->chgBit(oldp+410,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 0xeU)))));
        bufp->chgCData(oldp+411,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xcU)))
                                   ? ((0x60U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xfU)) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))),7);
        bufp->chgCData(oldp+412,(((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xcU)))
                                   ? 0U : 5U)),3);
        bufp->chgBit(oldp+413,((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+414,(((0U != (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                              >> 0xcU))) 
                                & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 0xeU)))));
        bufp->chgCData(oldp+415,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? 3U : 0xcU)),4);
        bufp->chgBit(oldp+416,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 5U)))));
        bufp->chgCData(oldp+417,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? 6U : (((1U == 
                                             (7U & 
                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xcU))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0xcU))))
                                            ? 4U : 0xcU))),4);
        bufp->chgBit(oldp+418,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 5U))));
        bufp->chgCData(oldp+419,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? 0x4fU : 0x4aU)),7);
        bufp->chgCData(oldp+420,(((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                   ? 2U : 0xcU)),4);
        bufp->chgBit(oldp+421,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 3U)))));
        bufp->chgCData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        bufp->chgBit(oldp+423,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                | ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                   | ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                      | ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                         | ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                            & ((0U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                ? (~ 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 5U))
                                                : (
                                                   (1U 
                                                    != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                                   & ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                           >> 0xcU))) 
                                                      & (6U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))))))))))));
        bufp->chgBit(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
        bufp->chgBit(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
        bufp->chgBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        bufp->chgBit(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        bufp->chgBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
        bufp->chgQData(oldp+429,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                   : 0ULL)),64);
        bufp->chgBit(oldp+431,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
        bufp->chgQData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
        bufp->chgQData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data),64);
        bufp->chgQData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data),64);
        bufp->chgQData(oldp+438,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
        bufp->chgBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        bufp->chgQData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        bufp->chgBit(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        bufp->chgBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        bufp->chgBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        bufp->chgQData(oldp+446,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        bufp->chgBit(oldp+448,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        bufp->chgBit(oldp+449,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
        bufp->chgBit(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        bufp->chgQData(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        bufp->chgBit(oldp+453,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                & (IData)(((0U != (0x1cU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
        bufp->chgQData(oldp+454,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        bufp->chgSData(oldp+456,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                   ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        bufp->chgBit(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        bufp->chgCData(oldp+458,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),6);
        bufp->chgBit(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        bufp->chgBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        bufp->chgCData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        bufp->chgBit(oldp+462,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        bufp->chgBit(oldp+463,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+464,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+465,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 3U))));
        bufp->chgCData(oldp+466,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                   ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
        bufp->chgBit(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        bufp->chgQData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        bufp->chgBit(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        bufp->chgBit(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        bufp->chgBit(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        bufp->chgBit(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        bufp->chgBit(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        bufp->chgBit(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        bufp->chgBit(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        bufp->chgBit(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        bufp->chgBit(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        bufp->chgBit(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        bufp->chgBit(oldp+480,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        bufp->chgQData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        bufp->chgQData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        bufp->chgQData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
        bufp->chgBit(oldp+487,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U)))));
        bufp->chgQData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        bufp->chgBit(oldp+490,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 6U))));
        bufp->chgBit(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
        bufp->chgQData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        bufp->chgQData(oldp+494,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                   ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        bufp->chgWData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        bufp->chgBit(oldp+499,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        bufp->chgBit(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        bufp->chgCData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
        bufp->chgWData(oldp+502,(__Vtemp_hfddea7ef__0),127);
        bufp->chgQData(oldp+506,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                  >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+508,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+510,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                   ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                   : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                      >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
        bufp->chgQData(oldp+512,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        bufp->chgBit(oldp+514,((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        bufp->chgBit(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        bufp->chgQData(oldp+516,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U));
        __Vtemp_h6618c490__0[2U] = 1U;
        bufp->chgWData(oldp+518,(__Vtemp_h6618c490__0),65);
        bufp->chgQData(oldp+521,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
            __Vtemp_hf4336b3f__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
            __Vtemp_hf4336b3f__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
            __Vtemp_hf4336b3f__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
        } else {
            __Vtemp_hf4336b3f__0[0U] = 0U;
            __Vtemp_hf4336b3f__0[1U] = 0U;
            __Vtemp_hf4336b3f__0[2U] = 0U;
        }
        bufp->chgWData(oldp+523,(__Vtemp_hf4336b3f__0),65);
        bufp->chgQData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        bufp->chgQData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
        bufp->chgBit(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
        bufp->chgBit(oldp+531,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
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
        bufp->chgQData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        bufp->chgQData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        bufp->chgCData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        bufp->chgBit(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        bufp->chgBit(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        bufp->chgCData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        bufp->chgQData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        bufp->chgQData(oldp+542,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
        bufp->chgQData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        bufp->chgBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        bufp->chgQData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        bufp->chgBit(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        bufp->chgWData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        bufp->chgBit(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        bufp->chgBit(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        bufp->chgQData(oldp+556,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        bufp->chgBit(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        bufp->chgQData(oldp+561,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        bufp->chgBit(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        bufp->chgBit(oldp+565,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U)))));
        bufp->chgWData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        bufp->chgWData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        bufp->chgWData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        bufp->chgWData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        bufp->chgWData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        bufp->chgWData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        bufp->chgWData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
        bufp->chgWData(oldp+587,(__Vtemp_h28f9f554__0),65);
        bufp->chgCData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        bufp->chgCData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        bufp->chgCData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        bufp->chgWData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        bufp->chgBit(oldp+598,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                        | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                       | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp_h639dda77__1[0U] = 1U;
        __Vtemp_h639dda77__1[1U] = 0U;
        __Vtemp_h639dda77__1[2U] = 0U;
        __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
        bufp->chgBit(oldp+599,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                         ^ __Vtemp_h2ede82b0__0[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                           ^ __Vtemp_h2ede82b0__0[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                          ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
        bufp->chgBit(oldp+600,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
        bufp->chgBit(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        bufp->chgBit(oldp+602,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        bufp->chgBit(oldp+603,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                      >> 3U))));
        bufp->chgQData(oldp+604,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgQData(oldp+606,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+608,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U))));
        bufp->chgBit(oldp+609,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        bufp->chgWData(oldp+610,(__Vtemp_h4bcec608__0),130);
        bufp->chgWData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
        bufp->chgWData(oldp+618,(__Vtemp_h3364f91c__0),67);
        bufp->chgCData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        bufp->chgWData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        bufp->chgWData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        bufp->chgWData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        bufp->chgCData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
        bufp->chgWData(oldp+636,(__Vtemp_hf484a493__0),131);
        bufp->chgCData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        bufp->chgBit(oldp+642,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                             >> 2U)))));
        bufp->chgBit(oldp+643,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        bufp->chgBit(oldp+644,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 4U))));
        bufp->chgQData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        bufp->chgQData(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        bufp->chgQData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        bufp->chgQData(oldp+651,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        bufp->chgBit(oldp+653,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+654,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+655,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+656,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+657,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))) 
                                | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        bufp->chgCData(oldp+658,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),4);
        bufp->chgBit(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        bufp->chgQData(oldp+660,(((0xffffffffffffff77ULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                                  | (QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                                 >> 7U)))
                                                      ? 0x88U
                                                      : 0x80U))))),64);
        bufp->chgBit(oldp+662,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
        bufp->chgIData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
        bufp->chgBit(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
        bufp->chgQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        bufp->chgBit(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        bufp->chgBit(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        bufp->chgQData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        bufp->chgCData(oldp+671,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        bufp->chgCData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        bufp->chgQData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        bufp->chgQData(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        bufp->chgQData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        bufp->chgQData(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        bufp->chgBit(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        bufp->chgCData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        bufp->chgCData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        bufp->chgBit(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        bufp->chgBit(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        bufp->chgBit(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        bufp->chgBit(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        bufp->chgWData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
        bufp->chgWData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
        bufp->chgWData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
        bufp->chgWData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
        bufp->chgWData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
        bufp->chgWData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
        bufp->chgWData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
        bufp->chgWData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
        bufp->chgWData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
        bufp->chgWData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
        bufp->chgWData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
        bufp->chgWData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
        bufp->chgWData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
        bufp->chgWData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
        bufp->chgWData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
        bufp->chgWData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
        bufp->chgWData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
        bufp->chgWData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
        bufp->chgWData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
        bufp->chgWData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
        bufp->chgWData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
        bufp->chgWData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
        bufp->chgWData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
        bufp->chgWData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
        bufp->chgWData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
        bufp->chgWData(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
        bufp->chgWData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
        bufp->chgWData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
        bufp->chgWData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
        bufp->chgWData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
        bufp->chgWData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
        bufp->chgWData(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
        bufp->chgWData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
        bufp->chgWData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
        bufp->chgWData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
        bufp->chgWData(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
        bufp->chgWData(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
        bufp->chgWData(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
        bufp->chgWData(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
        bufp->chgWData(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
        bufp->chgWData(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
        bufp->chgWData(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
        bufp->chgWData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
        bufp->chgWData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
        bufp->chgWData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
        bufp->chgWData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
        bufp->chgWData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
        bufp->chgWData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
        bufp->chgWData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
        bufp->chgWData(oldp+884,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
        bufp->chgWData(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
        bufp->chgWData(oldp+892,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
        bufp->chgWData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
        bufp->chgWData(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
        bufp->chgWData(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
        bufp->chgWData(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
        bufp->chgWData(oldp+912,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
        bufp->chgWData(oldp+916,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
        bufp->chgWData(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
        bufp->chgWData(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
        bufp->chgWData(oldp+928,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
        bufp->chgWData(oldp+932,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
        bufp->chgWData(oldp+936,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
        bufp->chgWData(oldp+940,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
        bufp->chgQData(oldp+944,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
        bufp->chgQData(oldp+946,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
        bufp->chgQData(oldp+948,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
        bufp->chgQData(oldp+950,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
        bufp->chgQData(oldp+952,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
        bufp->chgQData(oldp+954,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
        bufp->chgCData(oldp+956,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        bufp->chgCData(oldp+957,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        bufp->chgCData(oldp+958,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        bufp->chgCData(oldp+959,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        bufp->chgCData(oldp+960,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        bufp->chgCData(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        bufp->chgCData(oldp+962,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        bufp->chgCData(oldp+963,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        bufp->chgCData(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        bufp->chgCData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        bufp->chgCData(oldp+966,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        bufp->chgCData(oldp+967,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        bufp->chgCData(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        bufp->chgCData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        bufp->chgCData(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        bufp->chgCData(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        bufp->chgCData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        bufp->chgCData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        bufp->chgCData(oldp+974,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        bufp->chgCData(oldp+975,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        bufp->chgCData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        bufp->chgCData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        bufp->chgCData(oldp+978,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        bufp->chgCData(oldp+979,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        bufp->chgCData(oldp+980,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        bufp->chgCData(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        bufp->chgCData(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        bufp->chgCData(oldp+983,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        bufp->chgCData(oldp+984,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        bufp->chgCData(oldp+985,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        bufp->chgCData(oldp+986,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        bufp->chgCData(oldp+987,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        bufp->chgCData(oldp+988,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        bufp->chgCData(oldp+989,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        bufp->chgCData(oldp+990,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        bufp->chgCData(oldp+991,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        bufp->chgCData(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        bufp->chgCData(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        bufp->chgCData(oldp+994,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        bufp->chgCData(oldp+995,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        bufp->chgCData(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        bufp->chgCData(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        bufp->chgCData(oldp+998,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        bufp->chgCData(oldp+999,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        bufp->chgCData(oldp+1000,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        bufp->chgCData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        bufp->chgCData(oldp+1002,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        bufp->chgCData(oldp+1003,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        bufp->chgCData(oldp+1004,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        bufp->chgCData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        bufp->chgCData(oldp+1006,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        bufp->chgCData(oldp+1007,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        bufp->chgCData(oldp+1008,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        bufp->chgCData(oldp+1009,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        bufp->chgCData(oldp+1010,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        bufp->chgCData(oldp+1011,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        bufp->chgCData(oldp+1012,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        bufp->chgCData(oldp+1013,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        bufp->chgCData(oldp+1014,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        bufp->chgCData(oldp+1015,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        bufp->chgCData(oldp+1016,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        bufp->chgCData(oldp+1017,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        bufp->chgCData(oldp+1018,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        bufp->chgCData(oldp+1019,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        bufp->chgCData(oldp+1020,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        bufp->chgCData(oldp+1021,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                    >> 3U)))),6);
        __Vtemp_hc91b162c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
        __Vtemp_hc91b162c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
        __Vtemp_hc91b162c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
        __Vtemp_hc91b162c__0[3U] = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
        bufp->chgWData(oldp+1022,(__Vtemp_hc91b162c__0),123);
        bufp->chgCData(oldp+1026,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 3U)))),6);
        bufp->chgQData(oldp+1027,(((0xfffffffffffffeULL 
                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 8U)) | (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                             >> 2U))))))),56);
        bufp->chgBit(oldp+1029,((1U & (((0x3fU == (0x3fU 
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
        bufp->chgBit(oldp+1030,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                       >> 0x1aU))));
        bufp->chgQData(oldp+1031,((0xffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                       << 0x1eU) | 
                                      ((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                       >> 2U)))),56);
        bufp->chgQData(oldp+1033,((((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                                    >> 2U)))),64);
        bufp->chgCData(oldp+1035,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
        bufp->chgQData(oldp+1036,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        bufp->chgQData(oldp+1038,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        bufp->chgQData(oldp+1040,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        bufp->chgQData(oldp+1042,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        bufp->chgIData(oldp+1044,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        bufp->chgIData(oldp+1045,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        bufp->chgIData(oldp+1046,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        bufp->chgIData(oldp+1047,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        bufp->chgBit(oldp+1048,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        bufp->chgBit(oldp+1049,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        bufp->chgBit(oldp+1050,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        bufp->chgBit(oldp+1051,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        bufp->chgBit(oldp+1052,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        bufp->chgBit(oldp+1053,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        bufp->chgBit(oldp+1054,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        bufp->chgBit(oldp+1055,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        bufp->chgCData(oldp+1056,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        bufp->chgCData(oldp+1057,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        bufp->chgCData(oldp+1058,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        bufp->chgBit(oldp+1059,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        bufp->chgBit(oldp+1060,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        bufp->chgCData(oldp+1061,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                          + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                         - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        bufp->chgBit(oldp+1062,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        bufp->chgQData(oldp+1063,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        bufp->chgCData(oldp+1065,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        bufp->chgBit(oldp+1066,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        bufp->chgBit(oldp+1067,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        bufp->chgBit(oldp+1068,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
        bufp->chgWData(oldp+1069,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        bufp->chgWData(oldp+1073,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
        bufp->chgWData(oldp+1077,(__Vtemp_h96d8aca3__0),128);
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
        bufp->chgWData(oldp+1081,(__Vtemp_h0fce6913__0),128);
        bufp->chgBit(oldp+1085,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        bufp->chgBit(oldp+1086,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
        bufp->chgBit(oldp+1087,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        bufp->chgQData(oldp+1088,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+1090,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        bufp->chgQData(oldp+1091,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                  >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
        bufp->chgBit(oldp+1093,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        bufp->chgQData(oldp+1094,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                  >> 3U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
        bufp->chgBit(oldp+1096,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        bufp->chgCData(oldp+1097,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                    >> 4U)))),6);
        bufp->chgBit(oldp+1098,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        bufp->chgQData(oldp+1099,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+1101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        bufp->chgBit(oldp+1103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        bufp->chgBit(oldp+1104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        bufp->chgBit(oldp+1105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        bufp->chgQData(oldp+1106,((1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                             >> 4U))))),64);
        bufp->chgBit(oldp+1108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        bufp->chgBit(oldp+1109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        bufp->chgCData(oldp+1110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        bufp->chgBit(oldp+1111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        bufp->chgBit(oldp+1112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        bufp->chgBit(oldp+1113,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                                 & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
        bufp->chgBit(oldp+1114,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        bufp->chgQData(oldp+1115,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                   >> 0xaU)),54);
        bufp->chgCData(oldp+1117,((0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                    >> 4U)))),6);
        bufp->chgCData(oldp+1118,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+1119,((0x3fffffffffffffULL 
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
        bufp->chgQData(oldp+1121,((0x3fffffffffffffULL 
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
        bufp->chgBit(oldp+1123,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        bufp->chgBit(oldp+1124,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        bufp->chgQData(oldp+1125,((0xfffffffffffffff0ULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        bufp->chgQData(oldp+1127,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                   >> 0xaU)),54);
        bufp->chgCData(oldp+1129,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+1130,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        bufp->chgBit(oldp+1132,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        bufp->chgQData(oldp+1133,((1ULL << (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U))))),64);
        bufp->chgQData(oldp+1135,((~ (1ULL << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                          >> 4U)))))),64);
        bufp->chgCData(oldp+1137,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        bufp->chgWData(oldp+1138,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
        bufp->chgWData(oldp+1142,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
        bufp->chgWData(oldp+1146,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
        bufp->chgWData(oldp+1150,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
        bufp->chgWData(oldp+1154,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
        bufp->chgWData(oldp+1158,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
        bufp->chgWData(oldp+1162,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
        bufp->chgWData(oldp+1166,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
        bufp->chgWData(oldp+1170,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
        bufp->chgWData(oldp+1174,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
        bufp->chgWData(oldp+1178,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
        bufp->chgWData(oldp+1182,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
        bufp->chgWData(oldp+1186,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
        bufp->chgWData(oldp+1190,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
        bufp->chgWData(oldp+1194,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
        bufp->chgWData(oldp+1198,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
        bufp->chgWData(oldp+1202,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
        bufp->chgWData(oldp+1206,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
        bufp->chgWData(oldp+1210,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
        bufp->chgWData(oldp+1214,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
        bufp->chgWData(oldp+1218,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
        bufp->chgWData(oldp+1222,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
        bufp->chgWData(oldp+1226,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
        bufp->chgWData(oldp+1230,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
        bufp->chgWData(oldp+1234,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
        bufp->chgWData(oldp+1238,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
        bufp->chgWData(oldp+1242,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
        bufp->chgWData(oldp+1246,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
        bufp->chgWData(oldp+1250,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
        bufp->chgWData(oldp+1254,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
        bufp->chgWData(oldp+1258,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
        bufp->chgWData(oldp+1262,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
        bufp->chgWData(oldp+1266,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
        bufp->chgWData(oldp+1270,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
        bufp->chgWData(oldp+1274,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
        bufp->chgWData(oldp+1278,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
        bufp->chgWData(oldp+1282,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
        bufp->chgWData(oldp+1286,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
        bufp->chgWData(oldp+1290,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
        bufp->chgWData(oldp+1294,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
        bufp->chgWData(oldp+1298,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
        bufp->chgWData(oldp+1302,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
        bufp->chgWData(oldp+1306,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
        bufp->chgWData(oldp+1310,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
        bufp->chgWData(oldp+1314,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
        bufp->chgWData(oldp+1318,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
        bufp->chgWData(oldp+1322,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
        bufp->chgWData(oldp+1326,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
        bufp->chgWData(oldp+1330,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
        bufp->chgWData(oldp+1334,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
        bufp->chgWData(oldp+1338,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
        bufp->chgWData(oldp+1342,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
        bufp->chgWData(oldp+1346,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
        bufp->chgWData(oldp+1350,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
        bufp->chgWData(oldp+1354,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
        bufp->chgWData(oldp+1358,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
        bufp->chgWData(oldp+1362,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
        bufp->chgWData(oldp+1366,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
        bufp->chgWData(oldp+1370,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
        bufp->chgWData(oldp+1374,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
        bufp->chgWData(oldp+1378,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
        bufp->chgWData(oldp+1382,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
        bufp->chgWData(oldp+1386,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
        bufp->chgWData(oldp+1390,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
        bufp->chgWData(oldp+1394,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
        bufp->chgWData(oldp+1398,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
        bufp->chgWData(oldp+1402,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
        bufp->chgWData(oldp+1406,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
        bufp->chgWData(oldp+1410,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
        bufp->chgWData(oldp+1414,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
        bufp->chgWData(oldp+1418,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
        bufp->chgWData(oldp+1422,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
        bufp->chgWData(oldp+1426,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
        bufp->chgWData(oldp+1430,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
        bufp->chgWData(oldp+1434,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
        bufp->chgWData(oldp+1438,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
        bufp->chgWData(oldp+1442,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
        bufp->chgWData(oldp+1446,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
        bufp->chgWData(oldp+1450,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
        bufp->chgWData(oldp+1454,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
        bufp->chgWData(oldp+1458,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
        bufp->chgWData(oldp+1462,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
        bufp->chgWData(oldp+1466,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
        bufp->chgWData(oldp+1470,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
        bufp->chgWData(oldp+1474,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
        bufp->chgWData(oldp+1478,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
        bufp->chgWData(oldp+1482,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
        bufp->chgWData(oldp+1486,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
        bufp->chgWData(oldp+1490,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
        bufp->chgWData(oldp+1494,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
        bufp->chgWData(oldp+1498,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
        bufp->chgWData(oldp+1502,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
        bufp->chgWData(oldp+1506,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
        bufp->chgWData(oldp+1510,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
        bufp->chgWData(oldp+1514,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
        bufp->chgWData(oldp+1518,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
        bufp->chgWData(oldp+1522,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
        bufp->chgWData(oldp+1526,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
        bufp->chgWData(oldp+1530,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
        bufp->chgWData(oldp+1534,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
        bufp->chgWData(oldp+1538,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
        bufp->chgWData(oldp+1542,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
        bufp->chgWData(oldp+1546,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
        bufp->chgWData(oldp+1550,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
        bufp->chgWData(oldp+1554,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
        bufp->chgWData(oldp+1558,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
        bufp->chgWData(oldp+1562,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
        bufp->chgWData(oldp+1566,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
        bufp->chgWData(oldp+1570,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
        bufp->chgWData(oldp+1574,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
        bufp->chgWData(oldp+1578,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
        bufp->chgWData(oldp+1582,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
        bufp->chgWData(oldp+1586,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
        bufp->chgWData(oldp+1590,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
        bufp->chgWData(oldp+1594,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
        bufp->chgWData(oldp+1598,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
        bufp->chgWData(oldp+1602,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
        bufp->chgWData(oldp+1606,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
        bufp->chgWData(oldp+1610,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
        bufp->chgWData(oldp+1614,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
        bufp->chgWData(oldp+1618,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
        bufp->chgWData(oldp+1622,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
        bufp->chgWData(oldp+1626,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
        bufp->chgWData(oldp+1630,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
        bufp->chgWData(oldp+1634,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
        bufp->chgWData(oldp+1638,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
        bufp->chgWData(oldp+1642,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
        bufp->chgWData(oldp+1646,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
        bufp->chgWData(oldp+1650,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
        bufp->chgWData(oldp+1654,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
        bufp->chgWData(oldp+1658,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
        bufp->chgWData(oldp+1662,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
        bufp->chgWData(oldp+1666,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
        bufp->chgWData(oldp+1670,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
        bufp->chgWData(oldp+1674,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
        bufp->chgWData(oldp+1678,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
        bufp->chgWData(oldp+1682,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
        bufp->chgWData(oldp+1686,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
        bufp->chgWData(oldp+1690,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
        bufp->chgWData(oldp+1694,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
        bufp->chgWData(oldp+1698,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
        bufp->chgWData(oldp+1702,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
        bufp->chgWData(oldp+1706,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
        bufp->chgWData(oldp+1710,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
        bufp->chgWData(oldp+1714,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
        bufp->chgWData(oldp+1718,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
        bufp->chgWData(oldp+1722,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
        bufp->chgWData(oldp+1726,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
        bufp->chgWData(oldp+1730,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
        bufp->chgWData(oldp+1734,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
        bufp->chgWData(oldp+1738,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
        bufp->chgWData(oldp+1742,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
        bufp->chgWData(oldp+1746,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
        bufp->chgWData(oldp+1750,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
        bufp->chgWData(oldp+1754,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
        bufp->chgWData(oldp+1758,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
        bufp->chgWData(oldp+1762,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
        bufp->chgWData(oldp+1766,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
        bufp->chgWData(oldp+1770,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
        bufp->chgWData(oldp+1774,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
        bufp->chgWData(oldp+1778,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
        bufp->chgWData(oldp+1782,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
        bufp->chgWData(oldp+1786,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
        bufp->chgWData(oldp+1790,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
        bufp->chgWData(oldp+1794,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
        bufp->chgWData(oldp+1798,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
        bufp->chgWData(oldp+1802,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
        bufp->chgWData(oldp+1806,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
        bufp->chgWData(oldp+1810,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
        bufp->chgWData(oldp+1814,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
        bufp->chgWData(oldp+1818,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
        bufp->chgWData(oldp+1822,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
        bufp->chgWData(oldp+1826,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
        bufp->chgWData(oldp+1830,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
        bufp->chgWData(oldp+1834,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
        bufp->chgWData(oldp+1838,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
        bufp->chgWData(oldp+1842,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
        bufp->chgWData(oldp+1846,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
        bufp->chgWData(oldp+1850,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
        bufp->chgWData(oldp+1854,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
        bufp->chgWData(oldp+1858,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
        bufp->chgWData(oldp+1862,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
        bufp->chgWData(oldp+1866,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
        bufp->chgWData(oldp+1870,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
        bufp->chgWData(oldp+1874,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
        bufp->chgWData(oldp+1878,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
        bufp->chgWData(oldp+1882,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
        bufp->chgWData(oldp+1886,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
        bufp->chgWData(oldp+1890,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
        bufp->chgWData(oldp+1894,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
        bufp->chgWData(oldp+1898,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
        bufp->chgWData(oldp+1902,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
        bufp->chgWData(oldp+1906,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
        bufp->chgWData(oldp+1910,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
        bufp->chgWData(oldp+1914,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
        bufp->chgWData(oldp+1918,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
        bufp->chgWData(oldp+1922,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
        bufp->chgWData(oldp+1926,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
        bufp->chgWData(oldp+1930,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
        bufp->chgWData(oldp+1934,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
        bufp->chgWData(oldp+1938,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
        bufp->chgWData(oldp+1942,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
        bufp->chgWData(oldp+1946,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
        bufp->chgWData(oldp+1950,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
        bufp->chgWData(oldp+1954,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
        bufp->chgWData(oldp+1958,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
        bufp->chgWData(oldp+1962,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
        bufp->chgWData(oldp+1966,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
        bufp->chgWData(oldp+1970,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
        bufp->chgWData(oldp+1974,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
        bufp->chgWData(oldp+1978,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
        bufp->chgWData(oldp+1982,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
        bufp->chgWData(oldp+1986,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
        bufp->chgWData(oldp+1990,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
        bufp->chgWData(oldp+1994,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
        bufp->chgWData(oldp+1998,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
        bufp->chgWData(oldp+2002,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
        bufp->chgWData(oldp+2006,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
        bufp->chgWData(oldp+2010,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
        bufp->chgWData(oldp+2014,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
        bufp->chgWData(oldp+2018,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
        bufp->chgWData(oldp+2022,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
        bufp->chgWData(oldp+2026,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
        bufp->chgWData(oldp+2030,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
        bufp->chgWData(oldp+2034,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
        bufp->chgWData(oldp+2038,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
        bufp->chgWData(oldp+2042,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
        bufp->chgWData(oldp+2046,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
        bufp->chgWData(oldp+2050,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
        bufp->chgWData(oldp+2054,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
        bufp->chgWData(oldp+2058,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
        bufp->chgWData(oldp+2062,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
        bufp->chgWData(oldp+2066,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
        bufp->chgWData(oldp+2070,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
        bufp->chgWData(oldp+2074,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
        bufp->chgWData(oldp+2078,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
        bufp->chgWData(oldp+2082,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
        bufp->chgWData(oldp+2086,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
        bufp->chgWData(oldp+2090,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
        bufp->chgWData(oldp+2094,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
        bufp->chgWData(oldp+2098,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
        bufp->chgWData(oldp+2102,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
        bufp->chgWData(oldp+2106,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
        bufp->chgWData(oldp+2110,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
        bufp->chgWData(oldp+2114,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
        bufp->chgWData(oldp+2118,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
        bufp->chgWData(oldp+2122,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
        bufp->chgWData(oldp+2126,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
        bufp->chgWData(oldp+2130,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
        bufp->chgWData(oldp+2134,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
        bufp->chgWData(oldp+2138,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
        bufp->chgWData(oldp+2142,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
        bufp->chgWData(oldp+2146,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
        bufp->chgWData(oldp+2150,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
        bufp->chgWData(oldp+2154,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
        bufp->chgWData(oldp+2158,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
        bufp->chgWData(oldp+2162,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
        bufp->chgWData(oldp+2166,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
        bufp->chgWData(oldp+2170,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
        bufp->chgWData(oldp+2174,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
        bufp->chgWData(oldp+2178,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
        bufp->chgWData(oldp+2182,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
        bufp->chgWData(oldp+2186,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
        bufp->chgWData(oldp+2190,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
        bufp->chgWData(oldp+2194,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
        bufp->chgWData(oldp+2198,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
        bufp->chgWData(oldp+2202,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
        bufp->chgWData(oldp+2206,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
        bufp->chgWData(oldp+2210,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
        bufp->chgWData(oldp+2214,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
        bufp->chgWData(oldp+2218,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
        bufp->chgWData(oldp+2222,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
        bufp->chgWData(oldp+2226,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
        bufp->chgWData(oldp+2230,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
        bufp->chgWData(oldp+2234,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
        bufp->chgWData(oldp+2238,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
        bufp->chgWData(oldp+2242,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
        bufp->chgWData(oldp+2246,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
        bufp->chgWData(oldp+2250,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
        bufp->chgWData(oldp+2254,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
        bufp->chgWData(oldp+2258,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
        bufp->chgWData(oldp+2262,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
        bufp->chgWData(oldp+2266,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
        bufp->chgWData(oldp+2270,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
        bufp->chgWData(oldp+2274,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
        bufp->chgWData(oldp+2278,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
        bufp->chgWData(oldp+2282,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
        bufp->chgWData(oldp+2286,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
        bufp->chgWData(oldp+2290,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
        bufp->chgWData(oldp+2294,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
        bufp->chgWData(oldp+2298,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
        bufp->chgWData(oldp+2302,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
        bufp->chgWData(oldp+2306,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
        bufp->chgWData(oldp+2310,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
        bufp->chgWData(oldp+2314,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
        bufp->chgWData(oldp+2318,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
        bufp->chgWData(oldp+2322,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
        bufp->chgWData(oldp+2326,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
        bufp->chgWData(oldp+2330,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
        bufp->chgWData(oldp+2334,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
        bufp->chgWData(oldp+2338,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
        bufp->chgWData(oldp+2342,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
        bufp->chgWData(oldp+2346,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
        bufp->chgWData(oldp+2350,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
        bufp->chgWData(oldp+2354,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
        bufp->chgWData(oldp+2358,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
        bufp->chgWData(oldp+2362,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
        bufp->chgWData(oldp+2366,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
        bufp->chgWData(oldp+2370,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
        bufp->chgWData(oldp+2374,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
        bufp->chgWData(oldp+2378,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
        bufp->chgWData(oldp+2382,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
        bufp->chgWData(oldp+2386,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
        bufp->chgWData(oldp+2390,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
        bufp->chgWData(oldp+2394,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
        bufp->chgWData(oldp+2398,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
        bufp->chgWData(oldp+2402,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
        bufp->chgWData(oldp+2406,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
        bufp->chgWData(oldp+2410,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
        bufp->chgWData(oldp+2414,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
        bufp->chgWData(oldp+2418,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
        bufp->chgWData(oldp+2422,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
        bufp->chgWData(oldp+2426,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
        bufp->chgWData(oldp+2430,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
        bufp->chgWData(oldp+2434,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
        bufp->chgWData(oldp+2438,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
        bufp->chgWData(oldp+2442,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
        bufp->chgWData(oldp+2446,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
        bufp->chgWData(oldp+2450,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
        bufp->chgWData(oldp+2454,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
        bufp->chgWData(oldp+2458,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
        bufp->chgWData(oldp+2462,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
        bufp->chgWData(oldp+2466,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
        bufp->chgWData(oldp+2470,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
        bufp->chgWData(oldp+2474,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
        bufp->chgWData(oldp+2478,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
        bufp->chgWData(oldp+2482,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
        bufp->chgWData(oldp+2486,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
        bufp->chgWData(oldp+2490,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
        bufp->chgWData(oldp+2494,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
        bufp->chgWData(oldp+2498,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
        bufp->chgWData(oldp+2502,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
        bufp->chgWData(oldp+2506,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
        bufp->chgWData(oldp+2510,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
        bufp->chgWData(oldp+2514,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
        bufp->chgWData(oldp+2518,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
        bufp->chgWData(oldp+2522,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
        bufp->chgWData(oldp+2526,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
        bufp->chgWData(oldp+2530,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
        bufp->chgWData(oldp+2534,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
        bufp->chgWData(oldp+2538,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
        bufp->chgWData(oldp+2542,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
        bufp->chgWData(oldp+2546,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
        bufp->chgWData(oldp+2550,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
        bufp->chgWData(oldp+2554,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
        bufp->chgWData(oldp+2558,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
        bufp->chgWData(oldp+2562,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
        bufp->chgWData(oldp+2566,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
        bufp->chgWData(oldp+2570,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
        bufp->chgWData(oldp+2574,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
        bufp->chgWData(oldp+2578,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
        bufp->chgWData(oldp+2582,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
        bufp->chgWData(oldp+2586,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
        bufp->chgWData(oldp+2590,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
        bufp->chgWData(oldp+2594,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
        bufp->chgWData(oldp+2598,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
        bufp->chgWData(oldp+2602,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
        bufp->chgWData(oldp+2606,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
        bufp->chgWData(oldp+2610,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
        bufp->chgWData(oldp+2614,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
        bufp->chgWData(oldp+2618,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
        bufp->chgWData(oldp+2622,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
        bufp->chgWData(oldp+2626,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
        bufp->chgWData(oldp+2630,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
        bufp->chgWData(oldp+2634,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
        bufp->chgWData(oldp+2638,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
        bufp->chgWData(oldp+2642,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
        bufp->chgWData(oldp+2646,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
        bufp->chgWData(oldp+2650,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
        bufp->chgWData(oldp+2654,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
        bufp->chgWData(oldp+2658,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
        bufp->chgWData(oldp+2662,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
        bufp->chgWData(oldp+2666,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
        bufp->chgWData(oldp+2670,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
        bufp->chgWData(oldp+2674,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
        bufp->chgWData(oldp+2678,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
        bufp->chgWData(oldp+2682,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
        bufp->chgWData(oldp+2686,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
        bufp->chgWData(oldp+2690,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
        bufp->chgWData(oldp+2694,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
        bufp->chgWData(oldp+2698,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
        bufp->chgWData(oldp+2702,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
        bufp->chgWData(oldp+2706,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
        bufp->chgWData(oldp+2710,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
        bufp->chgWData(oldp+2714,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
        bufp->chgWData(oldp+2718,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
        bufp->chgWData(oldp+2722,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
        bufp->chgWData(oldp+2726,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
        bufp->chgWData(oldp+2730,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
        bufp->chgWData(oldp+2734,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
        bufp->chgWData(oldp+2738,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
        bufp->chgWData(oldp+2742,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
        bufp->chgWData(oldp+2746,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
        bufp->chgWData(oldp+2750,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
        bufp->chgWData(oldp+2754,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
        bufp->chgWData(oldp+2758,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
        bufp->chgWData(oldp+2762,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
        bufp->chgWData(oldp+2766,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
        bufp->chgWData(oldp+2770,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
        bufp->chgWData(oldp+2774,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
        bufp->chgWData(oldp+2778,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
        bufp->chgWData(oldp+2782,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
        bufp->chgWData(oldp+2786,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
        bufp->chgWData(oldp+2790,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
        bufp->chgWData(oldp+2794,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
        bufp->chgWData(oldp+2798,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
        bufp->chgWData(oldp+2802,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
        bufp->chgWData(oldp+2806,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
        bufp->chgWData(oldp+2810,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
        bufp->chgWData(oldp+2814,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
        bufp->chgWData(oldp+2818,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
        bufp->chgWData(oldp+2822,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
        bufp->chgWData(oldp+2826,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
        bufp->chgWData(oldp+2830,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
        bufp->chgWData(oldp+2834,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
        bufp->chgWData(oldp+2838,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
        bufp->chgWData(oldp+2842,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
        bufp->chgWData(oldp+2846,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
        bufp->chgWData(oldp+2850,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
        bufp->chgWData(oldp+2854,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
        bufp->chgWData(oldp+2858,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
        bufp->chgWData(oldp+2862,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
        bufp->chgWData(oldp+2866,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
        bufp->chgWData(oldp+2870,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
        bufp->chgWData(oldp+2874,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
        bufp->chgWData(oldp+2878,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
        bufp->chgWData(oldp+2882,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
        bufp->chgWData(oldp+2886,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
        bufp->chgWData(oldp+2890,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
        bufp->chgWData(oldp+2894,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
        bufp->chgWData(oldp+2898,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
        bufp->chgWData(oldp+2902,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
        bufp->chgWData(oldp+2906,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
        bufp->chgWData(oldp+2910,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
        bufp->chgWData(oldp+2914,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
        bufp->chgWData(oldp+2918,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
        bufp->chgWData(oldp+2922,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
        bufp->chgWData(oldp+2926,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
        bufp->chgWData(oldp+2930,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
        bufp->chgWData(oldp+2934,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
        bufp->chgWData(oldp+2938,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
        bufp->chgWData(oldp+2942,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
        bufp->chgWData(oldp+2946,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
        bufp->chgWData(oldp+2950,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
        bufp->chgWData(oldp+2954,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
        bufp->chgWData(oldp+2958,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
        bufp->chgWData(oldp+2962,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
        bufp->chgWData(oldp+2966,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
        bufp->chgWData(oldp+2970,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
        bufp->chgWData(oldp+2974,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
        bufp->chgWData(oldp+2978,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
        bufp->chgWData(oldp+2982,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
        bufp->chgWData(oldp+2986,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
        bufp->chgWData(oldp+2990,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
        bufp->chgWData(oldp+2994,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
        bufp->chgWData(oldp+2998,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
        bufp->chgWData(oldp+3002,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
        bufp->chgWData(oldp+3006,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
        bufp->chgWData(oldp+3010,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
        bufp->chgWData(oldp+3014,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
        bufp->chgWData(oldp+3018,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
        bufp->chgWData(oldp+3022,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
        bufp->chgWData(oldp+3026,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
        bufp->chgWData(oldp+3030,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
        bufp->chgWData(oldp+3034,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
        bufp->chgWData(oldp+3038,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
        bufp->chgWData(oldp+3042,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
        bufp->chgWData(oldp+3046,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
        bufp->chgWData(oldp+3050,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
        bufp->chgWData(oldp+3054,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
        bufp->chgWData(oldp+3058,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
        bufp->chgWData(oldp+3062,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
        bufp->chgWData(oldp+3066,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
        bufp->chgWData(oldp+3070,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
        bufp->chgWData(oldp+3074,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
        bufp->chgWData(oldp+3078,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
        bufp->chgWData(oldp+3082,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
        bufp->chgWData(oldp+3086,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
        bufp->chgWData(oldp+3090,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
        bufp->chgWData(oldp+3094,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
        bufp->chgWData(oldp+3098,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
        bufp->chgWData(oldp+3102,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
        bufp->chgWData(oldp+3106,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
        bufp->chgWData(oldp+3110,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
        bufp->chgWData(oldp+3114,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
        bufp->chgWData(oldp+3118,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
        bufp->chgWData(oldp+3122,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
        bufp->chgWData(oldp+3126,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
        bufp->chgWData(oldp+3130,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
        bufp->chgWData(oldp+3134,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
        bufp->chgWData(oldp+3138,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
        bufp->chgWData(oldp+3142,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
        bufp->chgWData(oldp+3146,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
        bufp->chgWData(oldp+3150,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
        bufp->chgWData(oldp+3154,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
        bufp->chgWData(oldp+3158,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
        bufp->chgWData(oldp+3162,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
        bufp->chgWData(oldp+3166,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
        bufp->chgWData(oldp+3170,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
        bufp->chgWData(oldp+3174,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
        bufp->chgWData(oldp+3178,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
        bufp->chgWData(oldp+3182,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
    }
    bufp->chgBit(oldp+3186,(vlSelf->clock));
    bufp->chgBit(oldp+3187,(vlSelf->reset));
    bufp->chgQData(oldp+3188,(vlSelf->io_difftest_reg_0),64);
    bufp->chgQData(oldp+3190,(vlSelf->io_difftest_reg_1),64);
    bufp->chgQData(oldp+3192,(vlSelf->io_difftest_reg_2),64);
    bufp->chgQData(oldp+3194,(vlSelf->io_difftest_reg_3),64);
    bufp->chgQData(oldp+3196,(vlSelf->io_difftest_reg_4),64);
    bufp->chgQData(oldp+3198,(vlSelf->io_difftest_reg_5),64);
    bufp->chgQData(oldp+3200,(vlSelf->io_difftest_reg_6),64);
    bufp->chgQData(oldp+3202,(vlSelf->io_difftest_reg_7),64);
    bufp->chgQData(oldp+3204,(vlSelf->io_difftest_reg_8),64);
    bufp->chgQData(oldp+3206,(vlSelf->io_difftest_reg_9),64);
    bufp->chgQData(oldp+3208,(vlSelf->io_difftest_reg_10),64);
    bufp->chgQData(oldp+3210,(vlSelf->io_difftest_reg_11),64);
    bufp->chgQData(oldp+3212,(vlSelf->io_difftest_reg_12),64);
    bufp->chgQData(oldp+3214,(vlSelf->io_difftest_reg_13),64);
    bufp->chgQData(oldp+3216,(vlSelf->io_difftest_reg_14),64);
    bufp->chgQData(oldp+3218,(vlSelf->io_difftest_reg_15),64);
    bufp->chgQData(oldp+3220,(vlSelf->io_difftest_reg_16),64);
    bufp->chgQData(oldp+3222,(vlSelf->io_difftest_reg_17),64);
    bufp->chgQData(oldp+3224,(vlSelf->io_difftest_reg_18),64);
    bufp->chgQData(oldp+3226,(vlSelf->io_difftest_reg_19),64);
    bufp->chgQData(oldp+3228,(vlSelf->io_difftest_reg_20),64);
    bufp->chgQData(oldp+3230,(vlSelf->io_difftest_reg_21),64);
    bufp->chgQData(oldp+3232,(vlSelf->io_difftest_reg_22),64);
    bufp->chgQData(oldp+3234,(vlSelf->io_difftest_reg_23),64);
    bufp->chgQData(oldp+3236,(vlSelf->io_difftest_reg_24),64);
    bufp->chgQData(oldp+3238,(vlSelf->io_difftest_reg_25),64);
    bufp->chgQData(oldp+3240,(vlSelf->io_difftest_reg_26),64);
    bufp->chgQData(oldp+3242,(vlSelf->io_difftest_reg_27),64);
    bufp->chgQData(oldp+3244,(vlSelf->io_difftest_reg_28),64);
    bufp->chgQData(oldp+3246,(vlSelf->io_difftest_reg_29),64);
    bufp->chgQData(oldp+3248,(vlSelf->io_difftest_reg_30),64);
    bufp->chgQData(oldp+3250,(vlSelf->io_difftest_reg_31),64);
    bufp->chgQData(oldp+3252,(vlSelf->io_difftest_pc),64);
    bufp->chgIData(oldp+3254,(vlSelf->io_difftest_inst),32);
    bufp->chgBit(oldp+3255,(vlSelf->io_difftest_commit));
    bufp->chgQData(oldp+3256,(vlSelf->io_inst_counter),64);
    bufp->chgBit(oldp+3258,(vlSelf->io_difftest_irq));
    bufp->chgQData(oldp+3259,(vlSelf->io_difftest_mstatus),64);
    bufp->chgQData(oldp+3261,(vlSelf->io_difftest_mcause),64);
    bufp->chgQData(oldp+3263,(vlSelf->io_difftest_mepc),64);
    bufp->chgQData(oldp+3265,(vlSelf->io_difftest_mtvec),64);
    bufp->chgBit(oldp+3267,(vlSelf->io_difftest_peripheral));
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
