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
    VlWide<4>/*127:0*/ __Vtemp4338;
    VlWide<4>/*127:0*/ __Vtemp4339;
    VlWide<4>/*127:0*/ __Vtemp4340;
    VlWide<4>/*127:0*/ __Vtemp4341;
    VlWide<3>/*95:0*/ __Vtemp4343;
    VlWide<3>/*95:0*/ __Vtemp4344;
    VlWide<3>/*95:0*/ __Vtemp4345;
    VlWide<3>/*95:0*/ __Vtemp4347;
    VlWide<3>/*95:0*/ __Vtemp4348;
    VlWide<3>/*95:0*/ __Vtemp4350;
    VlWide<3>/*95:0*/ __Vtemp4352;
    VlWide<3>/*95:0*/ __Vtemp4353;
    VlWide<3>/*95:0*/ __Vtemp4354;
    VlWide<3>/*95:0*/ __Vtemp4355;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
            tracep->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
            tracep->chgQData(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_bits_awaddr),64);
            tracep->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
            tracep->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
            tracep->chgQData(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wdata),64);
            tracep->chgCData(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb),8);
            tracep->chgBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
            tracep->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
            tracep->chgBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
            tracep->chgBit(oldp+12,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
            tracep->chgQData(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
            tracep->chgCData(oldp+15,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59),8);
            tracep->chgBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
            tracep->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
            tracep->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
            tracep->chgBit(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit));
            tracep->chgQData(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc),64);
            tracep->chgIData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst),32);
            tracep->chgQData(oldp+24,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [6U]),64);
            tracep->chgQData(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [7U]),64);
            tracep->chgQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [8U]),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [9U]),64);
            tracep->chgQData(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xaU]),64);
            tracep->chgQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xbU]),64);
            tracep->chgQData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xcU]),64);
            tracep->chgQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xdU]),64);
            tracep->chgQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xeU]),64);
            tracep->chgQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xfU]),64);
            tracep->chgQData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x10U]),64);
            tracep->chgQData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x11U]),64);
            tracep->chgQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x12U]),64);
            tracep->chgQData(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x13U]),64);
            tracep->chgQData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x14U]),64);
            tracep->chgQData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x15U]),64);
            tracep->chgQData(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x16U]),64);
            tracep->chgQData(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x17U]),64);
            tracep->chgQData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x18U]),64);
            tracep->chgQData(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x19U]),64);
            tracep->chgQData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1aU]),64);
            tracep->chgQData(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1bU]),64);
            tracep->chgQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1cU]),64);
            tracep->chgQData(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1dU]),64);
            tracep->chgQData(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1eU]),64);
            tracep->chgQData(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1fU]),64);
            tracep->chgQData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter),64);
            tracep->chgQData(oldp+88,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid));
            tracep->chgQData(oldp+91,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgQData(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
            tracep->chgBit(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready));
            tracep->chgBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_b_valid));
            tracep->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
            tracep->chgQData(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata),64);
            tracep->chgBit(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready));
            tracep->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
            tracep->chgQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready));
            tracep->chgBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
            tracep->chgBit(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgBit(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
            tracep->chgQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc),64);
            tracep->chgBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush));
            tracep->chgQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
            tracep->chgIData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
            tracep->chgCData(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
            tracep->chgCData(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
            tracep->chgCData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc),64);
            tracep->chgIData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_inst),32);
            tracep->chgCData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
            tracep->chgSData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
            tracep->chgCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
            tracep->chgBit(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
            tracep->chgSData(oldp+178,((0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))),12);
            tracep->chgQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en));
            tracep->chgBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
            tracep->chgCData(oldp+183,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en));
            tracep->chgCData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
            tracep->chgQData(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgIData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
            tracep->chgCData(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result),64);
            tracep->chgBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
            tracep->chgBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en));
            tracep->chgSData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result),64);
            tracep->chgBit(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_csr_en));
            tracep->chgCData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception),5);
            tracep->chgBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception));
            tracep->chgBit(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret));
            tracep->chgQData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc),64);
            tracep->chgBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
            tracep->chgQData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_rdata),64);
            tracep->chgBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
            tracep->chgSData(oldp+211,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec),64);
            tracep->chgQData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__clint_de_io_time_irq));
            tracep->chgBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq));
            tracep->chgBit(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_soft_irq));
            tracep->chgCData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception),5);
            tracep->chgBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception));
            tracep->chgQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
            tracep->chgBit(oldp+226,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc))));
            tracep->chgWData(oldp+227,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN));
            __Vtemp4338[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]);
            __Vtemp4338[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]);
            __Vtemp4338[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]);
            __Vtemp4338[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+232,(__Vtemp4338),128);
            tracep->chgCData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A),6);
            tracep->chgWData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+245,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A),6);
            VL_EXTEND_WQ(128,56, __Vtemp4339, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_tag_io_D_T_1);
            tracep->chgWData(oldp+247,(__Vtemp4339),128);
            tracep->chgWData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN));
            tracep->chgCData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A),6);
            tracep->chgWData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+261,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A),6);
            tracep->chgQData(oldp+263,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+265,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+266,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
            tracep->chgCData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+279,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata),128);
            tracep->chgQData(oldp+289,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgQData(oldp+291,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgBit(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1));
            tracep->chgBit(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
            tracep->chgBit(oldp+295,((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+296,((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+297,((1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U])));
            tracep->chgBit(oldp+298,((1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])));
            tracep->chgQData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata1),64);
            tracep->chgQData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata2),64);
            tracep->chgCData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0),2);
            tracep->chgCData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1),2);
            tracep->chgCData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),2);
            tracep->chgCData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3),2);
            tracep->chgCData(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4),2);
            tracep->chgCData(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5),2);
            tracep->chgCData(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6),2);
            tracep->chgCData(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7),2);
            tracep->chgCData(oldp+311,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8),2);
            tracep->chgCData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9),2);
            tracep->chgCData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10),2);
            tracep->chgCData(oldp+314,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11),2);
            tracep->chgCData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12),2);
            tracep->chgCData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13),2);
            tracep->chgCData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14),2);
            tracep->chgCData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15),2);
            tracep->chgCData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16),2);
            tracep->chgCData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17),2);
            tracep->chgCData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18),2);
            tracep->chgCData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19),2);
            tracep->chgCData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20),2);
            tracep->chgCData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21),2);
            tracep->chgCData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22),2);
            tracep->chgCData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23),2);
            tracep->chgCData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24),2);
            tracep->chgCData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25),2);
            tracep->chgCData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26),2);
            tracep->chgCData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27),2);
            tracep->chgCData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28),2);
            tracep->chgCData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29),2);
            tracep->chgCData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30),2);
            tracep->chgCData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31),2);
            tracep->chgCData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32),2);
            tracep->chgCData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33),2);
            tracep->chgCData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34),2);
            tracep->chgCData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35),2);
            tracep->chgCData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36),2);
            tracep->chgCData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37),2);
            tracep->chgCData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38),2);
            tracep->chgCData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39),2);
            tracep->chgCData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40),2);
            tracep->chgCData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41),2);
            tracep->chgCData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42),2);
            tracep->chgCData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43),2);
            tracep->chgCData(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44),2);
            tracep->chgCData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45),2);
            tracep->chgCData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46),2);
            tracep->chgCData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47),2);
            tracep->chgCData(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48),2);
            tracep->chgCData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49),2);
            tracep->chgCData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50),2);
            tracep->chgCData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51),2);
            tracep->chgCData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52),2);
            tracep->chgCData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53),2);
            tracep->chgCData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54),2);
            tracep->chgCData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55),2);
            tracep->chgCData(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56),2);
            tracep->chgCData(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57),2);
            tracep->chgCData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58),2);
            tracep->chgCData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59),2);
            tracep->chgCData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60),2);
            tracep->chgCData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61),2);
            tracep->chgCData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62),2);
            tracep->chgCData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63),2);
            tracep->chgBit(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+371,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN)))));
            tracep->chgBit(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1));
            tracep->chgBit(oldp+373,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN)))));
            tracep->chgBit(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1));
            tracep->chgWData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN));
            __Vtemp4340[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp4340[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp4340[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp4340[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+380,(__Vtemp4340),128);
            tracep->chgCData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A),6);
            tracep->chgWData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+393,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+394,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_io_A),6);
            VL_EXTEND_WQ(128,56, __Vtemp4341, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_tag_io_D_T_1);
            tracep->chgWData(oldp+395,(__Vtemp4341),128);
            tracep->chgWData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN));
            tracep->chgCData(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A),6);
            tracep->chgWData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+409,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A),6);
            tracep->chgQData(oldp+411,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+413,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+414,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))),4);
            tracep->chgCData(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+422,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgQData(oldp+437,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgQData(oldp+439,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgBit(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1));
            tracep->chgBit(oldp+442,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+443,((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+445,((1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U])));
            tracep->chgBit(oldp+446,((1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])));
            tracep->chgQData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata1),64);
            tracep->chgQData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata2),64);
            tracep->chgCData(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0),2);
            tracep->chgCData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1),2);
            tracep->chgCData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),2);
            tracep->chgCData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3),2);
            tracep->chgCData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4),2);
            tracep->chgCData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5),2);
            tracep->chgCData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6),2);
            tracep->chgCData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7),2);
            tracep->chgCData(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8),2);
            tracep->chgCData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9),2);
            tracep->chgCData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10),2);
            tracep->chgCData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11),2);
            tracep->chgCData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12),2);
            tracep->chgCData(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13),2);
            tracep->chgCData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14),2);
            tracep->chgCData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15),2);
            tracep->chgCData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16),2);
            tracep->chgCData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17),2);
            tracep->chgCData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18),2);
            tracep->chgCData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19),2);
            tracep->chgCData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20),2);
            tracep->chgCData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21),2);
            tracep->chgCData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22),2);
            tracep->chgCData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23),2);
            tracep->chgCData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24),2);
            tracep->chgCData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25),2);
            tracep->chgCData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26),2);
            tracep->chgCData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27),2);
            tracep->chgCData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28),2);
            tracep->chgCData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29),2);
            tracep->chgCData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30),2);
            tracep->chgCData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31),2);
            tracep->chgCData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32),2);
            tracep->chgCData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33),2);
            tracep->chgCData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34),2);
            tracep->chgCData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35),2);
            tracep->chgCData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36),2);
            tracep->chgCData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37),2);
            tracep->chgCData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38),2);
            tracep->chgCData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39),2);
            tracep->chgCData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40),2);
            tracep->chgCData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41),2);
            tracep->chgCData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42),2);
            tracep->chgCData(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43),2);
            tracep->chgCData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44),2);
            tracep->chgCData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45),2);
            tracep->chgCData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46),2);
            tracep->chgCData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47),2);
            tracep->chgCData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48),2);
            tracep->chgCData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49),2);
            tracep->chgCData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50),2);
            tracep->chgCData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51),2);
            tracep->chgCData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52),2);
            tracep->chgCData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53),2);
            tracep->chgCData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54),2);
            tracep->chgCData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55),2);
            tracep->chgCData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56),2);
            tracep->chgCData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57),2);
            tracep->chgCData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58),2);
            tracep->chgCData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59),2);
            tracep->chgCData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60),2);
            tracep->chgCData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61),2);
            tracep->chgCData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62),2);
            tracep->chgCData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63),2);
            tracep->chgBit(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+519,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN)))));
            tracep->chgBit(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1));
            tracep->chgBit(oldp+521,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN)))));
            tracep->chgBit(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1));
            tracep->chgCData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt),2);
            tracep->chgBit(oldp+524,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))));
            tracep->chgCData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+528,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+533,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+534,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
            tracep->chgQData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
            tracep->chgIData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
            tracep->chgBit(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
            tracep->chgBit(oldp+544,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))));
            tracep->chgQData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid));
            tracep->chgBit(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+553,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid));
            tracep->chgBit(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en));
            tracep->chgQData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data),64);
            tracep->chgBit(oldp+558,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 3U))));
            tracep->chgBit(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid));
            tracep->chgBit(oldp+560,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 2U))));
            tracep->chgQData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data),64);
            tracep->chgQData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result),64);
            tracep->chgBit(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+567,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 4U))));
            tracep->chgBit(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall));
            tracep->chgQData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgCData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgCData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),5);
            tracep->chgCData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),5);
            tracep->chgBit(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgQData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data),64);
            tracep->chgQData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp4343[0U] = 1U;
            __Vtemp4343[1U] = 0U;
            __Vtemp4343[2U] = 0U;
            VL_ADD_W(3, __Vtemp4344, __Vtemp4343, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            __Vtemp4345[0U] = __Vtemp4344[0U];
            __Vtemp4345[1U] = __Vtemp4344[1U];
            __Vtemp4345[2U] = (1U & __Vtemp4344[2U]);
            tracep->chgWData(oldp+579,(__Vtemp4345),65);
            __Vtemp4347[0U] = 1U;
            __Vtemp4347[1U] = 0U;
            __Vtemp4347[2U] = 0U;
            VL_ADD_W(3, __Vtemp4348, __Vtemp4347, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            tracep->chgBit(oldp+582,((1U & (~ (1U & 
                                               __Vtemp4348[2U])))));
            tracep->chgBit(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgQData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp),64);
            tracep->chgWData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),65);
            tracep->chgBit(oldp+593,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgQData(oldp+594,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
            __Vtemp4350[0U] = (IData)((0xfffffffffffffffeULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
            __Vtemp4350[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                                       >> 0x20U));
            __Vtemp4350[2U] = 1U;
            tracep->chgWData(oldp+596,(__Vtemp4350),65);
            tracep->chgWData(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgBit(oldp+602,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+603,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgQData(oldp+605,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[0U])))),64);
            tracep->chgBit(oldp+607,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgBit(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
            tracep->chgBit(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
            tracep->chgQData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_result),64);
            tracep->chgBit(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
            tracep->chgBit(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgBit(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
            tracep->chgWData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),65);
            tracep->chgWData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),65);
            __Vtemp4352[0U] = 1U;
            __Vtemp4352[1U] = 0U;
            __Vtemp4352[2U] = 0U;
            __Vtemp4353[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp4353[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp4353[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp4354, __Vtemp4352, __Vtemp4353);
            __Vtemp4355[0U] = __Vtemp4354[0U];
            __Vtemp4355[1U] = __Vtemp4354[1U];
            __Vtemp4355[2U] = (1U & __Vtemp4354[2U]);
            tracep->chgWData(oldp+636,(__Vtemp4355),65);
            tracep->chgCData(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
            tracep->chgWData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),131);
            tracep->chgWData(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data1),130);
            tracep->chgWData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            tracep->chgWData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2),67);
            tracep->chgCData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
            tracep->chgCData(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+663,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgBit(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType));
            tracep->chgWData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp),131);
            tracep->chgWData(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data),65);
            tracep->chgQData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+686,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+710,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+714,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+718,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+726,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+730,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+734,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+738,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+742,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgQData(oldp+746,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0U]),64);
            tracep->chgCData(oldp+748,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
            tracep->chgCData(oldp+751,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
            tracep->chgCData(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgQData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgBit(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
            tracep->chgCData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+761,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+762,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_stall));
            tracep->chgCData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
            tracep->chgQData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
            tracep->chgQData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result),64);
            tracep->chgQData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgQData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__rs2_data),64);
            tracep->chgWData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data),127);
            tracep->chgQData(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr),64);
            tracep->chgBit(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq));
            tracep->chgBit(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq));
            tracep->chgBit(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush));
            tracep->chgQData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except));
            tracep->chgIData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
            tracep->chgBit(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+798,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__csr_rdata),64);
            tracep->chgQData(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgQData(oldp+817,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr),64);
            tracep->chgQData(oldp+819,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+821,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wmask),64);
            tracep->chgBit(oldp+823,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wen));
            tracep->chgQData(oldp+824,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+826,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+827,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+828,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+829,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_lo),32);
            tracep->chgIData(oldp+830,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_hi),32);
        }
        tracep->chgBit(oldp+831,(vlSelf->clock));
        tracep->chgBit(oldp+832,(vlSelf->reset));
        tracep->chgQData(oldp+833,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+835,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+837,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+839,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+841,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+843,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+845,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+847,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+849,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+851,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+853,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+855,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+857,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+859,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+861,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+863,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+865,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+867,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+869,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+871,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+873,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+875,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+877,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+879,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+881,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+883,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+885,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+887,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+889,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+891,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+893,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+895,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+897,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+899,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+900,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+901,(vlSelf->io_inst_counter),64);
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
