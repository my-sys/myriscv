// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf);

Vriscv_soc___024root::Vriscv_soc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscv_soc___024root___ctor_var_reset(this);
}

void Vriscv_soc___024root::__Vconfigure(Vriscv_soc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vriscv_soc___024root::~Vriscv_soc___024root() {
}

void Vriscv_soc___024root___initial__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_difftest_reg_0 = 0ULL;
    vlSelf->io_difftest_reg_1 = 0ULL;
    vlSelf->io_difftest_reg_2 = 0ULL;
    vlSelf->io_difftest_reg_3 = 0ULL;
    vlSelf->io_difftest_reg_4 = 0ULL;
    vlSelf->io_difftest_reg_5 = 0ULL;
    vlSelf->io_difftest_reg_6 = 0ULL;
    vlSelf->io_difftest_reg_7 = 0ULL;
    vlSelf->io_difftest_reg_8 = 0ULL;
    vlSelf->io_difftest_reg_9 = 0ULL;
    vlSelf->io_difftest_reg_10 = 0ULL;
    vlSelf->io_difftest_reg_11 = 0ULL;
    vlSelf->io_difftest_reg_12 = 0ULL;
    vlSelf->io_difftest_reg_13 = 0ULL;
    vlSelf->io_difftest_reg_14 = 0ULL;
    vlSelf->io_difftest_reg_15 = 0ULL;
    vlSelf->io_difftest_reg_16 = 0ULL;
    vlSelf->io_difftest_reg_17 = 0ULL;
    vlSelf->io_difftest_reg_18 = 0ULL;
    vlSelf->io_difftest_reg_19 = 0ULL;
    vlSelf->io_difftest_reg_20 = 0ULL;
    vlSelf->io_difftest_reg_21 = 0ULL;
    vlSelf->io_difftest_reg_22 = 0ULL;
    vlSelf->io_difftest_reg_23 = 0ULL;
    vlSelf->io_difftest_reg_24 = 0ULL;
    vlSelf->io_difftest_reg_25 = 0ULL;
    vlSelf->io_difftest_reg_26 = 0ULL;
    vlSelf->io_difftest_reg_27 = 0ULL;
    vlSelf->io_difftest_reg_28 = 0ULL;
    vlSelf->io_difftest_reg_29 = 0ULL;
    vlSelf->io_difftest_reg_30 = 0ULL;
    vlSelf->io_difftest_reg_31 = 0ULL;
    vlSelf->io_difftest_pc = 0ULL;
    vlSelf->io_difftest_inst = 2U;
    vlSelf->io_difftest_commit = 0U;
    vlSelf->io_inst_counter = 0ULL;
    vlSelf->io_difftest_irq = 0U;
    vlSelf->io_difftest_mstatus = 0ULL;
    vlSelf->io_difftest_mcause = 0ULL;
    vlSelf->io_difftest_mepc = 0ULL;
    vlSelf->io_difftest_mtvec = 0ULL;
    vlSelf->io_difftest_peripheral = 0U;
}

