// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc___024root.h"

extern "C" void set_difftest_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_difftest_inst_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_inst_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_inst_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_inst_ptr(&a__Vopenarray);
}

extern "C" void set_difftest_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_pc_ptr(&a__Vopenarray);
}

extern "C" void set_difftest_commit_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_commit_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_commit_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_commit_ptr(&a__Vopenarray);
}

extern "C" void set_difftest_inst_counter_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_inst_counter_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_inst_counter_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_inst_counter_ptr(&a__Vopenarray);
}

extern "C" void set_difftest_irq(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_irq__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_irq__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_irq(&a__Vopenarray);
}

extern "C" void set_difftest_peripheral(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_peripheral__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_peripheral__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_peripheral(&a__Vopenarray);
}

extern "C" void set_difftest_mstatus_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mstatus_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mstatus_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_mstatus_ptr(&a__Vopenarray);
}

extern "C" void set_difftest_mcause_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mcause_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mcause_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_mcause_ptr(&a__Vopenarray);
}

extern "C" void set_difftest_mtvec_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mtvec_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mtvec_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_mtvec_ptr(&a__Vopenarray);
}

extern "C" void set_difftest_mepc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mepc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mepc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_difftest_mepc_ptr(&a__Vopenarray);
}

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
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clock) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__clock));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___nba_sequent__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vtask_ramCtrl__11__rdata;
    __Vtask_ramCtrl__11__rdata = 0;
    // Body
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                                                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                                                : vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr), __Vtask_ramCtrl__11__rdata, (IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid), vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, 
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
                                                              ((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid) 
                                                               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__11__rdata;
}
