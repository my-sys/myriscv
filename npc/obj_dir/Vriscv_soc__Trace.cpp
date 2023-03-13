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
    VlWide<4>/*127:0*/ __Vtemp4340;
    VlWide<4>/*127:0*/ __Vtemp4341;
    VlWide<4>/*127:0*/ __Vtemp4342;
    VlWide<4>/*127:0*/ __Vtemp4343;
    VlWide<3>/*95:0*/ __Vtemp4345;
    VlWide<3>/*95:0*/ __Vtemp4346;
    VlWide<3>/*95:0*/ __Vtemp4347;
    VlWide<3>/*95:0*/ __Vtemp4349;
    VlWide<3>/*95:0*/ __Vtemp4350;
    VlWide<3>/*95:0*/ __Vtemp4352;
    VlWide<3>/*95:0*/ __Vtemp4354;
    VlWide<3>/*95:0*/ __Vtemp4355;
    VlWide<3>/*95:0*/ __Vtemp4356;
    VlWide<3>/*95:0*/ __Vtemp4357;
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
            tracep->chgBit(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_irq));
            tracep->chgBit(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_peripheral));
            tracep->chgBit(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit));
            tracep->chgQData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc),64);
            tracep->chgQData(oldp+25,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+27,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgIData(oldp+29,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst),32);
            tracep->chgQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [6U]),64);
            tracep->chgQData(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [7U]),64);
            tracep->chgQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [8U]),64);
            tracep->chgQData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [9U]),64);
            tracep->chgQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xaU]),64);
            tracep->chgQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xbU]),64);
            tracep->chgQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xcU]),64);
            tracep->chgQData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xdU]),64);
            tracep->chgQData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xeU]),64);
            tracep->chgQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xfU]),64);
            tracep->chgQData(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x10U]),64);
            tracep->chgQData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x11U]),64);
            tracep->chgQData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x12U]),64);
            tracep->chgQData(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x13U]),64);
            tracep->chgQData(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x14U]),64);
            tracep->chgQData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x15U]),64);
            tracep->chgQData(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x16U]),64);
            tracep->chgQData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x17U]),64);
            tracep->chgQData(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x18U]),64);
            tracep->chgQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x19U]),64);
            tracep->chgQData(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1aU]),64);
            tracep->chgQData(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1bU]),64);
            tracep->chgQData(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1cU]),64);
            tracep->chgQData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1dU]),64);
            tracep->chgQData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1eU]),64);
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1fU]),64);
            tracep->chgQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter),64);
            tracep->chgQData(oldp+98,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid));
            tracep->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
            tracep->chgBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready));
            tracep->chgBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_b_valid));
            tracep->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
            tracep->chgQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata),64);
            tracep->chgBit(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready));
            tracep->chgBit(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
            tracep->chgQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready));
            tracep->chgBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
            tracep->chgBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
            tracep->chgQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc),64);
            tracep->chgBit(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush));
            tracep->chgQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
            tracep->chgIData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
            tracep->chgCData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
            tracep->chgCData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
            tracep->chgCData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc),64);
            tracep->chgIData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_inst),32);
            tracep->chgCData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
            tracep->chgSData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
            tracep->chgCData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
            tracep->chgBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
            tracep->chgSData(oldp+188,((0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))),12);
            tracep->chgQData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en));
            tracep->chgBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
            tracep->chgCData(oldp+193,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en));
            tracep->chgCData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
            tracep->chgQData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgIData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
            tracep->chgCData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result),64);
            tracep->chgBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
            tracep->chgBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en));
            tracep->chgSData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result),64);
            tracep->chgBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_csr_en));
            tracep->chgCData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception),5);
            tracep->chgBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception));
            tracep->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret));
            tracep->chgQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc),64);
            tracep->chgBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
            tracep->chgQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_rdata),64);
            tracep->chgBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
            tracep->chgSData(oldp+221,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec),64);
            tracep->chgQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__clint_de_io_time_irq));
            tracep->chgBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq));
            tracep->chgBit(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_soft_irq));
            tracep->chgCData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception),5);
            tracep->chgBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception));
            tracep->chgQData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
            tracep->chgQData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
            tracep->chgQData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc),64);
            tracep->chgWData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+247,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
            __Vtemp4340[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]);
            __Vtemp4340[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]);
            __Vtemp4340[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]);
            __Vtemp4340[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+248,(__Vtemp4340),128);
            tracep->chgCData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data_io_A),6);
            tracep->chgWData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q),128);
            tracep->chgCData(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A),6);
            VL_EXTEND_WQ(128,54, __Vtemp4341, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
            tracep->chgWData(oldp+262,(__Vtemp4341),128);
            tracep->chgWData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+270,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write)))));
            tracep->chgCData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A),6);
            tracep->chgWData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q),128);
            tracep->chgCData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A),6);
            tracep->chgQData(oldp+277,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+279,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+280,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
            tracep->chgCData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+308,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+310,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+317,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+319,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0));
            tracep->chgBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
            tracep->chgBit(oldp+323,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+324,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+325,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+326,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata0),64);
            tracep->chgQData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata2),64);
            tracep->chgQData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+333,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish));
            tracep->chgWData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+342,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
            __Vtemp4342[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp4342[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp4342[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp4342[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+343,(__Vtemp4342),128);
            tracep->chgCData(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data_io_A),6);
            tracep->chgWData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q),128);
            tracep->chgCData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A),6);
            VL_EXTEND_WQ(128,54, __Vtemp4343, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+357,(__Vtemp4343),128);
            tracep->chgWData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+365,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
            tracep->chgCData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A),6);
            tracep->chgWData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q),128);
            tracep->chgQData(oldp+371,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+373,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+374,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))),4);
            tracep->chgCData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+402,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+404,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+411,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[0U]))))),54);
            tracep->chgQData(oldp+413,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U]))))),54);
            tracep->chgBit(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+417,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+418,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+419,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+420,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata0),64);
            tracep->chgQData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata2),64);
            tracep->chgQData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+427,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt),2);
            tracep->chgBit(oldp+433,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))));
            tracep->chgCData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+437,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+442,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+443,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
            tracep->chgQData(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
            tracep->chgIData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
            tracep->chgBit(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
            tracep->chgBit(oldp+453,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))));
            tracep->chgQData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+458,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid));
            tracep->chgBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+462,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_rs1_data),64);
            tracep->chgBit(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid));
            tracep->chgBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en));
            tracep->chgQData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data),64);
            tracep->chgBit(oldp+469,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 3U))));
            tracep->chgBit(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid));
            tracep->chgBit(oldp+471,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 2U))));
            tracep->chgQData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data),64);
            tracep->chgQData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data),64);
            tracep->chgQData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result),64);
            tracep->chgBit(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+480,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 4U))));
            tracep->chgQData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgCData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgCData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),5);
            tracep->chgCData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),5);
            tracep->chgBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgQData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data),64);
            tracep->chgQData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp4345[0U] = 1U;
            __Vtemp4345[1U] = 0U;
            __Vtemp4345[2U] = 0U;
            VL_ADD_W(3, __Vtemp4346, __Vtemp4345, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            __Vtemp4347[0U] = __Vtemp4346[0U];
            __Vtemp4347[1U] = __Vtemp4346[1U];
            __Vtemp4347[2U] = (1U & __Vtemp4346[2U]);
            tracep->chgWData(oldp+491,(__Vtemp4347),65);
            __Vtemp4349[0U] = 1U;
            __Vtemp4349[1U] = 0U;
            __Vtemp4349[2U] = 0U;
            VL_ADD_W(3, __Vtemp4350, __Vtemp4349, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            tracep->chgBit(oldp+494,((1U & (~ (1U & 
                                               __Vtemp4350[2U])))));
            tracep->chgBit(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgQData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp),64);
            tracep->chgWData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),65);
            tracep->chgBit(oldp+505,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgQData(oldp+506,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
            __Vtemp4352[0U] = (IData)((0xfffffffffffffffeULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
            __Vtemp4352[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                                       >> 0x20U));
            __Vtemp4352[2U] = 1U;
            tracep->chgWData(oldp+508,(__Vtemp4352),65);
            tracep->chgWData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgBit(oldp+514,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+515,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgQData(oldp+517,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[0U])))),64);
            tracep->chgBit(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgBit(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
            tracep->chgBit(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
            tracep->chgQData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_result),64);
            tracep->chgBit(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
            tracep->chgBit(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgBit(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
            tracep->chgWData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),65);
            tracep->chgWData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),65);
            __Vtemp4354[0U] = 1U;
            __Vtemp4354[1U] = 0U;
            __Vtemp4354[2U] = 0U;
            __Vtemp4355[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp4355[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp4355[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp4356, __Vtemp4354, __Vtemp4355);
            __Vtemp4357[0U] = __Vtemp4356[0U];
            __Vtemp4357[1U] = __Vtemp4356[1U];
            __Vtemp4357[2U] = (1U & __Vtemp4356[2U]);
            tracep->chgWData(oldp+548,(__Vtemp4357),65);
            tracep->chgCData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
            tracep->chgWData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),131);
            tracep->chgWData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data1),130);
            tracep->chgWData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            tracep->chgWData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2),67);
            tracep->chgCData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
            tracep->chgCData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgBit(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType));
            tracep->chgWData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp),131);
            tracep->chgWData(oldp+591,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data),65);
            tracep->chgQData(oldp+594,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+606,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+618,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+634,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+646,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+650,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgQData(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0U]),64);
            tracep->chgCData(oldp+660,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
            tracep->chgCData(oldp+663,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
            tracep->chgCData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgQData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgBit(oldp+671,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
            tracep->chgCData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+673,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_stall));
            tracep->chgBit(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush));
            tracep->chgCData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+679,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
            tracep->chgQData(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
            tracep->chgQData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result),64);
            tracep->chgQData(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+687,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgQData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__rs2_data),64);
            tracep->chgWData(oldp+690,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data),127);
            tracep->chgBit(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__test_is_peripheral));
            tracep->chgBit(oldp+695,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))));
            tracep->chgQData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr),64);
            tracep->chgBit(oldp+698,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq));
            tracep->chgBit(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq));
            tracep->chgBit(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_irq));
            tracep->chgBit(oldp+702,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except));
            tracep->chgBit(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq));
            tracep->chgBit(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq));
            tracep->chgIData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
            tracep->chgBit(oldp+706,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__csr_rdata),64);
            tracep->chgQData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+724,((0U == (0xffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
            tracep->chgBit(oldp+725,((0x30U == (0xffU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
            tracep->chgQData(oldp+726,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr),64);
            tracep->chgQData(oldp+728,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+730,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wmask),64);
            tracep->chgBit(oldp+732,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wen));
            tracep->chgQData(oldp+733,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+735,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+736,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+737,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+738,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_lo),32);
            tracep->chgIData(oldp+739,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_hi),32);
        }
        tracep->chgBit(oldp+740,(vlSelf->clock));
        tracep->chgBit(oldp+741,(vlSelf->reset));
        tracep->chgQData(oldp+742,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+744,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+746,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+748,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+750,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+752,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+754,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+756,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+758,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+760,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+762,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+764,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+766,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+768,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+770,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+772,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+774,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+776,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+778,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+780,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+782,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+784,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+786,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+788,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+790,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+792,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+794,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+796,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+798,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+800,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+802,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+804,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+806,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+808,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+809,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+810,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+812,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+813,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+815,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+817,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+819,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+821,(vlSelf->io_difftest_peripheral));
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
