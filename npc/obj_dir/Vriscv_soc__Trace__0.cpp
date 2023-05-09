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
    VlWide<4>/*127:0*/ __Vtemp_haff02ae1__0;
    VlWide<4>/*127:0*/ __Vtemp_h5cafde3d__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d76ce9a__0;
    VlWide<3>/*95:0*/ __Vtemp_h114c2dcb__0;
    VlWide<3>/*95:0*/ __Vtemp_hd47e848f__0;
    VlWide<4>/*127:0*/ __Vtemp_h53b1a3f5__0;
    VlWide<4>/*127:0*/ __Vtemp_h08263223__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__0;
    VlWide<3>/*95:0*/ __Vtemp_h346bf577__0;
    VlWide<3>/*95:0*/ __Vtemp_h28f9f554__0;
    VlWide<5>/*159:0*/ __Vtemp_h63eaff34__0;
    VlWide<5>/*159:0*/ __Vtemp_he5b4b165__0;
    VlWide<5>/*159:0*/ __Vtemp_h1b763563__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h2ede82b0__0;
    VlWide<3>/*95:0*/ __Vtemp_h7cbb49d7__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__2;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__2;
    VlWide<3>/*95:0*/ __Vtemp_h256c5cfa__0;
    VlWide<3>/*95:0*/ __Vtemp_h8d9e640e__0;
    VlWide<3>/*95:0*/ __Vtemp_h99ba1d40__0;
    VlWide<3>/*95:0*/ __Vtemp_h7cbb49d7__1;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__3;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__3;
    VlWide<3>/*95:0*/ __Vtemp_h042ab437__0;
    VlWide<3>/*95:0*/ __Vtemp_h2756cbfa__0;
    VlWide<3>/*95:0*/ __Vtemp_ha5ea0fb5__0;
    VlWide<5>/*159:0*/ __Vtemp_h61a83971__0;
    VlWide<3>/*95:0*/ __Vtemp_h6cec51a8__0;
    VlWide<3>/*95:0*/ __Vtemp_hc0d44b95__0;
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
    VlWide<4>/*127:0*/ __Vtemp_h643ad04b__0;
    VlWide<4>/*127:0*/ __Vtemp_h96d8aca3__0;
    VlWide<4>/*127:0*/ __Vtemp_h0fce6913__0;
    VlWide<4>/*127:0*/ __Vtemp_h7748dece__0;
    VlWide<4>/*127:0*/ __Vtemp_h8b37abc5__0;
    VlWide<4>/*127:0*/ __Vtemp_he6da4d43__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7b78b5e__0;
    VlWide<4>/*127:0*/ __Vtemp_h0490666a__0;
    VlWide<4>/*127:0*/ __Vtemp_hca3bc04b__0;
    VlWide<4>/*127:0*/ __Vtemp_h4060cfc7__0;
    VlWide<4>/*127:0*/ __Vtemp_h09a85685__0;
    VlWide<4>/*127:0*/ __Vtemp_h2421319e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
        bufp->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__core_io_axi_bus_aw_valid));
        bufp->chgQData(oldp+2,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                 ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                 : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                     : 0ULL))),64);
        bufp->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
        bufp->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid));
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
        bufp->chgBit(oldp+9,(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_bits_wlast));
        bufp->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
        bufp->chgBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
        bufp->chgBit(oldp+12,(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid));
        bufp->chgQData(oldp+13,(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr),64);
        bufp->chgCData(oldp+15,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                 | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
        bufp->chgBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
        bufp->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__tem_data),64);
        bufp->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__core_io_axi_bus_r_bits_rlast));
        bufp->chgCData(oldp+20,(vlSelf->riscv_soc__DOT__core_io_isram_addr),6);
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram0__DOT__wen)))));
        bufp->chgBit(oldp+22,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram2__DOT__wen)))));
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
        bufp->chgCData(oldp+47,(vlSelf->riscv_soc__DOT__core_io_dsram_addr),6);
        bufp->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram4__DOT__wen)))));
        bufp->chgBit(oldp+49,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram6__DOT__wen)))));
        __Vtemp_haff02ae1__0[0U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[0U]);
        __Vtemp_haff02ae1__0[1U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[1U]);
        __Vtemp_haff02ae1__0[2U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[2U]);
        __Vtemp_haff02ae1__0[3U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[3U]);
        bufp->chgWData(oldp+50,(__Vtemp_haff02ae1__0),128);
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
        bufp->chgQData(oldp+78,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                  ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                  : vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr)),64);
        bufp->chgQData(oldp+80,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        bufp->chgQData(oldp+82,((((QData)((IData)((
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
        bufp->chgBit(oldp+84,(((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid) 
                               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
        bufp->chgQData(oldp+85,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        bufp->chgCData(oldp+87,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        bufp->chgBit(oldp+88,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        bufp->chgBit(oldp+89,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        bufp->chgIData(oldp+90,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
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
        bufp->chgIData(oldp+91,((((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
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
        bufp->chgBit(oldp+92,(((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid) 
                               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))));
        bufp->chgBit(oldp+93,(vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_aw_fire));
        bufp->chgBit(oldp+94,(vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_w_fire));
        bufp->chgQData(oldp+95,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__t_rdata),64);
        bufp->chgBit(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush));
        bufp->chgBit(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready));
        bufp->chgBit(oldp+99,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 0x1fU)) 
                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        bufp->chgQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        bufp->chgBit(oldp+102,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        bufp->chgBit(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        bufp->chgQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        bufp->chgQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
        bufp->chgBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        bufp->chgQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast));
        bufp->chgBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready));
        bufp->chgBit(oldp+114,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                          >> 0x1fU)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid))));
        bufp->chgQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        bufp->chgQData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        bufp->chgQData(oldp+119,((((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        bufp->chgCData(oldp+121,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        bufp->chgBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        bufp->chgBit(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        bufp->chgBit(oldp+124,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        bufp->chgBit(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        bufp->chgQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        bufp->chgQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        bufp->chgBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        bufp->chgBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        bufp->chgBit(oldp+132,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        bufp->chgBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        bufp->chgQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
        bufp->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
        bufp->chgBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
        bufp->chgBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        bufp->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
        bufp->chgBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        bufp->chgBit(oldp+142,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU))
                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready))));
        bufp->chgBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        bufp->chgBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        bufp->chgQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
        bufp->chgQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        bufp->chgBit(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        bufp->chgQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
        bufp->chgBit(oldp+152,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                          >> 0x1fU))
                                 ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
        bufp->chgBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        bufp->chgQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        bufp->chgBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        bufp->chgBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        bufp->chgBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        bufp->chgQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        bufp->chgBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        bufp->chgQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        bufp->chgBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid));
        bufp->chgQData(oldp+165,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                                  [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                                   : 0ULL)),64);
        bufp->chgQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        bufp->chgBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush));
        bufp->chgBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        bufp->chgBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid));
        bufp->chgIData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst),32);
        bufp->chgQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                                 [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
        bufp->chgBit(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre
                               [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]));
        bufp->chgBit(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        bufp->chgCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        bufp->chgCData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        bufp->chgCData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        bufp->chgQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        bufp->chgCData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        bufp->chgQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        bufp->chgIData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        bufp->chgQData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        bufp->chgIData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        bufp->chgCData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        bufp->chgBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        bufp->chgBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        bufp->chgSData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+195,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        bufp->chgBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        bufp->chgQData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
        bufp->chgQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie),64);
        bufp->chgQData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
        bufp->chgQData(oldp+203,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        bufp->chgBit(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        bufp->chgCData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        bufp->chgQData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        bufp->chgBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        bufp->chgSData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        bufp->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        bufp->chgBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        bufp->chgCData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        bufp->chgQData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        bufp->chgQData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        bufp->chgBit(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        bufp->chgIData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        bufp->chgBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        bufp->chgCData(oldp+224,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xfU))),5);
        bufp->chgQData(oldp+225,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                                  [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xfU))])),64);
        bufp->chgCData(oldp+227,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U))),5);
        bufp->chgQData(oldp+228,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                              >> 0x14U)) 
                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                                  [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0x14U))])),64);
        bufp->chgSData(oldp+230,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+231,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
                                    == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0x14U)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                   : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                       : ((0xb00U == 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 0x14U))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                                           : ((0x344U 
                                               == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                               ? 0ULL
                                               : ((0x343U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                     : 
                                                    ((0x340U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? 0ULL
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                        : 
                                                       ((0x304U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                         : 
                                                        ((0x303U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x302U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                            >> 0x14U))
                                                           ? 0ULL
                                                           : 
                                                          ((0x301U 
                                                            == 
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                             >> 0x14U))
                                                            ? 0ULL
                                                            : 
                                                           ((0x300U 
                                                             == 
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                              >> 0x14U))
                                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                             : 0ULL)))))))))))))))),64);
        bufp->chgQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        bufp->chgQData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        bufp->chgBit(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        bufp->chgBit(oldp+238,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        bufp->chgBit(oldp+239,((0x4000U == (0xffffU 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        bufp->chgBit(oldp+240,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))));
        bufp->chgCData(oldp+241,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        bufp->chgQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[0]),64);
        bufp->chgQData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[1]),64);
        bufp->chgQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[2]),64);
        bufp->chgQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[3]),64);
        bufp->chgQData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[4]),64);
        bufp->chgQData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[5]),64);
        bufp->chgQData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[6]),64);
        bufp->chgQData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[7]),64);
        bufp->chgQData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[8]),64);
        bufp->chgQData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[9]),64);
        bufp->chgQData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[10]),64);
        bufp->chgQData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[11]),64);
        bufp->chgQData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[12]),64);
        bufp->chgQData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[13]),64);
        bufp->chgQData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[14]),64);
        bufp->chgQData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[15]),64);
        bufp->chgQData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[16]),64);
        bufp->chgQData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[17]),64);
        bufp->chgQData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[18]),64);
        bufp->chgQData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[19]),64);
        bufp->chgQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[20]),64);
        bufp->chgQData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[21]),64);
        bufp->chgQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[22]),64);
        bufp->chgQData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[23]),64);
        bufp->chgQData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[24]),64);
        bufp->chgQData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[25]),64);
        bufp->chgQData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[26]),64);
        bufp->chgQData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[27]),64);
        bufp->chgQData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[28]),64);
        bufp->chgQData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[29]),64);
        bufp->chgQData(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[30]),64);
        bufp->chgQData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[31]),64);
        bufp->chgQData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                                 [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                                 [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit),64);
        bufp->chgQData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),64);
        bufp->chgQData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        bufp->chgQData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        bufp->chgQData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq),64);
        bufp->chgQData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral),64);
        bufp->chgBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
        bufp->chgQData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        bufp->chgQData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        bufp->chgQData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        bufp->chgQData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        bufp->chgQData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        bufp->chgQData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        bufp->chgQData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        bufp->chgQData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        bufp->chgQData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        bufp->chgQData(oldp+341,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                              >> 0x14U))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                   : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                                       : ((0x344U == 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 0x14U))
                                           ? 0ULL : 
                                          ((0x343U 
                                            == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                >> 0x14U))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                            : ((0x342U 
                                                == 
                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                : (
                                                   (0x341U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                    : 
                                                   ((0x340U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? 0ULL
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                        : 
                                                       ((0x303U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? 0ULL
                                                         : 
                                                        ((0x302U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x301U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                            >> 0x14U))
                                                           ? 0ULL
                                                           : 
                                                          ((0x300U 
                                                            == 
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                             >> 0x14U))
                                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                            : 0ULL))))))))))))))),64);
        bufp->chgBit(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        bufp->chgCData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        bufp->chgBit(oldp+345,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)))));
        bufp->chgBit(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__bus2_w_is_valid));
        bufp->chgCData(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
        bufp->chgCData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        bufp->chgBit(oldp+349,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        bufp->chgCData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        bufp->chgBit(oldp+351,((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
        bufp->chgBit(oldp+352,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)))));
        bufp->chgBit(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__bus2_r_is_valid));
        bufp->chgCData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
        bufp->chgBit(oldp+355,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready))));
        bufp->chgCData(oldp+356,((3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                                        - (IData)(1U)))),2);
        bufp->chgBit(oldp+357,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready))));
        bufp->chgBit(oldp+358,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
        bufp->chgBit(oldp+359,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready))));
        bufp->chgBit(oldp+360,((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))));
        bufp->chgBit(oldp+361,((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))));
        bufp->chgBit(oldp+362,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))));
        bufp->chgBit(oldp+363,((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))));
        bufp->chgBit(oldp+364,((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))));
        bufp->chgBit(oldp+365,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))));
        bufp->chgBit(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        bufp->chgQData(oldp+367,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                   : 0ULL)),64);
        bufp->chgBit(oldp+369,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__bus2_w_is_valid))));
        bufp->chgQData(oldp+370,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                   : 0ULL)),64);
        bufp->chgCData(oldp+372,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                   ? (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))
                                   : 0U)),8);
        bufp->chgBit(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        bufp->chgBit(oldp+374,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid)))));
        bufp->chgQData(oldp+375,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                   : 0ULL)),64);
        bufp->chgBit(oldp+377,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                 ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid))
                                 : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                    & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid))))));
        bufp->chgQData(oldp+378,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
                                   : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                       : 0ULL))),64);
        bufp->chgBit(oldp+380,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                 ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))
                                 : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                     ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid))
                                     : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                        & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid)))))));
        bufp->chgQData(oldp+381,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr
                                   : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
                                       : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                           : 0ULL)))),64);
        bufp->chgBit(oldp+383,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))));
        bufp->chgBit(oldp+384,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 0x1fU))));
        bufp->chgBit(oldp+385,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 0x1fU))));
        bufp->chgBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        bufp->chgQData(oldp+387,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                  >> 0xaU)),54);
        bufp->chgCData(oldp+389,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                   >> 4U)))),6);
        bufp->chgCData(oldp+390,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
        bufp->chgCData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        bufp->chgQData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        bufp->chgCData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        bufp->chgBit(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        bufp->chgQData(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        bufp->chgCData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        bufp->chgCData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        bufp->chgBit(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        bufp->chgSData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        bufp->chgBit(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        bufp->chgWData(oldp+403,(vlSelf->riscv_soc__DOT__sram4__DOT__bwen),128);
        bufp->chgWData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        bufp->chgBit(oldp+411,(vlSelf->riscv_soc__DOT__sram4__DOT__wen));
        bufp->chgBit(oldp+412,(vlSelf->riscv_soc__DOT__sram6__DOT__wen));
        bufp->chgQData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        bufp->chgQData(oldp+417,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        bufp->chgQData(oldp+419,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        bufp->chgQData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        bufp->chgQData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        bufp->chgQData(oldp+425,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
        bufp->chgQData(oldp+427,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
        bufp->chgBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
        bufp->chgBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
        bufp->chgBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0));
        bufp->chgBit(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2));
        bufp->chgBit(oldp+433,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                                              >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
        bufp->chgBit(oldp+434,((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                                              >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))))));
        bufp->chgQData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        bufp->chgBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__LRU_2));
        bufp->chgBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        bufp->chgCData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        bufp->chgBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        bufp->chgBit(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        bufp->chgQData(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__temp_addr),64);
        bufp->chgBit(oldp+444,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))));
        bufp->chgBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_b_fire));
        bufp->chgCData(oldp+446,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+447,((7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType),5);
        bufp->chgCData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op),3);
        bufp->chgBit(oldp+450,((0U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+451,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 0xeU))));
        bufp->chgBit(oldp+452,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 0xeU)))));
        bufp->chgCData(oldp+453,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                   ? 3U : 0xcU)),4);
        bufp->chgBit(oldp+454,((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 5U)))));
        bufp->chgBit(oldp+455,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                      >> 5U))));
        bufp->chgBit(oldp+456,((5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xcU)))));
        bufp->chgCData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk),6);
        bufp->chgCData(oldp+458,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                   : ((5U == (7U & 
                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                               >> 0xcU)))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))),6);
        bufp->chgCData(oldp+459,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                   ? 6U : (((1U == 
                                             (7U & 
                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                               >> 0xcU))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 0xcU))))
                                            ? 4U : 0xcU))),4);
        bufp->chgCData(oldp+460,(((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                   ? ((0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                       ? 3U : 2U) : 2U)),3);
        bufp->chgBit(oldp+461,((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
        bufp->chgBit(oldp+462,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
        bufp->chgBit(oldp+463,((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
        bufp->chgBit(oldp+464,((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
        bufp->chgBit(oldp+465,((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
        bufp->chgBit(oldp+466,((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
        bufp->chgBit(oldp+467,((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))));
        bufp->chgCData(oldp+468,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                   ? ((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                       ? ((0x2000000U 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                           ? 3U : 2U)
                                       : 2U) : ((3U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                 ? 2U
                                                 : 
                                                (((5U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                                  | (4U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)))
                                                  ? 1U
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                   ? 5U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                    ? 6U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                     ? 4U
                                                     : 0U))))))),3);
        bufp->chgCData(oldp+469,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                   ? ((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                       : ((5U == (7U 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                     >> 0xcU)))
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)))
                                   : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                       ? ((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                           ? 0U : 0x40U)
                                       : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                           ? ((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                               ? 0x4eU
                                               : 0x4aU)
                                           : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                               ? (0x20U 
                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                               : ((0U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                    ? 
                                                   (0x40U 
                                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((0x60U 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                          >> 0xfU)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType))
                                                     : 0U)))))))),7);
        bufp->chgCData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        bufp->chgBit(oldp+471,(((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                | ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                   | ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                      | ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                         & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                             ? (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 5U))
                                             : ((1U 
                                                 != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                                & ((0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                        >> 0xcU))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)))))))))));
        bufp->chgBit(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
        bufp->chgBit(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
        bufp->chgIData(oldp+474,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0x14U))),32);
        bufp->chgIData(oldp+475,((0xfffff000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)),32);
        bufp->chgIData(oldp+476,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                 >> 7U))))),32);
        bufp->chgIData(oldp+477,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0x1fU) ? 0xfffU
                                     : 0U) << 0x14U) 
                                  | ((0xff000U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst) 
                                     | ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 0x14U)))))),32);
        bufp->chgIData(oldp+478,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 7U)))))),32);
        bufp->chgIData(oldp+479,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xfU))),32);
        bufp->chgIData(oldp+480,((0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U))),32);
        bufp->chgBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        bufp->chgBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid));
        bufp->chgBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
        bufp->chgQData(oldp+484,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                   : 0ULL)),64);
        bufp->chgBit(oldp+486,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
        bufp->chgQData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
        bufp->chgQData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
        bufp->chgQData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
        bufp->chgQData(oldp+493,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                   ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                       ? ((1U & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                         >> 0x1fU)))
                                           ? (0xffffffff00000000ULL 
                                              | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                           : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                   : 0ULL)),64);
        bufp->chgBit(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        bufp->chgQData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        bufp->chgBit(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        bufp->chgBit(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        bufp->chgBit(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        bufp->chgQData(oldp+501,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        bufp->chgBit(oldp+503,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        bufp->chgBit(oldp+504,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
        bufp->chgBit(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        bufp->chgQData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        bufp->chgBit(oldp+508,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                & (IData)(((0U != (0x1cU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
        bufp->chgQData(oldp+509,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        bufp->chgSData(oldp+511,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                   ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        bufp->chgBit(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        bufp->chgCData(oldp+513,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),6);
        bufp->chgBit(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        bufp->chgBit(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        bufp->chgCData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        bufp->chgBit(oldp+517,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        bufp->chgBit(oldp+518,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+519,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+520,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 3U))));
        bufp->chgCData(oldp+521,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                   ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
        bufp->chgBit(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        bufp->chgQData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        bufp->chgBit(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        bufp->chgBit(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        bufp->chgBit(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        bufp->chgBit(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        bufp->chgBit(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        bufp->chgBit(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        bufp->chgBit(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        bufp->chgBit(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        bufp->chgBit(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        bufp->chgBit(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        bufp->chgBit(oldp+535,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        bufp->chgIData(oldp+536,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                 >> 0x1fU)))
                                   ? 0xffffffffU : 0U)),32);
        bufp->chgIData(oldp+537,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                                                 >> 0x1fU)))
                                   ? 0xffffffffU : 0U)),32);
        bufp->chgQData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        bufp->chgQData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        bufp->chgIData(oldp+542,(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                   >> 0x1fU) ? 0xffffffffU
                                   : 0U)),32);
        bufp->chgQData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        bufp->chgBit(oldp+545,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U)))));
        bufp->chgQData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        bufp->chgBit(oldp+548,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 6U))));
        bufp->chgBit(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sub));
        bufp->chgQData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        bufp->chgQData(oldp+552,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sub)
                                   ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        bufp->chgWData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        bufp->chgBit(oldp+557,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        bufp->chgBit(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        bufp->chgCData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
        bufp->chgQData(oldp+560,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                  << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+562,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                  >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+564,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+566,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sub)
                                   ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                   : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                      >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
        bufp->chgCData(oldp+568,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                        >> 2U))),3);
        bufp->chgQData(oldp+569,(((0U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U])))
                                   : ((2U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                       : ((3U == (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? (QData)((IData)(
                                                             (1U 
                                                              & (~ 
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                           : ((7U == 
                                               (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                               ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                     << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U)))
                                                      ? 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sub)
                                                       ? 
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                                       : 
                                                      (((1U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                         ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                                      : 0ULL))))))))),64);
        bufp->chgBit(oldp+571,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        bufp->chgBit(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        bufp->chgQData(oldp+573,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                   : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp_h2d76ce9a__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h922ce6c5__0);
        __Vtemp_h2d76ce9a__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h922ce6c5__0 
                                            >> 0x20U));
        __Vtemp_h2d76ce9a__0[2U] = 1U;
        bufp->chgWData(oldp+575,(__Vtemp_h2d76ce9a__0),65);
        __Vtemp_h114c2dcb__0[0U] = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
        __Vtemp_h114c2dcb__0[1U] = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                            >> 0x20U));
        __Vtemp_h114c2dcb__0[2U] = 0U;
        bufp->chgWData(oldp+578,(__Vtemp_h114c2dcb__0),65);
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
            __Vtemp_hd47e848f__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_hf728dcb9__0[0U];
            __Vtemp_hd47e848f__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_hf728dcb9__0[1U];
            __Vtemp_hd47e848f__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_hf728dcb9__0[2U];
        } else {
            __Vtemp_hd47e848f__0[0U] = 0U;
            __Vtemp_hd47e848f__0[1U] = 0U;
            __Vtemp_hd47e848f__0[2U] = 0U;
        }
        bufp->chgWData(oldp+581,(__Vtemp_hd47e848f__0),65);
        bufp->chgQData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        bufp->chgQData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
        bufp->chgBit(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
        bufp->chgBit(oldp+589,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid) 
                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc) 
                                    & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc 
                                       != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                                           [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                                            : 0ULL)))) 
                                | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                   | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid))))));
        bufp->chgQData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        bufp->chgQData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        bufp->chgCData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        bufp->chgBit(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        bufp->chgBit(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        bufp->chgCData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        bufp->chgBit(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        bufp->chgQData(oldp+599,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7
                                   : 0ULL)),64);
        bufp->chgQData(oldp+601,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                   ? ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                       ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0))
                                       : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                           ? (((QData)((IData)(
                                                               (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                                                 & (IData)(
                                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7 
                                                                            >> 0x1fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0)))
                                           : ((0x14U 
                                               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                               ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0))
                                               : ((4U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                   ? 
                                                  (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0)))
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                     ? 
                                                    (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                                        & (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7 
                                                                   >> 7U)))
                                                        ? 0xffffffffffffffULL
                                                        : 0ULL) 
                                                      << 8U) 
                                                     | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0)))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                      ? 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_7
                                                       : 0ULL)
                                                      : 0ULL)))))))
                                   : 0ULL)),64);
        bufp->chgQData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        bufp->chgBit(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        bufp->chgQData(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        bufp->chgWData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        bufp->chgBit(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        bufp->chgBit(oldp+613,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en))));
        bufp->chgBit(oldp+614,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
                                & (0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
                                            >> 0x1fU)))));
        bufp->chgBit(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__io_bus_fire));
        bufp->chgBit(oldp+616,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)))));
        bufp->chgBit(oldp+617,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                 ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__io_bus_fire) 
                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))));
        bufp->chgBit(oldp+618,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                       ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__io_bus_fire) 
                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                                       : (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid))))));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
            __Vtemp_h53b1a3f5__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
            __Vtemp_h53b1a3f5__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
            __Vtemp_h53b1a3f5__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
            __Vtemp_h53b1a3f5__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
        } else {
            __Vtemp_h53b1a3f5__0[0U] = 0U;
            __Vtemp_h53b1a3f5__0[1U] = 0U;
            __Vtemp_h53b1a3f5__0[2U] = 0U;
            __Vtemp_h53b1a3f5__0[3U] = 0U;
        }
        bufp->chgWData(oldp+619,(__Vtemp_h53b1a3f5__0),127);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            __Vtemp_h08263223__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
            __Vtemp_h08263223__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
                                                >> 0x20U));
            __Vtemp_h08263223__0[2U] = 0U;
            __Vtemp_h08263223__0[3U] = 0U;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
            __Vtemp_h08263223__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
            __Vtemp_h08263223__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
            __Vtemp_h08263223__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
            __Vtemp_h08263223__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
        } else {
            __Vtemp_h08263223__0[0U] = 0U;
            __Vtemp_h08263223__0[1U] = 0U;
            __Vtemp_h08263223__0[2U] = 0U;
            __Vtemp_h08263223__0[3U] = 0U;
        }
        bufp->chgWData(oldp+623,(__Vtemp_h08263223__0),127);
        bufp->chgQData(oldp+627,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
                                   : 0ULL)),64);
        bufp->chgQData(oldp+629,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                   ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb))
                                   : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
                                       : 0ULL))),64);
        bufp->chgBit(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        bufp->chgQData(oldp+632,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        bufp->chgBit(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        bufp->chgQData(oldp+637,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        bufp->chgBit(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        bufp->chgBit(oldp+641,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U)))));
        bufp->chgWData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        bufp->chgWData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        bufp->chgWData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        bufp->chgWData(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        bufp->chgWData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        bufp->chgWData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        bufp->chgWData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
        bufp->chgWData(oldp+663,(__Vtemp_h28f9f554__0),65);
        bufp->chgCData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        bufp->chgCData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        bufp->chgCData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        __Vtemp_h63eaff34__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        __Vtemp_h63eaff34__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        __Vtemp_h63eaff34__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     << 2U) | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
        __Vtemp_h63eaff34__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                  << 2U));
        __Vtemp_h63eaff34__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                  << 2U));
        bufp->chgWData(oldp+669,(__Vtemp_h63eaff34__0),131);
        __Vtemp_he5b4b165__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                    << 1U);
        __Vtemp_he5b4b165__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                                  << 1U));
        __Vtemp_he5b4b165__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                                  << 1U)));
        __Vtemp_he5b4b165__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                     >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                  << 3U));
        __Vtemp_he5b4b165__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                  << 3U));
        bufp->chgWData(oldp+674,(__Vtemp_he5b4b165__0),132);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) {
            __Vtemp_h1b763563__0[0U] = 0U;
            __Vtemp_h1b763563__0[1U] = 0U;
            __Vtemp_h1b763563__0[2U] = 0U;
            __Vtemp_h1b763563__0[3U] = 0U;
            __Vtemp_h1b763563__0[4U] = 0U;
        } else {
            __Vtemp_h1b763563__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[0U];
            __Vtemp_h1b763563__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[1U];
            __Vtemp_h1b763563__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[2U];
            __Vtemp_h1b763563__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[3U];
            __Vtemp_h1b763563__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T[4U];
        }
        bufp->chgWData(oldp+679,(__Vtemp_h1b763563__0),132);
        bufp->chgBit(oldp+684,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                        | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                       | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp_h639dda77__1[0U] = 1U;
        __Vtemp_h639dda77__1[1U] = 0U;
        __Vtemp_h639dda77__1[2U] = 0U;
        __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
        bufp->chgBit(oldp+685,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                         ^ __Vtemp_h2ede82b0__0[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                           ^ __Vtemp_h2ede82b0__0[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                          ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
        bufp->chgBit(oldp+686,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
        bufp->chgBit(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        VL_ADD_W(3, __Vtemp_h7cbb49d7__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
        __Vtemp_h639dda77__2[0U] = 1U;
        __Vtemp_h639dda77__2[1U] = 0U;
        __Vtemp_h639dda77__2[2U] = 0U;
        __Vtemp_h3fef5ac1__2[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp_h3fef5ac1__2[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp_h3fef5ac1__2[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp_h256c5cfa__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp_h3fef5ac1__2);
        VL_ADD_W(3, __Vtemp_h8d9e640e__0, __Vtemp_h639dda77__2, __Vtemp_h256c5cfa__0);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
                __Vtemp_h99ba1d40__0[0U] = __Vtemp_h7cbb49d7__0[0U];
                __Vtemp_h99ba1d40__0[1U] = __Vtemp_h7cbb49d7__0[1U];
                __Vtemp_h99ba1d40__0[2U] = (1U & __Vtemp_h7cbb49d7__0[2U]);
            } else {
                __Vtemp_h99ba1d40__0[0U] = __Vtemp_h8d9e640e__0[0U];
                __Vtemp_h99ba1d40__0[1U] = __Vtemp_h8d9e640e__0[1U];
                __Vtemp_h99ba1d40__0[2U] = (1U & __Vtemp_h8d9e640e__0[2U]);
            }
        } else {
            __Vtemp_h99ba1d40__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
            __Vtemp_h99ba1d40__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
            __Vtemp_h99ba1d40__0[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
        }
        bufp->chgWData(oldp+688,(__Vtemp_h99ba1d40__0),65);
        VL_ADD_W(3, __Vtemp_h7cbb49d7__1, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
        __Vtemp_h639dda77__3[0U] = 1U;
        __Vtemp_h639dda77__3[1U] = 0U;
        __Vtemp_h639dda77__3[2U] = 0U;
        __Vtemp_h3fef5ac1__3[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp_h3fef5ac1__3[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp_h3fef5ac1__3[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp_h042ab437__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp_h3fef5ac1__3);
        VL_ADD_W(3, __Vtemp_h2756cbfa__0, __Vtemp_h639dda77__3, __Vtemp_h042ab437__0);
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
                    __Vtemp_ha5ea0fb5__0[0U] = __Vtemp_h7cbb49d7__1[0U];
                    __Vtemp_ha5ea0fb5__0[1U] = __Vtemp_h7cbb49d7__1[1U];
                    __Vtemp_ha5ea0fb5__0[2U] = (1U 
                                                & __Vtemp_h7cbb49d7__1[2U]);
                } else {
                    __Vtemp_ha5ea0fb5__0[0U] = __Vtemp_h2756cbfa__0[0U];
                    __Vtemp_ha5ea0fb5__0[1U] = __Vtemp_h2756cbfa__0[1U];
                    __Vtemp_ha5ea0fb5__0[2U] = (1U 
                                                & __Vtemp_h2756cbfa__0[2U]);
                }
            } else {
                __Vtemp_ha5ea0fb5__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
                __Vtemp_ha5ea0fb5__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
                __Vtemp_ha5ea0fb5__0[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
            }
        } else {
            __Vtemp_ha5ea0fb5__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
            __Vtemp_ha5ea0fb5__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
            __Vtemp_ha5ea0fb5__0[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
        }
        bufp->chgWData(oldp+691,(__Vtemp_ha5ea0fb5__0),65);
        bufp->chgCData(oldp+694,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                   ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))),2);
        bufp->chgCData(oldp+695,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                   ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))),7);
        bufp->chgBit(oldp+696,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        bufp->chgBit(oldp+697,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                      >> 3U))));
        bufp->chgQData(oldp+698,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgQData(oldp+700,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+702,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U))));
        bufp->chgBit(oldp+703,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U))));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp_h61a83971__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                   >> 0x1fU)))) {
                    __Vtemp_h61a83971__0[1U] = 0xffffffffU;
                    __Vtemp_h61a83971__0[2U] = 0xffffffffU;
                    __Vtemp_h61a83971__0[3U] = 0xffffffffU;
                    __Vtemp_h61a83971__0[4U] = 3U;
                } else {
                    __Vtemp_h61a83971__0[1U] = 0U;
                    __Vtemp_h61a83971__0[2U] = 0U;
                    __Vtemp_h61a83971__0[3U] = 0U;
                    __Vtemp_h61a83971__0[4U] = 0U;
                }
            } else if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp_h61a83971__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
                __Vtemp_h61a83971__0[1U] = (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                    >> 0x20U));
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                   >> 0x3fU)))) {
                    __Vtemp_h61a83971__0[2U] = 0xffffffffU;
                    __Vtemp_h61a83971__0[3U] = 0xffffffffU;
                    __Vtemp_h61a83971__0[4U] = 3U;
                } else {
                    __Vtemp_h61a83971__0[2U] = 0U;
                    __Vtemp_h61a83971__0[3U] = 0U;
                    __Vtemp_h61a83971__0[4U] = 0U;
                }
            } else {
                __Vtemp_h61a83971__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
                __Vtemp_h61a83971__0[1U] = (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                    >> 0x20U));
                __Vtemp_h61a83971__0[2U] = 0U;
                __Vtemp_h61a83971__0[3U] = 0U;
                __Vtemp_h61a83971__0[4U] = 0U;
            }
        } else {
            __Vtemp_h61a83971__0[0U] = 0U;
            __Vtemp_h61a83971__0[1U] = 0U;
            __Vtemp_h61a83971__0[2U] = 0U;
            __Vtemp_h61a83971__0[3U] = 0U;
            __Vtemp_h61a83971__0[4U] = 0U;
        }
        bufp->chgWData(oldp+704,(__Vtemp_h61a83971__0),130);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
            __Vtemp_h6cec51a8__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[0U];
            __Vtemp_h6cec51a8__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[1U];
            __Vtemp_h6cec51a8__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[2U];
        } else {
            __Vtemp_h6cec51a8__0[0U] = 0U;
            __Vtemp_h6cec51a8__0[1U] = 0U;
            __Vtemp_h6cec51a8__0[2U] = 0U;
        }
        bufp->chgWData(oldp+709,(__Vtemp_h6cec51a8__0),65);
        __Vtemp_hc0d44b95__0[0U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[0U]
                                      : 0U) << 1U);
        __Vtemp_hc0d44b95__0[1U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[0U]
                                       : 0U) >> 0x1fU) 
                                    | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[1U]
                                         : 0U) << 1U));
        __Vtemp_hc0d44b95__0[2U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) 
                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[2U]) 
                                     << 2U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                                  ? 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[1U]
                                                  : 0U) 
                                                >> 0x1fU) 
                                               | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T[2U]
                                                    : 0U) 
                                                  << 1U)));
        bufp->chgWData(oldp+712,(__Vtemp_hc0d44b95__0),67);
        bufp->chgCData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        bufp->chgWData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        bufp->chgWData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        bufp->chgWData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        bufp->chgCData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
        bufp->chgWData(oldp+730,(__Vtemp_h52802c7d__0),131);
        bufp->chgCData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        bufp->chgBit(oldp+736,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                             >> 2U)))));
        bufp->chgBit(oldp+737,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        bufp->chgBit(oldp+738,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 4U))));
        bufp->chgQData(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        bufp->chgQData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        bufp->chgQData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        bufp->chgQData(oldp+745,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        bufp->chgBit(oldp+747,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+748,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+749,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+750,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+751,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))) 
                                | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        bufp->chgCData(oldp+752,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),4);
        bufp->chgBit(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        bufp->chgQData(oldp+754,(((0xffffffffffffff77ULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                                  | (QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                                 >> 7U)))
                                                      ? 0x88U
                                                      : 0x80U))))),64);
        bufp->chgBit(oldp+756,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
        bufp->chgIData(oldp+757,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
                                              >> 0x20U))
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data))),32);
        bufp->chgBit(oldp+758,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                                 ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                                [3U] : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                                [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail])));
        bufp->chgQData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        bufp->chgBit(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        bufp->chgBit(oldp+762,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        bufp->chgQData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        bufp->chgCData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        bufp->chgCData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        bufp->chgQData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[0]),64);
        bufp->chgQData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[1]),64);
        bufp->chgQData(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[2]),64);
        bufp->chgQData(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[3]),64);
        bufp->chgBit(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        bufp->chgCData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        bufp->chgCData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        bufp->chgBit(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[0]));
        bufp->chgBit(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[1]));
        bufp->chgBit(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[2]));
        bufp->chgBit(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[3]));
        bufp->chgQData(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
        bufp->chgQData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
        bufp->chgQData(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
        bufp->chgQData(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
        bufp->chgCData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        bufp->chgCData(oldp+791,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U)))),6);
        __Vtemp_h643ad04b__0[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                                    << 2U);
        __Vtemp_h643ad04b__0[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_h643ad04b__0[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                              >> 9U)) 
                                     << 3U) | ((4U 
                                                & ((IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 2U)) 
                                                   << 2U)) 
                                               | ((IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                           >> 0x20U)) 
                                                  >> 0x1eU)));
        __Vtemp_h643ad04b__0[3U] = (0x4000000U | (((IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 9U)) 
                                                   >> 0x1dU) 
                                                  | ((IData)(
                                                             ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                               >> 9U) 
                                                              >> 0x20U)) 
                                                     << 3U)));
        bufp->chgWData(oldp+792,(__Vtemp_h643ad04b__0),123);
        bufp->chgCData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data),2);
        bufp->chgCData(oldp+797,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U)))),6);
        bufp->chgQData(oldp+798,(((0xfffffffffffffeULL 
                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 8U)) | (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                            >> 2U))))))),56);
        bufp->chgCData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                 [(0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 3U)))]),2);
        bufp->chgBit(oldp+801,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                      [(0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U)))] 
                                      >> 1U))));
        bufp->chgWData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data),128);
        bufp->chgBit(oldp+806,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
                                      >> 0x1aU))));
        bufp->chgQData(oldp+807,((0xffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U])) 
                                      << 0x1eU) | ((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                                   >> 2U)))),56);
        bufp->chgQData(oldp+809,((((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])) 
                                                   >> 2U)))),64);
        bufp->chgCData(oldp+811,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])),2);
        bufp->chgBit(oldp+812,((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U]))));
        bufp->chgQData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                                 [(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))]),64);
        bufp->chgQData(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
        bufp->chgQData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
        bufp->chgQData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
        bufp->chgQData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
        bufp->chgIData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
        bufp->chgIData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
        bufp->chgIData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
        bufp->chgIData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
        bufp->chgBit(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[0]));
        bufp->chgBit(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[1]));
        bufp->chgBit(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[2]));
        bufp->chgBit(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[3]));
        bufp->chgBit(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[0]));
        bufp->chgBit(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[1]));
        bufp->chgBit(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[2]));
        bufp->chgBit(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[3]));
        bufp->chgCData(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        bufp->chgCData(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        bufp->chgCData(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        bufp->chgBit(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        bufp->chgBit(oldp+839,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        bufp->chgCData(oldp+840,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                         + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                        - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        bufp->chgBit(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        bufp->chgQData(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        bufp->chgCData(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        bufp->chgBit(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        bufp->chgBit(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        bufp->chgBit(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
        bufp->chgWData(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        bufp->chgWData(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
        bufp->chgWData(oldp+856,(__Vtemp_h96d8aca3__0),128);
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
        bufp->chgWData(oldp+860,(__Vtemp_h0fce6913__0),128);
        bufp->chgBit(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        bufp->chgBit(oldp+865,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
        bufp->chgBit(oldp+866,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        bufp->chgQData(oldp+867,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        bufp->chgQData(oldp+870,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 3U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
        bufp->chgBit(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        bufp->chgQData(oldp+873,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 3U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
        bufp->chgBit(oldp+875,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        bufp->chgCData(oldp+876,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                   >> 4U)))),6);
        bufp->chgBit(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        bufp->chgQData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        bufp->chgBit(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        bufp->chgBit(oldp+883,(vlSelf->riscv_soc__DOT__sram0__DOT__wen));
        bufp->chgBit(oldp+884,(vlSelf->riscv_soc__DOT__sram2__DOT__wen));
        bufp->chgQData(oldp+885,((1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
        bufp->chgBit(oldp+887,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        bufp->chgBit(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        bufp->chgBit(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        bufp->chgBit(oldp+890,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        bufp->chgCData(oldp+891,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        bufp->chgBit(oldp+892,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                                & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
        bufp->chgBit(oldp+893,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        bufp->chgQData(oldp+894,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                  >> 0xaU)),54);
        bufp->chgCData(oldp+896,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U)))),6);
        bufp->chgCData(oldp+897,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+898,((0x3fffffffffffffULL 
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
        bufp->chgQData(oldp+900,((0x3fffffffffffffULL 
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
        bufp->chgBit(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        bufp->chgBit(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        bufp->chgQData(oldp+904,((0xfffffffffffffff0ULL 
                                  & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        bufp->chgQData(oldp+906,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                  >> 0xaU)),54);
        bufp->chgCData(oldp+908,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        bufp->chgBit(oldp+911,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        bufp->chgQData(oldp+912,((1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
        bufp->chgQData(oldp+914,((~ (1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U)))))),64);
        bufp->chgBit(oldp+916,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state));
        bufp->chgQData(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_and_neg_chose),64);
        bufp->chgQData(oldp+919,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_or_chose),64);
        bufp->chgBit(oldp+921,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid))));
        __Vtemp_h7748dece__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
        __Vtemp_h7748dece__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
        __Vtemp_h7748dece__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
        __Vtemp_h7748dece__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
        bufp->chgWData(oldp+922,(__Vtemp_h7748dece__0),128);
        __Vtemp_h8b37abc5__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
        __Vtemp_h8b37abc5__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
        __Vtemp_h8b37abc5__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
        __Vtemp_h8b37abc5__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
        bufp->chgWData(oldp+926,(__Vtemp_h8b37abc5__0),128);
        __Vtemp_he6da4d43__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
        __Vtemp_he6da4d43__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
        __Vtemp_he6da4d43__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
        __Vtemp_he6da4d43__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
        bufp->chgWData(oldp+930,(__Vtemp_he6da4d43__0),128);
        __Vtemp_ha7b78b5e__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][0U];
        __Vtemp_ha7b78b5e__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][1U];
        __Vtemp_ha7b78b5e__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][2U];
        __Vtemp_ha7b78b5e__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_isram_addr][3U];
        bufp->chgWData(oldp+934,(__Vtemp_ha7b78b5e__0),128);
        __Vtemp_h0490666a__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
        __Vtemp_h0490666a__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
        __Vtemp_h0490666a__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
        __Vtemp_h0490666a__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
        bufp->chgWData(oldp+938,(__Vtemp_h0490666a__0),128);
        __Vtemp_hca3bc04b__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
        __Vtemp_hca3bc04b__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
        __Vtemp_hca3bc04b__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
        __Vtemp_hca3bc04b__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
        bufp->chgWData(oldp+942,(__Vtemp_hca3bc04b__0),128);
        __Vtemp_h4060cfc7__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
        __Vtemp_h4060cfc7__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
        __Vtemp_h4060cfc7__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
        __Vtemp_h4060cfc7__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
        bufp->chgWData(oldp+946,(__Vtemp_h4060cfc7__0),128);
        __Vtemp_h09a85685__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
        __Vtemp_h09a85685__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
        __Vtemp_h09a85685__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
        __Vtemp_h09a85685__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
        bufp->chgWData(oldp+950,(__Vtemp_h09a85685__0),128);
    }
    bufp->chgBit(oldp+954,(vlSelf->clock));
    bufp->chgBit(oldp+955,(vlSelf->reset));
    if (vlSelf->reset) {
        __Vtemp_h2421319e__0[0U] = 0U;
        __Vtemp_h2421319e__0[1U] = 0U;
        __Vtemp_h2421319e__0[2U] = 0U;
        __Vtemp_h2421319e__0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        __Vtemp_h2421319e__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
        __Vtemp_h2421319e__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
                                            >> 0x20U));
        __Vtemp_h2421319e__0[2U] = 0U;
        __Vtemp_h2421319e__0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
        __Vtemp_h2421319e__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
        __Vtemp_h2421319e__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
        __Vtemp_h2421319e__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
        __Vtemp_h2421319e__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
    } else {
        __Vtemp_h2421319e__0[0U] = 0U;
        __Vtemp_h2421319e__0[1U] = 0U;
        __Vtemp_h2421319e__0[2U] = 0U;
        __Vtemp_h2421319e__0[3U] = 0U;
    }
    bufp->chgWData(oldp+956,(__Vtemp_h2421319e__0),127);
    bufp->chgQData(oldp+960,(((IData)(vlSelf->reset)
                               ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                          ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb))
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                              ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
                                              : 0ULL)))),64);
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
