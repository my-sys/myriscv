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
    VlWide<5>/*159:0*/ __Vtemp_h3d72d354__0;
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
    VlWide<4>/*127:0*/ __Vtemp_h643ad04b__0;
    VlWide<4>/*127:0*/ __Vtemp_h96d8aca3__0;
    VlWide<4>/*127:0*/ __Vtemp_h0fce6913__0;
    VlWide<4>/*127:0*/ __Vtemp_h7019c01e__0;
    VlWide<4>/*127:0*/ __Vtemp_h93e89695__0;
    VlWide<4>/*127:0*/ __Vtemp_h4e6b78b3__0;
    VlWide<4>/*127:0*/ __Vtemp_haf68b62e__0;
    VlWide<4>/*127:0*/ __Vtemp_hf3981781__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b93e364__0;
    VlWide<4>/*127:0*/ __Vtemp_h33a8e0ea__0;
    VlWide<4>/*127:0*/ __Vtemp_hd7e049ac__0;
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
        bufp->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
        bufp->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__core_io_axi_bus_r_bits_rlast));
        bufp->chgCData(oldp+20,(vlSelf->riscv_soc__DOT__core_io_sram0_addr),6);
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram0__DOT__wen)))));
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
        bufp->chgBit(oldp+38,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram2__DOT__wen)))));
        bufp->chgWData(oldp+39,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
        bufp->chgWData(oldp+43,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
        bufp->chgCData(oldp+47,(vlSelf->riscv_soc__DOT__core_io_sram4_addr),6);
        bufp->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram4__DOT__wen)))));
        __Vtemp_haff02ae1__0[0U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[0U]);
        __Vtemp_haff02ae1__0[1U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[1U]);
        __Vtemp_haff02ae1__0[2U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[2U]);
        __Vtemp_haff02ae1__0[3U] = (~ vlSelf->riscv_soc__DOT__sram4__DOT__bwen[3U]);
        bufp->chgWData(oldp+49,(__Vtemp_haff02ae1__0),128);
        bufp->chgWData(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        bufp->chgWData(oldp+57,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
        __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                            >> 0x20U));
        __Vtemp_h5cafde3d__0[2U] = 0U;
        __Vtemp_h5cafde3d__0[3U] = 0U;
        bufp->chgWData(oldp+61,(__Vtemp_h5cafde3d__0),128);
        bufp->chgWData(oldp+65,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
        bufp->chgBit(oldp+69,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__sram6__DOT__wen)))));
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
        bufp->chgBit(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush));
        bufp->chgBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready));
        bufp->chgBit(oldp+94,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 0x1fU)) 
                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        bufp->chgQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        bufp->chgBit(oldp+97,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        bufp->chgBit(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        bufp->chgQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        bufp->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i));
        bufp->chgBit(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        bufp->chgQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast));
        bufp->chgBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready));
        bufp->chgBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid));
        bufp->chgQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
        bufp->chgQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        bufp->chgQData(oldp+114,((((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
        bufp->chgCData(oldp+116,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
        bufp->chgBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
        bufp->chgBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        bufp->chgBit(oldp+119,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        bufp->chgBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        bufp->chgQData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        bufp->chgQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        bufp->chgBit(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        bufp->chgBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        bufp->chgBit(oldp+127,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        bufp->chgBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        bufp->chgQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast));
        bufp->chgBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready));
        bufp->chgBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
        bufp->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
        bufp->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
        bufp->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
        bufp->chgBit(oldp+137,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 0x1fU))
                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready))));
        bufp->chgBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        bufp->chgBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
        bufp->chgQData(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data),64);
        bufp->chgQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        bufp->chgBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        bufp->chgQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata),64);
        bufp->chgBit(oldp+147,(((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                          >> 0x1fU))
                                 ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))));
        bufp->chgBit(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
        bufp->chgQData(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        bufp->chgBit(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        bufp->chgBit(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        bufp->chgBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        bufp->chgQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        bufp->chgBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        bufp->chgQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        bufp->chgBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid));
        bufp->chgQData(oldp+160,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                                  [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                                   : 0ULL)),64);
        bufp->chgQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        bufp->chgBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush));
        bufp->chgBit(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        bufp->chgBit(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid));
        bufp->chgIData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst),32);
        bufp->chgQData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
                                 [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]),64);
        bufp->chgBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre
                               [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]));
        bufp->chgBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        bufp->chgCData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        bufp->chgCData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        bufp->chgCData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        bufp->chgQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        bufp->chgCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        bufp->chgQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        bufp->chgIData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        bufp->chgQData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        bufp->chgIData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        bufp->chgCData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        bufp->chgBit(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        bufp->chgBit(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        bufp->chgSData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+190,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        bufp->chgBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        bufp->chgQData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus),64);
        bufp->chgQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie),64);
        bufp->chgQData(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc),64);
        bufp->chgQData(oldp+198,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        bufp->chgBit(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
        bufp->chgCData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        bufp->chgQData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
        bufp->chgBit(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
        bufp->chgSData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
        bufp->chgBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
        bufp->chgBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
        bufp->chgCData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        bufp->chgQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        bufp->chgQData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        bufp->chgBit(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
        bufp->chgIData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        bufp->chgBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        bufp->chgCData(oldp+219,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0xfU))),5);
        bufp->chgQData(oldp+220,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                                  [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0xfU))])),64);
        bufp->chgCData(oldp+222,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 0x14U))),5);
        bufp->chgQData(oldp+223,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                              >> 0x14U)) 
                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                                  [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                             >> 0x14U))])),64);
        bufp->chgSData(oldp+225,((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+226,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
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
        bufp->chgQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        bufp->chgQData(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        bufp->chgBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        bufp->chgBit(oldp+233,((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        bufp->chgBit(oldp+234,((0x4000U == (0xffffU 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
        bufp->chgCData(oldp+235,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        bufp->chgQData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[0]),64);
        bufp->chgQData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[1]),64);
        bufp->chgQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[2]),64);
        bufp->chgQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[3]),64);
        bufp->chgQData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[4]),64);
        bufp->chgQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[5]),64);
        bufp->chgQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[6]),64);
        bufp->chgQData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[7]),64);
        bufp->chgQData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[8]),64);
        bufp->chgQData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[9]),64);
        bufp->chgQData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[10]),64);
        bufp->chgQData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[11]),64);
        bufp->chgQData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[12]),64);
        bufp->chgQData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[13]),64);
        bufp->chgQData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[14]),64);
        bufp->chgQData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[15]),64);
        bufp->chgQData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[16]),64);
        bufp->chgQData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[17]),64);
        bufp->chgQData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[18]),64);
        bufp->chgQData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[19]),64);
        bufp->chgQData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[20]),64);
        bufp->chgQData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[21]),64);
        bufp->chgQData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[22]),64);
        bufp->chgQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[23]),64);
        bufp->chgQData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[24]),64);
        bufp->chgQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[25]),64);
        bufp->chgQData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[26]),64);
        bufp->chgQData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[27]),64);
        bufp->chgQData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[28]),64);
        bufp->chgQData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[29]),64);
        bufp->chgQData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[30]),64);
        bufp->chgQData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[31]),64);
        bufp->chgQData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                                 [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file
                                 [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                            >> 0x14U))]),64);
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
        bufp->chgQData(oldp+331,(((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
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
        bufp->chgWData(oldp+363,(vlSelf->riscv_soc__DOT__sram4__DOT__bwen),128);
        bufp->chgWData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
        bufp->chgBit(oldp+371,(vlSelf->riscv_soc__DOT__sram4__DOT__wen));
        bufp->chgQData(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        bufp->chgQData(oldp+376,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
        bufp->chgQData(oldp+378,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
        bufp->chgBit(oldp+380,(vlSelf->riscv_soc__DOT__sram6__DOT__wen));
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
        bufp->chgCData(oldp+406,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
        bufp->chgCData(oldp+408,(((0x33U == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                   ? 1U : ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                            ? 1U : 
                                           ((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                             ? 1U : 
                                            ((0x3bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                              ? 1U : 
                                             ((0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                               ? 1U
                                               : ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                                     ? 0U
                                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_438)))))))))),2);
        bufp->chgCData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
        bufp->chgCData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
        bufp->chgBit(oldp+411,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
        bufp->chgBit(oldp+412,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
        bufp->chgBit(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
        bufp->chgBit(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid));
        bufp->chgBit(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict));
        bufp->chgQData(oldp+416,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                   : 0ULL)),64);
        bufp->chgBit(oldp+418,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc))));
        bufp->chgQData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc),64);
        bufp->chgQData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
        bufp->chgQData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
        bufp->chgQData(oldp+425,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
        bufp->chgBit(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
        bufp->chgQData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        bufp->chgBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        bufp->chgBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        bufp->chgBit(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
        bufp->chgQData(oldp+433,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
        bufp->chgBit(oldp+435,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        bufp->chgBit(oldp+436,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
        bufp->chgBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
        bufp->chgQData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
        bufp->chgBit(oldp+440,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                & (IData)(((0U != (0x1cU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
        bufp->chgQData(oldp+441,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
        bufp->chgSData(oldp+443,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                   ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        bufp->chgBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
        bufp->chgCData(oldp+445,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),6);
        bufp->chgBit(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
        bufp->chgBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        bufp->chgCData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        bufp->chgBit(oldp+449,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
        bufp->chgBit(oldp+450,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+451,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+452,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                      >> 3U))));
        bufp->chgCData(oldp+453,(((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                   ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))),4);
        bufp->chgBit(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        bufp->chgQData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        bufp->chgBit(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        bufp->chgBit(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        bufp->chgBit(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        bufp->chgBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        bufp->chgBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
        bufp->chgBit(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
        bufp->chgBit(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
        bufp->chgBit(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        bufp->chgBit(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        bufp->chgBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        bufp->chgBit(oldp+467,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
        bufp->chgQData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        bufp->chgQData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        bufp->chgQData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
        bufp->chgBit(oldp+474,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 1U)))));
        bufp->chgQData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        bufp->chgBit(oldp+477,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 5U)))));
        bufp->chgBit(oldp+478,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 5U)))));
        bufp->chgQData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        bufp->chgQData(oldp+481,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))
                                   ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
        bufp->chgWData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
        bufp->chgBit(oldp+486,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
        bufp->chgBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        bufp->chgCData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
        bufp->chgWData(oldp+489,(__Vtemp_hfddea7ef__0),127);
        bufp->chgQData(oldp+493,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                  >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+495,(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
        bufp->chgQData(oldp+497,(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))
                                   ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                   : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                      >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
        bufp->chgCData(oldp+499,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                        >> 2U))),3);
        bufp->chgQData(oldp+500,(((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        bufp->chgBit(oldp+502,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
        bufp->chgBit(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        bufp->chgQData(oldp+504,(((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                   : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U));
        __Vtemp_h6618c490__0[2U] = 1U;
        bufp->chgWData(oldp+506,(__Vtemp_h6618c490__0),65);
        bufp->chgQData(oldp+509,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
            __Vtemp_h4825144c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U];
            __Vtemp_h4825144c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U];
            __Vtemp_h4825144c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U];
        } else {
            __Vtemp_h4825144c__0[0U] = 0U;
            __Vtemp_h4825144c__0[1U] = 0U;
            __Vtemp_h4825144c__0[2U] = 0U;
        }
        bufp->chgWData(oldp+511,(__Vtemp_h4825144c__0),65);
        bufp->chgQData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        bufp->chgQData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc),64);
        bufp->chgBit(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc));
        bufp->chgBit(oldp+519,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid) 
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
        bufp->chgQData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        bufp->chgQData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        bufp->chgCData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        bufp->chgBit(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        bufp->chgBit(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        bufp->chgCData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        bufp->chgQData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
        bufp->chgQData(oldp+530,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
        bufp->chgQData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        bufp->chgBit(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        bufp->chgQData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
        bufp->chgBit(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        bufp->chgWData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
        bufp->chgBit(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        bufp->chgBit(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
        bufp->chgQData(oldp+544,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        bufp->chgBit(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
        bufp->chgQData(oldp+549,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
        bufp->chgBit(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        bufp->chgBit(oldp+553,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U)))));
        bufp->chgWData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
        bufp->chgWData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
        bufp->chgWData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
        bufp->chgWData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        bufp->chgWData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        bufp->chgWData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        bufp->chgWData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
        bufp->chgWData(oldp+575,(__Vtemp_h28f9f554__0),65);
        bufp->chgCData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        bufp->chgCData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        bufp->chgCData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        bufp->chgWData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
        bufp->chgBit(oldp+586,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                        | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                       | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
        __Vtemp_h639dda77__1[0U] = 1U;
        __Vtemp_h639dda77__1[1U] = 0U;
        __Vtemp_h639dda77__1[2U] = 0U;
        __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp_h2ede82b0__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__1);
        bufp->chgBit(oldp+587,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                         ^ __Vtemp_h2ede82b0__0[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                           ^ __Vtemp_h2ede82b0__0[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                          ^ (1U & __Vtemp_h2ede82b0__0[2U]))))));
        bufp->chgBit(oldp+588,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
        bufp->chgBit(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
        bufp->chgBit(oldp+590,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
        bufp->chgBit(oldp+591,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                      >> 3U))));
        bufp->chgQData(oldp+592,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgQData(oldp+594,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
        bufp->chgBit(oldp+596,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 2U))));
        bufp->chgBit(oldp+597,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 1U))));
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp_h3d72d354__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               >> 0x1fU)))) {
                __Vtemp_h3d72d354__0[1U] = 0xffffffffU;
                __Vtemp_h3d72d354__0[2U] = 0xffffffffU;
                __Vtemp_h3d72d354__0[3U] = 0xffffffffU;
                __Vtemp_h3d72d354__0[4U] = 3U;
            } else {
                __Vtemp_h3d72d354__0[1U] = 0U;
                __Vtemp_h3d72d354__0[2U] = 0U;
                __Vtemp_h3d72d354__0[3U] = 0U;
                __Vtemp_h3d72d354__0[4U] = 0U;
            }
        } else if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            __Vtemp_h3d72d354__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            __Vtemp_h3d72d354__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                >> 0x20U));
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               >> 0x3fU)))) {
                __Vtemp_h3d72d354__0[2U] = 0xffffffffU;
                __Vtemp_h3d72d354__0[3U] = 0xffffffffU;
                __Vtemp_h3d72d354__0[4U] = 3U;
            } else {
                __Vtemp_h3d72d354__0[2U] = 0U;
                __Vtemp_h3d72d354__0[3U] = 0U;
                __Vtemp_h3d72d354__0[4U] = 0U;
            }
        } else {
            __Vtemp_h3d72d354__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            __Vtemp_h3d72d354__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                >> 0x20U));
            __Vtemp_h3d72d354__0[2U] = 0U;
            __Vtemp_h3d72d354__0[3U] = 0U;
            __Vtemp_h3d72d354__0[4U] = 0U;
        }
        bufp->chgWData(oldp+598,(__Vtemp_h3d72d354__0),130);
        bufp->chgWData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
        bufp->chgWData(oldp+606,(__Vtemp_h3364f91c__0),67);
        bufp->chgCData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        bufp->chgWData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        bufp->chgWData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        bufp->chgWData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        bufp->chgCData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
        bufp->chgWData(oldp+624,(__Vtemp_hf484a493__0),131);
        bufp->chgCData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        bufp->chgBit(oldp+630,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                             >> 2U)))));
        bufp->chgBit(oldp+631,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
        bufp->chgBit(oldp+632,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                      >> 4U))));
        bufp->chgQData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        bufp->chgQData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        bufp->chgQData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        bufp->chgQData(oldp+639,(((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
        bufp->chgBit(oldp+641,((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+642,((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
        bufp->chgBit(oldp+643,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+644,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+645,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))) 
                                | (8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        bufp->chgCData(oldp+646,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : ((8U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                              ? 3U : 0U))),4);
        bufp->chgBit(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        bufp->chgQData(oldp+648,(((0xffffffffffffff77ULL 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus) 
                                  | (QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                                                                 >> 7U)))
                                                      ? 0x88U
                                                      : 0x80U))))),64);
        bufp->chgBit(oldp+650,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))));
        bufp->chgIData(oldp+651,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
                                              >> 0x20U))
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data))),32);
        bufp->chgBit(oldp+652,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                                 ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                                [3U] : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo
                                [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail])));
        bufp->chgQData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
        bufp->chgBit(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        bufp->chgBit(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        bufp->chgQData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        bufp->chgCData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        bufp->chgCData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        bufp->chgQData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[0]),64);
        bufp->chgQData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[1]),64);
        bufp->chgQData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[2]),64);
        bufp->chgQData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[3]),64);
        bufp->chgBit(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
        bufp->chgCData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        bufp->chgCData(oldp+671,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        bufp->chgBit(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[0]));
        bufp->chgBit(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[1]));
        bufp->chgBit(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[2]));
        bufp->chgBit(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[3]));
        bufp->chgQData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
        bufp->chgQData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
        bufp->chgQData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
        bufp->chgQData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
        bufp->chgCData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        bufp->chgCData(oldp+685,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
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
        bufp->chgWData(oldp+686,(__Vtemp_h643ad04b__0),123);
        bufp->chgCData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data),2);
        bufp->chgCData(oldp+691,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U)))),6);
        bufp->chgQData(oldp+692,(((0xfffffffffffffeULL 
                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 8U)) | (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                            >> 2U))))))),56);
        bufp->chgCData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                 [(0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 3U)))]),2);
        bufp->chgBit(oldp+695,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                                      [(0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U)))] 
                                      >> 1U))));
        bufp->chgWData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data),128);
        bufp->chgBit(oldp+700,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
                                      >> 0x1aU))));
        bufp->chgQData(oldp+701,((0xffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U])) 
                                      << 0x1eU) | ((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                                   >> 2U)))),56);
        bufp->chgQData(oldp+703,((((QData)((IData)(
                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])) 
                                                   >> 2U)))),64);
        bufp->chgCData(oldp+705,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])),2);
        bufp->chgBit(oldp+706,((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U]))));
        bufp->chgQData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                                 [(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))]),64);
        bufp->chgQData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[0]),64);
        bufp->chgQData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[1]),64);
        bufp->chgQData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[2]),64);
        bufp->chgQData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[3]),64);
        bufp->chgIData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[0]),32);
        bufp->chgIData(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[1]),32);
        bufp->chgIData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[2]),32);
        bufp->chgIData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[3]),32);
        bufp->chgBit(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[0]));
        bufp->chgBit(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[1]));
        bufp->chgBit(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[2]));
        bufp->chgBit(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[3]));
        bufp->chgBit(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[0]));
        bufp->chgBit(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[1]));
        bufp->chgBit(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[2]));
        bufp->chgBit(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[3]));
        bufp->chgCData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        bufp->chgCData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        bufp->chgCData(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        bufp->chgBit(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
        bufp->chgBit(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
        bufp->chgCData(oldp+734,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                         + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                        - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
        bufp->chgBit(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        bufp->chgQData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        bufp->chgCData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
        bufp->chgBit(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
        bufp->chgBit(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
        bufp->chgBit(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
        bufp->chgWData(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
        bufp->chgWData(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
        bufp->chgWData(oldp+750,(__Vtemp_h96d8aca3__0),128);
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
        bufp->chgWData(oldp+754,(__Vtemp_h0fce6913__0),128);
        bufp->chgBit(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        bufp->chgBit(oldp+759,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
        bufp->chgBit(oldp+760,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        bufp->chgQData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
        bufp->chgQData(oldp+764,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 3U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
        bufp->chgBit(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
        bufp->chgQData(oldp+767,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 3U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
        bufp->chgBit(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        bufp->chgCData(oldp+770,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                   >> 4U)))),6);
        bufp->chgBit(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        bufp->chgQData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        bufp->chgBit(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        bufp->chgBit(oldp+777,(vlSelf->riscv_soc__DOT__sram0__DOT__wen));
        bufp->chgBit(oldp+778,(vlSelf->riscv_soc__DOT__sram2__DOT__wen));
        bufp->chgQData(oldp+779,((1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
        bufp->chgBit(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        bufp->chgBit(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        bufp->chgCData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        bufp->chgBit(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        bufp->chgBit(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        bufp->chgBit(oldp+786,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
                                & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)))));
        bufp->chgBit(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        bufp->chgQData(oldp+788,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                  >> 0xaU)),54);
        bufp->chgCData(oldp+790,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U)))),6);
        bufp->chgCData(oldp+791,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+792,((0x3fffffffffffffULL 
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
        bufp->chgQData(oldp+794,((0x3fffffffffffffULL 
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
        bufp->chgBit(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
        bufp->chgBit(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        bufp->chgQData(oldp+798,((0xfffffffffffffff0ULL 
                                  & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
        bufp->chgQData(oldp+800,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                  >> 0xaU)),54);
        bufp->chgCData(oldp+802,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
        bufp->chgQData(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        bufp->chgBit(oldp+805,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
        bufp->chgQData(oldp+806,((1ULL << (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
        bufp->chgQData(oldp+808,((~ (1ULL << (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U)))))),64);
        bufp->chgCData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        __Vtemp_h7019c01e__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][0U];
        __Vtemp_h7019c01e__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][1U];
        __Vtemp_h7019c01e__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][2U];
        __Vtemp_h7019c01e__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][3U];
        bufp->chgWData(oldp+811,(__Vtemp_h7019c01e__0),128);
        __Vtemp_h93e89695__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][0U];
        __Vtemp_h93e89695__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][1U];
        __Vtemp_h93e89695__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][2U];
        __Vtemp_h93e89695__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][3U];
        bufp->chgWData(oldp+815,(__Vtemp_h93e89695__0),128);
        __Vtemp_h4e6b78b3__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][0U];
        __Vtemp_h4e6b78b3__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][1U];
        __Vtemp_h4e6b78b3__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][2U];
        __Vtemp_h4e6b78b3__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][3U];
        bufp->chgWData(oldp+819,(__Vtemp_h4e6b78b3__0),128);
        __Vtemp_haf68b62e__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][0U];
        __Vtemp_haf68b62e__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][1U];
        __Vtemp_haf68b62e__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][2U];
        __Vtemp_haf68b62e__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram0_addr][3U];
        bufp->chgWData(oldp+823,(__Vtemp_haf68b62e__0),128);
        __Vtemp_hf3981781__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][0U];
        __Vtemp_hf3981781__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][1U];
        __Vtemp_hf3981781__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][2U];
        __Vtemp_hf3981781__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][3U];
        bufp->chgWData(oldp+827,(__Vtemp_hf3981781__0),128);
        __Vtemp_h9b93e364__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][0U];
        __Vtemp_h9b93e364__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][1U];
        __Vtemp_h9b93e364__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][2U];
        __Vtemp_h9b93e364__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][3U];
        bufp->chgWData(oldp+831,(__Vtemp_h9b93e364__0),128);
        __Vtemp_h33a8e0ea__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][0U];
        __Vtemp_h33a8e0ea__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][1U];
        __Vtemp_h33a8e0ea__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][2U];
        __Vtemp_h33a8e0ea__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][3U];
        bufp->chgWData(oldp+835,(__Vtemp_h33a8e0ea__0),128);
        __Vtemp_hd7e049ac__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][0U];
        __Vtemp_hd7e049ac__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][1U];
        __Vtemp_hd7e049ac__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][2U];
        __Vtemp_hd7e049ac__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram
            [vlSelf->riscv_soc__DOT__core_io_sram4_addr][3U];
        bufp->chgWData(oldp+839,(__Vtemp_hd7e049ac__0),128);
    }
    bufp->chgBit(oldp+843,(vlSelf->clock));
    bufp->chgBit(oldp+844,(vlSelf->reset));
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
