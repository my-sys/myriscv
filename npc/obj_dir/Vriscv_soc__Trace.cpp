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
    VlWide<4>/*127:0*/ __Vtemp1674;
    VlWide<4>/*127:0*/ __Vtemp1675;
    VlWide<4>/*127:0*/ __Vtemp1676;
    VlWide<4>/*127:0*/ __Vtemp1677;
    VlWide<4>/*127:0*/ __Vtemp1678;
    VlWide<4>/*127:0*/ __Vtemp1679;
    VlWide<4>/*127:0*/ __Vtemp1680;
    VlWide<4>/*127:0*/ __Vtemp1681;
    VlWide<4>/*127:0*/ __Vtemp1682;
    VlWide<8>/*255:0*/ __Vtemp1685;
    VlWide<8>/*255:0*/ __Vtemp1688;
    VlWide<4>/*127:0*/ __Vtemp1690;
    VlWide<4>/*127:0*/ __Vtemp1691;
    VlWide<4>/*127:0*/ __Vtemp1692;
    VlWide<3>/*95:0*/ __Vtemp1693;
    VlWide<16>/*511:0*/ __Vtemp1700;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
            tracep->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
            tracep->chgBit(oldp+2,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
            tracep->chgBit(oldp+3,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
            tracep->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
            tracep->chgQData(oldp+5,(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata),64);
            tracep->chgBit(oldp+7,(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
            tracep->chgWData(oldp+8,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
            tracep->chgWData(oldp+12,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
            tracep->chgWData(oldp+16,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
            tracep->chgWData(oldp+20,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
            tracep->chgWData(oldp+24,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
            tracep->chgWData(oldp+28,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
            tracep->chgWData(oldp+32,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
            tracep->chgWData(oldp+36,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
            tracep->chgBit(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9));
            tracep->chgQData(oldp+41,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                            ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr
                                            : 0ULL))),64);
            tracep->chgBit(oldp+43,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid));
            tracep->chgQData(oldp+44,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                        : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                            ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata
                                            : 0ULL))),64);
            tracep->chgCData(oldp+46,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb),8);
            tracep->chgBit(oldp+47,(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast));
            tracep->chgBit(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2));
            tracep->chgQData(oldp+49,(vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr),64);
            tracep->chgCData(oldp+51,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0))
                                        ? 1U : (1U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)))),8);
            tracep->chgCData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr),6);
            tracep->chgBit(oldp+53,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
            tracep->chgWData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
            VL_EXTEND_WQ(128,54, __Vtemp1674, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            tracep->chgWData(oldp+58,(__Vtemp1674),128);
            tracep->chgBit(oldp+62,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
            tracep->chgCData(oldp+63,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A),6);
            tracep->chgBit(oldp+64,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
            __Vtemp1675[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp1675[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp1675[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp1675[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+65,(__Vtemp1675),128);
            tracep->chgWData(oldp+69,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            VL_EXTEND_WQ(128,54, __Vtemp1676, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+73,(__Vtemp1676),128);
            tracep->chgBit(oldp+77,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
            tracep->chgBit(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T));
            tracep->chgBit(oldp+79,(((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                             >> 0x1fU)) 
                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
            tracep->chgQData(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgBit(oldp+82,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
            tracep->chgBit(oldp+83,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i) 
                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))));
            tracep->chgBit(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1));
            tracep->chgBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
            tracep->chgBit(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
            tracep->chgQData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
            tracep->chgQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
            tracep->chgQData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
            tracep->chgBit(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
            tracep->chgBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
            tracep->chgBit(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
            tracep->chgBit(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
            tracep->chgCData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
            tracep->chgBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
            tracep->chgBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
            tracep->chgBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
            tracep->chgQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit),64);
            tracep->chgBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
            tracep->chgQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
            tracep->chgBit(oldp+113,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid))));
            tracep->chgBit(oldp+114,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid))));
            tracep->chgWData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0),128);
            tracep->chgWData(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1),128);
            VL_EXTEND_WQ(128,54, __Vtemp1677, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp1678, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
                __Vtemp1679[0U] = __Vtemp1677[0U];
                __Vtemp1679[1U] = __Vtemp1677[1U];
                __Vtemp1679[2U] = __Vtemp1677[2U];
                __Vtemp1679[3U] = __Vtemp1677[3U];
            } else {
                __Vtemp1679[0U] = __Vtemp1678[0U];
                __Vtemp1679[1U] = __Vtemp1678[1U];
                __Vtemp1679[2U] = __Vtemp1678[2U];
                __Vtemp1679[3U] = __Vtemp1678[3U];
            }
            tracep->chgWData(oldp+123,(__Vtemp1679),128);
            VL_EXTEND_WQ(128,54, __Vtemp1680, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp1681, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
                __Vtemp1682[0U] = __Vtemp1680[0U];
                __Vtemp1682[1U] = __Vtemp1680[1U];
                __Vtemp1682[2U] = __Vtemp1680[2U];
                __Vtemp1682[3U] = __Vtemp1680[3U];
            } else {
                __Vtemp1682[0U] = __Vtemp1681[0U];
                __Vtemp1682[1U] = __Vtemp1681[1U];
                __Vtemp1682[2U] = __Vtemp1681[2U];
                __Vtemp1682[3U] = __Vtemp1681[3U];
            }
            tracep->chgWData(oldp+127,(__Vtemp1682),128);
            tracep->chgBit(oldp+131,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready) 
                                      & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)))));
            tracep->chgCData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index),6);
            tracep->chgBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid));
            tracep->chgBit(oldp+134,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
            tracep->chgQData(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit));
            tracep->chgQData(oldp+138,(((1U & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                       >> 3U)))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U]))))),64);
            tracep->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit));
            tracep->chgQData(oldp+141,(((1U & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                       >> 3U)))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U]))))),64);
            tracep->chgBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
            tracep->chgBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
            tracep->chgCData(oldp+145,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgBit(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
            tracep->chgBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
            tracep->chgQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
            tracep->chgCData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
            tracep->chgBit(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid));
            tracep->chgQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit),64);
            tracep->chgBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr),64);
            tracep->chgQData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata),64);
            tracep->chgCData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb),8);
            tracep->chgBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
            tracep->chgBit(oldp+161,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+162,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1));
            tracep->chgQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgCData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgWData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgQData(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit),64);
            tracep->chgBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0));
            tracep->chgBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2));
            tracep->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1));
            tracep->chgBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4));
            tracep->chgBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgCData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgBit(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
            tracep->chgBit(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
            tracep->chgQData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+229,(((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1))));
            tracep->chgBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid));
            tracep->chgQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data),64);
            tracep->chgQData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc),64);
            tracep->chgQData(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+237,(((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                              >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid));
            tracep->chgBit(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
            tracep->chgBit(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
            tracep->chgQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
            tracep->chgBit(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
            tracep->chgQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
            tracep->chgBit(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
            tracep->chgQData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T));
            tracep->chgBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
            __Vtemp1685[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
            __Vtemp1685[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                                       >> 0x20U));
            __Vtemp1685[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
            __Vtemp1685[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                                       >> 0x20U));
            __Vtemp1685[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
            __Vtemp1685[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                                       >> 0x20U));
            __Vtemp1685[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
            __Vtemp1685[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                                       >> 0x20U));
            tracep->chgQData(oldp+252,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                         ? (((QData)((IData)(
                                                             __Vtemp1685[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                   << 6U))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                      << 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                      << 6U))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                     << 6U)))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 __Vtemp1685[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                      << 6U))))) 
                                               | ((QData)((IData)(
                                                                  __Vtemp1685[
                                                                  (6U 
                                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                      << 1U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                      << 6U)))))
                                         : 0ULL)),64);
            tracep->chgBit(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0));
            tracep->chgIData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4),32);
            __Vtemp1688[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0);
            __Vtemp1688[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 
                                       >> 0x20U));
            __Vtemp1688[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1);
            __Vtemp1688[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 
                                       >> 0x20U));
            __Vtemp1688[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2);
            __Vtemp1688[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 
                                       >> 0x20U));
            __Vtemp1688[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3);
            __Vtemp1688[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 
                                       >> 0x20U));
            tracep->chgQData(oldp+256,((((QData)((IData)(
                                                         __Vtemp1688[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                               << 6U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                  << 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                     << 6U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                 << 6U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                __Vtemp1688[
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
                                                              __Vtemp1688[
                                                              (6U 
                                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                     << 6U)))))),64);
            tracep->chgBit(oldp+258,((1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3) 
                                              << 3U) 
                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0)))) 
                                            >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)))));
            tracep->chgBit(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgCData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
            tracep->chgCData(oldp+263,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
            tracep->chgQData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
            tracep->chgQData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
            tracep->chgQData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
            tracep->chgQData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
            tracep->chgCData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
            tracep->chgCData(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
            tracep->chgBit(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
            tracep->chgBit(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
            tracep->chgBit(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
            tracep->chgBit(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
            tracep->chgBit(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq));
            tracep->chgBit(oldp+279,((((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid) 
                                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)))));
            tracep->chgIData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst),32);
            tracep->chgBit(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2));
            tracep->chgQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
            tracep->chgQData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
            tracep->chgQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
            tracep->chgQData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
            tracep->chgIData(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
            tracep->chgIData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
            tracep->chgIData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
            tracep->chgIData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
            tracep->chgBit(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
            tracep->chgBit(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
            tracep->chgBit(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
            tracep->chgBit(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
            tracep->chgBit(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
            tracep->chgBit(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
            tracep->chgBit(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
            tracep->chgBit(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
            tracep->chgCData(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
            tracep->chgCData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
            tracep->chgCData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
            tracep->chgBit(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size));
            tracep->chgBit(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq));
            tracep->chgQData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc),64);
            tracep->chgBit(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
            tracep->chgWData(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
            tracep->chgWData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
            tracep->chgWData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
            tracep->chgWData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
            tracep->chgWData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
            tracep->chgWData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
            tracep->chgWData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
            tracep->chgWData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
            tracep->chgWData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
            tracep->chgWData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
            tracep->chgWData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
            tracep->chgWData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
            tracep->chgWData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
            tracep->chgWData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
            tracep->chgWData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
            tracep->chgWData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
            tracep->chgWData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
            tracep->chgWData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
            tracep->chgWData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
            tracep->chgWData(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
            tracep->chgWData(oldp+390,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
            tracep->chgWData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
            tracep->chgWData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
            tracep->chgWData(oldp+402,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
            tracep->chgWData(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
            tracep->chgWData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
            tracep->chgWData(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
            tracep->chgWData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
            tracep->chgWData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
            tracep->chgWData(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
            tracep->chgWData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
            tracep->chgWData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
            tracep->chgWData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
            tracep->chgWData(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
            tracep->chgWData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
            tracep->chgWData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
            tracep->chgWData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
            tracep->chgWData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
            tracep->chgWData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
            tracep->chgWData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
            tracep->chgWData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
            tracep->chgWData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
            tracep->chgWData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
            tracep->chgWData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
            tracep->chgWData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
            tracep->chgWData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
            tracep->chgWData(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
            tracep->chgWData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
            tracep->chgWData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
            tracep->chgWData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
            tracep->chgWData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
            tracep->chgWData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
            tracep->chgWData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
            tracep->chgWData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
            tracep->chgWData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
            tracep->chgWData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
            tracep->chgWData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
            tracep->chgWData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
            tracep->chgWData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
            tracep->chgWData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
            tracep->chgWData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
            tracep->chgWData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
            tracep->chgWData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
            tracep->chgWData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
            tracep->chgQData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
            tracep->chgQData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
            tracep->chgQData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
            tracep->chgQData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
            tracep->chgQData(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
            tracep->chgQData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
            tracep->chgCData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
            tracep->chgCData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
            tracep->chgCData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
            tracep->chgCData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
            tracep->chgCData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
            tracep->chgCData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
            tracep->chgCData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
            tracep->chgCData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
            tracep->chgCData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
            tracep->chgCData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
            tracep->chgCData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
            tracep->chgCData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
            tracep->chgCData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
            tracep->chgCData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
            tracep->chgCData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
            tracep->chgCData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
            tracep->chgCData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
            tracep->chgCData(oldp+595,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
            tracep->chgCData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
            tracep->chgCData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
            tracep->chgCData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
            tracep->chgCData(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
            tracep->chgCData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
            tracep->chgCData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
            tracep->chgCData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
            tracep->chgCData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
            tracep->chgCData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
            tracep->chgCData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
            tracep->chgCData(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
            tracep->chgCData(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
            tracep->chgCData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
            tracep->chgCData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
            tracep->chgCData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
            tracep->chgCData(oldp+611,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
            tracep->chgCData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
            tracep->chgCData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
            tracep->chgCData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
            tracep->chgCData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
            tracep->chgCData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
            tracep->chgCData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
            tracep->chgCData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
            tracep->chgCData(oldp+619,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
            tracep->chgCData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
            tracep->chgCData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
            tracep->chgCData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
            tracep->chgCData(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
            tracep->chgCData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
            tracep->chgCData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
            tracep->chgCData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
            tracep->chgCData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
            tracep->chgCData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
            tracep->chgCData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
            tracep->chgCData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
            tracep->chgCData(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
            tracep->chgCData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
            tracep->chgCData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
            tracep->chgCData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
            tracep->chgCData(oldp+635,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
            tracep->chgCData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
            tracep->chgCData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
            tracep->chgCData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
            tracep->chgCData(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
            tracep->chgCData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
            tracep->chgCData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
            tracep->chgCData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
            tracep->chgBit(oldp+643,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
            tracep->chgCData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
            tracep->chgCData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgIData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
            tracep->chgQData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
            tracep->chgBit(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
            tracep->chgBit(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
            tracep->chgSData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+662,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgQData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus),64);
            tracep->chgQData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie),64);
            tracep->chgQData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc),64);
            tracep->chgQData(oldp+670,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
            tracep->chgBit(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2));
            tracep->chgCData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
            tracep->chgQData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3),64);
            tracep->chgBit(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T));
            tracep->chgSData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except));
            tracep->chgBit(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq));
            tracep->chgBit(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq));
            tracep->chgCData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
            tracep->chgQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
            tracep->chgQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
            tracep->chgBit(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit));
            tracep->chgIData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
            tracep->chgBit(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
            tracep->chgBit(oldp+691,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
            tracep->chgQData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data),64);
            tracep->chgQData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data),64);
            tracep->chgCData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
            tracep->chgCData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgBit(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
            tracep->chgQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
            tracep->chgBit(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
            tracep->chgBit(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
            tracep->chgBit(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
            tracep->chgBit(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
            tracep->chgBit(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
            tracep->chgBit(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
            tracep->chgBit(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
            tracep->chgBit(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq));
            tracep->chgBit(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq));
            tracep->chgBit(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
            tracep->chgBit(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
            tracep->chgBit(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T));
            tracep->chgQData(oldp+713,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                         ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                         : 0ULL)),64);
            tracep->chgBit(oldp+715,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U])));
            tracep->chgQData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T),64);
            tracep->chgQData(oldp+718,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2)
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
            tracep->chgQData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
            tracep->chgQData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
            tracep->chgQData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            tracep->chgBit(oldp+726,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgQData(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
            tracep->chgBit(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgCData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
            VL_EXTEND_WQ(127,64, __Vtemp1690, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp1691, __Vtemp1690, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            __Vtemp1692[0U] = __Vtemp1691[0U];
            __Vtemp1692[1U] = __Vtemp1691[1U];
            __Vtemp1692[2U] = __Vtemp1691[2U];
            __Vtemp1692[3U] = (0x7fffffffU & __Vtemp1691[3U]);
            tracep->chgWData(oldp+731,(__Vtemp1692),127);
            tracep->chgBit(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
            __Vtemp1693[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            __Vtemp1693[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 0x20U));
            __Vtemp1693[2U] = 1U;
            tracep->chgWData(oldp+736,(__Vtemp1693),65);
            tracep->chgQData(oldp+739,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            tracep->chgQData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
            tracep->chgBit(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid));
            tracep->chgQData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
            tracep->chgQData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+750,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
            tracep->chgCData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
            tracep->chgQData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
            tracep->chgBit(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
            tracep->chgBit(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
            tracep->chgWData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
            tracep->chgBit(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
            tracep->chgQData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data),64);
            tracep->chgBit(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid));
            tracep->chgQData(oldp+768,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                                         ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                             ? ((1U 
                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                              >> 0x1fU))))) 
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
                                                                  (- (IData)(
                                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                              >> 0x1fU))))) 
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
                                                                 (- (IData)(
                                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                             >> 0x1fU))))) 
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
            tracep->chgBit(oldp+770,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
            tracep->chgBit(oldp+771,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready))));
            tracep->chgBit(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid));
            tracep->chgQData(oldp+773,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
            tracep->chgWData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
            tracep->chgCData(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
            tracep->chgWData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend),65);
            tracep->chgWData(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor),65);
            tracep->chgWData(oldp+798,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem),65);
            tracep->chgWData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor),65);
            tracep->chgBit(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid));
            tracep->chgQData(oldp+805,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                         >> 0x1fU))))) 
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
            tracep->chgBit(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
            tracep->chgCData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+818,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
            tracep->chgCData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
            tracep->chgWData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2),65);
            tracep->chgBit(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
            tracep->chgQData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data),64);
            tracep->chgBit(oldp+831,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2) 
                                      & ((0U != (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
            __Vtemp1700[0U] = 0U;
            __Vtemp1700[1U] = 0U;
            __Vtemp1700[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
            __Vtemp1700[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
                                       >> 0x20U));
            __Vtemp1700[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
            __Vtemp1700[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                       >> 0x20U));
            __Vtemp1700[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
            __Vtemp1700[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                       >> 0x20U));
            __Vtemp1700[8U] = 0U;
            __Vtemp1700[9U] = 0U;
            __Vtemp1700[0xaU] = (IData)(((0xffffffffffffffe0ULL 
                                          & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                         | (QData)((IData)(
                                                           (0x1fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))));
            __Vtemp1700[0xbU] = (IData)((((0xffffffffffffffe0ULL 
                                           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                          | (QData)((IData)(
                                                            (0x1fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))) 
                                         >> 0x20U));
            __Vtemp1700[0xcU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
            __Vtemp1700[0xdU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                         >> 0x20U));
            __Vtemp1700[0xeU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
            __Vtemp1700[0xfU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                         >> 0x20U));
            tracep->chgQData(oldp+832,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                         ? (0x80ULL 
                                            | ((0xffffffffffffff77ULL 
                                                & vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus) 
                                               | (QData)((IData)(
                                                                 (8U 
                                                                  & ((IData)(
                                                                             (vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
                                                                              >> 7U)) 
                                                                     << 3U))))))
                                         : (((QData)((IData)(
                                                             __Vtemp1700[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               (0x1c0U 
                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                   << 4U))) 
                                                              >> 5U)])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp1700[
                                                              (0xeU 
                                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                  >> 1U))]))))),64);
            tracep->chgSData(oldp+834,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                         ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
            tracep->chgBit(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except));
            tracep->chgCData(oldp+836,(((0U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? 0xbU : (3U 
                                                   & (- (IData)(
                                                                (8U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                     >> 2U)))))))),6);
            tracep->chgBit(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc));
            tracep->chgQData(oldp+838,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
            tracep->chgQData(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
            tracep->chgQData(oldp+842,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
            tracep->chgBit(oldp+844,((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgBit(oldp+845,((8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgBit(oldp+846,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
            tracep->chgQData(oldp+847,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                 >> 0xfU))) 
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
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                              (0x3eU 
                                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                  >> 0xeU))]))))),64);
            tracep->chgQData(oldp+849,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                 >> 0x14U))) 
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
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                              (0x3eU 
                                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                  >> 0x13U))]))))),64);
            tracep->chgQData(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data),64);
            tracep->chgCData(oldp+853,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+854,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+855,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType),4);
            tracep->chgQData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
            tracep->chgQData(oldp+859,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
            tracep->chgQData(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
            tracep->chgQData(oldp+863,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
            tracep->chgQData(oldp+865,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
            tracep->chgQData(oldp+867,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
            tracep->chgQData(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
            tracep->chgQData(oldp+871,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
            tracep->chgQData(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
            tracep->chgQData(oldp+875,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
            tracep->chgQData(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
            tracep->chgQData(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
            tracep->chgQData(oldp+881,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
            tracep->chgQData(oldp+883,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
            tracep->chgQData(oldp+885,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
            tracep->chgQData(oldp+887,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
            tracep->chgQData(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
            tracep->chgQData(oldp+891,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
            tracep->chgQData(oldp+893,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
            tracep->chgQData(oldp+895,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
            tracep->chgQData(oldp+897,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
            tracep->chgQData(oldp+899,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
            tracep->chgQData(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
            tracep->chgQData(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
            tracep->chgQData(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
            tracep->chgQData(oldp+907,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
            tracep->chgQData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
            tracep->chgQData(oldp+911,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
            tracep->chgQData(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
            tracep->chgQData(oldp+915,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
            tracep->chgQData(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
            tracep->chgQData(oldp+919,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
            tracep->chgBit(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
            tracep->chgIData(oldp+922,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
            tracep->chgQData(oldp+923,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
            tracep->chgQData(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
            tracep->chgBit(oldp+927,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
            tracep->chgBit(oldp+928,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
            tracep->chgCData(oldp+929,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
            tracep->chgQData(oldp+930,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+932,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+934,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+936,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+938,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+940,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+942,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+944,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+946,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgBit(oldp+948,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq));
            tracep->chgQData(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+951,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+953,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgQData(oldp+954,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+956,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+957,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgQData(oldp+958,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgBit(oldp+960,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgQData(oldp+961,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                         ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                         : vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+963,((((QData)((IData)(
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                          >> 7U)))) 
                                                           << 0x18U) 
                                                          | ((0xff0000U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 6U)))) 
                                                                 << 0x10U)) 
                                                             | ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 5U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 4U)))))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                           >> 3U)))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 2U)))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 1U)))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb)))))))))))),64);
            tracep->chgBit(oldp+965,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                      & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid))));
            tracep->chgWData(oldp+966,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
            tracep->chgWData(oldp+970,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
            tracep->chgWData(oldp+974,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
            tracep->chgWData(oldp+978,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
            tracep->chgWData(oldp+982,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
            tracep->chgWData(oldp+986,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
            tracep->chgWData(oldp+990,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
            tracep->chgWData(oldp+994,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
            tracep->chgWData(oldp+998,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
            tracep->chgWData(oldp+1002,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
            tracep->chgWData(oldp+1006,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
            tracep->chgWData(oldp+1010,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
            tracep->chgWData(oldp+1014,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
            tracep->chgWData(oldp+1018,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
            tracep->chgWData(oldp+1022,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
            tracep->chgWData(oldp+1026,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
            tracep->chgWData(oldp+1030,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
            tracep->chgWData(oldp+1034,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
            tracep->chgWData(oldp+1038,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
            tracep->chgWData(oldp+1042,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
            tracep->chgWData(oldp+1046,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
            tracep->chgWData(oldp+1050,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
            tracep->chgWData(oldp+1054,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
            tracep->chgWData(oldp+1058,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
            tracep->chgWData(oldp+1062,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
            tracep->chgWData(oldp+1066,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
            tracep->chgWData(oldp+1070,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
            tracep->chgWData(oldp+1074,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
            tracep->chgWData(oldp+1078,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
            tracep->chgWData(oldp+1082,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
            tracep->chgWData(oldp+1086,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
            tracep->chgWData(oldp+1090,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
            tracep->chgWData(oldp+1094,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
            tracep->chgWData(oldp+1098,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
            tracep->chgWData(oldp+1102,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
            tracep->chgWData(oldp+1106,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
            tracep->chgWData(oldp+1110,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
            tracep->chgWData(oldp+1114,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
            tracep->chgWData(oldp+1118,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
            tracep->chgWData(oldp+1122,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
            tracep->chgWData(oldp+1126,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
            tracep->chgWData(oldp+1130,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
            tracep->chgWData(oldp+1134,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
            tracep->chgWData(oldp+1138,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
            tracep->chgWData(oldp+1142,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
            tracep->chgWData(oldp+1146,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
            tracep->chgWData(oldp+1150,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
            tracep->chgWData(oldp+1154,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
            tracep->chgWData(oldp+1158,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
            tracep->chgWData(oldp+1162,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
            tracep->chgWData(oldp+1166,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
            tracep->chgWData(oldp+1170,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
            tracep->chgWData(oldp+1174,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
            tracep->chgWData(oldp+1178,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
            tracep->chgWData(oldp+1182,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
            tracep->chgWData(oldp+1186,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
            tracep->chgWData(oldp+1190,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
            tracep->chgWData(oldp+1194,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
            tracep->chgWData(oldp+1198,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
            tracep->chgWData(oldp+1202,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
            tracep->chgWData(oldp+1206,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
            tracep->chgWData(oldp+1210,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
            tracep->chgWData(oldp+1214,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
            tracep->chgWData(oldp+1218,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
            tracep->chgWData(oldp+1222,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
            tracep->chgWData(oldp+1226,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
            tracep->chgWData(oldp+1230,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
            tracep->chgWData(oldp+1234,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
            tracep->chgWData(oldp+1238,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
            tracep->chgWData(oldp+1242,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
            tracep->chgWData(oldp+1246,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
            tracep->chgWData(oldp+1250,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
            tracep->chgWData(oldp+1254,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
            tracep->chgWData(oldp+1258,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
            tracep->chgWData(oldp+1262,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
            tracep->chgWData(oldp+1266,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
            tracep->chgWData(oldp+1270,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
            tracep->chgWData(oldp+1274,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
            tracep->chgWData(oldp+1278,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
            tracep->chgWData(oldp+1282,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
            tracep->chgWData(oldp+1286,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
            tracep->chgWData(oldp+1290,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
            tracep->chgWData(oldp+1294,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
            tracep->chgWData(oldp+1298,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
            tracep->chgWData(oldp+1302,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
            tracep->chgWData(oldp+1306,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
            tracep->chgWData(oldp+1310,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
            tracep->chgWData(oldp+1314,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
            tracep->chgWData(oldp+1318,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
            tracep->chgWData(oldp+1322,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
            tracep->chgWData(oldp+1326,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
            tracep->chgWData(oldp+1330,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
            tracep->chgWData(oldp+1334,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
            tracep->chgWData(oldp+1338,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
            tracep->chgWData(oldp+1342,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
            tracep->chgWData(oldp+1346,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
            tracep->chgWData(oldp+1350,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
            tracep->chgWData(oldp+1354,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
            tracep->chgWData(oldp+1358,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
            tracep->chgWData(oldp+1362,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
            tracep->chgWData(oldp+1366,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
            tracep->chgWData(oldp+1370,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
            tracep->chgWData(oldp+1374,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
            tracep->chgWData(oldp+1378,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
            tracep->chgWData(oldp+1382,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
            tracep->chgWData(oldp+1386,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
            tracep->chgWData(oldp+1390,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
            tracep->chgWData(oldp+1394,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
            tracep->chgWData(oldp+1398,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
            tracep->chgWData(oldp+1402,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
            tracep->chgWData(oldp+1406,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
            tracep->chgWData(oldp+1410,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
            tracep->chgWData(oldp+1414,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
            tracep->chgWData(oldp+1418,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
            tracep->chgWData(oldp+1422,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
            tracep->chgWData(oldp+1426,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
            tracep->chgWData(oldp+1430,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
            tracep->chgWData(oldp+1434,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
            tracep->chgWData(oldp+1438,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
            tracep->chgWData(oldp+1442,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
            tracep->chgWData(oldp+1446,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
            tracep->chgWData(oldp+1450,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
            tracep->chgWData(oldp+1454,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
            tracep->chgWData(oldp+1458,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
            tracep->chgWData(oldp+1462,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
            tracep->chgWData(oldp+1466,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
            tracep->chgWData(oldp+1470,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
            tracep->chgWData(oldp+1474,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
            tracep->chgWData(oldp+1478,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
            tracep->chgWData(oldp+1482,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
            tracep->chgWData(oldp+1486,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
            tracep->chgWData(oldp+1490,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
            tracep->chgWData(oldp+1494,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
            tracep->chgWData(oldp+1498,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
            tracep->chgWData(oldp+1502,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
            tracep->chgWData(oldp+1506,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
            tracep->chgWData(oldp+1510,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
            tracep->chgWData(oldp+1514,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
            tracep->chgWData(oldp+1518,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
            tracep->chgWData(oldp+1522,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
            tracep->chgWData(oldp+1526,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
            tracep->chgWData(oldp+1530,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
            tracep->chgWData(oldp+1534,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
            tracep->chgWData(oldp+1538,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
            tracep->chgWData(oldp+1542,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
            tracep->chgWData(oldp+1546,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
            tracep->chgWData(oldp+1550,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
            tracep->chgWData(oldp+1554,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
            tracep->chgWData(oldp+1558,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
            tracep->chgWData(oldp+1562,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
            tracep->chgWData(oldp+1566,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
            tracep->chgWData(oldp+1570,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
            tracep->chgWData(oldp+1574,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
            tracep->chgWData(oldp+1578,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
            tracep->chgWData(oldp+1582,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
            tracep->chgWData(oldp+1586,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
            tracep->chgWData(oldp+1590,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
            tracep->chgWData(oldp+1594,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
            tracep->chgWData(oldp+1598,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
            tracep->chgWData(oldp+1602,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
            tracep->chgWData(oldp+1606,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
            tracep->chgWData(oldp+1610,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
            tracep->chgWData(oldp+1614,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
            tracep->chgWData(oldp+1618,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
            tracep->chgWData(oldp+1622,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
            tracep->chgWData(oldp+1626,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
            tracep->chgWData(oldp+1630,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
            tracep->chgWData(oldp+1634,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
            tracep->chgWData(oldp+1638,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
            tracep->chgWData(oldp+1642,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
            tracep->chgWData(oldp+1646,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
            tracep->chgWData(oldp+1650,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
            tracep->chgWData(oldp+1654,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
            tracep->chgWData(oldp+1658,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
            tracep->chgWData(oldp+1662,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
            tracep->chgWData(oldp+1666,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
            tracep->chgWData(oldp+1670,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
            tracep->chgWData(oldp+1674,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
            tracep->chgWData(oldp+1678,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
            tracep->chgWData(oldp+1682,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
            tracep->chgWData(oldp+1686,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
            tracep->chgWData(oldp+1690,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
            tracep->chgWData(oldp+1694,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
            tracep->chgWData(oldp+1698,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
            tracep->chgWData(oldp+1702,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
            tracep->chgWData(oldp+1706,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
            tracep->chgWData(oldp+1710,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
            tracep->chgWData(oldp+1714,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
            tracep->chgWData(oldp+1718,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
            tracep->chgWData(oldp+1722,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
            tracep->chgWData(oldp+1726,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
            tracep->chgWData(oldp+1730,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
            tracep->chgWData(oldp+1734,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
            tracep->chgWData(oldp+1738,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
            tracep->chgWData(oldp+1742,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
            tracep->chgWData(oldp+1746,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
            tracep->chgWData(oldp+1750,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
            tracep->chgWData(oldp+1754,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
            tracep->chgWData(oldp+1758,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
            tracep->chgWData(oldp+1762,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
            tracep->chgWData(oldp+1766,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
            tracep->chgWData(oldp+1770,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
            tracep->chgWData(oldp+1774,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
            tracep->chgWData(oldp+1778,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
            tracep->chgWData(oldp+1782,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
            tracep->chgWData(oldp+1786,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
            tracep->chgWData(oldp+1790,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
            tracep->chgWData(oldp+1794,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
            tracep->chgWData(oldp+1798,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
            tracep->chgWData(oldp+1802,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
            tracep->chgWData(oldp+1806,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
            tracep->chgWData(oldp+1810,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
            tracep->chgWData(oldp+1814,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
            tracep->chgWData(oldp+1818,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
            tracep->chgWData(oldp+1822,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
            tracep->chgWData(oldp+1826,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
            tracep->chgWData(oldp+1830,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
            tracep->chgWData(oldp+1834,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
            tracep->chgWData(oldp+1838,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
            tracep->chgWData(oldp+1842,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
            tracep->chgWData(oldp+1846,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
            tracep->chgWData(oldp+1850,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
            tracep->chgWData(oldp+1854,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
            tracep->chgWData(oldp+1858,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
            tracep->chgWData(oldp+1862,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
            tracep->chgWData(oldp+1866,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
            tracep->chgWData(oldp+1870,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
            tracep->chgWData(oldp+1874,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
            tracep->chgWData(oldp+1878,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
            tracep->chgWData(oldp+1882,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
            tracep->chgWData(oldp+1886,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
            tracep->chgWData(oldp+1890,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
            tracep->chgWData(oldp+1894,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
            tracep->chgWData(oldp+1898,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
            tracep->chgWData(oldp+1902,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
            tracep->chgWData(oldp+1906,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
            tracep->chgWData(oldp+1910,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
            tracep->chgWData(oldp+1914,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
            tracep->chgWData(oldp+1918,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
            tracep->chgWData(oldp+1922,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
            tracep->chgWData(oldp+1926,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
            tracep->chgWData(oldp+1930,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
            tracep->chgWData(oldp+1934,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
            tracep->chgWData(oldp+1938,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
            tracep->chgWData(oldp+1942,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
            tracep->chgWData(oldp+1946,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
            tracep->chgWData(oldp+1950,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
            tracep->chgWData(oldp+1954,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
            tracep->chgWData(oldp+1958,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
            tracep->chgWData(oldp+1962,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
            tracep->chgWData(oldp+1966,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
            tracep->chgWData(oldp+1970,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
            tracep->chgWData(oldp+1974,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
            tracep->chgWData(oldp+1978,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
            tracep->chgWData(oldp+1982,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
            tracep->chgWData(oldp+1986,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
            tracep->chgWData(oldp+1990,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
            tracep->chgWData(oldp+1994,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
            tracep->chgWData(oldp+1998,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
            tracep->chgWData(oldp+2002,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
            tracep->chgWData(oldp+2006,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
            tracep->chgWData(oldp+2010,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
            tracep->chgWData(oldp+2014,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
            tracep->chgWData(oldp+2018,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
            tracep->chgWData(oldp+2022,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
            tracep->chgWData(oldp+2026,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
            tracep->chgWData(oldp+2030,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
            tracep->chgWData(oldp+2034,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
            tracep->chgWData(oldp+2038,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
            tracep->chgWData(oldp+2042,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
            tracep->chgWData(oldp+2046,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
            tracep->chgWData(oldp+2050,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
            tracep->chgWData(oldp+2054,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
            tracep->chgWData(oldp+2058,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
            tracep->chgWData(oldp+2062,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
            tracep->chgWData(oldp+2066,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
            tracep->chgWData(oldp+2070,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
            tracep->chgWData(oldp+2074,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
            tracep->chgWData(oldp+2078,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
            tracep->chgWData(oldp+2082,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
            tracep->chgWData(oldp+2086,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
            tracep->chgWData(oldp+2090,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
            tracep->chgWData(oldp+2094,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
            tracep->chgWData(oldp+2098,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
            tracep->chgWData(oldp+2102,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
            tracep->chgWData(oldp+2106,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
            tracep->chgWData(oldp+2110,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
            tracep->chgWData(oldp+2114,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
            tracep->chgWData(oldp+2118,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
            tracep->chgWData(oldp+2122,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
            tracep->chgWData(oldp+2126,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
            tracep->chgWData(oldp+2130,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
            tracep->chgWData(oldp+2134,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
            tracep->chgWData(oldp+2138,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
            tracep->chgWData(oldp+2142,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
            tracep->chgWData(oldp+2146,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
            tracep->chgWData(oldp+2150,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
            tracep->chgWData(oldp+2154,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
            tracep->chgWData(oldp+2158,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
            tracep->chgWData(oldp+2162,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
            tracep->chgWData(oldp+2166,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
            tracep->chgWData(oldp+2170,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
            tracep->chgWData(oldp+2174,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
            tracep->chgWData(oldp+2178,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
            tracep->chgWData(oldp+2182,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
            tracep->chgWData(oldp+2186,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
            tracep->chgWData(oldp+2190,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
            tracep->chgWData(oldp+2194,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
            tracep->chgWData(oldp+2198,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
            tracep->chgWData(oldp+2202,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
            tracep->chgWData(oldp+2206,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
            tracep->chgWData(oldp+2210,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
            tracep->chgWData(oldp+2214,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
            tracep->chgWData(oldp+2218,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
            tracep->chgWData(oldp+2222,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
            tracep->chgWData(oldp+2226,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
            tracep->chgWData(oldp+2230,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
            tracep->chgWData(oldp+2234,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
            tracep->chgWData(oldp+2238,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
            tracep->chgWData(oldp+2242,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
            tracep->chgWData(oldp+2246,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
            tracep->chgWData(oldp+2250,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
            tracep->chgWData(oldp+2254,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
            tracep->chgWData(oldp+2258,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
            tracep->chgWData(oldp+2262,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
            tracep->chgWData(oldp+2266,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
            tracep->chgWData(oldp+2270,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
            tracep->chgWData(oldp+2274,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
            tracep->chgWData(oldp+2278,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
            tracep->chgWData(oldp+2282,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
            tracep->chgWData(oldp+2286,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
            tracep->chgWData(oldp+2290,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
            tracep->chgWData(oldp+2294,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
            tracep->chgWData(oldp+2298,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
            tracep->chgWData(oldp+2302,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
            tracep->chgWData(oldp+2306,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
            tracep->chgWData(oldp+2310,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
            tracep->chgWData(oldp+2314,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
            tracep->chgWData(oldp+2318,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
            tracep->chgWData(oldp+2322,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
            tracep->chgWData(oldp+2326,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
            tracep->chgWData(oldp+2330,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
            tracep->chgWData(oldp+2334,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
            tracep->chgWData(oldp+2338,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
            tracep->chgWData(oldp+2342,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
            tracep->chgWData(oldp+2346,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
            tracep->chgWData(oldp+2350,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
            tracep->chgWData(oldp+2354,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
            tracep->chgWData(oldp+2358,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
            tracep->chgWData(oldp+2362,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
            tracep->chgWData(oldp+2366,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
            tracep->chgWData(oldp+2370,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
            tracep->chgWData(oldp+2374,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
            tracep->chgWData(oldp+2378,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
            tracep->chgWData(oldp+2382,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
            tracep->chgWData(oldp+2386,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
            tracep->chgWData(oldp+2390,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
            tracep->chgWData(oldp+2394,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
            tracep->chgWData(oldp+2398,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
            tracep->chgWData(oldp+2402,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
            tracep->chgWData(oldp+2406,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
            tracep->chgWData(oldp+2410,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
            tracep->chgWData(oldp+2414,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
            tracep->chgWData(oldp+2418,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
            tracep->chgWData(oldp+2422,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
            tracep->chgWData(oldp+2426,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
            tracep->chgWData(oldp+2430,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
            tracep->chgWData(oldp+2434,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
            tracep->chgWData(oldp+2438,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
            tracep->chgWData(oldp+2442,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
            tracep->chgWData(oldp+2446,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
            tracep->chgWData(oldp+2450,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
            tracep->chgWData(oldp+2454,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
            tracep->chgWData(oldp+2458,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
            tracep->chgWData(oldp+2462,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
            tracep->chgWData(oldp+2466,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
            tracep->chgWData(oldp+2470,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
            tracep->chgWData(oldp+2474,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
            tracep->chgWData(oldp+2478,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
            tracep->chgWData(oldp+2482,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
            tracep->chgWData(oldp+2486,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
            tracep->chgWData(oldp+2490,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
            tracep->chgWData(oldp+2494,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
            tracep->chgWData(oldp+2498,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
            tracep->chgWData(oldp+2502,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
            tracep->chgWData(oldp+2506,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
            tracep->chgWData(oldp+2510,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
            tracep->chgWData(oldp+2514,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
            tracep->chgWData(oldp+2518,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
            tracep->chgWData(oldp+2522,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
            tracep->chgWData(oldp+2526,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
            tracep->chgWData(oldp+2530,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
            tracep->chgWData(oldp+2534,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
            tracep->chgWData(oldp+2538,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
            tracep->chgWData(oldp+2542,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
            tracep->chgWData(oldp+2546,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
            tracep->chgWData(oldp+2550,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
            tracep->chgWData(oldp+2554,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
            tracep->chgWData(oldp+2558,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
            tracep->chgWData(oldp+2562,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
            tracep->chgWData(oldp+2566,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
            tracep->chgWData(oldp+2570,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
            tracep->chgWData(oldp+2574,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
            tracep->chgWData(oldp+2578,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
            tracep->chgWData(oldp+2582,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
            tracep->chgWData(oldp+2586,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
            tracep->chgWData(oldp+2590,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
            tracep->chgWData(oldp+2594,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
            tracep->chgWData(oldp+2598,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
            tracep->chgWData(oldp+2602,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
            tracep->chgWData(oldp+2606,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
            tracep->chgWData(oldp+2610,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
            tracep->chgWData(oldp+2614,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
            tracep->chgWData(oldp+2618,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
            tracep->chgWData(oldp+2622,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
            tracep->chgWData(oldp+2626,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
            tracep->chgWData(oldp+2630,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
            tracep->chgWData(oldp+2634,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
            tracep->chgWData(oldp+2638,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
            tracep->chgWData(oldp+2642,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
            tracep->chgWData(oldp+2646,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
            tracep->chgWData(oldp+2650,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
            tracep->chgWData(oldp+2654,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
            tracep->chgWData(oldp+2658,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
            tracep->chgWData(oldp+2662,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
            tracep->chgWData(oldp+2666,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
            tracep->chgWData(oldp+2670,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
            tracep->chgWData(oldp+2674,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
            tracep->chgWData(oldp+2678,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
            tracep->chgWData(oldp+2682,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
            tracep->chgWData(oldp+2686,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
            tracep->chgWData(oldp+2690,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
            tracep->chgWData(oldp+2694,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
            tracep->chgWData(oldp+2698,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
            tracep->chgWData(oldp+2702,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
            tracep->chgWData(oldp+2706,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
            tracep->chgWData(oldp+2710,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
            tracep->chgWData(oldp+2714,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
            tracep->chgWData(oldp+2718,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
            tracep->chgWData(oldp+2722,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
            tracep->chgWData(oldp+2726,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
            tracep->chgWData(oldp+2730,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
            tracep->chgWData(oldp+2734,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
            tracep->chgWData(oldp+2738,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
            tracep->chgWData(oldp+2742,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
            tracep->chgWData(oldp+2746,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
            tracep->chgWData(oldp+2750,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
            tracep->chgWData(oldp+2754,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
            tracep->chgWData(oldp+2758,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
            tracep->chgWData(oldp+2762,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
            tracep->chgWData(oldp+2766,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
            tracep->chgWData(oldp+2770,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
            tracep->chgWData(oldp+2774,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
            tracep->chgWData(oldp+2778,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
            tracep->chgWData(oldp+2782,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
            tracep->chgWData(oldp+2786,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
            tracep->chgWData(oldp+2790,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
            tracep->chgWData(oldp+2794,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
            tracep->chgWData(oldp+2798,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
            tracep->chgWData(oldp+2802,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
            tracep->chgWData(oldp+2806,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
            tracep->chgWData(oldp+2810,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
            tracep->chgWData(oldp+2814,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
            tracep->chgWData(oldp+2818,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
            tracep->chgWData(oldp+2822,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
            tracep->chgWData(oldp+2826,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
            tracep->chgWData(oldp+2830,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
            tracep->chgWData(oldp+2834,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
            tracep->chgWData(oldp+2838,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
            tracep->chgWData(oldp+2842,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
            tracep->chgWData(oldp+2846,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
            tracep->chgWData(oldp+2850,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
            tracep->chgWData(oldp+2854,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
            tracep->chgWData(oldp+2858,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
            tracep->chgWData(oldp+2862,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
            tracep->chgWData(oldp+2866,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
            tracep->chgWData(oldp+2870,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
            tracep->chgWData(oldp+2874,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
            tracep->chgWData(oldp+2878,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
            tracep->chgWData(oldp+2882,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
            tracep->chgWData(oldp+2886,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
            tracep->chgWData(oldp+2890,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
            tracep->chgWData(oldp+2894,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
            tracep->chgWData(oldp+2898,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
            tracep->chgWData(oldp+2902,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
            tracep->chgWData(oldp+2906,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
            tracep->chgWData(oldp+2910,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
            tracep->chgWData(oldp+2914,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
            tracep->chgWData(oldp+2918,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
            tracep->chgWData(oldp+2922,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
            tracep->chgWData(oldp+2926,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
            tracep->chgWData(oldp+2930,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
            tracep->chgWData(oldp+2934,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
            tracep->chgWData(oldp+2938,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
            tracep->chgWData(oldp+2942,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
            tracep->chgWData(oldp+2946,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
            tracep->chgWData(oldp+2950,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
            tracep->chgWData(oldp+2954,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
            tracep->chgWData(oldp+2958,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
            tracep->chgWData(oldp+2962,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
            tracep->chgWData(oldp+2966,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
            tracep->chgWData(oldp+2970,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
            tracep->chgWData(oldp+2974,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
            tracep->chgWData(oldp+2978,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
            tracep->chgWData(oldp+2982,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
            tracep->chgWData(oldp+2986,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
            tracep->chgWData(oldp+2990,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
            tracep->chgWData(oldp+2994,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
            tracep->chgWData(oldp+2998,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
            tracep->chgWData(oldp+3002,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
            tracep->chgWData(oldp+3006,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
            tracep->chgWData(oldp+3010,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
        }
        tracep->chgBit(oldp+3014,(vlSelf->clock));
        tracep->chgBit(oldp+3015,(vlSelf->reset));
        tracep->chgQData(oldp+3016,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+3018,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+3020,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+3022,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+3024,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+3026,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+3028,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+3030,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+3032,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+3034,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+3036,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+3038,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+3040,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+3042,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+3044,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+3046,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+3048,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+3050,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+3052,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+3054,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+3056,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+3058,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+3060,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+3062,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+3064,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+3066,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+3068,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+3070,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+3072,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+3074,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+3076,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+3078,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+3080,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+3082,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+3083,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+3084,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+3086,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+3087,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+3089,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+3091,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+3093,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+3095,(vlSelf->io_difftest_peripheral));
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
