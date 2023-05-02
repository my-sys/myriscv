// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_soc___024root___eval_triggers__ico(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_soc___024root___eval_triggers__act(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___nba_sequent__TOP__0(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    __Vtask_ramCtrl__0__rdata = 0;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = 0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state = 0;
    VlWide<3>/*95:0*/ __Vtemp_hfa6acbd5__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_h542f4076__0;
    VlWide<3>/*95:0*/ __Vtemp_h9a13d95c__0;
    VlWide<3>/*95:0*/ __Vtemp_hbdabb437__0;
    VlWide<3>/*95:0*/ __Vtemp_h651a80f2__0;
    VlWide<5>/*159:0*/ __Vtemp_hafbeccdd__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__0;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__0;
    VlWide<5>/*159:0*/ __Vtemp_h83a42262__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__1;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__1;
    VlWide<5>/*159:0*/ __Vtemp_h00d757e1__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__2;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__2;
    VlWide<5>/*159:0*/ __Vtemp_hcd0c4155__0;
    VlWide<5>/*159:0*/ __Vtemp_heb7e6024__0;
    VlWide<5>/*159:0*/ __Vtemp_h343b7f0d__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__0;
    VlWide<3>/*95:0*/ __Vtemp_h4cbd0032__0;
    VlWide<3>/*95:0*/ __Vtemp_h7cbb49d7__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__2;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h9d6f1a37__0;
    VlWide<3>/*95:0*/ __Vtemp_h06c51df9__0;
    VlWide<5>/*159:0*/ __Vtemp_he5b4b165__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__3;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__2;
    VlWide<3>/*95:0*/ __Vtemp_h026c25f7__0;
    VlWide<5>/*159:0*/ __Vtemp_h78c61827__0;
    VlWide<5>/*159:0*/ __Vtemp_h54c8b823__0;
    VlWide<3>/*95:0*/ __Vtemp_h61799857__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e5fa0df__1;
    VlWide<3>/*95:0*/ __Vtemp_h9eba89b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h624b2931__1;
    VlWide<3>/*95:0*/ __Vtemp_h6abef518__0;
    VlWide<3>/*95:0*/ __Vtemp_h624b2931__2;
    VlWide<3>/*95:0*/ __Vtemp_hf8d20176__0;
    // Body
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                                                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                                                : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr), __Vtask_ramCtrl__0__rdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid), vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, 
                                                              ((0U 
                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                                                 : 0ULL)), 
                                                              (((QData)((IData)(
                                                                                (((((0U 
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
                                                                << 0x20U) 
                                                               | (QData)((IData)(
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
                                                                                 : 0U))))))), 
                                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid) 
                                                               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_bits_rlast)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb 
        = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_commit));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_time_irq) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_soft_irq)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_35));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_54));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_5));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index)))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except)) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict)) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                         & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x1cU 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_39));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid 
        = ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid)) 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg)) 
                                          & (0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
                                          & (4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
                                         & (0x45U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = 0xffffffffffffffffULL;
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 = 2U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = 0ULL;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr = 0ULL;
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr = 0ULL;
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid = 0U;
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime = 0ULL;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc = 0ULL;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready)
                        ? 1U : 2U) : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                                       ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready)
                                           ? 1U : 2U)
                                       : (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid)
                                                 ? 
                                                (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))
                                                 : 
                                                ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)) 
                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_6))))))
                : (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready)))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                    : (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready)))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23))));
        if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_commit) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1;
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
            if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_523;
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_521;
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_518;
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_519;
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_520;
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_522;
                }
            }
            if ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1;
            } else if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3;
            }
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_valid_T;
            if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U] = 0U;
            }
            if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U] = 0U;
            }
            if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U] = 0U;
            }
            if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U] = 0U;
            }
            if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U] = 0U;
            }
            if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U] = 0U;
            }
            if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U] = 0U;
            }
            if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U] = 0U;
            }
            if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U] = 0U;
            }
            if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U] = 0U;
            }
            if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U] = 0U;
            }
            if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U] = 0U;
            }
            if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U] = 0U;
            }
            if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U] = 0U;
            }
            if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U] = 0U;
            }
            if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U] = 0U;
            }
            if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U] = 0U;
            }
            if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U] = 0U;
            }
            if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U] = 0U;
            }
            if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U] = 0U;
            }
            if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U] = 0U;
            }
            if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U] = 0U;
            }
            if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U] = 0U;
            }
            if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U] = 0U;
            }
            if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U] = 0U;
            }
            if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U] = 0U;
            }
            if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U] = 0U;
            }
            if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U] = 0U;
            }
            if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U] = 0U;
            }
            if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U] = 0U;
            }
            if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U] = 0U;
            }
            if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U] = 0U;
            }
            if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U] = 0U;
            }
            if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U] = 0U;
            }
            if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U] = 0U;
            }
            if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U] = 0U;
            }
            if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U] = 0U;
            }
            if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U] = 0U;
            }
            if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U] = 0U;
            }
            if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U] = 0U;
            }
            if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U] = 0U;
            }
            if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U] = 0U;
            }
            if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U] = 0U;
            }
            if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U] = 0U;
            }
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U] = 0U;
            }
            if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U] = 0U;
            }
            if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U] = 0U;
            }
            if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U] = 0U;
            }
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U] = 0U;
            }
            if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U] = 0U;
            }
            if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U] = 0U;
            }
            if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U] = 0U;
            }
            if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U] = 0U;
            }
            if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U] = 0U;
            }
            if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U] = 0U;
            }
            if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U] = 0U;
            }
            if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U] = 0U;
            }
            if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U] = 0U;
            }
            if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U] = 0U;
            }
            if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U] = 0U;
            }
            if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U] = 0U;
            }
            if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U] = 0U;
            }
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] = 0U;
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] = 0U;
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] = 0U;
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T_1);
        } else if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U];
        } else if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U];
        } else {
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U];
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_valid_T;
            if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U] = 0U;
            }
            if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U] = 0U;
            }
            if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U] = 0U;
            }
            if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U] = 0U;
            }
            if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U] = 0U;
            }
            if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U] = 0U;
            }
            if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U] = 0U;
            }
            if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U] = 0U;
            }
            if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U] = 0U;
            }
            if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U] = 0U;
            }
            if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U] = 0U;
            }
            if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U] = 0U;
            }
            if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U] = 0U;
            }
            if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U] = 0U;
            }
            if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U] = 0U;
            }
            if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U] = 0U;
            }
            if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U] = 0U;
            }
            if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U] = 0U;
            }
            if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U] = 0U;
            }
            if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U] = 0U;
            }
            if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U] = 0U;
            }
            if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U] = 0U;
            }
            if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U] = 0U;
            }
            if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U] = 0U;
            }
            if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U] = 0U;
            }
            if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U] = 0U;
            }
            if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U] = 0U;
            }
            if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U] = 0U;
            }
            if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U] = 0U;
            }
            if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U] = 0U;
            }
            if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U] = 0U;
            }
            if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U] = 0U;
            }
            if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U] = 0U;
            }
            if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U] = 0U;
            }
            if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U] = 0U;
            }
            if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U] = 0U;
            }
            if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U] = 0U;
            }
            if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U] = 0U;
            }
            if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U] = 0U;
            }
            if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U] = 0U;
            }
            if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U] = 0U;
            }
            if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U] = 0U;
            }
            if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U] = 0U;
            }
            if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U] = 0U;
            }
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U] = 0U;
            }
            if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U] = 0U;
            }
            if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U] = 0U;
            }
            if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U] = 0U;
            }
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U] = 0U;
            }
            if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U] = 0U;
            }
            if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U] = 0U;
            }
            if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U] = 0U;
            }
            if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U] = 0U;
            }
            if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U] = 0U;
            }
            if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U] = 0U;
            }
            if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U] = 0U;
            }
            if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U] = 0U;
            }
            if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U] = 0U;
            }
            if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U] = 0U;
            }
            if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U] = 0U;
            }
            if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U] = 0U;
            }
            if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U] = 0U;
            }
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] = 0U;
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] = 0U;
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] = 0U;
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T_1);
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] = 0U;
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] = 0U;
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] = 0U;
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] = 0U;
            if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U] = 0U;
            }
            if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U] 
                    = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U] = 0U;
            }
        } else if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U];
        } else if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U];
        } else {
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U];
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] = 0U;
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] = 0U;
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] = 0U;
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] = 0U;
            if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U] = 0U;
            }
            if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
                vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U] 
                    = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U] = 0U;
            }
        } else if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U];
        } else if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U];
        } else {
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U];
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid;
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
                   & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)));
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
        } else {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1;
            }
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
                if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
                }
                if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
                }
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
                }
                if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
                }
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1;
            }
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
                if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid;
                }
                if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid;
                }
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid;
                }
                if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid;
                }
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1;
            }
            if (((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1;
            }
        }
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index;
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) {
                    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip 
                        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1;
                    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T;
                }
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata 
                    = ((0xbff8U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
                        ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime
                        : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4);
            }
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
                    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
                }
            }
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6;
            __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
                = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5;
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_flush) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = 0U;
        } else {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_27;
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_26;
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_25;
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_28;
            } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_6;
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_5;
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4;
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_7;
            }
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready) {
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3;
            }
        }
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] = 0U;
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
                if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
                    if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                       >> 0x1fU)))) {
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] = 0xffffffffU;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0xffffffffU;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0xffffffffU;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                            = (3U & 3U);
                    } else {
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] = 0U;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0U;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                            = (3U & 0U);
                    }
                } else if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                   >> 0x20U));
                    if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                       >> 0x3fU)))) {
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0xffffffffU;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0xffffffffU;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                            = (3U & 3U);
                    } else {
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0U;
                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                            = (3U & 0U);
                    }
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                   >> 0x20U));
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0U;
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                        = (3U & 0U);
                }
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 1U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                    = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                       << 1U);
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                     << 1U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                    = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                              << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                          >> 0x1fU) 
                                         | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                            << 1U)));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType 
                    = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                    = (3U & 0U);
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
            }
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[2U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[3U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
                = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[4U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[2U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[3U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[4U]);
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 2U;
                }
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
            } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
            }
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
                    = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
            }
        }
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            VL_ADD_W(3, __Vtemp_hfa6acbd5__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor);
            __Vtemp_h639dda77__0[0U] = 1U;
            __Vtemp_h639dda77__0[1U] = 0U;
            __Vtemp_h639dda77__0[2U] = 0U;
            __Vtemp_h542f4076__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]);
            __Vtemp_h542f4076__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]);
            __Vtemp_h542f4076__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
            VL_ADD_W(3, __Vtemp_h9a13d95c__0, __Vtemp_h542f4076__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem);
            VL_ADD_W(3, __Vtemp_hbdabb437__0, __Vtemp_h639dda77__0, __Vtemp_h9a13d95c__0);
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                    = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       << 1U);
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                                     << 1U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                    = (3U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                              >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                                           << 1U)));
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U];
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U];
                }
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                    = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       << 1U);
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                                     << 1U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                                     << 1U));
                if ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U])) {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        = __Vtemp_hfa6acbd5__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        = __Vtemp_hfa6acbd5__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                        = (1U & __Vtemp_hfa6acbd5__0[2U]);
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        = __Vtemp_hbdabb437__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        = __Vtemp_hbdabb437__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                        = (1U & __Vtemp_hbdabb437__0[2U]);
                }
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 1U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType 
                    = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                    = (3U & 0U);
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
            }
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U]);
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
                        << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
                                     >> 2U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
                        << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
                                     >> 2U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                    = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
                             >> 2U));
                if ((0x40U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))) {
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 2U;
                }
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
            } else {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22;
                }
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
                    = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                        ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21));
            }
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
                        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
                }
            }
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T
                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                        ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                        : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T)
                            : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))
                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T))));
        }
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)))) {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                    ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                        ? (((QData)((IData)(((1U & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                    : 0ULL));
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst;
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
            if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg) {
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr 
                    = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                >> 0x14U));
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                    = ((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0x14U)) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                        ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                        : ((0x1fU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0x14U)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                            : ((0x1eU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                : ((0x1dU == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                    : ((0x1cU == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                        : ((0x1bU == 
                                            (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0x14U)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58))))));
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
            }
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid;
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg) {
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
                    = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                >> 0xfU));
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                    = ((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0xfU)) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                        ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                        : ((0x1fU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xfU)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                            : ((0x1eU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0xfU)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                : ((0x1dU == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                    : ((0x1cU == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                        : ((0x1bU == 
                                            (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xfU)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26))))));
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
            }
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)
                    ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                        ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))
                    : 0U);
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre 
                = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))));
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
            if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
            if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
            }
        }
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc;
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
                if ((0x35U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x36U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x37U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x38U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x39U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x3aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x3bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x28U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x29U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x2bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x2aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x2fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x30U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x1eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x1dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x1cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x1bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x22U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x23U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x10U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0xeU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0xfU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x11U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x15U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x16U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((8U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((9U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((1U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((2U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((4U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((3U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
                if ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[3U] 
                        = (0x4000000U | vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U]);
                }
            }
            if ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x3bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x3aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x39U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x38U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x37U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x36U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x35U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x30U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x28U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x2aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x2bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x2fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x29U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x1cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x1bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x23U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x22U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x1dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x1eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x10U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0xfU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0xeU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x11U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x15U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x16U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((4U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((3U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((2U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((8U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((1U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((9U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
            if ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
            }
        }
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict;
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                    = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = 0ULL;
            }
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
            if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U] = 0U;
            }
            if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U] = 0U;
            }
            if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U] = 0U;
            }
            if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U] = 0U;
            }
            if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U] = 0U;
            }
            if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U] = 0U;
            }
            if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U] = 0U;
            }
            if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U] = 0U;
            }
            if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U] = 0U;
            }
            if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U] = 0U;
            }
            if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U] = 0U;
            }
            if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U] = 0U;
            }
            if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U] = 0U;
            }
            if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U] = 0U;
            }
            if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U] = 0U;
            }
            if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U] = 0U;
            }
            if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U] = 0U;
            }
            if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U] = 0U;
            }
            if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U] = 0U;
            }
            if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U] = 0U;
            }
            if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U] = 0U;
            }
            if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U] = 0U;
            }
            if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U] = 0U;
            }
            if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U] = 0U;
            }
            if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U] = 0U;
            }
            if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U] = 0U;
            }
            if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U] = 0U;
            }
            if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U] = 0U;
            }
            if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U] = 0U;
            }
            if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U] = 0U;
            }
            if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U] = 0U;
            }
            if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U] = 0U;
            }
            if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U] = 0U;
            }
            if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U] = 0U;
            }
            if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U] = 0U;
            }
            if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U] = 0U;
            }
            if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U] = 0U;
            }
            if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U] = 0U;
            }
            if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U] = 0U;
            }
            if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U] = 0U;
            }
            if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U] = 0U;
            }
            if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U] = 0U;
            }
            if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U] = 0U;
            }
            if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U] = 0U;
            }
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U] = 0U;
            }
            if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U] = 0U;
            }
            if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U] = 0U;
            }
            if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U] = 0U;
            }
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U] = 0U;
            }
            if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U] = 0U;
            }
            if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U] = 0U;
            }
            if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U] = 0U;
            }
            if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U] = 0U;
            }
            if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U] = 0U;
            }
            if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U] = 0U;
            }
            if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U] = 0U;
            }
            if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U] = 0U;
            }
            if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U] = 0U;
            }
            if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U] = 0U;
            }
            if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U] = 0U;
            }
            if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U] = 0U;
            }
            if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U] = 0U;
            }
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] = 0U;
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] = 0U;
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] = 0U;
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] = 0U;
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] = 0U;
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] = 0U;
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] = 0U;
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] = 0U;
            if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U] = 0U;
            }
            if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U] = 0U;
            }
        } else if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U];
        } else if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U];
        } else {
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U];
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
            if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U] = 0U;
            }
            if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U] = 0U;
            }
            if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U] = 0U;
            }
            if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U] = 0U;
            }
            if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U] = 0U;
            }
            if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U] = 0U;
            }
            if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U] = 0U;
            }
            if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U] = 0U;
            }
            if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U] = 0U;
            }
            if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U] = 0U;
            }
            if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U] = 0U;
            }
            if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U] = 0U;
            }
            if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U] = 0U;
            }
            if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U] = 0U;
            }
            if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U] = 0U;
            }
            if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U] = 0U;
            }
            if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U] = 0U;
            }
            if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U] = 0U;
            }
            if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U] = 0U;
            }
            if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U] = 0U;
            }
            if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U] = 0U;
            }
            if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U] = 0U;
            }
            if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U] = 0U;
            }
            if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U] = 0U;
            }
            if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U] = 0U;
            }
            if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U] = 0U;
            }
            if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U] = 0U;
            }
            if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U] = 0U;
            }
            if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U] = 0U;
            }
            if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U] = 0U;
            }
            if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U] = 0U;
            }
            if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U] = 0U;
            }
            if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U] = 0U;
            }
            if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U] = 0U;
            }
            if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U] = 0U;
            }
            if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U] = 0U;
            }
            if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U] = 0U;
            }
            if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U] = 0U;
            }
            if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U] = 0U;
            }
            if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U] = 0U;
            }
            if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U] = 0U;
            }
            if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U] = 0U;
            }
            if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U] = 0U;
            }
            if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U] = 0U;
            }
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U] = 0U;
            }
            if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U] = 0U;
            }
            if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U] = 0U;
            }
            if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U] = 0U;
            }
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U] = 0U;
            }
            if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U] = 0U;
            }
            if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U] = 0U;
            }
            if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U] = 0U;
            }
            if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U] = 0U;
            }
            if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U] = 0U;
            }
            if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U] = 0U;
            }
            if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U] = 0U;
            }
            if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U] = 0U;
            }
            if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U] = 0U;
            }
            if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U] = 0U;
            }
            if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U] = 0U;
            }
            if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U] = 0U;
            }
            if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U] = 0U;
            }
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] = 0U;
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] = 0U;
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] = 0U;
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] = 0U;
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] = 0U;
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] = 0U;
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] = 0U;
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] = 0U;
            if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U] = 0U;
            }
            if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
                vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                               >> 0xaU));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 0xaU) >> 0x20U));
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U] = 0U;
                vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U] = 0U;
            }
        } else if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U];
        } else if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U];
        } else {
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[3U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] 
                = vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U];
        }
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) {
            vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
                = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                        : 0ULL));
        } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6) {
            vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
                = vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1;
        }
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_valid) {
                    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
                        = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9;
                    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
                        = (0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
                    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
                        = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7;
                }
            }
            vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen 
                = (0xfU & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_18));
        } else {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
                    = (8ULL + vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr);
            }
            vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
                = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_1;
            __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
                = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_2;
            vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen 
                = (0xfU & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_4));
        }
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                    ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                             ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10)));
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
        } else {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram1_valid_T;
            }
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T;
            }
        }
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1;
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T) {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
        } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType 
                    = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral 
                    = (0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
                                >> 0x1fU));
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = 0ULL;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral = 0U;
            }
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result;
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en 
                        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w)));
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
                }
            }
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
                     == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                         >> 0x14U)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                    : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                        : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                       >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                            : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                ? 0ULL : ((0x343U == 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                           : ((0x342U 
                                               == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                               : ((0x341U 
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
                                                           : 0ULL)))))))))))))));
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_is_exception) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
                = (QData)((IData)((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))));
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
                = (0x8000000000000000ULL | (QData)((IData)(
                                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_time_irq)
                                                             ? 7U
                                                             : 3U))));
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_is_exception)
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc);
        } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mtval_T_1;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcause_T_3;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mepc_T_2;
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst 
                = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst;
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg 
                = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                   | ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                      | ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                         | ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                            | ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                               & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                   ? (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 5U)) : 
                                  ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                   & ((0U != (7U & 
                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xcU))) 
                                      & (6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))))))))));
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
                = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                    ? 1U : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                             ? 1U : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                      ? 5U : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                               ? 2U
                                               : ((4U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                   ? 2U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                      ? 3U
                                                      : 0U))))))));
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr 
                = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr;
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc;
            } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc;
            }
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle 
                = ((0xb00U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2);
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
                = ((0xb02U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3);
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_is_exception))))) {
                if ((0x340U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
                }
                if ((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
                }
            }
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3;
        }
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid) {
                vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state = 1U;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                    = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb 
                    = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                    = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                       >> 0xaU);
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index 
                    = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                        >> 4U)));
                vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
                    = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr));
            } else {
                vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state = 0U;
            }
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_23;
        } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_haa56ce0f__0)
                        ? 3U : 2U);
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29;
            } else {
                vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state = 2U;
            }
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50;
            }
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_98;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_99;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_97;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96;
        } else {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_105;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_101;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_103;
        }
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33;
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U];
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
                        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0)));
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
                        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T)
                                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)));
                }
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                    = ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2));
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52;
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53;
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55;
                }
            } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93;
            }
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception 
            = ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                >> 2U))) ? 0xbU : (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 3U
                                                    : 0U));
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag 
                    = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT____VdfgTmp_h59dedee5__0)
                              ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit))
                              : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_2)
                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T)
                                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0))));
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))) {
                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10;
                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13;
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                        = (0xfffffffffffffff0ULL & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr);
                }
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21;
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
                    = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT____VdfgTmp_h59dedee5__0)) 
                             | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_7))));
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = 0U;
                if ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))) {
                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
                }
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = 0U;
            }
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
        } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_34;
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_33;
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_32;
            }
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_40;
        }
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[2U];
                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[3U];
                }
            }
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_33));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_34));
    vlSelf->io_difftest_commit = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit;
    vlSelf->io_difftest_irq = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq;
    vlSelf->io_inst_counter = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1 
        = (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3 
        = (7U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    vlSelf->io_difftest_inst = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    VL_SHIFTR_WWI(67,67,32, __Vtemp_h651a80f2__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2, 2U);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U] 
        = __Vtemp_h651a80f2__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U] 
        = __Vtemp_h651a80f2__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U] 
        = (7U & __Vtemp_h651a80f2__0[2U]);
    __Vtemp_hafbeccdd__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U];
    __Vtemp_hafbeccdd__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U];
    __Vtemp_hafbeccdd__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U];
    __Vtemp_hafbeccdd__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U];
    __Vtemp_hafbeccdd__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U];
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
        __Vtemp_heb7e6024__0[0U] = __Vtemp_h83a42262__0[0U];
        __Vtemp_heb7e6024__0[1U] = __Vtemp_h83a42262__0[1U];
        __Vtemp_heb7e6024__0[2U] = __Vtemp_h83a42262__0[2U];
        __Vtemp_heb7e6024__0[3U] = __Vtemp_h83a42262__0[3U];
        __Vtemp_heb7e6024__0[4U] = (3U & __Vtemp_h83a42262__0[4U]);
    } else if ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_heb7e6024__0[0U] = __Vtemp_h00d757e1__0[0U];
        __Vtemp_heb7e6024__0[1U] = __Vtemp_h00d757e1__0[1U];
        __Vtemp_heb7e6024__0[2U] = __Vtemp_h00d757e1__0[2U];
        __Vtemp_heb7e6024__0[3U] = __Vtemp_h00d757e1__0[3U];
        __Vtemp_heb7e6024__0[4U] = (3U & __Vtemp_h00d757e1__0[4U]);
    } else if ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_heb7e6024__0[0U] = (__Vtemp_hcd0c4155__0[0U] 
                                    << 1U);
        __Vtemp_heb7e6024__0[1U] = ((__Vtemp_hcd0c4155__0[0U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[1U] 
                                                  << 1U));
        __Vtemp_heb7e6024__0[2U] = ((__Vtemp_hcd0c4155__0[1U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[2U] 
                                                  << 1U));
        __Vtemp_heb7e6024__0[3U] = ((__Vtemp_hcd0c4155__0[2U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[3U] 
                                                  << 1U));
        __Vtemp_heb7e6024__0[4U] = ((__Vtemp_hcd0c4155__0[3U] 
                                     >> 0x1fU) | (6U 
                                                  & (__Vtemp_hcd0c4155__0[4U] 
                                                     << 1U)));
    } else if ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_heb7e6024__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                    << 1U);
        __Vtemp_heb7e6024__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                  << 1U));
        __Vtemp_heb7e6024__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                  << 1U));
        __Vtemp_heb7e6024__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                  << 1U));
        __Vtemp_heb7e6024__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                  << 1U));
    } else if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_heb7e6024__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp_heb7e6024__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp_heb7e6024__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp_heb7e6024__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp_heb7e6024__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else if ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_heb7e6024__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp_heb7e6024__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp_heb7e6024__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp_heb7e6024__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp_heb7e6024__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp_heb7e6024__0[0U] = 0U;
        __Vtemp_heb7e6024__0[1U] = 0U;
        __Vtemp_heb7e6024__0[2U] = 0U;
        __Vtemp_heb7e6024__0[3U] = 0U;
        __Vtemp_heb7e6024__0[4U] = 0U;
    }
    VL_ADD_W(5, __Vtemp_h343b7f0d__0, __Vtemp_hafbeccdd__0, __Vtemp_heb7e6024__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U] 
        = __Vtemp_h343b7f0d__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U] 
        = __Vtemp_h343b7f0d__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U] 
        = __Vtemp_h343b7f0d__0[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U] 
        = __Vtemp_h343b7f0d__0[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U] 
        = (7U & __Vtemp_h343b7f0d__0[4U]);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[0U] 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
               << 2U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[4U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[4U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[4U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[4U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U];
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[4U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U];
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h4cbd0032__0, __Vtemp_h639dda77__1, __Vtemp_h3fef5ac1__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = (((0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])) 
            & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                  >> 1U))) | ((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                        ^ __Vtemp_h4cbd0032__0[0U]) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                          ^ __Vtemp_h4cbd0032__0[1U])) 
                                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                         ^ (1U & __Vtemp_h4cbd0032__0[2U])))) 
                              | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                         | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    vlSelf->io_difftest_reg_26 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26;
    vlSelf->io_difftest_reg_21 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21;
    vlSelf->io_difftest_reg_19 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19;
    vlSelf->io_difftest_reg_20 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20;
    vlSelf->io_difftest_reg_14 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14;
    vlSelf->io_difftest_reg_22 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22;
    vlSelf->io_difftest_reg_23 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23;
    vlSelf->io_difftest_reg_24 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24;
    vlSelf->io_difftest_reg_25 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25;
    vlSelf->io_difftest_reg_15 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15;
    vlSelf->io_difftest_reg_16 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16;
    vlSelf->io_difftest_reg_17 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17;
    vlSelf->io_difftest_reg_18 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18;
    vlSelf->io_difftest_reg_9 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9;
    vlSelf->io_difftest_reg_7 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7;
    vlSelf->io_difftest_reg_11 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11;
    vlSelf->io_difftest_reg_2 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2;
    vlSelf->io_difftest_reg_10 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10;
    vlSelf->io_difftest_reg_1 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1;
    vlSelf->io_difftest_reg_5 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5;
    vlSelf->io_difftest_reg_6 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6;
    vlSelf->io_difftest_reg_8 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8;
    vlSelf->io_difftest_reg_0 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0;
    vlSelf->io_difftest_reg_3 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3;
    vlSelf->io_difftest_reg_12 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12;
    vlSelf->io_difftest_reg_4 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4;
    vlSelf->io_difftest_reg_13 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13;
    vlSelf->io_difftest_peripheral = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral;
    vlSelf->io_difftest_pc = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1 
        = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_valid 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    VL_ADD_W(3, __Vtemp_h7cbb49d7__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
    __Vtemp_h639dda77__2[0U] = 1U;
    __Vtemp_h639dda77__2[1U] = 0U;
    __Vtemp_h639dda77__2[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h9d6f1a37__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp_h3fef5ac1__1);
    VL_ADD_W(3, __Vtemp_h06c51df9__0, __Vtemp_h639dda77__2, __Vtemp_h9d6f1a37__0);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 = 0U;
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
                    = __Vtemp_h7cbb49d7__0[0U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
                    = __Vtemp_h7cbb49d7__0[1U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
                    = (1U & __Vtemp_h7cbb49d7__0[2U]);
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
                    = __Vtemp_h06c51df9__0[0U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
                    = __Vtemp_h06c51df9__0[1U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
                    = (1U & __Vtemp_h06c51df9__0[2U]);
            }
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
                = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
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
    __Vtemp_h639dda77__3[0U] = 1U;
    __Vtemp_h639dda77__3[1U] = 0U;
    __Vtemp_h639dda77__3[2U] = 0U;
    __Vtemp_h3fef5ac1__2[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__2[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__2[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h026c25f7__0, __Vtemp_h639dda77__3, __Vtemp_h3fef5ac1__2);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
        __Vtemp_h78c61827__0[0U] = 0U;
        __Vtemp_h78c61827__0[1U] = 0U;
        __Vtemp_h78c61827__0[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                    << 2U);
        __Vtemp_h78c61827__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                     >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                                  << 2U));
        __Vtemp_h78c61827__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                     >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                                  << 2U));
    } else {
        __Vtemp_h78c61827__0[0U] = 1U;
        __Vtemp_h78c61827__0[1U] = 0U;
        __Vtemp_h78c61827__0[2U] = (__Vtemp_h026c25f7__0[0U] 
                                    << 2U);
        __Vtemp_h78c61827__0[3U] = ((__Vtemp_h026c25f7__0[0U] 
                                     >> 0x1eU) | (__Vtemp_h026c25f7__0[1U] 
                                                  << 2U));
        __Vtemp_h78c61827__0[4U] = ((__Vtemp_h026c25f7__0[1U] 
                                     >> 0x1eU) | (4U 
                                                  & (__Vtemp_h026c25f7__0[2U] 
                                                     << 2U)));
    }
    VL_ADD_W(5, __Vtemp_h54c8b823__0, __Vtemp_he5b4b165__0, __Vtemp_h78c61827__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U] 
        = __Vtemp_h54c8b823__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U] 
        = __Vtemp_h54c8b823__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
        = __Vtemp_h54c8b823__0[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
        = __Vtemp_h54c8b823__0[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
        = (0xfU & __Vtemp_h54c8b823__0[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
                                         & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                             ? ((~ 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) 
                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_35))
                                             : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79)
                                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104)))));
    __Vtemp_h61799857__0[0U] = 1U;
    __Vtemp_h61799857__0[1U] = 0U;
    __Vtemp_h61799857__0[2U] = 0U;
    __Vtemp_h9e5fa0df__1[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                << 1U);
    __Vtemp_h9e5fa0df__1[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                              << 1U));
    __Vtemp_h9e5fa0df__1[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                              << 1U));
    VL_ADD_W(3, __Vtemp_h9eba89b7__0, __Vtemp_h61799857__0, __Vtemp_h9e5fa0df__1);
    __Vtemp_h624b2931__1[0U] = 1U;
    __Vtemp_h624b2931__1[1U] = 0U;
    __Vtemp_h624b2931__1[2U] = 0U;
    VL_SUB_W(3, __Vtemp_h6abef518__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q, __Vtemp_h624b2931__1);
    __Vtemp_h624b2931__2[0U] = 1U;
    __Vtemp_h624b2931__2[1U] = 0U;
    __Vtemp_h624b2931__2[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hf8d20176__0, __Vtemp_h624b2931__2, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
            = (7U & (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U]));
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
            = __Vtemp_h9eba89b7__0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
            = __Vtemp_h9eba89b7__0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
            = (7U & __Vtemp_h9eba89b7__0[2U]);
    } else {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                        = __Vtemp_h6abef518__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                        = __Vtemp_h6abef518__0[1U];
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                        = __Vtemp_hf8d20176__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                        = __Vtemp_hf8d20176__0[1U];
                }
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
            }
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
            = (7U & (3U & ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                            ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                    ? __Vtemp_h6abef518__0[2U]
                                    : __Vtemp_hf8d20176__0[2U])
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U])
                            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U])));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data 
        = ((IData)((0U != (9U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata
            : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data
                : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                        ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                            : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                            ? (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                            : ((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                             >> 2U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))
                    : 0ULL)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U] 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
           << 2U);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U] 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
            >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                  >> 0x20U)) << 2U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U] 
        = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                     >> 9U)) << 3U) | ((4U & ((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 2U)) 
                                              << 2U)) 
                                       | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U] 
        = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                     >> 9U)) >> 0x1dU) | ((IData)((
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                    >> 9U) 
                                                   >> 0x20U)) 
                                          << 3U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13 
        = ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                      >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13)
            : ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                          >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12)
                : ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                              >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11)
                    : ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10)
                        : ((9U == (0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                    >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9)
                            : ((8U == (0x3fU & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8)
                                : ((7U == (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7)
                                    : ((6U == (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                          >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6)
                                        : ((5U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                              >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1)
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0))))))))))))));
    vlSelf->io_difftest_reg_31 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31;
    vlSelf->io_difftest_reg_30 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30;
    vlSelf->io_difftest_reg_29 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29;
    vlSelf->io_difftest_reg_28 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28;
    vlSelf->io_difftest_reg_27 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3 
        = ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus) 
           | ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                             >> 3U))) ? 0x1880ULL : 0x1800ULL));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle);
}
