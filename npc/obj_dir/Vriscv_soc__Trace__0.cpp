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
    VlWide<8>/*255:0*/ __Vtemp_hafea8432__0;
    VlWide<8>/*255:0*/ __Vtemp_hb3faad4d__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b945697__0;
    VlWide<4>/*127:0*/ __Vtemp_h83563b0d__0;
    VlWide<4>/*127:0*/ __Vtemp_hfddea7ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h6618c490__0;
    VlWide<4>/*127:0*/ __Vtemp_h71d6e46b__0;
    VlWide<4>/*127:0*/ __Vtemp_h9199e895__0;
    VlWide<4>/*127:0*/ __Vtemp_h8ab6abe0__0;
    VlWide<16>/*511:0*/ __Vtemp_h35e25ae8__0;
    VlWide<4>/*127:0*/ __Vtemp_h96d8aca3__0;
    VlWide<4>/*127:0*/ __Vtemp_h0fce6913__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9));
        bufp->chgQData(oldp+1,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                 ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                 : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                     ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr
                                     : 0ULL))),64);
        bufp->chgBit(oldp+3,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid));
        bufp->chgQData(oldp+4,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                 ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                 : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                     ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata
                                     : 0ULL))),64);
        bufp->chgCData(oldp+6,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                 ? 0xffU : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                             ? (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb)
                                             : 0U))),8);
        bufp->chgBit(oldp+7,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast));
        bufp->chgBit(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2));
        bufp->chgQData(oldp+9,(vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr),64);
        bufp->chgCData(oldp+11,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0))
                                  ? 1U : (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)))),8);
        bufp->chgBit(oldp+12,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
        bufp->chgBit(oldp+13,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
        bufp->chgBit(oldp+14,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
        bufp->chgBit(oldp+15,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
        bufp->chgBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
        bufp->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_data),64);
        bufp->chgBit(oldp+19,(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
        bufp->chgQData(oldp+20,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
        bufp->chgCData(oldp+22,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
        bufp->chgBit(oldp+23,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
        bufp->chgQData(oldp+24,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
        bufp->chgBit(oldp+26,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
        bufp->chgQData(oldp+27,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                  ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                  : vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr)),64);
        bufp->chgQData(oldp+29,(vlSelf->riscv_soc__DOT__axi_ram__DOT___mem_rdata),64);
        bufp->chgQData(oldp+31,(vlSelf->riscv_soc__DOT__axi_ram__DOT____Vcellinp__mem__wmask),64);
        bufp->chgBit(oldp+33,(((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid) 
                               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))));
        bufp->chgWData(oldp+34,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
        bufp->chgWData(oldp+38,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
        bufp->chgWData(oldp+42,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
        bufp->chgWData(oldp+46,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
        bufp->chgWData(oldp+50,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
        bufp->chgWData(oldp+54,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
        bufp->chgWData(oldp+58,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
        bufp->chgWData(oldp+62,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
        bufp->chgCData(oldp+66,(vlSelf->riscv_soc__DOT___core_io_isram_addr),6);
        bufp->chgBit(oldp+67,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
        bufp->chgBit(oldp+68,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
        __Vtemp_h8800a5e4__0[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                            >> 0xaU));
        __Vtemp_h8800a5e4__0[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                             >> 0xaU) 
                                            >> 0x20U));
        __Vtemp_h8800a5e4__0[2U] = 0U;
        __Vtemp_h8800a5e4__0[3U] = 0U;
        bufp->chgWData(oldp+69,(__Vtemp_h8800a5e4__0),128);
        bufp->chgWData(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
        bufp->chgCData(oldp+77,(vlSelf->riscv_soc__DOT___core_io_dsram_addr),6);
        bufp->chgBit(oldp+78,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
        bufp->chgBit(oldp+79,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
        __Vtemp_he557d9cd__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
        __Vtemp_he557d9cd__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
        __Vtemp_he557d9cd__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
        __Vtemp_he557d9cd__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
        bufp->chgWData(oldp+80,(__Vtemp_he557d9cd__0),128);
        __Vtemp_h5cafde3d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vtemp_h5cafde3d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                                            >> 0x20U));
        __Vtemp_h5cafde3d__0[2U] = 0U;
        __Vtemp_h5cafde3d__0[3U] = 0U;
        bufp->chgWData(oldp+84,(__Vtemp_h5cafde3d__0),128);
        bufp->chgWData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
        bufp->chgBit(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid));
        bufp->chgQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr),64);
        bufp->chgQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata),64);
        bufp->chgBit(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
        bufp->chgQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
        bufp->chgBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
        bufp->chgBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
        bufp->chgBit(oldp+102,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
        bufp->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
        bufp->chgQData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
        bufp->chgBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        bufp->chgCData(oldp+108,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+109,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2));
        bufp->chgCData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
        bufp->chgQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3),64);
        bufp->chgSData(oldp+114,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T));
        bufp->chgSData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
        bufp->chgBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except));
        bufp->chgBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq));
        bufp->chgBit(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq));
        bufp->chgCData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
        bufp->chgQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
        bufp->chgQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
        bufp->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit));
        bufp->chgIData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
        bufp->chgBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
        bufp->chgQData(oldp+130,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                       (((IData)(0x3fU) 
                                                         + 
                                                         (0x7c0U 
                                                          & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                             >> 9U))) 
                                                        >> 5U)])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                                   (0x3eU 
                                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                       >> 0xeU))]))))),64);
        bufp->chgQData(oldp+132,(((((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                              >> 0x14U)) 
                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                       (((IData)(0x3fU) 
                                                         + 
                                                         (0x7c0U 
                                                          & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                             >> 0xeU))) 
                                                        >> 5U)])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                                   (0x3eU 
                                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                       >> 0x13U))]))))),64);
        bufp->chgQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data),64);
        bufp->chgQData(oldp+136,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
        bufp->chgQData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_next_pc),64);
        bufp->chgQData(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus),64);
        bufp->chgQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie),64);
        bufp->chgQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
        bufp->chgQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
        bufp->chgQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
        bufp->chgQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
        bufp->chgQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
        bufp->chgQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
        bufp->chgQData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
        bufp->chgQData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
        bufp->chgQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
        bufp->chgQData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
        bufp->chgQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
        bufp->chgQData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
        bufp->chgQData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
        bufp->chgQData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
        bufp->chgQData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
        bufp->chgQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
        bufp->chgQData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
        bufp->chgQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
        bufp->chgQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
        bufp->chgQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
        bufp->chgQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
        bufp->chgQData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
        bufp->chgQData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
        bufp->chgQData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
        bufp->chgQData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
        bufp->chgQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
        bufp->chgQData(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
        bufp->chgQData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
        bufp->chgQData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
        bufp->chgQData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
        bufp->chgQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
        bufp->chgQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
        bufp->chgBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
        bufp->chgIData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
        bufp->chgQData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
        bufp->chgQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
        bufp->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
        bufp->chgBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
        bufp->chgCData(oldp+216,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
        bufp->chgQData(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
        bufp->chgQData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
        bufp->chgQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
        bufp->chgQData(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
        bufp->chgQData(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
        bufp->chgQData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
        bufp->chgQData(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
        bufp->chgQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
        bufp->chgQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
        bufp->chgBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq));
        bufp->chgBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        bufp->chgQData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        bufp->chgQData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
        bufp->chgQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
        bufp->chgBit(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        bufp->chgBit(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        bufp->chgQData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
        bufp->chgBit(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid));
        bufp->chgQData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
        bufp->chgBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid));
        bufp->chgCData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb),8);
        bufp->chgBit(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast));
        bufp->chgBit(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1));
        bufp->chgBit(oldp+255,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
        bufp->chgBit(oldp+256,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
        bufp->chgBit(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast));
        bufp->chgBit(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1));
        bufp->chgBit(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1));
        bufp->chgBit(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4));
        bufp->chgBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
        bufp->chgCData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
        bufp->chgCData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
        bufp->chgCData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
        bufp->chgBit(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
        bufp->chgBit(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
        bufp->chgBit(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        bufp->chgBit(oldp+268,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
        bufp->chgBit(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
        bufp->chgBit(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
        bufp->chgBit(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
        bufp->chgQData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
        bufp->chgQData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
        bufp->chgQData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
        bufp->chgBit(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
        bufp->chgBit(oldp+279,(((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1))));
        bufp->chgBit(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid));
        bufp->chgQData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data),64);
        bufp->chgQData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc),64);
        bufp->chgQData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata),64);
        bufp->chgBit(oldp+287,(((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                        >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                 : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4)
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
        bufp->chgBit(oldp+288,(((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0x1fU)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
        bufp->chgBit(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid));
        bufp->chgBit(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
        bufp->chgCData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
        bufp->chgQData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
        bufp->chgCData(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
        bufp->chgBit(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        bufp->chgQData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
        bufp->chgCData(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
        bufp->chgCData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
        bufp->chgBit(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        bufp->chgSData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
        bufp->chgBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
        bufp->chgWData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
        bufp->chgBit(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
        bufp->chgBit(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
        bufp->chgQData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
        bufp->chgQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
        bufp->chgQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
        bufp->chgBit(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        bufp->chgQData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
        bufp->chgBit(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        bufp->chgCData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
        bufp->chgBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        bufp->chgBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
        bufp->chgQData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit),64);
        bufp->chgBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0));
        bufp->chgBit(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2));
        bufp->chgBit(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__or_hit));
        bufp->chgBit(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0));
        bufp->chgIData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4),32);
        __Vtemp_hafea8432__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0);
        __Vtemp_hafea8432__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 
                                            >> 0x20U));
        __Vtemp_hafea8432__0[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1);
        __Vtemp_hafea8432__0[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 
                                            >> 0x20U));
        __Vtemp_hafea8432__0[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2);
        __Vtemp_hafea8432__0[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 
                                            >> 0x20U));
        __Vtemp_hafea8432__0[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3);
        __Vtemp_hafea8432__0[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 
                                            >> 0x20U));
        bufp->chgQData(oldp+331,((((QData)((IData)(
                                                   __Vtemp_hafea8432__0[
                                                   (((IData)(0x3fU) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                         << 6U))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                  << 6U)))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                       << 6U))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                 << 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 __Vtemp_hafea8432__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                      << 6U))))) 
                                     | ((QData)((IData)(
                                                        __Vtemp_hafea8432__0[
                                                        (6U 
                                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                            << 1U))])) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                             << 6U)))))),64);
        bufp->chgBit(oldp+333,((1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3) 
                                        << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0)))) 
                                      >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)))));
        bufp->chgBit(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        bufp->chgBit(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T));
        bufp->chgBit(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
        bufp->chgCData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
        bufp->chgCData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
        bufp->chgCData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
        bufp->chgQData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
        bufp->chgCData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
        bufp->chgQData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
        bufp->chgIData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
        bufp->chgQData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
        bufp->chgIData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
        bufp->chgCData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
        bufp->chgBit(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        bufp->chgBit(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
        bufp->chgSData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
        bufp->chgQData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
        bufp->chgCData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__fun_op),3);
        bufp->chgBit(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__temp_system_is_pri));
        bufp->chgBit(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__is_sr));
        bufp->chgCData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType),4);
        __Vtemp_hb3faad4d__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
        __Vtemp_hb3faad4d__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                                            >> 0x20U));
        __Vtemp_hb3faad4d__0[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
        __Vtemp_hb3faad4d__0[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                                            >> 0x20U));
        __Vtemp_hb3faad4d__0[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
        __Vtemp_hb3faad4d__0[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                                            >> 0x20U));
        __Vtemp_hb3faad4d__0[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
        __Vtemp_hb3faad4d__0[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                                            >> 0x20U));
        bufp->chgQData(oldp+359,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                   ? (((QData)((IData)(
                                                       __Vtemp_hb3faad4d__0[
                                                       (((IData)(0x3fU) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                             << 6U))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                      << 6U)))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                     << 6U))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                     << 6U)))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           __Vtemp_hb3faad4d__0[
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
                                         | ((QData)((IData)(
                                                            __Vtemp_hb3faad4d__0[
                                                            (6U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                << 1U))])) 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                   << 6U)))))
                                   : 0ULL)),64);
        bufp->chgQData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
        bufp->chgBit(oldp+363,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))));
        bufp->chgBit(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
        bufp->chgBit(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
        bufp->chgQData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
        bufp->chgBit(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
        bufp->chgQData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
        bufp->chgBit(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
        bufp->chgBit(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
        bufp->chgQData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data),64);
        bufp->chgQData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data),64);
        bufp->chgCData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
        bufp->chgCData(oldp+378,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                                   ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN))),4);
        bufp->chgBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
        bufp->chgQData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
        bufp->chgBit(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
        bufp->chgBit(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
        bufp->chgBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
        bufp->chgBit(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
        bufp->chgBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
        bufp->chgBit(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
        bufp->chgBit(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
        bufp->chgBit(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
        bufp->chgBit(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        bufp->chgBit(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T));
        bufp->chgQData(oldp+392,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                   ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                   : 0ULL)),64);
        bufp->chgBit(oldp+394,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h0b2f13a9__0))));
        bufp->chgQData(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T),64);
        bufp->chgQData(oldp+397,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2)
                                   ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                   : 0ULL)),64);
        bufp->chgQData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
        bufp->chgQData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
        bufp->chgQData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
        bufp->chgBit(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra));
        bufp->chgQData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
        bufp->chgBit(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
        bufp->chgCData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
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
        bufp->chgWData(oldp+410,(__Vtemp_hfddea7ef__0),127);
        bufp->chgBit(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
        __Vtemp_h6618c490__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp_h6618c490__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U));
        __Vtemp_h6618c490__0[2U] = 1U;
        bufp->chgWData(oldp+415,(__Vtemp_h6618c490__0),65);
        bufp->chgQData(oldp+418,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
        bufp->chgQData(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
        bufp->chgBit(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid));
        bufp->chgQData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
        bufp->chgBit(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
        bufp->chgBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
        bufp->chgQData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
        bufp->chgQData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
        bufp->chgCData(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
        bufp->chgBit(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
        bufp->chgBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
        bufp->chgCData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
        bufp->chgQData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
        bufp->chgBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
        bufp->chgBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        __Vtemp_h71d6e46b__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
        __Vtemp_h71d6e46b__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                            >> 0x20U));
        __Vtemp_h71d6e46b__0[2U] = 0U;
        __Vtemp_h71d6e46b__0[3U] = 0U;
        VL_SHIFTL_WWI(127,127,6, __Vtemp_h9199e895__0, __Vtemp_h71d6e46b__0, 
                      (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                                << 3U)));
        __Vtemp_h8ab6abe0__0[0U] = __Vtemp_h9199e895__0[0U];
        __Vtemp_h8ab6abe0__0[1U] = __Vtemp_h9199e895__0[1U];
        __Vtemp_h8ab6abe0__0[2U] = __Vtemp_h9199e895__0[2U];
        __Vtemp_h8ab6abe0__0[3U] = (0x7fffffffU & __Vtemp_h9199e895__0[3U]);
        bufp->chgWData(oldp+439,(__Vtemp_h8ab6abe0__0),127);
        bufp->chgBit(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
        bufp->chgQData(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data),64);
        bufp->chgBit(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid));
        bufp->chgQData(oldp+447,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                                   ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                       ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                           ? (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                           >> 0x1fU))))) 
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
                                                               (- (IData)(
                                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                           >> 0x1fU))))) 
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
                                                           (- (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                       >> 0x1fU))))) 
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
        bufp->chgBit(oldp+449,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
        bufp->chgBit(oldp+450,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
        bufp->chgBit(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid));
        bufp->chgQData(oldp+452,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                   ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                       >> 0x1fU))))) 
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
                                                           (- (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                       : (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))),64);
        bufp->chgBit(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        bufp->chgWData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
        bufp->chgWData(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
        bufp->chgWData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
        bufp->chgWData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
        bufp->chgCData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
        bufp->chgCData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
        bufp->chgCData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
        bufp->chgWData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend),65);
        bufp->chgWData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor),65);
        bufp->chgWData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem),65);
        bufp->chgWData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor),65);
        bufp->chgBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid));
        bufp->chgQData(oldp+484,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                   >> 0x1fU))))) 
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
        bufp->chgBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
        bufp->chgBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
        bufp->chgCData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
        bufp->chgWData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
        bufp->chgWData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
        bufp->chgWData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
        bufp->chgCData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
        bufp->chgCData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
        bufp->chgWData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2),65);
        bufp->chgBit(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
        bufp->chgQData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data),64);
        bufp->chgBit(oldp+510,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2) 
                                & (IData)(((0U != (0x1cU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))))));
        __Vtemp_h35e25ae8__0[0U] = 0U;
        __Vtemp_h35e25ae8__0[1U] = 0U;
        __Vtemp_h35e25ae8__0[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
        __Vtemp_h35e25ae8__0[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
                                            >> 0x20U));
        __Vtemp_h35e25ae8__0[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
        __Vtemp_h35e25ae8__0[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                            >> 0x20U));
        __Vtemp_h35e25ae8__0[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
        __Vtemp_h35e25ae8__0[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                            >> 0x20U));
        __Vtemp_h35e25ae8__0[8U] = 0U;
        __Vtemp_h35e25ae8__0[9U] = 0U;
        __Vtemp_h35e25ae8__0[0xaU] = (IData)(((0xffffffffffffffe0ULL 
                                               & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                              | (QData)((IData)(
                                                                (0x1fU 
                                                                 & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))));
        __Vtemp_h35e25ae8__0[0xbU] = (IData)((((0xffffffffffffffe0ULL 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))) 
                                              >> 0x20U));
        __Vtemp_h35e25ae8__0[0xcU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
        __Vtemp_h35e25ae8__0[0xdU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                              >> 0x20U));
        __Vtemp_h35e25ae8__0[0xeU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
        __Vtemp_h35e25ae8__0[0xfU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                              >> 0x20U));
        bufp->chgQData(oldp+511,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                   ? (0x80ULL | ((0xffffffffffffff77ULL 
                                                  & vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus) 
                                                 | (QData)((IData)(
                                                                   (8U 
                                                                    & ((IData)(
                                                                               (vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
                                                                                >> 7U)) 
                                                                       << 3U))))))
                                   : (((QData)((IData)(
                                                       __Vtemp_h35e25ae8__0[
                                                       (((IData)(0x3fU) 
                                                         + 
                                                         (0x1c0U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                             << 4U))) 
                                                        >> 5U)])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp_h35e25ae8__0[
                                                                   (0xeU 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                       >> 1U))]))))),64);
        bufp->chgSData(oldp+513,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                   ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
        bufp->chgBit(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except));
        bufp->chgCData(oldp+515,(((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                   ? 0xbU : (3U & (- (IData)(
                                                             (8U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                  >> 2U)))))))),6);
        bufp->chgBit(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc));
        bufp->chgQData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
        bufp->chgQData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
        bufp->chgQData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
        bufp->chgBit(oldp+523,((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+524,((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
        bufp->chgBit(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
        bufp->chgBit(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq));
        bufp->chgBit(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq));
        bufp->chgBit(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T));
        bufp->chgBit(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
        bufp->chgQData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
        bufp->chgCData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
        bufp->chgCData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
        bufp->chgQData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
        bufp->chgQData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
        bufp->chgQData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
        bufp->chgQData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
        bufp->chgCData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
        bufp->chgCData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
        bufp->chgBit(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
        bufp->chgBit(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
        bufp->chgBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
        bufp->chgBit(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
        bufp->chgQData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc),64);
        bufp->chgBit(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
        bufp->chgWData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
        bufp->chgWData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
        bufp->chgWData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
        bufp->chgWData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
        bufp->chgWData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
        bufp->chgWData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
        bufp->chgWData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
        bufp->chgWData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
        bufp->chgWData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
        bufp->chgWData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
        bufp->chgWData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
        bufp->chgWData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
        bufp->chgWData(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
        bufp->chgWData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
        bufp->chgWData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
        bufp->chgWData(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
        bufp->chgWData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
        bufp->chgWData(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
        bufp->chgWData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
        bufp->chgWData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
        bufp->chgWData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
        bufp->chgWData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
        bufp->chgWData(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
        bufp->chgWData(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
        bufp->chgWData(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
        bufp->chgWData(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
        bufp->chgWData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
        bufp->chgWData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
        bufp->chgWData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
        bufp->chgWData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
        bufp->chgWData(oldp+671,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
        bufp->chgWData(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
        bufp->chgWData(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
        bufp->chgWData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
        bufp->chgWData(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
        bufp->chgWData(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
        bufp->chgWData(oldp+695,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
        bufp->chgWData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
        bufp->chgWData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
        bufp->chgWData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
        bufp->chgWData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
        bufp->chgWData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
        bufp->chgWData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
        bufp->chgWData(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
        bufp->chgWData(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
        bufp->chgWData(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
        bufp->chgWData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
        bufp->chgWData(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
        bufp->chgWData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
        bufp->chgWData(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
        bufp->chgWData(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
        bufp->chgWData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
        bufp->chgWData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
        bufp->chgWData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
        bufp->chgWData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
        bufp->chgWData(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
        bufp->chgWData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
        bufp->chgWData(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
        bufp->chgWData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
        bufp->chgWData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
        bufp->chgWData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
        bufp->chgWData(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
        bufp->chgWData(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
        bufp->chgWData(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
        bufp->chgQData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
        bufp->chgQData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
        bufp->chgQData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
        bufp->chgQData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
        bufp->chgQData(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
        bufp->chgQData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
        bufp->chgCData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
        bufp->chgCData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
        bufp->chgCData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
        bufp->chgCData(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
        bufp->chgCData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
        bufp->chgCData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
        bufp->chgCData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
        bufp->chgCData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
        bufp->chgCData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
        bufp->chgCData(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
        bufp->chgCData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
        bufp->chgCData(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
        bufp->chgCData(oldp+831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
        bufp->chgCData(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
        bufp->chgCData(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
        bufp->chgCData(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
        bufp->chgCData(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
        bufp->chgCData(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
        bufp->chgCData(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
        bufp->chgCData(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
        bufp->chgCData(oldp+839,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
        bufp->chgCData(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
        bufp->chgCData(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
        bufp->chgCData(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
        bufp->chgCData(oldp+843,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
        bufp->chgCData(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
        bufp->chgCData(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
        bufp->chgCData(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
        bufp->chgCData(oldp+847,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
        bufp->chgCData(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
        bufp->chgCData(oldp+849,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
        bufp->chgCData(oldp+850,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
        bufp->chgCData(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
        bufp->chgCData(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
        bufp->chgCData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
        bufp->chgCData(oldp+854,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
        bufp->chgCData(oldp+855,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
        bufp->chgCData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
        bufp->chgCData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
        bufp->chgCData(oldp+858,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
        bufp->chgCData(oldp+859,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
        bufp->chgCData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
        bufp->chgCData(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
        bufp->chgCData(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
        bufp->chgCData(oldp+863,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
        bufp->chgCData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
        bufp->chgCData(oldp+865,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
        bufp->chgCData(oldp+866,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
        bufp->chgCData(oldp+867,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
        bufp->chgCData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
        bufp->chgCData(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
        bufp->chgCData(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
        bufp->chgCData(oldp+871,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
        bufp->chgCData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
        bufp->chgCData(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
        bufp->chgCData(oldp+874,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
        bufp->chgCData(oldp+875,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
        bufp->chgCData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
        bufp->chgCData(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
        bufp->chgCData(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
        bufp->chgCData(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
        bufp->chgCData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
        bufp->chgCData(oldp+881,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
        bufp->chgCData(oldp+882,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
        bufp->chgCData(oldp+883,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
        bufp->chgBit(oldp+884,(((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid))));
        bufp->chgIData(oldp+885,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst),32);
        bufp->chgBit(oldp+886,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2));
        bufp->chgQData(oldp+887,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
        bufp->chgQData(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
        bufp->chgQData(oldp+891,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
        bufp->chgQData(oldp+893,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
        bufp->chgIData(oldp+895,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
        bufp->chgIData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
        bufp->chgIData(oldp+897,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
        bufp->chgIData(oldp+898,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
        bufp->chgBit(oldp+899,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
        bufp->chgBit(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
        bufp->chgBit(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
        bufp->chgBit(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
        bufp->chgBit(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
        bufp->chgBit(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
        bufp->chgBit(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
        bufp->chgBit(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
        bufp->chgCData(oldp+907,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
        bufp->chgCData(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
        bufp->chgCData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
        bufp->chgBit(oldp+910,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size));
        bufp->chgBit(oldp+911,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq));
        bufp->chgBit(oldp+912,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq));
        bufp->chgQData(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
        bufp->chgQData(oldp+915,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
        bufp->chgBit(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
        bufp->chgBit(oldp+918,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
        bufp->chgBit(oldp+919,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
        bufp->chgBit(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
        bufp->chgBit(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
        bufp->chgCData(oldp+922,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
        bufp->chgBit(oldp+923,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
        bufp->chgBit(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
        bufp->chgBit(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
        bufp->chgBit(oldp+926,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
        bufp->chgQData(oldp+927,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
        bufp->chgBit(oldp+929,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_tag_valid_tag_valid_0));
        bufp->chgBit(oldp+930,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_tag_valid_tag_valid_1));
        bufp->chgWData(oldp+931,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0),128);
        bufp->chgWData(oldp+935,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1),128);
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
        bufp->chgWData(oldp+939,(__Vtemp_h96d8aca3__0),128);
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
        bufp->chgWData(oldp+943,(__Vtemp_h0fce6913__0),128);
        bufp->chgBit(oldp+947,(((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
        bufp->chgCData(oldp+948,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index),6);
        bufp->chgBit(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
        bufp->chgBit(oldp+950,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
        bufp->chgQData(oldp+951,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
        bufp->chgBit(oldp+953,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit));
        bufp->chgQData(oldp+954,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 3U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U]))))),64);
        bufp->chgBit(oldp+956,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit));
        bufp->chgQData(oldp+957,(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                 >> 3U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U]))))),64);
        bufp->chgBit(oldp+959,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
        bufp->chgBit(oldp+960,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
        bufp->chgCData(oldp+961,((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                   >> 4U)))),6);
        bufp->chgBit(oldp+962,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
        bufp->chgBit(oldp+963,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
        bufp->chgQData(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
        bufp->chgCData(oldp+966,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
        bufp->chgBit(oldp+967,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid));
        bufp->chgBit(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__hit_valid));
        bufp->chgBit(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__is_hit));
        bufp->chgQData(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit),64);
        bufp->chgQData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__lru_1_or_chose),64);
        bufp->chgQData(oldp+974,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lru_1_and_neg_chose),64);
        bufp->chgQData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit),64);
        bufp->chgWData(oldp+978,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
        bufp->chgWData(oldp+982,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
        bufp->chgWData(oldp+986,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
        bufp->chgWData(oldp+990,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
        bufp->chgWData(oldp+994,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
        bufp->chgWData(oldp+998,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
        bufp->chgWData(oldp+1002,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
        bufp->chgWData(oldp+1006,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
        bufp->chgWData(oldp+1010,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
        bufp->chgWData(oldp+1014,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
        bufp->chgWData(oldp+1018,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
        bufp->chgWData(oldp+1022,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
        bufp->chgWData(oldp+1026,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
        bufp->chgWData(oldp+1030,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
        bufp->chgWData(oldp+1034,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
        bufp->chgWData(oldp+1038,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
        bufp->chgWData(oldp+1042,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
        bufp->chgWData(oldp+1046,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
        bufp->chgWData(oldp+1050,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
        bufp->chgWData(oldp+1054,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
        bufp->chgWData(oldp+1058,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
        bufp->chgWData(oldp+1062,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
        bufp->chgWData(oldp+1066,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
        bufp->chgWData(oldp+1070,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
        bufp->chgWData(oldp+1074,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
        bufp->chgWData(oldp+1078,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
        bufp->chgWData(oldp+1082,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
        bufp->chgWData(oldp+1086,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
        bufp->chgWData(oldp+1090,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
        bufp->chgWData(oldp+1094,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
        bufp->chgWData(oldp+1098,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
        bufp->chgWData(oldp+1102,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
        bufp->chgWData(oldp+1106,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
        bufp->chgWData(oldp+1110,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
        bufp->chgWData(oldp+1114,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
        bufp->chgWData(oldp+1118,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
        bufp->chgWData(oldp+1122,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
        bufp->chgWData(oldp+1126,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
        bufp->chgWData(oldp+1130,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
        bufp->chgWData(oldp+1134,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
        bufp->chgWData(oldp+1138,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
        bufp->chgWData(oldp+1142,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
        bufp->chgWData(oldp+1146,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
        bufp->chgWData(oldp+1150,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
        bufp->chgWData(oldp+1154,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
        bufp->chgWData(oldp+1158,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
        bufp->chgWData(oldp+1162,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
        bufp->chgWData(oldp+1166,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
        bufp->chgWData(oldp+1170,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
        bufp->chgWData(oldp+1174,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
        bufp->chgWData(oldp+1178,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
        bufp->chgWData(oldp+1182,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
        bufp->chgWData(oldp+1186,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
        bufp->chgWData(oldp+1190,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
        bufp->chgWData(oldp+1194,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
        bufp->chgWData(oldp+1198,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
        bufp->chgWData(oldp+1202,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
        bufp->chgWData(oldp+1206,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
        bufp->chgWData(oldp+1210,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
        bufp->chgWData(oldp+1214,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
        bufp->chgWData(oldp+1218,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
        bufp->chgWData(oldp+1222,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
        bufp->chgWData(oldp+1226,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
        bufp->chgWData(oldp+1230,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
        bufp->chgWData(oldp+1234,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
        bufp->chgWData(oldp+1238,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
        bufp->chgWData(oldp+1242,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
        bufp->chgWData(oldp+1246,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
        bufp->chgWData(oldp+1250,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
        bufp->chgWData(oldp+1254,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
        bufp->chgWData(oldp+1258,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
        bufp->chgWData(oldp+1262,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
        bufp->chgWData(oldp+1266,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
        bufp->chgWData(oldp+1270,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
        bufp->chgWData(oldp+1274,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
        bufp->chgWData(oldp+1278,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
        bufp->chgWData(oldp+1282,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
        bufp->chgWData(oldp+1286,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
        bufp->chgWData(oldp+1290,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
        bufp->chgWData(oldp+1294,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
        bufp->chgWData(oldp+1298,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
        bufp->chgWData(oldp+1302,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
        bufp->chgWData(oldp+1306,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
        bufp->chgWData(oldp+1310,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
        bufp->chgWData(oldp+1314,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
        bufp->chgWData(oldp+1318,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
        bufp->chgWData(oldp+1322,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
        bufp->chgWData(oldp+1326,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
        bufp->chgWData(oldp+1330,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
        bufp->chgWData(oldp+1334,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
        bufp->chgWData(oldp+1338,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
        bufp->chgWData(oldp+1342,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
        bufp->chgWData(oldp+1346,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
        bufp->chgWData(oldp+1350,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
        bufp->chgWData(oldp+1354,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
        bufp->chgWData(oldp+1358,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
        bufp->chgWData(oldp+1362,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
        bufp->chgWData(oldp+1366,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
        bufp->chgWData(oldp+1370,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
        bufp->chgWData(oldp+1374,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
        bufp->chgWData(oldp+1378,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
        bufp->chgWData(oldp+1382,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
        bufp->chgWData(oldp+1386,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
        bufp->chgWData(oldp+1390,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
        bufp->chgWData(oldp+1394,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
        bufp->chgWData(oldp+1398,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
        bufp->chgWData(oldp+1402,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
        bufp->chgWData(oldp+1406,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
        bufp->chgWData(oldp+1410,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
        bufp->chgWData(oldp+1414,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
        bufp->chgWData(oldp+1418,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
        bufp->chgWData(oldp+1422,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
        bufp->chgWData(oldp+1426,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
        bufp->chgWData(oldp+1430,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
        bufp->chgWData(oldp+1434,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
        bufp->chgWData(oldp+1438,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
        bufp->chgWData(oldp+1442,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
        bufp->chgWData(oldp+1446,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
        bufp->chgWData(oldp+1450,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
        bufp->chgWData(oldp+1454,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
        bufp->chgWData(oldp+1458,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
        bufp->chgWData(oldp+1462,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
        bufp->chgWData(oldp+1466,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
        bufp->chgWData(oldp+1470,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
        bufp->chgWData(oldp+1474,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
        bufp->chgWData(oldp+1478,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
        bufp->chgWData(oldp+1482,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
        bufp->chgWData(oldp+1486,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
        bufp->chgWData(oldp+1490,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
        bufp->chgWData(oldp+1494,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
        bufp->chgWData(oldp+1498,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
        bufp->chgWData(oldp+1502,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
        bufp->chgWData(oldp+1506,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
        bufp->chgWData(oldp+1510,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
        bufp->chgWData(oldp+1514,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
        bufp->chgWData(oldp+1518,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
        bufp->chgWData(oldp+1522,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
        bufp->chgWData(oldp+1526,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
        bufp->chgWData(oldp+1530,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
        bufp->chgWData(oldp+1534,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
        bufp->chgWData(oldp+1538,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
        bufp->chgWData(oldp+1542,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
        bufp->chgWData(oldp+1546,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
        bufp->chgWData(oldp+1550,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
        bufp->chgWData(oldp+1554,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
        bufp->chgWData(oldp+1558,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
        bufp->chgWData(oldp+1562,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
        bufp->chgWData(oldp+1566,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
        bufp->chgWData(oldp+1570,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
        bufp->chgWData(oldp+1574,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
        bufp->chgWData(oldp+1578,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
        bufp->chgWData(oldp+1582,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
        bufp->chgWData(oldp+1586,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
        bufp->chgWData(oldp+1590,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
        bufp->chgWData(oldp+1594,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
        bufp->chgWData(oldp+1598,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
        bufp->chgWData(oldp+1602,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
        bufp->chgWData(oldp+1606,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
        bufp->chgWData(oldp+1610,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
        bufp->chgWData(oldp+1614,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
        bufp->chgWData(oldp+1618,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
        bufp->chgWData(oldp+1622,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
        bufp->chgWData(oldp+1626,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
        bufp->chgWData(oldp+1630,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
        bufp->chgWData(oldp+1634,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
        bufp->chgWData(oldp+1638,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
        bufp->chgWData(oldp+1642,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
        bufp->chgWData(oldp+1646,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
        bufp->chgWData(oldp+1650,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
        bufp->chgWData(oldp+1654,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
        bufp->chgWData(oldp+1658,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
        bufp->chgWData(oldp+1662,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
        bufp->chgWData(oldp+1666,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
        bufp->chgWData(oldp+1670,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
        bufp->chgWData(oldp+1674,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
        bufp->chgWData(oldp+1678,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
        bufp->chgWData(oldp+1682,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
        bufp->chgWData(oldp+1686,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
        bufp->chgWData(oldp+1690,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
        bufp->chgWData(oldp+1694,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
        bufp->chgWData(oldp+1698,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
        bufp->chgWData(oldp+1702,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
        bufp->chgWData(oldp+1706,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
        bufp->chgWData(oldp+1710,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
        bufp->chgWData(oldp+1714,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
        bufp->chgWData(oldp+1718,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
        bufp->chgWData(oldp+1722,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
        bufp->chgWData(oldp+1726,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
        bufp->chgWData(oldp+1730,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
        bufp->chgWData(oldp+1734,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
        bufp->chgWData(oldp+1738,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
        bufp->chgWData(oldp+1742,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
        bufp->chgWData(oldp+1746,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
        bufp->chgWData(oldp+1750,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
        bufp->chgWData(oldp+1754,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
        bufp->chgWData(oldp+1758,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
        bufp->chgWData(oldp+1762,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
        bufp->chgWData(oldp+1766,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
        bufp->chgWData(oldp+1770,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
        bufp->chgWData(oldp+1774,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
        bufp->chgWData(oldp+1778,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
        bufp->chgWData(oldp+1782,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
        bufp->chgWData(oldp+1786,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
        bufp->chgWData(oldp+1790,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
        bufp->chgWData(oldp+1794,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
        bufp->chgWData(oldp+1798,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
        bufp->chgWData(oldp+1802,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
        bufp->chgWData(oldp+1806,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
        bufp->chgWData(oldp+1810,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
        bufp->chgWData(oldp+1814,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
        bufp->chgWData(oldp+1818,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
        bufp->chgWData(oldp+1822,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
        bufp->chgWData(oldp+1826,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
        bufp->chgWData(oldp+1830,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
        bufp->chgWData(oldp+1834,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
        bufp->chgWData(oldp+1838,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
        bufp->chgWData(oldp+1842,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
        bufp->chgWData(oldp+1846,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
        bufp->chgWData(oldp+1850,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
        bufp->chgWData(oldp+1854,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
        bufp->chgWData(oldp+1858,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
        bufp->chgWData(oldp+1862,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
        bufp->chgWData(oldp+1866,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
        bufp->chgWData(oldp+1870,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
        bufp->chgWData(oldp+1874,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
        bufp->chgWData(oldp+1878,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
        bufp->chgWData(oldp+1882,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
        bufp->chgWData(oldp+1886,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
        bufp->chgWData(oldp+1890,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
        bufp->chgWData(oldp+1894,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
        bufp->chgWData(oldp+1898,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
        bufp->chgWData(oldp+1902,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
        bufp->chgWData(oldp+1906,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
        bufp->chgWData(oldp+1910,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
        bufp->chgWData(oldp+1914,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
        bufp->chgWData(oldp+1918,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
        bufp->chgWData(oldp+1922,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
        bufp->chgWData(oldp+1926,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
        bufp->chgWData(oldp+1930,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
        bufp->chgWData(oldp+1934,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
        bufp->chgWData(oldp+1938,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
        bufp->chgWData(oldp+1942,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
        bufp->chgWData(oldp+1946,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
        bufp->chgWData(oldp+1950,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
        bufp->chgWData(oldp+1954,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
        bufp->chgWData(oldp+1958,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
        bufp->chgWData(oldp+1962,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
        bufp->chgWData(oldp+1966,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
        bufp->chgWData(oldp+1970,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
        bufp->chgWData(oldp+1974,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
        bufp->chgWData(oldp+1978,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
        bufp->chgWData(oldp+1982,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
        bufp->chgWData(oldp+1986,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
        bufp->chgWData(oldp+1990,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
        bufp->chgWData(oldp+1994,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
        bufp->chgWData(oldp+1998,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
        bufp->chgWData(oldp+2002,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
        bufp->chgWData(oldp+2006,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
        bufp->chgWData(oldp+2010,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
        bufp->chgWData(oldp+2014,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
        bufp->chgWData(oldp+2018,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
        bufp->chgWData(oldp+2022,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
        bufp->chgWData(oldp+2026,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
        bufp->chgWData(oldp+2030,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
        bufp->chgWData(oldp+2034,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
        bufp->chgWData(oldp+2038,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
        bufp->chgWData(oldp+2042,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
        bufp->chgWData(oldp+2046,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
        bufp->chgWData(oldp+2050,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
        bufp->chgWData(oldp+2054,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
        bufp->chgWData(oldp+2058,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
        bufp->chgWData(oldp+2062,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
        bufp->chgWData(oldp+2066,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
        bufp->chgWData(oldp+2070,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
        bufp->chgWData(oldp+2074,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
        bufp->chgWData(oldp+2078,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
        bufp->chgWData(oldp+2082,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
        bufp->chgWData(oldp+2086,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
        bufp->chgWData(oldp+2090,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
        bufp->chgWData(oldp+2094,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
        bufp->chgWData(oldp+2098,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
        bufp->chgWData(oldp+2102,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
        bufp->chgWData(oldp+2106,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
        bufp->chgWData(oldp+2110,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
        bufp->chgWData(oldp+2114,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
        bufp->chgWData(oldp+2118,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
        bufp->chgWData(oldp+2122,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
        bufp->chgWData(oldp+2126,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
        bufp->chgWData(oldp+2130,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
        bufp->chgWData(oldp+2134,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
        bufp->chgWData(oldp+2138,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
        bufp->chgWData(oldp+2142,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
        bufp->chgWData(oldp+2146,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
        bufp->chgWData(oldp+2150,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
        bufp->chgWData(oldp+2154,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
        bufp->chgWData(oldp+2158,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
        bufp->chgWData(oldp+2162,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
        bufp->chgWData(oldp+2166,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
        bufp->chgWData(oldp+2170,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
        bufp->chgWData(oldp+2174,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
        bufp->chgWData(oldp+2178,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
        bufp->chgWData(oldp+2182,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
        bufp->chgWData(oldp+2186,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
        bufp->chgWData(oldp+2190,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
        bufp->chgWData(oldp+2194,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
        bufp->chgWData(oldp+2198,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
        bufp->chgWData(oldp+2202,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
        bufp->chgWData(oldp+2206,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
        bufp->chgWData(oldp+2210,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
        bufp->chgWData(oldp+2214,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
        bufp->chgWData(oldp+2218,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
        bufp->chgWData(oldp+2222,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
        bufp->chgWData(oldp+2226,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
        bufp->chgWData(oldp+2230,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
        bufp->chgWData(oldp+2234,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
        bufp->chgWData(oldp+2238,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
        bufp->chgWData(oldp+2242,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
        bufp->chgWData(oldp+2246,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
        bufp->chgWData(oldp+2250,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
        bufp->chgWData(oldp+2254,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
        bufp->chgWData(oldp+2258,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
        bufp->chgWData(oldp+2262,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
        bufp->chgWData(oldp+2266,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
        bufp->chgWData(oldp+2270,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
        bufp->chgWData(oldp+2274,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
        bufp->chgWData(oldp+2278,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
        bufp->chgWData(oldp+2282,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
        bufp->chgWData(oldp+2286,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
        bufp->chgWData(oldp+2290,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
        bufp->chgWData(oldp+2294,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
        bufp->chgWData(oldp+2298,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
        bufp->chgWData(oldp+2302,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
        bufp->chgWData(oldp+2306,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
        bufp->chgWData(oldp+2310,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
        bufp->chgWData(oldp+2314,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
        bufp->chgWData(oldp+2318,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
        bufp->chgWData(oldp+2322,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
        bufp->chgWData(oldp+2326,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
        bufp->chgWData(oldp+2330,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
        bufp->chgWData(oldp+2334,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
        bufp->chgWData(oldp+2338,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
        bufp->chgWData(oldp+2342,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
        bufp->chgWData(oldp+2346,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
        bufp->chgWData(oldp+2350,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
        bufp->chgWData(oldp+2354,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
        bufp->chgWData(oldp+2358,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
        bufp->chgWData(oldp+2362,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
        bufp->chgWData(oldp+2366,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
        bufp->chgWData(oldp+2370,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
        bufp->chgWData(oldp+2374,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
        bufp->chgWData(oldp+2378,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
        bufp->chgWData(oldp+2382,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
        bufp->chgWData(oldp+2386,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
        bufp->chgWData(oldp+2390,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
        bufp->chgWData(oldp+2394,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
        bufp->chgWData(oldp+2398,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
        bufp->chgWData(oldp+2402,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
        bufp->chgWData(oldp+2406,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
        bufp->chgWData(oldp+2410,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
        bufp->chgWData(oldp+2414,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
        bufp->chgWData(oldp+2418,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
        bufp->chgWData(oldp+2422,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
        bufp->chgWData(oldp+2426,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
        bufp->chgWData(oldp+2430,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
        bufp->chgWData(oldp+2434,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
        bufp->chgWData(oldp+2438,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
        bufp->chgWData(oldp+2442,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
        bufp->chgWData(oldp+2446,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
        bufp->chgWData(oldp+2450,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
        bufp->chgWData(oldp+2454,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
        bufp->chgWData(oldp+2458,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
        bufp->chgWData(oldp+2462,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
        bufp->chgWData(oldp+2466,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
        bufp->chgWData(oldp+2470,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
        bufp->chgWData(oldp+2474,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
        bufp->chgWData(oldp+2478,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
        bufp->chgWData(oldp+2482,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
        bufp->chgWData(oldp+2486,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
        bufp->chgWData(oldp+2490,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
        bufp->chgWData(oldp+2494,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
        bufp->chgWData(oldp+2498,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
        bufp->chgWData(oldp+2502,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
        bufp->chgWData(oldp+2506,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
        bufp->chgWData(oldp+2510,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
        bufp->chgWData(oldp+2514,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
        bufp->chgWData(oldp+2518,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
        bufp->chgWData(oldp+2522,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
        bufp->chgWData(oldp+2526,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
        bufp->chgWData(oldp+2530,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
        bufp->chgWData(oldp+2534,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
        bufp->chgWData(oldp+2538,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
        bufp->chgWData(oldp+2542,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
        bufp->chgWData(oldp+2546,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
        bufp->chgWData(oldp+2550,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
        bufp->chgWData(oldp+2554,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
        bufp->chgWData(oldp+2558,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
        bufp->chgWData(oldp+2562,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
        bufp->chgWData(oldp+2566,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
        bufp->chgWData(oldp+2570,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
        bufp->chgWData(oldp+2574,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
        bufp->chgWData(oldp+2578,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
        bufp->chgWData(oldp+2582,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
        bufp->chgWData(oldp+2586,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
        bufp->chgWData(oldp+2590,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
        bufp->chgWData(oldp+2594,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
        bufp->chgWData(oldp+2598,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
        bufp->chgWData(oldp+2602,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
        bufp->chgWData(oldp+2606,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
        bufp->chgWData(oldp+2610,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
        bufp->chgWData(oldp+2614,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
        bufp->chgWData(oldp+2618,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
        bufp->chgWData(oldp+2622,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
        bufp->chgWData(oldp+2626,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
        bufp->chgWData(oldp+2630,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
        bufp->chgWData(oldp+2634,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
        bufp->chgWData(oldp+2638,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
        bufp->chgWData(oldp+2642,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
        bufp->chgWData(oldp+2646,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
        bufp->chgWData(oldp+2650,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
        bufp->chgWData(oldp+2654,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
        bufp->chgWData(oldp+2658,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
        bufp->chgWData(oldp+2662,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
        bufp->chgWData(oldp+2666,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
        bufp->chgWData(oldp+2670,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
        bufp->chgWData(oldp+2674,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
        bufp->chgWData(oldp+2678,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
        bufp->chgWData(oldp+2682,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
        bufp->chgWData(oldp+2686,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
        bufp->chgWData(oldp+2690,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
        bufp->chgWData(oldp+2694,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
        bufp->chgWData(oldp+2698,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
        bufp->chgWData(oldp+2702,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
        bufp->chgWData(oldp+2706,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
        bufp->chgWData(oldp+2710,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
        bufp->chgWData(oldp+2714,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
        bufp->chgWData(oldp+2718,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
        bufp->chgWData(oldp+2722,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
        bufp->chgWData(oldp+2726,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
        bufp->chgWData(oldp+2730,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
        bufp->chgWData(oldp+2734,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
        bufp->chgWData(oldp+2738,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
        bufp->chgWData(oldp+2742,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
        bufp->chgWData(oldp+2746,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
        bufp->chgWData(oldp+2750,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
        bufp->chgWData(oldp+2754,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
        bufp->chgWData(oldp+2758,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
        bufp->chgWData(oldp+2762,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
        bufp->chgWData(oldp+2766,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
        bufp->chgWData(oldp+2770,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
        bufp->chgWData(oldp+2774,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
        bufp->chgWData(oldp+2778,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
        bufp->chgWData(oldp+2782,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
        bufp->chgWData(oldp+2786,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
        bufp->chgWData(oldp+2790,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
        bufp->chgWData(oldp+2794,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
        bufp->chgWData(oldp+2798,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
        bufp->chgWData(oldp+2802,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
        bufp->chgWData(oldp+2806,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
        bufp->chgWData(oldp+2810,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
        bufp->chgWData(oldp+2814,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
        bufp->chgWData(oldp+2818,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
        bufp->chgWData(oldp+2822,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
        bufp->chgWData(oldp+2826,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
        bufp->chgWData(oldp+2830,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
        bufp->chgWData(oldp+2834,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
        bufp->chgWData(oldp+2838,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
        bufp->chgWData(oldp+2842,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
        bufp->chgWData(oldp+2846,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
        bufp->chgWData(oldp+2850,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
        bufp->chgWData(oldp+2854,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
        bufp->chgWData(oldp+2858,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
        bufp->chgWData(oldp+2862,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
        bufp->chgWData(oldp+2866,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
        bufp->chgWData(oldp+2870,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
        bufp->chgWData(oldp+2874,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
        bufp->chgWData(oldp+2878,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
        bufp->chgWData(oldp+2882,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
        bufp->chgWData(oldp+2886,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
        bufp->chgWData(oldp+2890,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
        bufp->chgWData(oldp+2894,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
        bufp->chgWData(oldp+2898,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
        bufp->chgWData(oldp+2902,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
        bufp->chgWData(oldp+2906,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
        bufp->chgWData(oldp+2910,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
        bufp->chgWData(oldp+2914,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
        bufp->chgWData(oldp+2918,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
        bufp->chgWData(oldp+2922,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
        bufp->chgWData(oldp+2926,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
        bufp->chgWData(oldp+2930,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
        bufp->chgWData(oldp+2934,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
        bufp->chgWData(oldp+2938,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
        bufp->chgWData(oldp+2942,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
        bufp->chgWData(oldp+2946,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
        bufp->chgWData(oldp+2950,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
        bufp->chgWData(oldp+2954,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
        bufp->chgWData(oldp+2958,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
        bufp->chgWData(oldp+2962,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
        bufp->chgWData(oldp+2966,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
        bufp->chgWData(oldp+2970,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
        bufp->chgWData(oldp+2974,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
        bufp->chgWData(oldp+2978,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
        bufp->chgWData(oldp+2982,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
        bufp->chgWData(oldp+2986,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
        bufp->chgWData(oldp+2990,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
        bufp->chgWData(oldp+2994,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
        bufp->chgWData(oldp+2998,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
        bufp->chgWData(oldp+3002,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
        bufp->chgWData(oldp+3006,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
        bufp->chgWData(oldp+3010,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
        bufp->chgWData(oldp+3014,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
        bufp->chgWData(oldp+3018,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
        bufp->chgWData(oldp+3022,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
    }
    bufp->chgBit(oldp+3026,(vlSelf->clock));
    bufp->chgBit(oldp+3027,(vlSelf->reset));
    bufp->chgQData(oldp+3028,(vlSelf->io_difftest_reg_0),64);
    bufp->chgQData(oldp+3030,(vlSelf->io_difftest_reg_1),64);
    bufp->chgQData(oldp+3032,(vlSelf->io_difftest_reg_2),64);
    bufp->chgQData(oldp+3034,(vlSelf->io_difftest_reg_3),64);
    bufp->chgQData(oldp+3036,(vlSelf->io_difftest_reg_4),64);
    bufp->chgQData(oldp+3038,(vlSelf->io_difftest_reg_5),64);
    bufp->chgQData(oldp+3040,(vlSelf->io_difftest_reg_6),64);
    bufp->chgQData(oldp+3042,(vlSelf->io_difftest_reg_7),64);
    bufp->chgQData(oldp+3044,(vlSelf->io_difftest_reg_8),64);
    bufp->chgQData(oldp+3046,(vlSelf->io_difftest_reg_9),64);
    bufp->chgQData(oldp+3048,(vlSelf->io_difftest_reg_10),64);
    bufp->chgQData(oldp+3050,(vlSelf->io_difftest_reg_11),64);
    bufp->chgQData(oldp+3052,(vlSelf->io_difftest_reg_12),64);
    bufp->chgQData(oldp+3054,(vlSelf->io_difftest_reg_13),64);
    bufp->chgQData(oldp+3056,(vlSelf->io_difftest_reg_14),64);
    bufp->chgQData(oldp+3058,(vlSelf->io_difftest_reg_15),64);
    bufp->chgQData(oldp+3060,(vlSelf->io_difftest_reg_16),64);
    bufp->chgQData(oldp+3062,(vlSelf->io_difftest_reg_17),64);
    bufp->chgQData(oldp+3064,(vlSelf->io_difftest_reg_18),64);
    bufp->chgQData(oldp+3066,(vlSelf->io_difftest_reg_19),64);
    bufp->chgQData(oldp+3068,(vlSelf->io_difftest_reg_20),64);
    bufp->chgQData(oldp+3070,(vlSelf->io_difftest_reg_21),64);
    bufp->chgQData(oldp+3072,(vlSelf->io_difftest_reg_22),64);
    bufp->chgQData(oldp+3074,(vlSelf->io_difftest_reg_23),64);
    bufp->chgQData(oldp+3076,(vlSelf->io_difftest_reg_24),64);
    bufp->chgQData(oldp+3078,(vlSelf->io_difftest_reg_25),64);
    bufp->chgQData(oldp+3080,(vlSelf->io_difftest_reg_26),64);
    bufp->chgQData(oldp+3082,(vlSelf->io_difftest_reg_27),64);
    bufp->chgQData(oldp+3084,(vlSelf->io_difftest_reg_28),64);
    bufp->chgQData(oldp+3086,(vlSelf->io_difftest_reg_29),64);
    bufp->chgQData(oldp+3088,(vlSelf->io_difftest_reg_30),64);
    bufp->chgQData(oldp+3090,(vlSelf->io_difftest_reg_31),64);
    bufp->chgQData(oldp+3092,(vlSelf->io_difftest_pc),64);
    bufp->chgIData(oldp+3094,(vlSelf->io_difftest_inst),32);
    bufp->chgBit(oldp+3095,(vlSelf->io_difftest_commit));
    bufp->chgQData(oldp+3096,(vlSelf->io_inst_counter),64);
    bufp->chgBit(oldp+3098,(vlSelf->io_difftest_irq));
    bufp->chgQData(oldp+3099,(vlSelf->io_difftest_mstatus),64);
    bufp->chgQData(oldp+3101,(vlSelf->io_difftest_mcause),64);
    bufp->chgQData(oldp+3103,(vlSelf->io_difftest_mepc),64);
    bufp->chgQData(oldp+3105,(vlSelf->io_difftest_mtvec),64);
    bufp->chgBit(oldp+3107,(vlSelf->io_difftest_peripheral));
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
