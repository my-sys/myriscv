// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_riscv_zhoutao_top__Syms.h"


void Vsoc_riscv_zhoutao_top___024root__traceInitSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_riscv_zhoutao_top___024root__traceInitTop(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_riscv_zhoutao_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceInitSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+64,"clk", false,-1);
        tracep->declBit(c+65,"in", false,-1);
        tracep->declBit(c+66,"reset", false,-1);
        tracep->declBit(c+67,"out", false,-1);
        tracep->declBit(c+64,"soc_riscv_zhoutao_top clk", false,-1);
        tracep->declBit(c+65,"soc_riscv_zhoutao_top in", false,-1);
        tracep->declBit(c+66,"soc_riscv_zhoutao_top reset", false,-1);
        tracep->declBit(c+67,"soc_riscv_zhoutao_top out", false,-1);
        tracep->declBit(c+64,"soc_riscv_zhoutao_top FSM_bin_1 clk", false,-1);
        tracep->declBit(c+65,"soc_riscv_zhoutao_top FSM_bin_1 in", false,-1);
        tracep->declBit(c+66,"soc_riscv_zhoutao_top FSM_bin_1 reset", false,-1);
        tracep->declBit(c+67,"soc_riscv_zhoutao_top FSM_bin_1 out", false,-1);
        tracep->declBus(c+68,"soc_riscv_zhoutao_top FSM_bin_1 S0", false,-1, 3,0);
        tracep->declBus(c+69,"soc_riscv_zhoutao_top FSM_bin_1 S1", false,-1, 3,0);
        tracep->declBus(c+70,"soc_riscv_zhoutao_top FSM_bin_1 S2", false,-1, 3,0);
        tracep->declBus(c+71,"soc_riscv_zhoutao_top FSM_bin_1 S3", false,-1, 3,0);
        tracep->declBus(c+72,"soc_riscv_zhoutao_top FSM_bin_1 S4", false,-1, 3,0);
        tracep->declBus(c+73,"soc_riscv_zhoutao_top FSM_bin_1 S5", false,-1, 3,0);
        tracep->declBus(c+74,"soc_riscv_zhoutao_top FSM_bin_1 S6", false,-1, 3,0);
        tracep->declBus(c+75,"soc_riscv_zhoutao_top FSM_bin_1 S7", false,-1, 3,0);
        tracep->declBus(c+76,"soc_riscv_zhoutao_top FSM_bin_1 S8", false,-1, 3,0);
        tracep->declBus(c+31,"soc_riscv_zhoutao_top FSM_bin_1 state_din", false,-1, 3,0);
        tracep->declBus(c+28,"soc_riscv_zhoutao_top FSM_bin_1 state_dout", false,-1, 3,0);
        tracep->declBit(c+77,"soc_riscv_zhoutao_top FSM_bin_1 state_wen", false,-1);
        tracep->declBus(c+78,"soc_riscv_zhoutao_top FSM_bin_1 state WIDTH", false,-1, 31,0);
        tracep->declBus(c+79,"soc_riscv_zhoutao_top FSM_bin_1 state RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+64,"soc_riscv_zhoutao_top FSM_bin_1 state clk", false,-1);
        tracep->declBit(c+66,"soc_riscv_zhoutao_top FSM_bin_1 state rst", false,-1);
        tracep->declBus(c+31,"soc_riscv_zhoutao_top FSM_bin_1 state din", false,-1, 3,0);
        tracep->declBus(c+28,"soc_riscv_zhoutao_top FSM_bin_1 state dout", false,-1, 3,0);
        tracep->declBit(c+77,"soc_riscv_zhoutao_top FSM_bin_1 state wen", false,-1);
        tracep->declBus(c+80,"soc_riscv_zhoutao_top FSM_bin_1 outMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+78,"soc_riscv_zhoutao_top FSM_bin_1 outMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+81,"soc_riscv_zhoutao_top FSM_bin_1 outMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+67,"soc_riscv_zhoutao_top FSM_bin_1 outMux out", false,-1, 0,0);
        tracep->declBus(c+28,"soc_riscv_zhoutao_top FSM_bin_1 outMux key", false,-1, 3,0);
        tracep->declBus(c+82,"soc_riscv_zhoutao_top FSM_bin_1 outMux default_out", false,-1, 0,0);
        tracep->declQuad(c+83,"soc_riscv_zhoutao_top FSM_bin_1 outMux lut", false,-1, 44,0);
        tracep->declBus(c+80,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+78,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+81,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+81,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+67,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 out", false,-1, 0,0);
        tracep->declBus(c+28,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 key", false,-1, 3,0);
        tracep->declBus(c+82,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 default_out", false,-1, 0,0);
        tracep->declQuad(c+83,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 lut", false,-1, 44,0);
        tracep->declBus(c+85,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+1+i*1,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+10+i*1,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+19+i*1,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+29,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+30,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 hit", false,-1);
        tracep->declBus(c+86,"soc_riscv_zhoutao_top FSM_bin_1 outMux i0 i", false,-1, 31,0);
        tracep->declBus(c+80,"soc_riscv_zhoutao_top FSM_bin_1 stateMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+78,"soc_riscv_zhoutao_top FSM_bin_1 stateMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+78,"soc_riscv_zhoutao_top FSM_bin_1 stateMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+31,"soc_riscv_zhoutao_top FSM_bin_1 stateMux out", false,-1, 3,0);
        tracep->declBus(c+28,"soc_riscv_zhoutao_top FSM_bin_1 stateMux key", false,-1, 3,0);
        tracep->declBus(c+68,"soc_riscv_zhoutao_top FSM_bin_1 stateMux default_out", false,-1, 3,0);
        tracep->declArray(c+32,"soc_riscv_zhoutao_top FSM_bin_1 stateMux lut", false,-1, 71,0);
        tracep->declBus(c+80,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+78,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+78,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+81,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+31,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 out", false,-1, 3,0);
        tracep->declBus(c+28,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 key", false,-1, 3,0);
        tracep->declBus(c+68,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 default_out", false,-1, 3,0);
        tracep->declArray(c+32,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 lut", false,-1, 71,0);
        tracep->declBus(c+87,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+35+i*1,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+44+i*1,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+53+i*1,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+62,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+63,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 hit", false,-1);
        tracep->declBus(c+86,"soc_riscv_zhoutao_top FSM_bin_1 stateMux i0 i", false,-1, 31,0);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsoc_riscv_zhoutao_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsoc_riscv_zhoutao_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsoc_riscv_zhoutao_top___024root__traceRegister(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsoc_riscv_zhoutao_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsoc_riscv_zhoutao_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsoc_riscv_zhoutao_top___024root__traceCleanup, vlSelf);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_riscv_zhoutao_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsoc_riscv_zhoutao_top___024root* const __restrict vlSelf = static_cast<Vsoc_riscv_zhoutao_top___024root*>(voidSelf);
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_riscv_zhoutao_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+2,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+3,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+4,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+5,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+6,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+7,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+8,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[7]),5);
        tracep->fullCData(oldp+9,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[8]),5);
        tracep->fullCData(oldp+10,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+11,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+12,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+13,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+14,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+15,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+16,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+17,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+18,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[8]),4);
        tracep->fullBit(oldp+19,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+20,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+21,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+22,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+23,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+24,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+25,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+26,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+27,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[8]));
        tracep->fullCData(oldp+28,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout),4);
        tracep->fullBit(oldp+29,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+30,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+31,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_din),4);
        tracep->fullWData(oldp+32,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut),72);
        tracep->fullCData(oldp+35,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+36,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+37,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+38,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+39,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+40,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[5]),8);
        tracep->fullCData(oldp+41,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[6]),8);
        tracep->fullCData(oldp+42,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[7]),8);
        tracep->fullCData(oldp+43,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[8]),8);
        tracep->fullCData(oldp+44,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+45,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+46,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+47,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+48,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+49,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+50,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+51,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+52,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+53,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+54,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+55,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+56,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+57,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+58,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[5]),4);
        tracep->fullCData(oldp+59,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[6]),4);
        tracep->fullCData(oldp+60,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[7]),4);
        tracep->fullCData(oldp+61,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[8]),4);
        tracep->fullCData(oldp+62,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+63,(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+64,(vlSelf->clk));
        tracep->fullBit(oldp+65,(vlSelf->in));
        tracep->fullBit(oldp+66,(vlSelf->reset));
        tracep->fullBit(oldp+67,(vlSelf->out));
        tracep->fullCData(oldp+68,(0U),4);
        tracep->fullCData(oldp+69,(1U),4);
        tracep->fullCData(oldp+70,(2U),4);
        tracep->fullCData(oldp+71,(3U),4);
        tracep->fullCData(oldp+72,(4U),4);
        tracep->fullCData(oldp+73,(5U),4);
        tracep->fullCData(oldp+74,(6U),4);
        tracep->fullCData(oldp+75,(7U),4);
        tracep->fullCData(oldp+76,(8U),4);
        tracep->fullBit(oldp+77,(1U));
        tracep->fullIData(oldp+78,(4U),32);
        tracep->fullIData(oldp+79,(0U),32);
        tracep->fullIData(oldp+80,(9U),32);
        tracep->fullIData(oldp+81,(1U),32);
        tracep->fullBit(oldp+82,(0U));
        tracep->fullQData(oldp+83,(0x110c9531d1ULL),45);
        tracep->fullIData(oldp+85,(5U),32);
        tracep->fullIData(oldp+86,(9U),32);
        tracep->fullIData(oldp+87,(8U),32);
    }
}