void Vriscv_soc___024root___settle__TOP__3(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___settle__TOP__3\n"); );
    // Variables
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT__valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN;
    VlWide<3>/*95:0*/ __Vtemp373;
    VlWide<4>/*127:0*/ __Vtemp408;
    VlWide<4>/*127:0*/ __Vtemp409;
    VlWide<4>/*127:0*/ __Vtemp410;
    VlWide<4>/*127:0*/ __Vtemp411;
    VlWide<3>/*95:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp416;
    VlWide<3>/*95:0*/ __Vtemp417;
    VlWide<3>/*95:0*/ __Vtemp418;
    VlWide<4>/*127:0*/ __Vtemp421;
    VlWide<4>/*127:0*/ __Vtemp422;
    VlWide<4>/*127:0*/ __Vtemp425;
    VlWide<4>/*127:0*/ __Vtemp426;
    VlWide<4>/*127:0*/ __Vtemp434;
    VlWide<4>/*127:0*/ __Vtemp435;
    VlWide<16>/*511:0*/ __Vtemp438;
    VlWide<3>/*95:0*/ __Vtemp441;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp448;
    VlWide<3>/*95:0*/ __Vtemp452;
    VlWide<3>/*95:0*/ __Vtemp459;
    VlWide<3>/*95:0*/ __Vtemp463;
    VlWide<5>/*159:0*/ __Vtemp465;
    VlWide<5>/*159:0*/ __Vtemp466;
    VlWide<17>/*543:0*/ __Vtemp468;
    VlWide<3>/*95:0*/ __Vtemp472;
    VlWide<8>/*255:0*/ __Vtemp481;
    VlWide<8>/*255:0*/ __Vtemp484;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1;
    // Body
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_7 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4 = (0U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    __Vtemp373[1U] = (IData)((((QData)((IData)((((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                >> 0xfU)))) 
                                                 << 0x18U) 
                                                | ((0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                      >> 0xeU)))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                         >> 0xdU)))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                          >> 0xcU)))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                            >> 0xbU)))) 
                                                             << 0x18U) 
                                                            | ((0xff0000U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 0xaU)))) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 9U)))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 8U))))))))))));
    __Vtemp373[2U] = (IData)(((((QData)((IData)((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                 >> 0xfU)))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                       >> 0xeU)))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                          >> 0xdU)))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                           >> 0xcU)))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                             >> 0xbU)))) 
                                                              << 0x18U) 
                                                             | ((0xff0000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 0xaU)))) 
                                                                    << 0x10U)) 
                                                                | ((0xff00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 9U)))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 8U))))))))))) 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                              >> 3U)))) << 0x18U) | 
           ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                            >> 2U)))) 
                          << 0x10U)) | ((0xff00U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                                        (0xffU & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U] 
        = (((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                              >> 7U)))) << 0x18U) | 
           ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                            >> 6U)))) 
                          << 0x10U)) | ((0xff00U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                         >> 5U)))) 
                                          << 8U)) | 
                                        (0xffU & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                >> 4U))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U] 
        = __Vtemp373[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = __Vtemp373[2U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                           >> 3U)))];
    riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index) 
           == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready) 
              & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    if ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
            = vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][0U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][1U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][2U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][3U];
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid 
        = ((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                              >> 0x1fU)))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[1U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[2U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[3U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[4U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[5U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[6U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[7U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[8U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[9U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xaU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xbU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xcU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xdU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xeU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xfU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x10U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x11U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x12U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x13U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x14U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x15U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x16U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x17U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x18U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x19U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x20U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x21U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x22U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x23U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x24U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x25U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x26U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x27U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x28U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x29U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x30U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x31U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x32U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x33U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x34U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x35U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x36U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x37U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x38U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x39U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3 
        = ((IData)((0U != (9U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata
            : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data
                : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                        ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                            : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                            >> 0x1fU))))) 
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret 
        = ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) | (0x18U == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 4U : (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                     | (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)))
                     ? 2U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                             | (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)))));
    vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U] 
             >> 0x1aU) & ((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U])) 
                                                     >> 2U))) 
                          == ((0xfffffffffffffeULL 
                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 8U)) | (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                        >> 2U)))))))) 
           & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory
              [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                 >> 3U)))] >> 1U));
    riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) 
           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory
           [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid) 
             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))) 
            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
            ? ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U]))
                ? ((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory
                   [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                    : 0ULL) : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U])) 
                                                >> 2U))))
            : 0ULL);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc 
        = (((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
        = (((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie 
        = (((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data 
        = ((((vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
              >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                           >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                               >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                    : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                   >> 0x14U)) ? 0ULL
                        : ((0x343U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                       >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                            : ((0x342U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                           >> 0x14U))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                : ((0x341U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                               >> 0x14U))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                    : ((0x340U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                        : ((0x306U 
                                            == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                >> 0x14U))
                                            ? 0ULL : 
                                           ((0x305U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                             : ((0x304U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                 : 
                                                (((((0x303U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                      >> 0x14U)) 
                                                    | (0x302U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                        >> 0x14U))) 
                                                   | (0x301U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                       >> 0x14U))) 
                                                  | (0x300U 
                                                     != 
                                                     (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
        = ((0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
        = (((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
           + (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                           >> 0x1fU))))) 
               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
           + (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                           >> 0x1fU))))) 
               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2 
        = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 3U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid 
        = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 2U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2 
        = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid 
        = (((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
              >> 1U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
            & (6U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2
            : (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data 
           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
        = ((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq 
        = (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
           == riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
        = ((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 5U))) ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
            : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_EXTEND_WQ(127,64, __Vtemp408, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    VL_EXTEND_WI(124,3, __Vtemp409, (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)));
    __Vtemp410[0U] = (__Vtemp409[0U] << 3U);
    __Vtemp410[1U] = ((__Vtemp409[0U] >> 0x1dU) | (
                                                   __Vtemp409[1U] 
                                                   << 3U));
    __Vtemp410[2U] = ((__Vtemp409[1U] >> 0x1dU) | (
                                                   __Vtemp409[2U] 
                                                   << 3U));
    __Vtemp410[3U] = ((__Vtemp409[2U] >> 0x1dU) | (
                                                   __Vtemp409[3U] 
                                                   << 3U));
    VL_SHIFTL_WWW(127,127,127, __Vtemp411, __Vtemp408, __Vtemp410);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp411[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp411[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp411[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp411[3U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN 
        = (0xffU & ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? (0x7ffU & ((IData)(0xfU) << 
                                  (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                     : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                         ? (0x1ffU & ((IData)(3U) << 
                                      (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                         : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                             ? (0x7fffU & ((IData)(0xffU) 
                                           << (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                             : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? ((IData)(1U) << 
                                    (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)))
                                 : 0U)))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)) 
               & 1U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) | (8U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid) 
           & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                 >> 4U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 1U));
    riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
        = (0x3fU & ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? (0x1fU & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                     : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    VL_EXTEND_WQ(65,64, __Vtemp414, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    VL_EXTEND_WQ(65,64, __Vtemp415, ((- (QData)((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                             >> 5U)))))) 
                                     ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp416, __Vtemp414, __Vtemp415);
    VL_EXTEND_WI(65,1, __Vtemp417, (1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U))));
    VL_ADD_W(3, __Vtemp418, __Vtemp416, __Vtemp417);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U] 
        = __Vtemp418[0U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
        = __Vtemp418[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U] 
        = (1U & __Vtemp418[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) 
           & (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    if (riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel) {
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U])));
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                 >> 0x3fU)) ^ (IData)(
                                                      (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                             >> 0x3fU)) : (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
                                           >> 0x1fU)));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U];
    }
    VL_EXTEND_WQ(128,54, __Vtemp421, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp422, (0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                   ? 
                                                                  __Vtemp421[1U]
                                                                   : 
                                                                  __Vtemp422[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? 
                                                                   __Vtemp421[0U]
                                                                    : 
                                                                   __Vtemp422[0U]))))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U];
    }
    VL_EXTEND_WQ(128,54, __Vtemp425, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp426, (0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                   ? 
                                                                  __Vtemp425[1U]
                                                                   : 
                                                                  __Vtemp426[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? 
                                                                   __Vtemp425[0U]
                                                                    : 
                                                                   __Vtemp426[0U]))))));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A 
        = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                     : (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))));
    VL_EXTEND_WQ(127,64, __Vtemp434, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp435, __Vtemp434, (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
    __Vtemp438[0U] = (IData)((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))));
    __Vtemp438[1U] = (IData)(((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))) 
                              >> 0x20U));
    __Vtemp438[2U] = (IData)((((QData)((IData)(__Vtemp435[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           __Vtemp435[0U]))));
    __Vtemp438[3U] = (IData)(((((QData)((IData)(__Vtemp435[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp435[0U]))) 
                              >> 0x20U));
    __Vtemp438[4U] = (IData)((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)));
    __Vtemp438[5U] = (IData)(((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)) 
                              >> 0x20U));
    __Vtemp438[6U] = (IData)((QData)((IData)((1U & 
                                              (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))));
    __Vtemp438[7U] = (IData)(((QData)((IData)((1U & 
                                               (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))) 
                              >> 0x20U));
    __Vtemp438[8U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                              ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp438[9U] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                               ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                              >> 0x20U));
    __Vtemp438[0xaU] = (IData)(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 5U)))
                                 ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                 : VL_SHIFTR_QQQ(64,64,64, 
                                                 ((1U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                   ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))));
    __Vtemp438[0xbU] = (IData)((((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                  ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                  : VL_SHIFTR_QQQ(64,64,64, 
                                                  ((1U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                    ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))) 
                                >> 0x20U));
    __Vtemp438[0xcU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp438[0xdU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                >> 0x20U));
    __Vtemp438[0xeU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp438[0xfU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)
            : (((QData)((IData)(__Vtemp438[(((IData)(0x3fU) 
                                             + (0x1c0U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   << 4U))) 
                                            >> 5U)])) 
                << 0x20U) | (QData)((IData)(__Vtemp438[
                                            (0xeU & 
                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 1U))]))));
    VL_EXTEND_WQ(65,64, __Vtemp441, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp444, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp448, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp452, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp459, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp463, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    if (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq) {
        __Vtemp465[0U] = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp465[1U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                  >> 0x20U));
    } else {
        __Vtemp465[0U] = __Vtemp463[0U];
        __Vtemp465[1U] = __Vtemp463[1U];
    }
    __Vtemp465[2U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp459[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                       << 1U) | ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                  ? 1U : __Vtemp463[2U]));
    __Vtemp465[3U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp459[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                       >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                      ? __Vtemp459[1U]
                                      : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                 >> 0x20U))) 
                                    << 1U));
    __Vtemp465[4U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp459[1U] : (IData)(
                                                    (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                     >> 0x20U))) 
                       >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                      ? __Vtemp459[2U]
                                      : 1U) << 1U));
    VL_EXTEND_WW(131,130, __Vtemp466, __Vtemp465);
    __Vtemp468[0U] = __Vtemp466[0U];
    __Vtemp468[1U] = __Vtemp466[1U];
    __Vtemp468[2U] = __Vtemp466[2U];
    __Vtemp468[3U] = __Vtemp466[3U];
    __Vtemp468[4U] = (((IData)((0x8000000000000000ULL 
                                | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 1U))) << 3U) 
                      | __Vtemp466[4U]);
    __Vtemp468[5U] = (((IData)((0x8000000000000000ULL 
                                | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 1U))) >> 0x1dU) 
                      | ((IData)(((0x8000000000000000ULL 
                                   | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                      >> 1U)) >> 0x20U)) 
                         << 3U));
    __Vtemp468[6U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                       << 3U) | ((IData)(((0x8000000000000000ULL 
                                           | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                              >> 1U)) 
                                          >> 0x20U)) 
                                 >> 0x1dU));
    __Vtemp468[7U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                       >> 0x1dU) | ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U)) 
                                    << 3U));
    __Vtemp468[8U] = (8U | (((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                      >> 0x20U)) >> 0x1dU) 
                            | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                 : __Vtemp452[0U]) 
                               << 4U)));
    __Vtemp468[9U] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                               ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                               : __Vtemp452[0U]) >> 0x1cU)) 
                      | ((8U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                  : __Vtemp452[0U]) 
                                >> 0x1cU)) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? (IData)(
                                                          (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 0x20U))
                                                : __Vtemp452[1U]) 
                                              << 4U)));
    __Vtemp468[0xaU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U))
                                 : __Vtemp452[1U]) 
                               >> 0x1cU)) | ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? __Vtemp448[0U]
                                                : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                              << 5U) 
                                             | ((8U 
                                                 & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))
                                                      : 
                                                     __Vtemp452[1U]) 
                                                    >> 0x1cU)) 
                                                | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 1U
                                                     : 
                                                    __Vtemp452[2U]) 
                                                   << 4U))));
    __Vtemp468[0xbU] = ((7U & ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? __Vtemp448[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                >> 0x1bU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                               ? 1U
                                               : __Vtemp452[2U]) 
                                             >> 0x1cU))) 
                        | ((0x18U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                       ? __Vtemp448[0U]
                                       : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                     >> 0x1bU)) | (
                                                   ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 
                                                    __Vtemp448[1U]
                                                     : (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))) 
                                                   << 5U)));
    __Vtemp468[0xcU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? __Vtemp448[1U] : (IData)(
                                                            (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))) 
                               >> 0x1bU)) | ((((1U 
                                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? __Vtemp444[0U]
                                                : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                              << 6U) 
                                             | ((0x18U 
                                                 & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 
                                                     __Vtemp448[1U]
                                                      : (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))) 
                                                    >> 0x1bU)) 
                                                | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 
                                                    __Vtemp448[2U]
                                                     : 1U) 
                                                   << 5U))));
    __Vtemp468[0xdU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? __Vtemp444[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                >> 0x1aU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                               ? __Vtemp448[2U]
                                               : 1U) 
                                             >> 0x1bU))) 
                        | ((0x38U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                       ? __Vtemp444[0U]
                                       : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                     >> 0x1aU)) | (
                                                   ((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? 
                                                    __Vtemp444[1U]
                                                     : (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))) 
                                                   << 6U)));
    __Vtemp468[0xeU] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                 ? __Vtemp444[1U] : (IData)(
                                                            (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))) 
                               >> 0x1aU)) | ((((1U 
                                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                : __Vtemp441[0U]) 
                                              << 7U) 
                                             | ((0x38U 
                                                 & (((1U 
                                                      & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                      ? 
                                                     __Vtemp444[1U]
                                                      : (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))) 
                                                    >> 0x1aU)) 
                                                | (((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? 
                                                    __Vtemp444[2U]
                                                     : 1U) 
                                                   << 6U))));
    __Vtemp468[0xfU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                  : __Vtemp441[0U]) 
                                >> 0x19U) | (((1U & 
                                               riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                               ? __Vtemp444[2U]
                                               : 1U) 
                                             >> 0x1aU))) 
                        | ((0x78U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                       ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                       : __Vtemp441[0U]) 
                                     >> 0x19U)) | (
                                                   ((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp441[1U]) 
                                                   << 7U)));
    __Vtemp468[0x10U] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))
                                  : __Vtemp441[1U]) 
                                >> 0x19U)) | ((0x78U 
                                               & (((1U 
                                                    & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                    ? (IData)(
                                                              (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp441[1U]) 
                                                  >> 0x19U)) 
                                              | (((1U 
                                                   & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                   ? 1U
                                                   : 
                                                  __Vtemp441[2U]) 
                                                 << 7U)));
    if ((0x207U >= (0x3ffU & ((IData)(0x41U) * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))) {
        __Vtemp472[0U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp468[((IData)(1U) 
                                                + (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))))) 
                          | (__Vtemp468[(0x1fU & (((IData)(0x41U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U))) 
                                                  >> 5U))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        __Vtemp472[1U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp468[((IData)(2U) 
                                                + (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))))) 
                          | (__Vtemp468[((IData)(1U) 
                                         + (0x1fU & 
                                            (((IData)(0x41U) 
                                              * (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        __Vtemp472[2U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp468[((IData)(3U) 
                                                + (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))))) 
                          | (__Vtemp468[((IData)(2U) 
                                         + (0x1fU & 
                                            (((IData)(0x41U) 
                                              * (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
    } else {
        __Vtemp472[0U] = 0U;
        __Vtemp472[1U] = 0U;
        __Vtemp472[2U] = 0U;
    }
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] 
            = __Vtemp472[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] 
            = __Vtemp472[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
            = (1U & __Vtemp472[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] = 0U;
    }
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[0U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][0U];
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[1U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][1U];
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[2U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][2U];
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[3U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][3U];
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[0U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][0U];
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[1U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][1U];
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[2U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][2U];
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[3U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][3U];
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid 
        = (((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                               >> 0x1fU)))) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata
                : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid 
        = (((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                               >> 0x1fU)))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
            ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U])))
            : 0ULL);
    __Vtemp481[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
    __Vtemp481[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                              >> 0x20U));
    __Vtemp481[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
    __Vtemp481[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                              >> 0x20U));
    __Vtemp481[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
    __Vtemp481[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                              >> 0x20U));
    __Vtemp481[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
    __Vtemp481[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
           & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U]) 
                & ((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U]))) 
                   != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                        ? (((QData)((IData)(__Vtemp481[
                                            (((IData)(0x3fU) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                 << 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                  << 6U))))) 
                           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                << 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          __Vtemp481[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                    << 6U))))) 
                              | ((QData)((IData)(__Vtemp481[
                                                 (6U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                     << 1U))])) 
                                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                              << 6U)))))
                        : 0ULL))) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)))) 
              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                 & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U]))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 0U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w))
                         ? 1U : 2U)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0 
        = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                      ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                               ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid)
                                        ? 2U : (- (IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid) 
                                                           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w))))))))
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))) {
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb = 0xffU;
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    } else {
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb)
                : 0U);
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN));
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid 
            = (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9 
        = ((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
           | ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    __Vtemp484[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr);
    __Vtemp484[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                              >> 0x20U));
    __Vtemp484[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    __Vtemp484[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                              >> 0x20U));
    __Vtemp484[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    __Vtemp484[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                              >> 0x20U));
    __Vtemp484[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr);
    __Vtemp484[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr 
        = (((QData)((IData)(__Vtemp484[(((IData)(0x3fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                             << 6U))) 
                                        >> 5U)])) << 
            ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                              << 6U))) ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                      << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp484[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp484[(6U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                   << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                              << 6U)))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2 
        = (1U & ((((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                   << 3U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid) 
                               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                              << 2U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                                         << 1U) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    if ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size 
        = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
           & (((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
              & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
}

void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_initial\n"); );
    // Body
    Vriscv_soc___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vriscv_soc___024root___eval_settle(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_settle\n"); );
    // Body
    Vriscv_soc___024root___settle__TOP__3(vlSelf);
}

void Vriscv_soc___024root___final(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___final\n"); );
}

void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_difftest_reg_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_17 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_18 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_19 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_20 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_21 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_22 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_23 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_24 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_25 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_26 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_27 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_28 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_29 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_30 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_31 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_inst = VL_RAND_RESET_I(32);
    vlSelf->io_difftest_commit = VL_RAND_RESET_I(1);
    vlSelf->io_inst_counter = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_irq = VL_RAND_RESET_I(1);
    vlSelf->io_difftest_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_mcause = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_mepc = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_mtvec = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_peripheral = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___reg_temp_sram0_valid_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___reg_temp_sram1_valid_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___LRU_1_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = VL_RAND_RESET_Q(54);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_0_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_2_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_dirty_2_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_dirty_0_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_11 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_13 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_14 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_19 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_21 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___T_16 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_8 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk2__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___reg_valid_next_pc_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(127, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    VL_RAND_RESET_W(66, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
    VL_RAND_RESET_W(66, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor);
    VL_RAND_RESET_W(131, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(260, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2);
    VL_RAND_RESET_W(264, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(28);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(67, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1040, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(520, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(17);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(10);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(16);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_137 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_139 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_141 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_143 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_145 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_147 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_149 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___T_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__Q);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__Q);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__Q);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__Q);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__Q);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__Q);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__Q);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__Q);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory[__Vi0]);
    }
}
